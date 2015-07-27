﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// OneSignal/NotificationReceived
#include "AssemblyU2DCSharp_OneSignal_NotificationReceived.h"
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
// OneSignal/NotificationReceived
#include "AssemblyU2DCSharp_OneSignal_NotificationReceivedMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void OneSignal/NotificationReceived::.ctor(System.Object,System.IntPtr)
extern "C" void NotificationReceived__ctor_m1833 (NotificationReceived_t345 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/NotificationReceived::Invoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C" void NotificationReceived_Invoke_m1834 (NotificationReceived_t345 * __this, String_t* ___message, Dictionary_2_t270 * ___additionalData, bool ___isActive, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NotificationReceived_Invoke_m1834((NotificationReceived_t345 *)__this->___prev_9,___message, ___additionalData, ___isActive, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___message, Dictionary_2_t270 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___message, Dictionary_2_t270 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Dictionary_2_t270 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult OneSignal/NotificationReceived::BeginInvoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * NotificationReceived_BeginInvoke_m1835 (NotificationReceived_t345 * __this, String_t* ___message, Dictionary_2_t270 * ___additionalData, bool ___isActive, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___message;
	__d_args[1] = ___additionalData;
	__d_args[2] = Box(Boolean_t29_il2cpp_TypeInfo_var, &___isActive);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/NotificationReceived::EndInvoke(System.IAsyncResult)
extern "C" void NotificationReceived_EndInvoke_m1836 (NotificationReceived_t345 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// OneSignal/IdsAvailable
#include "AssemblyU2DCSharp_OneSignal_IdsAvailable.h"
#ifndef _MSC_VER
#else
#endif
// OneSignal/IdsAvailable
#include "AssemblyU2DCSharp_OneSignal_IdsAvailableMethodDeclarations.h"



// System.Void OneSignal/IdsAvailable::.ctor(System.Object,System.IntPtr)
extern "C" void IdsAvailable__ctor_m1837 (IdsAvailable_t334 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String)
extern "C" void IdsAvailable_Invoke_m1838 (IdsAvailable_t334 * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		IdsAvailable_Invoke_m1838((IdsAvailable_t334 *)__this->___prev_9,___playerID, ___pushToken, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___playerID, ___pushToken,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___playerID, ___pushToken,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___pushToken, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___playerID, ___pushToken,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_IdsAvailable_t334(Il2CppObject* delegate, String_t* ___playerID, String_t* ___pushToken)
{
	typedef void (STDCALL *native_function_ptr_type)(char*, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___playerID' to native representation
	char* ____playerID_marshaled = { 0 };
	____playerID_marshaled = il2cpp_codegen_marshal_string(___playerID);

	// Marshaling of parameter '___pushToken' to native representation
	char* ____pushToken_marshaled = { 0 };
	____pushToken_marshaled = il2cpp_codegen_marshal_string(___pushToken);

	// Native function invocation
	_il2cpp_pinvoke_func(____playerID_marshaled, ____pushToken_marshaled);

	// Marshaling cleanup of parameter '___playerID' native representation
	il2cpp_codegen_marshal_free(____playerID_marshaled);
	____playerID_marshaled = NULL;

	// Marshaling cleanup of parameter '___pushToken' native representation
	il2cpp_codegen_marshal_free(____pushToken_marshaled);
	____pushToken_marshaled = NULL;

}
// System.IAsyncResult OneSignal/IdsAvailable::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * IdsAvailable_BeginInvoke_m1839 (IdsAvailable_t334 * __this, String_t* ___playerID, String_t* ___pushToken, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___playerID;
	__d_args[1] = ___pushToken;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/IdsAvailable::EndInvoke(System.IAsyncResult)
extern "C" void IdsAvailable_EndInvoke_m1840 (IdsAvailable_t334 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// OneSignal/TagsReceived
#include "AssemblyU2DCSharp_OneSignal_TagsReceived.h"
#ifndef _MSC_VER
#else
#endif
// OneSignal/TagsReceived
#include "AssemblyU2DCSharp_OneSignal_TagsReceivedMethodDeclarations.h"



// System.Void OneSignal/TagsReceived::.ctor(System.Object,System.IntPtr)
extern "C" void TagsReceived__ctor_m1841 (TagsReceived_t347 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void TagsReceived_Invoke_m1842 (TagsReceived_t347 * __this, Dictionary_2_t270 * ___tags, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TagsReceived_Invoke_m1842((TagsReceived_t347 *)__this->___prev_9,___tags, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Dictionary_2_t270 * ___tags, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Dictionary_2_t270 * ___tags, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult OneSignal/TagsReceived::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
extern "C" Object_t * TagsReceived_BeginInvoke_m1843 (TagsReceived_t347 * __this, Dictionary_2_t270 * ___tags, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___tags;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/TagsReceived::EndInvoke(System.IAsyncResult)
extern "C" void TagsReceived_EndInvoke_m1844 (TagsReceived_t347 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// OneSignal
#include "AssemblyU2DCSharp_OneSignal.h"
#ifndef _MSC_VER
#else
#endif
// OneSignal
#include "AssemblyU2DCSharp_OneSignalMethodDeclarations.h"

// OneSignal/LOG_LEVEL
#include "AssemblyU2DCSharp_OneSignal_LOG_LEVEL.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Double
#include "mscorlib_System_Double.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// OneSignalPush.MiniJSON.Json
#include "AssemblyU2DCSharp_OneSignalPush_MiniJSON_JsonMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
struct GameObject_t310;
struct OneSignal_t337;
struct GameObject_t310;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m3262_gshared (GameObject_t310 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m3262(__this, method) (( Object_t * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<OneSignal>()
// !!0 UnityEngine.GameObject::AddComponent<OneSignal>()
#define GameObject_AddComponent_TisOneSignal_t337_m3394(__this, method) (( OneSignal_t337 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)


// System.Void OneSignal::.ctor()
extern "C" void OneSignal__ctor_m1845 (OneSignal_t337 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::.cctor()
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern "C" void OneSignal__cctor_m1846 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___logLevel_5 = 4;
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived,System.Boolean)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisOneSignal_t337_m3394_MethodInfo_var;
extern "C" void OneSignal_Init_m1847 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t345 * ___inNotificationDelegate, bool ___autoRegister, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		GameObject_AddComponent_TisOneSignal_t337_m3394_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484030);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t310 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		bool L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___initialized_8;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NotificationReceived_t345 * L_1 = ___inNotificationDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9 = L_1;
		GameObject_t310 * L_2 = (GameObject_t310 *)il2cpp_codegen_object_new (GameObject_t310_il2cpp_TypeInfo_var);
		GameObject__ctor_m3263(L_2, (String_t*) &_stringLiteral701, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t310 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_AddComponent_TisOneSignal_t337_m3394(L_3, /*hidden argument*/GameObject_AddComponent_TisOneSignal_t337_m3394_MethodInfo_var);
		GameObject_t310 * L_4 = V_0;
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___initialized_8 = 1;
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m1848 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t345 * ___inNotificationDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		String_t* L_1 = ___googleProjectNumber;
		NotificationReceived_t345 * L_2 = ___inNotificationDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		OneSignal_Init_m1847(NULL /*static, unused*/, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m1849 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		String_t* L_1 = ___googleProjectNumber;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		OneSignal_Init_m1847(NULL /*static, unused*/, L_0, L_1, (NotificationReceived_t345 *)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::Init(System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m1850 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		OneSignal_Init_m1847(NULL /*static, unused*/, L_0, (String_t*)NULL, (NotificationReceived_t345 *)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SetLogLevel_m1851 (Object_t * __this /* static, unused */, int32_t ___inLogLevel, int32_t ___inVisualLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___inLogLevel;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___logLevel_5 = L_0;
		int32_t L_1 = ___inVisualLevel;
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___visualLogLevel_6 = L_1;
		return;
	}
}
// System.Void OneSignal::SendTag(System.String,System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SendTag_m1852 (Object_t * __this /* static, unused */, String_t* ___tagName, String_t* ___tagValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_1 = ___tagName;
		String_t* L_2 = ___tagValue;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(2 /* System.Void OneSignalPlatform::SendTag(System.String,System.String) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void OneSignal::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SendTags_m1853 (Object_t * __this /* static, unused */, Object_t* ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		Object_t* L_1 = ___tags;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t* >::Invoke(3 /* System.Void OneSignalPlatform::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetTags_m1854 (Object_t * __this /* static, unused */, TagsReceived_t347 * ___inTagsReceivedDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		TagsReceived_t347 * L_0 = ___inTagsReceivedDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___tagsReceivedDelegate_4 = L_0;
		Object_t * L_1 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void OneSignalPlatform::GetTags() */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void OneSignal::GetTags()
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetTags_m1855 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void OneSignalPlatform::GetTags() */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::DeleteTag(System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_DeleteTag_m1856 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_1 = ___key;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void OneSignalPlatform::DeleteTag(System.String) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_DeleteTags_m1857 (Object_t * __this /* static, unused */, Object_t* ___keys, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		Object_t* L_1 = ___keys;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t* >::Invoke(6 /* System.Void OneSignalPlatform::DeleteTags(System.Collections.Generic.IList`1<System.String>) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::SendPurchase(System.Double)
extern "C" void OneSignal_SendPurchase_m1858 (Object_t * __this /* static, unused */, double ___amount, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::RegisterForPushNotifications()
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_RegisterForPushNotifications_m1859 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void OneSignalPlatform::RegisterForPushNotifications() */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::GetIdsAvailable(OneSignal/IdsAvailable)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetIdsAvailable_m1860 (Object_t * __this /* static, unused */, IdsAvailable_t334 * ___inIdsAvailableDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IdsAvailable_t334 * L_0 = ___inIdsAvailableDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3 = L_0;
		Object_t * L_1 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8 /* System.Void OneSignalPlatform::IdsAvailable() */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void OneSignal::GetIdsAvailable()
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetIdsAvailable_m1861 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void OneSignalPlatform::IdsAvailable() */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::EnableVibrate(System.Boolean)
extern "C" void OneSignal_EnableVibrate_m1862 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::EnableSound(System.Boolean)
extern "C" void OneSignal_EnableSound_m1863 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::onPushNotificationReceived(System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onPushNotificationReceived_m1864 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		NotificationReceived_t345 * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_2 = ___jsonString;
		NotificationReceived_t345 * L_3 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, NotificationReceived_t345 * >::Invoke(9 /* System.Void OneSignalPlatform::FireNotificationReceivedEvent(System.String,OneSignal/NotificationReceived) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.Void OneSignal::onIdsAvailable(System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onIdsAvailable_m1865 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		IdsAvailable_t334 * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_1 = ___jsonString;
		Object_t * L_2 = Json_Deserialize_m1831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)IsInst(L_2, Dictionary_2_t270_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		IdsAvailable_t334 * L_3 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3;
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral702);
		Dictionary_2_t270 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral703);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String) */, L_3, ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var)));
	}

IL_0040:
	{
		return;
	}
}
// System.Void OneSignal::onTagsReceived(System.String)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onTagsReceived_m1866 (OneSignal_t337 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		TagsReceived_t347 * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___tagsReceivedDelegate_4;
		String_t* L_1 = ___jsonString;
		Object_t * L_2 = Json_Deserialize_m1831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Dictionary_2_t270 * >::Invoke(10 /* System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, ((Dictionary_2_t270 *)IsInst(L_2, Dictionary_2_t270_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void OneSignal::OnApplicationPause(System.Boolean)
extern TypeInfo* OneSignal_t337_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t348_il2cpp_TypeInfo_var;
extern "C" void OneSignal_OnApplicationPause_m1867 (OneSignal_t337 * __this, bool ___paused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t337_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(302);
		OneSignalPlatform_t348_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(306);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t337_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t337_StaticFields*)OneSignal_t337_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		bool L_1 = ___paused;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void OneSignalPlatform::OnApplicationPause(System.Boolean) */, OneSignalPlatform_t348_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD
#include "AssemblyU2DCSharp_SA_ScreenShotMaker_U3CSaveScreenshotU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD
#include "AssemblyU2DCSharp_SA_ScreenShotMaker_U3CSaveScreenshotU3Ec__MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.Single
#include "mscorlib_System_Single.h"
// SA_ScreenShotMaker
#include "AssemblyU2DCSharp_SA_ScreenShotMaker.h"
// System.Action`1<UnityEngine.Texture2D>
#include "mscorlib_System_Action_1_gen_1.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// UnityEngine.WaitForEndOfFrame
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
// UnityEngine.Screen
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// System.Action`1<UnityEngine.Texture2D>
#include "mscorlib_System_Action_1_gen_1MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::.ctor()
extern "C" void U3CSaveScreenshotU3Ec__IteratorD__ctor_m1868 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSaveScreenshotU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1869 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSaveScreenshotU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m1870 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t604_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t65_il2cpp_TypeInfo_var;
extern "C" bool U3CSaveScreenshotU3Ec__IteratorD_MoveNext_m1871 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(102);
		Texture2D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
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
		goto IL_00c9;
	}

IL_0021:
	{
		WaitForEndOfFrame_t604 * L_2 = (WaitForEndOfFrame_t604 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t604_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3101(L_2, /*hidden argument*/NULL);
		__this->___U24current_4 = L_2;
		__this->___U24PC_3 = 1;
		goto IL_00cb;
	}

IL_0038:
	{
		int32_t L_3 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CwidthU3E__0_0 = L_3;
		int32_t L_4 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CheightU3E__1_1 = L_4;
		int32_t L_5 = (__this->___U3CwidthU3E__0_0);
		int32_t L_6 = (__this->___U3CheightU3E__1_1);
		Texture2D_t65 * L_7 = (Texture2D_t65 *)il2cpp_codegen_object_new (Texture2D_t65_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3102(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtexU3E__2_2 = L_7;
		Texture2D_t65 * L_8 = (__this->___U3CtexU3E__2_2);
		int32_t L_9 = (__this->___U3CwidthU3E__0_0);
		int32_t L_10 = (__this->___U3CheightU3E__1_1);
		Rect_t594  L_11 = {0};
		Rect__ctor_m3085(&L_11, (0.0f), (0.0f), (((float)L_9)), (((float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m3103(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		Texture2D_t65 * L_12 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_12);
		Texture2D_Apply_m3104(L_12, /*hidden argument*/NULL);
		SA_ScreenShotMaker_t349 * L_13 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_13);
		Action_1_t226 * L_14 = (L_13->___OnScreenshotReady_6);
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		SA_ScreenShotMaker_t349 * L_15 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_15);
		Action_1_t226 * L_16 = (L_15->___OnScreenshotReady_6);
		Texture2D_t65 * L_17 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_16);
		VirtActionInvoker1< Texture2D_t65 * >::Invoke(10 /* System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0) */, L_16, L_17);
	}

IL_00c2:
	{
		__this->___U24PC_3 = (-1);
	}

IL_00c9:
	{
		return 0;
	}

IL_00cb:
	{
		return 1;
	}
	// Dead block : IL_00cd: ldloc.1
}
// System.Void SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::Dispose()
extern "C" void U3CSaveScreenshotU3Ec__IteratorD_Dispose_m1872 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CSaveScreenshotU3Ec__IteratorD_Reset_m1873 (U3CSaveScreenshotU3Ec__IteratorD_t350 * __this, const MethodInfo* method)
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
// SA_ScreenShotMaker
#include "AssemblyU2DCSharp_SA_ScreenShotMakerMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// SA_Singleton`1<SA_ScreenShotMaker>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_9MethodDeclarations.h"


// System.Void SA_ScreenShotMaker::.ctor()
extern TypeInfo* SA_Singleton_1_t351_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3395_MethodInfo_var;
extern "C" void SA_ScreenShotMaker__ctor_m1874 (SA_ScreenShotMaker_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(308);
		SA_Singleton_1__ctor_m3395_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484031);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t351_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3395(__this, /*hidden argument*/SA_Singleton_1__ctor_m3395_MethodInfo_var);
		return;
	}
}
// System.Void SA_ScreenShotMaker::GetScreenshot()
extern "C" void SA_ScreenShotMaker_GetScreenshot_m1875 (SA_ScreenShotMaker_t349 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = SA_ScreenShotMaker_SaveScreenshot_m1876(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3122(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SA_ScreenShotMaker::SaveScreenshot()
extern TypeInfo* U3CSaveScreenshotU3Ec__IteratorD_t350_il2cpp_TypeInfo_var;
extern "C" Object_t * SA_ScreenShotMaker_SaveScreenshot_m1876 (SA_ScreenShotMaker_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSaveScreenshotU3Ec__IteratorD_t350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(309);
		s_Il2CppMethodIntialized = true;
	}
	U3CSaveScreenshotU3Ec__IteratorD_t350 * V_0 = {0};
	{
		U3CSaveScreenshotU3Ec__IteratorD_t350 * L_0 = (U3CSaveScreenshotU3Ec__IteratorD_t350 *)il2cpp_codegen_object_new (U3CSaveScreenshotU3Ec__IteratorD_t350_il2cpp_TypeInfo_var);
		U3CSaveScreenshotU3Ec__IteratorD__ctor_m1868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSaveScreenshotU3Ec__IteratorD_t350 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_5 = __this;
		U3CSaveScreenshotU3Ec__IteratorD_t350 * L_2 = V_0;
		return L_2;
	}
}
// DefaultPreviewButton
#include "AssemblyU2DCSharp_DefaultPreviewButton.h"
#ifndef _MSC_VER
#else
#endif
// DefaultPreviewButton
#include "AssemblyU2DCSharp_DefaultPreviewButtonMethodDeclarations.h"

// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMesh.h"
#include "UnityEngine_ArrayTypes.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_Renderer.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"
// UnityEngine.Texture
#include "UnityEngine_UnityEngine_Texture.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcher.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.TextMesh
#include "UnityEngine_UnityEngine_TextMeshMethodDeclarations.h"
// UnionAssets.FLE.EventDispatcher
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventDispatcherMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// UnityEngine.Renderer
#include "UnityEngine_UnityEngine_RendererMethodDeclarations.h"
// UnityEngine.Material
#include "UnityEngine_UnityEngine_MaterialMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Physics
#include "UnityEngine_UnityEngine_PhysicsMethodDeclarations.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHitMethodDeclarations.h"
struct GameObject_t310;
struct TextMesh_t361;
struct GameObject_t310;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" Object_t * GameObject_GetComponentInChildren_TisObject_t_m3397_gshared (GameObject_t310 * __this, const MethodInfo* method);
#define GameObject_GetComponentInChildren_TisObject_t_m3397(__this, method) (( Object_t * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m3397_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
#define GameObject_GetComponentInChildren_TisTextMesh_t361_m3396(__this, method) (( TextMesh_t361 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m3397_gshared)(__this, method)
struct GameObject_t310;
struct TextMeshU5BU5D_t658;
struct GameObject_t310;
struct ObjectU5BU5D_t581;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t581* GameObject_GetComponentsInChildren_TisObject_t_m3399_gshared (GameObject_t310 * __this, const MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m3399(__this, method) (( ObjectU5BU5D_t581* (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3399_gshared)(__this, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.TextMesh>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.TextMesh>()
#define GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398(__this, method) (( TextMeshU5BU5D_t658* (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3399_gshared)(__this, method)
struct Component_t659;
struct AudioSource_t471;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t659;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m3401_gshared (Component_t659 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m3401(__this, method) (( Object_t * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t471_m3400(__this, method) (( AudioSource_t471 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)
struct GameObject_t310;
struct AudioSource_t471;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t471_m3402(__this, method) (( AudioSource_t471 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)
struct Component_t659;
struct Renderer_t593;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t593_m3403(__this, method) (( Renderer_t593 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void DefaultPreviewButton::.ctor()
extern "C" void DefaultPreviewButton__ctor_m1877 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::Awake()
extern TypeInfo* Material_t438_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t471_m3402_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void DefaultPreviewButton_Awake_m1878 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484032);
		GameObject_AddComponent_TisAudioSource_t471_m3402_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484033);
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t471 * L_0 = Component_GetComponent_TisAudioSource_t471_m3400(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var);
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisAudioSource_t471_m3402(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t471_m3402_MethodInfo_var);
		AudioSource_t471 * L_3 = Component_GetComponent_TisAudioSource_t471_m3400(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var);
		AudioClip_t353 * L_4 = (__this->___sound_9);
		NullCheck(L_3);
		AudioSource_set_clip_m3404(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t471 * L_5 = Component_GetComponent_TisAudioSource_t471_m3400(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var);
		NullCheck(L_5);
		AudioSource_Stop_m3405(L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		Renderer_t593 * L_6 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		Renderer_t593 * L_7 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_7);
		Material_t438 * L_8 = Renderer_get_material_m3406(L_7, /*hidden argument*/NULL);
		Material_t438 * L_9 = (Material_t438 *)il2cpp_codegen_object_new (Material_t438_il2cpp_TypeInfo_var);
		Material__ctor_m3407(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Renderer_set_material_m3408(L_6, L_9, /*hidden argument*/NULL);
		Texture_t352 * L_10 = (__this->___normalTexture_4);
		__this->___normalTex_8 = L_10;
		return;
	}
}
// System.Void DefaultPreviewButton::Select()
extern "C" void DefaultPreviewButton_Select_m1879 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	{
		Texture_t352 * L_0 = (__this->___selectedTexture_7);
		__this->___normalTexture_4 = L_0;
		DefaultPreviewButton_OnTimeoutPress_m1887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::Unselect()
extern "C" void DefaultPreviewButton_Unselect_m1880 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	{
		Texture_t352 * L_0 = (__this->___normalTex_8);
		__this->___normalTexture_4 = L_0;
		DefaultPreviewButton_OnTimeoutPress_m1887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::DisabledButton()
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void DefaultPreviewButton_DisabledButton_m1881 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t352 * L_0 = (__this->___disabledTexture_6);
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Renderer_t593 * L_2 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_2);
		Material_t438 * L_3 = Renderer_get_material_m3406(L_2, /*hidden argument*/NULL);
		Texture_t352 * L_4 = (__this->___disabledTexture_6);
		NullCheck(L_3);
		Material_set_mainTexture_m3409(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		__this->___IsDisabled_11 = 1;
		return;
	}
}
// System.Void DefaultPreviewButton::EnabledButton()
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void DefaultPreviewButton_EnabledButton_m1882 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t352 * L_0 = (__this->___disabledTexture_6);
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Renderer_t593 * L_2 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_2);
		Material_t438 * L_3 = Renderer_get_material_m3406(L_2, /*hidden argument*/NULL);
		Texture_t352 * L_4 = (__this->___normalTexture_4);
		NullCheck(L_3);
		Material_set_mainTexture_m3409(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		__this->___IsDisabled_11 = 0;
		return;
	}
}
// System.String DefaultPreviewButton::get_text()
extern const MethodInfo* GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var;
extern "C" String_t* DefaultPreviewButton_get_text_m1883 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	TextMesh_t361 * V_0 = {0};
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMesh_t361 * L_1 = GameObject_GetComponentInChildren_TisTextMesh_t361_m3396(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var);
		V_0 = L_1;
		TextMesh_t361 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = TextMesh_get_text_m3410(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DefaultPreviewButton::set_text(System.String)
extern const MethodInfo* GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var;
extern "C" void DefaultPreviewButton_set_text_m1884 (DefaultPreviewButton_t307 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		s_Il2CppMethodIntialized = true;
	}
	TextMeshU5BU5D_t658* V_0 = {0};
	TextMesh_t361 * V_1 = {0};
	TextMeshU5BU5D_t658* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMeshU5BU5D_t658* L_1 = GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var);
		V_0 = L_1;
		TextMeshU5BU5D_t658* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0015:
	{
		TextMeshU5BU5D_t658* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(TextMesh_t361 **)(TextMesh_t361 **)SZArrayLdElema(L_3, L_5));
		TextMesh_t361 * L_6 = V_1;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		TextMesh_set_text_m3411(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_3;
		TextMeshU5BU5D_t658* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void DefaultPreviewButton::Update()
extern TypeInfo* Input_t603_il2cpp_TypeInfo_var;
extern "C" void DefaultPreviewButton_Update_m1885 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t603_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t660  V_0 = {0};
	RaycastHit_t661  V_1 = {0};
	{
		Camera_t479 * L_0 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t603_il2cpp_TypeInfo_var);
		Vector3_t449  L_1 = Input_get_mousePosition_m3413(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t660  L_2 = Camera_ScreenPointToRay_m3414(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = Input_GetMouseButtonDown_m3415(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Ray_t660  L_4 = V_0;
		bool L_5 = Physics_Raycast_m3416(NULL /*static, unused*/, L_4, (&V_1), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		Transform_t364 * L_6 = RaycastHit_get_transform_m3417((&V_1), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t310 * L_7 = Component_get_gameObject_m3159(L_6, /*hidden argument*/NULL);
		GameObject_t310 * L_8 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		bool L_9 = Object_op_Equality_m3185(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		VirtActionInvoker0::Invoke(22 /* System.Void DefaultPreviewButton::OnClick() */, __this);
	}

IL_004f:
	{
		return;
	}
}
// System.Void DefaultPreviewButton::OnClick()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void DefaultPreviewButton_OnClick_m1886 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484032);
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___IsDisabled_11);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		AudioSource_t471 * L_1 = Component_GetComponent_TisAudioSource_t471_m3400(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var);
		AudioClip_t353 * L_2 = (__this->___disabledsound_10);
		NullCheck(L_1);
		AudioSource_PlayOneShot_m3418(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		AudioSource_t471 * L_3 = Component_GetComponent_TisAudioSource_t471_m3400(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t471_m3400_MethodInfo_var);
		AudioClip_t353 * L_4 = (__this->___sound_9);
		NullCheck(L_3);
		AudioSource_PlayOneShot_m3418(L_3, L_4, /*hidden argument*/NULL);
		Renderer_t593 * L_5 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_5);
		Material_t438 * L_6 = Renderer_get_material_m3406(L_5, /*hidden argument*/NULL);
		Texture_t352 * L_7 = (__this->___pressedTexture_5);
		NullCheck(L_6);
		Material_set_mainTexture_m3409(L_6, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral140);
		MonoBehaviour_CancelInvoke_m3419(__this, (String_t*) &_stringLiteral704, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m3420(__this, (String_t*) &_stringLiteral704, (0.1f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::OnTimeoutPress()
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void DefaultPreviewButton_OnTimeoutPress_m1887 (DefaultPreviewButton_t307 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t593 * L_0 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_0);
		Material_t438 * L_1 = Renderer_get_material_m3406(L_0, /*hidden argument*/NULL);
		Texture_t352 * L_2 = (__this->___normalTexture_4);
		NullCheck(L_1);
		Material_set_mainTexture_m3409(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// SALevelLoader
#include "AssemblyU2DCSharp_SALevelLoader.h"
#ifndef _MSC_VER
#else
#endif
// SALevelLoader
#include "AssemblyU2DCSharp_SALevelLoaderMethodDeclarations.h"

// SA_Singleton`1<SALevelLoader>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_10MethodDeclarations.h"
// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void SALevelLoader::.ctor()
extern TypeInfo* SA_Singleton_1_t355_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3421_MethodInfo_var;
extern "C" void SALevelLoader__ctor_m1888 (SALevelLoader_t354 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		SA_Singleton_1__ctor_m3421_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484037);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t355_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3421(__this, /*hidden argument*/SA_Singleton_1__ctor_m3421_MethodInfo_var);
		return;
	}
}
// System.Void SALevelLoader::Awake()
extern "C" void SALevelLoader_Awake_m1889 (SALevelLoader_t354 * __this, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALevelLoader::LoadLevel(System.String)
extern "C" void SALevelLoader_LoadLevel_m1890 (SALevelLoader_t354 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevel_m3422(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALevelLoader::Restart()
extern "C" void SALevelLoader_Restart_m1891 (SALevelLoader_t354 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Application_get_loadedLevelName_m3158(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m3422(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// SALoadedSceneOnClick
#include "AssemblyU2DCSharp_SALoadedSceneOnClick.h"
#ifndef _MSC_VER
#else
#endif
// SALoadedSceneOnClick
#include "AssemblyU2DCSharp_SALoadedSceneOnClickMethodDeclarations.h"

// SAOnClickAction
#include "AssemblyU2DCSharp_SAOnClickActionMethodDeclarations.h"


// System.Void SALoadedSceneOnClick::.ctor()
extern "C" void SALoadedSceneOnClick__ctor_m1892 (SALoadedSceneOnClick_t356 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m1894(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALoadedSceneOnClick::OnClick()
extern TypeInfo* SA_Singleton_1_t355_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3423_MethodInfo_var;
extern "C" void SALoadedSceneOnClick_OnClick_m1893 (SALoadedSceneOnClick_t356 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		SA_Singleton_1_get_instance_m3423_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t355_il2cpp_TypeInfo_var);
		SALevelLoader_t354 * L_0 = SA_Singleton_1_get_instance_m3423(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3423_MethodInfo_var);
		String_t* L_1 = (__this->___levelName_2);
		NullCheck(L_0);
		SALevelLoader_LoadLevel_m1890(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// SAOnClickAction
#include "AssemblyU2DCSharp_SAOnClickAction.h"
#ifndef _MSC_VER
#else
#endif

// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunction.h"
// UnionAssets.FLE.EventHandlerFunction
#include "AssemblyU2DCSharp_UnionAssets_FLE_EventHandlerFunctionMethodDeclarations.h"
struct Component_t659;
struct DefaultPreviewButton_t307;
// Declaration !!0 UnityEngine.Component::GetComponent<DefaultPreviewButton>()
// !!0 UnityEngine.Component::GetComponent<DefaultPreviewButton>()
#define Component_GetComponent_TisDefaultPreviewButton_t307_m3424(__this, method) (( DefaultPreviewButton_t307 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void SAOnClickAction::.ctor()
extern "C" void SAOnClickAction__ctor_m1894 (SAOnClickAction_t357 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SAOnClickAction::Awake()
extern TypeInfo* EventHandlerFunction_t574_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDefaultPreviewButton_t307_m3424_MethodInfo_var;
extern "C" void SAOnClickAction_Awake_m1895 (SAOnClickAction_t357 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandlerFunction_t574_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(126);
		Component_GetComponent_TisDefaultPreviewButton_t307_m3424_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484039);
		s_Il2CppMethodIntialized = true;
	}
	DefaultPreviewButton_t307 * V_0 = {0};
	{
		DefaultPreviewButton_t307 * L_0 = Component_GetComponent_TisDefaultPreviewButton_t307_m3424(__this, /*hidden argument*/Component_GetComponent_TisDefaultPreviewButton_t307_m3424_MethodInfo_var);
		V_0 = L_0;
		DefaultPreviewButton_t307 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_1, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		DefaultPreviewButton_t307 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)GetVirtualMethodInfo(__this, 4) };
		EventHandlerFunction_t574 * L_5 = (EventHandlerFunction_t574 *)il2cpp_codegen_object_new (EventHandlerFunction_t574_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3040(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, EventHandlerFunction_t574 * >::Invoke(4 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, L_3, (String_t*) &_stringLiteral140, L_5);
	}

IL_002b:
	{
		return;
	}
}
// System.Void SAOnClickAction::OnClick()
// SAOpenUrlOnClick
#include "AssemblyU2DCSharp_SAOpenUrlOnClick.h"
#ifndef _MSC_VER
#else
#endif
// SAOpenUrlOnClick
#include "AssemblyU2DCSharp_SAOpenUrlOnClickMethodDeclarations.h"



// System.Void SAOpenUrlOnClick::.ctor()
extern "C" void SAOpenUrlOnClick__ctor_m1896 (SAOpenUrlOnClick_t358 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m1894(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SAOpenUrlOnClick::OnClick()
extern "C" void SAOpenUrlOnClick_OnClick_m1897 (SAOpenUrlOnClick_t358 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_2);
		Application_OpenURL_m3365(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// SASendMessageOnClick
#include "AssemblyU2DCSharp_SASendMessageOnClick.h"
#ifndef _MSC_VER
#else
#endif
// SASendMessageOnClick
#include "AssemblyU2DCSharp_SASendMessageOnClickMethodDeclarations.h"

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"


// System.Void SASendMessageOnClick::.ctor()
extern "C" void SASendMessageOnClick__ctor_m1898 (SASendMessageOnClick_t359 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m1894(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SASendMessageOnClick::OnClick()
extern "C" void SASendMessageOnClick_OnClick_m1899 (SASendMessageOnClick_t359 * __this, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = (__this->___Reciver_2);
		String_t* L_1 = (__this->___MethodName_3);
		NullCheck(L_0);
		GameObject_SendMessage_m3425(L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// SA_BackButton
#include "AssemblyU2DCSharp_SA_BackButton.h"
#ifndef _MSC_VER
#else
#endif
// SA_BackButton
#include "AssemblyU2DCSharp_SA_BackButtonMethodDeclarations.h"

// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Collider
#include "UnityEngine_UnityEngine_ColliderMethodDeclarations.h"
struct Component_t659;
struct Collider_t662;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t662_m3426(__this, method) (( Collider_t662 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void SA_BackButton::.ctor()
extern "C" void SA_BackButton__ctor_m1900 (SA_BackButton_t360 * __this, const MethodInfo* method)
{
	{
		DefaultPreviewButton__ctor_m1877(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_BackButton::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SA_BackButton_t360_il2cpp_TypeInfo_var;
extern "C" void SA_BackButton__cctor_m1901 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		SA_BackButton_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12 = L_0;
		return;
	}
}
// System.Void SA_BackButton::Start()
extern TypeInfo* SA_BackButton_t360_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SA_BackButton_Start_m1902 (SA_BackButton_t360 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_BackButton_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t360_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		Object_Destroy_m3305(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		GameObject_t310 * L_4 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t360_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_7 = String_op_Equality_m223(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_8 = Application_get_loadedLevelName_m3158(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t360_il2cpp_TypeInfo_var);
		((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12 = L_8;
	}

IL_0049:
	{
		return;
	}
}
// System.Void SA_BackButton::FixedUpdate()
extern TypeInfo* SA_BackButton_t360_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t662_m3426_MethodInfo_var;
extern "C" void SA_BackButton_FixedUpdate_m1903 (SA_BackButton_t360 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_BackButton_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		Component_GetComponent_TisCollider_t662_m3426_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484040);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3158(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t360_il2cpp_TypeInfo_var);
		String_t* L_1 = ((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Renderer_t593 * L_3 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_3);
		Renderer_set_enabled_m3427(L_3, 0, /*hidden argument*/NULL);
		Collider_t662 * L_4 = Component_GetComponent_TisCollider_t662_m3426(__this, /*hidden argument*/Component_GetComponent_TisCollider_t662_m3426_MethodInfo_var);
		NullCheck(L_4);
		Collider_set_enabled_m3428(L_4, 0, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0031:
	{
		Renderer_t593 * L_5 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_5);
		Renderer_set_enabled_m3427(L_5, 1, /*hidden argument*/NULL);
		Collider_t662 * L_6 = Component_GetComponent_TisCollider_t662_m3426(__this, /*hidden argument*/Component_GetComponent_TisCollider_t662_m3426_MethodInfo_var);
		NullCheck(L_6);
		Collider_set_enabled_m3428(L_6, 1, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void SA_BackButton::OnClick()
extern "C" void SA_BackButton_OnClick_m1904 (SA_BackButton_t360 * __this, const MethodInfo* method)
{
	{
		DefaultPreviewButton_OnClick_m1886(__this, /*hidden argument*/NULL);
		SA_BackButton_GoBack_m1905(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_BackButton::GoBack()
extern TypeInfo* SA_Singleton_1_t355_il2cpp_TypeInfo_var;
extern TypeInfo* SA_BackButton_t360_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m3423_MethodInfo_var;
extern "C" void SA_BackButton_GoBack_m1905 (SA_BackButton_t360 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(315);
		SA_BackButton_t360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		SA_Singleton_1_get_instance_m3423_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484038);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t355_il2cpp_TypeInfo_var);
		SALevelLoader_t354 * L_0 = SA_Singleton_1_get_instance_m3423(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m3423_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t360_il2cpp_TypeInfo_var);
		String_t* L_1 = ((SA_BackButton_t360_StaticFields*)SA_BackButton_t360_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		NullCheck(L_0);
		SALevelLoader_LoadLevel_m1890(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// SA_Label
#include "AssemblyU2DCSharp_SA_Label.h"
#ifndef _MSC_VER
#else
#endif
// SA_Label
#include "AssemblyU2DCSharp_SA_LabelMethodDeclarations.h"



// System.Void SA_Label::.ctor()
extern "C" void SA_Label__ctor_m1906 (SA_Label_t309 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA_Label::get_text()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var;
extern "C" String_t* SA_Label_get_text_m1907 (SA_Label_t309 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484035);
		s_Il2CppMethodIntialized = true;
	}
	TextMesh_t361 * V_0 = {0};
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_0017:
	{
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TextMesh_t361 * L_4 = GameObject_GetComponentInChildren_TisTextMesh_t361_m3396(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t361_m3396_MethodInfo_var);
		V_0 = L_4;
		TextMesh_t361 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_5, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		TextMesh_t361 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = TextMesh_get_text_m3410(L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_9;
	}
}
// System.Void SA_Label::set_text(System.String)
extern const MethodInfo* GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var;
extern "C" void SA_Label_set_text_m1908 (SA_Label_t309 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484036);
		s_Il2CppMethodIntialized = true;
	}
	TextMeshU5BU5D_t658* V_0 = {0};
	TextMesh_t361 * V_1 = {0};
	TextMeshU5BU5D_t658* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
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
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TextMeshU5BU5D_t658* L_3 = GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisTextMesh_t361_m3398_MethodInfo_var);
		V_0 = L_3;
		TextMeshU5BU5D_t658* L_4 = V_0;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0042;
	}

IL_0027:
	{
		TextMeshU5BU5D_t658* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_1 = (*(TextMesh_t361 **)(TextMesh_t361 **)SZArrayLdElema(L_5, L_7));
		TextMesh_t361 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_8, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		TextMesh_t361 * L_10 = V_1;
		String_t* L_11 = ___value;
		NullCheck(L_10);
		TextMesh_set_text_m3411(L_10, L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_13 = V_3;
		TextMeshU5BU5D_t658* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// SA_StatusBar
#include "AssemblyU2DCSharp_SA_StatusBar.h"
#ifndef _MSC_VER
#else
#endif
// SA_StatusBar
#include "AssemblyU2DCSharp_SA_StatusBarMethodDeclarations.h"

struct Object_t599;
struct SA_StatusBar_t362;
struct Object_t599;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m3430_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m3430(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m3430_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<SA_StatusBar>()
// !!0 UnityEngine.Object::FindObjectOfType<SA_StatusBar>()
#define Object_FindObjectOfType_TisSA_StatusBar_t362_m3429(__this /* static, unused */, method) (( SA_StatusBar_t362 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m3430_gshared)(__this /* static, unused */, method)


// System.Void SA_StatusBar::.ctor()
extern "C" void SA_StatusBar__ctor_m1909 (SA_StatusBar_t362 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_StatusBar::SetText(System.String)
extern "C" void SA_StatusBar_SetText_m1910 (SA_StatusBar_t362 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		TextMesh_t361 * L_0 = (__this->___title_2);
		String_t* L_1 = ___text;
		NullCheck(L_0);
		TextMesh_set_text_m3411(L_0, L_1, /*hidden argument*/NULL);
		TextMesh_t361 * L_2 = (__this->___shadow_3);
		String_t* L_3 = ___text;
		NullCheck(L_2);
		TextMesh_set_text_m3411(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA_StatusBar::get_text()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var;
extern "C" String_t* SA_StatusBar_get_text_m1911 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484041);
		s_Il2CppMethodIntialized = true;
	}
	SA_StatusBar_t362 * V_0 = {0};
	{
		SA_StatusBar_t362 * L_0 = Object_FindObjectOfType_TisSA_StatusBar_t362_m3429(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var);
		V_0 = L_0;
		SA_StatusBar_t362 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m3185(NULL /*static, unused*/, L_1, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_3;
	}

IL_0018:
	{
		SA_StatusBar_t362 * L_4 = V_0;
		NullCheck(L_4);
		TextMesh_t361 * L_5 = (L_4->___title_2);
		NullCheck(L_5);
		String_t* L_6 = TextMesh_get_text_m3410(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void SA_StatusBar::set_text(System.String)
extern const MethodInfo* Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var;
extern "C" void SA_StatusBar_set_text_m1912 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484041);
		s_Il2CppMethodIntialized = true;
	}
	SA_StatusBar_t362 * V_0 = {0};
	{
		SA_StatusBar_t362 * L_0 = Object_FindObjectOfType_TisSA_StatusBar_t362_m3429(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSA_StatusBar_t362_m3429_MethodInfo_var);
		V_0 = L_0;
		SA_StatusBar_t362 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m3185(NULL /*static, unused*/, L_1, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		SA_StatusBar_t362 * L_3 = V_0;
		String_t* L_4 = ___value;
		NullCheck(L_3);
		SA_StatusBar_SetText_m1910(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// SA_Texture
#include "AssemblyU2DCSharp_SA_Texture.h"
#ifndef _MSC_VER
#else
#endif
// SA_Texture
#include "AssemblyU2DCSharp_SA_TextureMethodDeclarations.h"



// System.Void SA_Texture::.ctor()
extern "C" void SA_Texture__ctor_m1913 (SA_Texture_t308 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_Texture::Awake()
extern TypeInfo* Material_t438_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void SA_Texture_Awake_m1914 (SA_Texture_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(312);
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t593 * L_0 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		Renderer_t593 * L_1 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_1);
		Material_t438 * L_2 = Renderer_get_material_m3406(L_1, /*hidden argument*/NULL);
		Material_t438 * L_3 = (Material_t438 *)il2cpp_codegen_object_new (Material_t438_il2cpp_TypeInfo_var);
		Material__ctor_m3407(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_set_material_m3408(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture SA_Texture::get_texture()
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" Texture_t352 * SA_Texture_get_texture_m1915 (SA_Texture_t308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t593 * L_0 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_0);
		Material_t438 * L_1 = Renderer_get_material_m3406(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture_t352 * L_2 = Material_get_mainTexture_m3431(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SA_Texture::set_texture(UnityEngine.Texture)
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void SA_Texture_set_texture_m1916 (SA_Texture_t308 * __this, Texture_t352 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t593 * L_0 = Component_GetComponent_TisRenderer_t593_m3403(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_0);
		Material_t438 * L_1 = Renderer_get_material_m3406(L_0, /*hidden argument*/NULL);
		Texture_t352 * L_2 = ___value;
		NullCheck(L_1);
		Material_set_mainTexture_m3409(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// PreviewScreenUtil
#include "AssemblyU2DCSharp_PreviewScreenUtil.h"
#ifndef _MSC_VER
#else
#endif
// PreviewScreenUtil
#include "AssemblyU2DCSharp_PreviewScreenUtilMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_BoundsMethodDeclarations.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
struct GameObject_t310;
struct PreviewScreenUtil_t363;
// Declaration !!0 UnityEngine.GameObject::AddComponent<PreviewScreenUtil>()
// !!0 UnityEngine.GameObject::AddComponent<PreviewScreenUtil>()
#define GameObject_AddComponent_TisPreviewScreenUtil_t363_m3432(__this, method) (( PreviewScreenUtil_t363 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)
struct GameObject_t310;
struct Renderer_t593;
struct GameObject_t310;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m3434_gshared (GameObject_t310 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m3434(__this, method) (( Object_t * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t593_m3433(__this, method) (( Renderer_t593 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void PreviewScreenUtil::.ctor()
extern "C" void PreviewScreenUtil__ctor_m1917 (PreviewScreenUtil_t363 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m353(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PreviewScreenUtil::.cctor()
extern "C" void PreviewScreenUtil__cctor_m1918 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean PreviewScreenUtil::isInScreenRect(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" bool PreviewScreenUtil_isInScreenRect_m1919 (Object_t * __this /* static, unused */, Rect_t594  ___rect, Vector2_t68  ___point, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ((&___point)->___y_2);
		(&___point)->___y_2 = ((float)((float)(((float)L_0))-(float)L_1));
		Vector2_t68  L_2 = ___point;
		bool L_3 = Rect_Contains_m3435((&___rect), L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		return 0;
	}
}
// UnityEngine.Rect PreviewScreenUtil::getObjectBounds(UnityEngine.GameObject)
extern TypeInfo* PreviewScreenUtil_t363_il2cpp_TypeInfo_var;
extern TypeInfo* Rect_t594_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t593_m3433_MethodInfo_var;
extern "C" Rect_t594  PreviewScreenUtil_getObjectBounds_m1920 (Object_t * __this /* static, unused */, GameObject_t310 * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		Rect_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(321);
		GameObject_GetComponent_TisRenderer_t593_m3433_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484042);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t594  V_0 = {0};
	{
		GameObject_t310 * L_0 = ___obj;
		NullCheck(L_0);
		Renderer_t593 * L_1 = GameObject_GetComponent_TisRenderer_t593_m3433(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t593_m3433_MethodInfo_var);
		bool L_2 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_1, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t310 * L_3 = ___obj;
		NullCheck(L_3);
		Renderer_t593 * L_4 = GameObject_GetComponent_TisRenderer_t593_m3433(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t593_m3433_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		Rect_t594  L_5 = PreviewScreenUtil_getRendererBounds_m1921(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		Initobj (Rect_t594_il2cpp_TypeInfo_var, (&V_0));
		Rect_t594  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Rect PreviewScreenUtil::getRendererBounds(UnityEngine.Renderer)
extern "C" Rect_t594  PreviewScreenUtil_getRendererBounds_m1921 (Object_t * __this /* static, unused */, Renderer_t593 * ___renderer, const MethodInfo* method)
{
	Vector3_t449  V_0 = {0};
	Vector3_t449  V_1 = {0};
	Rect_t594  V_2 = {0};
	Bounds_t663  V_3 = {0};
	Vector3_t449  V_4 = {0};
	Bounds_t663  V_5 = {0};
	Vector3_t449  V_6 = {0};
	Bounds_t663  V_7 = {0};
	Vector3_t449  V_8 = {0};
	Bounds_t663  V_9 = {0};
	Vector3_t449  V_10 = {0};
	{
		Camera_t479 * L_0 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Renderer_t593 * L_1 = ___renderer;
		NullCheck(L_1);
		Bounds_t663  L_2 = Renderer_get_bounds_m3436(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		Vector3_t449  L_3 = Bounds_get_min_m3437((&V_3), /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = ((&V_4)->___x_1);
		Renderer_t593 * L_5 = ___renderer;
		NullCheck(L_5);
		Bounds_t663  L_6 = Renderer_get_bounds_m3436(L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		Vector3_t449  L_7 = Bounds_get_max_m3438((&V_5), /*hidden argument*/NULL);
		V_6 = L_7;
		float L_8 = ((&V_6)->___y_2);
		Vector3_t449  L_9 = {0};
		Vector3__ctor_m3439(&L_9, L_4, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t449  L_10 = Camera_WorldToScreenPoint_m3440(L_0, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Camera_t479 * L_11 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Renderer_t593 * L_12 = ___renderer;
		NullCheck(L_12);
		Bounds_t663  L_13 = Renderer_get_bounds_m3436(L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		Vector3_t449  L_14 = Bounds_get_max_m3438((&V_7), /*hidden argument*/NULL);
		V_8 = L_14;
		float L_15 = ((&V_8)->___x_1);
		Renderer_t593 * L_16 = ___renderer;
		NullCheck(L_16);
		Bounds_t663  L_17 = Renderer_get_bounds_m3436(L_16, /*hidden argument*/NULL);
		V_9 = L_17;
		Vector3_t449  L_18 = Bounds_get_min_m3437((&V_9), /*hidden argument*/NULL);
		V_10 = L_18;
		float L_19 = ((&V_10)->___y_2);
		Vector3_t449  L_20 = {0};
		Vector3__ctor_m3439(&L_20, L_15, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t449  L_21 = Camera_WorldToScreenPoint_m3440(L_11, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = ((&V_0)->___x_1);
		int32_t L_23 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = ((&V_0)->___y_2);
		float L_25 = ((&V_1)->___x_1);
		float L_26 = ((&V_0)->___x_1);
		float L_27 = ((&V_0)->___y_2);
		float L_28 = ((&V_1)->___y_2);
		Rect__ctor_m3085((&V_2), L_22, ((float)((float)(((float)L_23))-(float)L_24)), ((float)((float)L_25-(float)L_26)), ((float)((float)L_27-(float)L_28)), /*hidden argument*/NULL);
		Rect_t594  L_29 = V_2;
		return L_29;
	}
}
// System.Void PreviewScreenUtil::Awake()
extern "C" void PreviewScreenUtil_Awake_m1922 (PreviewScreenUtil_t363 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___W_6 = L_0;
		int32_t L_1 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___H_7 = L_1;
		return;
	}
}
// System.Void PreviewScreenUtil::FixedUpdate()
extern "C" void PreviewScreenUtil_FixedUpdate_m1923 (PreviewScreenUtil_t363 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___W_6);
		int32_t L_1 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = (__this->___H_7);
		int32_t L_3 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}

IL_0020:
	{
		int32_t L_4 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___W_6 = L_4;
		int32_t L_5 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___H_7 = L_5;
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral706);
	}

IL_0041:
	{
		return;
	}
}
// PreviewScreenUtil PreviewScreenUtil::get_instance()
extern TypeInfo* PreviewScreenUtil_t363_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisPreviewScreenUtil_t363_m3432_MethodInfo_var;
extern "C" PreviewScreenUtil_t363 * PreviewScreenUtil_get_instance_m1924 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		GameObject_AddComponent_TisPreviewScreenUtil_t363_m3432_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484043);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		PreviewScreenUtil_t363 * L_0 = ((PreviewScreenUtil_t363_StaticFields*)PreviewScreenUtil_t363_il2cpp_TypeInfo_var->static_fields)->____instance_5;
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t310 * L_2 = (GameObject_t310 *)il2cpp_codegen_object_new (GameObject_t310_il2cpp_TypeInfo_var);
		GameObject__ctor_m3263(L_2, (String_t*) &_stringLiteral705, /*hidden argument*/NULL);
		NullCheck(L_2);
		PreviewScreenUtil_t363 * L_3 = GameObject_AddComponent_TisPreviewScreenUtil_t363_m3432(L_2, /*hidden argument*/GameObject_AddComponent_TisPreviewScreenUtil_t363_m3432_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		((PreviewScreenUtil_t363_StaticFields*)PreviewScreenUtil_t363_il2cpp_TypeInfo_var->static_fields)->____instance_5 = L_3;
		PreviewScreenUtil_t363 * L_4 = ((PreviewScreenUtil_t363_StaticFields*)PreviewScreenUtil_t363_il2cpp_TypeInfo_var->static_fields)->____instance_5;
		NullCheck(L_4);
		GameObject_t310 * L_5 = Component_get_gameObject_m3159(L_4, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		PreviewScreenUtil_t363 * L_6 = ((PreviewScreenUtil_t363_StaticFields*)PreviewScreenUtil_t363_il2cpp_TypeInfo_var->static_fields)->____instance_5;
		return L_6;
	}
}
// ScreenPlacement
#include "AssemblyU2DCSharp_ScreenPlacement.h"
#ifndef _MSC_VER
#else
#endif
// ScreenPlacement
#include "AssemblyU2DCSharp_ScreenPlacementMethodDeclarations.h"

// ScreenPosition
#include "AssemblyU2DCSharp_ScreenPosition.h"
// ScreenPlacementExtension
#include "AssemblyU2DCSharp_ScreenPlacementExtensionMethodDeclarations.h"


// System.Void ScreenPlacement::.ctor()
extern TypeInfo* Vector2_t68_il2cpp_TypeInfo_var;
extern "C" void ScreenPlacement__ctor_m1925 (ScreenPlacement_t365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t68_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(322);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t68  V_0 = {0};
	{
		__this->___calulateStartOnly_5 = 1;
		Initobj (Vector2_t68_il2cpp_TypeInfo_var, (&V_0));
		Vector2_t68  L_0 = V_0;
		__this->___actualOffset_7 = L_0;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacement::Start()
extern "C" void ScreenPlacement_Start_m1926 (ScreenPlacement_t365 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_5);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenPlacement_placementCalculation_m1928(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenPlacement::FixedUpdate()
extern "C" void ScreenPlacement_FixedUpdate_m1927 (ScreenPlacement_t365 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenPlacement_placementCalculation_m1928(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenPlacement::placementCalculation()
extern const MethodInfo* Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var;
extern "C" void ScreenPlacement_placementCalculation_m1928 (ScreenPlacement_t365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484034);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t364 * V_0 = {0};
	Vector3_t449  V_1 = {0};
	Vector3_t449  V_2 = {0};
	Rect_t594  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Bounds_t663  V_6 = {0};
	Vector3_t449  V_7 = {0};
	Bounds_t663  V_8 = {0};
	Vector3_t449  V_9 = {0};
	Bounds_t663  V_10 = {0};
	Vector3_t449  V_11 = {0};
	Bounds_t663  V_12 = {0};
	Vector3_t449  V_13 = {0};
	int32_t V_14 = {0};
	{
		Transform_t364 * L_0 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___position_2);
		Vector2_t68  L_2 = (__this->___pixelOffset_3);
		ScreenPlacementExtension_ScreenPlacement_m1935(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		Transform_t364 * L_3 = (__this->___boundsTransform_6);
		bool L_4 = Object_op_Equality_m3185(NULL /*static, unused*/, L_3, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Transform_t364 * L_5 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003b;
	}

IL_0034:
	{
		Transform_t364 * L_6 = (__this->___boundsTransform_6);
		V_0 = L_6;
	}

IL_003b:
	{
		Camera_t479 * L_7 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t364 * L_8 = V_0;
		NullCheck(L_8);
		Renderer_t593 * L_9 = Component_GetComponent_TisRenderer_t593_m3403(L_8, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_9);
		Bounds_t663  L_10 = Renderer_get_bounds_m3436(L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		Vector3_t449  L_11 = Bounds_get_min_m3437((&V_6), /*hidden argument*/NULL);
		V_7 = L_11;
		float L_12 = ((&V_7)->___x_1);
		Transform_t364 * L_13 = V_0;
		NullCheck(L_13);
		Renderer_t593 * L_14 = Component_GetComponent_TisRenderer_t593_m3403(L_13, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_14);
		Bounds_t663  L_15 = Renderer_get_bounds_m3436(L_14, /*hidden argument*/NULL);
		V_8 = L_15;
		Vector3_t449  L_16 = Bounds_get_max_m3438((&V_8), /*hidden argument*/NULL);
		V_9 = L_16;
		float L_17 = ((&V_9)->___y_2);
		Vector3_t449  L_18 = {0};
		Vector3__ctor_m3439(&L_18, L_12, L_17, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t449  L_19 = Camera_WorldToScreenPoint_m3440(L_7, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Camera_t479 * L_20 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t364 * L_21 = V_0;
		NullCheck(L_21);
		Renderer_t593 * L_22 = Component_GetComponent_TisRenderer_t593_m3403(L_21, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_22);
		Bounds_t663  L_23 = Renderer_get_bounds_m3436(L_22, /*hidden argument*/NULL);
		V_10 = L_23;
		Vector3_t449  L_24 = Bounds_get_max_m3438((&V_10), /*hidden argument*/NULL);
		V_11 = L_24;
		float L_25 = ((&V_11)->___x_1);
		Transform_t364 * L_26 = V_0;
		NullCheck(L_26);
		Renderer_t593 * L_27 = Component_GetComponent_TisRenderer_t593_m3403(L_26, /*hidden argument*/Component_GetComponent_TisRenderer_t593_m3403_MethodInfo_var);
		NullCheck(L_27);
		Bounds_t663  L_28 = Renderer_get_bounds_m3436(L_27, /*hidden argument*/NULL);
		V_12 = L_28;
		Vector3_t449  L_29 = Bounds_get_min_m3437((&V_12), /*hidden argument*/NULL);
		V_13 = L_29;
		float L_30 = ((&V_13)->___y_2);
		Vector3_t449  L_31 = {0};
		Vector3__ctor_m3439(&L_31, L_25, L_30, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t449  L_32 = Camera_WorldToScreenPoint_m3440(L_20, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		float L_33 = ((&V_1)->___x_1);
		int32_t L_34 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_35 = ((&V_1)->___y_2);
		float L_36 = ((&V_2)->___x_1);
		float L_37 = ((&V_1)->___x_1);
		float L_38 = ((&V_1)->___y_2);
		float L_39 = ((&V_2)->___y_2);
		Rect__ctor_m3085((&V_3), L_33, ((float)((float)(((float)L_34))-(float)L_35)), ((float)((float)L_36-(float)L_37)), ((float)((float)L_38-(float)L_39)), /*hidden argument*/NULL);
		V_4 = (0.0f);
		V_5 = (0.0f);
		bool L_40 = (__this->___persents_4);
		if (!L_40)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_41 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t68 * L_42 = &(__this->___pixelOffset_3);
		float L_43 = (L_42->___x_1);
		V_4 = ((float)((float)(((float)((int32_t)((int32_t)L_41/(int32_t)((int32_t)100)))))*(float)L_43));
		int32_t L_44 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t68 * L_45 = &(__this->___pixelOffset_3);
		float L_46 = (L_45->___y_2);
		V_5 = ((float)((float)(((float)((int32_t)((int32_t)L_44/(int32_t)((int32_t)100)))))*(float)L_46));
		goto IL_0179;
	}

IL_015f:
	{
		Vector2_t68 * L_47 = &(__this->___pixelOffset_3);
		float L_48 = (L_47->___x_1);
		V_4 = L_48;
		Vector2_t68 * L_49 = &(__this->___pixelOffset_3);
		float L_50 = (L_49->___y_2);
		V_5 = L_50;
	}

IL_0179:
	{
		int32_t L_51 = (__this->___position_2);
		V_14 = L_51;
		int32_t L_52 = V_14;
		if (L_52 == 0)
		{
			goto IL_02a2;
		}
		if (L_52 == 1)
		{
			goto IL_02dd;
		}
		if (L_52 == 2)
		{
			goto IL_01d1;
		}
		if (L_52 == 3)
		{
			goto IL_0247;
		}
		if (L_52 == 4)
		{
			goto IL_031d;
		}
		if (L_52 == 5)
		{
			goto IL_01b1;
		}
		if (L_52 == 6)
		{
			goto IL_0267;
		}
		if (L_52 == 7)
		{
			goto IL_02fd;
		}
		if (L_52 == 8)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_031d;
	}

IL_01b1:
	{
		Vector2_t68 * L_53 = &(__this->___actualOffset_7);
		float L_54 = V_4;
		float L_55 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_53->___x_1 = ((float)((float)L_54+(float)((float)((float)L_55/(float)(2.0f)))));
		goto IL_031d;
	}

IL_01d1:
	{
		Vector2_t68 * L_56 = &(__this->___actualOffset_7);
		float L_57 = V_4;
		float L_58 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_56->___x_1 = ((float)((float)L_57+(float)((float)((float)L_58/(float)(2.0f)))));
		Vector2_t68 * L_59 = &(__this->___actualOffset_7);
		float L_60 = V_5;
		float L_61 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_59->___y_2 = ((float)((float)L_60+(float)((float)((float)L_61/(float)(2.0f)))));
		goto IL_031d;
	}

IL_020c:
	{
		Vector2_t68 * L_62 = &(__this->___actualOffset_7);
		float L_63 = V_4;
		float L_64 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_62->___x_1 = ((float)((float)L_63+(float)((float)((float)L_64/(float)(2.0f)))));
		Vector2_t68 * L_65 = &(__this->___actualOffset_7);
		float L_66 = V_5;
		float L_67 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_65->___y_2 = ((float)((float)L_66+(float)((float)((float)L_67/(float)(2.0f)))));
		goto IL_031d;
	}

IL_0247:
	{
		Vector2_t68 * L_68 = &(__this->___actualOffset_7);
		float L_69 = V_4;
		float L_70 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_68->___x_1 = ((float)((float)L_69+(float)((float)((float)L_70/(float)(2.0f)))));
		goto IL_031d;
	}

IL_0267:
	{
		Vector2_t68 * L_71 = &(__this->___actualOffset_7);
		float L_72 = V_4;
		float L_73 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_71->___x_1 = ((float)((float)L_72+(float)((float)((float)L_73/(float)(2.0f)))));
		Vector2_t68 * L_74 = &(__this->___actualOffset_7);
		float L_75 = V_5;
		float L_76 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_74->___y_2 = ((float)((float)L_75+(float)((float)((float)L_76/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02a2:
	{
		Vector2_t68 * L_77 = &(__this->___actualOffset_7);
		float L_78 = V_4;
		float L_79 = Rect_get_width_m3442((&V_3), /*hidden argument*/NULL);
		L_77->___x_1 = ((float)((float)L_78+(float)((float)((float)L_79/(float)(2.0f)))));
		Vector2_t68 * L_80 = &(__this->___actualOffset_7);
		float L_81 = V_5;
		float L_82 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_80->___y_2 = ((float)((float)L_81+(float)((float)((float)L_82/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02dd:
	{
		Vector2_t68 * L_83 = &(__this->___actualOffset_7);
		float L_84 = V_5;
		float L_85 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_83->___y_2 = ((float)((float)L_84+(float)((float)((float)L_85/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02fd:
	{
		Vector2_t68 * L_86 = &(__this->___actualOffset_7);
		float L_87 = V_5;
		float L_88 = Rect_get_height_m3443((&V_3), /*hidden argument*/NULL);
		L_86->___y_2 = ((float)((float)L_87+(float)((float)((float)L_88/(float)(2.0f)))));
		goto IL_031d;
	}

IL_031d:
	{
		Transform_t364 * L_89 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		int32_t L_90 = (__this->___position_2);
		Vector2_t68  L_91 = (__this->___actualOffset_7);
		ScreenPlacementExtension_ScreenPlacement_m1935(NULL /*static, unused*/, L_89, L_90, L_91, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// ScreenPosition
#include "AssemblyU2DCSharp_ScreenPositionMethodDeclarations.h"



// ScreenPlacementExtension
#include "AssemblyU2DCSharp_ScreenPlacementExtension.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"


// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1929 (Object_t * __this /* static, unused */, GameObject_t310 * ___target, int32_t ___position, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = GameObject_get_transform_m3444(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = Vector2_get_zero_m3061(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t479 * L_4 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1930 (Object_t * __this /* static, unused */, GameObject_t310 * ___target, int32_t ___position, Camera_t479 * ___renderingCamera, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = GameObject_get_transform_m3444(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = Vector2_get_zero_m3061(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t479 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Vector2)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1931 (Object_t * __this /* static, unused */, GameObject_t310 * ___target, int32_t ___position, Vector2_t68  ___pixelsFromEdge, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = GameObject_get_transform_m3444(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = ___pixelsFromEdge;
		Camera_t479 * L_4 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1932 (Object_t * __this /* static, unused */, GameObject_t310 * ___target, int32_t ___position, Vector2_t68  ___pixelsFromEdge, Camera_t479 * ___renderingCamera, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = GameObject_get_transform_m3444(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = ___pixelsFromEdge;
		Camera_t479 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1933 (Object_t * __this /* static, unused */, Transform_t364 * ___target, int32_t ___position, const MethodInfo* method)
{
	{
		Transform_t364 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = Component_get_transform_m3441(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = Vector2_get_zero_m3061(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t479 * L_4 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1934 (Object_t * __this /* static, unused */, Transform_t364 * ___target, int32_t ___position, Camera_t479 * ___renderingCamera, const MethodInfo* method)
{
	{
		Transform_t364 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = Component_get_transform_m3441(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = Vector2_get_zero_m3061(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t479 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1935 (Object_t * __this /* static, unused */, Transform_t364 * ___target, int32_t ___position, Vector2_t68  ___pixelsFromEdge, const MethodInfo* method)
{
	{
		Transform_t364 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = Component_get_transform_m3441(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = ___pixelsFromEdge;
		Camera_t479 * L_4 = Camera_get_main_m3412(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m1936 (Object_t * __this /* static, unused */, Transform_t364 * ___target, int32_t ___position, Vector2_t68  ___pixelsFromEdge, Camera_t479 * ___renderingCamera, const MethodInfo* method)
{
	{
		Transform_t364 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t364 * L_1 = Component_get_transform_m3441(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t68  L_3 = ___pixelsFromEdge;
		Camera_t479 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m1937(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::DoScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_DoScreenPlacement_m1937 (Object_t * __this /* static, unused */, Transform_t364 * ___target, int32_t ___position, Vector2_t68  ___pixelsFromEdge, Camera_t479 * ___renderingCamera, const MethodInfo* method)
{
	Vector3_t449  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t449  V_2 = {0};
	Vector3_t449  V_3 = {0};
	int32_t V_4 = {0};
	{
		Vector3_t449  L_0 = Vector3_get_zero_m3445(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Camera_t479 * L_1 = ___renderingCamera;
		NullCheck(L_1);
		Transform_t364 * L_2 = Component_get_transform_m3441(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t449  L_3 = Transform_get_position_m3446(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = ((&V_2)->___z_3);
		Transform_t364 * L_5 = ___target;
		NullCheck(L_5);
		Vector3_t449  L_6 = Transform_get_position_m3446(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___z_3);
		V_1 = ((float)((float)((-L_4))+(float)L_7));
		int32_t L_8 = ___position;
		V_4 = L_8;
		int32_t L_9 = V_4;
		if (L_9 == 0)
		{
			goto IL_005d;
		}
		if (L_9 == 1)
		{
			goto IL_0084;
		}
		if (L_9 == 2)
		{
			goto IL_00b4;
		}
		if (L_9 == 3)
		{
			goto IL_00e2;
		}
		if (L_9 == 4)
		{
			goto IL_010b;
		}
		if (L_9 == 5)
		{
			goto IL_013d;
		}
		if (L_9 == 6)
		{
			goto IL_016d;
		}
		if (L_9 == 7)
		{
			goto IL_018d;
		}
		if (L_9 == 8)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_01dd;
	}

IL_005d:
	{
		Camera_t479 * L_10 = ___renderingCamera;
		float L_11 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_12 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = ((&___pixelsFromEdge)->___y_2);
		float L_14 = V_1;
		Vector3_t449  L_15 = {0};
		Vector3__ctor_m3439(&L_15, L_11, ((float)((float)(((float)L_12))-(float)L_13)), L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t449  L_16 = Camera_ScreenToWorldPoint_m3447(L_10, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_01dd;
	}

IL_0084:
	{
		Camera_t479 * L_17 = ___renderingCamera;
		int32_t L_18 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_20 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = ((&___pixelsFromEdge)->___y_2);
		float L_22 = V_1;
		Vector3_t449  L_23 = {0};
		Vector3__ctor_m3439(&L_23, ((float)((float)(((float)((int32_t)((int32_t)L_18/(int32_t)2))))+(float)L_19)), ((float)((float)(((float)L_20))-(float)L_21)), L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t449  L_24 = Camera_ScreenToWorldPoint_m3447(L_17, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_01dd;
	}

IL_00b4:
	{
		Camera_t479 * L_25 = ___renderingCamera;
		int32_t L_26 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_27 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_28 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = ((&___pixelsFromEdge)->___y_2);
		float L_30 = V_1;
		Vector3_t449  L_31 = {0};
		Vector3__ctor_m3439(&L_31, ((float)((float)(((float)L_26))-(float)L_27)), ((float)((float)(((float)L_28))-(float)L_29)), L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t449  L_32 = Camera_ScreenToWorldPoint_m3447(L_25, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_01dd;
	}

IL_00e2:
	{
		Camera_t479 * L_33 = ___renderingCamera;
		float L_34 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_35 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = ((&___pixelsFromEdge)->___y_2);
		float L_37 = V_1;
		Vector3_t449  L_38 = {0};
		Vector3__ctor_m3439(&L_38, L_34, ((float)((float)(((float)((int32_t)((int32_t)L_35/(int32_t)2))))-(float)L_36)), L_37, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t449  L_39 = Camera_ScreenToWorldPoint_m3447(L_33, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_01dd;
	}

IL_010b:
	{
		Camera_t479 * L_40 = ___renderingCamera;
		int32_t L_41 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_42 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_43 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_44 = ((&___pixelsFromEdge)->___y_2);
		float L_45 = V_1;
		Vector3_t449  L_46 = {0};
		Vector3__ctor_m3439(&L_46, ((float)((float)(((float)((int32_t)((int32_t)L_41/(int32_t)2))))+(float)L_42)), ((float)((float)(((float)((int32_t)((int32_t)L_43/(int32_t)2))))-(float)L_44)), L_45, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t449  L_47 = Camera_ScreenToWorldPoint_m3447(L_40, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_01dd;
	}

IL_013d:
	{
		Camera_t479 * L_48 = ___renderingCamera;
		int32_t L_49 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_50 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_51 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_52 = ((&___pixelsFromEdge)->___y_2);
		float L_53 = V_1;
		Vector3_t449  L_54 = {0};
		Vector3__ctor_m3439(&L_54, ((float)((float)(((float)L_49))-(float)L_50)), ((float)((float)(((float)((int32_t)((int32_t)L_51/(int32_t)2))))-(float)L_52)), L_53, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t449  L_55 = Camera_ScreenToWorldPoint_m3447(L_48, L_54, /*hidden argument*/NULL);
		V_0 = L_55;
		goto IL_01dd;
	}

IL_016d:
	{
		Camera_t479 * L_56 = ___renderingCamera;
		float L_57 = ((&___pixelsFromEdge)->___x_1);
		float L_58 = ((&___pixelsFromEdge)->___y_2);
		float L_59 = V_1;
		Vector3_t449  L_60 = {0};
		Vector3__ctor_m3439(&L_60, L_57, L_58, L_59, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t449  L_61 = Camera_ScreenToWorldPoint_m3447(L_56, L_60, /*hidden argument*/NULL);
		V_0 = L_61;
		goto IL_01dd;
	}

IL_018d:
	{
		Camera_t479 * L_62 = ___renderingCamera;
		int32_t L_63 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_64 = ((&___pixelsFromEdge)->___x_1);
		float L_65 = ((&___pixelsFromEdge)->___y_2);
		float L_66 = V_1;
		Vector3_t449  L_67 = {0};
		Vector3__ctor_m3439(&L_67, ((float)((float)(((float)((int32_t)((int32_t)L_63/(int32_t)2))))+(float)L_64)), L_65, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t449  L_68 = Camera_ScreenToWorldPoint_m3447(L_62, L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_01dd;
	}

IL_01b6:
	{
		Camera_t479 * L_69 = ___renderingCamera;
		int32_t L_70 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_71 = ((&___pixelsFromEdge)->___x_1);
		float L_72 = ((&___pixelsFromEdge)->___y_2);
		float L_73 = V_1;
		Vector3_t449  L_74 = {0};
		Vector3__ctor_m3439(&L_74, ((float)((float)(((float)L_70))-(float)L_71)), L_72, L_73, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t449  L_75 = Camera_ScreenToWorldPoint_m3447(L_69, L_74, /*hidden argument*/NULL);
		V_0 = L_75;
		goto IL_01dd;
	}

IL_01dd:
	{
		Transform_t364 * L_76 = ___target;
		NullCheck(L_76);
		Transform_t364 * L_77 = Component_get_transform_m3441(L_76, /*hidden argument*/NULL);
		Vector3_t449  L_78 = V_0;
		NullCheck(L_77);
		Transform_set_position_m3448(L_77, L_78, /*hidden argument*/NULL);
		return;
	}
}
// ScreenScaler
#include "AssemblyU2DCSharp_ScreenScaler.h"
#ifndef _MSC_VER
#else
#endif
// ScreenScaler
#include "AssemblyU2DCSharp_ScreenScalerMethodDeclarations.h"



// System.Void ScreenScaler::.ctor()
extern "C" void ScreenScaler__ctor_m1938 (ScreenScaler_t368 * __this, const MethodInfo* method)
{
	{
		__this->___calulateStartOnly_2 = 1;
		__this->___persentsY_3 = (100.0f);
		__this->____scaleFactorY_4 = (1.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenScaler::Awake()
extern "C" void ScreenScaler_Awake_m1939 (ScreenScaler_t368 * __this, const MethodInfo* method)
{
	Vector3_t449  V_0 = {0};
	Vector3_t449  V_1 = {0};
	Vector3_t449  V_2 = {0};
	{
		Transform_t364 * L_0 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t449  L_1 = Transform_get_localScale_m3449(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		__this->____scaleFactorY_4 = L_2;
		Transform_t364 * L_3 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t449  L_4 = Transform_get_localScale_m3449(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___x_1);
		Transform_t364 * L_6 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t449  L_7 = Transform_get_localScale_m3449(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = ((&V_2)->___y_2);
		__this->____xScaleDiff_5 = ((float)((float)L_5/(float)L_8));
		bool L_9 = (__this->___calulateStartOnly_2);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		ScreenScaler_placementCalculation_m1941(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void ScreenScaler::Update()
extern "C" void ScreenScaler_Update_m1940 (ScreenScaler_t368 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenScaler_placementCalculation_m1941(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenScaler::placementCalculation()
extern TypeInfo* PreviewScreenUtil_t363_il2cpp_TypeInfo_var;
extern "C" void ScreenScaler_placementCalculation_m1941 (ScreenScaler_t368 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t594  V_1 = {0};
	Vector3_t449  V_2 = {0};
	Vector3_t449  V_3 = {0};
	Vector3_t449  V_4 = {0};
	Vector3_t449  V_5 = {0};
	Vector3_t449  V_6 = {0};
	{
		int32_t L_0 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___persentsY_3);
		V_0 = ((float)((float)((float)((float)(((float)L_0))/(float)(100.0f)))*(float)L_1));
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		Rect_t594  L_3 = PreviewScreenUtil_getObjectBounds_m1920(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_height_m3443((&V_1), /*hidden argument*/NULL);
		float L_5 = V_0;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0078;
	}

IL_0032:
	{
		GameObject_t310 * L_6 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		Rect_t594  L_7 = PreviewScreenUtil_getObjectBounds_m1920(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t364 * L_8 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		float L_9 = (__this->____scaleFactorY_4);
		float L_10 = (__this->____xScaleDiff_5);
		float L_11 = (__this->____scaleFactorY_4);
		Vector3_t449  L_12 = {0};
		Vector3__ctor_m3439(&L_12, ((float)((float)L_9*(float)L_10)), L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m3450(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = (__this->____scaleFactorY_4);
		__this->____scaleFactorY_4 = ((float)((float)L_13+(float)(0.1f)));
	}

IL_0078:
	{
		float L_14 = Rect_get_height_m3443((&V_1), /*hidden argument*/NULL);
		float L_15 = V_0;
		if ((((float)L_14) < ((float)L_15)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_0128;
	}

IL_008a:
	{
		goto IL_011b;
	}

IL_008f:
	{
		GameObject_t310 * L_16 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		Rect_t594  L_17 = PreviewScreenUtil_getObjectBounds_m1920(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Transform_t364 * L_18 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		Transform_t364 * L_19 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t449  L_20 = Transform_get_localScale_m3449(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___x_1);
		Transform_t364 * L_22 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t449  L_23 = Transform_get_localScale_m3449(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = ((&V_3)->___x_1);
		Transform_t364 * L_25 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t449  L_26 = Transform_get_localScale_m3449(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		float L_27 = ((&V_4)->___y_2);
		Transform_t364 * L_28 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t449  L_29 = Transform_get_localScale_m3449(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		float L_30 = ((&V_5)->___y_2);
		Transform_t364 * L_31 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t449  L_32 = Transform_get_localScale_m3449(L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		float L_33 = ((&V_6)->___z_3);
		Vector3_t449  L_34 = {0};
		Vector3__ctor_m3439(&L_34, ((float)((float)L_21-(float)((float)((float)L_24*(float)(0.1f))))), ((float)((float)L_27-(float)((float)((float)L_30*(float)(0.1f))))), L_33, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m3450(L_18, L_34, /*hidden argument*/NULL);
	}

IL_011b:
	{
		float L_35 = Rect_get_height_m3443((&V_1), /*hidden argument*/NULL);
		float L_36 = V_0;
		if ((((float)L_35) > ((float)L_36)))
		{
			goto IL_008f;
		}
	}

IL_0128:
	{
		return;
	}
}
// XScaleModifayer
#include "AssemblyU2DCSharp_XScaleModifayer.h"
#ifndef _MSC_VER
#else
#endif
// XScaleModifayer
#include "AssemblyU2DCSharp_XScaleModifayerMethodDeclarations.h"



// System.Void XScaleModifayer::.ctor()
extern "C" void XScaleModifayer__ctor_m1942 (XScaleModifayer_t369 * __this, const MethodInfo* method)
{
	{
		__this->___XMaxSize_2 = (10.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XScaleModifayer::Awake()
extern "C" void XScaleModifayer_Awake_m1943 (XScaleModifayer_t369 * __this, const MethodInfo* method)
{
	{
		XScaleModifayer_Calculate_m1945(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XScaleModifayer::FixedUpdate()
extern "C" void XScaleModifayer_FixedUpdate_m1944 (XScaleModifayer_t369 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_4);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		XScaleModifayer_Calculate_m1945(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void XScaleModifayer::Calculate()
extern TypeInfo* PreviewScreenUtil_t363_il2cpp_TypeInfo_var;
extern "C" void XScaleModifayer_Calculate_m1945 (XScaleModifayer_t369 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(320);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t594  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t363_il2cpp_TypeInfo_var);
		Rect_t594  L_1 = PreviewScreenUtil_getObjectBounds_m1920(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___XMaxSize_2);
		V_1 = ((float)((float)((float)((float)(((float)L_2))/(float)(100.0f)))*(float)L_3));
		float L_4 = Rect_get_width_m3442((&V_0), /*hidden argument*/NULL);
		float L_5 = V_1;
		if ((!(((float)L_4) < ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		bool L_6 = (__this->___scaleDownOnly_3);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		return;
	}

IL_0039:
	{
		float L_7 = V_1;
		float L_8 = Rect_get_width_m3442((&V_0), /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7/(float)L_8));
		Transform_t364 * L_9 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		Transform_t364 * L_10 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t449  L_11 = Transform_get_localScale_m3449(L_10, /*hidden argument*/NULL);
		float L_12 = V_2;
		Vector3_t449  L_13 = Vector3_op_Multiply_m3451(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m3450(L_9, L_13, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.AbstractFacebook
#include "AssemblyU2DCSharp_Facebook_AbstractFacebookMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Generic.List`1<Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegate.h"
// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegate.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegate.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_gen.h"
// Facebook.OGActionType
#include "AssemblyU2DCSharp_Facebook_OGActionType.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethod.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWForm.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0.h"
// FBResult
#include "AssemblyU2DCSharp_FBResult.h"
// System.Collections.Generic.List`1/Enumerator<Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Collections.Generic.List`1<Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_20MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"
// Facebook.AsyncRequestString
#include "AssemblyU2DCSharp_Facebook_AsyncRequestStringMethodDeclarations.h"
// UnityEngine.WWWForm
#include "UnityEngine_UnityEngine_WWWFormMethodDeclarations.h"
// Facebook.MiniJSON.Json
#include "AssemblyU2DCSharp_Facebook_MiniJSON_JsonMethodDeclarations.h"
// FBResult
#include "AssemblyU2DCSharp_FBResultMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8MethodDeclarations.h"
// Facebook.FacebookDelegate
#include "AssemblyU2DCSharp_Facebook_FacebookDelegateMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1MethodDeclarations.h"


// System.Void Facebook.AbstractFacebook::.ctor()
extern "C" void AbstractFacebook__ctor_m1946 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::Awake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t370_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t371_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3452_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3453_MethodInfo_var;
extern "C" void AbstractFacebook_Awake_m1947 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		List_1_t370_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(323);
		Dictionary_2_t371_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(324);
		List_1__ctor_m3452_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484044);
		Dictionary_2__ctor_m3453_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484045);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___isInitialized_4 = 0;
		__this->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userId_6 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___accessToken_7 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_2 = ((DateTime_t245_StaticFields*)DateTime_t245_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		__this->___accessTokenExpiresAt_8 = L_2;
		List_1_t370 * L_3 = (List_1_t370 *)il2cpp_codegen_object_new (List_1_t370_il2cpp_TypeInfo_var);
		List_1__ctor_m3452(L_3, /*hidden argument*/List_1__ctor_m3452_MethodInfo_var);
		__this->___authDelegates_10 = L_3;
		__this->___nextAsyncId_11 = 0;
		Dictionary_2_t371 * L_4 = (Dictionary_2_t371 *)il2cpp_codegen_object_new (Dictionary_2_t371_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3453(L_4, /*hidden argument*/Dictionary_2__ctor_m3453_MethodInfo_var);
		__this->___facebookDelegates_12 = L_4;
		VirtActionInvoker0::Invoke(4 /* System.Void Facebook.AbstractFacebook::OnAwake() */, __this);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C" bool AbstractFacebook_get_IsInitialized_m1948 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isInitialized_4);
		return L_0;
	}
}
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C" bool AbstractFacebook_get_IsLoggedIn_m1949 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLoggedIn_5);
		return L_0;
	}
}
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C" String_t* AbstractFacebook_get_UserId_m1950 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___userId_6);
		return L_0;
	}
}
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C" void AbstractFacebook_set_UserId_m1951 (AbstractFacebook_t372 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___userId_6 = L_0;
		return;
	}
}
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C" String_t* AbstractFacebook_get_AccessToken_m1952 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___accessToken_7);
		return L_0;
	}
}
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C" void AbstractFacebook_set_AccessToken_m1953 (AbstractFacebook_t372 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___accessToken_7 = L_0;
		return;
	}
}
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C" DateTime_t245  AbstractFacebook_get_AccessTokenExpiresAt_m1954 (AbstractFacebook_t372 * __this, const MethodInfo* method)
{
	{
		DateTime_t245  L_0 = (__this->___accessTokenExpiresAt_8);
		return L_0;
	}
}
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_GetAuthResponse_m1955 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1959(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AppRequest_m1956 (AbstractFacebook_t372 * __this, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		StringU5BU5D_t45* L_1 = ___to;
		List_1_t583 * L_2 = ___filters;
		StringU5BU5D_t45* L_3 = ___excludeIds;
		Nullable_1_t589  L_4 = ___maxRecipients;
		String_t* L_5 = ___data;
		String_t* L_6 = ___title;
		FacebookDelegate_t391 * L_7 = ___callback;
		VirtActionInvoker10< String_t*, OGActionType_t390 *, String_t*, StringU5BU5D_t45*, List_1_t583 *, StringU5BU5D_t45*, Nullable_1_t589 , String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, __this, L_0, (OGActionType_t390 *)NULL, (String_t*)NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3098_MethodInfo_var;
extern "C" void AbstractFacebook_API_m1957 (AbstractFacebook_t372 * __this, String_t* ___query, HttpMethod_t406 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Dictionary_2__ctor_m3098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	Dictionary_2_t80 * G_B3_0 = {0};
	{
		Dictionary_2_t80 * L_0 = ___formData;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_t80 * L_1 = ___formData;
		Dictionary_2_t80 * L_2 = AbstractFacebook_CopyByValue_m1963(__this, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0012:
	{
		Dictionary_2_t80 * L_3 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3098(L_3, /*hidden argument*/Dictionary_2__ctor_m3098_MethodInfo_var);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		Dictionary_2_t80 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_4, (String_t*) &_stringLiteral513);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_6 = ___query;
		NullCheck(L_6);
		bool L_7 = String_Contains_m3145(L_6, (String_t*) &_stringLiteral707, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t80 * L_8 = V_0;
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral513, L_9);
	}

IL_0049:
	{
		String_t* L_10 = ___query;
		String_t* L_11 = AbstractFacebook_GetGraphUrl_m1964(__this, L_10, /*hidden argument*/NULL);
		HttpMethod_t406 * L_12 = ___method;
		Dictionary_2_t80 * L_13 = V_0;
		FacebookDelegate_t391 * L_14 = ___callback;
		AsyncRequestString_Request_m2203(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern TypeInfo* WWWForm_t70_il2cpp_TypeInfo_var;
extern "C" void AbstractFacebook_API_m1958 (AbstractFacebook_t372 * __this, String_t* ___query, HttpMethod_t406 * ___method, WWWForm_t70 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWForm_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		s_Il2CppMethodIntialized = true;
	}
	{
		WWWForm_t70 * L_0 = ___formData;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		WWWForm_t70 * L_1 = (WWWForm_t70 *)il2cpp_codegen_object_new (WWWForm_t70_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3106(L_1, /*hidden argument*/NULL);
		___formData = L_1;
	}

IL_000d:
	{
		WWWForm_t70 * L_2 = ___formData;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_2);
		WWWForm_AddField_m3108(L_2, (String_t*) &_stringLiteral513, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___query;
		String_t* L_5 = AbstractFacebook_GetGraphUrl_m1964(__this, L_4, /*hidden argument*/NULL);
		HttpMethod_t406 * L_6 = ___method;
		WWWForm_t70 * L_7 = ___formData;
		FacebookDelegate_t391 * L_8 = ___callback;
		AsyncRequestString_Request_m2202(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AddAuthDelegate_m1959 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		List_1_t370 * L_0 = (__this->___authDelegates_10);
		FacebookDelegate_t391 * L_1 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker1< FacebookDelegate_t391 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Facebook.FacebookDelegate>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t664_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3454_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3455_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3456_MethodInfo_var;
extern "C" void AbstractFacebook_OnAuthResponse_m1960 (AbstractFacebook_t372 * __this, FBResult_t239 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Enumerator_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(325);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		List_1_GetEnumerator_m3454_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484046);
		Enumerator_get_Current_m3455_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484047);
		Enumerator_MoveNext_m3456_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484048);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	FBResult_t239 * V_1 = {0};
	FacebookDelegate_t391 * V_2 = {0};
	Enumerator_t664  V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		bool L_2 = AbstractFacebook_get_IsLoggedIn_m1949(__this, /*hidden argument*/NULL);
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral708, L_4);
		Dictionary_2_t270 * L_5 = V_0;
		String_t* L_6 = AbstractFacebook_get_UserId_m1950(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral709, L_6);
		Dictionary_2_t270 * L_7 = V_0;
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral513, L_8);
		Dictionary_2_t270 * L_9 = V_0;
		DateTime_t245  L_10 = (DateTime_t245 )VirtFuncInvoker0< DateTime_t245  >::Invoke(7 /* System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt() */, __this);
		DateTime_t245  L_11 = L_10;
		Object_t * L_12 = Box(DateTime_t245_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral710, L_12);
		Dictionary_2_t270 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_14 = Json_Serialize_m2239(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		FBResult_t239 * L_15 = ___result;
		NullCheck(L_15);
		String_t* L_16 = FBResult_get_Error_m2022(L_15, /*hidden argument*/NULL);
		FBResult_t239 * L_17 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_17, L_14, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		List_1_t370 * L_18 = (__this->___authDelegates_10);
		NullCheck(L_18);
		Enumerator_t664  L_19 = List_1_GetEnumerator_m3454(L_18, /*hidden argument*/List_1_GetEnumerator_m3454_MethodInfo_var);
		V_3 = L_19;
	}

IL_0072:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008c;
		}

IL_0077:
		{
			FacebookDelegate_t391 * L_20 = Enumerator_get_Current_m3455((&V_3), /*hidden argument*/Enumerator_get_Current_m3455_MethodInfo_var);
			V_2 = L_20;
			FacebookDelegate_t391 * L_21 = V_2;
			if (!L_21)
			{
				goto IL_008c;
			}
		}

IL_0085:
		{
			FacebookDelegate_t391 * L_22 = V_2;
			FBResult_t239 * L_23 = V_1;
			NullCheck(L_22);
			VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_22, L_23);
		}

IL_008c:
		{
			bool L_24 = Enumerator_MoveNext_m3456((&V_3), /*hidden argument*/Enumerator_MoveNext_m3456_MethodInfo_var);
			if (L_24)
			{
				goto IL_0077;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xA9, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		Enumerator_t664  L_25 = V_3;
		Enumerator_t664  L_26 = L_25;
		Object_t * L_27 = Box(Enumerator_t664_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_27);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00a9:
	{
		List_1_t370 * L_28 = (__this->___authDelegates_10);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<Facebook.FacebookDelegate>::Clear() */, L_28);
		return;
	}
}
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C" String_t* AbstractFacebook_AddFacebookDelegate_m1961 (AbstractFacebook_t372 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nextAsyncId_11);
		__this->___nextAsyncId_11 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t371 * L_1 = (__this->___facebookDelegates_12);
		int32_t* L_2 = &(__this->___nextAsyncId_11);
		String_t* L_3 = Int32_ToString_m164(L_2, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_4 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, FacebookDelegate_t391 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::Add(!0,!1) */, L_1, L_3, L_4);
		int32_t* L_5 = &(__this->___nextAsyncId_11);
		String_t* L_6 = Int32_ToString_m164(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C" void AbstractFacebook_OnFacebookResponse_m1962 (AbstractFacebook_t372 * __this, String_t* ___uniqueId, FBResult_t239 * ___result, const MethodInfo* method)
{
	FacebookDelegate_t391 * V_0 = {0};
	{
		Dictionary_2_t371 * L_0 = (__this->___facebookDelegates_12);
		String_t* L_1 = ___uniqueId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, String_t*, FacebookDelegate_t391 ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		FacebookDelegate_t391 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		FacebookDelegate_t391 * L_4 = V_0;
		FBResult_t239 * L_5 = ___result;
		NullCheck(L_4);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_4, L_5);
	}

IL_0020:
	{
		Dictionary_2_t371 * L_6 = (__this->___facebookDelegates_12);
		String_t* L_7 = ___uniqueId;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::Remove(!0) */, L_6, L_7);
	}

IL_002d:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t259_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3457_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3311_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3312_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3313_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3314_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3315_MethodInfo_var;
extern "C" Dictionary_2_t80 * AbstractFacebook_CopyByValue_m1963 (AbstractFacebook_t372 * __this, Dictionary_2_t80 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m3457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		Dictionary_2_GetEnumerator_m3311_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483916);
		Enumerator_get_Current_m3312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483917);
		KeyValuePair_2_get_Key_m3313_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483918);
		KeyValuePair_2_get_Value_m3314_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483919);
		Enumerator_MoveNext_m3315_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	KeyValuePair_2_t260  V_1 = {0};
	Enumerator_t259  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t80 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_0);
		Dictionary_2_t80 * L_2 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3457(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m3457_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t80 * L_3 = ___data;
		NullCheck(L_3);
		Enumerator_t259  L_4 = Dictionary_2_GetEnumerator_m3311(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3311_MethodInfo_var);
		V_2 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0018:
		{
			KeyValuePair_2_t260  L_5 = Enumerator_get_Current_m3312((&V_2), /*hidden argument*/Enumerator_get_Current_m3312_MethodInfo_var);
			V_1 = L_5;
			Dictionary_2_t80 * L_6 = V_0;
			String_t* L_7 = KeyValuePair_2_get_Key_m3313((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3313_MethodInfo_var);
			String_t* L_8 = KeyValuePair_2_get_Value_m3314((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3314_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Copy_m3458(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_6, L_7, L_9);
		}

IL_0039:
		{
			bool L_10 = Enumerator_MoveNext_m3315((&V_2), /*hidden argument*/Enumerator_MoveNext_m3315_MethodInfo_var);
			if (L_10)
			{
				goto IL_0018;
			}
		}

IL_0045:
		{
			IL2CPP_LEAVE(0x56, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t259  L_11 = V_2;
		Enumerator_t259  L_12 = L_11;
		Object_t * L_13 = Box(Enumerator_t259_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_13);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0056:
	{
		Dictionary_2_t80 * L_14 = V_0;
		return L_14;
	}
}
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AbstractFacebook_GetGraphUrl_m1964 (AbstractFacebook_t372 * __this, String_t* ___query, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___query;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m3459(L_0, (String_t*) &_stringLiteral418, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = ___query;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral418, L_2, /*hidden argument*/NULL);
		___query = L_3;
	}

IL_001d:
	{
		String_t* L_4 = ___query;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral494, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// FB/AppEvents
#include "AssemblyU2DCSharp_FB_AppEvents.h"
#ifndef _MSC_VER
#else
#endif
// FB/AppEvents
#include "AssemblyU2DCSharp_FB_AppEventsMethodDeclarations.h"

// FB
#include "AssemblyU2DCSharp_FB.h"
// FB
#include "AssemblyU2DCSharp_FBMethodDeclarations.h"


// System.Void FB/AppEvents::.ctor()
extern "C" void AppEvents__ctor_m1965 (AppEvents_t373 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FB/AppEvents::get_LimitEventUsage()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" bool AppEvents_get_LimitEventUsage_m1966 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Void FB/AppEvents::set_LimitEventUsage(System.Boolean)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void AppEvents_set_LimitEventUsage_m1967 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void FB/AppEvents::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void AppEvents_LogEvent_m1968 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___logEvent;
		Nullable_1_t590  L_2 = ___valueToSum;
		Dictionary_2_t270 * L_3 = ___parameters;
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, Nullable_1_t590 , Dictionary_2_t270 * >::Invoke(25 /* System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void FB/AppEvents::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void AppEvents_LogPurchase_m1969 (Object_t * __this /* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___logPurchase;
		String_t* L_2 = ___currency;
		Dictionary_2_t270 * L_3 = ___parameters;
		NullCheck(L_0);
		VirtActionInvoker3< float, String_t*, Dictionary_2_t270 * >::Invoke(26 /* System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// FB/Canvas
#include "AssemblyU2DCSharp_FB_Canvas.h"
#ifndef _MSC_VER
#else
#endif
// FB/Canvas
#include "AssemblyU2DCSharp_FB_CanvasMethodDeclarations.h"



// System.Void FB/Canvas::.ctor()
extern "C" void Canvas__ctor_m1970 (Canvas_t374 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void Canvas_Pay_m1971 (Object_t * __this /* static, unused */, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___product;
		String_t* L_2 = ___action;
		int32_t L_3 = ___quantity;
		Nullable_1_t589  L_4 = ___quantityMin;
		Nullable_1_t589  L_5 = ___quantityMax;
		String_t* L_6 = ___requestId;
		String_t* L_7 = ___pricepointId;
		String_t* L_8 = ___testCurrency;
		FacebookDelegate_t391 * L_9 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker9< String_t*, String_t*, int32_t, Nullable_1_t589 , Nullable_1_t589 , String_t*, String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(17 /* System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
// FB/Android
#include "AssemblyU2DCSharp_FB_Android.h"
#ifndef _MSC_VER
#else
#endif
// FB/Android
#include "AssemblyU2DCSharp_FB_AndroidMethodDeclarations.h"

// Facebook.AndroidFacebook
#include "AssemblyU2DCSharp_Facebook_AndroidFacebook.h"
// Facebook.AndroidFacebook
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookMethodDeclarations.h"


// System.Void FB/Android::.ctor()
extern "C" void Android__ctor_m1972 (Android_t375 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String FB/Android::get_KeyHash()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidFacebook_t392_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Android_get_KeyHash_m1973 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		AndroidFacebook_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(326);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	AndroidFacebook_t392 * V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		V_0 = ((AndroidFacebook_t392 *)IsInst(L_0, AndroidFacebook_t392_il2cpp_TypeInfo_var));
		AndroidFacebook_t392 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_1, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		AndroidFacebook_t392 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = AndroidFacebook_get_KeyHash_m2056(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0027;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_5;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// FB/CompiledFacebookLoader
#include "AssemblyU2DCSharp_FB_CompiledFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// FB/CompiledFacebookLoader
#include "AssemblyU2DCSharp_FB_CompiledFacebookLoaderMethodDeclarations.h"



// System.Void FB/CompiledFacebookLoader::.ctor()
extern "C" void CompiledFacebookLoader__ctor_m1974 (CompiledFacebookLoader_t376 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb()
// System.Void FB/CompiledFacebookLoader::Start()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void CompiledFacebookLoader_Start_m1975 (CompiledFacebookLoader_t376 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		AbstractFacebook_t372 * L_0 = (AbstractFacebook_t372 *)VirtFuncInvoker0< AbstractFacebook_t372 * >::Invoke(4 /* Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4 = L_0;
		FB_OnDllLoaded_m1987(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Destroy_m3305(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.NullReferenceException
#include "mscorlib_System_NullReferenceException.h"
// Facebook.FBBuildVersionAttribute
#include "AssemblyU2DCSharp_Facebook_FBBuildVersionAttribute.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// Facebook.IOSFacebookLoader
#include "AssemblyU2DCSharp_Facebook_IOSFacebookLoader.h"
// Facebook.IfNotExist
#include "AssemblyU2DCSharp_Facebook_IfNotExist.h"
// System.NullReferenceException
#include "mscorlib_System_NullReferenceExceptionMethodDeclarations.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"
// FBSettings
#include "AssemblyU2DCSharp_FBSettingsMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Facebook.FBBuildVersionAttribute
#include "AssemblyU2DCSharp_Facebook_FBBuildVersionAttributeMethodDeclarations.h"
// FBDebug
#include "AssemblyU2DCSharp_FBDebugMethodDeclarations.h"
// Facebook.FBComponentFactory
#include "AssemblyU2DCSharp_Facebook_FBComponentFactoryMethodDeclarations.h"
struct FBComponentFactory_t386;
struct IOSFacebookLoader_t403;
// Facebook.FBComponentFactory
#include "AssemblyU2DCSharp_Facebook_FBComponentFactory.h"
struct FBComponentFactory_t386;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
extern "C" Object_t * FBComponentFactory_GetComponent_TisObject_t_m3461_gshared (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method);
#define FBComponentFactory_GetComponent_TisObject_t_m3461(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebookLoader_t403_m3460(__this /* static, unused */, p0, method) (( IOSFacebookLoader_t403 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void FB::.ctor()
extern "C" void FB__ctor_m1976 (FB_t379 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m3184(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::.cctor()
extern "C" void FB__cctor_m1977 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// Facebook.AbstractFacebook FB::get_FacebookImpl()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t665_il2cpp_TypeInfo_var;
extern "C" AbstractFacebook_t372 * FB_get_FacebookImpl_m1978 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		NullReferenceException_t665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(327);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t665 * L_2 = (NullReferenceException_t665 *)il2cpp_codegen_object_new (NullReferenceException_t665_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3462(L_2, (String_t*) &_stringLiteral711, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_3 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		return L_3;
	}
}
// System.String FB::get_AppId()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AppId_m1979 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		return L_0;
	}
}
// System.String FB::get_UserId()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_UserId_m1980 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		String_t* L_3 = AbstractFacebook_get_UserId_m1950(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.String FB::get_AccessToken()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AccessToken_m1981 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, L_2);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.DateTime FB::get_AccessTokenExpiresAt()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern "C" DateTime_t245  FB_get_AccessTokenExpiresAt_m1982 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t245  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		DateTime_t245  L_3 = (DateTime_t245 )VirtFuncInvoker0< DateTime_t245  >::Invoke(7 /* System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt() */, L_2);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_4 = ((DateTime_t245_StaticFields*)DateTime_t245_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Boolean FB::get_IsLoggedIn()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsLoggedIn_m1983 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsLoggedIn_m1949(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Boolean FB::get_IsInitialized()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsInitialized_m1984 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_2 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsInitialized_m1948(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Void FB::Init(Facebook.InitDelegate,Facebook.HideUnityDelegate,System.String)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_Init_m1985 (Object_t * __this /* static, unused */, InitDelegate_t377 * ___onInitComplete, HideUnityDelegate_t378 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		InitDelegate_t377 * L_0 = ___onInitComplete;
		String_t* L_1 = FBSettings_get_AppId_m2036(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = FBSettings_get_Cookie_m2038(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = FBSettings_get_Logging_m2040(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = FBSettings_get_Status_m2042(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_5 = FBSettings_get_Xfbml_m2044(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = FBSettings_get_FrictionlessRequests_m2049(NULL /*static, unused*/, /*hidden argument*/NULL);
		HideUnityDelegate_t378 * L_7 = ___onHideUnity;
		String_t* L_8 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_Init_m1986(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
extern const Il2CppType* AbstractFacebook_t372_0_0_0_var;
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebookLoader_t403_m3460_MethodInfo_var;
extern "C" void FB_Init_m1986 (Object_t * __this /* static, unused */, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AbstractFacebook_t372_0_0_0_var = il2cpp_codegen_type_from_index(328);
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t403_m3460_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484050);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t383 * V_0 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___appId_7 = L_0;
		bool L_1 = ___cookie;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___cookie_8 = L_1;
		bool L_2 = ___logging;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___logging_9 = L_2;
		bool L_3 = ___status;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___status_10 = L_3;
		bool L_4 = ___xfbml;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___xfbml_11 = L_4;
		bool L_5 = ___frictionlessRequests;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12 = L_5;
		String_t* L_6 = ___authResponse;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___authResponse_5 = L_6;
		InitDelegate_t377 * L_7 = ___onInitComplete;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2 = L_7;
		HideUnityDelegate_t378 * L_8 = ___onHideUnity;
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3 = L_8;
		bool L_9 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6;
		if (L_9)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m3463(NULL /*static, unused*/, LoadTypeToken(AbstractFacebook_t372_0_0_0_var), /*hidden argument*/NULL);
		FBBuildVersionAttribute_t383 * L_11 = FBBuildVersionAttribute_GetVersionAttributeOfType_m2010(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		FBBuildVersionAttribute_t383 * L_12 = V_0;
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		FBDebug_Warn_m2016(NULL /*static, unused*/, (String_t*) &_stringLiteral712, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_006a:
	{
		FBBuildVersionAttribute_t383 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = FBBuildVersionAttribute_get_SdkVersion_m2007(L_13, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t383 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = FBBuildVersionAttribute_get_BuildVersion_m2008(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m3464(NULL /*static, unused*/, (String_t*) &_stringLiteral713, L_14, L_16, /*hidden argument*/NULL);
		FBDebug_Info_m2015(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_0085:
	{
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t403_m3460(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebookLoader_t403_m3460_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6 = 1;
		return;
	}

IL_0093:
	{
		FBDebug_Warn_m2016(NULL /*static, unused*/, (String_t*) &_stringLiteral714, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_18 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_19 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_18, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_OnDllLoaded_m1987(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void FB::OnDllLoaded()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FB_OnDllLoaded_m1987 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t383 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m3465(L_0, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t383 * L_2 = FBBuildVersionAttribute_GetVersionAttributeOfType_m2010(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		FBBuildVersionAttribute_t383 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		FBBuildVersionAttribute_t383 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = FBBuildVersionAttribute_get_SdkVersion_m2007(L_4, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t383 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = FBBuildVersionAttribute_get_BuildVersion_m2008(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m3464(NULL /*static, unused*/, (String_t*) &_stringLiteral715, L_5, L_7, /*hidden argument*/NULL);
		FBDebug_Log_m2014(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_9 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		InitDelegate_t377 * L_10 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2;
		String_t* L_11 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		bool L_12 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___cookie_8;
		bool L_13 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___logging_9;
		bool L_14 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___status_10;
		bool L_15 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___xfbml_11;
		String_t* L_16 = FBSettings_get_ChannelUrl_m2048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___authResponse_5;
		bool L_18 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12;
		HideUnityDelegate_t378 * L_19 = ((FB_t379_StaticFields*)FB_t379_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3;
		NullCheck(L_9);
		VirtActionInvoker10< InitDelegate_t377 *, String_t*, bool, bool, bool, bool, String_t*, String_t*, bool, HideUnityDelegate_t378 * >::Invoke(10 /* System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate) */, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19);
		return;
	}
}
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_Login_m1988 (Object_t * __this /* static, unused */, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		FacebookDelegate_t391 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t391 * >::Invoke(11 /* System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::Logout()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_Logout_m1989 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void Facebook.AbstractFacebook::Logout() */, L_0);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t589_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1990 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Nullable_1_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(108);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t589  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t390 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		StringU5BU5D_t45* L_4 = ___to;
		Initobj (Nullable_1_t589_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t589  L_5 = V_0;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t391 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t390 *, String_t*, StringU5BU5D_t45*, List_1_t583 *, StringU5BU5D_t45*, Nullable_1_t589 , String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, (List_1_t583 *)NULL, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1991 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t390 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		List_1_t583 * L_4 = ___filters;
		StringU5BU5D_t45* L_5 = ___excludeIds;
		Nullable_1_t589  L_6 = ___maxRecipients;
		String_t* L_7 = ___data;
		String_t* L_8 = ___title;
		FacebookDelegate_t391 * L_9 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t390 *, String_t*, StringU5BU5D_t45*, List_1_t583 *, StringU5BU5D_t45*, Nullable_1_t589 , String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, (StringU5BU5D_t45*)(StringU5BU5D_t45*)NULL, L_4, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m1992 (Object_t * __this /* static, unused */, String_t* ___message, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		StringU5BU5D_t45* L_2 = ___to;
		List_1_t583 * L_3 = ___filters;
		StringU5BU5D_t45* L_4 = ___excludeIds;
		Nullable_1_t589  L_5 = ___maxRecipients;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t391 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t390 *, String_t*, StringU5BU5D_t45*, List_1_t583 *, StringU5BU5D_t45*, Nullable_1_t589 , String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, (OGActionType_t390 *)NULL, (String_t*)NULL, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_Feed_m1993 (Object_t * __this /* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___toId;
		String_t* L_2 = ___link;
		String_t* L_3 = ___linkName;
		String_t* L_4 = ___linkCaption;
		String_t* L_5 = ___linkDescription;
		String_t* L_6 = ___picture;
		String_t* L_7 = ___mediaSource;
		String_t* L_8 = ___actionName;
		String_t* L_9 = ___actionLink;
		String_t* L_10 = ___reference;
		Dictionary_2_t74 * L_11 = ___properties;
		FacebookDelegate_t391 * L_12 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker12< String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, Dictionary_2_t74 *, FacebookDelegate_t391 * >::Invoke(16 /* System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_API_m1994 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t406 * ___method, FacebookDelegate_t391 * ___callback, Dictionary_2_t80 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t406 * L_2 = ___method;
		Dictionary_2_t80 * L_3 = ___formData;
		FacebookDelegate_t391 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t406 *, Dictionary_2_t80 *, FacebookDelegate_t391 * >::Invoke(20 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_API_m1995 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t406 * ___method, FacebookDelegate_t391 * ___callback, WWWForm_t70 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t406 * L_2 = ___method;
		WWWForm_t70 * L_3 = ___formData;
		FacebookDelegate_t391 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t406 *, WWWForm_t70 *, FacebookDelegate_t391 * >::Invoke(21 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_PublishInstall_m1996 (Object_t * __this /* static, unused */, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m1979(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t391 * >::Invoke(22 /* System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::ActivateApp()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_ActivateApp_m1997 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m1979(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Facebook.AbstractFacebook::ActivateApp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_GetDeepLink_m1998 (Object_t * __this /* static, unused */, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_1 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker1< FacebookDelegate_t391 * >::Invoke(24 /* System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupCreate_m1999 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		String_t* L_2 = ___description;
		String_t* L_3 = ___privacy;
		FacebookDelegate_t391 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, String_t*, String_t*, FacebookDelegate_t391 * >::Invoke(18 /* System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupJoin_m2000 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		AbstractFacebook_t372 * L_0 = FB_get_FacebookImpl_m1978(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___id;
		FacebookDelegate_t391 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t391 * >::Invoke(19 /* System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// Facebook.FBAppEventName
#include "AssemblyU2DCSharp_Facebook_FBAppEventName.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FBAppEventName
#include "AssemblyU2DCSharp_Facebook_FBAppEventNameMethodDeclarations.h"



// System.Void Facebook.FBAppEventName::.ctor()
extern "C" void FBAppEventName__ctor_m2001 (FBAppEventName_t380 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.FBAppEventParameterName
#include "AssemblyU2DCSharp_Facebook_FBAppEventParameterName.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.FBAppEventParameterName
#include "AssemblyU2DCSharp_Facebook_FBAppEventParameterNameMethodDeclarations.h"



// System.Void Facebook.FBAppEventParameterName::.ctor()
extern "C" void FBAppEventParameterName__ctor_m2002 (FBAppEventParameterName_t381 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroup.h"
#ifndef _MSC_VER
#else
#endif
// FBAppRequestsFilterGroup
#include "AssemblyU2DCSharp_FBAppRequestsFilterGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1.h"


// System.Void FBAppRequestsFilterGroup::.ctor(System.String,System.Collections.Generic.List`1<System.String>)
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void FBAppRequestsFilterGroup__ctor_m2003 (FBAppRequestsFilterGroup_t382 * __this, String_t* ___name, List_1_t73 * ___user_ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2__ctor_m3118(__this, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		String_t* L_0 = ___name;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral421, L_0);
		List_1_t73 * L_1 = ___user_ids;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral716, L_1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "Assembly-CSharp_ArrayTypes.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"


// System.Void Facebook.FBBuildVersionAttribute::.ctor(System.String,System.String)
extern TypeInfo* CharU5BU5D_t607_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t666_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern "C" void FBBuildVersionAttribute__ctor_m2004 (FBBuildVersionAttribute_t383 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(109);
		CultureInfo_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t45* V_0 = {0};
	{
		Attribute__ctor_m3466(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buildVersion;
		__this->___buildVersion_2 = L_0;
		String_t* L_1 = ___buildVersion;
		CharU5BU5D_t607* L_2 = ((CharU5BU5D_t607*)SZArrayNew(CharU5BU5D_t607_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_1);
		StringU5BU5D_t45* L_3 = String_Split_m3115(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t45* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t666_il2cpp_TypeInfo_var);
		CultureInfo_t666 * L_6 = CultureInfo_get_InvariantCulture_m3467(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_7 = DateTime_ParseExact_m3468(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), (String_t*) &_stringLiteral717, L_6, /*hidden argument*/NULL);
		__this->___buildDate_0 = L_7;
		StringU5BU5D_t45* L_8 = V_0;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		int32_t L_9 = 1;
		__this->___buildHash_1 = (*(String_t**)(String_t**)SZArrayLdElema(L_8, L_9));
		String_t* L_10 = ___sdkVersion;
		__this->___sdkVersion_3 = L_10;
		return;
	}
}
// System.DateTime Facebook.FBBuildVersionAttribute::get_Date()
extern "C" DateTime_t245  FBBuildVersionAttribute_get_Date_m2005 (FBBuildVersionAttribute_t383 * __this, const MethodInfo* method)
{
	{
		DateTime_t245  L_0 = (__this->___buildDate_0);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
extern "C" String_t* FBBuildVersionAttribute_get_Hash_m2006 (FBBuildVersionAttribute_t383 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildHash_1);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
extern "C" String_t* FBBuildVersionAttribute_get_SdkVersion_m2007 (FBBuildVersionAttribute_t383 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___sdkVersion_3);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
extern "C" String_t* FBBuildVersionAttribute_get_BuildVersion_m2008 (FBBuildVersionAttribute_t383 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::ToString()
extern "C" String_t* FBBuildVersionAttribute_ToString_m2009 (FBBuildVersionAttribute_t383 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
extern "C" FBBuildVersionAttribute_t383 * FBBuildVersionAttribute_GetVersionAttributeOfType_m2010 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	FBBuildVersionAttribute_t383 * V_0 = {0};
	FBBuildVersionAttributeU5BU5D_t595* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type;
		FBBuildVersionAttributeU5BU5D_t595* L_1 = FBBuildVersionAttribute_getAttributes_m2011(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0018;
	}

IL_000e:
	{
		FBBuildVersionAttributeU5BU5D_t595* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(FBBuildVersionAttribute_t383 **)(FBBuildVersionAttribute_t383 **)SZArrayLdElema(L_2, L_4));
		FBBuildVersionAttribute_t383 * L_5 = V_0;
		return L_5;
	}
	// Dead block : IL_0014: ldloc.2

IL_0018:
	{
		int32_t L_6 = V_2;
		FBBuildVersionAttributeU5BU5D_t595* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return (FBBuildVersionAttribute_t383 *)NULL;
	}
}
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
extern const Il2CppType* FBBuildVersionAttribute_t383_0_0_0_var;
extern TypeInfo* ArgumentNullException_t668_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBBuildVersionAttributeU5BU5D_t595_il2cpp_TypeInfo_var;
extern "C" FBBuildVersionAttributeU5BU5D_t595* FBBuildVersionAttribute_getAttributes_m2011 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBBuildVersionAttribute_t383_0_0_0_var = il2cpp_codegen_type_from_index(332);
		ArgumentNullException_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(330);
		FBBuildVersionAttributeU5BU5D_t595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(334);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t667 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t668 * L_1 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3469(L_1, (String_t*) &_stringLiteral718, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		Assembly_t667 * L_3 = (Assembly_t667 *)VirtFuncInvoker0< Assembly_t667 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		V_0 = L_3;
		Assembly_t667 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m3463(NULL /*static, unused*/, LoadTypeToken(FBBuildVersionAttribute_t383_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		ObjectU5BU5D_t581* L_6 = (ObjectU5BU5D_t581*)VirtFuncInvoker2< ObjectU5BU5D_t581*, Type_t *, bool >::Invoke(9 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_4, L_5, 0);
		return ((FBBuildVersionAttributeU5BU5D_t595*)Castclass(L_6, FBBuildVersionAttributeU5BU5D_t595_il2cpp_TypeInfo_var));
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.IfNotExist
#include "AssemblyU2DCSharp_Facebook_IfNotExistMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.FBComponentFactory::.ctor()
extern "C" void FBComponentFactory__ctor_m2012 (FBComponentFactory_t386 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Facebook.FBComponentFactory::get_FacebookGameObject()
extern TypeInfo* FBComponentFactory_t386_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern "C" GameObject_t310 * FBComponentFactory_get_FacebookGameObject_m2013 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(335);
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t310 * L_0 = ((FBComponentFactory_t386_StaticFields*)FBComponentFactory_t386_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t310 * L_2 = (GameObject_t310 *)il2cpp_codegen_object_new (GameObject_t310_il2cpp_TypeInfo_var);
		GameObject__ctor_m3263(L_2, (String_t*) &_stringLiteral719, /*hidden argument*/NULL);
		((FBComponentFactory_t386_StaticFields*)FBComponentFactory_t386_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1 = L_2;
	}

IL_001f:
	{
		GameObject_t310 * L_3 = ((FBComponentFactory_t386_StaticFields*)FBComponentFactory_t386_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
		return L_3;
	}
}
// FBDebug
#include "AssemblyU2DCSharp_FBDebug.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// System.Void FBDebug::Log(System.String)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Log_m2014 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Debug_get_isDebugBuild_m3470(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = Application_get_isWebPlayer_m3471(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t581* L_2 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___msg;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral720, L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		String_t* L_4 = ___msg;
		Debug_Log_m3097(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void FBDebug::Info(System.String)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Info_m2015 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m3471(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t581* L_1 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral721, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_Log_m3097(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Warn(System.String)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Warn_m2016 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m3471(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t581* L_1 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral722, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogWarning_m3180(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Error(System.String)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Error_m2017 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m3471(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t581* L_1 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral723, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogError_m3473(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWW.h"
// UnityEngine.WWW
#include "UnityEngine_UnityEngine_WWWMethodDeclarations.h"


// System.Void FBResult::.ctor(UnityEngine.WWW)
extern "C" void FBResult__ctor_m2018 (FBResult_t239 * __this, WWW_t223 * ___www, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		__this->___isWWWWrapper_0 = 1;
		WWW_t223 * L_0 = ___www;
		__this->___data_1 = L_0;
		return;
	}
}
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m2019 (FBResult_t239 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___data;
		__this->___data_1 = L_0;
		String_t* L_1 = ___error;
		__this->___error_2 = L_1;
		return;
	}
}
// UnityEngine.Texture2D FBResult::get_Texture()
extern TypeInfo* WWW_t223_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t65_il2cpp_TypeInfo_var;
extern "C" Texture2D_t65 * FBResult_get_Texture_m2020 (FBResult_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		Texture2D_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(103);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t65 * G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)));
		Texture2D_t65 * L_2 = WWW_get_texture_m3260(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0020:
	{
		Object_t * L_3 = (__this->___data_1);
		G_B3_0 = ((Texture2D_t65 *)IsInst(L_3, Texture2D_t65_il2cpp_TypeInfo_var));
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.String FBResult::get_Text()
extern TypeInfo* WWW_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Text_m2021 (FBResult_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_text_m3316(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0020:
	{
		Object_t * L_3 = (__this->___data_1);
		G_B3_0 = ((String_t*)IsInst(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.String FBResult::get_Error()
extern TypeInfo* WWW_t223_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Error_m2022 (FBResult_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_error_m3259(((WWW_t223 *)Castclass(L_1, WWW_t223_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		String_t* L_3 = (__this->___error_2);
		G_B3_0 = L_3;
	}

IL_0026:
	{
		return G_B3_0;
	}
}
// System.Void FBResult::Dispose()
extern TypeInfo* WWW_t223_il2cpp_TypeInfo_var;
extern "C" void FBResult_Dispose_m2023 (FBResult_t239 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Object_t * L_2 = (__this->___data_1);
		NullCheck(((WWW_t223 *)Castclass(L_2, WWW_t223_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, ((WWW_t223 *)Castclass(L_2, WWW_t223_il2cpp_TypeInfo_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m2024 (FBResult_t239 * __this, const MethodInfo* method)
{
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(4 /* System.Void FBResult::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m230(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0012:
	{
		return;
	}
}
// FBSettings
#include "AssemblyU2DCSharp_FBSettings.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Resources
#include "UnityEngine_UnityEngine_ResourcesMethodDeclarations.h"
struct ScriptableObject_t106;
struct FBSettings_t388;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t106;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m3182_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m3182(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3182_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
#define ScriptableObject_CreateInstance_TisFBSettings_t388_m3474(__this /* static, unused */, method) (( FBSettings_t388 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3182_gshared)(__this /* static, unused */, method)


// System.Void FBSettings::.ctor()
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings__ctor_m2025 (FBSettings_t388 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral227);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral227;
		__this->___appIds_7 = L_0;
		StringU5BU5D_t45* L_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral726);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral726;
		__this->___appLabels_8 = L_1;
		__this->___cookie_9 = 1;
		__this->___logging_10 = 1;
		__this->___status_11 = 1;
		__this->___frictionlessRequests_13 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___iosURLSuffix_14 = L_2;
		ScriptableObject__ctor_m3184(__this, /*hidden argument*/NULL);
		return;
	}
}
// FBSettings FBSettings::get_Instance()
extern TypeInfo* FBSettings_t388_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisFBSettings_t388_m3474_MethodInfo_var;
extern "C" FBSettings_t388 * FBSettings_get_Instance_m2026 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBSettings_t388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(336);
		ScriptableObject_CreateInstance_TisFBSettings_t388_m3474_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484051);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t388 * L_0 = ((FBSettings_t388_StaticFields*)FBSettings_t388_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t599 * L_2 = Resources_Load_m3186(NULL /*static, unused*/, (String_t*) &_stringLiteral724, /*hidden argument*/NULL);
		((FBSettings_t388_StaticFields*)FBSettings_t388_il2cpp_TypeInfo_var->static_fields)->___instance_5 = ((FBSettings_t388 *)IsInst(L_2, FBSettings_t388_il2cpp_TypeInfo_var));
		FBSettings_t388 * L_3 = ((FBSettings_t388_StaticFields*)FBSettings_t388_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_4 = Object_op_Equality_m3185(NULL /*static, unused*/, L_3, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		FBSettings_t388 * L_5 = ScriptableObject_CreateInstance_TisFBSettings_t388_m3474(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisFBSettings_t388_m3474_MethodInfo_var);
		((FBSettings_t388_StaticFields*)FBSettings_t388_il2cpp_TypeInfo_var->static_fields)->___instance_5 = L_5;
	}

IL_003e:
	{
		FBSettings_t388 * L_6 = ((FBSettings_t388_StaticFields*)FBSettings_t388_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		return L_6;
	}
}
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m2027 (FBSettings_t388 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___selectedAppIndex_6);
		int32_t L_1 = ___index;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___index;
		__this->___selectedAppIndex_6 = L_2;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m2028 (FBSettings_t388 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___selectedAppIndex_6);
		return L_0;
	}
}
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppId_m2029 (FBSettings_t388 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m181(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t45* L_5 = (__this->___appIds_7);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AppIds_m2030 (FBSettings_t388 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		return L_0;
	}
}
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m2031 (FBSettings_t388 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appIds_7);
		StringU5BU5D_t45* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t45*)L_0) == ((Object_t*)(StringU5BU5D_t45*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t45* L_2 = ___value;
		__this->___appIds_7 = L_2;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppLabel_m2032 (FBSettings_t388 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m181(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t45* L_5 = FBSettings_get_AppLabels_m2033(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t45* FBSettings_get_AppLabels_m2033 (FBSettings_t388 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		return L_0;
	}
}
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m2034 (FBSettings_t388 * __this, StringU5BU5D_t45* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t45* L_0 = (__this->___appLabels_8);
		StringU5BU5D_t45* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t45*)L_0) == ((Object_t*)(StringU5BU5D_t45*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t45* L_2 = ___value;
		__this->___appLabels_8 = L_2;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t45* FBSettings_get_AllAppIds_m2035 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t45* L_1 = FBSettings_get_AppIds_m2030(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m2036 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t45* L_1 = FBSettings_get_AppIds_m2030(L_0, /*hidden argument*/NULL);
		FBSettings_t388 * L_2 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = FBSettings_get_SelectedAppIndex_m2028(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		int32_t L_4 = L_3;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_4));
	}
}
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m2037 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = FBSettings_get_AppId_m2036(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = FBSettings_get_AppId_m2036(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m176(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = FBSettings_get_AppId_m2036(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_3, (String_t*) &_stringLiteral227);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 0;
	}

IL_002f:
	{
		return G_B4_0;
	}
}
// System.Boolean FBSettings::get_Cookie()
extern "C" bool FBSettings_get_Cookie_m2038 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		return L_1;
	}
}
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m2039 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t388 * L_3 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___cookie_9 = L_4;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m2040 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		return L_1;
	}
}
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m2041 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t388 * L_3 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___logging_10 = L_4;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m2042 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		return L_1;
	}
}
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m2043 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t388 * L_3 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___status_11 = L_4;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m2044 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		return L_1;
	}
}
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m2045 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t388 * L_3 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___xfbml_12 = L_4;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m2046 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		return L_1;
	}
}
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_set_IosURLSuffix_m2047 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		String_t* L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FBSettings_t388 * L_4 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___value;
		NullCheck(L_4);
		L_4->___iosURLSuffix_14 = L_5;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m2048 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral725;
	}
}
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m2049 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		return L_1;
	}
}
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m2050 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t388 * L_0 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t388 * L_3 = FBSettings_get_Instance_m2026(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___frictionlessRequests_13 = L_4;
		FBSettings_DirtyEditor_m2051(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m2051 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// NativeDialogModes.DialogMode
#include "AssemblyU2DCSharp_NativeDialogModes_DialogMode.h"
#ifndef _MSC_VER
#else
#endif
// NativeDialogModes.DialogMode
#include "AssemblyU2DCSharp_NativeDialogModes_DialogModeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// Facebook.OGActionType
#include "AssemblyU2DCSharp_Facebook_OGActionTypeMethodDeclarations.h"



// System.Void Facebook.OGActionType::.ctor()
extern "C" void OGActionType__ctor_m2052 (OGActionType_t390 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.OGActionType::.cctor()
extern TypeInfo* OGActionType_t390_il2cpp_TypeInfo_var;
extern "C" void OGActionType__cctor_m2053 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OGActionType_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(217);
		s_Il2CppMethodIntialized = true;
	}
	OGActionType_t390 * V_0 = {0};
	{
		OGActionType_t390 * L_0 = (OGActionType_t390 *)il2cpp_codegen_object_new (OGActionType_t390_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2052(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		OGActionType_t390 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___actionTypeValue_3 = (String_t*) &_stringLiteral424;
		OGActionType_t390 * L_2 = V_0;
		((OGActionType_t390_StaticFields*)OGActionType_t390_il2cpp_TypeInfo_var->static_fields)->___Send_0 = L_2;
		OGActionType_t390 * L_3 = (OGActionType_t390 *)il2cpp_codegen_object_new (OGActionType_t390_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2052(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		OGActionType_t390 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___actionTypeValue_3 = (String_t*) &_stringLiteral425;
		OGActionType_t390 * L_5 = V_0;
		((OGActionType_t390_StaticFields*)OGActionType_t390_il2cpp_TypeInfo_var->static_fields)->___AskFor_1 = L_5;
		OGActionType_t390 * L_6 = (OGActionType_t390 *)il2cpp_codegen_object_new (OGActionType_t390_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2052(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		OGActionType_t390 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___actionTypeValue_3 = (String_t*) &_stringLiteral426;
		OGActionType_t390 * L_8 = V_0;
		((OGActionType_t390_StaticFields*)OGActionType_t390_il2cpp_TypeInfo_var->static_fields)->___Turn_2 = L_8;
		return;
	}
}
// System.String Facebook.OGActionType::ToString()
extern "C" String_t* OGActionType_ToString_m2054 (OGActionType_t390 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___actionTypeValue_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.PlatformNotSupportedException
#include "mscorlib_System_PlatformNotSupportedException.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// Facebook.InitDelegate
#include "AssemblyU2DCSharp_Facebook_InitDelegateMethodDeclarations.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Nullable`1<System.Int32>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_1MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_8MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_7MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_2MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9MethodDeclarations.h"
// System.PlatformNotSupportedException
#include "mscorlib_System_PlatformNotSupportedExceptionMethodDeclarations.h"
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10MethodDeclarations.h"


// System.Void Facebook.AndroidFacebook::.ctor()
extern "C" void AndroidFacebook__ctor_m2055 (AndroidFacebook_t392 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m1946(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C" String_t* AndroidFacebook_get_KeyHash_m2056 (AndroidFacebook_t392 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___keyHash_15);
		return L_0;
	}
}
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C" bool AndroidFacebook_get_LimitEventUsage_m2057 (AndroidFacebook_t392 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t372 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void AndroidFacebook_set_LimitEventUsage_m2058 (AndroidFacebook_t392 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t372 *)__this)->___limitEventUsage_9 = L_0;
		String_t* L_1 = Boolean_ToString_m3224((&___value), /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral727, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C" void AndroidFacebook_CallFB_m2059 (AndroidFacebook_t392 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method)
{
	{
		FBDebug_Error_m2017(NULL /*static, unused*/, (String_t*) &_stringLiteral728, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAwake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAwake_m2060 (AndroidFacebook_t392 * __this, const MethodInfo* method)
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
		__this->___keyHash_15 = L_0;
		return;
	}
}
// System.Boolean Facebook.AndroidFacebook::IsErrorResponse(System.String)
extern "C" bool AndroidFacebook_IsErrorResponse_m2061 (AndroidFacebook_t392 * __this, String_t* ___response, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void AndroidFacebook_Init_m2062 (AndroidFacebook_t392 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t608 * L_2 = (ArgumentException_t608 *)il2cpp_codegen_object_new (ArgumentException_t608_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3475(L_2, (String_t*) &_stringLiteral729, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Dictionary_2_t270 * L_3 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_3, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t270 * L_4 = V_0;
		String_t* L_5 = ___appId;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral730, L_5);
		bool L_6 = ___cookie;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Dictionary_2_t270 * L_7 = V_0;
		bool L_8 = 1;
		Object_t * L_9 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral731, L_9);
	}

IL_003f:
	{
		bool L_10 = ___logging;
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t270 * L_11 = V_0;
		bool L_12 = 0;
		Object_t * L_13 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral732, L_13);
	}

IL_0057:
	{
		bool L_14 = ___status;
		if (L_14)
		{
			goto IL_006f;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		bool L_16 = 0;
		Object_t * L_17 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral527, L_17);
	}

IL_006f:
	{
		bool L_18 = ___xfbml;
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t270 * L_19 = V_0;
		bool L_20 = 1;
		Object_t * L_21 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral733, L_21);
	}

IL_0087:
	{
		String_t* L_22 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_t270 * L_24 = V_0;
		String_t* L_25 = ___channelUrl;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral734, L_25);
	}

IL_00a0:
	{
		String_t* L_26 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00b9;
		}
	}
	{
		Dictionary_2_t270 * L_28 = V_0;
		String_t* L_29 = ___authResponse;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_28, (String_t*) &_stringLiteral735, L_29);
	}

IL_00b9:
	{
		bool L_30 = ___frictionlessRequests;
		if (!L_30)
		{
			goto IL_00d1;
		}
	}
	{
		Dictionary_2_t270 * L_31 = V_0;
		bool L_32 = 1;
		Object_t * L_33 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral736, L_33);
	}

IL_00d1:
	{
		Dictionary_2_t270 * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_35 = Json_Serialize_m2239(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		InitDelegate_t377 * L_36 = ___onInitComplete;
		__this->___onInitComplete_17 = L_36;
		String_t* L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_37);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral737, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C" void AndroidFacebook_OnInitComplete_m2063 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		((AbstractFacebook_t372 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___message;
		AndroidFacebook_OnLoginComplete_m2065(__this, L_0, /*hidden argument*/NULL);
		InitDelegate_t377 * L_1 = (__this->___onInitComplete_17);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		InitDelegate_t377 * L_2 = (__this->___onInitComplete_17);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void AndroidFacebook_Login_m2064 (AndroidFacebook_t392 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___scope;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_1, (String_t*) &_stringLiteral738, L_2);
		Dictionary_2_t270 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_4 = Json_Serialize_m2239(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		FacebookDelegate_t391 * L_5 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1959(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral36, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLoginComplete_m2065 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral709);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 1;
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral709);
		((AbstractFacebook_t372 *)__this)->___userId_6 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral513);
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral739);
		int32_t L_10 = Int32_Parse_m3113(NULL /*static, unused*/, ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t245  L_11 = AndroidFacebook_FromTimestamp_m2085(__this, L_10, /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t270 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_12, (String_t*) &_stringLiteral740);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t270 * L_14 = V_0;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral740);
		__this->___keyHash_15 = ((String_t*)Castclass(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0096:
	{
		String_t* L_16 = ___message;
		FBResult_t239 * L_17 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_17, L_16, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGroupCreateComplete_m2066 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral741);
		V_1 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_4, (String_t*) &_stringLiteral741);
		String_t* L_5 = V_1;
		Dictionary_2_t270 * L_6 = V_0;
		String_t* L_7 = Json_Serialize_m2239(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		FBResult_t239 * L_8 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAccessTokenRefresh_m2067 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral513);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral513);
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral739);
		int32_t L_8 = Int32_Parse_m3113(NULL /*static, unused*/, ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t245  L_9 = AndroidFacebook_FromTimestamp_m2085(__this, L_8, /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_9;
	}

IL_0053:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Logout_m2068 (AndroidFacebook_t392 * __this, const MethodInfo* method)
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
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral40, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLogoutComplete_m2069 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___userId_6 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = L_1;
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t668_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3477_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3478_MethodInfo_var;
extern "C" void AndroidFacebook_AppRequest_m2070 (AndroidFacebook_t392 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		Nullable_1_get_Value_m3478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t668 * L_2 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t390 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t668 * L_6 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_6, (String_t*) &_stringLiteral743, (String_t*) &_stringLiteral744, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t390 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t668 * L_10 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_10, (String_t*) &_stringLiteral745, (String_t*) &_stringLiteral746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t270 * L_11 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_11, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t270 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral55, L_13);
		FacebookDelegate_t391 * L_14 = ___callback;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		FacebookDelegate_t391 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral741, L_17);
	}

IL_0089:
	{
		OGActionType_t390 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		Dictionary_2_t270 * L_21 = V_0;
		OGActionType_t390 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral423, L_23);
		Dictionary_2_t270 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral747, L_25);
	}

IL_00b7:
	{
		StringU5BU5D_t45* L_26 = ___to;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t270 * L_27 = V_0;
		StringU5BU5D_t45* L_28 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Join_m3192(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral75, L_29);
	}

IL_00d5:
	{
		List_1_t583 * L_30 = ___filters;
		if (!L_30)
		{
			goto IL_0109;
		}
	}
	{
		List_1_t583 * L_31 = ___filters;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_31);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t583 * L_33 = ___filters;
		NullCheck(L_33);
		Object_t * L_34 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_33, 0);
		V_1 = ((String_t*)IsInst(L_34, String_t_il2cpp_TypeInfo_var));
		String_t* L_35 = V_1;
		if (!L_35)
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t270 * L_36 = V_0;
		String_t* L_37 = V_1;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral748, L_37);
	}

IL_0109:
	{
		bool L_38 = Nullable_1_get_HasValue_m3477((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		Dictionary_2_t270 * L_39 = V_0;
		int32_t L_40 = Nullable_1_get_Value_m3478((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m3478_MethodInfo_var);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral749, L_42);
	}

IL_012c:
	{
		String_t* L_43 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0145;
		}
	}
	{
		Dictionary_2_t270 * L_45 = V_0;
		String_t* L_46 = ___data;
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_45, (String_t*) &_stringLiteral52, L_46);
	}

IL_0145:
	{
		String_t* L_47 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_015e;
		}
	}
	{
		Dictionary_2_t270 * L_49 = V_0;
		String_t* L_50 = ___title;
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_49, (String_t*) &_stringLiteral750, L_50);
	}

IL_015e:
	{
		Dictionary_2_t270 * L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_52 = Json_Serialize_m2239(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral751, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t669_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3479_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3480_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3481_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3482_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3483_MethodInfo_var;
extern "C" void AndroidFacebook_OnAppRequestsComplete_m2071 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Enumerator_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		List_1__ctor_m3479_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484054);
		Dictionary_2_get_Keys_m3480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484055);
		KeyCollection_GetEnumerator_m3481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484056);
		Enumerator_get_Current_m3482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484057);
		Enumerator_MoveNext_m3483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	String_t* V_2 = {0};
	List_1_t73 * V_3 = {0};
	String_t* V_4 = {0};
	Enumerator_t669  V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral741);
		if (!L_3)
		{
			goto IL_010c;
		}
	}
	{
		Dictionary_2_t270 * L_4 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_4, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t270 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral741);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral741);
		Dictionary_2_t270 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		Dictionary_2_t270 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_10);
		List_1_t73 * L_12 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
		List_1__ctor_m3479(L_12, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/List_1__ctor_m3479_MethodInfo_var);
		V_3 = L_12;
		Dictionary_2_t270 * L_13 = V_0;
		NullCheck(L_13);
		KeyCollection_t670 * L_14 = Dictionary_2_get_Keys_m3480(L_13, /*hidden argument*/Dictionary_2_get_Keys_m3480_MethodInfo_var);
		NullCheck(L_14);
		Enumerator_t669  L_15 = KeyCollection_GetEnumerator_m3481(L_14, /*hidden argument*/KeyCollection_GetEnumerator_m3481_MethodInfo_var);
		V_5 = L_15;
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ad;
		}

IL_006b:
		{
			String_t* L_16 = Enumerator_get_Current_m3482((&V_5), /*hidden argument*/Enumerator_get_Current_m3482_MethodInfo_var);
			V_4 = L_16;
			String_t* L_17 = V_4;
			NullCheck(L_17);
			bool L_18 = String_StartsWith_m3459(L_17, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_009a;
			}
		}

IL_0085:
		{
			Dictionary_2_t270 * L_19 = V_1;
			String_t* L_20 = V_4;
			Dictionary_2_t270 * L_21 = V_0;
			String_t* L_22 = V_4;
			NullCheck(L_21);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_21, L_22);
			NullCheck(L_19);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, L_20, L_23);
			goto IL_00ad;
		}

IL_009a:
		{
			List_1_t73 * L_24 = V_3;
			Dictionary_2_t270 * L_25 = V_0;
			String_t* L_26 = V_4;
			NullCheck(L_25);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_25, L_26);
			NullCheck(L_24);
			VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_24, ((String_t*)Castclass(L_27, String_t_il2cpp_TypeInfo_var)));
		}

IL_00ad:
		{
			bool L_28 = Enumerator_MoveNext_m3483((&V_5), /*hidden argument*/Enumerator_MoveNext_m3483_MethodInfo_var);
			if (L_28)
			{
				goto IL_006b;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0xCB, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		Enumerator_t669  L_29 = V_5;
		Enumerator_t669  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t669_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(190)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00cb:
	{
		Dictionary_2_t270 * L_32 = V_1;
		List_1_t73 * L_33 = V_3;
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_32, (String_t*) &_stringLiteral75, L_33);
		Dictionary_2_t270 * L_34 = V_0;
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_34);
		String_t* L_35 = V_2;
		Dictionary_2_t270 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_37 = Json_Serialize_m2239(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		FBResult_t239 * L_38 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_35, L_38, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00f5:
	{
		String_t* L_39 = V_2;
		Dictionary_2_t270 * L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2239(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		FBResult_t239 * L_42 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_42, L_41, (String_t*) &_stringLiteral752, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_39, L_42, /*hidden argument*/NULL);
	}

IL_010c:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t672_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3484_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3485_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3486_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3488_MethodInfo_var;
extern "C" void AndroidFacebook_FeedRequest_m2072 (AndroidFacebook_t392 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		Enumerator_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_GetEnumerator_m3484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		Enumerator_get_Current_m3485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		KeyValuePair_2_get_Value_m3486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		KeyValuePair_2_get_Key_m3487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		Enumerator_MoveNext_m3488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	Dictionary_2_t270 * V_2 = {0};
	KeyValuePair_2_t671  V_3 = {0};
	Enumerator_t672  V_4 = {0};
	Dictionary_2_t270 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		FacebookDelegate_t391 * L_1 = ___callback;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t270 * L_2 = V_0;
		FacebookDelegate_t391 * L_3 = ___callback;
		String_t* L_4 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral741, L_4);
	}

IL_0020:
	{
		String_t* L_5 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t270 * L_7 = V_0;
		String_t* L_8 = ___toId;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral75, L_8);
	}

IL_0037:
	{
		String_t* L_9 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		Dictionary_2_t270 * L_11 = V_0;
		String_t* L_12 = ___link;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral484, L_12);
	}

IL_004e:
	{
		String_t* L_13 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		String_t* L_16 = ___linkName;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral421, L_16);
	}

IL_0065:
	{
		String_t* L_17 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007e;
		}
	}
	{
		Dictionary_2_t270 * L_19 = V_0;
		String_t* L_20 = ___linkCaption;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral753, L_20);
	}

IL_007e:
	{
		String_t* L_21 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0097;
		}
	}
	{
		Dictionary_2_t270 * L_23 = V_0;
		String_t* L_24 = ___linkDescription;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_23, (String_t*) &_stringLiteral516, L_24);
	}

IL_0097:
	{
		String_t* L_25 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		Dictionary_2_t270 * L_27 = V_0;
		String_t* L_28 = ___picture;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_27, (String_t*) &_stringLiteral754, L_28);
	}

IL_00b0:
	{
		String_t* L_29 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00c9;
		}
	}
	{
		Dictionary_2_t270 * L_31 = V_0;
		String_t* L_32 = ___mediaSource;
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral565, L_32);
	}

IL_00c9:
	{
		String_t* L_33 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_35 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_t270 * L_37 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_37, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_1 = L_37;
		Dictionary_2_t270 * L_38 = V_1;
		String_t* L_39 = ___actionName;
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_38, (String_t*) &_stringLiteral421, L_39);
		Dictionary_2_t270 * L_40 = V_1;
		String_t* L_41 = ___actionLink;
		NullCheck(L_40);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_40, (String_t*) &_stringLiteral484, L_41);
		Dictionary_2_t270 * L_42 = V_0;
		Dictionary_2U5BU5D_t673* L_43 = ((Dictionary_2U5BU5D_t673*)SZArrayNew(Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t270 * L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		ArrayElementTypeCheck (L_43, L_44);
		*((Dictionary_2_t270 **)(Dictionary_2_t270 **)SZArrayLdElema(L_43, 0)) = (Dictionary_2_t270 *)L_44;
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_42, (String_t*) &_stringLiteral755, (Object_t *)(Object_t *)L_43);
	}

IL_0116:
	{
		String_t* L_45 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_012f;
		}
	}
	{
		Dictionary_2_t270 * L_47 = V_0;
		String_t* L_48 = ___reference;
		NullCheck(L_47);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_47, (String_t*) &_stringLiteral756, L_48);
	}

IL_012f:
	{
		Dictionary_2_t74 * L_49 = ___properties;
		if (!L_49)
		{
			goto IL_01fa;
		}
	}
	{
		Dictionary_2_t270 * L_50 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_50, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_2 = L_50;
		Dictionary_2_t74 * L_51 = ___properties;
		NullCheck(L_51);
		Enumerator_t672  L_52 = Dictionary_2_GetEnumerator_m3484(L_51, /*hidden argument*/Dictionary_2_GetEnumerator_m3484_MethodInfo_var);
		V_4 = L_52;
	}

IL_0145:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d0;
		}

IL_014a:
		{
			KeyValuePair_2_t671  L_53 = Enumerator_get_Current_m3485((&V_4), /*hidden argument*/Enumerator_get_Current_m3485_MethodInfo_var);
			V_3 = L_53;
			StringU5BU5D_t45* L_54 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_54);
			if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) >= ((int32_t)1)))
			{
				goto IL_0166;
			}
		}

IL_0161:
		{
			goto IL_01d0;
		}

IL_0166:
		{
			StringU5BU5D_t45* L_55 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_55);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_55)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_0190;
			}
		}

IL_0175:
		{
			Dictionary_2_t270 * L_56 = V_2;
			String_t* L_57 = KeyValuePair_2_get_Key_m3487((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3487_MethodInfo_var);
			StringU5BU5D_t45* L_58 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_58);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
			int32_t L_59 = 0;
			NullCheck(L_56);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_56, L_57, (*(String_t**)(String_t**)SZArrayLdElema(L_58, L_59)));
			goto IL_01d0;
		}

IL_0190:
		{
			Dictionary_2_t270 * L_60 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3118(L_60, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
			V_5 = L_60;
			Dictionary_2_t270 * L_61 = V_5;
			StringU5BU5D_t45* L_62 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
			int32_t L_63 = 0;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral514, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t270 * L_64 = V_5;
			StringU5BU5D_t45* L_65 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_65);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
			int32_t L_66 = 1;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, (String_t*) &_stringLiteral757, (*(String_t**)(String_t**)SZArrayLdElema(L_65, L_66)));
			Dictionary_2_t270 * L_67 = V_2;
			String_t* L_68 = KeyValuePair_2_get_Key_m3487((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3487_MethodInfo_var);
			Dictionary_2_t270 * L_69 = V_5;
			NullCheck(L_67);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_67, L_68, L_69);
		}

IL_01d0:
		{
			bool L_70 = Enumerator_MoveNext_m3488((&V_4), /*hidden argument*/Enumerator_MoveNext_m3488_MethodInfo_var);
			if (L_70)
			{
				goto IL_014a;
			}
		}

IL_01dc:
		{
			IL2CPP_LEAVE(0x1EE, FINALLY_01e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01e1;
	}

FINALLY_01e1:
	{ // begin finally (depth: 1)
		Enumerator_t672  L_71 = V_4;
		Enumerator_t672  L_72 = L_71;
		Object_t * L_73 = Box(Enumerator_t672_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_73);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_73);
		IL2CPP_END_FINALLY(481)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(481)
	{
		IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01ee:
	{
		Dictionary_2_t270 * L_74 = V_0;
		Dictionary_2_t270 * L_75 = V_2;
		NullCheck(L_74);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_74, (String_t*) &_stringLiteral758, L_75);
	}

IL_01fa:
	{
		Dictionary_2_t270 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_77 = Json_Serialize_m2239(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral759, L_77, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t669_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m3480_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m3481_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3482_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3483_MethodInfo_var;
extern "C" void AndroidFacebook_OnFeedRequestComplete_m2073 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(337);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_get_Keys_m3480_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484055);
		KeyCollection_GetEnumerator_m3481_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484056);
		Enumerator_get_Current_m3482_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484057);
		Enumerator_MoveNext_m3483_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484058);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	Enumerator_t669  V_4 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral741);
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		Dictionary_2_t270 * L_4 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_4, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t270 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral741);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral741);
		Dictionary_2_t270 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t270 * L_10 = V_0;
		NullCheck(L_10);
		KeyCollection_t670 * L_11 = Dictionary_2_get_Keys_m3480(L_10, /*hidden argument*/Dictionary_2_get_Keys_m3480_MethodInfo_var);
		NullCheck(L_11);
		Enumerator_t669  L_12 = KeyCollection_GetEnumerator_m3481(L_11, /*hidden argument*/KeyCollection_GetEnumerator_m3481_MethodInfo_var);
		V_4 = L_12;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0073;
		}

IL_005d:
		{
			String_t* L_13 = Enumerator_get_Current_m3482((&V_4), /*hidden argument*/Enumerator_get_Current_m3482_MethodInfo_var);
			V_3 = L_13;
			Dictionary_2_t270 * L_14 = V_1;
			String_t* L_15 = V_3;
			Dictionary_2_t270 * L_16 = V_0;
			String_t* L_17 = V_3;
			NullCheck(L_16);
			Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, L_17);
			NullCheck(L_14);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_14, L_15, L_18);
		}

IL_0073:
		{
			bool L_19 = Enumerator_MoveNext_m3483((&V_4), /*hidden argument*/Enumerator_MoveNext_m3483_MethodInfo_var);
			if (L_19)
			{
				goto IL_005d;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_t669  L_20 = V_4;
		Enumerator_t669  L_21 = L_20;
		Object_t * L_22 = Box(Enumerator_t669_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_22);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0091:
	{
		Dictionary_2_t270 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_23);
		String_t* L_24 = V_2;
		Dictionary_2_t270 * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_26 = Json_Serialize_m2239(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		FBResult_t239 * L_27 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_24, L_27, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00af:
	{
		String_t* L_28 = V_2;
		Dictionary_2_t270 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_30 = Json_Serialize_m2239(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		FBResult_t239 * L_31 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_31, L_30, (String_t*) &_stringLiteral752, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_28, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t674_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Pay_m2074 (AndroidFacebook_t392 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t674 * L_0 = (PlatformNotSupportedException_t674 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t674_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m3489(L_0, (String_t*) &_stringLiteral760, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupCreate_m2075 (AndroidFacebook_t392 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral421, L_2);
		Dictionary_2_t270 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral516, L_4);
		Dictionary_2_t270 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral761, L_6);
		FacebookDelegate_t391 * L_7 = ___callback;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t270 * L_8 = V_0;
		FacebookDelegate_t391 * L_9 = ___callback;
		String_t* L_10 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral741, L_10);
	}

IL_0044:
	{
		Dictionary_2_t270 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_12 = Json_Serialize_m2239(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral762, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupJoin_m2076 (AndroidFacebook_t392 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral51, L_2);
		FacebookDelegate_t391 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Dictionary_2_t270 * L_4 = V_0;
		FacebookDelegate_t391 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral741, L_6);
	}

IL_002a:
	{
		Dictionary_2_t270 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2239(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral763, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_GetDeepLink_m2077 (AndroidFacebook_t392 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		FacebookDelegate_t391 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral764, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGetDeepLinkComplete_m2078 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		FacebookDelegate_t391 * L_2 = (__this->___deepLinkDelegate_16);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral765, (&V_1));
		FacebookDelegate_t391 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t239 * L_8 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3490_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3491_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogEvent_m2079 (AndroidFacebook_t392 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m3490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		Nullable_1_get_Value_m3491_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484065);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___logEvent;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral766, L_2);
		bool L_3 = Nullable_1_get_HasValue_m3490((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m3490_MethodInfo_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Dictionary_2_t270 * L_4 = V_0;
		float L_5 = Nullable_1_get_Value_m3491((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m3491_MethodInfo_var);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t59_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral767, L_7);
	}

IL_0035:
	{
		Dictionary_2_t270 * L_8 = ___parameters;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t270 * L_9 = V_0;
		Dictionary_2_t270 * L_10 = ___parameters;
		Dictionary_2_t80 * L_11 = AndroidFacebook_ToStringDict_m2084(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral768, L_11);
	}

IL_004d:
	{
		Dictionary_2_t270 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_13 = Json_Serialize_m2239(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral769, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogPurchase_m2080 (AndroidFacebook_t392 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* G_B2_0 = {0};
	Dictionary_2_t270 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	Dictionary_2_t270 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	Dictionary_2_t270 * G_B3_2 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		float L_2 = ___logPurchase;
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t59_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral770, L_4);
		Dictionary_2_t270 * L_5 = V_0;
		String_t* L_6 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral771;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = (String_t*) &_stringLiteral771;
			G_B2_1 = L_5;
			goto IL_002e;
		}
	}
	{
		String_t* L_8 = ___currency;
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0033;
	}

IL_002e:
	{
		G_B3_0 = (String_t*) &_stringLiteral641;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0033:
	{
		NullCheck(G_B3_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		Dictionary_2_t270 * L_9 = ___parameters;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_t270 * L_10 = V_0;
		Dictionary_2_t270 * L_11 = ___parameters;
		Dictionary_2_t80 * L_12 = AndroidFacebook_ToStringDict_m2084(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral768, L_12);
	}

IL_0050:
	{
		Dictionary_2_t270 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_14 = Json_Serialize_m2239(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral769, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3457_MethodInfo_var;
extern "C" void AndroidFacebook_PublishInstall_m2081 (AndroidFacebook_t392 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	{
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3457(L_0, 2, /*hidden argument*/Dictionary_2__ctor_m3457_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t80 * L_1 = V_0;
		String_t* L_2 = ___appId;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral772, L_2);
		FacebookDelegate_t391 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t80 * L_4 = V_0;
		FacebookDelegate_t391 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral741, L_6);
	}

IL_002b:
	{
		Dictionary_2_t80 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2239(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral773, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnPublishInstallComplete_m2082 (AndroidFacebook_t392 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral741);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral741);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t239 * L_7 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_7, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3457_MethodInfo_var;
extern "C" void AndroidFacebook_ActivateApp_m2083 (AndroidFacebook_t392 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3457_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484049);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	{
		Dictionary_2_t80 * L_0 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3457(L_0, 1, /*hidden argument*/Dictionary_2__ctor_m3457_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t80 * L_3 = V_0;
		String_t* L_4 = ___appId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral772, L_4);
	}

IL_001e:
	{
		Dictionary_2_t80 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_6 = Json_Serialize_m2239(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2059(__this, (String_t*) &_stringLiteral774, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t676_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3098_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3492_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3493_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3494_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3495_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3496_MethodInfo_var;
extern "C" Dictionary_2_t80 * AndroidFacebook_ToStringDict_m2084 (AndroidFacebook_t392 * __this, Dictionary_2_t270 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		Enumerator_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(341);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m3098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		Dictionary_2_GetEnumerator_m3492_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		Enumerator_get_Current_m3493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		KeyValuePair_2_get_Key_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		KeyValuePair_2_get_Value_m3495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		Enumerator_MoveNext_m3496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t80 * V_0 = {0};
	KeyValuePair_2_t675  V_1 = {0};
	Enumerator_t676  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t270 * L_0 = ___dict;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (Dictionary_2_t80 *)NULL;
	}

IL_0008:
	{
		Dictionary_2_t80 * L_1 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3098(L_1, /*hidden argument*/Dictionary_2__ctor_m3098_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t270 * L_2 = ___dict;
		NullCheck(L_2);
		Enumerator_t676  L_3 = Dictionary_2_GetEnumerator_m3492(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m3492_MethodInfo_var);
		V_2 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001a:
		{
			KeyValuePair_2_t675  L_4 = Enumerator_get_Current_m3493((&V_2), /*hidden argument*/Enumerator_get_Current_m3493_MethodInfo_var);
			V_1 = L_4;
			Dictionary_2_t80 * L_5 = V_0;
			String_t* L_6 = KeyValuePair_2_get_Key_m3494((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3494_MethodInfo_var);
			Object_t * L_7 = KeyValuePair_2_get_Value_m3495((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3495_MethodInfo_var);
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			NullCheck(L_5);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_5, L_6, L_8);
		}

IL_003b:
		{
			bool L_9 = Enumerator_MoveNext_m3496((&V_2), /*hidden argument*/Enumerator_MoveNext_m3496_MethodInfo_var);
			if (L_9)
			{
				goto IL_001a;
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
		Enumerator_t676  L_10 = V_2;
		Enumerator_t676  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t676_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0058:
	{
		Dictionary_2_t80 * L_13 = V_0;
		return L_13;
	}
}
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t245  AndroidFacebook_FromTimestamp_m2085 (AndroidFacebook_t392 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t245  V_0 = {0};
	{
		DateTime__ctor_m3339((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t245  L_1 = DateTime_AddSeconds_m3497((&V_0), (((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// Facebook.AndroidFacebookLoader
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.AndroidFacebookLoader
#include "AssemblyU2DCSharp_Facebook_AndroidFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t386;
struct AndroidFacebook_t392;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisAndroidFacebook_t392_m3498(__this /* static, unused */, p0, method) (( AndroidFacebook_t392 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.AndroidFacebookLoader::.ctor()
extern "C" void AndroidFacebookLoader__ctor_m2086 (AndroidFacebookLoader_t393 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1974(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.AndroidFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisAndroidFacebook_t392_m3498_MethodInfo_var;
extern "C" AbstractFacebook_t372 * AndroidFacebookLoader_get_fb_m2087 (AndroidFacebookLoader_t393 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisAndroidFacebook_t392_m3498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484071);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidFacebook_t392 * L_0 = FBComponentFactory_GetComponent_TisAndroidFacebook_t392_m3498(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisAndroidFacebook_t392_m3498_MethodInfo_var);
		return L_0;
	}
}
// Facebook.CanvasFacebook
#include "AssemblyU2DCSharp_Facebook_CanvasFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.CanvasFacebook
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookMethodDeclarations.h"

// Facebook.JsBridge
#include "AssemblyU2DCSharp_Facebook_JsBridge.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAsset.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// UnityEngine.TextAsset
#include "UnityEngine_UnityEngine_TextAssetMethodDeclarations.h"
struct GameObject_t310;
struct JsBridge_t396;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
// !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
#define GameObject_AddComponent_TisJsBridge_t396_m3499(__this, method) (( JsBridge_t396 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)


// System.Void Facebook.CanvasFacebook::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook__ctor_m2088 (CanvasFacebook_t394 * __this, const MethodInfo* method)
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
		__this->___integrationMethodJs_22 = L_0;
		__this->___sdkLocale_24 = (String_t*) &_stringLiteral775;
		AbstractFacebook__ctor_m1946(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnAwake()
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisJsBridge_t396_m3499_MethodInfo_var;
extern "C" void CanvasFacebook_OnAwake_m2089 (CanvasFacebook_t394 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		GameObject_AddComponent_TisJsBridge_t396_m3499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484072);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t310 * V_0 = {0};
	{
		GameObject_t310 * L_0 = (GameObject_t310 *)il2cpp_codegen_object_new (GameObject_t310_il2cpp_TypeInfo_var);
		GameObject__ctor_m3263(L_0, (String_t*) &_stringLiteral776, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t310 * L_1 = V_0;
		NullCheck(L_1);
		GameObject_AddComponent_TisJsBridge_t396_m3499(L_1, /*hidden argument*/GameObject_AddComponent_TisJsBridge_t396_m3499_MethodInfo_var);
		GameObject_t310 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t364 * L_3 = GameObject_get_transform_m3444(L_2, /*hidden argument*/NULL);
		GameObject_t310 * L_4 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t364 * L_5 = GameObject_get_transform_m3444(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m3500(L_3, L_5, /*hidden argument*/NULL);
		String_t* L_6 = CanvasFacebook_StringFromFile_m2111(__this, (String_t*) &_stringLiteral777, /*hidden argument*/NULL);
		__this->___integrationMethodJs_22 = L_6;
		return;
	}
}
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m2090 (CanvasFacebook_t394 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t372 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m2091 (CanvasFacebook_t394 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t372 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t608_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void CanvasFacebook_Init_m2092 (CanvasFacebook_t394 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(111);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	bool V_2 = false;
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t581* G_B20_1 = {0};
	ObjectU5BU5D_t581* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t581* G_B19_1 = {0};
	ObjectU5BU5D_t581* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	ObjectU5BU5D_t581* G_B21_2 = {0};
	ObjectU5BU5D_t581* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	int32_t G_B23_0 = 0;
	ObjectU5BU5D_t581* G_B23_1 = {0};
	ObjectU5BU5D_t581* G_B23_2 = {0};
	String_t* G_B23_3 = {0};
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_t581* G_B22_1 = {0};
	ObjectU5BU5D_t581* G_B22_2 = {0};
	String_t* G_B22_3 = {0};
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	ObjectU5BU5D_t581* G_B24_2 = {0};
	ObjectU5BU5D_t581* G_B24_3 = {0};
	String_t* G_B24_4 = {0};
	int32_t G_B26_0 = 0;
	ObjectU5BU5D_t581* G_B26_1 = {0};
	ObjectU5BU5D_t581* G_B26_2 = {0};
	String_t* G_B26_3 = {0};
	int32_t G_B25_0 = 0;
	ObjectU5BU5D_t581* G_B25_1 = {0};
	ObjectU5BU5D_t581* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	ObjectU5BU5D_t581* G_B27_2 = {0};
	ObjectU5BU5D_t581* G_B27_3 = {0};
	String_t* G_B27_4 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t608 * L_2 = (ArgumentException_t608 *)il2cpp_codegen_object_new (ArgumentException_t608_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3475(L_2, (String_t*) &_stringLiteral729, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		String_t* L_3 = (__this->___integrationMethodJs_22);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t27 * L_4 = (Exception_t27 *)il2cpp_codegen_object_new (Exception_t27_il2cpp_TypeInfo_var);
		Exception__ctor_m182(L_4, (String_t*) &_stringLiteral778, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		InitDelegate_t377 * L_5 = ___onInitComplete;
		__this->___onInitComplete_20 = L_5;
		HideUnityDelegate_t378 * L_6 = ___hideUnityDelegate;
		__this->___OnHideUnity_21 = L_6;
		Dictionary_2_t270 * L_7 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_7, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_7;
		String_t* L_8 = ___appId;
		__this->___appId_23 = L_8;
		Dictionary_2_t270 * L_9 = V_0;
		String_t* L_10 = ___appId;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral730, L_10);
		bool L_11 = ___cookie;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t270 * L_12 = V_0;
		bool L_13 = 1;
		Object_t * L_14 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral731, L_14);
	}

IL_006b:
	{
		bool L_15 = ___logging;
		if (L_15)
		{
			goto IL_0083;
		}
	}
	{
		Dictionary_2_t270 * L_16 = V_0;
		bool L_17 = 0;
		Object_t * L_18 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral732, L_18);
	}

IL_0083:
	{
		bool L_19 = ___status;
		if (L_19)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t270 * L_20 = V_0;
		bool L_21 = 0;
		Object_t * L_22 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_20, (String_t*) &_stringLiteral527, L_22);
	}

IL_009b:
	{
		bool L_23 = ___xfbml;
		if (!L_23)
		{
			goto IL_00b3;
		}
	}
	{
		Dictionary_2_t270 * L_24 = V_0;
		bool L_25 = 1;
		Object_t * L_26 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral733, L_26);
	}

IL_00b3:
	{
		String_t* L_27 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00cc;
		}
	}
	{
		Dictionary_2_t270 * L_29 = V_0;
		String_t* L_30 = ___channelUrl;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_29, (String_t*) &_stringLiteral734, L_30);
	}

IL_00cc:
	{
		String_t* L_31 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00e5;
		}
	}
	{
		Dictionary_2_t270 * L_33 = V_0;
		String_t* L_34 = ___authResponse;
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_33, (String_t*) &_stringLiteral735, L_34);
	}

IL_00e5:
	{
		bool L_35 = ___frictionlessRequests;
		if (!L_35)
		{
			goto IL_00fd;
		}
	}
	{
		Dictionary_2_t270 * L_36 = V_0;
		bool L_37 = 1;
		Object_t * L_38 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_36, (String_t*) &_stringLiteral736, L_38);
	}

IL_00fd:
	{
		Dictionary_2_t270 * L_39 = V_0;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_39, (String_t*) &_stringLiteral779, (String_t*) &_stringLiteral780);
		Dictionary_2_t270 * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2239(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		String_t* L_42 = (__this->___integrationMethodJs_22);
		Application_ExternalEval_m3501(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_2 = 1;
		ObjectU5BU5D_t581* L_43 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 6));
		bool L_44 = V_2;
		G_B19_0 = 0;
		G_B19_1 = L_43;
		G_B19_2 = L_43;
		G_B19_3 = (String_t*) &_stringLiteral781;
		if (!L_44)
		{
			G_B20_0 = 0;
			G_B20_1 = L_43;
			G_B20_2 = L_43;
			G_B20_3 = (String_t*) &_stringLiteral781;
			goto IL_013a;
		}
	}
	{
		G_B21_0 = 1;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		goto IL_013b;
	}

IL_013a:
	{
		G_B21_0 = 0;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
	}

IL_013b:
	{
		int32_t L_45 = G_B21_0;
		Object_t * L_46 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_45);
		NullCheck(G_B21_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B21_2, G_B21_1);
		ArrayElementTypeCheck (G_B21_2, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B21_2, G_B21_1)) = (Object_t *)L_46;
		ObjectU5BU5D_t581* L_47 = G_B21_3;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 1);
		ArrayElementTypeCheck (L_47, (String_t*) &_stringLiteral782);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 1)) = (Object_t *)(String_t*) &_stringLiteral782;
		ObjectU5BU5D_t581* L_48 = L_47;
		String_t* L_49 = (__this->___sdkLocale_24);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, 2)) = (Object_t *)L_49;
		ObjectU5BU5D_t581* L_50 = L_48;
		bool L_51 = (__this->___sdkDebug_25);
		G_B22_0 = 3;
		G_B22_1 = L_50;
		G_B22_2 = L_50;
		G_B22_3 = G_B21_4;
		if (!L_51)
		{
			G_B23_0 = 3;
			G_B23_1 = L_50;
			G_B23_2 = L_50;
			G_B23_3 = G_B21_4;
			goto IL_0165;
		}
	}
	{
		G_B24_0 = 1;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		goto IL_0166;
	}

IL_0165:
	{
		G_B24_0 = 0;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
	}

IL_0166:
	{
		int32_t L_52 = G_B24_0;
		Object_t * L_53 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_52);
		NullCheck(G_B24_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B24_2, G_B24_1);
		ArrayElementTypeCheck (G_B24_2, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B24_2, G_B24_1)) = (Object_t *)L_53;
		ObjectU5BU5D_t581* L_54 = G_B24_3;
		String_t* L_55 = V_1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 4);
		ArrayElementTypeCheck (L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, 4)) = (Object_t *)L_55;
		ObjectU5BU5D_t581* L_56 = L_54;
		bool L_57 = ___status;
		G_B25_0 = 5;
		G_B25_1 = L_56;
		G_B25_2 = L_56;
		G_B25_3 = G_B24_4;
		if (!L_57)
		{
			G_B26_0 = 5;
			G_B26_1 = L_56;
			G_B26_2 = L_56;
			G_B26_3 = G_B24_4;
			goto IL_017f;
		}
	}
	{
		G_B27_0 = 1;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		G_B27_4 = G_B25_3;
		goto IL_0180;
	}

IL_017f:
	{
		G_B27_0 = 0;
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
		G_B27_4 = G_B26_3;
	}

IL_0180:
	{
		int32_t L_58 = G_B27_0;
		Object_t * L_59 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_58);
		NullCheck(G_B27_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B27_2, G_B27_1);
		ArrayElementTypeCheck (G_B27_2, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B27_2, G_B27_1)) = (Object_t *)L_59;
		Application_ExternalCall_m3472(NULL /*static, unused*/, G_B27_4, G_B27_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Login_m2093 (CanvasFacebook_t394 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Screen_get_fullScreen_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m3503(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		FacebookDelegate_t391 * L_1 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1959(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t581* L_2 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral783, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Logout_m2094 (CanvasFacebook_t394 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_1 = ((DateTime_t245_StaticFields*)DateTime_t245_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_1;
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___userId_6 = L_2;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral784, ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t668_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3477_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3478_MethodInfo_var;
extern "C" void CanvasFacebook_AppRequest_m2095 (CanvasFacebook_t394 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		Nullable_1_get_Value_m3478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t668 * L_2 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t390 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t668 * L_6 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_6, (String_t*) &_stringLiteral743, (String_t*) &_stringLiteral744, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t390 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t668 * L_10 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_10, (String_t*) &_stringLiteral745, (String_t*) &_stringLiteral746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t270 * L_11 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_11, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t270 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral55, L_13);
		StringU5BU5D_t45* L_14 = ___to;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		StringU5BU5D_t45* L_16 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Join_m3192(NULL /*static, unused*/, (String_t*) &_stringLiteral200, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral75, L_17);
	}

IL_008d:
	{
		OGActionType_t390 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		Dictionary_2_t270 * L_21 = V_0;
		OGActionType_t390 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral423, L_23);
		Dictionary_2_t270 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral747, L_25);
	}

IL_00bb:
	{
		List_1_t583 * L_26 = ___filters;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		Dictionary_2_t270 * L_27 = V_0;
		List_1_t583 * L_28 = ___filters;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral748, L_28);
	}

IL_00cf:
	{
		StringU5BU5D_t45* L_29 = ___excludeIds;
		if (!L_29)
		{
			goto IL_00e3;
		}
	}
	{
		Dictionary_2_t270 * L_30 = V_0;
		StringU5BU5D_t45* L_31 = ___excludeIds;
		NullCheck(L_30);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_30, (String_t*) &_stringLiteral785, (Object_t *)(Object_t *)L_31);
	}

IL_00e3:
	{
		bool L_32 = Nullable_1_get_HasValue_m3477((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		if (!L_32)
		{
			goto IL_0106;
		}
	}
	{
		Dictionary_2_t270 * L_33 = V_0;
		int32_t L_34 = Nullable_1_get_Value_m3478((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m3478_MethodInfo_var);
		int32_t L_35 = L_34;
		Object_t * L_36 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_33, (String_t*) &_stringLiteral749, L_36);
	}

IL_0106:
	{
		String_t* L_37 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_011f;
		}
	}
	{
		Dictionary_2_t270 * L_39 = V_0;
		String_t* L_40 = ___data;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral52, L_40);
	}

IL_011f:
	{
		String_t* L_41 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_42 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0138;
		}
	}
	{
		Dictionary_2_t270 * L_43 = V_0;
		String_t* L_44 = ___title;
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_43, (String_t*) &_stringLiteral750, L_44);
	}

IL_0138:
	{
		Dictionary_2_t270 * L_45 = V_0;
		FacebookDelegate_t391 * L_46 = ___callback;
		CanvasFacebook_UI_m2102(__this, (String_t*) &_stringLiteral786, L_45, L_46, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m2096 (CanvasFacebook_t394 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral787, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_ActivateApp_m2097 (CanvasFacebook_t394 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral788, ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t672_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3484_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3485_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3486_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3487_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3488_MethodInfo_var;
extern "C" void CanvasFacebook_FeedRequest_m2098 (CanvasFacebook_t394 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(338);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Enumerator_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(339);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Dictionary_2_GetEnumerator_m3484_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		Enumerator_get_Current_m3485_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		KeyValuePair_2_get_Value_m3486_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		KeyValuePair_2_get_Key_m3487_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		Enumerator_MoveNext_m3488_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	Dictionary_2_t270 * V_2 = {0};
	KeyValuePair_2_t671  V_3 = {0};
	Enumerator_t672  V_4 = {0};
	Dictionary_2_t270 * V_5 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Dictionary_2_t270 * L_3 = V_0;
		String_t* L_4 = ___toId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral75, L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t270 * L_7 = V_0;
		String_t* L_8 = ___link;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral484, L_8);
	}

IL_0034:
	{
		String_t* L_9 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		Dictionary_2_t270 * L_11 = V_0;
		String_t* L_12 = ___linkName;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_11, (String_t*) &_stringLiteral421, L_12);
	}

IL_004b:
	{
		String_t* L_13 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		String_t* L_16 = ___linkCaption;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral753, L_16);
	}

IL_0064:
	{
		String_t* L_17 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t270 * L_19 = V_0;
		String_t* L_20 = ___linkDescription;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, (String_t*) &_stringLiteral516, L_20);
	}

IL_007d:
	{
		String_t* L_21 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t270 * L_23 = V_0;
		String_t* L_24 = ___picture;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral754, L_24);
	}

IL_0096:
	{
		String_t* L_25 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t270 * L_27 = V_0;
		String_t* L_28 = ___mediaSource;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral565, L_28);
	}

IL_00af:
	{
		String_t* L_29 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_31 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t270 * L_33 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_33, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_1 = L_33;
		Dictionary_2_t270 * L_34 = V_1;
		String_t* L_35 = ___actionName;
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral421, L_35);
		Dictionary_2_t270 * L_36 = V_1;
		String_t* L_37 = ___actionLink;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral484, L_37);
		Dictionary_2_t270 * L_38 = V_0;
		Dictionary_2U5BU5D_t673* L_39 = ((Dictionary_2U5BU5D_t673*)SZArrayNew(Dictionary_2U5BU5D_t673_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t270 * L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, L_40);
		*((Dictionary_2_t270 **)(Dictionary_2_t270 **)SZArrayLdElema(L_39, 0)) = (Dictionary_2_t270 *)L_40;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2239(NULL /*static, unused*/, (Object_t *)(Object_t *)L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_38, (String_t*) &_stringLiteral755, L_41);
	}

IL_0101:
	{
		String_t* L_42 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_011a;
		}
	}
	{
		Dictionary_2_t270 * L_44 = V_0;
		String_t* L_45 = ___reference;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_44, (String_t*) &_stringLiteral756, L_45);
	}

IL_011a:
	{
		Dictionary_2_t74 * L_46 = ___properties;
		if (!L_46)
		{
			goto IL_01ea;
		}
	}
	{
		Dictionary_2_t270 * L_47 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_47, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_2 = L_47;
		Dictionary_2_t74 * L_48 = ___properties;
		NullCheck(L_48);
		Enumerator_t672  L_49 = Dictionary_2_GetEnumerator_m3484(L_48, /*hidden argument*/Dictionary_2_GetEnumerator_m3484_MethodInfo_var);
		V_4 = L_49;
	}

IL_0130:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bb;
		}

IL_0135:
		{
			KeyValuePair_2_t671  L_50 = Enumerator_get_Current_m3485((&V_4), /*hidden argument*/Enumerator_get_Current_m3485_MethodInfo_var);
			V_3 = L_50;
			StringU5BU5D_t45* L_51 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_51);
			if ((((int32_t)(((int32_t)(((Array_t *)L_51)->max_length)))) >= ((int32_t)1)))
			{
				goto IL_0151;
			}
		}

IL_014c:
		{
			goto IL_01bb;
		}

IL_0151:
		{
			StringU5BU5D_t45* L_52 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_52);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_52)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_017b;
			}
		}

IL_0160:
		{
			Dictionary_2_t270 * L_53 = V_2;
			String_t* L_54 = KeyValuePair_2_get_Key_m3487((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3487_MethodInfo_var);
			StringU5BU5D_t45* L_55 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_55);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 0);
			int32_t L_56 = 0;
			NullCheck(L_53);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_53, L_54, (*(String_t**)(String_t**)SZArrayLdElema(L_55, L_56)));
			goto IL_01bb;
		}

IL_017b:
		{
			Dictionary_2_t270 * L_57 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3118(L_57, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
			V_5 = L_57;
			Dictionary_2_t270 * L_58 = V_5;
			StringU5BU5D_t45* L_59 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_59);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 0);
			int32_t L_60 = 0;
			NullCheck(L_58);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_58, (String_t*) &_stringLiteral514, (*(String_t**)(String_t**)SZArrayLdElema(L_59, L_60)));
			Dictionary_2_t270 * L_61 = V_5;
			StringU5BU5D_t45* L_62 = KeyValuePair_2_get_Value_m3486((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m3486_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 1);
			int32_t L_63 = 1;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral757, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t270 * L_64 = V_2;
			String_t* L_65 = KeyValuePair_2_get_Key_m3487((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m3487_MethodInfo_var);
			Dictionary_2_t270 * L_66 = V_5;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, L_65, L_66);
		}

IL_01bb:
		{
			bool L_67 = Enumerator_MoveNext_m3488((&V_4), /*hidden argument*/Enumerator_MoveNext_m3488_MethodInfo_var);
			if (L_67)
			{
				goto IL_0135;
			}
		}

IL_01c7:
		{
			IL2CPP_LEAVE(0x1D9, FINALLY_01cc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01cc;
	}

FINALLY_01cc:
	{ // begin finally (depth: 1)
		Enumerator_t672  L_68 = V_4;
		Enumerator_t672  L_69 = L_68;
		Object_t * L_70 = Box(Enumerator_t672_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_70);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_70);
		IL2CPP_END_FINALLY(460)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(460)
	{
		IL2CPP_JUMP_TBL(0x1D9, IL_01d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01d9:
	{
		Dictionary_2_t270 * L_71 = V_0;
		Dictionary_2_t270 * L_72 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_73 = Json_Serialize_m2239(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_71, (String_t*) &_stringLiteral758, L_73);
	}

IL_01ea:
	{
		Dictionary_2_t270 * L_74 = V_0;
		FacebookDelegate_t391 * L_75 = ___callback;
		CanvasFacebook_UI_m2102(__this, (String_t*) &_stringLiteral789, L_74, L_75, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3477_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3478_MethodInfo_var;
extern "C" void CanvasFacebook_Pay_m2099 (CanvasFacebook_t394 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		Nullable_1_get_HasValue_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		Nullable_1_get_Value_m3478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___product;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral790, L_2);
		Dictionary_2_t270 * L_3 = V_0;
		String_t* L_4 = ___action;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral128, L_4);
		Dictionary_2_t270 * L_5 = V_0;
		int32_t L_6 = ___quantity;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral791, L_8);
		bool L_9 = Nullable_1_get_HasValue_m3477((&___quantityMin), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t270 * L_10 = V_0;
		int32_t L_11 = Nullable_1_get_Value_m3478((&___quantityMin), /*hidden argument*/Nullable_1_get_Value_m3478_MethodInfo_var);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral792, L_13);
	}

IL_0052:
	{
		bool L_14 = Nullable_1_get_HasValue_m3477((&___quantityMax), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		Dictionary_2_t270 * L_15 = V_0;
		int32_t L_16 = Nullable_1_get_Value_m3478((&___quantityMax), /*hidden argument*/Nullable_1_get_Value_m3478_MethodInfo_var);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral793, L_18);
	}

IL_0075:
	{
		String_t* L_19 = ___requestId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t270 * L_21 = V_0;
		String_t* L_22 = ___requestId;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral794, L_22);
	}

IL_008e:
	{
		String_t* L_23 = ___pricepointId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a7;
		}
	}
	{
		Dictionary_2_t270 * L_25 = V_0;
		String_t* L_26 = ___pricepointId;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_25, (String_t*) &_stringLiteral795, L_26);
	}

IL_00a7:
	{
		String_t* L_27 = ___testCurrency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00c0;
		}
	}
	{
		Dictionary_2_t270 * L_29 = V_0;
		String_t* L_30 = ___testCurrency;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral796, L_30);
	}

IL_00c0:
	{
		Dictionary_2_t270 * L_31 = V_0;
		FacebookDelegate_t391 * L_32 = ___callback;
		CanvasFacebook_UI_m2102(__this, (String_t*) &_stringLiteral797, L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupCreate_m2100 (CanvasFacebook_t394 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral421, L_2);
		Dictionary_2_t270 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral516, L_4);
		Dictionary_2_t270 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral761, L_6);
		Dictionary_2_t270 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral798, (String_t*) &_stringLiteral799);
		Dictionary_2_t270 * L_8 = V_0;
		FacebookDelegate_t391 * L_9 = ___callback;
		CanvasFacebook_UI_m2102(__this, (String_t*) &_stringLiteral800, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupJoin_m2101 (CanvasFacebook_t394 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral51, L_2);
		Dictionary_2_t270 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral798, (String_t*) &_stringLiteral799);
		Dictionary_2_t270 * L_4 = V_0;
		FacebookDelegate_t391 * L_5 = ___callback;
		CanvasFacebook_UI_m2102(__this, (String_t*) &_stringLiteral801, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3504_MethodInfo_var;
extern "C" void CanvasFacebook_UI_m2102 (CanvasFacebook_t394 * __this, String_t* ___method, Dictionary_2_t270 * ___paramsDict, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2__ctor_m3504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484073);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	{
		bool L_0 = Screen_get_fullScreen_m3502(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m3503(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		Dictionary_2_t270 * L_1 = ___paramsDict;
		Dictionary_2_t270 * L_2 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3504(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m3504_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t270 * L_3 = V_0;
		String_t* L_4 = (__this->___appId_23);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral772, L_4);
		FacebookDelegate_t391 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t270 * L_7 = V_0;
		String_t* L_8 = ___method;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral802, L_8);
		ObjectU5BU5D_t581* L_9 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 2));
		Dictionary_2_t270 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_11 = Json_Serialize_m2239(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_11;
		ObjectU5BU5D_t581* L_12 = L_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 1)) = (Object_t *)L_13;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral803, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_GetDeepLink_m2103 (CanvasFacebook_t394 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		FacebookDelegate_t391 * L_1 = ___callback;
		String_t* L_2 = (__this->___deepLink_26);
		FBResult_t239 * L_3 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_3, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t590_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogEvent_m2104 (CanvasFacebook_t394 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Nullable_1_t590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(112);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t581* L_0 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___logEvent;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t581* L_2 = L_0;
		Nullable_1_t590  L_3 = ___valueToSum;
		Nullable_1_t590  L_4 = L_3;
		Object_t * L_5 = Box(Nullable_1_t590_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t581* L_6 = L_2;
		Dictionary_2_t270 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2239(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral804, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogPurchase_m2105 (CanvasFacebook_t394 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t581* L_0 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 3));
		float L_1 = ___logPurchase;
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t59_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t581* L_4 = L_0;
		String_t* L_5 = ___currency;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t581* L_6 = L_4;
		Dictionary_2_t270 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2239(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m3472(NULL /*static, unused*/, (String_t*) &_stringLiteral805, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t632_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m2106 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		Int64_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	DateTime_t245  V_2 = {0};
	CanvasFacebook_t394 * G_B5_0 = {0};
	CanvasFacebook_t394 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	CanvasFacebook_t394 * G_B6_1 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)IsInst(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral735);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___responseJsonData;
		FBResult_t239 * L_5 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_5, L_4, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_002a:
	{
		Dictionary_2_t270 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral735);
		V_1 = ((Dictionary_2_t270 *)IsInst(L_7, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_8 = V_1;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral806);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, ((String_t*)IsInst(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t270 * L_11 = V_1;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_11, (String_t*) &_stringLiteral806);
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_12, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_13 = DateTime_get_Now_m3345(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_13;
		Dictionary_2_t270 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral807);
		DateTime_t245  L_16 = DateTime_AddSeconds_m3497((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_15, Int64_t632_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_16;
		Dictionary_2_t270 * L_17 = V_1;
		NullCheck(L_17);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral808);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, ((String_t*)IsInst(L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_19)
		{
			G_B5_0 = __this;
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t270 * L_20 = V_1;
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_20, (String_t*) &_stringLiteral808);
		G_B6_0 = ((String_t*)IsInst(L_21, String_t_il2cpp_TypeInfo_var));
		G_B6_1 = G_B4_0;
		goto IL_00c4;
	}

IL_00bf:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B6_0 = L_22;
		G_B6_1 = G_B5_0;
	}

IL_00c4:
	{
		NullCheck(G_B6_1);
		((AbstractFacebook_t372 *)G_B6_1)->___userId_6 = G_B6_0;
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 1;
		goto IL_00fd;
	}

IL_00d5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_24 = ((DateTime_t245_StaticFields*)DateTime_t245_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_24;
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t372 *)__this)->___userId_6 = L_25;
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
	}

IL_00fd:
	{
		String_t* L_26 = ___responseJsonData;
		FBResult_t239 * L_27 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t245_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t632_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m2107 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		DateTime_t245_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(231);
		Int64_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Dictionary_2_t270 * V_1 = {0};
	DateTime_t245  V_2 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)IsInst(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral735);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral735);
		V_1 = ((Dictionary_2_t270 *)IsInst(L_5, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral806);
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_7, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t245_il2cpp_TypeInfo_var);
		DateTime_t245  L_8 = DateTime_get_Now_m3345(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_8;
		Dictionary_2_t270 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral807);
		DateTime_t245  L_11 = DateTime_AddSeconds_m3497((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_10, Int64_t632_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_11;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookUiResponse_m2108 (CanvasFacebook_t394 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral809);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral809);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t270 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral809);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2239(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		goto IL_0046;
	}

IL_0041:
	{
		G_B4_0 = (String_t*) &_stringLiteral810;
	}

IL_0046:
	{
		V_1 = G_B4_0;
		Dictionary_2_t270 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral811);
		String_t* L_11 = V_1;
		FBResult_t239 * L_12 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, ((String_t*)Castclass(L_10, String_t_il2cpp_TypeInfo_var)), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m2109 (CanvasFacebook_t394 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t372 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t377 * L_0 = (__this->___onInitComplete_20);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		InitDelegate_t377 * L_1 = (__this->___onInitComplete_20);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m2110 (CanvasFacebook_t394 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___deepLink_26 = L_0;
		return;
	}
}
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern TypeInfo* TextAsset_t677_il2cpp_TypeInfo_var;
extern "C" String_t* CanvasFacebook_StringFromFile_m2111 (CanvasFacebook_t394 * __this, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextAsset_t677_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(343);
		s_Il2CppMethodIntialized = true;
	}
	TextAsset_t677 * V_0 = {0};
	{
		String_t* L_0 = ___resourceName;
		Object_t599 * L_1 = Resources_Load_m3186(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t677 *)IsInst(L_1, TextAsset_t677_il2cpp_TypeInfo_var));
		TextAsset_t677 * L_2 = V_0;
		bool L_3 = Object_op_Implicit_m3505(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		TextAsset_t677 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = TextAsset_get_text_m3506(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		return (String_t*)NULL;
	}
}
// Facebook.CanvasFacebookLoader
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.CanvasFacebookLoader
#include "AssemblyU2DCSharp_Facebook_CanvasFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t386;
struct CanvasFacebook_t394;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507(__this /* static, unused */, p0, method) (( CanvasFacebook_t394 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.CanvasFacebookLoader::.ctor()
extern "C" void CanvasFacebookLoader__ctor_m2112 (CanvasFacebookLoader_t395 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1974(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.CanvasFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var;
extern "C" AbstractFacebook_t372 * CanvasFacebookLoader_get_fb_m2113 (CanvasFacebookLoader_t395 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t394 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.JsBridge
#include "AssemblyU2DCSharp_Facebook_JsBridgeMethodDeclarations.h"

// Facebook.HideUnityDelegate
#include "AssemblyU2DCSharp_Facebook_HideUnityDelegateMethodDeclarations.h"


// System.Void Facebook.JsBridge::.ctor()
extern "C" void JsBridge__ctor_m2114 (JsBridge_t396 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::Start()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var;
extern "C" void JsBridge_Start_m2115 (JsBridge_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t394 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507(NULL /*static, unused*/, 1, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t394_m3507_MethodInfo_var);
		__this->___facebook_2 = L_0;
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponse(System.String)
extern "C" void JsBridge_OnFacebookAuthResponse_m2116 (JsBridge_t396 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t394 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponse_m2106(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponseChange(System.String)
extern "C" void JsBridge_OnFacebookAuthResponseChange_m2117 (JsBridge_t396 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t394 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponseChange_m2107(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookUiResponse(System.String)
extern "C" void JsBridge_OnFacebookUiResponse_m2118 (JsBridge_t396 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t394 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookUiResponse_m2108(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookFocus(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnFacebookFocus_m2119 (JsBridge_t396 * __this, String_t* ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t394 * L_0 = (__this->___facebook_2);
		NullCheck(L_0);
		HideUnityDelegate_t378 * L_1 = (L_0->___OnHideUnity_21);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		CanvasFacebook_t394 * L_2 = (__this->___facebook_2);
		NullCheck(L_2);
		HideUnityDelegate_t378 * L_3 = (L_2->___OnHideUnity_21);
		String_t* L_4 = ___state;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m181(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral349, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean) */, L_3, L_5);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Facebook.JsBridge::OnInit(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnInit_m2120 (JsBridge_t396 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___responseJsonData;
		JsBridge_OnFacebookAuthResponse_m2116(__this, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		CanvasFacebook_t394 * L_3 = (__this->___facebook_2);
		NullCheck(L_3);
		CanvasFacebook_SetInitComplete_m2109(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnUrlResponse(System.String)
extern "C" void JsBridge_OnUrlResponse_m2121 (JsBridge_t396 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		CanvasFacebook_t394 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		CanvasFacebook_OnUrlResponse_m2110(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.EditorFacebook
#include "AssemblyU2DCSharp_Facebook_EditorFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.EditorFacebook
#include "AssemblyU2DCSharp_Facebook_EditorFacebookMethodDeclarations.h"

// EditorFacebookAccessToken
#include "AssemblyU2DCSharp_EditorFacebookAccessToken.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5MethodDeclarations.h"
struct FBComponentFactory_t386;
struct EditorFacebookAccessToken_t398;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508(__this /* static, unused */, p0, method) (( EditorFacebookAccessToken_t398 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.EditorFacebook::.ctor()
extern "C" void EditorFacebook__ctor_m2122 (EditorFacebook_t397 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m1946(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C" bool EditorFacebook_get_LimitEventUsage_m2123 (EditorFacebook_t397 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t372 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void EditorFacebook_set_LimitEventUsage_m2124 (EditorFacebook_t397 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t372 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C" void EditorFacebook_OnAwake_m2125 (EditorFacebook_t397 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void EditorFacebook_Init_m2126 (EditorFacebook_t397 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		((AbstractFacebook_t372 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t377 * L_0 = ___onInitComplete;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InitDelegate_t377 * L_1 = ___onInitComplete;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var;
extern "C" void EditorFacebook_Login_m2127 (EditorFacebook_t397 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1959(__this, L_0, /*hidden argument*/NULL);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_Logout_m2128 (EditorFacebook_t397 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m1951(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_AppRequest_m2129 (EditorFacebook_t397 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral812, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_FeedRequest_m2130 (EditorFacebook_t397 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral813, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Pay_m2131 (EditorFacebook_t397 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral814, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t674_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupCreate_m2132 (EditorFacebook_t397 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t674 * L_0 = (PlatformNotSupportedException_t674 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t674_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m3489(L_0, (String_t*) &_stringLiteral815, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t674_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupJoin_m2133 (EditorFacebook_t397 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t674 * L_0 = (PlatformNotSupportedException_t674 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t674_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m3489(L_0, (String_t*) &_stringLiteral816, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_PublishInstall_m2134 (EditorFacebook_t397 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C" void EditorFacebook_ActivateApp_m2135 (EditorFacebook_t397 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral817, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GetDeepLink_m2136 (EditorFacebook_t397 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBDebug_Info_m2015(NULL /*static, unused*/, (String_t*) &_stringLiteral818, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		FacebookDelegate_t391 * L_1 = ___callback;
		FBResult_t239 * L_2 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_2, (String_t*) &_stringLiteral819, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_2);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogEvent_m2137 (EditorFacebook_t397 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m2014(NULL /*static, unused*/, (String_t*) &_stringLiteral820, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogPurchase_m2138 (EditorFacebook_t397 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m2014(NULL /*static, unused*/, (String_t*) &_stringLiteral820, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t583_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t73_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t644_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t27_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3111_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3274_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3275_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3276_MethodInfo_var;
extern "C" void EditorFacebook_MockLoginCallback_m2139 (EditorFacebook_t397 * __this, FBResult_t239 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		List_1_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		List_1_t73_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(105);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Exception_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		List_1__ctor_m3111_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483679);
		List_1_GetEnumerator_m3274_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483861);
		Enumerator_get_Current_m3275_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483862);
		Enumerator_MoveNext_m3276_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483863);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t583 * V_0 = {0};
	List_1_t73 * V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t644  V_3 = {0};
	Dictionary_2_t270 * V_4 = {0};
	Dictionary_2_t270 * V_5 = {0};
	Dictionary_2_t270 * V_6 = {0};
	Exception_t27 * V_7 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EditorFacebookAccessToken_t398 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var);
		Object_Destroy_m3305(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		FBResult_t239 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Error_m2022(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		FBResult_t239 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m2022(L_3, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m2141(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			FBResult_t239 * L_5 = ___result;
			NullCheck(L_5);
			String_t* L_6 = FBResult_get_Text_m2021(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
			Object_t * L_7 = Json_Deserialize_m2238(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_0 = ((List_1_t583 *)Castclass(L_7, List_1_t583_il2cpp_TypeInfo_var));
			List_1_t73 * L_8 = (List_1_t73 *)il2cpp_codegen_object_new (List_1_t73_il2cpp_TypeInfo_var);
			List_1__ctor_m3111(L_8, /*hidden argument*/List_1__ctor_m3111_MethodInfo_var);
			V_1 = L_8;
			List_1_t583 * L_9 = V_0;
			NullCheck(L_9);
			Enumerator_t644  L_10 = List_1_GetEnumerator_m3274(L_9, /*hidden argument*/List_1_GetEnumerator_m3274_MethodInfo_var);
			V_3 = L_10;
		}

IL_0041:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0093;
			}

IL_0046:
			{
				Object_t * L_11 = Enumerator_get_Current_m3275((&V_3), /*hidden argument*/Enumerator_get_Current_m3275_MethodInfo_var);
				V_2 = L_11;
				Object_t * L_12 = V_2;
				if (((Dictionary_2_t270 *)IsInst(L_12, Dictionary_2_t270_il2cpp_TypeInfo_var)))
				{
					goto IL_005e;
				}
			}

IL_0059:
			{
				goto IL_0093;
			}

IL_005e:
			{
				Object_t * L_13 = V_2;
				V_4 = ((Dictionary_2_t270 *)Castclass(L_13, Dictionary_2_t270_il2cpp_TypeInfo_var));
				Dictionary_2_t270 * L_14 = V_4;
				NullCheck(L_14);
				bool L_15 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_14, (String_t*) &_stringLiteral821);
				if (L_15)
				{
					goto IL_007c;
				}
			}

IL_0077:
			{
				goto IL_0093;
			}

IL_007c:
			{
				List_1_t73 * L_16 = V_1;
				Dictionary_2_t270 * L_17 = V_4;
				NullCheck(L_17);
				Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral821);
				NullCheck(L_16);
				VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var)));
			}

IL_0093:
			{
				bool L_19 = Enumerator_MoveNext_m3276((&V_3), /*hidden argument*/Enumerator_MoveNext_m3276_MethodInfo_var);
				if (L_19)
				{
					goto IL_0046;
				}
			}

IL_009f:
			{
				IL2CPP_LEAVE(0xB0, FINALLY_00a4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t27 *)e.ex;
			goto FINALLY_00a4;
		}

FINALLY_00a4:
		{ // begin finally (depth: 2)
			Enumerator_t644  L_20 = V_3;
			Enumerator_t644  L_21 = L_20;
			Object_t * L_22 = Box(Enumerator_t644_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(164)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(164)
		{
			IL2CPP_JUMP_TBL(0xB0, IL_00b0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
		}

IL_00b0:
		{
			List_1_t73 * L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, 0);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
			Object_t * L_25 = Json_Deserialize_m2238(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_5 = ((Dictionary_2_t270 *)Castclass(L_25, Dictionary_2_t270_il2cpp_TypeInfo_var));
			List_1_t73 * L_26 = V_1;
			NullCheck(L_26);
			String_t* L_27 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, 1);
			Object_t * L_28 = Json_Deserialize_m2238(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_6 = ((Dictionary_2_t270 *)Castclass(L_28, Dictionary_2_t270_il2cpp_TypeInfo_var));
			IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
			String_t* L_29 = FB_get_AppId_m1979(NULL /*static, unused*/, /*hidden argument*/NULL);
			Dictionary_2_t270 * L_30 = V_6;
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_30, (String_t*) &_stringLiteral51);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_32 = String_op_Inequality_m181(NULL /*static, unused*/, L_29, ((String_t*)Castclass(L_31, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0110;
			}
		}

IL_00f6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
			String_t* L_33 = FB_get_AppId_m1979(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral822, L_33, /*hidden argument*/NULL);
			EditorFacebook_BadAccessToken_m2141(__this, L_34, /*hidden argument*/NULL);
			goto IL_0162;
		}

IL_0110:
		{
			Dictionary_2_t270 * L_35 = V_5;
			NullCheck(L_35);
			Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_35, (String_t*) &_stringLiteral51);
			((AbstractFacebook_t372 *)__this)->___userId_6 = ((String_t*)Castclass(L_36, String_t_il2cpp_TypeInfo_var));
			((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			FBResult_t239 * L_38 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
			FBResult__ctor_m2019(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
			AbstractFacebook_OnAuthResponse_m1960(__this, L_38, /*hidden argument*/NULL);
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t27 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t27_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0144;
		throw e;
	}

CATCH_0144:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t27 *)__exception_local);
		Exception_t27 * L_39 = V_7;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral823, L_40, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m2141(__this, L_41, /*hidden argument*/NULL);
		goto IL_0162;
	} // end catch (depth: 1)

IL_0162:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_MockCancelledLoginCallback_m2140 (EditorFacebook_t397 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t239 * L_1 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_1, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var;
extern "C" void EditorFacebook_BadAccessToken_m2141 (EditorFacebook_t397 * __this, String_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___error;
		FBDebug_Error_m2017(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m1951(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_2);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t398_m3508_MethodInfo_var);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// EditorFacebookAccessToken
#include "AssemblyU2DCSharp_EditorFacebookAccessTokenMethodDeclarations.h"

// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkin.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunction.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.GUILayoutOption
#include "UnityEngine_UnityEngine_GUILayoutOption.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUISkin
#include "UnityEngine_UnityEngine_GUISkinMethodDeclarations.h"
// UnityEngine.GUI/WindowFunction
#include "UnityEngine_UnityEngine_GUI_WindowFunctionMethodDeclarations.h"
// UnityEngine.GUILayout
#include "UnityEngine_UnityEngine_GUILayoutMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUILayoutUtility
#include "UnityEngine_UnityEngine_GUILayoutUtilityMethodDeclarations.h"
// Facebook.HttpMethod
#include "AssemblyU2DCSharp_Facebook_HttpMethodMethodDeclarations.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"
struct FBComponentFactory_t386;
struct EditorFacebook_t397;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509(__this /* static, unused */, p0, method) (( EditorFacebook_t397 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void EditorFacebookAccessToken::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebookAccessToken__ctor_m2142 (EditorFacebookAccessToken_t398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___windowHeight_3 = (200.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___accessToken_4 = L_0;
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUI()
extern TypeInfo* GUI_t601_il2cpp_TypeInfo_var;
extern TypeInfo* WindowFunction_t679_il2cpp_TypeInfo_var;
extern const MethodInfo* EditorFacebookAccessToken_OnGUIDialog_m2144_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUI_m2143 (EditorFacebookAccessToken_t398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		WindowFunction_t679_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(346);
		EditorFacebookAccessToken_OnGUIDialog_m2144_MethodInfo_var = il2cpp_codegen_method_info_from_index(428);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___windowHeight_3);
		V_0 = ((float)((float)(((float)((int32_t)((int32_t)L_0/(int32_t)2))))-(float)((float)((float)L_1/(float)(2.0f)))));
		int32_t L_2 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((int32_t)((int32_t)L_2/(int32_t)2))))-(float)(296.0f)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t601_il2cpp_TypeInfo_var);
		GUISkin_t678 * L_3 = GUI_get_skin_m3510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_t64 * L_4 = GUISkin_get_button_m3511(L_3, /*hidden argument*/NULL);
		__this->___greyButton_6 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.Object::GetHashCode() */, __this);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = (__this->___windowHeight_3);
		Rect_t594  L_9 = {0};
		Rect__ctor_m3085(&L_9, L_6, L_7, (592.0f), L_8, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)EditorFacebookAccessToken_OnGUIDialog_m2144_MethodInfo_var };
		WindowFunction_t679 * L_11 = (WindowFunction_t679 *)il2cpp_codegen_object_new (WindowFunction_t679_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m3512(L_11, __this, L_10, /*hidden argument*/NULL);
		GUI_ModalWindow_m3513(NULL /*static, unused*/, L_5, L_9, L_11, (String_t*) &_stringLiteral824, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUIDialog(System.Int32)
extern TypeInfo* GUI_t601_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t680_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t600_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t80_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t391_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3098_MethodInfo_var;
extern const MethodInfo* EditorFacebook_MockLoginCallback_m2139_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUIDialog_m2144 (EditorFacebookAccessToken_t398 * __this, int32_t ___windowId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(92);
		GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(87);
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		GUIContent_t680_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(348);
		GUILayoutUtility_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(89);
		Dictionary_2_t80_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(101);
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		FacebookDelegate_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484077);
		Dictionary_2__ctor_m3098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483678);
		EditorFacebook_MockLoginCallback_m2139_MethodInfo_var = il2cpp_codegen_method_info_from_index(430);
		s_Il2CppMethodIntialized = true;
	}
	GUIContent_t680 * V_0 = {0};
	Rect_t594  V_1 = {0};
	EditorFacebook_t397 * V_2 = {0};
	Dictionary_2_t80 * V_3 = {0};
	GUIContent_t680 * V_4 = {0};
	Rect_t594  V_5 = {0};
	{
		bool L_0 = (__this->___isLoggingIn_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t601_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3096(NULL /*static, unused*/, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		GUILayout_Space_m3088(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3073(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m3087(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_Space_m3088(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_Label_m3074(NULL /*static, unused*/, (String_t*) &_stringLiteral825, ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3099(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___accessToken_4);
		GUISkin_t678 * L_2 = GUI_get_skin_m3510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t64 * L_3 = GUISkin_get_textArea_m3514(L_2, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t597* L_4 = ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t598 * L_5 = GUILayout_MinWidth_m3089(NULL /*static, unused*/, (400.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((GUILayoutOption_t598 **)(GUILayoutOption_t598 **)SZArrayLdElema(L_4, 0)) = (GUILayoutOption_t598 *)L_5;
		String_t* L_6 = GUILayout_TextField_m3515(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/NULL);
		__this->___accessToken_4 = L_6;
		GUILayout_EndHorizontal_m3076(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_Space_m3088(NULL /*static, unused*/, (20.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3073(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_7 = GUILayout_Button_m3072(NULL /*static, unused*/, (String_t*) &_stringLiteral826, ((GUILayoutOptionU5BU5D_t597*)SZArrayNew(GUILayoutOptionU5BU5D_t597_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		String_t* L_8 = FB_get_AppId_m1979(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m3516(NULL /*static, unused*/, (String_t*) &_stringLiteral827, L_8, /*hidden argument*/NULL);
		Application_OpenURL_m3365(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_00be:
	{
		GUILayout_FlexibleSpace_m3517(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIContent_t680 * L_10 = (GUIContent_t680 *)il2cpp_codegen_object_new (GUIContent_t680_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3518(L_10, (String_t*) &_stringLiteral36, /*hidden argument*/NULL);
		V_0 = L_10;
		GUIContent_t680 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t601_il2cpp_TypeInfo_var);
		GUISkin_t678 * L_12 = GUI_get_skin_m3510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIStyle_t64 * L_13 = GUISkin_get_button_m3511(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t600_il2cpp_TypeInfo_var);
		Rect_t594  L_14 = GUILayoutUtility_GetRect_m3519(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Rect_t594  L_15 = V_1;
		GUIContent_t680 * L_16 = V_0;
		bool L_17 = GUI_Button_m3520(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0158;
		}
	}
	{
		EditorFacebook_t397 * L_18 = FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var);
		V_2 = L_18;
		EditorFacebook_t397 * L_19 = V_2;
		String_t* L_20 = (__this->___accessToken_4);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, L_19, L_20);
		Dictionary_2_t80 * L_21 = (Dictionary_2_t80 *)il2cpp_codegen_object_new (Dictionary_2_t80_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3098(L_21, /*hidden argument*/Dictionary_2__ctor_m3098_MethodInfo_var);
		V_3 = L_21;
		Dictionary_2_t80 * L_22 = V_3;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral828, (String_t*) &_stringLiteral829);
		Dictionary_2_t80 * L_23 = V_3;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral802, (String_t*) &_stringLiteral830);
		Dictionary_2_t80 * L_24 = V_3;
		String_t* L_25 = (__this->___accessToken_4);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral513, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_26 = HttpMethod_get_GET_m2212(NULL /*static, unused*/, /*hidden argument*/NULL);
		EditorFacebook_t397 * L_27 = V_2;
		IntPtr_t L_28 = { (void*)EditorFacebook_MockLoginCallback_m2139_MethodInfo_var };
		FacebookDelegate_t391 * L_29 = (FacebookDelegate_t391 *)il2cpp_codegen_object_new (FacebookDelegate_t391_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3052(L_29, L_27, L_28, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_API_m1994(NULL /*static, unused*/, (String_t*) &_stringLiteral418, L_26, L_29, L_30, /*hidden argument*/NULL);
		__this->___isLoggingIn_5 = 1;
	}

IL_0158:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t601_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3096(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GUIContent_t680 * L_31 = (GUIContent_t680 *)il2cpp_codegen_object_new (GUIContent_t680_il2cpp_TypeInfo_var);
		GUIContent__ctor_m3518(L_31, (String_t*) &_stringLiteral831, /*hidden argument*/NULL);
		V_4 = L_31;
		GUIContent_t680 * L_32 = V_4;
		GUIStyle_t64 * L_33 = (__this->___greyButton_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t600_il2cpp_TypeInfo_var);
		Rect_t594  L_34 = GUILayoutUtility_GetRect_m3519(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Rect_t594  L_35 = V_5;
		GUIContent_t680 * L_36 = V_4;
		GUIStyle_t64 * L_37 = (__this->___greyButton_6);
		bool L_38 = GUI_Button_m3521(NULL /*static, unused*/, L_35, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_019e;
		}
	}
	{
		EditorFacebook_t397 * L_39 = FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var);
		NullCheck(L_39);
		EditorFacebook_MockCancelledLoginCallback_m2140(L_39, /*hidden argument*/NULL);
		Object_Destroy_m3305(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_019e:
	{
		GUILayout_EndHorizontal_m3076(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t681 * L_40 = Event_get_current_m3522(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = Event_get_type_m3523(L_40, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)7))))
		{
			goto IL_01de;
		}
	}
	{
		float L_42 = Rect_get_y_m3083((&V_5), /*hidden argument*/NULL);
		float L_43 = Rect_get_height_m3443((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t601_il2cpp_TypeInfo_var);
		GUISkin_t678 * L_44 = GUI_get_skin_m3510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_44);
		GUIStyle_t64 * L_45 = GUISkin_get_window_m3524(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		RectOffset_t596 * L_46 = GUIStyle_get_padding_m3525(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = RectOffset_get_bottom_m3526(L_46, /*hidden argument*/NULL);
		__this->___windowHeight_3 = ((float)((float)((float)((float)L_42+(float)L_43))+(float)(((float)L_47))));
	}

IL_01de:
	{
		return;
	}
}
// Facebook.EditorFacebookLoader
#include "AssemblyU2DCSharp_Facebook_EditorFacebookLoader.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.EditorFacebookLoader
#include "AssemblyU2DCSharp_Facebook_EditorFacebookLoaderMethodDeclarations.h"



// System.Void Facebook.EditorFacebookLoader::.ctor()
extern "C" void EditorFacebookLoader__ctor_m2145 (EditorFacebookLoader_t399 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1974(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.EditorFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var;
extern "C" AbstractFacebook_t372 * EditorFacebookLoader_get_fb_m2146 (EditorFacebookLoader_t399 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484077);
		s_Il2CppMethodIntialized = true;
	}
	{
		EditorFacebook_t397 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t397_m3509_MethodInfo_var);
		return L_0;
	}
}
// Facebook.IOSFacebook/NativeDict
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_NativeDict.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook/NativeDict
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_NativeDictMethodDeclarations.h"



// System.Void Facebook.IOSFacebook/NativeDict::.ctor()
extern "C" void NativeDict__ctor_m2147 (NativeDict_t400 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		__this->___numEntries_0 = 0;
		__this->___keys_1 = (StringU5BU5D_t45*)NULL;
		__this->___vals_2 = (StringU5BU5D_t45*)NULL;
		return;
	}
}
// Facebook.IOSFacebook/FBInsightsFlushBehavior
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_FBInsightsFlushBehavi.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook/FBInsightsFlushBehavior
#include "AssemblyU2DCSharp_Facebook_IOSFacebook_FBInsightsFlushBehaviMethodDeclarations.h"



// Facebook.IOSFacebook
#include "AssemblyU2DCSharp_Facebook_IOSFacebook.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebook
#include "AssemblyU2DCSharp_Facebook_IOSFacebookMethodDeclarations.h"

// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void Facebook.IOSFacebook::.ctor()
extern "C" void IOSFacebook__ctor_m2148 (IOSFacebook_t402 * __this, const MethodInfo* method)
{
	{
		__this->___dialogMode_14 = 1;
		AbstractFacebook__ctor_m1946(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" {void DEFAULT_CALL iosInit(char*, int32_t, int32_t, int32_t, int32_t, char*);}
extern "C" void IOSFacebook_iosInit_m2149 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosInit;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosInit'"));
		}
	}

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Marshaling of parameter '___cookie' to native representation

	// Marshaling of parameter '___logging' to native representation

	// Marshaling of parameter '___status' to native representation

	// Marshaling of parameter '___frictionlessRequests' to native representation

	// Marshaling of parameter '___urlSuffix' to native representation
	char* ____urlSuffix_marshaled = { 0 };
	____urlSuffix_marshaled = il2cpp_codegen_marshal_string(___urlSuffix);

	// Native function invocation
	_il2cpp_pinvoke_func(____appId_marshaled, ___cookie, ___logging, ___status, ___frictionlessRequests, ____urlSuffix_marshaled);

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

	// Marshaling cleanup of parameter '___cookie' native representation

	// Marshaling cleanup of parameter '___logging' native representation

	// Marshaling cleanup of parameter '___status' native representation

	// Marshaling cleanup of parameter '___frictionlessRequests' native representation

	// Marshaling cleanup of parameter '___urlSuffix' native representation
	il2cpp_codegen_marshal_free(____urlSuffix_marshaled);
	____urlSuffix_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosLogin(System.String)
extern "C" {void DEFAULT_CALL iosLogin(char*);}
extern "C" void IOSFacebook_iosLogin_m2150 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosLogin;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosLogin'"));
		}
	}

	// Marshaling of parameter '___scope' to native representation
	char* ____scope_marshaled = { 0 };
	____scope_marshaled = il2cpp_codegen_marshal_string(___scope);

	// Native function invocation
	_il2cpp_pinvoke_func(____scope_marshaled);

	// Marshaling cleanup of parameter '___scope' native representation
	il2cpp_codegen_marshal_free(____scope_marshaled);
	____scope_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosLogout()
extern "C" {void DEFAULT_CALL iosLogout();}
extern "C" void IOSFacebook_iosLogout_m2151 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosLogout;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosLogout'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void Facebook.IOSFacebook::iosSetShareDialogMode(System.Int32)
extern "C" {void DEFAULT_CALL iosSetShareDialogMode(int32_t);}
extern "C" void IOSFacebook_iosSetShareDialogMode_m2152 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosSetShareDialogMode;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosSetShareDialogMode'"));
		}
	}

	// Marshaling of parameter '___mode' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___mode);

	// Marshaling cleanup of parameter '___mode' native representation

}
// System.Void Facebook.IOSFacebook::iosFeedRequest(System.Int32,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL iosFeedRequest(int32_t, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*);}
extern "C" void IOSFacebook_iosFeedRequest_m2153 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char*, char*, char*, char*, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFeedRequest;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFeedRequest'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___toId' to native representation
	char* ____toId_marshaled = { 0 };
	____toId_marshaled = il2cpp_codegen_marshal_string(___toId);

	// Marshaling of parameter '___link' to native representation
	char* ____link_marshaled = { 0 };
	____link_marshaled = il2cpp_codegen_marshal_string(___link);

	// Marshaling of parameter '___linkName' to native representation
	char* ____linkName_marshaled = { 0 };
	____linkName_marshaled = il2cpp_codegen_marshal_string(___linkName);

	// Marshaling of parameter '___linkCaption' to native representation
	char* ____linkCaption_marshaled = { 0 };
	____linkCaption_marshaled = il2cpp_codegen_marshal_string(___linkCaption);

	// Marshaling of parameter '___linkDescription' to native representation
	char* ____linkDescription_marshaled = { 0 };
	____linkDescription_marshaled = il2cpp_codegen_marshal_string(___linkDescription);

	// Marshaling of parameter '___picture' to native representation
	char* ____picture_marshaled = { 0 };
	____picture_marshaled = il2cpp_codegen_marshal_string(___picture);

	// Marshaling of parameter '___mediaSource' to native representation
	char* ____mediaSource_marshaled = { 0 };
	____mediaSource_marshaled = il2cpp_codegen_marshal_string(___mediaSource);

	// Marshaling of parameter '___actionName' to native representation
	char* ____actionName_marshaled = { 0 };
	____actionName_marshaled = il2cpp_codegen_marshal_string(___actionName);

	// Marshaling of parameter '___actionLink' to native representation
	char* ____actionLink_marshaled = { 0 };
	____actionLink_marshaled = il2cpp_codegen_marshal_string(___actionLink);

	// Marshaling of parameter '___reference' to native representation
	char* ____reference_marshaled = { 0 };
	____reference_marshaled = il2cpp_codegen_marshal_string(___reference);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____toId_marshaled, ____link_marshaled, ____linkName_marshaled, ____linkCaption_marshaled, ____linkDescription_marshaled, ____picture_marshaled, ____mediaSource_marshaled, ____actionName_marshaled, ____actionLink_marshaled, ____reference_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___toId' native representation
	il2cpp_codegen_marshal_free(____toId_marshaled);
	____toId_marshaled = NULL;

	// Marshaling cleanup of parameter '___link' native representation
	il2cpp_codegen_marshal_free(____link_marshaled);
	____link_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkName' native representation
	il2cpp_codegen_marshal_free(____linkName_marshaled);
	____linkName_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkCaption' native representation
	il2cpp_codegen_marshal_free(____linkCaption_marshaled);
	____linkCaption_marshaled = NULL;

	// Marshaling cleanup of parameter '___linkDescription' native representation
	il2cpp_codegen_marshal_free(____linkDescription_marshaled);
	____linkDescription_marshaled = NULL;

	// Marshaling cleanup of parameter '___picture' native representation
	il2cpp_codegen_marshal_free(____picture_marshaled);
	____picture_marshaled = NULL;

	// Marshaling cleanup of parameter '___mediaSource' native representation
	il2cpp_codegen_marshal_free(____mediaSource_marshaled);
	____mediaSource_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionName' native representation
	il2cpp_codegen_marshal_free(____actionName_marshaled);
	____actionName_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionLink' native representation
	il2cpp_codegen_marshal_free(____actionLink_marshaled);
	____actionLink_marshaled = NULL;

	// Marshaling cleanup of parameter '___reference' native representation
	il2cpp_codegen_marshal_free(____reference_marshaled);
	____reference_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosAppRequest(System.Int32,System.String,System.String,System.String,System.String[],System.Int32,System.String,System.String[],System.Int32,System.Boolean,System.Int32,System.String,System.String)
extern "C" {void DEFAULT_CALL iosAppRequest(int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);}
extern "C" void IOSFacebook_iosAppRequest_m2154 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t45* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, char**, int32_t, char*, char**, int32_t, int32_t, int32_t, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosAppRequest;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosAppRequest'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___message' to native representation
	char* ____message_marshaled = { 0 };
	____message_marshaled = il2cpp_codegen_marshal_string(___message);

	// Marshaling of parameter '___actionType' to native representation
	char* ____actionType_marshaled = { 0 };
	____actionType_marshaled = il2cpp_codegen_marshal_string(___actionType);

	// Marshaling of parameter '___objectId' to native representation
	char* ____objectId_marshaled = { 0 };
	____objectId_marshaled = il2cpp_codegen_marshal_string(___objectId);

	// Marshaling of parameter '___to' to native representation
	char** ____to_marshaled = { 0 };
	____to_marshaled = il2cpp_codegen_marshal_string_array(___to);

	// Marshaling of parameter '___toLength' to native representation

	// Marshaling of parameter '___filters' to native representation
	char* ____filters_marshaled = { 0 };
	____filters_marshaled = il2cpp_codegen_marshal_string(___filters);

	// Marshaling of parameter '___excludeIds' to native representation
	char** ____excludeIds_marshaled = { 0 };
	____excludeIds_marshaled = il2cpp_codegen_marshal_string_array(___excludeIds);

	// Marshaling of parameter '___excludeIdsLength' to native representation

	// Marshaling of parameter '___hasMaxRecipients' to native representation

	// Marshaling of parameter '___maxRecipients' to native representation

	// Marshaling of parameter '___data' to native representation
	char* ____data_marshaled = { 0 };
	____data_marshaled = il2cpp_codegen_marshal_string(___data);

	// Marshaling of parameter '___title' to native representation
	char* ____title_marshaled = { 0 };
	____title_marshaled = il2cpp_codegen_marshal_string(___title);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____message_marshaled, ____actionType_marshaled, ____objectId_marshaled, ____to_marshaled, ___toLength, ____filters_marshaled, ____excludeIds_marshaled, ___excludeIdsLength, ___hasMaxRecipients, ___maxRecipients, ____data_marshaled, ____title_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___message' native representation
	il2cpp_codegen_marshal_free(____message_marshaled);
	____message_marshaled = NULL;

	// Marshaling cleanup of parameter '___actionType' native representation
	il2cpp_codegen_marshal_free(____actionType_marshaled);
	____actionType_marshaled = NULL;

	// Marshaling cleanup of parameter '___objectId' native representation
	il2cpp_codegen_marshal_free(____objectId_marshaled);
	____objectId_marshaled = NULL;

	// Marshaling cleanup of parameter '___to' native representation
	if (___to != NULL) il2cpp_codegen_marshal_free_string_array((void**)____to_marshaled, ((Il2CppCodeGenArray*)___to)->max_length);
	____to_marshaled = NULL;

	// Marshaling cleanup of parameter '___toLength' native representation

	// Marshaling cleanup of parameter '___filters' native representation
	il2cpp_codegen_marshal_free(____filters_marshaled);
	____filters_marshaled = NULL;

	// Marshaling cleanup of parameter '___excludeIds' native representation
	if (___excludeIds != NULL) il2cpp_codegen_marshal_free_string_array((void**)____excludeIds_marshaled, ((Il2CppCodeGenArray*)___excludeIds)->max_length);
	____excludeIds_marshaled = NULL;

	// Marshaling cleanup of parameter '___excludeIdsLength' native representation

	// Marshaling cleanup of parameter '___hasMaxRecipients' native representation

	// Marshaling cleanup of parameter '___maxRecipients' native representation

	// Marshaling cleanup of parameter '___data' native representation
	il2cpp_codegen_marshal_free(____data_marshaled);
	____data_marshaled = NULL;

	// Marshaling cleanup of parameter '___title' native representation
	il2cpp_codegen_marshal_free(____title_marshaled);
	____title_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosCreateGameGroup(System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL iosCreateGameGroup(int32_t, char*, char*, char*);}
extern "C" void IOSFacebook_iosCreateGameGroup_m2155 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosCreateGameGroup;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosCreateGameGroup'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___name' to native representation
	char* ____name_marshaled = { 0 };
	____name_marshaled = il2cpp_codegen_marshal_string(___name);

	// Marshaling of parameter '___description' to native representation
	char* ____description_marshaled = { 0 };
	____description_marshaled = il2cpp_codegen_marshal_string(___description);

	// Marshaling of parameter '___privacy' to native representation
	char* ____privacy_marshaled = { 0 };
	____privacy_marshaled = il2cpp_codegen_marshal_string(___privacy);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____name_marshaled, ____description_marshaled, ____privacy_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___name' native representation
	il2cpp_codegen_marshal_free(____name_marshaled);
	____name_marshaled = NULL;

	// Marshaling cleanup of parameter '___description' native representation
	il2cpp_codegen_marshal_free(____description_marshaled);
	____description_marshaled = NULL;

	// Marshaling cleanup of parameter '___privacy' native representation
	il2cpp_codegen_marshal_free(____privacy_marshaled);
	____privacy_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosJoinGameGroup(System.Int32,System.String)
extern "C" {void DEFAULT_CALL iosJoinGameGroup(int32_t, char*);}
extern "C" void IOSFacebook_iosJoinGameGroup_m2156 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosJoinGameGroup;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosJoinGameGroup'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___id' to native representation
	char* ____id_marshaled = { 0 };
	____id_marshaled = il2cpp_codegen_marshal_string(___id);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____id_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___id' native representation
	il2cpp_codegen_marshal_free(____id_marshaled);
	____id_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBSettingsPublishInstall(System.Int32,System.String)
extern "C" {void DEFAULT_CALL iosFBSettingsPublishInstall(int32_t, char*);}
extern "C" void IOSFacebook_iosFBSettingsPublishInstall_m2157 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBSettingsPublishInstall;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBSettingsPublishInstall'"));
		}
	}

	// Marshaling of parameter '___requestId' to native representation

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Native function invocation
	_il2cpp_pinvoke_func(___requestId, ____appId_marshaled);

	// Marshaling cleanup of parameter '___requestId' native representation

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBSettingsActivateApp(System.String)
extern "C" {void DEFAULT_CALL iosFBSettingsActivateApp(char*);}
extern "C" void IOSFacebook_iosFBSettingsActivateApp_m2158 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBSettingsActivateApp;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBSettingsActivateApp'"));
		}
	}

	// Marshaling of parameter '___appId' to native representation
	char* ____appId_marshaled = { 0 };
	____appId_marshaled = il2cpp_codegen_marshal_string(___appId);

	// Native function invocation
	_il2cpp_pinvoke_func(____appId_marshaled);

	// Marshaling cleanup of parameter '___appId' native representation
	il2cpp_codegen_marshal_free(____appId_marshaled);
	____appId_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogEvent(System.String,System.Double,System.Int32,System.String[],System.String[])
extern "C" {void DEFAULT_CALL iosFBAppEventsLogEvent(char*, double, int32_t, char**, char**);}
extern "C" void IOSFacebook_iosFBAppEventsLogEvent_m2159 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, double, int32_t, char**, char**);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsLogEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsLogEvent'"));
		}
	}

	// Marshaling of parameter '___logEvent' to native representation
	char* ____logEvent_marshaled = { 0 };
	____logEvent_marshaled = il2cpp_codegen_marshal_string(___logEvent);

	// Marshaling of parameter '___valueToSum' to native representation

	// Marshaling of parameter '___numParams' to native representation

	// Marshaling of parameter '___paramKeys' to native representation
	char** ____paramKeys_marshaled = { 0 };
	____paramKeys_marshaled = il2cpp_codegen_marshal_string_array(___paramKeys);

	// Marshaling of parameter '___paramVals' to native representation
	char** ____paramVals_marshaled = { 0 };
	____paramVals_marshaled = il2cpp_codegen_marshal_string_array(___paramVals);

	// Native function invocation
	_il2cpp_pinvoke_func(____logEvent_marshaled, ___valueToSum, ___numParams, ____paramKeys_marshaled, ____paramVals_marshaled);

	// Marshaling cleanup of parameter '___logEvent' native representation
	il2cpp_codegen_marshal_free(____logEvent_marshaled);
	____logEvent_marshaled = NULL;

	// Marshaling cleanup of parameter '___valueToSum' native representation

	// Marshaling cleanup of parameter '___numParams' native representation

	// Marshaling cleanup of parameter '___paramKeys' native representation
	if (___paramKeys != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramKeys_marshaled, ((Il2CppCodeGenArray*)___paramKeys)->max_length);
	____paramKeys_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramVals' native representation
	if (___paramVals != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramVals_marshaled, ((Il2CppCodeGenArray*)___paramVals)->max_length);
	____paramVals_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsLogPurchase(System.Double,System.String,System.Int32,System.String[],System.String[])
extern "C" {void DEFAULT_CALL iosFBAppEventsLogPurchase(double, char*, int32_t, char**, char**);}
extern "C" void IOSFacebook_iosFBAppEventsLogPurchase_m2160 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t45* ___paramKeys, StringU5BU5D_t45* ___paramVals, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (double, char*, int32_t, char**, char**);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsLogPurchase;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsLogPurchase'"));
		}
	}

	// Marshaling of parameter '___logPurchase' to native representation

	// Marshaling of parameter '___currency' to native representation
	char* ____currency_marshaled = { 0 };
	____currency_marshaled = il2cpp_codegen_marshal_string(___currency);

	// Marshaling of parameter '___numParams' to native representation

	// Marshaling of parameter '___paramKeys' to native representation
	char** ____paramKeys_marshaled = { 0 };
	____paramKeys_marshaled = il2cpp_codegen_marshal_string_array(___paramKeys);

	// Marshaling of parameter '___paramVals' to native representation
	char** ____paramVals_marshaled = { 0 };
	____paramVals_marshaled = il2cpp_codegen_marshal_string_array(___paramVals);

	// Native function invocation
	_il2cpp_pinvoke_func(___logPurchase, ____currency_marshaled, ___numParams, ____paramKeys_marshaled, ____paramVals_marshaled);

	// Marshaling cleanup of parameter '___logPurchase' native representation

	// Marshaling cleanup of parameter '___currency' native representation
	il2cpp_codegen_marshal_free(____currency_marshaled);
	____currency_marshaled = NULL;

	// Marshaling cleanup of parameter '___numParams' native representation

	// Marshaling cleanup of parameter '___paramKeys' native representation
	if (___paramKeys != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramKeys_marshaled, ((Il2CppCodeGenArray*)___paramKeys)->max_length);
	____paramKeys_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramVals' native representation
	if (___paramVals != NULL) il2cpp_codegen_marshal_free_string_array((void**)____paramVals_marshaled, ((Il2CppCodeGenArray*)___paramVals)->max_length);
	____paramVals_marshaled = NULL;

}
// System.Void Facebook.IOSFacebook::iosFBAppEventsSetLimitEventUsage(System.Boolean)
extern "C" {void DEFAULT_CALL iosFBAppEventsSetLimitEventUsage(int32_t);}
extern "C" void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m2161 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosFBAppEventsSetLimitEventUsage;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosFBAppEventsSetLimitEventUsage'"));
		}
	}

	// Marshaling of parameter '___limitEventUsage' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___limitEventUsage);

	// Marshaling cleanup of parameter '___limitEventUsage' native representation

}
// System.Void Facebook.IOSFacebook::iosGetDeepLink()
extern "C" {void DEFAULT_CALL iosGetDeepLink();}
extern "C" void IOSFacebook_iosGetDeepLink_m2162 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)iosGetDeepLink;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'iosGetDeepLink'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Int32 Facebook.IOSFacebook::get_DialogMode()
extern "C" int32_t IOSFacebook_get_DialogMode_m2163 (IOSFacebook_t402 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___dialogMode_14);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C" void IOSFacebook_set_DialogMode_m2164 (IOSFacebook_t402 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___dialogMode_14 = L_0;
		int32_t L_1 = (__this->___dialogMode_14);
		IOSFacebook_iosSetShareDialogMode_m2152(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C" bool IOSFacebook_get_LimitEventUsage_m2165 (IOSFacebook_t402 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t372 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_set_LimitEventUsage_m2166 (IOSFacebook_t402 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t372 *)__this)->___limitEventUsage_9 = L_0;
		bool L_1 = ___value;
		IOSFacebook_iosFBAppEventsSetLimitEventUsage_m2161(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C" void IOSFacebook_OnAwake_m2167 (IOSFacebook_t402 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = (String_t*) &_stringLiteral832;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void IOSFacebook_Init_m2168 (IOSFacebook_t402 * __this, InitDelegate_t377 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t378 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		bool L_1 = ___cookie;
		bool L_2 = ___logging;
		bool L_3 = ___status;
		bool L_4 = ___frictionlessRequests;
		String_t* L_5 = FBSettings_get_IosURLSuffix_m2046(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSFacebook_iosInit_m2149(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		InitDelegate_t377 * L_6 = ___onInitComplete;
		__this->___externalInitDelegate_15 = L_6;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Login_m2169 (IOSFacebook_t402 * __this, String_t* ___scope, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m1959(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		IOSFacebook_iosLogin_m2150(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Logout()
extern "C" void IOSFacebook_Logout_m2170 (IOSFacebook_t402 * __this, const MethodInfo* method)
{
	{
		IOSFacebook_iosLogout_m2151(NULL /*static, unused*/, /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t668_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m3477_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3478_MethodInfo_var;
extern "C" void IOSFacebook_AppRequest_m2171 (IOSFacebook_t402 * __this, String_t* ___message, OGActionType_t390 * ___actionType, String_t* ___objectId, StringU5BU5D_t45* ___to, List_1_t583 * ___filters, StringU5BU5D_t45* ___excludeIds, Nullable_1_t589  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		ArgumentNullException_t668_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(333);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		Nullable_1_get_HasValue_m3477_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484052);
		Nullable_1_get_Value_m3478_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484053);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B13_0 = {0};
	int32_t G_B13_1 = 0;
	String_t* G_B12_0 = {0};
	int32_t G_B12_1 = 0;
	String_t* G_B14_0 = {0};
	String_t* G_B14_1 = {0};
	int32_t G_B14_2 = 0;
	StringU5BU5D_t45* G_B16_0 = {0};
	String_t* G_B16_1 = {0};
	String_t* G_B16_2 = {0};
	String_t* G_B16_3 = {0};
	int32_t G_B16_4 = 0;
	StringU5BU5D_t45* G_B15_0 = {0};
	String_t* G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	String_t* G_B15_3 = {0};
	int32_t G_B15_4 = 0;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t45* G_B17_1 = {0};
	String_t* G_B17_2 = {0};
	String_t* G_B17_3 = {0};
	String_t* G_B17_4 = {0};
	int32_t G_B17_5 = 0;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t45* G_B19_1 = {0};
	String_t* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	String_t* G_B19_4 = {0};
	int32_t G_B19_5 = 0;
	int32_t G_B18_0 = 0;
	StringU5BU5D_t45* G_B18_1 = {0};
	String_t* G_B18_2 = {0};
	String_t* G_B18_3 = {0};
	String_t* G_B18_4 = {0};
	int32_t G_B18_5 = 0;
	String_t* G_B20_0 = {0};
	int32_t G_B20_1 = 0;
	StringU5BU5D_t45* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	String_t* G_B20_4 = {0};
	String_t* G_B20_5 = {0};
	int32_t G_B20_6 = 0;
	StringU5BU5D_t45* G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	int32_t G_B22_2 = 0;
	StringU5BU5D_t45* G_B22_3 = {0};
	String_t* G_B22_4 = {0};
	String_t* G_B22_5 = {0};
	String_t* G_B22_6 = {0};
	int32_t G_B22_7 = 0;
	StringU5BU5D_t45* G_B21_0 = {0};
	String_t* G_B21_1 = {0};
	int32_t G_B21_2 = 0;
	StringU5BU5D_t45* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	String_t* G_B21_5 = {0};
	String_t* G_B21_6 = {0};
	int32_t G_B21_7 = 0;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t45* G_B23_1 = {0};
	String_t* G_B23_2 = {0};
	int32_t G_B23_3 = 0;
	StringU5BU5D_t45* G_B23_4 = {0};
	String_t* G_B23_5 = {0};
	String_t* G_B23_6 = {0};
	String_t* G_B23_7 = {0};
	int32_t G_B23_8 = 0;
	bool G_B25_0 = false;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t45* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B25_4 = 0;
	StringU5BU5D_t45* G_B25_5 = {0};
	String_t* G_B25_6 = {0};
	String_t* G_B25_7 = {0};
	String_t* G_B25_8 = {0};
	int32_t G_B25_9 = 0;
	bool G_B24_0 = false;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t45* G_B24_2 = {0};
	String_t* G_B24_3 = {0};
	int32_t G_B24_4 = 0;
	StringU5BU5D_t45* G_B24_5 = {0};
	String_t* G_B24_6 = {0};
	String_t* G_B24_7 = {0};
	String_t* G_B24_8 = {0};
	int32_t G_B24_9 = 0;
	int32_t G_B26_0 = 0;
	bool G_B26_1 = false;
	int32_t G_B26_2 = 0;
	StringU5BU5D_t45* G_B26_3 = {0};
	String_t* G_B26_4 = {0};
	int32_t G_B26_5 = 0;
	StringU5BU5D_t45* G_B26_6 = {0};
	String_t* G_B26_7 = {0};
	String_t* G_B26_8 = {0};
	String_t* G_B26_9 = {0};
	int32_t G_B26_10 = 0;
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t668 * L_2 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_2, (String_t*) &_stringLiteral55, (String_t*) &_stringLiteral742, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t390 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t668 * L_6 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_6, (String_t*) &_stringLiteral743, (String_t*) &_stringLiteral744, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t390 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t668 * L_10 = (ArgumentNullException_t668 *)il2cpp_codegen_object_new (ArgumentNullException_t668_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3476(L_10, (String_t*) &_stringLiteral745, (String_t*) &_stringLiteral746, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		V_0 = (String_t*)NULL;
		List_1_t583 * L_11 = ___filters;
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		List_1_t583 * L_12 = ___filters;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		List_1_t583 * L_14 = ___filters;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_0 = ((String_t*)IsInst(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0081:
	{
		FacebookDelegate_t391 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m3198(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___message;
		OGActionType_t390 * L_20 = ___actionType;
		G_B12_0 = L_19;
		G_B12_1 = L_18;
		if (!L_20)
		{
			G_B13_0 = L_19;
			G_B13_1 = L_18;
			goto IL_00a0;
		}
	}
	{
		OGActionType_t390 * L_21 = ___actionType;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_21);
		G_B14_0 = L_22;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00a1;
	}

IL_00a0:
	{
		G_B14_0 = ((String_t*)(NULL));
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00a1:
	{
		String_t* L_23 = ___objectId;
		StringU5BU5D_t45* L_24 = ___to;
		StringU5BU5D_t45* L_25 = ___to;
		G_B15_0 = L_24;
		G_B15_1 = L_23;
		G_B15_2 = G_B14_0;
		G_B15_3 = G_B14_1;
		G_B15_4 = G_B14_2;
		if (!L_25)
		{
			G_B16_0 = L_24;
			G_B16_1 = L_23;
			G_B16_2 = G_B14_0;
			G_B16_3 = G_B14_1;
			G_B16_4 = G_B14_2;
			goto IL_00b4;
		}
	}
	{
		StringU5BU5D_t45* L_26 = ___to;
		NullCheck(L_26);
		G_B17_0 = (((int32_t)(((Array_t *)L_26)->max_length)));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		G_B17_4 = G_B15_3;
		G_B17_5 = G_B15_4;
		goto IL_00b5;
	}

IL_00b4:
	{
		G_B17_0 = 0;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		G_B17_5 = G_B16_4;
	}

IL_00b5:
	{
		String_t* L_27 = V_0;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		G_B18_5 = G_B17_5;
		if (!L_27)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			G_B19_5 = G_B17_5;
			goto IL_00c1;
		}
	}
	{
		String_t* L_28 = V_0;
		G_B20_0 = L_28;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		G_B20_5 = G_B18_4;
		G_B20_6 = G_B18_5;
		goto IL_00c6;
	}

IL_00c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B20_0 = L_29;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
		G_B20_5 = G_B19_4;
		G_B20_6 = G_B19_5;
	}

IL_00c6:
	{
		StringU5BU5D_t45* L_30 = ___excludeIds;
		StringU5BU5D_t45* L_31 = ___excludeIds;
		G_B21_0 = L_30;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
		G_B21_5 = G_B20_4;
		G_B21_6 = G_B20_5;
		G_B21_7 = G_B20_6;
		if (!L_31)
		{
			G_B22_0 = L_30;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			G_B22_3 = G_B20_2;
			G_B22_4 = G_B20_3;
			G_B22_5 = G_B20_4;
			G_B22_6 = G_B20_5;
			G_B22_7 = G_B20_6;
			goto IL_00d8;
		}
	}
	{
		StringU5BU5D_t45* L_32 = ___excludeIds;
		NullCheck(L_32);
		G_B23_0 = (((int32_t)(((Array_t *)L_32)->max_length)));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		G_B23_6 = G_B21_5;
		G_B23_7 = G_B21_6;
		G_B23_8 = G_B21_7;
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
		G_B23_6 = G_B22_5;
		G_B23_7 = G_B22_6;
		G_B23_8 = G_B22_7;
	}

IL_00d9:
	{
		bool L_33 = Nullable_1_get_HasValue_m3477((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		bool L_34 = Nullable_1_get_HasValue_m3477((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m3477_MethodInfo_var);
		G_B24_0 = L_33;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
		G_B24_5 = G_B23_4;
		G_B24_6 = G_B23_5;
		G_B24_7 = G_B23_6;
		G_B24_8 = G_B23_7;
		G_B24_9 = G_B23_8;
		if (!L_34)
		{
			G_B25_0 = L_33;
			G_B25_1 = G_B23_0;
			G_B25_2 = G_B23_1;
			G_B25_3 = G_B23_2;
			G_B25_4 = G_B23_3;
			G_B25_5 = G_B23_4;
			G_B25_6 = G_B23_5;
			G_B25_7 = G_B23_6;
			G_B25_8 = G_B23_7;
			G_B25_9 = G_B23_8;
			goto IL_00f8;
		}
	}
	{
		int32_t L_35 = Nullable_1_get_Value_m3478((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m3478_MethodInfo_var);
		G_B26_0 = L_35;
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		G_B26_3 = G_B24_2;
		G_B26_4 = G_B24_3;
		G_B26_5 = G_B24_4;
		G_B26_6 = G_B24_5;
		G_B26_7 = G_B24_6;
		G_B26_8 = G_B24_7;
		G_B26_9 = G_B24_8;
		G_B26_10 = G_B24_9;
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
		G_B26_3 = G_B25_2;
		G_B26_4 = G_B25_3;
		G_B26_5 = G_B25_4;
		G_B26_6 = G_B25_5;
		G_B26_7 = G_B25_6;
		G_B26_8 = G_B25_7;
		G_B26_9 = G_B25_8;
		G_B26_10 = G_B25_9;
	}

IL_00f9:
	{
		String_t* L_36 = ___data;
		String_t* L_37 = ___title;
		IOSFacebook_iosAppRequest_m2154(NULL /*static, unused*/, G_B26_10, G_B26_9, G_B26_8, G_B26_7, G_B26_6, G_B26_5, G_B26_4, G_B26_3, G_B26_2, G_B26_1, G_B26_0, L_36, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_FeedRequest_m2172 (IOSFacebook_t402 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t74 * ___properties, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___toId;
		String_t* L_4 = ___link;
		String_t* L_5 = ___linkName;
		String_t* L_6 = ___linkCaption;
		String_t* L_7 = ___linkDescription;
		String_t* L_8 = ___picture;
		String_t* L_9 = ___mediaSource;
		String_t* L_10 = ___actionName;
		String_t* L_11 = ___actionLink;
		String_t* L_12 = ___reference;
		IOSFacebook_iosFeedRequest_m2153(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t674_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_Pay_m2173 (IOSFacebook_t402 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t589  ___quantityMin, Nullable_1_t589  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(340);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t674 * L_0 = (PlatformNotSupportedException_t674 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t674_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m3489(L_0, (String_t*) &_stringLiteral833, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupCreate_m2174 (IOSFacebook_t402 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		String_t* L_4 = ___description;
		String_t* L_5 = ___privacy;
		IOSFacebook_iosCreateGameGroup_m2155(NULL /*static, unused*/, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupJoin_m2175 (IOSFacebook_t402 * __this, String_t* ___id, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___id;
		IOSFacebook_iosJoinGameGroup_m2156(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GetDeepLink_m2176 (IOSFacebook_t402 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t391 * L_0 = ___callback;
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
		FacebookDelegate_t391 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IOSFacebook_iosGetDeepLink_m2162(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnGetDeepLinkComplete_m2177 (IOSFacebook_t402 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		FacebookDelegate_t391 * L_2 = (__this->___deepLinkDelegate_16);
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		Dictionary_2_t270 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral765, (&V_1));
		FacebookDelegate_t391 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t239 * L_8 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const MethodInfo* Nullable_1_get_HasValue_m3490_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m3491_MethodInfo_var;
extern "C" void IOSFacebook_AppEventsLogEvent_m2178 (IOSFacebook_t402 * __this, String_t* ___logEvent, Nullable_1_t590  ___valueToSum, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_get_HasValue_m3490_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		Nullable_1_get_Value_m3491_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484065);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t400 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = ___parameters;
		NativeDict_t400 * L_1 = IOSFacebook_MarshallDict_m2182(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m3490((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m3490_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = ___logEvent;
		float L_4 = Nullable_1_get_Value_m3491((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m3491_MethodInfo_var);
		NativeDict_t400 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___numEntries_0);
		NativeDict_t400 * L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t45* L_8 = (L_7->___keys_1);
		NativeDict_t400 * L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t45* L_10 = (L_9->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m2159(NULL /*static, unused*/, L_3, (((double)L_4)), L_6, L_8, L_10, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0039:
	{
		String_t* L_11 = ___logEvent;
		NativeDict_t400 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___numEntries_0);
		NativeDict_t400 * L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t45* L_15 = (L_14->___keys_1);
		NativeDict_t400 * L_16 = V_0;
		NullCheck(L_16);
		StringU5BU5D_t45* L_17 = (L_16->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m2159(NULL /*static, unused*/, L_11, (0.0), L_13, L_15, L_17, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_AppEventsLogPurchase_m2179 (IOSFacebook_t402 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t400 * V_0 = {0};
	{
		Dictionary_2_t270 * L_0 = ___parameters;
		NativeDict_t400 * L_1 = IOSFacebook_MarshallDict_m2182(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		___currency = (String_t*) &_stringLiteral641;
	}

IL_001a:
	{
		float L_4 = ___logPurchase;
		String_t* L_5 = ___currency;
		NativeDict_t400 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___numEntries_0);
		NativeDict_t400 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t45* L_9 = (L_8->___keys_1);
		NativeDict_t400 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t45* L_11 = (L_10->___vals_2);
		IOSFacebook_iosFBAppEventsLogPurchase_m2160(NULL /*static, unused*/, (((double)L_4)), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_PublishInstall_m2180 (IOSFacebook_t402 * __this, String_t* ___appId, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m1961(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___appId;
		IOSFacebook_iosFBSettingsPublishInstall_m2157(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C" void IOSFacebook_ActivateApp_m2181 (IOSFacebook_t402 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		IOSFacebook_iosFBSettingsActivateApp_m2158(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* NativeDict_t400_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t676_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3492_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3493_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3494_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3495_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3496_MethodInfo_var;
extern "C" NativeDict_t400 * IOSFacebook_MarshallDict_m2182 (IOSFacebook_t402 * __this, Dictionary_2_t270 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t676_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(341);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m3492_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		Enumerator_get_Current_m3493_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		KeyValuePair_2_get_Key_m3494_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		KeyValuePair_2_get_Value_m3495_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		Enumerator_MoveNext_m3496_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t400 * V_0 = {0};
	KeyValuePair_2_t675  V_1 = {0};
	Enumerator_t676  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t400 * L_0 = (NativeDict_t400 *)il2cpp_codegen_object_new (NativeDict_t400_il2cpp_TypeInfo_var);
		NativeDict__ctor_m2147(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t270 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00ad;
		}
	}
	{
		Dictionary_2_t270 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		NativeDict_t400 * L_4 = V_0;
		Dictionary_2_t270 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_6));
		NativeDict_t400 * L_7 = V_0;
		Dictionary_2_t270 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_9));
		NativeDict_t400 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t270 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t676  L_12 = Dictionary_2_GetEnumerator_m3492(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3492_MethodInfo_var);
		V_2 = L_12;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_004d:
		{
			KeyValuePair_2_t675  L_13 = Enumerator_get_Current_m3493((&V_2), /*hidden argument*/Enumerator_get_Current_m3493_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t400 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t45* L_15 = (L_14->___keys_1);
			NativeDict_t400 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m3494((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3494_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t400 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t45* L_20 = (L_19->___vals_2);
			NativeDict_t400 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			Object_t * L_23 = KeyValuePair_2_get_Value_m3495((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3495_MethodInfo_var);
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_24);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_24;
			NativeDict_t400 * L_25 = V_0;
			NativeDict_t400 * L_26 = L_25;
			NullCheck(L_26);
			int32_t L_27 = (L_26->___numEntries_0);
			NullCheck(L_26);
			L_26->___numEntries_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
		}

IL_0090:
		{
			bool L_28 = Enumerator_MoveNext_m3496((&V_2), /*hidden argument*/Enumerator_MoveNext_m3496_MethodInfo_var);
			if (L_28)
			{
				goto IL_004d;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_t676  L_29 = V_2;
		Enumerator_t676  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t676_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00ad:
	{
		NativeDict_t400 * L_32 = V_0;
		return L_32;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* NativeDict_t400_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t259_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3311_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3312_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3313_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3314_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3315_MethodInfo_var;
extern "C" NativeDict_t400 * IOSFacebook_MarshallDict_m2183 (IOSFacebook_t402 * __this, Dictionary_2_t80 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t400_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(349);
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Enumerator_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2_GetEnumerator_m3311_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483916);
		Enumerator_get_Current_m3312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483917);
		KeyValuePair_2_get_Key_m3313_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483918);
		KeyValuePair_2_get_Value_m3314_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483919);
		Enumerator_MoveNext_m3315_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t400 * V_0 = {0};
	KeyValuePair_2_t260  V_1 = {0};
	Enumerator_t259  V_2 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t400 * L_0 = (NativeDict_t400 *)il2cpp_codegen_object_new (NativeDict_t400_il2cpp_TypeInfo_var);
		NativeDict__ctor_m2147(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t80 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		Dictionary_2_t80 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		NativeDict_t400 * L_4 = V_0;
		Dictionary_2_t80 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_6));
		NativeDict_t400 * L_7 = V_0;
		Dictionary_2_t80 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, L_9));
		NativeDict_t400 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t80 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t259  L_12 = Dictionary_2_GetEnumerator_m3311(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3311_MethodInfo_var);
		V_2 = L_12;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008b;
		}

IL_004d:
		{
			KeyValuePair_2_t260  L_13 = Enumerator_get_Current_m3312((&V_2), /*hidden argument*/Enumerator_get_Current_m3312_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t400 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t45* L_15 = (L_14->___keys_1);
			NativeDict_t400 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m3313((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3313_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t400 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t45* L_20 = (L_19->___vals_2);
			NativeDict_t400 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			String_t* L_23 = KeyValuePair_2_get_Value_m3314((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3314_MethodInfo_var);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_23);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_23;
			NativeDict_t400 * L_24 = V_0;
			NativeDict_t400 * L_25 = L_24;
			NullCheck(L_25);
			int32_t L_26 = (L_25->___numEntries_0);
			NullCheck(L_25);
			L_25->___numEntries_0 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_008b:
		{
			bool L_27 = Enumerator_MoveNext_m3315((&V_2), /*hidden argument*/Enumerator_MoveNext_m3315_MethodInfo_var);
			if (L_27)
			{
				goto IL_004d;
			}
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		Enumerator_t259  L_28 = V_2;
		Enumerator_t259  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t259_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(156)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_00a8:
	{
		NativeDict_t400 * L_31 = V_0;
		return L_31;
	}
}
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnInitComplete_m2184 (IOSFacebook_t402 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t372 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___msg;
		IOSFacebook_OnLogin_m2185(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		InitDelegate_t377 * L_3 = (__this->___externalInitDelegate_15);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(10 /* System.Void Facebook.InitDelegate::Invoke() */, L_3);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnLogin_m2185 (IOSFacebook_t402 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m170(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		FBResult_t239 * L_2 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_2, (String_t*) &_stringLiteral810, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_4 = Json_Deserialize_m2238(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_4, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_5, (String_t*) &_stringLiteral709);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 1;
	}

IL_0040:
	{
		Dictionary_2_t270 * L_7 = V_0;
		IOSFacebook_ParseLoginDict_m2186(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = ___msg;
		FBResult_t239 * L_9 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_9, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_ParseLoginDict_m2186 (IOSFacebook_t402 * __this, Dictionary_2_t270 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t270 * L_0 = ___parameters;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, (String_t*) &_stringLiteral709);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t270 * L_2 = ___parameters;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral709);
		((AbstractFacebook_t372 *)__this)->___userId_6 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0026:
	{
		Dictionary_2_t270 * L_4 = ___parameters;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_4, (String_t*) &_stringLiteral513);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t270 * L_6 = ___parameters;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral513);
		((AbstractFacebook_t372 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		Dictionary_2_t270 * L_8 = ___parameters;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(33 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral739);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t270 * L_10 = ___parameters;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(21 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral739);
		int32_t L_12 = Int32_Parse_m3113(NULL /*static, unused*/, ((String_t*)Castclass(L_11, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t245  L_13 = IOSFacebook_FromTimestamp_m2188(__this, L_12, /*hidden argument*/NULL);
		((AbstractFacebook_t372 *)__this)->___accessTokenExpiresAt_8 = L_13;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnAccessTokenRefresh_m2187 (IOSFacebook_t402 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2238(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t270 *)Castclass(L_1, Dictionary_2_t270_il2cpp_TypeInfo_var));
		Dictionary_2_t270 * L_2 = V_0;
		IOSFacebook_ParseLoginDict_m2186(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___message;
		FBResult_t239 * L_4 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_4, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m1960(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t245  IOSFacebook_FromTimestamp_m2188 (IOSFacebook_t402 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t245  V_0 = {0};
	{
		DateTime__ctor_m3339((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t245  L_1 = DateTime_AddSeconds_m3497((&V_0), (((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C" void IOSFacebook_OnLogout_m2189 (IOSFacebook_t402 * __this, String_t* ___msg, const MethodInfo* method)
{
	{
		((AbstractFacebook_t372 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnRequestComplete_m2190 (IOSFacebook_t402 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___msg;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m3527(L_0, (String_t*) &_stringLiteral508, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		FBDebug_Error_m2017(NULL /*static, unused*/, (String_t*) &_stringLiteral834, /*hidden argument*/NULL);
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral835, L_3, /*hidden argument*/NULL);
		FBDebug_Error_m2017(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		String_t* L_5 = ___msg;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_m184(L_5, 0, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = ___msg;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m3528(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m201(NULL /*static, unused*/, (String_t*) &_stringLiteral836, L_11, (String_t*) &_stringLiteral837, L_12, /*hidden argument*/NULL);
		FBDebug_Info_m2015(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_14 = V_1;
		String_t* L_15 = V_2;
		FBResult_t239 * L_16 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2019(L_16, L_15, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m1962(__this, L_14, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebookLoader
#include "AssemblyU2DCSharp_Facebook_IOSFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t386;
struct IOSFacebook_t402;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebook_t402_m3529(__this /* static, unused */, p0, method) (( IOSFacebook_t402 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m3461_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.IOSFacebookLoader::.ctor()
extern "C" void IOSFacebookLoader__ctor_m2191 (IOSFacebookLoader_t403 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m1974(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.IOSFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebook_t402_m3529_MethodInfo_var;
extern "C" AbstractFacebook_t372 * IOSFacebookLoader_get_fb_m2192 (IOSFacebookLoader_t403 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisIOSFacebook_t402_m3529_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484079);
		s_Il2CppMethodIntialized = true;
	}
	{
		IOSFacebook_t402 * L_0 = FBComponentFactory_GetComponent_TisIOSFacebook_t402_m3529(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebook_t402_m3529_MethodInfo_var);
		return L_0;
	}
}
// Facebook.AsyncRequestString/<Start>c__IteratorE
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString_U3CStartU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.AsyncRequestString/<Start>c__IteratorE
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString_U3CStartU3Ec__MethodDeclarations.h"

// Facebook.AsyncRequestString
#include "AssemblyU2DCSharp_Facebook_AsyncRequestString.h"
// System.Uri
#include "System_System_UriMethodDeclarations.h"


// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::.ctor()
extern "C" void U3CStartU3Ec__IteratorE__ctor_m2193 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2194 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m2195 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean Facebook.AsyncRequestString/<Start>c__IteratorE::MoveNext()
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t655_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t259_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t223_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t70_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t239_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3311_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3312_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3313_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3314_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3315_MethodInfo_var;
extern "C" bool U3CStartU3Ec__IteratorE_MoveNext_m2196 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		Uri_t655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(265);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Enumerator_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(237);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		WWW_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(196);
		WWWForm_t70_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(104);
		FBResult_t239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(107);
		Dictionary_2_GetEnumerator_m3311_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483916);
		Enumerator_get_Current_m3312_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483917);
		KeyValuePair_2_get_Key_m3313_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483918);
		KeyValuePair_2_get_Value_m3314_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483919);
		Enumerator_MoveNext_m3315_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	U3CStartU3Ec__IteratorE_t405 * G_B5_0 = {0};
	U3CStartU3Ec__IteratorE_t405 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	U3CStartU3Ec__IteratorE_t405 * G_B6_1 = {0};
	{
		int32_t L_0 = (__this->___U24PC_6);
		V_0 = L_0;
		__this->___U24PC_6 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0238;
		}
	}
	{
		goto IL_0280;
	}

IL_0021:
	{
		AsyncRequestString_t404 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		HttpMethod_t406 * L_3 = (L_2->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_4 = HttpMethod_get_GET_m2212(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t406 *)L_3) == ((Object_t*)(HttpMethod_t406 *)L_4))))
		{
			goto IL_0128;
		}
	}
	{
		AsyncRequestString_t404 * L_5 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_5);
		String_t* L_6 = (L_5->___url_2);
		NullCheck(L_6);
		bool L_7 = String_Contains_m3145(L_6, (String_t*) &_stringLiteral498, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (!L_7)
		{
			G_B5_0 = __this;
			goto IL_005b;
		}
	}
	{
		G_B6_0 = (String_t*) &_stringLiteral497;
		G_B6_1 = G_B4_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B6_0 = (String_t*) &_stringLiteral498;
		G_B6_1 = G_B5_0;
	}

IL_0060:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CurlParamsU3E__0_0 = G_B6_0;
		AsyncRequestString_t404 * L_8 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_8);
		Dictionary_2_t80 * L_9 = (L_8->___formData_4);
		if (!L_9)
		{
			goto IL_0102;
		}
	}
	{
		AsyncRequestString_t404 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		Dictionary_2_t80 * L_11 = (L_10->___formData_4);
		NullCheck(L_11);
		Enumerator_t259  L_12 = Dictionary_2_GetEnumerator_m3311(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3311_MethodInfo_var);
		__this->___U3CU24s_77U3E__1_1 = L_12;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dc;
		}

IL_0090:
		{
			Enumerator_t259 * L_13 = &(__this->___U3CU24s_77U3E__1_1);
			KeyValuePair_2_t260  L_14 = Enumerator_get_Current_m3312(L_13, /*hidden argument*/Enumerator_get_Current_m3312_MethodInfo_var);
			__this->___U3CpairU3E__2_2 = L_14;
			String_t* L_15 = (__this->___U3CurlParamsU3E__0_0);
			KeyValuePair_2_t260 * L_16 = &(__this->___U3CpairU3E__2_2);
			String_t* L_17 = KeyValuePair_2_get_Key_m3313(L_16, /*hidden argument*/KeyValuePair_2_get_Key_m3313_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t655_il2cpp_TypeInfo_var);
			String_t* L_18 = Uri_EscapeDataString_m3347(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			KeyValuePair_2_t260 * L_19 = &(__this->___U3CpairU3E__2_2);
			String_t* L_20 = KeyValuePair_2_get_Value_m3314(L_19, /*hidden argument*/KeyValuePair_2_get_Value_m3314_MethodInfo_var);
			String_t* L_21 = Uri_EscapeDataString_m3347(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_22 = String_Format_m3464(NULL /*static, unused*/, (String_t*) &_stringLiteral838, L_18, L_21, /*hidden argument*/NULL);
			String_t* L_23 = String_Concat_m174(NULL /*static, unused*/, L_15, L_22, /*hidden argument*/NULL);
			__this->___U3CurlParamsU3E__0_0 = L_23;
		}

IL_00dc:
		{
			Enumerator_t259 * L_24 = &(__this->___U3CU24s_77U3E__1_1);
			bool L_25 = Enumerator_MoveNext_m3315(L_24, /*hidden argument*/Enumerator_MoveNext_m3315_MethodInfo_var);
			if (L_25)
			{
				goto IL_0090;
			}
		}

IL_00ec:
		{
			IL2CPP_LEAVE(0x102, FINALLY_00f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_00f1;
	}

FINALLY_00f1:
	{ // begin finally (depth: 1)
		Enumerator_t259  L_26 = (__this->___U3CU24s_77U3E__1_1);
		Enumerator_t259  L_27 = L_26;
		Object_t * L_28 = Box(Enumerator_t259_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_28);
		IL2CPP_END_FINALLY(241)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(241)
	{
		IL2CPP_JUMP_TBL(0x102, IL_0102)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0102:
	{
		AsyncRequestString_t404 * L_29 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_29);
		String_t* L_30 = (L_29->___url_2);
		String_t* L_31 = (__this->___U3CurlParamsU3E__0_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m174(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		WWW_t223 * L_33 = (WWW_t223 *)il2cpp_codegen_object_new (WWW_t223_il2cpp_TypeInfo_var);
		WWW__ctor_m3258(L_33, L_32, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_33;
		goto IL_0220;
	}

IL_0128:
	{
		AsyncRequestString_t404 * L_34 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_34);
		WWWForm_t70 * L_35 = (L_34->___query_5);
		if (L_35)
		{
			goto IL_0148;
		}
	}
	{
		AsyncRequestString_t404 * L_36 = (__this->___U3CU3Ef__this_8);
		WWWForm_t70 * L_37 = (WWWForm_t70 *)il2cpp_codegen_object_new (WWWForm_t70_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3106(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___query_5 = L_37;
	}

IL_0148:
	{
		AsyncRequestString_t404 * L_38 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_38);
		HttpMethod_t406 * L_39 = (L_38->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_40 = HttpMethod_get_DELETE_m2214(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t406 *)L_39) == ((Object_t*)(HttpMethod_t406 *)L_40))))
		{
			goto IL_0177;
		}
	}
	{
		AsyncRequestString_t404 * L_41 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_41);
		WWWForm_t70 * L_42 = (L_41->___query_5);
		NullCheck(L_42);
		WWWForm_AddField_m3108(L_42, (String_t*) &_stringLiteral802, (String_t*) &_stringLiteral839, /*hidden argument*/NULL);
	}

IL_0177:
	{
		AsyncRequestString_t404 * L_43 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_43);
		Dictionary_2_t80 * L_44 = (L_43->___formData_4);
		if (!L_44)
		{
			goto IL_01ff;
		}
	}
	{
		AsyncRequestString_t404 * L_45 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_45);
		Dictionary_2_t80 * L_46 = (L_45->___formData_4);
		NullCheck(L_46);
		Enumerator_t259  L_47 = Dictionary_2_GetEnumerator_m3311(L_46, /*hidden argument*/Dictionary_2_GetEnumerator_m3311_MethodInfo_var);
		__this->___U3CU24s_78U3E__4_4 = L_47;
	}

IL_019d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01d9;
		}

IL_01a2:
		{
			Enumerator_t259 * L_48 = &(__this->___U3CU24s_78U3E__4_4);
			KeyValuePair_2_t260  L_49 = Enumerator_get_Current_m3312(L_48, /*hidden argument*/Enumerator_get_Current_m3312_MethodInfo_var);
			__this->___U3CpairU3E__5_5 = L_49;
			AsyncRequestString_t404 * L_50 = (__this->___U3CU3Ef__this_8);
			NullCheck(L_50);
			WWWForm_t70 * L_51 = (L_50->___query_5);
			KeyValuePair_2_t260 * L_52 = &(__this->___U3CpairU3E__5_5);
			String_t* L_53 = KeyValuePair_2_get_Key_m3313(L_52, /*hidden argument*/KeyValuePair_2_get_Key_m3313_MethodInfo_var);
			KeyValuePair_2_t260 * L_54 = &(__this->___U3CpairU3E__5_5);
			String_t* L_55 = KeyValuePair_2_get_Value_m3314(L_54, /*hidden argument*/KeyValuePair_2_get_Value_m3314_MethodInfo_var);
			NullCheck(L_51);
			WWWForm_AddField_m3108(L_51, L_53, L_55, /*hidden argument*/NULL);
		}

IL_01d9:
		{
			Enumerator_t259 * L_56 = &(__this->___U3CU24s_78U3E__4_4);
			bool L_57 = Enumerator_MoveNext_m3315(L_56, /*hidden argument*/Enumerator_MoveNext_m3315_MethodInfo_var);
			if (L_57)
			{
				goto IL_01a2;
			}
		}

IL_01e9:
		{
			IL2CPP_LEAVE(0x1FF, FINALLY_01ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_01ee;
	}

FINALLY_01ee:
	{ // begin finally (depth: 1)
		Enumerator_t259  L_58 = (__this->___U3CU24s_78U3E__4_4);
		Enumerator_t259  L_59 = L_58;
		Object_t * L_60 = Box(Enumerator_t259_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_60);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_60);
		IL2CPP_END_FINALLY(494)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(494)
	{
		IL2CPP_JUMP_TBL(0x1FF, IL_01ff)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_01ff:
	{
		AsyncRequestString_t404 * L_61 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_61);
		String_t* L_62 = (L_61->___url_2);
		AsyncRequestString_t404 * L_63 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_63);
		WWWForm_t70 * L_64 = (L_63->___query_5);
		WWW_t223 * L_65 = (WWW_t223 *)il2cpp_codegen_object_new (WWW_t223_il2cpp_TypeInfo_var);
		WWW__ctor_m3530(L_65, L_62, L_64, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_65;
	}

IL_0220:
	{
		WWW_t223 * L_66 = (__this->___U3CwwwU3E__3_3);
		__this->___U24current_7 = L_66;
		__this->___U24PC_6 = 1;
		goto IL_0282;
	}

IL_0238:
	{
		AsyncRequestString_t404 * L_67 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_67);
		FacebookDelegate_t391 * L_68 = (L_67->___callback_6);
		if (!L_68)
		{
			goto IL_0263;
		}
	}
	{
		AsyncRequestString_t404 * L_69 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_69);
		FacebookDelegate_t391 * L_70 = (L_69->___callback_6);
		WWW_t223 * L_71 = (__this->___U3CwwwU3E__3_3);
		FBResult_t239 * L_72 = (FBResult_t239 *)il2cpp_codegen_object_new (FBResult_t239_il2cpp_TypeInfo_var);
		FBResult__ctor_m2018(L_72, L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		VirtActionInvoker1< FBResult_t239 * >::Invoke(10 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_70, L_72);
	}

IL_0263:
	{
		WWW_t223 * L_73 = (__this->___U3CwwwU3E__3_3);
		NullCheck(L_73);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_73);
		AsyncRequestString_t404 * L_74 = (__this->___U3CU3Ef__this_8);
		Object_Destroy_m3305(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		__this->___U24PC_6 = (-1);
	}

IL_0280:
	{
		return 0;
	}

IL_0282:
	{
		return 1;
	}
	// Dead block : IL_0284: ldloc.1
}
// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::Dispose()
extern "C" void U3CStartU3Ec__IteratorE_Dispose_m2197 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__IteratorE_Reset_m2198 (U3CStartU3Ec__IteratorE_t405 * __this, const MethodInfo* method)
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

struct FBComponentFactory_t386;
struct AsyncRequestString_t404;
struct FBComponentFactory_t386;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
// !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
extern "C" Object_t * FBComponentFactory_AddComponent_TisObject_t_m3532_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define FBComponentFactory_AddComponent_TisObject_t_m3532(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m3532_gshared)(__this /* static, unused */, method)
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
// !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
#define FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531(__this /* static, unused */, method) (( AsyncRequestString_t404 * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m3532_gshared)(__this /* static, unused */, method)


// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m2199 (AsyncRequestString_t404 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Post_m2200 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_1 = HttpMethod_get_POST_m2213(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_2 = ___formData;
		FacebookDelegate_t391 * L_3 = ___callback;
		AsyncRequestString_Request_m2203(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Get_m2201 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_1 = HttpMethod_get_GET_m2212(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_2 = ___formData;
		FacebookDelegate_t391 * L_3 = ___callback;
		AsyncRequestString_Request_m2203(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m2202 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t406 * ___method, WWWForm_t70 * ___query, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484080);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t404 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t404 * L_2 = AsyncRequestString_SetUrl_m2205(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t406 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t404 * L_4 = AsyncRequestString_SetMethod_m2206(L_2, L_3, /*hidden argument*/NULL);
		WWWForm_t70 * L_5 = ___query;
		NullCheck(L_4);
		AsyncRequestString_t404 * L_6 = AsyncRequestString_SetQuery_m2208(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m2209(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m2203 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t406 * ___method, Dictionary_2_t80 * ___formData, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484080);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t404 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t404_m3531_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t404 * L_2 = AsyncRequestString_SetUrl_m2205(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t406 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t404 * L_4 = AsyncRequestString_SetMethod_m2206(L_2, L_3, /*hidden argument*/NULL);
		Dictionary_2_t80 * L_5 = ___formData;
		NullCheck(L_4);
		AsyncRequestString_t404 * L_6 = AsyncRequestString_SetFormData_m2207(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t391 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m2209(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern TypeInfo* U3CStartU3Ec__IteratorE_t405_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncRequestString_Start_m2204 (AsyncRequestString_t404 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__IteratorE_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(352);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__IteratorE_t405 * V_0 = {0};
	{
		U3CStartU3Ec__IteratorE_t405 * L_0 = (U3CStartU3Ec__IteratorE_t405 *)il2cpp_codegen_object_new (U3CStartU3Ec__IteratorE_t405_il2cpp_TypeInfo_var);
		U3CStartU3Ec__IteratorE__ctor_m2193(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__IteratorE_t405 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_8 = __this;
		U3CStartU3Ec__IteratorE_t405 * L_2 = V_0;
		return L_2;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetUrl_m2205 (AsyncRequestString_t404 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___url_2 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetMethod_m2206 (AsyncRequestString_t404 * __this, HttpMethod_t406 * ___method, const MethodInfo* method)
{
	{
		HttpMethod_t406 * L_0 = ___method;
		__this->___method_3 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetFormData_m2207 (AsyncRequestString_t404 * __this, Dictionary_2_t80 * ___formData, const MethodInfo* method)
{
	{
		Dictionary_2_t80 * L_0 = ___formData;
		__this->___formData_4 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetQuery_m2208 (AsyncRequestString_t404 * __this, WWWForm_t70 * ___query, const MethodInfo* method)
{
	{
		WWWForm_t70 * L_0 = ___query;
		__this->___query_5 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t404 * AsyncRequestString_SetCallback_m2209 (AsyncRequestString_t404 * __this, FacebookDelegate_t391 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t391 * L_0 = ___callback;
		__this->___callback_6 = L_0;
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.HttpMethod::.ctor(System.String)
extern "C" void HttpMethod__ctor_m2210 (HttpMethod_t406 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___methodValue_3 = L_0;
		return;
	}
}
// System.Void Facebook.HttpMethod::.cctor()
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" void HttpMethod__cctor_m2211 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		HttpMethod_t406 * L_0 = (HttpMethod_t406 *)il2cpp_codegen_object_new (HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2210(L_0, (String_t*) &_stringLiteral840, /*hidden argument*/NULL);
		((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___getMethod_0 = L_0;
		HttpMethod_t406 * L_1 = (HttpMethod_t406 *)il2cpp_codegen_object_new (HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2210(L_1, (String_t*) &_stringLiteral830, /*hidden argument*/NULL);
		((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___postMethod_1 = L_1;
		HttpMethod_t406 * L_2 = (HttpMethod_t406 *)il2cpp_codegen_object_new (HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2210(L_2, (String_t*) &_stringLiteral841, /*hidden argument*/NULL);
		((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2 = L_2;
		return;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_GET()
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t406 * HttpMethod_get_GET_m2212 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_0 = ((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___getMethod_0;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_POST()
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t406 * HttpMethod_get_POST_m2213 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_0 = ((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___postMethod_1;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_DELETE()
extern TypeInfo* HttpMethod_t406_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t406 * HttpMethod_get_DELETE_m2214 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t406_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(100);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t406_il2cpp_TypeInfo_var);
		HttpMethod_t406 * L_0 = ((HttpMethod_t406_StaticFields*)HttpMethod_t406_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2;
		return L_0;
	}
}
// System.String Facebook.HttpMethod::ToString()
extern "C" String_t* HttpMethod_ToString_m2215 (HttpMethod_t406 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___methodValue_3);
		return L_0;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKEN.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Parser/TOKEN
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKENMethodDeclarations.h"



// Facebook.MiniJSON.Json/Parser
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Parser
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_ParserMethodDeclarations.h"

// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// Facebook.MiniJSON.Json
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json.h"
// System.Globalization.NumberFormatInfo
#include "mscorlib_System_Globalization_NumberFormatInfo.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Int64
#include "mscorlib_System_Int64MethodDeclarations.h"
// System.Double
#include "mscorlib_System_DoubleMethodDeclarations.h"


// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern TypeInfo* StringReader_t217_il2cpp_TypeInfo_var;
extern "C" void Parser__ctor_m2216 (Parser_t408 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString;
		StringReader_t217 * L_1 = (StringReader_t217 *)il2cpp_codegen_object_new (StringReader_t217_il2cpp_TypeInfo_var);
		StringReader__ctor_m3244(L_1, L_0, /*hidden argument*/NULL);
		__this->___json_2 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern TypeInfo* Parser_t408_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_Parse_m2217 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	Parser_t408 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString;
		Parser_t408 * L_1 = (Parser_t408 *)il2cpp_codegen_object_new (Parser_t408_il2cpp_TypeInfo_var);
		Parser__ctor_m2216(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			Parser_t408 * L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = Parser_ParseValue_m2221(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			IL2CPP_LEAVE(0x25, FINALLY_0018);
		}

IL_0013:
		{
			; // IL_0013: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			Parser_t408 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			Parser_t408 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m2218 (Parser_t408 * __this, const MethodInfo* method)
{
	{
		StringReader_t217 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void System.IO.TextReader::Dispose() */, L_0);
		__this->___json_2 = (StringReader_t217 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern TypeInfo* Dictionary_2_t270_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3118_MethodInfo_var;
extern "C" Dictionary_2_t270 * Parser_ParseObject_m2219 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t270_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(98);
		Dictionary_2__ctor_m3118_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483684);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t270 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	{
		Dictionary_2_t270 * L_0 = (Dictionary_2_t270 *)il2cpp_codegen_object_new (Dictionary_2_t270_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3118(L_0, /*hidden argument*/Dictionary_2__ctor_m3118_MethodInfo_var);
		V_0 = L_0;
		StringReader_t217 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m2229(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (L_3 == 0)
		{
			goto IL_0037;
		}
		if (L_3 == 1)
		{
			goto IL_002b;
		}
		if (L_3 == 2)
		{
			goto IL_003e;
		}
	}

IL_002b:
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)6)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0040;
	}

IL_0037:
	{
		return (Dictionary_2_t270 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t270 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m2223(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t270 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m2229(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t270 *)NULL;
	}

IL_005d:
	{
		StringReader_t217 * L_9 = (__this->___json_2);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		Dictionary_2_t270 * L_10 = V_0;
		String_t* L_11 = V_1;
		Object_t * L_12 = Parser_ParseValue_m2221(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, L_11, L_12);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern TypeInfo* List_1_t583_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3116_MethodInfo_var;
extern "C" List_1_t583 * Parser_ParseArray_m2220 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(99);
		List_1__ctor_m3116_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483682);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t583 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	Object_t * V_3 = {0};
	int32_t V_4 = {0};
	{
		List_1_t583 * L_0 = (List_1_t583 *)il2cpp_codegen_object_new (List_1_t583_il2cpp_TypeInfo_var);
		List_1__ctor_m3116(L_0, /*hidden argument*/List_1__ctor_m3116_MethodInfo_var);
		V_0 = L_0;
		StringReader_t217 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_1 = 1;
		goto IL_0066;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m2229(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_4 = L_3;
		int32_t L_4 = V_4;
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 0)
		{
			goto IL_004b;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 1)
		{
			goto IL_0038;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)4)) == 2)
		{
			goto IL_0046;
		}
	}

IL_0038:
	{
		int32_t L_5 = V_4;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0052;
	}

IL_0044:
	{
		return (List_1_t583 *)NULL;
	}

IL_0046:
	{
		goto IL_0066;
	}

IL_004b:
	{
		V_1 = 0;
		goto IL_0066;
	}

IL_0052:
	{
		int32_t L_6 = V_2;
		Object_t * L_7 = Parser_ParseByToken_m2222(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t583 * L_8 = V_0;
		Object_t * L_9 = V_3;
		NullCheck(L_8);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_8, L_9);
		goto IL_0066;
	}

IL_0066:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t583 * L_11 = V_0;
		return L_11;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m2221 (Parser_t408 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = Parser_get_NextToken_m2229(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Object_t * L_2 = Parser_ParseByToken_m2222(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseByToken_m2222 (Parser_t408 * __this, int32_t ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___token;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0049;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0067;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_0057;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0067;
	}

IL_003b:
	{
		String_t* L_2 = Parser_ParseString_m2223(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0042:
	{
		Object_t * L_3 = Parser_ParseNumber_m2224(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0049:
	{
		Dictionary_2_t270 * L_4 = Parser_ParseObject_m2219(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0050:
	{
		List_1_t583 * L_5 = Parser_ParseArray_m2220(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0057:
	{
		bool L_6 = 1;
		Object_t * L_7 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_005e:
	{
		bool L_8 = 0;
		Object_t * L_9 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_8);
		return L_9;
	}

IL_0065:
	{
		return NULL;
	}

IL_0067:
	{
		return NULL;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern TypeInfo* StringBuilder_t219_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_ParseString_m2223 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t219 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t219 * V_3 = {0};
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	uint16_t V_6 = 0x0;
	{
		StringBuilder_t219 * L_0 = (StringBuilder_t219 *)il2cpp_codegen_object_new (StringBuilder_t219_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3245(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t217 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_2 = 1;
		goto IL_017e;
	}

IL_0019:
	{
		StringReader_t217 * L_2 = (__this->___json_2);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		V_2 = 0;
		goto IL_0184;
	}

IL_0031:
	{
		uint16_t L_4 = Parser_get_NextChar_m2227(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		uint16_t L_5 = V_1;
		V_5 = L_5;
		uint16_t L_6 = V_5;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0052;
		}
	}
	{
		uint16_t L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0171;
	}

IL_0052:
	{
		V_2 = 0;
		goto IL_017e;
	}

IL_0059:
	{
		StringReader_t217 * L_8 = (__this->___json_2);
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0071;
		}
	}
	{
		V_2 = 0;
		goto IL_017e;
	}

IL_0071:
	{
		uint16_t L_10 = Parser_get_NextChar_m2227(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		uint16_t L_11 = V_1;
		V_6 = L_11;
		uint16_t L_12 = V_6;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 0)
		{
			goto IL_00ff;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 1)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 2)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 3)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 4)
		{
			goto IL_010d;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 5)
		{
			goto IL_00a5;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 6)
		{
			goto IL_011b;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)110))) == 7)
		{
			goto IL_0129;
		}
	}

IL_00a5:
	{
		uint16_t L_13 = V_6;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)34))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_14 = V_6;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)47))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_15 = V_6;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)92))))
		{
			goto IL_00d7;
		}
	}
	{
		uint16_t L_16 = V_6;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)98))))
		{
			goto IL_00e4;
		}
	}
	{
		uint16_t L_17 = V_6;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)102))))
		{
			goto IL_00f1;
		}
	}
	{
		goto IL_016c;
	}

IL_00d7:
	{
		StringBuilder_t219 * L_18 = V_0;
		uint16_t L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m3246(L_18, L_19, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00e4:
	{
		StringBuilder_t219 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m3246(L_20, 8, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00f1:
	{
		StringBuilder_t219 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3246(L_21, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00ff:
	{
		StringBuilder_t219 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m3246(L_22, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_010d:
	{
		StringBuilder_t219 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m3246(L_23, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_011b:
	{
		StringBuilder_t219 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m3246(L_24, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_0129:
	{
		StringBuilder_t219 * L_25 = (StringBuilder_t219 *)il2cpp_codegen_object_new (StringBuilder_t219_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3245(L_25, /*hidden argument*/NULL);
		V_3 = L_25;
		V_4 = 0;
		goto IL_014a;
	}

IL_0137:
	{
		StringBuilder_t219 * L_26 = V_3;
		uint16_t L_27 = Parser_get_NextChar_m2227(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m3246(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_014a:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0137;
		}
	}
	{
		StringBuilder_t219 * L_30 = V_0;
		StringBuilder_t219 * L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m3247(NULL /*static, unused*/, L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m3246(L_30, (((uint16_t)L_33)), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_016c:
	{
		goto IL_017e;
	}

IL_0171:
	{
		StringBuilder_t219 * L_34 = V_0;
		uint16_t L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m3246(L_34, L_35, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_017e:
	{
		bool L_36 = V_2;
		if (L_36)
		{
			goto IL_0019;
		}
	}

IL_0184:
	{
		StringBuilder_t219 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_37);
		return L_38;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t632_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t60_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseNumber_m2224 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		Int64_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		Double_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Parser_get_NextWord_m2228(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m3248(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		NumberFormatInfo_t410 * L_4 = ((Json_t411_StaticFields*)Json_t411_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		int64_t L_5 = Int64_Parse_m3533(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(Int64_t632_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0026:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t411_il2cpp_TypeInfo_var);
		NumberFormatInfo_t410 * L_9 = ((Json_t411_StaticFields*)Json_t411_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		double L_10 = Double_Parse_m3534(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		double L_11 = L_10;
		Object_t * L_12 = Box(Double_t60_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m2225 (Parser_t408 * __this, const MethodInfo* method)
{
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t217 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		StringReader_t217 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_003d;
	}

IL_0027:
	{
		uint16_t L_3 = Parser_get_PeekChar_m2226(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral399);
		int32_t L_4 = String_IndexOf_m3248((String_t*) &_stringLiteral399, L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0005;
		}
	}

IL_003d:
	{
		return;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_PeekChar_m2226 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t217 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m3250(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_NextChar_m2227 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t217 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m3250(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern TypeInfo* StringBuilder_t219_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_get_NextWord_m2228 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t219 * V_0 = {0};
	{
		StringBuilder_t219 * L_0 = (StringBuilder_t219 *)il2cpp_codegen_object_new (StringBuilder_t219_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3245(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t219 * L_1 = V_0;
		uint16_t L_2 = Parser_get_NextChar_m2227(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3246(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t217 * L_3 = (__this->___json_2);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0044;
	}

IL_002e:
	{
		uint16_t L_5 = Parser_get_PeekChar_m2226(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral397);
		int32_t L_6 = String_IndexOf_m3248((String_t*) &_stringLiteral397, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_000b;
		}
	}

IL_0044:
	{
		StringBuilder_t219 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_7);
		return L_8;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern TypeInfo* Parser_t408_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t181_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3251_MethodInfo_var;
extern "C" int32_t Parser_get_NextToken_m2229 (Parser_t408 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t408_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		Dictionary_2_t181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(167);
		Dictionary_2__ctor_m3251_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483828);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	Dictionary_2_t181 * V_4 = {0};
	int32_t V_5 = 0;
	{
		Parser_EatWhitespace_m2225(__this, /*hidden argument*/NULL);
		StringReader_t217 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0019:
	{
		uint16_t L_2 = Parser_get_PeekChar_m2226(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		uint16_t L_3 = V_0;
		V_2 = L_3;
		uint16_t L_4 = V_2;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00de;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00f0;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00ee;
		}
	}

IL_008f:
	{
		uint16_t L_5 = V_2;
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00ce;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_5-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00d0;
		}
	}

IL_00a4:
	{
		uint16_t L_6 = V_2;
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00be;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00f2;
		}
		if (((int32_t)((int32_t)L_6-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00c0;
		}
	}
	{
		goto IL_00f2;
	}

IL_00be:
	{
		return (int32_t)(1);
	}

IL_00c0:
	{
		StringReader_t217 * L_7 = (__this->___json_2);
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_7);
		return (int32_t)(2);
	}

IL_00ce:
	{
		return (int32_t)(3);
	}

IL_00d0:
	{
		StringReader_t217 * L_8 = (__this->___json_2);
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00de:
	{
		StringReader_t217 * L_9 = (__this->___json_2);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		return (int32_t)(6);
	}

IL_00ec:
	{
		return (int32_t)(7);
	}

IL_00ee:
	{
		return (int32_t)(5);
	}

IL_00f0:
	{
		return (int32_t)(8);
	}

IL_00f2:
	{
		String_t* L_10 = Parser_get_NextWord_m2228(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = V_1;
		V_3 = L_11;
		String_t* L_12 = V_3;
		if (!L_12)
		{
			goto IL_0174;
		}
	}
	{
		Dictionary_2_t181 * L_13 = ((Parser_t408_StaticFields*)Parser_t408_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3;
		if (L_13)
		{
			goto IL_0141;
		}
	}
	{
		Dictionary_2_t181 * L_14 = (Dictionary_2_t181 *)il2cpp_codegen_object_new (Dictionary_2_t181_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3251(L_14, 3, /*hidden argument*/Dictionary_2__ctor_m3251_MethodInfo_var);
		V_4 = L_14;
		Dictionary_2_t181 * L_15 = V_4;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral2, 0);
		Dictionary_2_t181 * L_16 = V_4;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral1, 1);
		Dictionary_2_t181 * L_17 = V_4;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_17, (String_t*) &_stringLiteral398, 2);
		Dictionary_2_t181 * L_18 = V_4;
		((Parser_t408_StaticFields*)Parser_t408_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3 = L_18;
	}

IL_0141:
	{
		Dictionary_2_t181 * L_19 = ((Parser_t408_StaticFields*)Parser_t408_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3;
		String_t* L_20 = V_3;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_19, L_20, (&V_5));
		if (!L_21)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_22 = V_5;
		if (L_22 == 0)
		{
			goto IL_016b;
		}
		if (L_22 == 1)
		{
			goto IL_016e;
		}
		if (L_22 == 2)
		{
			goto IL_0171;
		}
	}
	{
		goto IL_0174;
	}

IL_016b:
	{
		return (int32_t)(((int32_t)10));
	}

IL_016e:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0171:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0174:
	{
		return (int32_t)(0);
	}
}
// Facebook.MiniJSON.Json/Serializer
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Serializer.h"
#ifndef _MSC_VER
#else
#endif
// Facebook.MiniJSON.Json/Serializer
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_SerializerMethodDeclarations.h"

// System.SByte
#include "mscorlib_System_SByte.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Void Facebook.MiniJSON.Json/Serializer::.ctor()
extern TypeInfo* StringBuilder_t219_il2cpp_TypeInfo_var;
extern "C" void Serializer__ctor_m2230 (Serializer_t409 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		StringBuilder_t219 * L_0 = (StringBuilder_t219 *)il2cpp_codegen_object_new (StringBuilder_t219_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3245(L_0, /*hidden argument*/NULL);
		__this->___builder_0 = L_0;
		return;
	}
}
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
extern TypeInfo* Serializer_t409_il2cpp_TypeInfo_var;
extern "C" String_t* Serializer_Serialize_m2231 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Serializer_t409_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	Serializer_t409 * V_0 = {0};
	{
		Serializer_t409 * L_0 = (Serializer_t409 *)il2cpp_codegen_object_new (Serializer_t409_il2cpp_TypeInfo_var);
		Serializer__ctor_m2230(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t409 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m2232(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t409 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t219 * L_4 = (L_3->___builder_0);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t585_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t584_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t30_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeValue_m2232 (Serializer_t409 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		IList_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		IDictionary_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		Char_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t219 * L_1 = (__this->___builder_0);
		NullCheck(L_1);
		StringBuilder_Append_m3252(L_1, (String_t*) &_stringLiteral398, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_001c:
	{
		Object_t * L_2 = ___value;
		String_t* L_3 = ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_m2235(__this, L_4, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0035:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, Boolean_t29_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t219 * L_6 = (__this->___builder_0);
		Object_t * L_7 = ___value;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = String_ToLower_m3253(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m3252(L_6, L_9, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_005c:
	{
		Object_t * L_10 = ___value;
		Object_t * L_11 = ((Object_t *)IsInst(L_10, IList_t585_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		Object_t * L_12 = V_0;
		Serializer_SerializeArray_m2234(__this, L_12, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0075:
	{
		Object_t * L_13 = ___value;
		Object_t * L_14 = ((Object_t *)IsInst(L_13, IDictionary_t584_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		Object_t * L_15 = V_1;
		Serializer_SerializeObject_m2233(__this, L_15, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_008e:
	{
		Object_t * L_16 = ___value;
		if (!((Object_t *)IsInst(L_16, Char_t30_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t * L_17 = ___value;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		Serializer_SerializeString_m2235(__this, L_18, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00aa:
	{
		Object_t * L_19 = ___value;
		Serializer_SerializeOther_m2236(__this, L_19, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern TypeInfo* IDictionary_t584_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeObject_m2233 (Serializer_t409 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		IEnumerable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		StringBuilder_t219 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3246(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t584_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t58_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0021:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t219 * L_7 = (__this->___builder_0);
			NullCheck(L_7);
			StringBuilder_Append_m3246(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m2235(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t219 * L_10 = (__this->___builder_0);
			NullCheck(L_10);
			StringBuilder_Append_m3246(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Object_t * L_11 = ___obj;
			Object_t * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t584_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m2232(__this, L_13, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0065:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0021;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			V_3 = ((Object_t *)IsInst(L_16, IDisposable_t28_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_3;
			if (L_17)
			{
				goto IL_0080;
			}
		}

IL_007f:
		{
			IL2CPP_END_FINALLY(117)
		}

IL_0080:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0087:
	{
		StringBuilder_t219 * L_19 = (__this->___builder_0);
		NullCheck(L_19);
		StringBuilder_Append_m3246(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern TypeInfo* IEnumerable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t21_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeArray_m2234 (Serializer_t409 * __this, Object_t * ___anArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(54);
		IEnumerator_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t219 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3246(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t58_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_001c:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t219 * L_6 = (__this->___builder_0);
			NullCheck(L_6);
			StringBuilder_Append_m3246(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			Object_t * L_7 = V_1;
			Serializer_SerializeValue_m2232(__this, L_7, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0040:
		{
			Object_t * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t21_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x62, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_2;
			V_3 = ((Object_t *)IsInst(L_10, IDisposable_t28_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_3;
			if (L_11)
			{
				goto IL_005b;
			}
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005b:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_0062:
	{
		StringBuilder_t219 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m3246(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
extern TypeInfo* Convert_t37_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeString_m2235 (Serializer_t409 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t37_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t607* V_0 = {0};
	uint16_t V_1 = 0x0;
	CharU5BU5D_t607* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		StringBuilder_t219 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3246(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str;
		NullCheck(L_1);
		CharU5BU5D_t607* L_2 = String_ToCharArray_m3254(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t607* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0153;
	}

IL_001e:
	{
		CharU5BU5D_t607* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		uint16_t L_7 = V_1;
		V_5 = L_7;
		uint16_t L_8 = V_5;
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 0)
		{
			goto IL_0089;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 1)
		{
			goto IL_00e1;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 2)
		{
			goto IL_00b5;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 3)
		{
			goto IL_0046;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 4)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_8-(int32_t)8)) == 5)
		{
			goto IL_00cb;
		}
	}

IL_0046:
	{
		uint16_t L_9 = V_5;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_005d;
		}
	}
	{
		uint16_t L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_00f7;
	}

IL_005d:
	{
		StringBuilder_t219 * L_11 = (__this->___builder_0);
		NullCheck(L_11);
		StringBuilder_Append_m3252(L_11, (String_t*) &_stringLiteral5, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0073:
	{
		StringBuilder_t219 * L_12 = (__this->___builder_0);
		NullCheck(L_12);
		StringBuilder_Append_m3252(L_12, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0089:
	{
		StringBuilder_t219 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m3252(L_13, (String_t*) &_stringLiteral9, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_009f:
	{
		StringBuilder_t219 * L_14 = (__this->___builder_0);
		NullCheck(L_14);
		StringBuilder_Append_m3252(L_14, (String_t*) &_stringLiteral10, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00b5:
	{
		StringBuilder_t219 * L_15 = (__this->___builder_0);
		NullCheck(L_15);
		StringBuilder_Append_m3252(L_15, (String_t*) &_stringLiteral6, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00cb:
	{
		StringBuilder_t219 * L_16 = (__this->___builder_0);
		NullCheck(L_16);
		StringBuilder_Append_m3252(L_16, (String_t*) &_stringLiteral7, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00e1:
	{
		StringBuilder_t219 * L_17 = (__this->___builder_0);
		NullCheck(L_17);
		StringBuilder_Append_m3252(L_17, (String_t*) &_stringLiteral8, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00f7:
	{
		uint16_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m3255(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)32))))
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) > ((int32_t)((int32_t)126))))
		{
			goto IL_0123;
		}
	}
	{
		StringBuilder_t219 * L_22 = (__this->___builder_0);
		uint16_t L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m3246(L_22, L_23, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0123:
	{
		StringBuilder_t219 * L_24 = (__this->___builder_0);
		int32_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t37_il2cpp_TypeInfo_var);
		String_t* L_26 = Convert_ToString_m3256(NULL /*static, unused*/, L_25, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = String_PadLeft_m3257(L_26, 4, ((int32_t)48), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral400, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m3252(L_24, L_28, /*hidden argument*/NULL);
	}

IL_014a:
	{
		goto IL_014f;
	}

IL_014f:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0153:
	{
		int32_t L_30 = V_3;
		CharU5BU5D_t607* L_31 = V_2;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t219 * L_32 = (__this->___builder_0);
		NullCheck(L_32);
		StringBuilder_Append_m3246(L_32, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern TypeInfo* Single_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t638_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t632_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t60_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t61_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t639_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t640_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t641_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t642_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t643_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeOther_m2236 (Serializer_t409 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(59);
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		UInt32_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Int64_t632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(163);
		Double_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(60);
		SByte_t61_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(191);
		Byte_t639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(175);
		Int16_t640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		UInt16_t641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		UInt64_t642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(194);
		Decimal_t643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(195);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (((Object_t *)IsInst(L_0, Single_t59_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_1 = ___value;
		if (((Object_t *)IsInst(L_1, Int32_t50_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (((Object_t *)IsInst(L_2, UInt32_t638_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (((Object_t *)IsInst(L_3, Int64_t632_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, Double_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (((Object_t *)IsInst(L_5, SByte_t61_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_6 = ___value;
		if (((Object_t *)IsInst(L_6, Byte_t639_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_7 = ___value;
		if (((Object_t *)IsInst(L_7, Int16_t640_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_8 = ___value;
		if (((Object_t *)IsInst(L_8, UInt16_t641_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_9 = ___value;
		if (((Object_t *)IsInst(L_9, UInt64_t642_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t643_il2cpp_TypeInfo_var)))
		{
			goto IL_0090;
		}
	}

IL_0079:
	{
		StringBuilder_t219 * L_11 = (__this->___builder_0);
		Object_t * L_12 = ___value;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_Append_m3252(L_11, L_13, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0090:
	{
		Object_t * L_14 = ___value;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		Serializer_SerializeString_m2235(__this, L_15, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.MiniJSON.Json::.cctor()
extern TypeInfo* CultureInfo_t666_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t411_il2cpp_TypeInfo_var;
extern "C" void Json__cctor_m2237 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(331);
		Json_t411_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(97);
		s_Il2CppMethodIntialized = true;
	}
	{
		CultureInfo_t666 * L_0 = (CultureInfo_t666 *)il2cpp_codegen_object_new (CultureInfo_t666_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m3535(L_0, (String_t*) &_stringLiteral842, /*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t410 * L_1 = (NumberFormatInfo_t410 *)VirtFuncInvoker0< NumberFormatInfo_t410 * >::Invoke(11 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		((Json_t411_StaticFields*)Json_t411_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m2238 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	{
		String_t* L_0 = ___json;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		String_t* L_1 = ___json;
		Object_t * L_2 = Parser_Parse_m2217(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m2239 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		String_t* L_1 = Serializer_Serialize_m2231(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// AchievementController
#include "AssemblyU2DCSharp_AchievementController.h"
#ifndef _MSC_VER
#else
#endif
// AchievementController
#include "AssemblyU2DCSharp_AchievementControllerMethodDeclarations.h"

// GameLevelState
#include "AssemblyU2DCSharp_GameLevelState.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandle.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseState.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHan.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfig.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelper.h"
// LevelDescription
#include "AssemblyU2DCSharp_LevelDescription.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfig.h"
// GameLevelState
#include "AssemblyU2DCSharp_GameLevelStateMethodDeclarations.h"
// GameLevelState/GameLevelChangedEventHandler
#include "AssemblyU2DCSharp_GameLevelState_GameLevelChangedEventHandleMethodDeclarations.h"
// GamePhaseState
#include "AssemblyU2DCSharp_GamePhaseStateMethodDeclarations.h"
// GamePhaseState/GameInstanceChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GameInstanceChangedEventHanMethodDeclarations.h"
// DebugConfig
#include "AssemblyU2DCSharp_DebugConfigMethodDeclarations.h"
// SocialHelper
#include "AssemblyU2DCSharp_SocialHelperMethodDeclarations.h"
// LevelConfig
#include "AssemblyU2DCSharp_LevelConfigMethodDeclarations.h"


// System.Void AchievementController::.ctor()
extern "C" void AchievementController__ctor_m2240 (AchievementController_t412 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::Awake()
extern "C" void AchievementController_Awake_m2241 (AchievementController_t412 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AchievementController::Start()
extern "C" void AchievementController_Start_m2242 (AchievementController_t412 * __this, const MethodInfo* method)
{
	{
		AchievementController_RegisterForEvents_m2244(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::OnDestroy()
extern "C" void AchievementController_OnDestroy_m2243 (AchievementController_t412 * __this, const MethodInfo* method)
{
	{
		AchievementController_UnregisterForEvents_m2245(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m2247_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var;
extern "C" void AchievementController_RegisterForEvents_m2244 (AchievementController_t412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		AchievementController_OnGameLevelChanged_m2247_MethodInfo_var = il2cpp_codegen_method_info_from_index(433);
		AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var = il2cpp_codegen_method_info_from_index(434);
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
		GameLevelState_t462 * L_1 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m2247_MethodInfo_var };
		GameLevelChangedEventHandler_t461 * L_3 = (GameLevelChangedEventHandler_t461 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2449(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_add_GameLevelChanged_m2454(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_4 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var };
		GameInstanceChangedEventHandler_t464 * L_6 = (GameInstanceChangedEventHandler_t464 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2463(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m2478(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m2247_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var;
extern "C" void AchievementController_UnregisterForEvents_m2245 (AchievementController_t412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		AchievementController_OnGameLevelChanged_m2247_MethodInfo_var = il2cpp_codegen_method_info_from_index(433);
		AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var = il2cpp_codegen_method_info_from_index(434);
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
		GameLevelState_t462 * L_1 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m2247_MethodInfo_var };
		GameLevelChangedEventHandler_t461 * L_3 = (GameLevelChangedEventHandler_t461 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2449(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2455(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_4 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m2246_MethodInfo_var };
		GameInstanceChangedEventHandler_t464 * L_6 = (GameInstanceChangedEventHandler_t464 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2463(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m2479(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void AchievementController::OnGameInstanceChanged()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameInstanceChanged_m2246 (AchievementController_t412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t443 * L_0 = DebugConfig_get_instance_m2363(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_get_useDebugValues_m2361(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		SocialHelper_t551 * L_2 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_2);
		SocialHelper_ClearAchievements_m2909(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void AchievementController::OnGameLevelChanged()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameLevelChanged_m2247 (AchievementController_t412 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t489 * V_0 = {0};
	{
		LevelConfig_t496 * L_0 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t489 * L_1 = LevelConfig_GetCurrentLevelDescription_m2568(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t489 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___previousLevelClearedAchievementID_11);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		SocialHelper_t551 * L_4 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		LevelDescription_t489 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___previousLevelClearedAchievementID_11);
		NullCheck(L_4);
		SocialHelper_RecordAchievement_m2911(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0026:
	{
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

struct Component_t659;
struct Camera_t479;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t479_m3536(__this, method) (( Camera_t479 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void AspectRatioPreserve::.ctor()
extern "C" void AspectRatioPreserve__ctor_m2248 (AspectRatioPreserve_t413 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AspectRatioPreserve::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t479_m3536_MethodInfo_var;
extern "C" void AspectRatioPreserve_Start_m2249 (AspectRatioPreserve_t413 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t479_m3536_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484083);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t479 * V_3 = {0};
	Rect_t594  V_4 = {0};
	float V_5 = 0.0f;
	Rect_t594  V_6 = {0};
	{
		V_0 = (1.0f);
		int32_t L_0 = Screen_get_width_m3062(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m3078(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_0))/(float)(((float)L_1))));
		float L_2 = V_1;
		float L_3 = V_0;
		V_2 = ((float)((float)L_2/(float)L_3));
		Camera_t479 * L_4 = Component_GetComponent_TisCamera_t479_m3536(__this, /*hidden argument*/Component_GetComponent_TisCamera_t479_m3536_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_2;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Camera_t479 * L_6 = V_3;
		NullCheck(L_6);
		Rect_t594  L_7 = Camera_get_rect_m3537(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Rect_set_width_m3538((&V_4), (1.0f), /*hidden argument*/NULL);
		float L_8 = V_2;
		Rect_set_height_m3539((&V_4), L_8, /*hidden argument*/NULL);
		Rect_set_x_m3540((&V_4), (0.0f), /*hidden argument*/NULL);
		float L_9 = V_2;
		Rect_set_y_m3541((&V_4), ((float)((float)((float)((float)(1.0f)-(float)L_9))/(float)(2.0f))), /*hidden argument*/NULL);
		Camera_t479 * L_10 = V_3;
		Rect_t594  L_11 = V_4;
		NullCheck(L_10);
		Camera_set_rect_m3542(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0073:
	{
		float L_12 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)L_12));
		Camera_t479 * L_13 = V_3;
		NullCheck(L_13);
		Rect_t594  L_14 = Camera_get_rect_m3537(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = V_5;
		Rect_set_width_m3538((&V_6), L_15, /*hidden argument*/NULL);
		Rect_set_height_m3539((&V_6), (1.0f), /*hidden argument*/NULL);
		float L_16 = V_5;
		Rect_set_x_m3540((&V_6), ((float)((float)((float)((float)(1.0f)-(float)L_16))/(float)(2.0f))), /*hidden argument*/NULL);
		Rect_set_y_m3541((&V_6), (0.0f), /*hidden argument*/NULL);
		Camera_t479 * L_17 = V_3;
		Rect_t594  L_18 = V_6;
		NullCheck(L_17);
		Camera_set_rect_m3542(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void AspectRatioPreserve::Update()
extern "C" void AspectRatioPreserve_Update_m2250 (AspectRatioPreserve_t413 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// BoostActiveLayout
#include "AssemblyU2DCSharp_BoostActiveLayout.h"
#ifndef _MSC_VER
#else
#endif
// BoostActiveLayout
#include "AssemblyU2DCSharp_BoostActiveLayoutMethodDeclarations.h"

// BoostConfig
#include "AssemblyU2DCSharp_BoostConfig.h"
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostType.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandler.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_Slider.h"
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayout.h"
// BoostButton
#include "AssemblyU2DCSharp_BoostButton.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransform.h"
// BoostConfig
#include "AssemblyU2DCSharp_BoostConfigMethodDeclarations.h"
// BoostConfig/BoostActiveEventHandler
#include "AssemblyU2DCSharp_BoostConfig_BoostActiveEventHandlerMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayoutMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
struct GameObject_t310;
struct Slider_t415;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t415_m3543(__this, method) (( Slider_t415 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)
struct GameObject_t310;
struct BoostButtonLayout_t425;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
#define GameObject_GetComponent_TisBoostButtonLayout_t425_m3544(__this, method) (( BoostButtonLayout_t425 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)
struct GameObject_t310;
struct RectTransform_t572;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t572_m3545(__this, method) (( RectTransform_t572 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void BoostActiveLayout::.ctor()
extern "C" void BoostActiveLayout__ctor_m2251 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::Awake()
extern "C" void BoostActiveLayout_Awake_m2252 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_3 = 0;
		__this->___sliderDirty_10 = 0;
		__this->___started_8 = 0;
		return;
	}
}
// System.Void BoostActiveLayout::Start()
extern "C" void BoostActiveLayout_Start_m2253 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t414 * L_0 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_7 = L_0;
		BoostActiveLayout_RegisterForEvents_m2256(__this, /*hidden argument*/NULL);
		BoostActiveLayout_AddSlider_m2260(__this, /*hidden argument*/NULL);
		BoostActiveLayout_RefreshSlider_m2261(__this, /*hidden argument*/NULL);
		__this->___started_8 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::OnEnable()
extern "C" void BoostActiveLayout_OnEnable_m2254 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
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
		BoostActiveLayout_RefreshSlider_m2261(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnDestroy()
extern "C" void BoostActiveLayout_OnDestroy_m2255 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	{
		BoostActiveLayout_UnregisterForEvents_m2257(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var;
extern "C" void BoostActiveLayout_RegisterForEvents_m2256 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var = il2cpp_codegen_method_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t414 * L_0 = (__this->___boostConfig_7);
		IntPtr_t L_1 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_2 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2309(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var;
extern "C" void BoostActiveLayout_UnregisterForEvents_m2257 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var = il2cpp_codegen_method_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registerdForEvents_3);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t414 * L_1 = (__this->___boostConfig_7);
		IntPtr_t L_2 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m2259_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_3 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2310(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BoostActiveLayout::Update()
extern "C" void BoostActiveLayout_Update_m2258 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sliderDirty_10);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BoostActiveLayout_RefreshSlider_m2261(__this, /*hidden argument*/NULL);
		__this->___sliderDirty_10 = 0;
	}

IL_0018:
	{
		BoostActiveLayout_MaybeUpdateSliderProgress_m2262(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveLayout_OnBoostUsageChanged_m2259 (BoostActiveLayout_t417 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___sliderDirty_10 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::AddSlider()
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t415_m3543_MethodInfo_var;
extern "C" void BoostActiveLayout_AddSlider_m2260 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		GameObject_GetComponent_TisSlider_t415_m3543_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t310 * V_0 = {0};
	{
		GameObject_t310 * L_0 = (__this->___sliderPrototype_2);
		Vector3_t449  L_1 = {0};
		Vector3__ctor_m3439(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t682  L_2 = Quaternion_get_identity_m3546(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t599 * L_3 = Object_Instantiate_m3547(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t310 *)IsInst(L_3, GameObject_t310_il2cpp_TypeInfo_var));
		GameObject_t310 * L_4 = V_0;
		NullCheck(L_4);
		Slider_t415 * L_5 = GameObject_GetComponent_TisSlider_t415_m3543(L_4, /*hidden argument*/GameObject_GetComponent_TisSlider_t415_m3543_MethodInfo_var);
		__this->___sliderInstance_9 = L_5;
		GameObject_t310 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t364 * L_7 = GameObject_get_transform_m3444(L_6, /*hidden argument*/NULL);
		GameObject_t310 * L_8 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t364 * L_9 = GameObject_get_transform_m3444(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m3548(L_7, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RefreshSlider()
extern const MethodInfo* GameObject_GetComponent_TisBoostButtonLayout_t425_m3544_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t572_m3545_MethodInfo_var;
extern "C" void BoostActiveLayout_RefreshSlider_m2261 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButtonLayout_t425_m3544_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484086);
		GameObject_GetComponent_TisRectTransform_t572_m3545_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	BoostButtonLayout_t425 * V_0 = {0};
	BoostButton_t419 * V_1 = {0};
	RectTransform_t572 * V_2 = {0};
	RectTransform_t572 * V_3 = {0};
	{
		BoostConfig_t414 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2332(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButtonLayout_t425 * L_3 = GameObject_GetComponent_TisBoostButtonLayout_t425_m3544(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButtonLayout_t425_m3544_MethodInfo_var);
		V_0 = L_3;
		Slider_t415 * L_4 = (__this->___sliderInstance_9);
		NullCheck(L_4);
		GameObject_t310 * L_5 = Component_get_gameObject_m3159(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3361(L_5, 1, /*hidden argument*/NULL);
		BoostButtonLayout_t425 * L_6 = V_0;
		BoostConfig_t414 * L_7 = (__this->___boostConfig_7);
		NullCheck(L_7);
		int32_t L_8 = BoostConfig_get_activeBoost_m2313(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		BoostButton_t419 * L_9 = BoostButtonLayout_GetButtonForBoost_m2297(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		BoostButton_t419 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t310 * L_11 = Component_get_gameObject_m3159(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_t572 * L_12 = GameObject_GetComponent_TisRectTransform_t572_m3545(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t572_m3545_MethodInfo_var);
		V_2 = L_12;
		Slider_t415 * L_13 = (__this->___sliderInstance_9);
		NullCheck(L_13);
		GameObject_t310 * L_14 = Component_get_gameObject_m3159(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t364 * L_15 = GameObject_get_transform_m3444(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetAsLastSibling_m3549(L_15, /*hidden argument*/NULL);
		Slider_t415 * L_16 = (__this->___sliderInstance_9);
		NullCheck(L_16);
		GameObject_t310 * L_17 = Component_get_gameObject_m3159(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t572 * L_18 = GameObject_GetComponent_TisRectTransform_t572_m3545(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t572_m3545_MethodInfo_var);
		V_3 = L_18;
		RectTransform_t572 * L_19 = V_3;
		RectTransform_t572 * L_20 = V_2;
		NullCheck(L_20);
		Vector3_t449  L_21 = RectTransform_get_anchoredPosition3D_m3550(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchoredPosition3D_m3551(L_19, L_21, /*hidden argument*/NULL);
		RectTransform_t572 * L_22 = V_3;
		Vector3_t449  L_23 = {0};
		Vector3__ctor_m3439(&L_23, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m3450(L_22, L_23, /*hidden argument*/NULL);
		RectTransform_t572 * L_24 = V_3;
		Quaternion_t682  L_25 = Quaternion_get_identity_m3546(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m3552(L_24, L_25, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_00a7:
	{
		Slider_t415 * L_26 = (__this->___sliderInstance_9);
		NullCheck(L_26);
		GameObject_t310 * L_27 = Component_get_gameObject_m3159(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_m3361(L_27, 0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		return;
	}
}
// System.Void BoostActiveLayout::MaybeUpdateSliderProgress()
extern "C" void BoostActiveLayout_MaybeUpdateSliderProgress_m2262 (BoostActiveLayout_t417 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t414 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2332(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		BoostConfig_t414 * L_2 = (__this->___boostConfig_7);
		NullCheck(L_2);
		float L_3 = BoostConfig_GetActiveBoostFractionUsed_m2331(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Slider_t415 * L_4 = (__this->___sliderInstance_9);
		float L_5 = V_0;
		NullCheck(L_4);
		Slider_set_value_m3553(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonMode.h"
#ifndef _MSC_VER
#else
#endif
// BoostButton/BoostButtonMode
#include "AssemblyU2DCSharp_BoostButton_BoostButtonModeMethodDeclarations.h"



// BoostButton/<TriggerDistortionEffect>c__IteratorF
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3Ec.h"
#ifndef _MSC_VER
#else
#endif
// BoostButton/<TriggerDistortionEffect>c__IteratorF
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3EcMethodDeclarations.h"

// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct Component_t659;
struct DistortForEffect_t448;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t448_m3554(__this, method) (( DistortForEffect_t448 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::.ctor()
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF__ctor_m2263 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2264 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m2265 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean BoostButton/<TriggerDistortionEffect>c__IteratorF::MoveNext()
extern TypeInfo* WaitForSeconds_t683_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var;
extern "C" bool U3CTriggerDistortionEffectU3Ec__IteratorF_MoveNext_m2266 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
		Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
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
		goto IL_0054;
	}

IL_0021:
	{
		WaitForSeconds_t683 * L_2 = (WaitForSeconds_t683 *)il2cpp_codegen_object_new (WaitForSeconds_t683_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3555(L_2, (0.25f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0056;
	}

IL_003d:
	{
		BoostButton_t419 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		DistortForEffect_t448 * L_4 = Component_GetComponent_TisDistortForEffect_t448_m3554(L_3, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var);
		NullCheck(L_4);
		DistortForEffect_Distort_m2383(L_4, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
	}

IL_0054:
	{
		return 0;
	}

IL_0056:
	{
		return 1;
	}
	// Dead block : IL_0058: ldloc.1
}
// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::Dispose()
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF_Dispose_m2267 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void BoostButton/<TriggerDistortionEffect>c__IteratorF::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CTriggerDistortionEffectU3Ec__IteratorF_Reset_m2268 (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * __this, const MethodInfo* method)
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
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"

// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandler.h"
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandler.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandle.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_Image.h"
// UnityEngine.UI.Button
#include "UnityEngine_UI_UnityEngine_UI_Button.h"
// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// PlayerStats
#include "AssemblyU2DCSharp_PlayerStatsMethodDeclarations.h"
// PlayerStats/TreatsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_TreatsChangedEventHandlerMethodDeclarations.h"
// PlayerStats/BoostsChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_BoostsChangedEventHandlerMethodDeclarations.h"
// GamePhaseState/GamePhaseChangedEventHandler
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseChangedEventHandleMethodDeclarations.h"
// UnityEngine.UI.Image
#include "UnityEngine_UI_UnityEngine_UI_ImageMethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_SelectableMethodDeclarations.h"
struct GameObject_t310;
struct Button_t421;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t421_m3556(__this, method) (( Button_t421 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)
struct GameObject_t310;
struct Image_t497;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t497_m3557(__this, method) (( Image_t497 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m2269 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m2270 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		BoostButton_RegisterForEvents_m2272(__this, /*hidden argument*/NULL);
		__this->___buttonDirty_10 = 0;
		BoostButton_CheckForLevelUnlockEffects_m2283(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m2271 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___buttonDirty_10);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		BoostButton_RefreshButton_m2276(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void BoostButton::RegisterForEvents()
extern TypeInfo* TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m2286_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m2284_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m2281_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGamePhaseChanged_m2282_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var;
extern "C" void BoostButton_RegisterForEvents_m2272 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		BoostButton_OnTreatsChanged_m2286_MethodInfo_var = il2cpp_codegen_method_info_from_index(441);
		BoostButton_OnBoostsChanged_m2284_MethodInfo_var = il2cpp_codegen_method_info_from_index(442);
		BoostButton_OnGameLevelChanged_m2281_MethodInfo_var = il2cpp_codegen_method_info_from_index(443);
		BoostButton_OnGamePhaseChanged_m2282_MethodInfo_var = il2cpp_codegen_method_info_from_index(444);
		BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var = il2cpp_codegen_method_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_9);
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		__this->___registeredForEvents_9 = 1;
		PlayerStats_t433 * L_1 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m2286_MethodInfo_var };
		TreatsChangedEventHandler_t530 * L_3 = (TreatsChangedEventHandler_t530 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2792(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_TreatsChanged_m2803(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t433 * L_4 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m2284_MethodInfo_var };
		BoostsChangedEventHandler_t531 * L_6 = (BoostsChangedEventHandler_t531 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m2796(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_add_BoostsChanged_m2805(L_4, L_6, /*hidden argument*/NULL);
		GameLevelState_t462 * L_7 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m2281_MethodInfo_var };
		GameLevelChangedEventHandler_t461 * L_9 = (GameLevelChangedEventHandler_t461 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2449(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameLevelState_add_GameLevelChanged_m2454(L_7, L_9, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_10 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)BoostButton_OnGamePhaseChanged_m2282_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_12 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GamePhaseState_add_GamePhaseChanged_m2480(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t414 * L_13 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_15 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_add_BoostActive_m2309(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void BoostButton::UnregisterForEvents()
extern TypeInfo* TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m2286_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m2284_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m2281_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var;
extern "C" void BoostButton_UnregisterForEvents_m2273 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(365);
		BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(366);
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		BoostButton_OnTreatsChanged_m2286_MethodInfo_var = il2cpp_codegen_method_info_from_index(441);
		BoostButton_OnBoostsChanged_m2284_MethodInfo_var = il2cpp_codegen_method_info_from_index(442);
		BoostButton_OnGameLevelChanged_m2281_MethodInfo_var = il2cpp_codegen_method_info_from_index(443);
		BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var = il2cpp_codegen_method_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_9);
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		PlayerStats_t433 * L_1 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m2286_MethodInfo_var };
		TreatsChangedEventHandler_t530 * L_3 = (TreatsChangedEventHandler_t530 *)il2cpp_codegen_object_new (TreatsChangedEventHandler_t530_il2cpp_TypeInfo_var);
		TreatsChangedEventHandler__ctor_m2792(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_TreatsChanged_m2804(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t433 * L_4 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m2284_MethodInfo_var };
		BoostsChangedEventHandler_t531 * L_6 = (BoostsChangedEventHandler_t531 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t531_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m2796(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_remove_BoostsChanged_m2806(L_4, L_6, /*hidden argument*/NULL);
		GameLevelState_t462 * L_7 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m2281_MethodInfo_var };
		GameLevelChangedEventHandler_t461 * L_9 = (GameLevelChangedEventHandler_t461 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2449(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameLevelState_remove_GameLevelChanged_m2455(L_7, L_9, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_10 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)BoostButton_OnGameLevelChanged_m2281_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_12 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t414 * L_13 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m2285_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_15 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_remove_BoostActive_m2310(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m2274 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		BoostButton_UnregisterForEvents_m2273(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern const MethodInfo* GameObject_GetComponent_TisButton_t421_m3556_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisImage_t497_m3557_MethodInfo_var;
extern "C" void BoostButton_ConfigureForType_m2275 (BoostButton_t419 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisButton_t421_m3556_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484094);
		GameObject_GetComponent_TisImage_t497_m3557_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		s_Il2CppMethodIntialized = true;
	}
	Image_t497 * V_0 = {0};
	{
		int32_t L_0 = ___bType;
		__this->___boostType_7 = L_0;
		GameObject_t310 * L_1 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Button_t421 * L_2 = GameObject_GetComponent_TisButton_t421_m3556(L_1, /*hidden argument*/GameObject_GetComponent_TisButton_t421_m3556_MethodInfo_var);
		__this->___button_3 = L_2;
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t497 * L_4 = GameObject_GetComponent_TisImage_t497_m3557(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t497_m3557_MethodInfo_var);
		V_0 = L_4;
		Image_t497 * L_5 = V_0;
		BoostConfig_t414 * L_6 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		Sprite_t430 * L_8 = BoostConfig_GetButtonImageForType_m2322(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_set_sprite_m3558(L_5, L_8, /*hidden argument*/NULL);
		Text_t422 * L_9 = (__this->___buttonText_4);
		BoostConfig_t414 * L_10 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___boostType_7);
		NullCheck(L_10);
		String_t* L_12 = BoostConfig_GetTitleForType_m2324(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_12);
		BoostButton_RefreshButton_m2276(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::RefreshButton()
extern "C" void BoostButton_RefreshButton_m2276 (BoostButton_t419 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = (__this->___mode_2);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_002f;
	}

IL_0019:
	{
		BoostButton_RefreshForBuy_m2278(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_0024:
	{
		BoostButton_RefreshForUse_m2279(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_002f:
	{
		BoostButton_RefreshForBuyAndUse_m2277(__this, /*hidden argument*/NULL);
		goto IL_003a;
	}

IL_003a:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForBuyAndUse()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForBuyAndUse_m2277 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Button_t421 * G_B5_0 = {0};
	Button_t421 * G_B3_0 = {0};
	Button_t421 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Button_t421 * G_B6_1 = {0};
	{
		Text_t422 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t310 * L_1 = Component_get_gameObject_m3159(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3361(L_1, 1, /*hidden argument*/NULL);
		Text_t422 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3361(L_3, 0, /*hidden argument*/NULL);
		Text_t422 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t310 * L_5 = Component_get_gameObject_m3159(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3361(L_5, 0, /*hidden argument*/NULL);
		LevelConfig_t496 * L_6 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = LevelConfig_GetLevelLock_m2566(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		GameLevelState_t462 * L_9 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = GameLevelState_get_gameLevel_m2456(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0092;
		}
	}
	{
		Text_t422 * L_13 = (__this->___restrictionText_6);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral843, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		Button_t421 * L_18 = (__this->___button_3);
		NullCheck(L_18);
		Selectable_set_interactable_m3559(L_18, 0, /*hidden argument*/NULL);
		Text_t422 * L_19 = (__this->___countText_5);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		goto IL_0104;
	}

IL_0092:
	{
		BoostConfig_t414 * L_21 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_22 = (__this->___boostType_7);
		NullCheck(L_21);
		int32_t L_23 = BoostConfig_GetCurrentPriceForBoost_m2325(L_21, L_22, /*hidden argument*/NULL);
		__this->___priceInTreats_8 = L_23;
		Text_t422 * L_24 = (__this->___restrictionText_6);
		int32_t L_25 = (__this->___priceInTreats_8);
		int32_t L_26 = L_25;
		Object_t * L_27 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral844, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_28);
		Button_t421 * L_29 = (__this->___button_3);
		PlayerStats_t433 * L_30 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___priceInTreats_8);
		NullCheck(L_30);
		bool L_32 = PlayerStats_CanAfford_m2817(L_30, L_31, /*hidden argument*/NULL);
		G_B3_0 = L_29;
		if (!L_32)
		{
			G_B5_0 = L_29;
			goto IL_00fe;
		}
	}
	{
		BoostConfig_t414 * L_33 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = BoostConfig_IsBoostActive_m2332(L_33, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_34)
		{
			G_B5_0 = G_B3_0;
			goto IL_00fe;
		}
	}
	{
		GamePhaseState_t466 * L_35 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_36 = GamePhaseState_IsPlaying_m2489(L_35, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_36));
		G_B6_1 = G_B4_0;
		goto IL_00ff;
	}

IL_00fe:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_00ff:
	{
		NullCheck(G_B6_1);
		Selectable_set_interactable_m3559(G_B6_1, G_B6_0, /*hidden argument*/NULL);
	}

IL_0104:
	{
		Button_t421 * L_37 = (__this->___button_3);
		NullCheck(L_37);
		bool L_38 = Selectable_get_interactable_m3560(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0125;
		}
	}
	{
		Text_t422 * L_39 = (__this->___restrictionText_6);
		NullCheck(L_39);
		Text_set_fontStyle_m3561(L_39, 2, /*hidden argument*/NULL);
		goto IL_0131;
	}

IL_0125:
	{
		Text_t422 * L_40 = (__this->___restrictionText_6);
		NullCheck(L_40);
		Text_set_fontStyle_m3561(L_40, 0, /*hidden argument*/NULL);
	}

IL_0131:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForBuy()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForBuy_m2278 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Text_t422 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t310 * L_1 = Component_get_gameObject_m3159(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3361(L_1, 1, /*hidden argument*/NULL);
		Text_t422 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3361(L_3, 1, /*hidden argument*/NULL);
		Text_t422 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t310 * L_5 = Component_get_gameObject_m3159(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3361(L_5, 1, /*hidden argument*/NULL);
		LevelConfig_t496 * L_6 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = LevelConfig_GetLevelLock_m2566(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		GameLevelState_t462 * L_9 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = GameLevelState_get_gameLevel_m2456(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0092;
		}
	}
	{
		Text_t422 * L_13 = (__this->___restrictionText_6);
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral843, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		Button_t421 * L_18 = (__this->___button_3);
		NullCheck(L_18);
		Selectable_set_interactable_m3559(L_18, 0, /*hidden argument*/NULL);
		Text_t422 * L_19 = (__this->___countText_5);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		goto IL_010d;
	}

IL_0092:
	{
		BoostConfig_t414 * L_21 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_22 = (__this->___boostType_7);
		NullCheck(L_21);
		int32_t L_23 = BoostConfig_GetCurrentPriceForBoost_m2325(L_21, L_22, /*hidden argument*/NULL);
		__this->___priceInTreats_8 = L_23;
		Button_t421 * L_24 = (__this->___button_3);
		PlayerStats_t433 * L_25 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___priceInTreats_8);
		NullCheck(L_25);
		bool L_27 = PlayerStats_CanAfford_m2817(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Selectable_set_interactable_m3559(L_24, L_27, /*hidden argument*/NULL);
		Text_t422 * L_28 = (__this->___restrictionText_6);
		int32_t L_29 = (__this->___priceInTreats_8);
		int32_t L_30 = L_29;
		Object_t * L_31 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral844, L_31, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_32);
		Text_t422 * L_33 = (__this->___countText_5);
		PlayerStats_t433 * L_34 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___boostType_7);
		NullCheck(L_34);
		int32_t L_36 = PlayerStats_GetAvailableBoostCount_m2823(L_34, L_35, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		Object_t * L_38 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral845, L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_39);
	}

IL_010d:
	{
		return;
	}
}
// System.Void BoostButton::RefreshForUse()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshForUse_m2279 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	Button_t421 * G_B3_0 = {0};
	Button_t421 * G_B2_0 = {0};
	int32_t G_B4_0 = 0;
	Button_t421 * G_B4_1 = {0};
	{
		Text_t422 * L_0 = (__this->___restrictionText_6);
		NullCheck(L_0);
		GameObject_t310 * L_1 = Component_get_gameObject_m3159(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3361(L_1, 0, /*hidden argument*/NULL);
		Text_t422 * L_2 = (__this->___buttonText_4);
		NullCheck(L_2);
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3361(L_3, 0, /*hidden argument*/NULL);
		Text_t422 * L_4 = (__this->___countText_5);
		NullCheck(L_4);
		GameObject_t310 * L_5 = Component_get_gameObject_m3159(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3361(L_5, 1, /*hidden argument*/NULL);
		PlayerStats_t433 * L_6 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___boostType_7);
		NullCheck(L_6);
		int32_t L_8 = PlayerStats_GetAvailableBoostCount_m2823(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		Button_t421 * L_9 = (__this->___button_3);
		NullCheck(L_9);
		GameObject_t310 * L_10 = Component_get_gameObject_m3159(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m3361(L_10, 1, /*hidden argument*/NULL);
		Text_t422 * L_11 = (__this->___countText_5);
		NullCheck(L_11);
		GameObject_t310 * L_12 = Component_get_gameObject_m3159(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m3361(L_12, 1, /*hidden argument*/NULL);
		Text_t422 * L_13 = (__this->___countText_5);
		PlayerStats_t433 * L_14 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_15 = (__this->___boostType_7);
		NullCheck(L_14);
		int32_t L_16 = PlayerStats_GetAvailableBoostCount_m2823(L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral845, L_18, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_19);
		Button_t421 * L_20 = (__this->___button_3);
		BoostConfig_t414 * L_21 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22 = BoostConfig_IsBoostActive_m2332(L_21, /*hidden argument*/NULL);
		G_B2_0 = L_20;
		if (L_22)
		{
			G_B3_0 = L_20;
			goto IL_00b6;
		}
	}
	{
		GamePhaseState_t466 * L_23 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_24 = GamePhaseState_IsPlaying_m2489(L_23, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_24));
		G_B4_1 = G_B2_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_00b7:
	{
		NullCheck(G_B4_1);
		Selectable_set_interactable_m3559(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		goto IL_00e3;
	}

IL_00c1:
	{
		Button_t421 * L_25 = (__this->___button_3);
		NullCheck(L_25);
		GameObject_t310 * L_26 = Component_get_gameObject_m3159(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_SetActive_m3361(L_26, 0, /*hidden argument*/NULL);
		Text_t422 * L_27 = (__this->___countText_5);
		NullCheck(L_27);
		GameObject_t310 * L_28 = Component_get_gameObject_m3159(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		GameObject_SetActive_m3361(L_28, 0, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		return;
	}
}
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m2280 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___boostType_7);
		return L_0;
	}
}
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m2281 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_10 = 1;
		return;
	}
}
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m2282 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_10 = 1;
		BoostButton_CheckForLevelUnlockEffects_m2283(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m2283 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m2489(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		GameLevelState_t462 * L_2 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m2456(L_2, /*hidden argument*/NULL);
		LevelConfig_t496 * L_4 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___boostType_7);
		NullCheck(L_4);
		int32_t L_6 = LevelConfig_GetLevelLock_m2566(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		Object_t * L_7 = BoostButton_TriggerDistortionEffect_m2288(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3122(__this, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m2284 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_10 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m2285 (BoostButton_t419 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___buttonDirty_10 = 1;
		return;
	}
}
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m2286 (BoostButton_t419 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_10 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var;
extern "C" void BoostButton_OnBoostUnlocked_m2287 (BoostButton_t419 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___bType;
		int32_t L_1 = (__this->___boostType_7);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		DistortForEffect_t448 * L_2 = Component_GetComponent_TisDistortForEffect_t448_m3554(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t448_m3554_MethodInfo_var);
		NullCheck(L_2);
		DistortForEffect_Distort_m2383(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern TypeInfo* U3CTriggerDistortionEffectU3Ec__IteratorF_t420_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m2288 (BoostButton_t419 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTriggerDistortionEffectU3Ec__IteratorF_t420_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(370);
		s_Il2CppMethodIntialized = true;
	}
	U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * V_0 = {0};
	{
		U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * L_0 = (U3CTriggerDistortionEffectU3Ec__IteratorF_t420 *)il2cpp_codegen_object_new (U3CTriggerDistortionEffectU3Ec__IteratorF_t420_il2cpp_TypeInfo_var);
		U3CTriggerDistortionEffectU3Ec__IteratorF__ctor_m2263(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CTriggerDistortionEffectU3Ec__IteratorF_t420 * L_2 = V_0;
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_Canvas.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"
// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"
// UnityEngine.Canvas
#include "UnityEngine_UnityEngine_CanvasMethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
struct GameObject_t310;
struct BoostButton_t419;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t419_m3562(__this, method) (( BoostButton_t419 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m2289 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m2290 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	{
		__this->___started_9 = 0;
		return;
	}
}
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m2291 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	{
		BoostButtonLayout_AddBoostButtons_m2293(__this, /*hidden argument*/NULL);
		BoostButtonLayout_LayoutBoostButtons_m2295(__this, /*hidden argument*/NULL);
		BoostButtonLayout_RefreshBoostButtons_m2296(__this, /*hidden argument*/NULL);
		__this->___started_9 = 1;
		return;
	}
}
// System.Void BoostButtonLayout::OnEnable()
extern "C" void BoostButtonLayout_OnEnable_m2292 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
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
		return;
	}
}
// System.Void BoostButtonLayout::AddBoostButtons()
extern TypeInfo* List_1_t423_il2cpp_TypeInfo_var;
extern TypeInfo* GameObjectU5BU5D_t424_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3563_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtons_m2293 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t423_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		GameObjectU5BU5D_t424_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(373);
		List_1__ctor_m3563_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484096);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t423 * L_0 = (List_1_t423 *)il2cpp_codegen_object_new (List_1_t423_il2cpp_TypeInfo_var);
		List_1__ctor_m3563(L_0, /*hidden argument*/List_1__ctor_m3563_MethodInfo_var);
		__this->___boostButtons_5 = L_0;
		__this->___boostButtonGameObjects_6 = ((GameObjectU5BU5D_t424*)SZArrayNew(GameObjectU5BU5D_t424_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_0029;
	}

IL_001e:
	{
		int32_t L_1 = V_0;
		BoostButtonLayout_AddBoostButtonForType_m2294(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)5)))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void BoostButtonLayout::AddBoostButtonForType(BoostConfig/BoostType)
extern TypeInfo* GameObject_t310_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtonForType_m2294 (BoostButtonLayout_t425 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(198);
		GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t310 * V_0 = {0};
	BoostButton_t419 * V_1 = {0};
	{
		GameObject_t310 * L_0 = (__this->___boostButtonPrototype_3);
		Vector3_t449  L_1 = {0};
		Vector3__ctor_m3439(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t682  L_2 = Quaternion_get_identity_m3546(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t599 * L_3 = Object_Instantiate_m3547(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t310 *)IsInst(L_3, GameObject_t310_il2cpp_TypeInfo_var));
		GameObject_t310 * L_4 = V_0;
		NullCheck(L_4);
		BoostButton_t419 * L_5 = GameObject_GetComponent_TisBoostButton_t419_m3562(L_4, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var);
		V_1 = L_5;
		GameObject_t310 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t364 * L_7 = GameObject_get_transform_m3444(L_6, /*hidden argument*/NULL);
		GameObject_t310 * L_8 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t364 * L_9 = GameObject_get_transform_m3444(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m3548(L_7, L_9, 0, /*hidden argument*/NULL);
		BoostButton_t419 * L_10 = V_1;
		int32_t L_11 = ___bType;
		NullCheck(L_10);
		BoostButton_ConfigureForType_m2275(L_10, L_11, /*hidden argument*/NULL);
		List_1_t423 * L_12 = (__this->___boostButtons_5);
		BoostButton_t419 * L_13 = V_1;
		NullCheck(L_12);
		VirtActionInvoker1< BoostButton_t419 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<BoostButton>::Add(!0) */, L_12, L_13);
		GameObjectU5BU5D_t424* L_14 = (__this->___boostButtonGameObjects_6);
		int32_t L_15 = ___bType;
		BoostButton_t419 * L_16 = V_1;
		NullCheck(L_16);
		GameObject_t310 * L_17 = Component_get_gameObject_m3159(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_17);
		*((GameObject_t310 **)(GameObject_t310 **)SZArrayLdElema(L_14, L_15)) = (GameObject_t310 *)L_17;
		return;
	}
}
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern TypeInfo* Utilities_t571_il2cpp_TypeInfo_var;
extern "C" void BoostButtonLayout_LayoutBoostButtons_m2295 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t594  V_1 = {0};
	{
		Canvas_t416 * L_0 = (__this->___containingCanvas_4);
		NullCheck(L_0);
		Rect_t594  L_1 = Canvas_get_pixelRect_m3564(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = Rect_get_width_m3442((&V_1), /*hidden argument*/NULL);
		Canvas_t416 * L_3 = (__this->___containingCanvas_4);
		NullCheck(L_3);
		float L_4 = Canvas_get_scaleFactor_m3565(L_3, /*hidden argument*/NULL);
		V_0 = ((float)((float)L_2/(float)L_4));
		float L_5 = V_0;
		GameObjectU5BU5D_t424* L_6 = (__this->___boostButtonGameObjects_6);
		float L_7 = (__this->___boostButtonYOffset_2);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t571_il2cpp_TypeInfo_var);
		Utilities_SpaceHorizontally_m3032(NULL /*static, unused*/, L_5, L_6, L_7, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern TypeInfo* Enumerator_t684_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3566_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3567_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3568_MethodInfo_var;
extern "C" void BoostButtonLayout_RefreshBoostButtons_m2296 (BoostButtonLayout_t425 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		IDisposable_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		List_1_GetEnumerator_m3566_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		Enumerator_get_Current_m3567_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484099);
		Enumerator_MoveNext_m3568_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t419 * V_0 = {0};
	Enumerator_t684  V_1 = {0};
	Exception_t27 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t27 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t423 * L_0 = (__this->___boostButtons_5);
		NullCheck(L_0);
		Enumerator_t684  L_1 = List_1_GetEnumerator_m3566(L_0, /*hidden argument*/List_1_GetEnumerator_m3566_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001f;
		}

IL_0011:
		{
			BoostButton_t419 * L_2 = Enumerator_get_Current_m3567((&V_1), /*hidden argument*/Enumerator_get_Current_m3567_MethodInfo_var);
			V_0 = L_2;
			BoostButton_t419 * L_3 = V_0;
			NullCheck(L_3);
			BoostButton_RefreshButton_m2276(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m3568((&V_1), /*hidden argument*/Enumerator_MoveNext_m3568_MethodInfo_var);
			if (L_4)
			{
				goto IL_0011;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_0030);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t27 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_t684  L_5 = V_1;
		Enumerator_t684  L_6 = L_5;
		Object_t * L_7 = Box(Enumerator_t684_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t28_il2cpp_TypeInfo_var, L_7);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t27 *)
	}

IL_003c:
	{
		return;
	}
}
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t419 * BoostButtonLayout_GetButtonForBoost_m2297 (BoostButtonLayout_t425 * __this, int32_t ___boostType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___boostType;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0009;
		}
	}
	{
		return (BoostButton_t419 *)NULL;
	}

IL_0009:
	{
		int32_t L_1 = ___boostType;
		V_0 = L_1;
		List_1_t423 * L_2 = (__this->___boostButtons_5);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BoostButton_t419 * L_4 = (BoostButton_t419 *)VirtFuncInvoker1< BoostButton_t419 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<BoostButton>::get_Item(System.Int32) */, L_2, L_3);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif
// BoostConfig/BoostType
#include "AssemblyU2DCSharp_BoostConfig_BoostTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void BoostConfig/BoostActiveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void BoostActiveEventHandler__ctor_m2298 (BoostActiveEventHandler_t427 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveEventHandler_Invoke_m2299 (BoostActiveEventHandler_t427 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostActiveEventHandler_Invoke_m2299((BoostActiveEventHandler_t427 *)__this->___prev_9,___newBoostType, ___oldBoostType, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___newBoostType, ___oldBoostType,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___newBoostType, ___oldBoostType,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_BoostActiveEventHandler_t427(Il2CppObject* delegate, int32_t ___newBoostType, int32_t ___oldBoostType)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___newBoostType' to native representation

	// Marshaling of parameter '___oldBoostType' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___newBoostType, ___oldBoostType);

	// Marshaling cleanup of parameter '___newBoostType' native representation

	// Marshaling cleanup of parameter '___oldBoostType' native representation

}
// System.IAsyncResult BoostConfig/BoostActiveEventHandler::BeginInvoke(BoostConfig/BoostType,BoostConfig/BoostType,System.AsyncCallback,System.Object)
extern TypeInfo* BoostType_t426_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostActiveEventHandler_BeginInvoke_m2300 (BoostActiveEventHandler_t427 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostType_t426_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(376);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(BoostType_t426_il2cpp_TypeInfo_var, &___newBoostType);
	__d_args[1] = Box(BoostType_t426_il2cpp_TypeInfo_var, &___oldBoostType);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void BoostConfig/BoostActiveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostActiveEventHandler_EndInvoke_m2301 (BoostActiveEventHandler_t427 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// BoostConfig/<WaitThenCleanup>c__Iterator10
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__Iterat.h"
#ifndef _MSC_VER
#else
#endif
// BoostConfig/<WaitThenCleanup>c__Iterator10
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__IteratMethodDeclarations.h"



// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::.ctor()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10__ctor_m2302 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator10::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator10_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2303 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator10::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator10_System_Collections_IEnumerator_get_Current_m2304 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean BoostConfig/<WaitThenCleanup>c__Iterator10::MoveNext()
extern TypeInfo* WaitForSeconds_t683_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitThenCleanupU3Ec__Iterator10_MoveNext_m2305 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
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
		WaitForSeconds_t683 * L_3 = (WaitForSeconds_t683 *)il2cpp_codegen_object_new (WaitForSeconds_t683_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3555(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_2 = L_3;
		__this->___U24PC_1 = 1;
		goto IL_005e;
	}

IL_003e:
	{
		BoostConfig_t414 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_4);
		L_4->___activePause_3 = (Object_t *)NULL;
		BoostConfig_t414 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		BoostConfig_CleanupActiveBoost_m2330(L_5, /*hidden argument*/NULL);
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
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::Dispose()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10_Dispose_m2306 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator10::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CWaitThenCleanupU3Ec__Iterator10_Reset_m2307 (U3CWaitThenCleanupU3Ec__Iterator10_t428 * __this, const MethodInfo* method)
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

// System.Delegate
#include "mscorlib_System_Delegate.h"
// GamePhaseState/GamePhaseType
#include "AssemblyU2DCSharp_GamePhaseState_GamePhaseType.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDesc.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfig.h"
// SoundController
#include "AssemblyU2DCSharp_SoundController.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayer.h"
// SFXPlayer/SFXType
#include "AssemblyU2DCSharp_SFXPlayer_SFXType.h"
// TipController
#include "AssemblyU2DCSharp_TipController.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// TipConfig
#include "AssemblyU2DCSharp_TipConfigMethodDeclarations.h"
// BoostDesc
#include "AssemblyU2DCSharp_BoostDescMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"


// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2308 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_add_BoostActive_m2309 (BoostConfig_t414 * __this, BoostActiveEventHandler_t427 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t427 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t427 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Combine_m3162(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t427 *)Castclass(L_2, BoostActiveEventHandler_t427_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_remove_BoostActive_m2310 (BoostConfig_t414 * __this, BoostActiveEventHandler_t427 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t427 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t427 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Remove_m3170(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t427 *)Castclass(L_2, BoostActiveEventHandler_t427_il2cpp_TypeInfo_var));
		return;
	}
}
// BoostConfig BoostConfig::get_instance()
extern TypeInfo* BoostConfig_t414_il2cpp_TypeInfo_var;
extern "C" BoostConfig_t414 * BoostConfig_get_instance_m2311 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t414 * L_0 = ((BoostConfig_t414_StaticFields*)BoostConfig_t414_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void BoostConfig::set_instance(BoostConfig)
extern TypeInfo* BoostConfig_t414_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_set_instance_m2312 (Object_t * __this /* static, unused */, BoostConfig_t414 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t414_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(377);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t414 * L_0 = ___value;
		((BoostConfig_t414_StaticFields*)BoostConfig_t414_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2313 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CactiveBoostU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2314 (BoostConfig_t414 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CactiveBoostU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2315 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		BoostConfig_set_instance_m2312(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BoostConfig_set_activeBoost_m2314(__this, 5, /*hidden argument*/NULL);
		BoostConfig_LoadBoostDescs_m2321(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2316 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		BoostConfig_RegisterForEvents_m2318(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2317 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		BoostConfig_UnregisterForEvents_m2319(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var;
extern "C" void BoostConfig_RegisterForEvents_m2318 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var = il2cpp_codegen_method_info_from_index(453);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2480(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var;
extern "C" void BoostConfig_UnregisterForEvents_m2319 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var = il2cpp_codegen_method_info_from_index(453);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2320_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2320 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		BoostConfig_CancelBoosts_m2327(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void BoostConfig::LoadBoostDescs()
extern TypeInfo* BoostDescU5BU5D_t429_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t431_il2cpp_TypeInfo_var;
extern TypeInfo* BoostDesc_t432_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_LoadBoostDescs_m2321 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostDescU5BU5D_t429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		TipConfig_t431_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(380);
		BoostDesc_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(379);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___boostDescs_2 = ((BoostDescU5BU5D_t429*)SZArrayNew(BoostDescU5BU5D_t429_il2cpp_TypeInfo_var, 5));
		BoostDescU5BU5D_t429* L_0 = (__this->___boostDescs_2);
		TipConfig_t431 * L_1 = (TipConfig_t431 *)il2cpp_codegen_object_new (TipConfig_t431_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2963(L_1, (String_t*) &_stringLiteral848, (String_t*) &_stringLiteral849, /*hidden argument*/NULL);
		BoostDesc_t432 * L_2 = (BoostDesc_t432 *)il2cpp_codegen_object_new (BoostDesc_t432_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2333(L_2, (String_t*) &_stringLiteral846, (String_t*) &_stringLiteral847, (String_t*) &_stringLiteral847, (7.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_0, 0)) = (BoostDesc_t432 *)L_2;
		BoostDescU5BU5D_t429* L_3 = (__this->___boostDescs_2);
		TipConfig_t431 * L_4 = (TipConfig_t431 *)il2cpp_codegen_object_new (TipConfig_t431_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2963(L_4, (String_t*) &_stringLiteral852, (String_t*) &_stringLiteral853, /*hidden argument*/NULL);
		BoostDesc_t432 * L_5 = (BoostDesc_t432 *)il2cpp_codegen_object_new (BoostDesc_t432_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2333(L_5, (String_t*) &_stringLiteral850, (String_t*) &_stringLiteral851, (String_t*) &_stringLiteral851, (7.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_3, 1)) = (BoostDesc_t432 *)L_5;
		BoostDescU5BU5D_t429* L_6 = (__this->___boostDescs_2);
		TipConfig_t431 * L_7 = (TipConfig_t431 *)il2cpp_codegen_object_new (TipConfig_t431_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2963(L_7, (String_t*) &_stringLiteral856, (String_t*) &_stringLiteral857, /*hidden argument*/NULL);
		BoostDesc_t432 * L_8 = (BoostDesc_t432 *)il2cpp_codegen_object_new (BoostDesc_t432_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2333(L_8, (String_t*) &_stringLiteral854, (String_t*) &_stringLiteral855, (String_t*) &_stringLiteral855, (7.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_6, 2)) = (BoostDesc_t432 *)L_8;
		BoostDescU5BU5D_t429* L_9 = (__this->___boostDescs_2);
		TipConfig_t431 * L_10 = (TipConfig_t431 *)il2cpp_codegen_object_new (TipConfig_t431_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2963(L_10, (String_t*) &_stringLiteral860, (String_t*) &_stringLiteral861, /*hidden argument*/NULL);
		BoostDesc_t432 * L_11 = (BoostDesc_t432 *)il2cpp_codegen_object_new (BoostDesc_t432_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2333(L_11, (String_t*) &_stringLiteral858, (String_t*) &_stringLiteral859, (String_t*) &_stringLiteral859, (7.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, L_11);
		*((BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_9, 4)) = (BoostDesc_t432 *)L_11;
		BoostDescU5BU5D_t429* L_12 = (__this->___boostDescs_2);
		TipConfig_t431 * L_13 = (TipConfig_t431 *)il2cpp_codegen_object_new (TipConfig_t431_il2cpp_TypeInfo_var);
		TipConfig__ctor_m2963(L_13, (String_t*) &_stringLiteral864, (String_t*) &_stringLiteral865, /*hidden argument*/NULL);
		BoostDesc_t432 * L_14 = (BoostDesc_t432 *)il2cpp_codegen_object_new (BoostDesc_t432_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2333(L_14, (String_t*) &_stringLiteral862, (String_t*) &_stringLiteral863, (String_t*) &_stringLiteral863, (7.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_14);
		*((BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_12, 3)) = (BoostDesc_t432 *)L_14;
		return;
	}
}
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t430 * BoostConfig_GetButtonImageForType_m2322 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t429* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t430 * L_4 = ((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3))->___buttonSprite_0);
		return L_4;
	}
}
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t430 * BoostConfig_GetIntroImageForType_m2323 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t429* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t430 * L_4 = ((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3))->___introScreenSprite_1);
		return L_4;
	}
}
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2324 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t429* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = ((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3))->___boostName_3);
		return L_4;
	}
}
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2325 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t433 * L_0 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___bType;
		NullCheck(L_0);
		int32_t L_2 = PlayerStats_GetPurchasedBoostCount_m2822(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))*(int32_t)((int32_t)((int32_t)L_4+(int32_t)2))))/(int32_t)2));
	}
}
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2326 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t429* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3)));
		float L_4 = ((*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_1, L_3))->___effectiveTime_2);
		return L_4;
	}
}
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2327 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		BoostConfig_CleanupActiveBoost_m2330(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern TypeInfo* SoundController_t555_il2cpp_TypeInfo_var;
extern TypeInfo* TipController_t559_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_ExecuteBoost_m2328 (BoostConfig_t414 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		TipController_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	BoostDesc_t432 * V_2 = {0};
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)5)))
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
		if ((!(((uint32_t)L_1) == ((uint32_t)5))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		GamePhaseState_t466 * L_2 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GamePhaseState_IsPlaying_m2489(L_2, /*hidden argument*/NULL);
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
		BoostConfig_CleanupActiveBoost_m2330(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___bType;
		float L_5 = BoostConfig_GetBoostTime_m2326(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = ___bType;
		BoostConfig_set_activeBoost_m2314(__this, L_7, /*hidden argument*/NULL);
		float L_8 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___activeBoostStartTime_4 = L_8;
		float L_9 = (__this->___activeBoostStartTime_4);
		float L_10 = V_0;
		__this->___activeBoostEndTime_5 = ((float)((float)L_9+(float)L_10));
		SoundController_t555 * L_11 = ((SoundController_t555_StaticFields*)SoundController_t555_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_11);
		bool L_12 = SoundController_get_sfxMuted_m2935(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		SFXPlayer_t541 * L_13 = SFXPlayer_get_instance_m2859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		SFXPlayer_Play_m2864(L_13, 6, /*hidden argument*/NULL);
	}

IL_0074:
	{
		BoostActiveEventHandler_t427 * L_14 = (__this->___BoostActive_7);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		BoostActiveEventHandler_t427 * L_15 = (__this->___BoostActive_7);
		int32_t L_16 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_15, L_16, L_17);
	}

IL_0091:
	{
		float L_18 = V_0;
		Object_t * L_19 = BoostConfig_WaitThenCleanup_m2329(__this, L_18, /*hidden argument*/NULL);
		__this->___activePause_3 = L_19;
		BoostDescU5BU5D_t429* L_20 = (__this->___boostDescs_2);
		int32_t L_21 = ___bType;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(BoostDesc_t432 **)(BoostDesc_t432 **)SZArrayLdElema(L_20, L_22));
		TipController_t559 * L_23 = ((TipController_t559_StaticFields*)TipController_t559_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		BoostDesc_t432 * L_24 = V_2;
		NullCheck(L_24);
		TipConfig_t431 * L_25 = (L_24->___tipConfig_4);
		NullCheck(L_23);
		TipController_MaybeShowTip_m2981(L_23, L_25, /*hidden argument*/NULL);
		Object_t * L_26 = (__this->___activePause_3);
		MonoBehaviour_StartCoroutine_m3122(__this, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern TypeInfo* U3CWaitThenCleanupU3Ec__Iterator10_t428_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2329 (BoostConfig_t414 * __this, float ___pauseTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitThenCleanupU3Ec__Iterator10_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(383);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitThenCleanupU3Ec__Iterator10_t428 * V_0 = {0};
	{
		U3CWaitThenCleanupU3Ec__Iterator10_t428 * L_0 = (U3CWaitThenCleanupU3Ec__Iterator10_t428 *)il2cpp_codegen_object_new (U3CWaitThenCleanupU3Ec__Iterator10_t428_il2cpp_TypeInfo_var);
		U3CWaitThenCleanupU3Ec__Iterator10__ctor_m2302(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitThenCleanupU3Ec__Iterator10_t428 * L_1 = V_0;
		float L_2 = ___pauseTime;
		NullCheck(L_1);
		L_1->___pauseTime_0 = L_2;
		U3CWaitThenCleanupU3Ec__Iterator10_t428 * L_3 = V_0;
		float L_4 = ___pauseTime;
		NullCheck(L_3);
		L_3->___U3CU24U3EpauseTime_3 = L_4;
		U3CWaitThenCleanupU3Ec__Iterator10_t428 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CWaitThenCleanupU3Ec__Iterator10_t428 * L_6 = V_0;
		return L_6;
	}
}
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2330 (BoostConfig_t414 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m3570(__this, L_1, /*hidden argument*/NULL);
		__this->___activePause_3 = (Object_t *)NULL;
	}

IL_001e:
	{
		int32_t L_2 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		BoostConfig_set_activeBoost_m2314(__this, 5, /*hidden argument*/NULL);
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___activeBoostEndTime_5 = L_3;
		float L_4 = V_1;
		__this->___activeBoostStartTime_4 = L_4;
		BoostActiveEventHandler_t427 * L_5 = (__this->___BoostActive_7);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		BoostActiveEventHandler_t427 * L_6 = (__this->___BoostActive_7);
		int32_t L_7 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(10 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_6, L_7, L_8);
	}

IL_005d:
	{
		return;
	}
}
// System.Single BoostConfig::GetActiveBoostFractionUsed()
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2331 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___activeBoostStartTime_4);
		float L_2 = (__this->___activeBoostEndTime_5);
		float L_3 = (__this->___activeBoostStartTime_4);
		return ((float)((float)((float)((float)L_0-(float)L_1))/(float)((float)((float)L_2-(float)L_3))));
	}
}
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2332 (BoostConfig_t414 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2313(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifndef _MSC_VER
#else
#endif

struct Resources_t685;
struct Sprite_t430;
struct String_t;
// UnityEngine.Resources
#include "UnityEngine_UnityEngine_Resources.h"
struct Resources_t685;
struct Object_t;
struct String_t;
// Declaration !!0 UnityEngine.Resources::Load<System.Object>(System.String)
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" Object_t * Resources_Load_TisObject_t_m3572_gshared (Object_t * __this /* static, unused */, String_t* p0, const MethodInfo* method);
#define Resources_Load_TisObject_t_m3572(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m3572_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
// !!0 UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
#define Resources_Load_TisSprite_t430_m3571(__this /* static, unused */, p0, method) (( Sprite_t430 * (*) (Object_t * /* static, unused */, String_t*, const MethodInfo*))Resources_Load_TisObject_t_m3572_gshared)(__this /* static, unused */, p0, method)


// System.Void BoostDesc::.ctor(System.String,System.String,System.String,System.Single,TipConfig)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Resources_Load_TisSprite_t430_m3571_MethodInfo_var;
extern "C" void BoostDesc__ctor_m2333 (BoostDesc_t432 * __this, String_t* ___boostName, String_t* ___buttonImageName, String_t* ___introScreenImageName, float ___effectiveTime, TipConfig_t431 * ___tipConfig, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Resources_Load_TisSprite_t430_m3571_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484102);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buttonImageName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral866, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		Sprite_t430 * L_3 = Resources_Load_TisSprite_t430_m3571(NULL /*static, unused*/, L_2, /*hidden argument*/Resources_Load_TisSprite_t430_m3571_MethodInfo_var);
		__this->___buttonSprite_0 = L_3;
		String_t* L_4 = ___introScreenImageName;
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral867, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		Sprite_t430 * L_7 = Resources_Load_TisSprite_t430_m3571(NULL /*static, unused*/, L_6, /*hidden argument*/Resources_Load_TisSprite_t430_m3571_MethodInfo_var);
		__this->___introScreenSprite_1 = L_7;
		float L_8 = ___effectiveTime;
		__this->___effectiveTime_2 = L_8;
		String_t* L_9 = ___boostName;
		__this->___boostName_3 = L_9;
		TipConfig_t431 * L_10 = ___tipConfig;
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



// System.Void BuyAndUseBoost::.ctor()
extern "C" void BuyAndUseBoost__ctor_m2334 (BuyAndUseBoost_t434 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyAndUseBoost::Start()
extern "C" void BuyAndUseBoost_Start_m2335 (BuyAndUseBoost_t434 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t414 * L_0 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t433 * L_1 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyAndUseBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var;
extern "C" void BuyAndUseBoost_BuyAndUse_m2336 (BuyAndUseBoost_t434 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t419 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		BoostConfig_t414 * L_0 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2332(L_0, /*hidden argument*/NULL);
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
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButton_t419 * L_3 = GameObject_GetComponent_TisBoostButton_t419_m3562(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var);
		V_0 = L_3;
		BoostButton_t419 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = BoostButton_GetBoostType_m2280(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		BoostConfig_t414 * L_6 = (__this->___boostConfig_2);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = BoostConfig_GetCurrentPriceForBoost_m2325(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		PlayerStats_t433 * L_9 = (__this->___playerStats_3);
		int32_t L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = PlayerStats_CanAfford_m2817(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		PlayerStats_t433 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_1;
		NullCheck(L_12);
		PlayerStats_AddBoost_m2824(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t433 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_2;
		NullCheck(L_14);
		PlayerStats_SpendTreats_m2819(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0059:
	{
		PlayerStats_t433 * L_16 = (__this->___playerStats_3);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		PlayerStats_RemoveBoost_m2825(L_16, L_17, /*hidden argument*/NULL);
		BoostConfig_t414 * L_18 = (__this->___boostConfig_2);
		int32_t L_19 = V_1;
		NullCheck(L_18);
		BoostConfig_ExecuteBoost_m2328(L_18, L_19, /*hidden argument*/NULL);
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
extern "C" void BuyBoost__ctor_m2337 (BuyBoost_t435 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BuyBoost::Start()
extern "C" void BuyBoost_Start_m2338 (BuyBoost_t435 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t414 * L_0 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_2 = L_0;
		PlayerStats_t433 * L_1 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___playerStats_3 = L_1;
		return;
	}
}
// System.Void BuyBoost::BuyAndUse()
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var;
extern "C" void BuyBoost_BuyAndUse_m2339 (BuyBoost_t435 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t419 * V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = 0;
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostButton_t419 * L_1 = GameObject_GetComponent_TisBoostButton_t419_m3562(L_0, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t419_m3562_MethodInfo_var);
		V_0 = L_1;
		BoostButton_t419 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = BoostButton_GetBoostType_m2280(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		BoostConfig_t414 * L_4 = (__this->___boostConfig_2);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = BoostConfig_GetCurrentPriceForBoost_m2325(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		PlayerStats_t433 * L_7 = (__this->___playerStats_3);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = PlayerStats_CanAfford_m2817(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		PlayerStats_t433 * L_10 = (__this->___playerStats_3);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		PlayerStats_AddBoost_m2824(L_10, L_11, /*hidden argument*/NULL);
		PlayerStats_t433 * L_12 = (__this->___playerStats_3);
		int32_t L_13 = V_2;
		NullCheck(L_12);
		PlayerStats_SpendTreats_m2819(L_12, L_13, /*hidden argument*/NULL);
		PlayerStats_t433 * L_14 = (__this->___playerStats_3);
		int32_t L_15 = V_1;
		NullCheck(L_14);
		PlayerStats_RemoveBoost_m2825(L_14, L_15, /*hidden argument*/NULL);
		BoostConfig_t414 * L_16 = (__this->___boostConfig_2);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		BoostConfig_ExecuteBoost_m2328(L_16, L_17, /*hidden argument*/NULL);
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



// System.Void CatBodyHitDetection::.ctor()
extern "C" void CatBodyHitDetection__ctor_m2340 (CatBodyHitDetection_t436 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CatBodyHitDetection::OnMouseDown()
extern "C" void CatBodyHitDetection_OnMouseDown_m2341 (CatBodyHitDetection_t436 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral868, /*hidden argument*/NULL);
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
// UnityEngine.Mesh
#include "UnityEngine_UnityEngine_MeshMethodDeclarations.h"
// UnityEngine.MeshFilter
#include "UnityEngine_UnityEngine_MeshFilterMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct GameObject_t310;
struct MeshRenderer_t686;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
#define GameObject_AddComponent_TisMeshRenderer_t686_m3573(__this, method) (( MeshRenderer_t686 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)
struct GameObject_t310;
struct MeshFilter_t687;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
#define GameObject_AddComponent_TisMeshFilter_t687_m3574(__this, method) (( MeshFilter_t687 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3262_gshared)(__this, method)
struct GameObject_t310;
struct MeshRenderer_t686;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t686_m3575(__this, method) (( MeshRenderer_t686 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void ConeOfViewRenderer::.ctor()
extern "C" void ConeOfViewRenderer__ctor_m2342 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	{
		__this->___numTriangles_4 = ((int32_t)20);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single ConeOfViewRenderer::get_actualAngleRange()
extern "C" float ConeOfViewRenderer_get_actualAngleRange_m2343 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CactualAngleRangeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ConeOfViewRenderer::set_actualAngleRange(System.Single)
extern "C" void ConeOfViewRenderer_set_actualAngleRange_m2344 (ConeOfViewRenderer_t439 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CactualAngleRangeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void ConeOfViewRenderer::Awake()
extern "C" void ConeOfViewRenderer_Awake_m2345 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	{
		__this->___registeredForEvents_6 = 0;
		return;
	}
}
// System.Void ConeOfViewRenderer::Start()
extern TypeInfo* Mesh_t437_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshRenderer_t686_m3573_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisMeshFilter_t687_m3574_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t686_m3575_MethodInfo_var;
extern "C" void ConeOfViewRenderer_Start_m2346 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mesh_t437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(387);
		GameObject_AddComponent_TisMeshRenderer_t686_m3573_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484103);
		GameObject_AddComponent_TisMeshFilter_t687_m3574_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484104);
		GameObject_GetComponent_TisMeshRenderer_t686_m3575_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484105);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t686 * V_0 = {0};
	{
		BoostConfig_t414 * L_0 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_5 = L_0;
		Mesh_t437 * L_1 = (Mesh_t437 *)il2cpp_codegen_object_new (Mesh_t437_il2cpp_TypeInfo_var);
		Mesh__ctor_m3576(L_1, /*hidden argument*/NULL);
		__this->___viewMesh_2 = L_1;
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisMeshRenderer_t686_m3573(L_2, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t686_m3573_MethodInfo_var);
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MeshFilter_t687 * L_4 = GameObject_AddComponent_TisMeshFilter_t687_m3574(L_3, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t687_m3574_MethodInfo_var);
		Mesh_t437 * L_5 = (__this->___viewMesh_2);
		NullCheck(L_4);
		MeshFilter_set_mesh_m3577(L_4, L_5, /*hidden argument*/NULL);
		GameObject_t310 * L_6 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		MeshRenderer_t686 * L_7 = GameObject_GetComponent_TisMeshRenderer_t686_m3575(L_6, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t686_m3575_MethodInfo_var);
		V_0 = L_7;
		MeshRenderer_t686 * L_8 = V_0;
		Material_t438 * L_9 = (__this->___viewMaterial_3);
		NullCheck(L_8);
		Renderer_set_material_m3408(L_8, L_9, /*hidden argument*/NULL);
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m2351(__this, (90.0f), /*hidden argument*/NULL);
		ConeOfViewRenderer_RegisterForEvents_m2348(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::OnDestroy()
extern "C" void ConeOfViewRenderer_OnDestroy_m2347 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	{
		ConeOfViewRenderer_UnregisterForEvents_m2349(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ConeOfViewRenderer::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var;
extern "C" void ConeOfViewRenderer_RegisterForEvents_m2348 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var = il2cpp_codegen_method_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t414 * L_0 = (__this->___boostConfig_5);
		IntPtr_t L_1 = { (void*)ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_2 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2309(L_0, L_2, /*hidden argument*/NULL);
		__this->___registeredForEvents_6 = 1;
		return;
	}
}
// System.Void ConeOfViewRenderer::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t427_il2cpp_TypeInfo_var;
extern const MethodInfo* ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var;
extern "C" void ConeOfViewRenderer_UnregisterForEvents_m2349 (ConeOfViewRenderer_t439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t427_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(359);
		ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var = il2cpp_codegen_method_info_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_6);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		BoostConfig_t414 * L_1 = (__this->___boostConfig_5);
		IntPtr_t L_2 = { (void*)ConeOfViewRenderer_OnBoostUsageChanged_m2350_MethodInfo_var };
		BoostActiveEventHandler_t427 * L_3 = (BoostActiveEventHandler_t427 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t427_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2298(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2310(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void ConeOfViewRenderer::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void ConeOfViewRenderer_OnBoostUsageChanged_m2350 (ConeOfViewRenderer_t439 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		int32_t L_0 = ___newType;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m2351(__this, (149.994f), /*hidden argument*/NULL);
		goto IL_0029;
	}

IL_0017:
	{
		int32_t L_1 = ___oldType;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0029;
		}
	}
	{
		ConeOfViewRenderer_CreateViewMeshForAngleRange_m2351(__this, (90.0f), /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void ConeOfViewRenderer::CreateViewMeshForAngleRange(System.Single)
extern TypeInfo* Vector3U5BU5D_t688_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t624_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t495_il2cpp_TypeInfo_var;
extern "C" void ConeOfViewRenderer_CreateViewMeshForAngleRange_m2351 (ConeOfViewRenderer_t439 * __this, float ___angleRange, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector3U5BU5D_t688_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		Mathf_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		Int32U5BU5D_t495_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3U5BU5D_t688* V_1 = {0};
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Int32U5BU5D_t495* V_4 = {0};
	int32_t V_5 = 0;
	{
		float L_0 = ___angleRange;
		ConeOfViewRenderer_set_actualAngleRange_m2344(__this, L_0, /*hidden argument*/NULL);
		float L_1 = ___angleRange;
		int32_t L_2 = (__this->___numTriangles_4);
		V_0 = ((float)((float)L_1/(float)(((float)L_2))));
		int32_t L_3 = (__this->___numTriangles_4);
		V_1 = ((Vector3U5BU5D_t688*)SZArrayNew(Vector3U5BU5D_t688_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_3+(int32_t)2))));
		Vector3U5BU5D_t688* L_4 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_4, 0))->___x_1 = (0.0f);
		Vector3U5BU5D_t688* L_5 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_5, 0))->___y_2 = (0.0f);
		Vector3U5BU5D_t688* L_6 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_6, 0))->___z_3 = (0.0f);
		V_3 = 0;
		goto IL_00be;
	}

IL_0059:
	{
		float L_7 = ___angleRange;
		int32_t L_8 = V_3;
		float L_9 = V_0;
		V_2 = ((float)((float)((float)((float)((-L_7))/(float)(2.0f)))+(float)((float)((float)(((float)L_8))*(float)L_9))));
		Vector3U5BU5D_t688* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)));
		float L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t624_il2cpp_TypeInfo_var);
		float L_13 = sinf(((float)((float)(0.0174532924f)*(float)L_12)));
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_10, ((int32_t)((int32_t)L_11+(int32_t)1))))->___y_2 = ((float)((float)L_13*(float)(4.1f)));
		Vector3U5BU5D_t688* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)((int32_t)L_15+(int32_t)1)));
		float L_16 = V_2;
		float L_17 = cosf(((float)((float)(0.0174532924f)*(float)L_16)));
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_14, ((int32_t)((int32_t)L_15+(int32_t)1))))->___x_1 = ((float)((float)L_17*(float)(4.1f)));
		Vector3U5BU5D_t688* L_18 = V_1;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)((int32_t)L_19+(int32_t)1)));
		((Vector3_t449 *)(Vector3_t449 *)SZArrayLdElema(L_18, ((int32_t)((int32_t)L_19+(int32_t)1))))->___z_3 = (0.0f);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00be:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = (__this->___numTriangles_4);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)L_22+(int32_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_23 = (__this->___numTriangles_4);
		V_4 = ((Int32U5BU5D_t495*)SZArrayNew(Int32U5BU5D_t495_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_23*(int32_t)3))));
		V_5 = 0;
		goto IL_010b;
	}

IL_00e3:
	{
		Int32U5BU5D_t495* L_24 = V_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)L_25*(int32_t)3)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_24, ((int32_t)((int32_t)L_25*(int32_t)3)))) = (int32_t)0;
		Int32U5BU5D_t495* L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = V_5;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)3))+(int32_t)1)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_26, ((int32_t)((int32_t)((int32_t)((int32_t)L_27*(int32_t)3))+(int32_t)1)))) = (int32_t)((int32_t)((int32_t)L_28+(int32_t)2));
		Int32U5BU5D_t495* L_29 = V_4;
		int32_t L_30 = V_5;
		int32_t L_31 = V_5;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)3))+(int32_t)2)));
		*((int32_t*)(int32_t*)SZArrayLdElema(L_29, ((int32_t)((int32_t)((int32_t)((int32_t)L_30*(int32_t)3))+(int32_t)2)))) = (int32_t)((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_5;
		V_5 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_010b:
	{
		int32_t L_33 = V_5;
		int32_t L_34 = (__this->___numTriangles_4);
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_00e3;
		}
	}
	{
		Mesh_t437 * L_35 = (__this->___viewMesh_2);
		Vector3U5BU5D_t688* L_36 = V_1;
		NullCheck(L_35);
		Mesh_set_vertices_m3578(L_35, L_36, /*hidden argument*/NULL);
		Mesh_t437 * L_37 = (__this->___viewMesh_2);
		Int32U5BU5D_t495* L_38 = V_4;
		NullCheck(L_37);
		Mesh_set_triangles_m3579(L_37, L_38, /*hidden argument*/NULL);
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



// System.Void CrossSceneState::.ctor()
extern "C" void CrossSceneState__ctor_m2352 (CrossSceneState_t440 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// CrossSceneState CrossSceneState::get_instance()
extern TypeInfo* CrossSceneState_t440_il2cpp_TypeInfo_var;
extern "C" CrossSceneState_t440 * CrossSceneState_get_instance_m2353 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t440 * L_0 = ((CrossSceneState_t440_StaticFields*)CrossSceneState_t440_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CrossSceneState::set_instance(CrossSceneState)
extern TypeInfo* CrossSceneState_t440_il2cpp_TypeInfo_var;
extern "C" void CrossSceneState_set_instance_m2354 (Object_t * __this /* static, unused */, CrossSceneState_t440 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossSceneState_t440_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(391);
		s_Il2CppMethodIntialized = true;
	}
	{
		CrossSceneState_t440 * L_0 = ___value;
		((CrossSceneState_t440_StaticFields*)CrossSceneState_t440_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void CrossSceneState::Awake()
extern "C" void CrossSceneState_Awake_m2355 (CrossSceneState_t440 * __this, const MethodInfo* method)
{
	{
		CrossSceneState_set_instance_m2354(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m3190(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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

// MouseMove
#include "AssemblyU2DCSharp_MouseMove.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"
// MouseConfig/MouseType
#include "AssemblyU2DCSharp_MouseConfig_MouseType.h"
// MouseMove
#include "AssemblyU2DCSharp_MouseMoveMethodDeclarations.h"
// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRendererMethodDeclarations.h"
struct Component_t659;
struct SpriteRenderer_t510;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t510_m3580(__this, method) (( SpriteRenderer_t510 * (*) (Component_t659 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3401_gshared)(__this, method)


// System.Void DeadMouse::.ctor()
extern "C" void DeadMouse__ctor_m2356 (DeadMouse_t442 * __this, const MethodInfo* method)
{
	{
		__this->___deadMouseZ_3 = (-1.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DeadMouse::Start()
extern TypeInfo* SoundController_t555_il2cpp_TypeInfo_var;
extern "C" void DeadMouse_Start_m2357 (DeadMouse_t442 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(381);
		s_Il2CppMethodIntialized = true;
	}
	{
		SoundController_t555 * L_0 = ((SoundController_t555_StaticFields*)SoundController_t555_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_0);
		bool L_1 = SoundController_get_sfxMuted_m2935(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		SFXPlayer_t541 * L_2 = SFXPlayer_get_instance_m2859(NULL /*static, unused*/, /*hidden argument*/NULL);
		SFXPlayer_t541 * L_3 = SFXPlayer_get_instance_m2859(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		SFXTypeU5BU5D_t540* L_4 = (L_3->___deadMouseIds_4);
		NullCheck(L_2);
		SFXPlayer_PlayRandom_m2866(L_2, L_4, (0.2f), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DeadMouse::Update()
extern "C" void DeadMouse_Update_m2358 (DeadMouse_t442 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DeadMouse::Configure(MouseMove)
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t510_m3580_MethodInfo_var;
extern "C" void DeadMouse_Configure_m2359 (DeadMouse_t442 * __this, MouseMove_t512 * ___parentMouse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisSpriteRenderer_t510_m3580_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484107);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	SpriteRenderer_t510 * V_1 = {0};
	Vector3_t449  V_2 = {0};
	{
		MouseMove_t512 * L_0 = ___parentMouse;
		NullCheck(L_0);
		int32_t L_1 = MouseMove_get_mouseType_m2637(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		SpriteRenderer_t510 * L_2 = Component_GetComponent_TisSpriteRenderer_t510_m3580(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t510_m3580_MethodInfo_var);
		V_1 = L_2;
		SpriteRenderer_t510 * L_3 = V_1;
		SpriteU5BU5D_t441* L_4 = (__this->___baseSprites_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		SpriteRenderer_set_sprite_m3581(L_3, (*(Sprite_t430 **)(Sprite_t430 **)SZArrayLdElema(L_4, L_6)), /*hidden argument*/NULL);
		MouseMove_t512 * L_7 = ___parentMouse;
		NullCheck(L_7);
		GameObject_t310 * L_8 = Component_get_gameObject_m3159(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t364 * L_9 = GameObject_get_transform_m3444(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t449  L_10 = Transform_get_position_m3446(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		float L_11 = (__this->___deadMouseZ_3);
		(&V_2)->___z_3 = L_11;
		Transform_t364 * L_12 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		Vector3_t449  L_13 = V_2;
		NullCheck(L_12);
		Transform_set_position_m3448(L_12, L_13, /*hidden argument*/NULL);
		Transform_t364 * L_14 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		MouseMove_t512 * L_15 = ___parentMouse;
		NullCheck(L_15);
		GameObject_t310 * L_16 = Component_get_gameObject_m3159(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t364 * L_17 = GameObject_get_transform_m3444(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t682  L_18 = Transform_get_rotation_m3582(L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m3552(L_14, L_18, /*hidden argument*/NULL);
		Transform_t364 * L_19 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		MouseMove_t512 * L_20 = ___parentMouse;
		NullCheck(L_20);
		GameObject_t310 * L_21 = Component_get_gameObject_m3159(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t364 * L_22 = GameObject_get_transform_m3444(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t449  L_23 = Transform_get_localScale_m3449(L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_m3450(L_19, L_23, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void DebugConfig::.ctor()
extern "C" void DebugConfig__ctor_m2360 (DebugConfig_t443 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DebugConfig::get_useDebugValues()
extern "C" bool DebugConfig_get_useDebugValues_m2361 (DebugConfig_t443 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CuseDebugValuesU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void DebugConfig::set_useDebugValues(System.Boolean)
extern "C" void DebugConfig_set_useDebugValues_m2362 (DebugConfig_t443 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CuseDebugValuesU3Ek__BackingField_4 = L_0;
		return;
	}
}
// DebugConfig DebugConfig::get_instance()
extern TypeInfo* DebugConfig_t443_il2cpp_TypeInfo_var;
extern "C" DebugConfig_t443 * DebugConfig_get_instance_m2363 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t443 * L_0 = ((DebugConfig_t443_StaticFields*)DebugConfig_t443_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void DebugConfig::set_instance(DebugConfig)
extern TypeInfo* DebugConfig_t443_il2cpp_TypeInfo_var;
extern "C" void DebugConfig_set_instance_m2364 (Object_t * __this /* static, unused */, DebugConfig_t443 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebugConfig_t443_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t443 * L_0 = ___value;
		((DebugConfig_t443_StaticFields*)DebugConfig_t443_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void DebugConfig::Awake()
extern "C" void DebugConfig_Awake_m2365 (DebugConfig_t443 * __this, const MethodInfo* method)
{
	{
		DebugConfig_set_useDebugValues_m2362(__this, 0, /*hidden argument*/NULL);
		DebugConfig_set_instance_m2364(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugConfig::Start()
extern "C" void DebugConfig_Start_m2366 (DebugConfig_t443 * __this, const MethodInfo* method)
{
	{
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


// System.Void DebugLogPropagate::.ctor()
extern "C" void DebugLogPropagate__ctor_m2367 (DebugLogPropagate_t444 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::LogInIOS(System.String)
extern "C" {void DEFAULT_CALL LogInIOS(char*);}
extern "C" void DebugLogPropagate_LogInIOS_m2368 (Object_t * __this /* static, unused */, String_t* ___testArg, const MethodInfo* method)
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
extern TypeInfo* LogCallback_t689_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m2371_MethodInfo_var;
extern "C" void DebugLogPropagate_OnEnable_m2369 (DebugLogPropagate_t444 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		DebugLogPropagate_HandleLog_m2371_MethodInfo_var = il2cpp_codegen_method_info_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2371_MethodInfo_var };
		LogCallback_t689 * L_1 = (LogCallback_t689 *)il2cpp_codegen_object_new (LogCallback_t689_il2cpp_TypeInfo_var);
		LogCallback__ctor_m3583(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m3584(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::OnDisable()
extern TypeInfo* LogCallback_t689_il2cpp_TypeInfo_var;
extern const MethodInfo* DebugLogPropagate_HandleLog_m2371_MethodInfo_var;
extern "C" void DebugLogPropagate_OnDisable_m2370 (DebugLogPropagate_t444 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogCallback_t689_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(394);
		DebugLogPropagate_HandleLog_m2371_MethodInfo_var = il2cpp_codegen_method_info_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)DebugLogPropagate_HandleLog_m2371_MethodInfo_var };
		LogCallback_t689 * L_1 = (LogCallback_t689 *)il2cpp_codegen_object_new (LogCallback_t689_il2cpp_TypeInfo_var);
		LogCallback__ctor_m3583(L_1, __this, L_0, /*hidden argument*/NULL);
		Application_remove_logMessageReceived_m3585(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DebugLogPropagate::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* LogType_t690_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void DebugLogPropagate_HandleLog_m2371 (DebugLogPropagate_t444 * __this, String_t* ___condition, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogType_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___type;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(LogType_t690_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = ___condition;
		String_t* L_4 = ___stackTrace;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m3586(NULL /*static, unused*/, (String_t*) &_stringLiteral869, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = Application_get_platform_m3172(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral870, L_7, /*hidden argument*/NULL);
		DebugLogPropagate_LogInIOS_m2368(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
// DestroyByCollision
#include "AssemblyU2DCSharp_DestroyByCollision.h"
#ifndef _MSC_VER
#else
#endif
// DestroyByCollision
#include "AssemblyU2DCSharp_DestroyByCollisionMethodDeclarations.h"

// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// PawController
#include "AssemblyU2DCSharp_PawController.h"
// GameController
#include "AssemblyU2DCSharp_GameController.h"
// PawController
#include "AssemblyU2DCSharp_PawControllerMethodDeclarations.h"
// GameController
#include "AssemblyU2DCSharp_GameControllerMethodDeclarations.h"
struct Utilities_t571;
struct MouseMove_t512;
struct GameObject_t310;
// Utilities
#include "AssemblyU2DCSharp_Utilities.h"
struct Utilities_t571;
struct Object_t;
struct GameObject_t310;
// Declaration !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<System.Object>(UnityEngine.GameObject)
extern "C" Object_t * Utilities_FindComponentInAncestor_TisObject_t_m3588_gshared (Object_t * __this /* static, unused */, GameObject_t310 * p0, const MethodInfo* method);
#define Utilities_FindComponentInAncestor_TisObject_t_m3588(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, GameObject_t310 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3588_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
// !!0 Utilities::FindComponentInAncestor<MouseMove>(UnityEngine.GameObject)
#define Utilities_FindComponentInAncestor_TisMouseMove_t512_m3587(__this /* static, unused */, p0, method) (( MouseMove_t512 * (*) (Object_t * /* static, unused */, GameObject_t310 *, const MethodInfo*))Utilities_FindComponentInAncestor_TisObject_t_m3588_gshared)(__this /* static, unused */, p0, method)


// System.Void DestroyByCollision::.ctor()
extern "C" void DestroyByCollision__ctor_m2372 (DestroyByCollision_t446 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerEnter2D_m2373 (DestroyByCollision_t446 * __this, Collider2D_t523 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t523 * L_0 = ___other;
		DestroyByCollision_HandleCollision_m2375(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::OnTriggerStay2D(UnityEngine.Collider2D)
extern "C" void DestroyByCollision_OnTriggerStay2D_m2374 (DestroyByCollision_t446 * __this, Collider2D_t523 * ___other, const MethodInfo* method)
{
	{
		Collider2D_t523 * L_0 = ___other;
		DestroyByCollision_HandleCollision_m2375(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DestroyByCollision::HandleCollision(UnityEngine.Collider2D)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t571_il2cpp_TypeInfo_var;
extern const MethodInfo* Utilities_FindComponentInAncestor_TisMouseMove_t512_m3587_MethodInfo_var;
extern "C" void DestroyByCollision_HandleCollision_m2375 (DestroyByCollision_t446 * __this, Collider2D_t523 * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Utilities_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		Utilities_FindComponentInAncestor_TisMouseMove_t512_m3587_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484109);
		s_Il2CppMethodIntialized = true;
	}
	MouseMove_t512 * V_0 = {0};
	{
		Collider2D_t523 * L_0 = ___other;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m3589(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Inequality_m181(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral871, /*hidden argument*/NULL);
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
		Collider2D_t523 * L_3 = ___other;
		NullCheck(L_3);
		GameObject_t310 * L_4 = Component_get_gameObject_m3159(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t571_il2cpp_TypeInfo_var);
		MouseMove_t512 * L_5 = Utilities_FindComponentInAncestor_TisMouseMove_t512_m3587(NULL /*static, unused*/, L_4, /*hidden argument*/Utilities_FindComponentInAncestor_TisMouseMove_t512_m3587_MethodInfo_var);
		V_0 = L_5;
		MouseMove_t512 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = MouseMove_get_dead_m2639(L_6, /*hidden argument*/NULL);
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
		BoostConfig_t414 * L_8 = BoostConfig_get_instance_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = BoostConfig_get_activeBoost_m2313(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_0054;
		}
	}
	{
		MouseMove_t512 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = MouseMove_get_isPoisoned_m2641(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		MouseMove_t512 * L_12 = V_0;
		NullCheck(L_12);
		MouseMove_SetPoisoned_m2652(L_12, /*hidden argument*/NULL);
	}

IL_004f:
	{
		goto IL_0071;
	}

IL_0054:
	{
		MouseMove_t512 * L_13 = V_0;
		NullCheck(L_13);
		MouseMove_OnKilled_m2661(L_13, /*hidden argument*/NULL);
		PawController_t445 * L_14 = (__this->___pawController_2);
		MouseMove_t512 * L_15 = V_0;
		NullCheck(L_14);
		PawController_CountKill_m2749(L_14, L_15, /*hidden argument*/NULL);
		GameController_t460 * L_16 = GameController_get_instance_m2429(NULL /*static, unused*/, /*hidden argument*/NULL);
		MouseMove_t512 * L_17 = V_0;
		NullCheck(L_16);
		GameController_OnMouseKilled_m2446(L_16, L_17, /*hidden argument*/NULL);
	}

IL_0071:
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
extern "C" void DialogController__ctor_m2376 (DialogController_t447 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::Awake()
extern TypeInfo* DialogController_t447_il2cpp_TypeInfo_var;
extern "C" void DialogController_Awake_m2377 (DialogController_t447 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DialogController_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		((DialogController_t447_StaticFields*)DialogController_t447_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		return;
	}
}
// System.Void DialogController::ShowDialog(UnityEngine.GameObject)
extern TypeInfo* PausedOverlay_t521_il2cpp_TypeInfo_var;
extern TypeInfo* TimeController_t557_il2cpp_TypeInfo_var;
extern "C" void DialogController_ShowDialog_m2378 (DialogController_t447 * __this, GameObject_t310 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PausedOverlay_t521_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		TimeController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t310 * L_0 = ___dialog;
		__this->___activeDialog_3 = L_0;
		PausedOverlay_t521 * L_1 = ((PausedOverlay_t521_StaticFields*)PausedOverlay_t521_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		GameObject_t310 * L_2 = ___dialog;
		NullCheck(L_1);
		PausedOverlay_SetChildElement_m2733(L_1, L_2, /*hidden argument*/NULL);
		TimeController_t557 * L_3 = ((TimeController_t557_StaticFields*)TimeController_t557_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_PauseTime_m2957(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DialogController::HideDialog(UnityEngine.GameObject)
extern TypeInfo* TimeController_t557_il2cpp_TypeInfo_var;
extern "C" void DialogController_HideDialog_m2379 (DialogController_t447 * __this, GameObject_t310 * ___dialog, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t310 * L_0 = ___dialog;
		GameObject_t310 * L_1 = (__this->___activeDialog_3);
		bool L_2 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
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
		__this->___activeDialog_3 = (GameObject_t310 *)NULL;
		TimeController_t557 * L_3 = ((TimeController_t557_StaticFields*)TimeController_t557_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_3);
		TimeController_UnPauseTime_m2958(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean DialogController::IsDialogShowing()
extern "C" bool DialogController_IsDialogShowing_m2380 (DialogController_t447 * __this, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = (__this->___activeDialog_3);
		bool L_1 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void DistortForEffect::.ctor()
extern "C" void DistortForEffect__ctor_m2381 (DistortForEffect_t448 * __this, const MethodInfo* method)
{
	{
		__this->___distortPeriod_4 = (0.3f);
		__this->___distortScale_5 = (1.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Start()
extern "C" void DistortForEffect_Start_m2382 (DistortForEffect_t448 * __this, const MethodInfo* method)
{
	{
		__this->___distorting_2 = 0;
		Transform_t364 * L_0 = (__this->___thingToScale_6);
		bool L_1 = Object_op_Equality_m3185(NULL /*static, unused*/, L_0, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t364 * L_3 = GameObject_get_transform_m3444(L_2, /*hidden argument*/NULL);
		__this->___thingToScale_6 = L_3;
	}

IL_0029:
	{
		Transform_t364 * L_4 = (__this->___thingToScale_6);
		NullCheck(L_4);
		Vector3_t449  L_5 = Transform_get_localScale_m3449(L_4, /*hidden argument*/NULL);
		__this->___originalScale_7 = L_5;
		return;
	}
}
// System.Void DistortForEffect::Distort()
extern "C" void DistortForEffect_Distort_m2383 (DistortForEffect_t448 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___distorting_2);
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
		float L_1 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___startDistortTime_3 = L_1;
		__this->___distorting_2 = 1;
		return;
	}
}
// System.Void DistortForEffect::Cancel()
extern "C" void DistortForEffect_Cancel_m2384 (DistortForEffect_t448 * __this, const MethodInfo* method)
{
	{
		__this->___distorting_2 = 0;
		Transform_t364 * L_0 = (__this->___thingToScale_6);
		Vector3_t449  L_1 = (__this->___originalScale_7);
		NullCheck(L_0);
		Transform_set_localScale_m3450(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DistortForEffect::Update()
extern TypeInfo* Mathf_t624_il2cpp_TypeInfo_var;
extern "C" void DistortForEffect_Update_m2385 (DistortForEffect_t448 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(152);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		bool L_0 = (__this->___distorting_2);
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
		float L_1 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		float L_3 = (__this->___startDistortTime_3);
		V_1 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_1;
		float L_5 = (__this->___distortPeriod_4);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0039;
		}
	}
	{
		V_2 = (1.0f);
		__this->___distorting_2 = 0;
		goto IL_0080;
	}

IL_0039:
	{
		float L_6 = V_1;
		float L_7 = (__this->___distortPeriod_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t624_il2cpp_TypeInfo_var);
		float L_8 = sinf(((float)((float)((float)((float)((float)((float)L_6*(float)(2.0f)))*(float)(3.14159274f)))/(float)L_7)));
		V_3 = L_8;
		float L_9 = V_1;
		float L_10 = (__this->___distortPeriod_4);
		float L_11 = cosf(((float)((float)((float)((float)((float)((float)L_9*(float)(0.5f)))*(float)(3.14159274f)))/(float)L_10)));
		V_4 = L_11;
		float L_12 = V_3;
		float L_13 = V_4;
		float L_14 = (__this->___distortScale_5);
		V_2 = ((float)((float)(1.0f)+(float)((float)((float)((float)((float)L_12*(float)L_13))*(float)L_14))));
	}

IL_0080:
	{
		Transform_t364 * L_15 = (__this->___thingToScale_6);
		float L_16 = V_2;
		Vector3_t449 * L_17 = &(__this->___originalScale_7);
		float L_18 = (L_17->___x_1);
		float L_19 = V_2;
		Vector3_t449 * L_20 = &(__this->___originalScale_7);
		float L_21 = (L_20->___y_2);
		float L_22 = V_2;
		Vector3_t449 * L_23 = &(__this->___originalScale_7);
		float L_24 = (L_23->___z_3);
		Vector3_t449  L_25 = {0};
		Vector3__ctor_m3439(&L_25, ((float)((float)L_16*(float)L_18)), ((float)((float)L_19*(float)L_21)), ((float)((float)L_22*(float)L_24)), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m3450(L_15, L_25, /*hidden argument*/NULL);
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
// MouseHole/MouseHoleLocation
#include "AssemblyU2DCSharp_MouseHole_MouseHoleLocation.h"
// MouseWiggleDesc
#include "AssemblyU2DCSharp_MouseWiggleDesc.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfig.h"
// MouseConfig
#include "AssemblyU2DCSharp_MouseConfigMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"


// System.Void ExplicitMouseDesc::.ctor(System.Single,System.Boolean,MouseHole/MouseHoleLocation,MouseConfig/MouseType,System.Int32,MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc__ctor_m2386 (ExplicitMouseDesc_t450 * __this, float ___pause, bool ___isClockwise, int32_t ___location, int32_t ___mType, int32_t ___track, int32_t ___wType, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		float L_0 = ___pause;
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
		ExplicitMouseDesc_AddWiggle_m2395(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// MouseConfig/MouseWiggleType ExplicitMouseDesc::get_wiggleType()
extern "C" int32_t ExplicitMouseDesc_get_wiggleType_m2387 (ExplicitMouseDesc_t450 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleTypeU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleType(MouseConfig/MouseWiggleType)
extern "C" void ExplicitMouseDesc_set_wiggleType_m2388 (ExplicitMouseDesc_t450 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleTypeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Single ExplicitMouseDesc::get_wiggleMagnitude()
extern "C" float ExplicitMouseDesc_get_wiggleMagnitude_m2389 (ExplicitMouseDesc_t450 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___U3CwiggleMagnitudeU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleMagnitude(System.Single)
extern "C" void ExplicitMouseDesc_set_wiggleMagnitude_m2390 (ExplicitMouseDesc_t450 * __this, float ___value, const MethodInfo* method)
{
	{
		float L_0 = ___value;
		__this->___U3CwiggleMagnitudeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int32 ExplicitMouseDesc::get_wiggleCycles()
extern "C" int32_t ExplicitMouseDesc_get_wiggleCycles_m2391 (ExplicitMouseDesc_t450 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CwiggleCyclesU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleCycles(System.Int32)
extern "C" void ExplicitMouseDesc_set_wiggleCycles_m2392 (ExplicitMouseDesc_t450 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CwiggleCyclesU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean ExplicitMouseDesc::get_wiggleClockwise()
extern "C" bool ExplicitMouseDesc_get_wiggleClockwise_m2393 (ExplicitMouseDesc_t450 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CwiggleClockwiseU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void ExplicitMouseDesc::set_wiggleClockwise(System.Boolean)
extern "C" void ExplicitMouseDesc_set_wiggleClockwise_m2394 (ExplicitMouseDesc_t450 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CwiggleClockwiseU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void ExplicitMouseDesc::AddWiggle(MouseConfig/MouseWiggleType)
extern TypeInfo* MouseConfig_t504_il2cpp_TypeInfo_var;
extern "C" void ExplicitMouseDesc_AddWiggle_m2395 (ExplicitMouseDesc_t450 * __this, int32_t ___wt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseConfig_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	MouseWiggleDesc_t515 * V_0 = {0};
	{
		int32_t L_0 = ___wt;
		ExplicitMouseDesc_set_wiggleType_m2388(__this, L_0, /*hidden argument*/NULL);
		MouseConfig_t504 * L_1 = ((MouseConfig_t504_StaticFields*)MouseConfig_t504_il2cpp_TypeInfo_var->static_fields)->___instance_29;
		int32_t L_2 = ___wt;
		NullCheck(L_1);
		MouseWiggleDesc_t515 * L_3 = MouseConfig_GetWiggleDesc_m2601(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		MouseWiggleDesc_t515 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		MouseWiggleDesc_t515 * L_5 = V_0;
		NullCheck(L_5);
		float L_6 = (L_5->___minMagnitude_1);
		MouseWiggleDesc_t515 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = (L_7->___maxMagnitude_2);
		float L_9 = Random_Range_m3590(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleMagnitude_m2390(__this, L_9, /*hidden argument*/NULL);
		MouseWiggleDesc_t515 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (L_10->___minCycles_3);
		MouseWiggleDesc_t515 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___maxCycles_4);
		int32_t L_14 = Random_Range_m3168(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleCycles_m2392(__this, L_14, /*hidden argument*/NULL);
		int32_t L_15 = Random_Range_m3168(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		ExplicitMouseDesc_set_wiggleClockwise_m2394(__this, ((((int32_t)((((int32_t)L_15) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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



// System.Void FacebookSharing::.ctor()
extern "C" void FacebookSharing__ctor_m2396 (FacebookSharing_t451 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::Awake()
extern TypeInfo* FacebookSharing_t451_il2cpp_TypeInfo_var;
extern TypeInfo* InitDelegate_t377_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnInitComplete_m2398_MethodInfo_var;
extern "C" void FacebookSharing_Awake_m2397 (FacebookSharing_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FacebookSharing_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		InitDelegate_t377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(94);
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookSharing_OnInitComplete_m2398_MethodInfo_var = il2cpp_codegen_method_info_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	{
		((FacebookSharing_t451_StaticFields*)FacebookSharing_t451_il2cpp_TypeInfo_var->static_fields)->___instance_5 = __this;
		IntPtr_t L_0 = { (void*)FacebookSharing_OnInitComplete_m2398_MethodInfo_var };
		InitDelegate_t377 * L_1 = (InitDelegate_t377 *)il2cpp_codegen_object_new (InitDelegate_t377_il2cpp_TypeInfo_var);
		InitDelegate__ctor_m3048(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_Init_m1985(NULL /*static, unused*/, L_1, (HideUnityDelegate_t378 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnInitComplete()
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnInitComplete_m2398 (FacebookSharing_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1983(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = L_0;
		Object_t * L_2 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral42, L_2, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnHideUnity(System.Boolean)
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_OnHideUnity_m2399 (FacebookSharing_t451 * __this, bool ___isGameShown, const MethodInfo* method)
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
		Debug_Log_m3097(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScore(System.Int32)
extern "C" void FacebookSharing_ShareScore_m2400 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___score;
		FacebookSharing_ShareScoreThroughLibraries_m2401(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughLibraries(System.Int32)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t391_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_LoginCallback_m2403_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughLibraries_m2401 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookDelegate_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FacebookSharing_LoginCallback_m2403_MethodInfo_var = il2cpp_codegen_method_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral872, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1983(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_1 = ___score;
		__this->___scoreToShare_6 = L_1;
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral873, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FacebookSharing_LoginCallback_m2403_MethodInfo_var };
		FacebookDelegate_t391 * L_3 = (FacebookDelegate_t391 *)il2cpp_codegen_object_new (FacebookDelegate_t391_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3052(L_3, __this, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_Login_m1988(NULL /*static, unused*/, (String_t*) &_stringLiteral45, L_3, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0040:
	{
		int32_t L_4 = ___score;
		FacebookSharing_ShareScoreInternal_m2404(__this, L_4, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreThroughURLs(System.Int32)
extern TypeInfo* StringU5BU5D_t45_il2cpp_TypeInfo_var;
extern TypeInfo* Utilities_t571_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_ShareScoreThroughURLs_m2402 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t45_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		Utilities_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		StringU5BU5D_t45* L_0 = ((StringU5BU5D_t45*)SZArrayNew(StringU5BU5D_t45_il2cpp_TypeInfo_var, ((int32_t)12)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral874);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral874;
		StringU5BU5D_t45* L_1 = L_0;
		String_t* L_2 = WWW_EscapeURL_m3591(NULL /*static, unused*/, (String_t*) &_stringLiteral875, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_2;
		StringU5BU5D_t45* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral876);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 2)) = (String_t*)(String_t*) &_stringLiteral876;
		StringU5BU5D_t45* L_4 = L_3;
		String_t* L_5 = WWW_EscapeURL_m3591(NULL /*static, unused*/, (String_t*) &_stringLiteral877, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 3)) = (String_t*)L_5;
		StringU5BU5D_t45* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral878);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 4)) = (String_t*)(String_t*) &_stringLiteral878;
		StringU5BU5D_t45* L_7 = L_6;
		int32_t L_8 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t571_il2cpp_TypeInfo_var);
		String_t* L_9 = Utilities_GetShareTitleForScore_m3026(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		String_t* L_10 = WWW_EscapeURL_m3591(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 5)) = (String_t*)L_10;
		StringU5BU5D_t45* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral879);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 6)) = (String_t*)(String_t*) &_stringLiteral879;
		StringU5BU5D_t45* L_12 = L_11;
		int32_t L_13 = ___score;
		String_t* L_14 = Utilities_GetShareMessageForScore_m3027(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_15 = WWW_EscapeURL_m3591(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, 7)) = (String_t*)L_15;
		StringU5BU5D_t45* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral880);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 8)) = (String_t*)(String_t*) &_stringLiteral880;
		StringU5BU5D_t45* L_17 = L_16;
		String_t* L_18 = WWW_EscapeURL_m3591(NULL /*static, unused*/, (String_t*) &_stringLiteral881, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)9))) = (String_t*)L_18;
		StringU5BU5D_t45* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)10));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral882);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral882;
		StringU5BU5D_t45* L_20 = L_19;
		String_t* L_21 = WWW_EscapeURL_m3591(NULL /*static, unused*/, (String_t*) &_stringLiteral883, /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		ArrayElementTypeCheck (L_20, L_21);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)11))) = (String_t*)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m217(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_0 = L_22;
		String_t* L_23 = V_0;
		String_t* L_24 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral884, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		int32_t L_25 = ___score;
		String_t* L_26 = Utilities_GetShareMessageForScore_m3027(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		String_t* L_27 = WWW_EscapeURL_m3591(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		String_t* L_28 = WWW_EscapeURL_m3591(NULL /*static, unused*/, (String_t*) &_stringLiteral881, /*hidden argument*/NULL);
		String_t* L_29 = String_Concat_m201(NULL /*static, unused*/, (String_t*) &_stringLiteral885, L_27, (String_t*) &_stringLiteral880, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		String_t* L_30 = V_0;
		String_t* L_31 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral886, L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		String_t* L_32 = V_1;
		String_t* L_33 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral887, L_32, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		String_t* L_34 = V_2;
		String_t* L_35 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral888, L_34, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		String_t* L_36 = V_2;
		String_t* L_37 = V_1;
		Object_t * L_38 = Utilities_LaunchAppOrWeb_m3031(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3122(__this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::LoginCallback(FBResult)
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern "C" void FacebookSharing_LoginCallback_m2403 (FacebookSharing_t451 * __this, FBResult_t239 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		s_Il2CppMethodIntialized = true;
	}
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral889, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		bool L_0 = FB_get_IsLoggedIn_m1983(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = (__this->___scoreToShare_6);
		FacebookSharing_ShareScoreInternal_m2404(__this, L_1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FacebookSharing::ShareScoreInternal(System.Int32)
extern TypeInfo* Utilities_t571_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t391_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t379_il2cpp_TypeInfo_var;
extern const MethodInfo* FacebookSharing_OnFeedFinished_m2405_MethodInfo_var;
extern "C" void FacebookSharing_ShareScoreInternal_m2404 (FacebookSharing_t451 * __this, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(374);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		FacebookDelegate_t391_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(96);
		FB_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(91);
		FacebookSharing_OnFeedFinished_m2405_MethodInfo_var = il2cpp_codegen_method_info_from_index(464);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral890, /*hidden argument*/NULL);
		int32_t L_0 = ___score;
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t571_il2cpp_TypeInfo_var);
		String_t* L_1 = Utilities_GetShareTitleForScore_m3026(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___score;
		String_t* L_3 = Utilities_GetShareMessageForScore_m3027(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral891, L_4, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		String_t* L_7 = String_Concat_m174(NULL /*static, unused*/, (String_t*) &_stringLiteral892, L_6, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral893, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = V_1;
		IntPtr_t L_10 = { (void*)FacebookSharing_OnFeedFinished_m2405_MethodInfo_var };
		FacebookDelegate_t391 * L_11 = (FacebookDelegate_t391 *)il2cpp_codegen_object_new (FacebookDelegate_t391_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3052(L_11, __this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t379_il2cpp_TypeInfo_var);
		FB_Feed_m1993(NULL /*static, unused*/, (String_t*)NULL, (String_t*) &_stringLiteral875, (String_t*) &_stringLiteral877, L_8, L_9, (String_t*) &_stringLiteral881, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, (Dictionary_2_t74 *)NULL, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FacebookSharing::OnFeedFinished(FBResult)
extern "C" void FacebookSharing_OnFeedFinished_m2405 (FacebookSharing_t451 * __this, FBResult_t239 * ___result, const MethodInfo* method)
{
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral894, /*hidden argument*/NULL);
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral895, /*hidden argument*/NULL);
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



// System.Void FartPuff::.ctor()
extern "C" void FartPuff__ctor_m2406 (FartPuff_t452 * __this, const MethodInfo* method)
{
	{
		__this->___velocity_3 = (1.0f);
		__this->___scaleVelocity_4 = (1.0f);
		__this->___initialScale_10 = (0.15f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::Awake()
extern "C" void FartPuff_Awake_m2407 (FartPuff_t452 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___initialScale_10);
		__this->___scale_9 = L_0;
		float L_1 = Random_Range_m3590(NULL /*static, unused*/, (0.0f), (360.0f), /*hidden argument*/NULL);
		__this->___rotationDeg_8 = L_1;
		float L_2 = (__this->___minRotateDegVeclocity_6);
		float L_3 = (__this->___maxRotateDegVeclocity_5);
		float L_4 = Random_Range_m3590(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		__this->___rotateDegVelocity_7 = L_4;
		int32_t L_5 = Random_Range_m3168(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
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
extern "C" void FartPuff_Start_m2408 (FartPuff_t452 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FartPuff::Update()
extern TypeInfo* TimeController_t557_il2cpp_TypeInfo_var;
extern "C" void FartPuff_Update_m2409 (FartPuff_t452 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeController_t557_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(399);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t449  V_1 = {0};
	{
		TimeController_t557 * L_0 = ((TimeController_t557_StaticFields*)TimeController_t557_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		NullCheck(L_0);
		bool L_1 = TimeController_get_paused_m2954(L_0, /*hidden argument*/NULL);
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
		float L_2 = Time_get_deltaTime_m3592(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = (__this->___velocity_3);
		Vector3_t449  L_5 = (__this->___direction_2);
		Vector3_t449  L_6 = Vector3_op_Multiply_m3593(NULL /*static, unused*/, ((float)((float)L_3*(float)L_4)), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t364 * L_7 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		Transform_t364 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t449  L_9 = Transform_get_localPosition_m3594(L_8, /*hidden argument*/NULL);
		Vector3_t449  L_10 = V_1;
		Vector3_t449  L_11 = Vector3_op_Addition_m3595(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localPosition_m3596(L_8, L_11, /*hidden argument*/NULL);
		float L_12 = (__this->___scale_9);
		float L_13 = V_0;
		float L_14 = (__this->___scaleVelocity_4);
		__this->___scale_9 = ((float)((float)L_12+(float)((float)((float)L_13*(float)L_14))));
		Transform_t364 * L_15 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		float L_16 = (__this->___scale_9);
		float L_17 = (__this->___scale_9);
		Vector3_t449  L_18 = {0};
		Vector3__ctor_m3439(&L_18, L_16, L_17, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_m3450(L_15, L_18, /*hidden argument*/NULL);
		float L_19 = (__this->___rotationDeg_8);
		float L_20 = V_0;
		float L_21 = (__this->___rotateDegVelocity_7);
		__this->___rotationDeg_8 = ((float)((float)L_19+(float)((float)((float)L_20*(float)L_21))));
		Transform_t364 * L_22 = Component_get_transform_m3441(__this, /*hidden argument*/NULL);
		float L_23 = (__this->___rotationDeg_8);
		Quaternion_t682  L_24 = Quaternion_Euler_m3597(NULL /*static, unused*/, (0.0f), (0.0f), L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_rotation_m3552(L_22, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FartPuff::SetDirection(UnityEngine.Vector3)
extern "C" void FartPuff_SetDirection_m2410 (FartPuff_t452 * __this, Vector3_t449  ___direction, const MethodInfo* method)
{
	{
		Vector3_t449  L_0 = ___direction;
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



// System.Void FinalScoreController::.ctor()
extern "C" void FinalScoreController__ctor_m2411 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::Awake()
extern "C" void FinalScoreController_Awake_m2412 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void FinalScoreController::Start()
extern "C" void FinalScoreController_Start_m2413 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_RegisterForEvents_m2415(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::OnDestroy()
extern "C" void FinalScoreController_OnDestroy_m2414 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	{
		FinalScoreController_UnregisterForEvents_m2416(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var;
extern "C" void FinalScoreController_RegisterForEvents_m2415 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var = il2cpp_codegen_method_info_from_index(465);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2480(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var;
extern "C" void FinalScoreController_UnregisterForEvents_m2416 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var = il2cpp_codegen_method_info_from_index(465);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)FinalScoreController_OnGamePhaseChanged_m2417_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void FinalScoreController::OnGamePhaseChanged()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern "C" void FinalScoreController_OnGamePhaseChanged_m2417 (FinalScoreController_t453 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0024;
		}
	}
	{
		SocialHelper_t551 * L_2 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		PlayerStats_t433 * L_3 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PlayerStats_GetScore_m2820(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		SocialHelper_ReportScore_m2910(L_2, L_4, /*hidden argument*/NULL);
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

// GameUI
#include "AssemblyU2DCSharp_GameUIMethodDeclarations.h"


// System.Void FinalScoreUI::.ctor()
extern "C" void FinalScoreUI__ctor_m2418 (FinalScoreUI_t454 * __this, const MethodInfo* method)
{
	{
		GameUI__ctor_m2496(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Awake()
extern "C" void FinalScoreUI_Awake_m2419 (FinalScoreUI_t454 * __this, const MethodInfo* method)
{
	{
		__this->___started_4 = 0;
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral896, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::Start()
extern "C" void FinalScoreUI_Start_m2420 (FinalScoreUI_t454 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral897, /*hidden argument*/NULL);
		__this->___started_4 = 1;
		FinalScoreUI_UpdateView_m2422(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScoreUI::OnEnable()
extern "C" void FinalScoreUI_OnEnable_m2421 (FinalScoreUI_t454 * __this, const MethodInfo* method)
{
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral898, /*hidden argument*/NULL);
		bool L_0 = (__this->___started_4);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		FinalScoreUI_UpdateView_m2422(__this, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void FinalScoreUI::UpdateView()
extern TypeInfo* Int32_t50_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FinalScoreUI_UpdateView_m2422 (FinalScoreUI_t454 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(58);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
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
		PlayerStats_t433 * L_2 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PlayerStats_GetHighScore_m2826(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PlayerStats_t433 * L_4 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = PlayerStats_GetScore_m2820(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0039;
		}
	}
	{
		PlayerStats_t433 * L_8 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		PlayerStats_SetHighScore_m2827(L_8, L_9, /*hidden argument*/NULL);
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
		Text_t422 * L_11 = (__this->___personalBestText_2);
		NullCheck(L_11);
		GameObject_t310 * L_12 = Component_get_gameObject_m3159(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m3361(L_12, 0, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_0055:
	{
		Text_t422 * L_13 = (__this->___personalBestText_2);
		NullCheck(L_13);
		GameObject_t310 * L_14 = Component_get_gameObject_m3159(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m3361(L_14, 1, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_0082;
		}
	}
	{
		Text_t422 * L_17 = (__this->___personalBestText_2);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, (String_t*) &_stringLiteral899);
		goto IL_009d;
	}

IL_0082:
	{
		Text_t422 * L_18 = (__this->___personalBestText_2);
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		Object_t * L_21 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral900, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_22);
	}

IL_009d:
	{
		Text_t422 * L_23 = (__this->___finalScoreText_3);
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		Object_t * L_26 = Box(Int32_t50_il2cpp_TypeInfo_var, &L_25);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m175(NULL /*static, unused*/, (String_t*) &_stringLiteral901, L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_27);
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
extern "C" void GameCenterButtons__ctor_m2423 (GameCenterButtons_t457 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::Start()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern TypeInfo* GameCenterButtons_t457_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t456_il2cpp_TypeInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4A_m2425_MethodInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4B_m2426_MethodInfo_var;
extern const MethodInfo* GameCenterButtons_U3CStartU3Em__4C_m2427_MethodInfo_var;
extern "C" void GameCenterButtons_Start_m2424 (GameCenterButtons_t457 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		GameCenterButtons_t457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		UnityAction_t456_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		GameCenterButtons_U3CStartU3Em__4A_m2425_MethodInfo_var = il2cpp_codegen_method_info_from_index(466);
		GameCenterButtons_U3CStartU3Em__4B_m2426_MethodInfo_var = il2cpp_codegen_method_info_from_index(467);
		GameCenterButtons_U3CStartU3Em__4C_m2427_MethodInfo_var = il2cpp_codegen_method_info_from_index(468);
		s_Il2CppMethodIntialized = true;
	}
	ButtonClickedEvent_t691 * G_B4_0 = {0};
	ButtonClickedEvent_t691 * G_B3_0 = {0};
	ButtonClickedEvent_t691 * G_B6_0 = {0};
	ButtonClickedEvent_t691 * G_B5_0 = {0};
	ButtonClickedEvent_t691 * G_B8_0 = {0};
	ButtonClickedEvent_t691 * G_B7_0 = {0};
	{
		SocialHelper_t551 * L_0 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		bool L_1 = SocialHelper_IsEnabled_m2912(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t310 * L_2 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3361(L_2, 0, /*hidden argument*/NULL);
		return;
	}

IL_001c:
	{
		GameObject_t310 * L_3 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3361(L_3, 1, /*hidden argument*/NULL);
		Button_t421 * L_4 = (__this->___leaderBoardButton_2);
		NullCheck(L_4);
		ButtonClickedEvent_t691 * L_5 = Button_get_onClick_m3598(L_4, /*hidden argument*/NULL);
		UnityAction_t456 * L_6 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		G_B3_0 = L_5;
		if (L_6)
		{
			G_B4_0 = L_5;
			goto IL_004b;
		}
	}
	{
		IntPtr_t L_7 = { (void*)GameCenterButtons_U3CStartU3Em__4A_m2425_MethodInfo_var };
		UnityAction_t456 * L_8 = (UnityAction_t456 *)il2cpp_codegen_object_new (UnityAction_t456_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3599(L_8, NULL, L_7, /*hidden argument*/NULL);
		((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5 = L_8;
		G_B4_0 = G_B3_0;
	}

IL_004b:
	{
		UnityAction_t456 * L_9 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache3_5;
		NullCheck(G_B4_0);
		UnityEvent_AddListener_m3600(G_B4_0, L_9, /*hidden argument*/NULL);
		Button_t421 * L_10 = (__this->___achievementButton_3);
		NullCheck(L_10);
		ButtonClickedEvent_t691 * L_11 = Button_get_onClick_m3598(L_10, /*hidden argument*/NULL);
		UnityAction_t456 * L_12 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		G_B5_0 = L_11;
		if (L_12)
		{
			G_B6_0 = L_11;
			goto IL_0078;
		}
	}
	{
		IntPtr_t L_13 = { (void*)GameCenterButtons_U3CStartU3Em__4B_m2426_MethodInfo_var };
		UnityAction_t456 * L_14 = (UnityAction_t456 *)il2cpp_codegen_object_new (UnityAction_t456_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3599(L_14, NULL, L_13, /*hidden argument*/NULL);
		((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6 = L_14;
		G_B6_0 = G_B5_0;
	}

IL_0078:
	{
		UnityAction_t456 * L_15 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache4_6;
		NullCheck(G_B6_0);
		UnityEvent_AddListener_m3600(G_B6_0, L_15, /*hidden argument*/NULL);
		Button_t421 * L_16 = (__this->___rateMeButton_4);
		NullCheck(L_16);
		ButtonClickedEvent_t691 * L_17 = Button_get_onClick_m3598(L_16, /*hidden argument*/NULL);
		UnityAction_t456 * L_18 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		G_B7_0 = L_17;
		if (L_18)
		{
			G_B8_0 = L_17;
			goto IL_00a5;
		}
	}
	{
		IntPtr_t L_19 = { (void*)GameCenterButtons_U3CStartU3Em__4C_m2427_MethodInfo_var };
		UnityAction_t456 * L_20 = (UnityAction_t456 *)il2cpp_codegen_object_new (UnityAction_t456_il2cpp_TypeInfo_var);
		UnityAction__ctor_m3599(L_20, NULL, L_19, /*hidden argument*/NULL);
		((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7 = L_20;
		G_B8_0 = G_B7_0;
	}

IL_00a5:
	{
		UnityAction_t456 * L_21 = ((GameCenterButtons_t457_StaticFields*)GameCenterButtons_t457_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache5_7;
		NullCheck(G_B8_0);
		UnityEvent_AddListener_m3600(G_B8_0, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4A()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4A_m2425 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t551 * L_0 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowLeaderBoard_m2913(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4B()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4B_m2426 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	{
		SocialHelper_t551 * L_0 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		SocialHelper_ShowAchievements_m2914(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameCenterButtons::<Start>m__4C()
extern TypeInfo* RatingsHelper_t535_il2cpp_TypeInfo_var;
extern "C" void GameCenterButtons_U3CStartU3Em__4C_m2427 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RatingsHelper_t535_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		s_Il2CppMethodIntialized = true;
	}
	{
		RatingsHelper_t535 * L_0 = ((RatingsHelper_t535_StaticFields*)RatingsHelper_t535_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_0);
		RatingsHelper_ShowRatingsPage_m2847(L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromData.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// EnumAccumulator`1<MouseHole/MouseHoleLocation>
#include "AssemblyU2DCSharp_EnumAccumulator_1_gen.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHole.h"
// System.Collections.Generic.List`1<ExplicitMouseDesc>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
// UnityEngine.Physics2D
#include "UnityEngine_UnityEngine_Physics2DMethodDeclarations.h"
// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3MethodDeclarations.h"
// MouseHole
#include "AssemblyU2DCSharp_MouseHoleMethodDeclarations.h"
// MouseSpawnFromData
#include "AssemblyU2DCSharp_MouseSpawnFromDataMethodDeclarations.h"
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"
struct GameObject_t310;
struct MouseSpawnFromData_t459;
// Declaration !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
// !!0 UnityEngine.GameObject::GetComponent<MouseSpawnFromData>()
#define GameObject_GetComponent_TisMouseSpawnFromData_t459_m3601(__this, method) (( MouseSpawnFromData_t459 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void GameController::.ctor()
extern "C" void GameController__ctor_m2428 (GameController_t460 * __this, const MethodInfo* method)
{
	{
		__this->___startWait_2 = (1.5f);
		__this->___minSpawnWait_3 = (0.25f);
		__this->___maxSpawnWait_4 = (1.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameController GameController::get_instance()
extern TypeInfo* GameController_t460_il2cpp_TypeInfo_var;
extern "C" GameController_t460 * GameController_get_instance_m2429 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t460 * L_0 = ((GameController_t460_StaticFields*)GameController_t460_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void GameController::set_instance(GameController)
extern TypeInfo* GameController_t460_il2cpp_TypeInfo_var;
extern "C" void GameController_set_instance_m2430 (Object_t * __this /* static, unused */, GameController_t460 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameController_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_t460 * L_0 = ___value;
		((GameController_t460_StaticFields*)GameController_t460_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void GameController::Awake()
extern TypeInfo* Physics2D_t692_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisMouseSpawnFromData_t459_m3601_MethodInfo_var;
extern "C" void GameController_Awake_m2431 (GameController_t460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Physics2D_t692_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		GameObject_GetComponent_TisMouseSpawnFromData_t459_m3601_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameController_set_instance_m2430(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___checkForPhaseChanges_8 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t692_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m3602(NULL /*static, unused*/, 8, ((int32_t)9), 1, /*hidden argument*/NULL);
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		MouseSpawnFromData_t459 * L_1 = GameObject_GetComponent_TisMouseSpawnFromData_t459_m3601(L_0, /*hidden argument*/GameObject_GetComponent_TisMouseSpawnFromData_t459_m3601_MethodInfo_var);
		__this->___mouseSpawnFromData_6 = L_1;
		return;
	}
}
// System.Void GameController::Start()
extern TypeInfo* SocialHelper_t551_il2cpp_TypeInfo_var;
extern TypeInfo* GameController_t460_il2cpp_TypeInfo_var;
extern TypeInfo* Action_1_t235_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_U3CStartU3Em__4D_m2448_MethodInfo_var;
extern const MethodInfo* Action_1__ctor_m3268_MethodInfo_var;
extern "C" void GameController_Start_m2432 (GameController_t460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		GameController_t460_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		Action_1_t235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(212);
		GameController_U3CStartU3Em__4D_m2448_MethodInfo_var = il2cpp_codegen_method_info_from_index(470);
		Action_1__ctor_m3268_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483838);
		s_Il2CppMethodIntialized = true;
	}
	SocialHelper_t551 * G_B2_0 = {0};
	SocialHelper_t551 * G_B1_0 = {0};
	{
		GameController_RegisterForEvents_m2435(__this, /*hidden argument*/NULL);
		GameController_RestartGame_m2437(__this, /*hidden argument*/NULL);
		SocialHelper_t551 * L_0 = ((SocialHelper_t551_StaticFields*)SocialHelper_t551_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		Action_1_t235 * L_1 = ((GameController_t460_StaticFields*)GameController_t460_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
	}
	{
		IntPtr_t L_2 = { (void*)GameController_U3CStartU3Em__4D_m2448_MethodInfo_var };
		Action_1_t235 * L_3 = (Action_1_t235 *)il2cpp_codegen_object_new (Action_1_t235_il2cpp_TypeInfo_var);
		Action_1__ctor_m3268(L_3, NULL, L_2, /*hidden argument*/Action_1__ctor_m3268_MethodInfo_var);
		((GameController_t460_StaticFields*)GameController_t460_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10 = L_3;
		G_B2_0 = G_B1_0;
	}

IL_0029:
	{
		Action_1_t235 * L_4 = ((GameController_t460_StaticFields*)GameController_t460_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__amU24cache8_10;
		NullCheck(G_B2_0);
		SocialHelper_Authenticate_m2907(G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Update()
extern "C" void GameController_Update_m2433 (GameController_t460 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkForPhaseChanges_8);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		__this->___checkForPhaseChanges_8 = 0;
		bool L_1 = GameController_CheckForGameEnd_m2444(__this, /*hidden argument*/NULL);
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
		bool L_2 = GameController_CheckForLevelEnd_m2445(__this, /*hidden argument*/NULL);
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
extern "C" void GameController_OnDestroy_m2434 (GameController_t460 * __this, const MethodInfo* method)
{
	{
		GameController_UnregisterForEvents_m2436(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2439_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2438_MethodInfo_var;
extern "C" void GameController_RegisterForEvents_m2435 (GameController_t460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		GameController_OnGamePhaseChanged_m2439_MethodInfo_var = il2cpp_codegen_method_info_from_index(471);
		GameController_OnGameInstanceChanged_m2438_MethodInfo_var = il2cpp_codegen_method_info_from_index(472);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2439_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2480(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_4 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2438_MethodInfo_var };
		GameInstanceChangedEventHandler_t464 * L_6 = (GameInstanceChangedEventHandler_t464 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2463(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m2478(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern const MethodInfo* GameController_OnGamePhaseChanged_m2439_MethodInfo_var;
extern const MethodInfo* GameController_OnGameInstanceChanged_m2438_MethodInfo_var;
extern "C" void GameController_UnregisterForEvents_m2436 (GameController_t460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		GameController_OnGamePhaseChanged_m2439_MethodInfo_var = il2cpp_codegen_method_info_from_index(471);
		GameController_OnGameInstanceChanged_m2438_MethodInfo_var = il2cpp_codegen_method_info_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_7);
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameController_OnGamePhaseChanged_m2439_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_4 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GameController_OnGameInstanceChanged_m2438_MethodInfo_var };
		GameInstanceChangedEventHandler_t464 * L_6 = (GameInstanceChangedEventHandler_t464 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2463(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m2479(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void GameController::RestartGame()
extern "C" void GameController_RestartGame_m2437 (GameController_t460 * __this, const MethodInfo* method)
{
	{
		GameLevelState_t462 * L_0 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameLevelState_SetGameLevel_m2462(L_0, 1, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_RestartGame_m2490(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::OnGameInstanceChanged()
extern "C" void GameController_OnGameInstanceChanged_m2438 (GameController_t460 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::OnGamePhaseChanged()
extern "C" void GameController_OnGamePhaseChanged_m2439 (GameController_t460 * __this, const MethodInfo* method)
{
	CrossSceneState_t440 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
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
		CrossSceneState_t440 * L_3 = CrossSceneState_get_instance_m2353(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		CrossSceneState_t440 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___didWelcome_2 = 1;
		goto IL_0062;
	}

IL_0036:
	{
		GameController_EnqueueMiceForLevel_m2441(__this, /*hidden argument*/NULL);
		GameController_MaybeIncrementMouseHoleCapacity_m2440(__this, /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0047:
	{
		GameLevelState_t462 * L_5 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t462 * L_6 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = GameLevelState_get_gameLevel_m2456(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameLevelState_SetGameLevel_m2462(L_5, ((int32_t)((int32_t)L_7+(int32_t)1)), /*hidden argument*/NULL);
		goto IL_0062;
	}

IL_0062:
	{
		return;
	}
}
// System.Void GameController::MaybeIncrementMouseHoleCapacity()
extern "C" void GameController_MaybeIncrementMouseHoleCapacity_m2440 (GameController_t460 * __this, const MethodInfo* method)
{
	LevelDescription_t489 * V_0 = {0};
	EnumAccumulator_1_t484 * V_1 = {0};
	int32_t V_2 = 0;
	{
		LevelConfig_t496 * L_0 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t462 * L_1 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameLevelState_get_gameLevel_m2456(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t489 * L_3 = LevelConfig_GetLevelDescription_m2569(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		LevelDescription_t489 * L_4 = V_0;
		NullCheck(L_4);
		EnumAccumulator_1_t484 * L_5 = (L_4->___mouseHolesAccumulator_5);
		V_1 = L_5;
		V_2 = 0;
		goto IL_003c;
	}

IL_0023:
	{
		MouseHoleU5BU5D_t458* L_6 = (__this->___mouseHoles_5);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		EnumAccumulator_1_t484 * L_9 = V_1;
		NullCheck(L_9);
		Int32U5BU5D_t495* L_10 = (L_9->___derivedCount_1);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(MouseHole_t477 **)(MouseHole_t477 **)SZArrayLdElema(L_6, L_8)));
		MouseHole_SetCapacity_m2634((*(MouseHole_t477 **)(MouseHole_t477 **)SZArrayLdElema(L_6, L_8)), (*(int32_t*)(int32_t*)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003c:
	{
		int32_t L_14 = V_2;
		EnumAccumulator_1_t484 * L_15 = V_1;
		NullCheck(L_15);
		Int32U5BU5D_t495* L_16 = (L_15->___derivedCount_1);
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
extern "C" void GameController_EnqueueMiceForLevel_m2441 (GameController_t460 * __this, const MethodInfo* method)
{
	LevelDescription_t489 * V_0 = {0};
	{
		MouseSpawnFromData_t459 * L_0 = (__this->___mouseSpawnFromData_6);
		NullCheck(L_0);
		MouseSpawnFromData_Clear_m2686(L_0, /*hidden argument*/NULL);
		LevelConfig_t496 * L_1 = LevelConfig_get_instance_m2560(NULL /*static, unused*/, /*hidden argument*/NULL);
		GameLevelState_t462 * L_2 = GameLevelState_get_instance_m2458(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m2456(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		LevelDescription_t489 * L_4 = LevelConfig_GetLevelDescription_m2569(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MouseSpawnFromData_t459 * L_5 = (__this->___mouseSpawnFromData_6);
		LevelDescription_t489 * L_6 = V_0;
		NullCheck(L_6);
		List_1_t483 * L_7 = (L_6->___explicitMouseDescs_1);
		NullCheck(L_5);
		MouseSpawnFromData_AddMice_m2687(L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// MouseHole GameController::FindDoomedMouseHole()
extern "C" MouseHole_t477 * GameController_FindDoomedMouseHole_m2442 (GameController_t460 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0007:
	{
		MouseHoleU5BU5D_t458* L_0 = (__this->___mouseHoles_5);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(MouseHole_t477 **)(MouseHole_t477 **)SZArrayLdElema(L_0, L_2)));
		bool L_3 = MouseHole_IsFull_m2631((*(MouseHole_t477 **)(MouseHole_t477 **)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		MouseHoleU5BU5D_t458* L_4 = (__this->___mouseHoles_5);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		return (*(MouseHole_t477 **)(MouseHole_t477 **)SZArrayLdElema(L_4, L_6));
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		return (MouseHole_t477 *)NULL;
	}
}
// System.Void GameController::OnMouseExit(MouseMove)
extern "C" void GameController_OnMouseExit_m2443 (GameController_t460 * __this, MouseMove_t512 * ___mouse, const MethodInfo* method)
{
	{
		__this->___checkForPhaseChanges_8 = 1;
		return;
	}
}
// System.Boolean GameController::CheckForGameEnd()
extern "C" bool GameController_CheckForGameEnd_m2444 (GameController_t460 * __this, const MethodInfo* method)
{
	MouseHole_t477 * V_0 = {0};
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
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
		MouseHole_t477 * L_2 = GameController_FindDoomedMouseHole_m2442(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		MouseHole_t477 * L_3 = V_0;
		bool L_4 = Object_op_Inequality_m3079(NULL /*static, unused*/, L_3, (Object_t599 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		MouseHole_t477 * L_5 = V_0;
		NullCheck(L_5);
		MouseHole_DoDoomedBoxFX_m2626(L_5, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_6 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		GamePhaseState_TransitionWithPause_m2492(L_6, 4, /*hidden argument*/NULL);
		return 1;
	}

IL_0038:
	{
		return 0;
	}
}
// System.Boolean GameController::CheckForLevelEnd()
extern TypeInfo* MouseMove_t512_il2cpp_TypeInfo_var;
extern "C" bool GameController_CheckForLevelEnd_m2445 (GameController_t460 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MouseMove_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(396);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
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
		MouseSpawnFromData_t459 * L_2 = (__this->___mouseSpawnFromData_6);
		NullCheck(L_2);
		bool L_3 = MouseSpawnFromData_FinishedWithCurrentSet_m2685(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MouseMove_t512_il2cpp_TypeInfo_var);
		int32_t L_4 = ((MouseMove_t512_StaticFields*)MouseMove_t512_il2cpp_TypeInfo_var->static_fields)->___activeMouseCount_18;
		if (L_4)
		{
			goto IL_0039;
		}
	}
	{
		GamePhaseState_t466 * L_5 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		GamePhaseState_TransitionWithPause_m2492(L_5, 3, /*hidden argument*/NULL);
		return 1;
	}

IL_0039:
	{
		return 0;
	}
}
// System.Void GameController::OnMouseKilled(MouseMove)
extern "C" void GameController_OnMouseKilled_m2446 (GameController_t460 * __this, MouseMove_t512 * ___mouse, const MethodInfo* method)
{
	{
		PlayerStats_t433 * L_0 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		PlayerStats_IncrementScore_m2815(L_0, 1, /*hidden argument*/NULL);
		__this->___checkForPhaseChanges_8 = 1;
		return;
	}
}
// System.Void GameController::LogKillsPerSwipe(System.Int32)
extern "C" void GameController_LogKillsPerSwipe_m2447 (GameController_t460 * __this, int32_t ___killsPerSwipe, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___killsPerSwipe;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
		int32_t L_1 = ___killsPerSwipe;
		int32_t L_2 = ___killsPerSwipe;
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1-(int32_t)1))*(int32_t)((int32_t)((int32_t)L_2-(int32_t)1))));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		PlayerStats_t433 * L_4 = PlayerStats_get_instance_m2807(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		PlayerStats_EarnTreats_m2818(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void GameController::<Start>m__4D(System.Boolean)
extern TypeInfo* ObjectU5BU5D_t581_il2cpp_TypeInfo_var;
extern TypeInfo* IUserProfile_t693_il2cpp_TypeInfo_var;
extern TypeInfo* ILocalUser_t694_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t29_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameController_U3CStartU3Em__4D_m2448 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(90);
		IUserProfile_t693_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(408);
		ILocalUser_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(409);
		Boolean_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
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
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral902, /*hidden argument*/NULL);
		ObjectU5BU5D_t581* L_1 = ((ObjectU5BU5D_t581*)SZArrayNew(ObjectU5BU5D_t581_il2cpp_TypeInfo_var, 6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral903);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)(String_t*) &_stringLiteral903;
		ObjectU5BU5D_t581* L_2 = L_1;
		Object_t * L_3 = Social_get_localUser_m3603(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_userName() */, IUserProfile_t693_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t581* L_5 = L_2;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral904);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral904;
		ObjectU5BU5D_t581* L_6 = L_5;
		Object_t * L_7 = Social_get_localUser_m3603(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String UnityEngine.SocialPlatforms.IUserProfile::get_id() */, IUserProfile_t693_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_8;
		ObjectU5BU5D_t581* L_9 = L_6;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral905);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)(String_t*) &_stringLiteral905;
		ObjectU5BU5D_t581* L_10 = L_9;
		Object_t * L_11 = Social_get_localUser_m3603(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_underage() */, ILocalUser_t694_il2cpp_TypeInfo_var, L_11);
		bool L_13 = L_12;
		Object_t * L_14 = Box(Boolean_t29_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3279(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_15;
		String_t* L_16 = V_0;
		Debug_Log_m3097(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_006b:
	{
		Debug_Log_m3097(NULL /*static, unused*/, (String_t*) &_stringLiteral906, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameLevelState/GameLevelChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GameLevelChangedEventHandler__ctor_m2449 (GameLevelChangedEventHandler_t461 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GameLevelState/GameLevelChangedEventHandler::Invoke()
extern "C" void GameLevelChangedEventHandler_Invoke_m2450 (GameLevelChangedEventHandler_t461 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameLevelChangedEventHandler_Invoke_m2450((GameLevelChangedEventHandler_t461 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameLevelChangedEventHandler_t461(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GameLevelState/GameLevelChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameLevelChangedEventHandler_BeginInvoke_m2451 (GameLevelChangedEventHandler_t461 * __this, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GameLevelState/GameLevelChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameLevelChangedEventHandler_EndInvoke_m2452 (GameLevelChangedEventHandler_t461 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameLevelState::.ctor()
extern "C" void GameLevelState__ctor_m2453 (GameLevelState_t462 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::add_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_add_GameLevelChanged_m2454 (GameLevelState_t462 * __this, GameLevelChangedEventHandler_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t461 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t461 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Combine_m3162(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t461 *)Castclass(L_2, GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GameLevelState::remove_GameLevelChanged(GameLevelState/GameLevelChangedEventHandler)
extern TypeInfo* GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_remove_GameLevelChanged_m2455 (GameLevelState_t462 * __this, GameLevelChangedEventHandler_t461 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(355);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelChangedEventHandler_t461 * L_0 = (__this->___GameLevelChanged_2);
		GameLevelChangedEventHandler_t461 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Remove_m3170(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameLevelChanged_2 = ((GameLevelChangedEventHandler_t461 *)Castclass(L_2, GameLevelChangedEventHandler_t461_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Int32 GameLevelState::get_gameLevel()
extern "C" int32_t GameLevelState_get_gameLevel_m2456 (GameLevelState_t462 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgameLevelU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void GameLevelState::set_gameLevel(System.Int32)
extern "C" void GameLevelState_set_gameLevel_m2457 (GameLevelState_t462 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgameLevelU3Ek__BackingField_3 = L_0;
		return;
	}
}
// GameLevelState GameLevelState::get_instance()
extern TypeInfo* GameLevelState_t462_il2cpp_TypeInfo_var;
extern "C" GameLevelState_t462 * GameLevelState_get_instance_m2458 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t462 * L_0 = ((GameLevelState_t462_StaticFields*)GameLevelState_t462_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameLevelState::set_instance(GameLevelState)
extern TypeInfo* GameLevelState_t462_il2cpp_TypeInfo_var;
extern "C" void GameLevelState_set_instance_m2459 (Object_t * __this /* static, unused */, GameLevelState_t462 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelState_t462_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameLevelState_t462 * L_0 = ___value;
		((GameLevelState_t462_StaticFields*)GameLevelState_t462_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void GameLevelState::Awake()
extern "C" void GameLevelState_Awake_m2460 (GameLevelState_t462 * __this, const MethodInfo* method)
{
	{
		GameLevelState_set_instance_m2459(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameLevelState::Start()
extern "C" void GameLevelState_Start_m2461 (GameLevelState_t462 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameLevelState::SetGameLevel(System.Int32)
extern "C" void GameLevelState_SetGameLevel_m2462 (GameLevelState_t462 * __this, int32_t ___gameLevel, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gameLevel;
		GameLevelState_set_gameLevel_m2457(__this, L_0, /*hidden argument*/NULL);
		GameLevelChangedEventHandler_t461 * L_1 = (__this->___GameLevelChanged_2);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameLevelChangedEventHandler_t461 * L_2 = (__this->___GameLevelChanged_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(10 /* System.Void GameLevelState/GameLevelChangedEventHandler::Invoke() */, L_2);
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
extern "C" void GameInstanceChangedEventHandler__ctor_m2463 (GameInstanceChangedEventHandler_t464 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke()
extern "C" void GameInstanceChangedEventHandler_Invoke_m2464 (GameInstanceChangedEventHandler_t464 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GameInstanceChangedEventHandler_Invoke_m2464((GameInstanceChangedEventHandler_t464 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GameInstanceChangedEventHandler_t464(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GameInstanceChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GameInstanceChangedEventHandler_BeginInvoke_m2465 (GameInstanceChangedEventHandler_t464 * __this, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GameInstanceChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GameInstanceChangedEventHandler_EndInvoke_m2466 (GameInstanceChangedEventHandler_t464 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif



// System.Void GamePhaseState/GamePhaseChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void GamePhaseChangedEventHandler__ctor_m2467 (GamePhaseChangedEventHandler_t465 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke()
extern "C" void GamePhaseChangedEventHandler_Invoke_m2468 (GamePhaseChangedEventHandler_t465 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GamePhaseChangedEventHandler_Invoke_m2468((GamePhaseChangedEventHandler_t465 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_GamePhaseChangedEventHandler_t465(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GamePhaseState/GamePhaseChangedEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GamePhaseChangedEventHandler_BeginInvoke_m2469 (GamePhaseChangedEventHandler_t465 * __this, AsyncCallback_t344 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GamePhaseState/GamePhaseChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void GamePhaseChangedEventHandler_EndInvoke_m2470 (GamePhaseChangedEventHandler_t465 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// GamePhaseState/<SetupPendingPhase>c__Iterator11
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__I.h"
#ifndef _MSC_VER
#else
#endif
// GamePhaseState/<SetupPendingPhase>c__Iterator11
#include "AssemblyU2DCSharp_GamePhaseState_U3CSetupPendingPhaseU3Ec__IMethodDeclarations.h"



// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator11::.ctor()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11__ctor_m2471 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator11::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator11_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2472 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GamePhaseState/<SetupPendingPhase>c__Iterator11::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSetupPendingPhaseU3Ec__Iterator11_System_Collections_IEnumerator_get_Current_m2473 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GamePhaseState/<SetupPendingPhase>c__Iterator11::MoveNext()
extern TypeInfo* WaitForSeconds_t683_il2cpp_TypeInfo_var;
extern "C" bool U3CSetupPendingPhaseU3Ec__Iterator11_MoveNext_m2474 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(364);
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
			goto IL_005f;
		}
	}
	{
		goto IL_0083;
	}

IL_0021:
	{
		GamePhaseState_t466 * L_2 = (__this->___U3CU3Ef__this_2);
		float L_3 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		GamePhaseState_t466 * L_4 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_4);
		float L_5 = (L_4->___pendingPause_4);
		NullCheck(L_2);
		L_2->___pendingPhaseTimeout_3 = ((float)((float)L_3+(float)L_5));
		GamePhaseState_t466 * L_6 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_6);
		float L_7 = (L_6->___pendingPause_4);
		WaitForSeconds_t683 * L_8 = (WaitForSeconds_t683 *)il2cpp_codegen_object_new (WaitForSeconds_t683_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3555(L_8, L_7, /*hidden argument*/NULL);
		__this->___U24current_1 = L_8;
		__this->___U24PC_0 = 1;
		goto IL_0085;
	}

IL_005f:
	{
		GamePhaseState_t466 * L_9 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_9);
		int32_t L_10 = GamePhaseState_get_gamePhase_m2482(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)5))))
		{
			goto IL_007c;
		}
	}
	{
		GamePhaseState_t466 * L_11 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_11);
		L_11->___shouldCheckForPhaseTransition_5 = 1;
	}

IL_007c:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0083:
	{
		return 0;
	}

IL_0085:
	{
		return 1;
	}
	// Dead block : IL_0087: ldloc.1
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator11::Dispose()
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11_Dispose_m2475 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GamePhaseState/<SetupPendingPhase>c__Iterator11::Reset()
extern TypeInfo* NotSupportedException_t26_il2cpp_TypeInfo_var;
extern "C" void U3CSetupPendingPhaseU3Ec__Iterator11_Reset_m2476 (U3CSetupPendingPhaseU3Ec__Iterator11_t467 * __this, const MethodInfo* method)
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



// System.Void GamePhaseState::.ctor()
extern "C" void GamePhaseState__ctor_m2477 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		__this->___pendingPause_4 = (1.0f);
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::add_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GameInstanceChanged_m2478 (GamePhaseState_t466 * __this, GameInstanceChangedEventHandler_t464 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t464 * L_0 = (__this->___GameInstanceChanged_7);
		GameInstanceChangedEventHandler_t464 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Combine_m3162(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_7 = ((GameInstanceChangedEventHandler_t464 *)Castclass(L_2, GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GameInstanceChanged(GamePhaseState/GameInstanceChangedEventHandler)
extern TypeInfo* GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GameInstanceChanged_m2479 (GamePhaseState_t466 * __this, GameInstanceChangedEventHandler_t464 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(356);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameInstanceChangedEventHandler_t464 * L_0 = (__this->___GameInstanceChanged_7);
		GameInstanceChangedEventHandler_t464 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Remove_m3170(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GameInstanceChanged_7 = ((GameInstanceChangedEventHandler_t464 *)Castclass(L_2, GameInstanceChangedEventHandler_t464_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::add_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_add_GamePhaseChanged_m2480 (GamePhaseState_t466 * __this, GamePhaseChangedEventHandler_t465 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t465 * L_0 = (__this->___GamePhaseChanged_8);
		GamePhaseChangedEventHandler_t465 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Combine_m3162(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_8 = ((GamePhaseChangedEventHandler_t465 *)Castclass(L_2, GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void GamePhaseState::remove_GamePhaseChanged(GamePhaseState/GamePhaseChangedEventHandler)
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_remove_GamePhaseChanged_m2481 (GamePhaseState_t466 * __this, GamePhaseChangedEventHandler_t465 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseChangedEventHandler_t465 * L_0 = (__this->___GamePhaseChanged_8);
		GamePhaseChangedEventHandler_t465 * L_1 = ___value;
		Delegate_t621 * L_2 = Delegate_Remove_m3170(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___GamePhaseChanged_8 = ((GamePhaseChangedEventHandler_t465 *)Castclass(L_2, GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var));
		return;
	}
}
// GamePhaseState/GamePhaseType GamePhaseState::get_gamePhase()
extern "C" int32_t GamePhaseState_get_gamePhase_m2482 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CgamePhaseU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void GamePhaseState::set_gamePhase(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_set_gamePhase_m2483 (GamePhaseState_t466 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CgamePhaseU3Ek__BackingField_9 = L_0;
		return;
	}
}
// GamePhaseState GamePhaseState::get_instance()
extern TypeInfo* GamePhaseState_t466_il2cpp_TypeInfo_var;
extern "C" GamePhaseState_t466 * GamePhaseState_get_instance_m2484 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t466_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t466 * L_0 = ((GamePhaseState_t466_StaticFields*)GamePhaseState_t466_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GamePhaseState::set_instance(GamePhaseState)
extern TypeInfo* GamePhaseState_t466_il2cpp_TypeInfo_var;
extern "C" void GamePhaseState_set_instance_m2485 (Object_t * __this /* static, unused */, GamePhaseState_t466 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseState_t466_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		s_Il2CppMethodIntialized = true;
	}
	{
		GamePhaseState_t466 * L_0 = ___value;
		((GamePhaseState_t466_StaticFields*)GamePhaseState_t466_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void GamePhaseState::Awake()
extern "C" void GamePhaseState_Awake_m2486 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_instance_m2485(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		GamePhaseState_set_gamePhase_m2483(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::Start()
extern "C" void GamePhaseState_Start_m2487 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GamePhaseState::Update()
extern "C" void GamePhaseState_Update_m2488 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___shouldCheckForPhaseTransition_5);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		GamePhaseState_CheckForPhaseTransition_m2493(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean GamePhaseState::IsPlaying()
extern "C" bool GamePhaseState_IsPlaying_m2489 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m2482(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void GamePhaseState::RestartGame()
extern "C" void GamePhaseState_RestartGame_m2490 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_set_gamePhase_m2483(__this, 0, /*hidden argument*/NULL);
		GameInstanceChangedEventHandler_t464 * L_0 = (__this->___GameInstanceChanged_7);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		GameInstanceChangedEventHandler_t464 * L_1 = (__this->___GameInstanceChanged_7);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void GamePhaseState/GameInstanceChangedEventHandler::Invoke() */, L_1);
	}

IL_001d:
	{
		CrossSceneState_t440 * L_2 = CrossSceneState_get_instance_m2353(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (L_2->___didWelcome_2);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		GamePhaseState_TransitionToPhase_m2495(__this, 2, /*hidden argument*/NULL);
		goto IL_003f;
	}

IL_0038:
	{
		GamePhaseState_TransitionToPhase_m2495(__this, 1, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Collections.IEnumerator GamePhaseState::SetupPendingPhase()
extern TypeInfo* U3CSetupPendingPhaseU3Ec__Iterator11_t467_il2cpp_TypeInfo_var;
extern "C" Object_t * GamePhaseState_SetupPendingPhase_m2491 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSetupPendingPhaseU3Ec__Iterator11_t467_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(412);
		s_Il2CppMethodIntialized = true;
	}
	U3CSetupPendingPhaseU3Ec__Iterator11_t467 * V_0 = {0};
	{
		U3CSetupPendingPhaseU3Ec__Iterator11_t467 * L_0 = (U3CSetupPendingPhaseU3Ec__Iterator11_t467 *)il2cpp_codegen_object_new (U3CSetupPendingPhaseU3Ec__Iterator11_t467_il2cpp_TypeInfo_var);
		U3CSetupPendingPhaseU3Ec__Iterator11__ctor_m2471(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSetupPendingPhaseU3Ec__Iterator11_t467 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CSetupPendingPhaseU3Ec__Iterator11_t467 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GamePhaseState::TransitionWithPause(GamePhaseState/GamePhaseType)
extern "C" void GamePhaseState_TransitionWithPause_m2492 (GamePhaseState_t466 * __this, int32_t ___phase, const MethodInfo* method)
{
	{
		int32_t L_0 = ___phase;
		__this->___pendingPhase_2 = L_0;
		GamePhaseState_TransitionToPhase_m2495(__this, 5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GamePhaseState::CheckForPhaseTransition()
extern "C" void GamePhaseState_CheckForPhaseTransition_m2493 (GamePhaseState_t466 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m2482(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0028;
		}
	}
	{
		float L_1 = (__this->___pendingPhaseTimeout_3);
		float L_2 = Time_get_time_m3569(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = (__this->___pendingPhase_2);
		GamePhaseState_TransitionToPhase_m2495(__this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		__this->___shouldCheckForPhaseTransition_5 = 0;
		return;
	}
}
// System.Boolean GamePhaseState::IsLegalTransition(GamePhaseState/GamePhaseType,GamePhaseState/GamePhaseType)
extern "C" bool GamePhaseState_IsLegalTransition_m2494 (GamePhaseState_t466 * __this, int32_t ___oldPhase, int32_t ___newPhase, const MethodInfo* method)
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
extern "C" void GamePhaseState_TransitionToPhase_m2495 (GamePhaseState_t466 * __this, int32_t ___newPhase, const MethodInfo* method)
{
	{
		int32_t L_0 = GamePhaseState_get_gamePhase_m2482(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___newPhase;
		bool L_2 = GamePhaseState_IsLegalTransition_m2494(__this, L_0, L_1, /*hidden argument*/NULL);
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
		int32_t L_3 = ___newPhase;
		GamePhaseState_set_gamePhase_m2483(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___newPhase;
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_002e;
		}
	}
	{
		Object_t * L_5 = GamePhaseState_SetupPendingPhase_m2491(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3122(__this, L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		GamePhaseChangedEventHandler_t465 * L_6 = (__this->___GamePhaseChanged_8);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		GamePhaseChangedEventHandler_t465 * L_7 = (__this->___GamePhaseChanged_8);
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(10 /* System.Void GamePhaseState/GamePhaseChangedEventHandler::Invoke() */, L_7);
	}

IL_0044:
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
extern "C" void GameUI__ctor_m2496 (GameUI_t455 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUI::SetUIActive(System.Boolean)
extern "C" void GameUI_SetUIActive_m2497 (GameUI_t455 * __this, bool ___uiActive, const MethodInfo* method)
{
	{
		GameObject_t310 * L_0 = Component_get_gameObject_m3159(__this, /*hidden argument*/NULL);
		bool L_1 = ___uiActive;
		NullCheck(L_0);
		GameObject_SetActive_m3361(L_0, L_1, /*hidden argument*/NULL);
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



// GameUIController
#include "AssemblyU2DCSharp_GameUIController.h"
#ifndef _MSC_VER
#else
#endif
// GameUIController
#include "AssemblyU2DCSharp_GameUIControllerMethodDeclarations.h"

struct GameObject_t310;
struct GameUI_t455;
// Declaration !!0 UnityEngine.GameObject::GetComponent<GameUI>()
// !!0 UnityEngine.GameObject::GetComponent<GameUI>()
#define GameObject_GetComponent_TisGameUI_t455_m3604(__this, method) (( GameUI_t455 * (*) (GameObject_t310 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m3434_gshared)(__this, method)


// System.Void GameUIController::.ctor()
extern "C" void GameUIController__ctor_m2498 (GameUIController_t470 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameUIController GameUIController::get_instance()
extern TypeInfo* GameUIController_t470_il2cpp_TypeInfo_var;
extern "C" GameUIController_t470 * GameUIController_get_instance_m2499 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t470 * L_0 = ((GameUIController_t470_StaticFields*)GameUIController_t470_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameUIController::set_instance(GameUIController)
extern TypeInfo* GameUIController_t470_il2cpp_TypeInfo_var;
extern "C" void GameUIController_set_instance_m2500 (Object_t * __this /* static, unused */, GameUIController_t470 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIController_t470_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_t470 * L_0 = ___value;
		((GameUIController_t470_StaticFields*)GameUIController_t470_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void GameUIController::Awake()
extern TypeInfo* GameUIU5BU5D_t468_il2cpp_TypeInfo_var;
extern "C" void GameUIController_Awake_m2501 (GameUIController_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameUIU5BU5D_t468_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameUIController_set_instance_m2500(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___gameUIs_6 = ((GameUIU5BU5D_t468*)SZArrayNew(GameUIU5BU5D_t468_il2cpp_TypeInfo_var, 4));
		return;
	}
}
// System.Void GameUIController::Start()
extern const MethodInfo* GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var;
extern "C" void GameUIController_Start_m2502 (GameUIController_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484121);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t310 * L_0 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_0);
		GameObject_SetActive_m3361(L_0, 0, /*hidden argument*/NULL);
		GameObject_t310 * L_1 = (__this->___levelPlayUIGameObject_4);
		NullCheck(L_1);
		GameObject_SetActive_m3361(L_1, 0, /*hidden argument*/NULL);
		GameObject_t310 * L_2 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_2);
		GameObject_SetActive_m3361(L_2, 0, /*hidden argument*/NULL);
		GameObject_t310 * L_3 = (__this->___gameOverUIGameObject_5);
		NullCheck(L_3);
		GameObject_SetActive_m3361(L_3, 0, /*hidden argument*/NULL);
		GameUIU5BU5D_t468* L_4 = (__this->___gameUIs_6);
		GameObject_t310 * L_5 = (__this->___welcomeUIGameObject_2);
		NullCheck(L_5);
		GameUI_t455 * L_6 = GameObject_GetComponent_TisGameUI_t455_m3604(L_5, /*hidden argument*/GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((GameUI_t455 **)(GameUI_t455 **)SZArrayLdElema(L_4, 0)) = (GameUI_t455 *)L_6;
		GameUIU5BU5D_t468* L_7 = (__this->___gameUIs_6);
		GameObject_t310 * L_8 = (__this->___levelPlayUIGameObject_4);
		NullCheck(L_8);
		GameUI_t455 * L_9 = GameObject_GetComponent_TisGameUI_t455_m3604(L_8, /*hidden argument*/GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_9);
		*((GameUI_t455 **)(GameUI_t455 **)SZArrayLdElema(L_7, 2)) = (GameUI_t455 *)L_9;
		GameUIU5BU5D_t468* L_10 = (__this->___gameUIs_6);
		GameObject_t310 * L_11 = (__this->___levelEndUIGameObject_3);
		NullCheck(L_11);
		GameUI_t455 * L_12 = GameObject_GetComponent_TisGameUI_t455_m3604(L_11, /*hidden argument*/GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		ArrayElementTypeCheck (L_10, L_12);
		*((GameUI_t455 **)(GameUI_t455 **)SZArrayLdElema(L_10, 1)) = (GameUI_t455 *)L_12;
		GameUIU5BU5D_t468* L_13 = (__this->___gameUIs_6);
		GameObject_t310 * L_14 = (__this->___gameOverUIGameObject_5);
		NullCheck(L_14);
		GameUI_t455 * L_15 = GameObject_GetComponent_TisGameUI_t455_m3604(L_14, /*hidden argument*/GameObject_GetComponent_TisGameUI_t455_m3604_MethodInfo_var);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 3);
		ArrayElementTypeCheck (L_13, L_15);
		*((GameUI_t455 **)(GameUI_t455 **)SZArrayLdElema(L_13, 3)) = (GameUI_t455 *)L_15;
		GameUIController_RegisterForEvents_m2504(__this, /*hidden argument*/NULL);
		GameUIController_OnGamePhaseChanged_m2506(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::OnDestroy()
extern "C" void GameUIController_OnDestroy_m2503 (GameUIController_t470 * __this, const MethodInfo* method)
{
	{
		GameUIController_UnregisterForEvents_m2505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var;
extern "C" void GameUIController_RegisterForEvents_m2504 (GameUIController_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var = il2cpp_codegen_method_info_from_index(474);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2480(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameUIController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var;
extern "C" void GameUIController_UnregisterForEvents_m2505 (GameUIController_t470 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var = il2cpp_codegen_method_info_from_index(474);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GameUIController_OnGamePhaseChanged_m2506_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameUIController::OnGamePhaseChanged()
extern "C" void GameUIController_OnGamePhaseChanged_m2506 (GameUIController_t470 * __this, const MethodInfo* method)
{
	CrossSceneState_t440 * V_0 = {0};
	int32_t V_1 = {0};
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_002c;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_0060;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0078;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 3)
		{
			goto IL_0084;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 4)
		{
			goto IL_006c;
		}
	}
	{
		goto IL_0090;
	}

IL_002c:
	{
		DebugConfig_t443 * L_3 = DebugConfig_get_instance_m2363(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = DebugConfig_get_useDebugValues_m2361(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		GameUIController_SetActiveUI_m2507(__this, 1, /*hidden argument*/NULL);
		goto IL_004e;
	}

IL_0047:
	{
		GameUIController_SetActiveUI_m2507(__this, 0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		CrossSceneState_t440 * L_5 = CrossSceneState_get_instance_m2353(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		CrossSceneState_t440 * L_6 = V_0;
		NullCheck(L_6);
		L_6->___didWelcome_2 = 1;
		goto IL_0090;
	}

IL_0060:
	{
		GameUIController_SetActiveUI_m2507(__this, 2, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_006c:
	{
		GameUIController_SetActiveUI_m2507(__this, 2, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0078:
	{
		GameUIController_SetActiveUI_m2507(__this, 1, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0084:
	{
		GameUIController_SetActiveUI_m2507(__this, 3, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0090:
	{
		return;
	}
}
// System.Void GameUIController::SetActiveUI(GameUIController/GameUIsType)
extern "C" void GameUIController_SetActiveUI_m2507 (GameUIController_t470 * __this, int32_t ___uiType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	GameUI_t455 * V_1 = {0};
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		GameUIU5BU5D_t468* L_0 = (__this->___gameUIs_6);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_1 = (*(GameUI_t455 **)(GameUI_t455 **)SZArrayLdElema(L_0, L_2));
		GameUI_t455 * L_3 = V_1;
		int32_t L_4 = V_0;
		int32_t L_5 = ___uiType;
		NullCheck(L_3);
		GameUI_SetUIActive_m2497(L_3, ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), /*hidden argument*/NULL);
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
// GoogleAdController
#include "AssemblyU2DCSharp_GoogleAdControllerMethodDeclarations.h"

// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// GADBannerSize
#include "AssemblyU2DCSharp_GADBannerSize.h"
// GoogleMobileAd
#include "AssemblyU2DCSharp_GoogleMobileAdMethodDeclarations.h"


// System.Void GoogleAdController::.ctor()
extern "C" void GoogleAdController__ctor_m2508 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m3063(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::Awake()
extern TypeInfo* GoogleMobileAd_t103_il2cpp_TypeInfo_var;
extern TypeInfo* GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_Awake_m2509 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAd_t103_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(133);
		GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GoogleMobileAd_t103_il2cpp_TypeInfo_var);
		GoogleMobileAd_Init_m458(NULL /*static, unused*/, /*hidden argument*/NULL);
		GoogleMobileAd_AddKeyword_m465(NULL /*static, unused*/, (String_t*) &_stringLiteral152, /*hidden argument*/NULL);
		Object_t * L_0 = GoogleMobileAd_CreateAdBanner_m461(NULL /*static, unused*/, 7, 1, /*hidden argument*/NULL);
		__this->___banner_3 = L_0;
		Object_t * L_1 = (__this->___banner_3);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void GoogleAdController::Start()
extern "C" void GoogleAdController_Start_m2510 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_RegisterForEvents_m2512(__this, /*hidden argument*/NULL);
		GoogleAdController_UpdateBanner_m2515(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::OnDestroy()
extern "C" void GoogleAdController_OnDestroy_m2511 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UnregisterForEvents_m2513(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var;
extern "C" void GoogleAdController_RegisterForEvents_m2512 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var = il2cpp_codegen_method_info_from_index(475);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2480(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var;
extern "C" void GoogleAdController_UnregisterForEvents_m2513 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(367);
		GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var = il2cpp_codegen_method_info_from_index(475);
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
		GamePhaseState_t466 * L_1 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GoogleAdController_OnGamePhaseChanged_m2514_MethodInfo_var };
		GamePhaseChangedEventHandler_t465 * L_3 = (GamePhaseChangedEventHandler_t465 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t465_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2467(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2481(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void GoogleAdController::OnGamePhaseChanged()
extern "C" void GoogleAdController_OnGamePhaseChanged_m2514 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	{
		GoogleAdController_UpdateBanner_m2515(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GoogleAdController::UpdateBanner()
extern TypeInfo* GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var;
extern "C" void GoogleAdController_UpdateBanner_m2515 (GoogleAdController_t472 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(135);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		GamePhaseState_t466 * L_0 = GamePhaseState_get_instance_m2484(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = GamePhaseState_get_gamePhase_m2482(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 0)
		{
			goto IL_0028;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 1)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 2)
		{
			goto IL_0048;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)1)) == 3)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0048;
	}

IL_0028:
	{
		Object_t * L_3 = (__this->___banner_3);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var, L_3);
		goto IL_0063;
	}

IL_0038:
	{
		Object_t * L_4 = (__this->___banner_3);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void GoogleMobileAdBanner::Hide() */, GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var, L_4);
		goto IL_0063;
	}

IL_0048:
	{
		Object_t * L_5 = (__this->___banner_3);
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(1 /* System.Void GoogleMobileAdBanner::Show() */, GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var, L_5);
		Object_t * L_6 = (__this->___banner_3);
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(2 /* System.Void GoogleMobileAdBanner::Refresh() */, GoogleMobileAdBanner_t98_il2cpp_TypeInfo_var, L_6);
		goto IL_0063;
	}

IL_0063:
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



#ifdef __clang__
#pragma clang diagnostic pop
#endif
