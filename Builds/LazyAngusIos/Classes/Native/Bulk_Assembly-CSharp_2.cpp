#include "il2cpp-config.h"
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
extern "C" void NotificationReceived__ctor_m2106 (NotificationReceived_t387 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/NotificationReceived::Invoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean)
extern "C" void NotificationReceived_Invoke_m2107 (NotificationReceived_t387 * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NotificationReceived_Invoke_m2107((NotificationReceived_t387 *)__this->___prev_9,___message, ___additionalData, ___isActive, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Dictionary_2_t312 * ___additionalData, bool ___isActive, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___message, ___additionalData, ___isActive,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult OneSignal/NotificationReceived::BeginInvoke(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.Boolean,System.AsyncCallback,System.Object)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * NotificationReceived_BeginInvoke_m2108 (NotificationReceived_t387 * __this, String_t* ___message, Dictionary_2_t312 * ___additionalData, bool ___isActive, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___message;
	__d_args[1] = ___additionalData;
	__d_args[2] = Box(Boolean_t59_il2cpp_TypeInfo_var, &___isActive);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/NotificationReceived::EndInvoke(System.IAsyncResult)
extern "C" void NotificationReceived_EndInvoke_m2109 (NotificationReceived_t387 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void IdsAvailable__ctor_m2110 (IdsAvailable_t376 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String)
extern "C" void IdsAvailable_Invoke_m2111 (IdsAvailable_t376 * __this, String_t* ___playerID, String_t* ___pushToken, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		IdsAvailable_Invoke_m2111((IdsAvailable_t376 *)__this->___prev_9,___playerID, ___pushToken, method);
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
extern "C" void pinvoke_delegate_wrapper_IdsAvailable_t376(Il2CppObject* delegate, String_t* ___playerID, String_t* ___pushToken)
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
extern "C" Object_t * IdsAvailable_BeginInvoke_m2112 (IdsAvailable_t376 * __this, String_t* ___playerID, String_t* ___pushToken, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___playerID;
	__d_args[1] = ___pushToken;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/IdsAvailable::EndInvoke(System.IAsyncResult)
extern "C" void IdsAvailable_EndInvoke_m2113 (IdsAvailable_t376 * __this, Object_t * ___result, const MethodInfo* method)
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
extern "C" void TagsReceived__ctor_m2114 (TagsReceived_t389 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void TagsReceived_Invoke_m2115 (TagsReceived_t389 * __this, Dictionary_2_t312 * ___tags, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		TagsReceived_Invoke_m2115((TagsReceived_t389 *)__this->___prev_9,___tags, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Dictionary_2_t312 * ___tags, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Dictionary_2_t312 * ___tags, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___tags,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult OneSignal/TagsReceived::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>,System.AsyncCallback,System.Object)
extern "C" Object_t * TagsReceived_BeginInvoke_m2116 (TagsReceived_t389 * __this, Dictionary_2_t312 * ___tags, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___tags;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void OneSignal/TagsReceived::EndInvoke(System.IAsyncResult)
extern "C" void TagsReceived_EndInvoke_m2117 (TagsReceived_t389 * __this, Object_t * ___result, const MethodInfo* method)
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
struct GameObject_t352;
struct OneSignal_t379;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::AddComponent<System.Object>()
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m3854_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m3854(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3854_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::AddComponent<OneSignal>()
// !!0 UnityEngine.GameObject::AddComponent<OneSignal>()
#define GameObject_AddComponent_TisOneSignal_t379_m3986(__this, method) (( OneSignal_t379 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3854_gshared)(__this, method)


// System.Void OneSignal::.ctor()
extern "C" void OneSignal__ctor_m2118 (OneSignal_t379 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::.cctor()
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern "C" void OneSignal__cctor_m2119 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___logLevel_5 = 4;
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived,System.Boolean)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisOneSignal_t379_m3986_MethodInfo_var;
extern "C" void OneSignal_Init_m2120 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t387 * ___inNotificationDelegate, bool ___autoRegister, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_AddComponent_TisOneSignal_t379_m3986_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484059);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		bool L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___initialized_8;
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
		NotificationReceived_t387 * L_1 = ___inNotificationDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9 = L_1;
		GameObject_t352 * L_2 = (GameObject_t352 *)il2cpp_codegen_object_new (GameObject_t352_il2cpp_TypeInfo_var);
		GameObject__ctor_m3855(L_2, (String_t*) &_stringLiteral802, /*hidden argument*/NULL);
		V_0 = L_2;
		GameObject_t352 * L_3 = V_0;
		NullCheck(L_3);
		GameObject_AddComponent_TisOneSignal_t379_m3986(L_3, /*hidden argument*/GameObject_AddComponent_TisOneSignal_t379_m3986_MethodInfo_var);
		GameObject_t352 * L_4 = V_0;
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___initialized_8 = 1;
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String,OneSignal/NotificationReceived)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m2121 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, NotificationReceived_t387 * ___inNotificationDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		String_t* L_1 = ___googleProjectNumber;
		NotificationReceived_t387 * L_2 = ___inNotificationDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		OneSignal_Init_m2120(NULL /*static, unused*/, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::Init(System.String,System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m2122 (Object_t * __this /* static, unused */, String_t* ___appId, String_t* ___googleProjectNumber, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		String_t* L_1 = ___googleProjectNumber;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		OneSignal_Init_m2120(NULL /*static, unused*/, L_0, L_1, (NotificationReceived_t387 *)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::Init(System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern "C" void OneSignal_Init_m2123 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		OneSignal_Init_m2120(NULL /*static, unused*/, L_0, (String_t*)NULL, (NotificationReceived_t387 *)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void OneSignal::SetLogLevel(OneSignal/LOG_LEVEL,OneSignal/LOG_LEVEL)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SetLogLevel_m2124 (Object_t * __this /* static, unused */, int32_t ___inLogLevel, int32_t ___inVisualLevel, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___inLogLevel;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___logLevel_5 = L_0;
		int32_t L_1 = ___inVisualLevel;
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___visualLogLevel_6 = L_1;
		return;
	}
}
// System.Void OneSignal::SendTag(System.String,System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SendTag_m2125 (Object_t * __this /* static, unused */, String_t* ___tagName, String_t* ___tagValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_1 = ___tagName;
		String_t* L_2 = ___tagValue;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(2 /* System.Void OneSignalPlatform::SendTag(System.String,System.String) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void OneSignal::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_SendTags_m2126 (Object_t * __this /* static, unused */, Object_t* ___tags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		Object_t* L_1 = ___tags;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t* >::Invoke(3 /* System.Void OneSignalPlatform::SendTags(System.Collections.Generic.IDictionary`2<System.String,System.String>) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::GetTags(OneSignal/TagsReceived)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetTags_m2127 (Object_t * __this /* static, unused */, TagsReceived_t389 * ___inTagsReceivedDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		TagsReceived_t389 * L_0 = ___inTagsReceivedDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___tagsReceivedDelegate_4 = L_0;
		Object_t * L_1 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void OneSignalPlatform::GetTags() */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void OneSignal::GetTags()
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetTags_m2128 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void OneSignalPlatform::GetTags() */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::DeleteTag(System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_DeleteTag_m2129 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_1 = ___key;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void OneSignalPlatform::DeleteTag(System.String) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::DeleteTags(System.Collections.Generic.IList`1<System.String>)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_DeleteTags_m2130 (Object_t * __this /* static, unused */, Object_t* ___keys, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		Object_t* L_1 = ___keys;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t* >::Invoke(6 /* System.Void OneSignalPlatform::DeleteTags(System.Collections.Generic.IList`1<System.String>) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void OneSignal::SendPurchase(System.Double)
extern "C" void OneSignal_SendPurchase_m2131 (Object_t * __this /* static, unused */, double ___amount, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::RegisterForPushNotifications()
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_RegisterForPushNotifications_m2132 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void OneSignalPlatform::RegisterForPushNotifications() */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::GetIdsAvailable(OneSignal/IdsAvailable)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetIdsAvailable_m2133 (Object_t * __this /* static, unused */, IdsAvailable_t376 * ___inIdsAvailableDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IdsAvailable_t376 * L_0 = ___inIdsAvailableDelegate;
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3 = L_0;
		Object_t * L_1 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(8 /* System.Void OneSignalPlatform::IdsAvailable() */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void OneSignal::GetIdsAvailable()
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_GetIdsAvailable_m2134 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(8 /* System.Void OneSignalPlatform::IdsAvailable() */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void OneSignal::EnableVibrate(System.Boolean)
extern "C" void OneSignal_EnableVibrate_m2135 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::EnableSound(System.Boolean)
extern "C" void OneSignal_EnableSound_m2136 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void OneSignal::onPushNotificationReceived(System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onPushNotificationReceived_m2137 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		NotificationReceived_t387 * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_1 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		String_t* L_2 = ___jsonString;
		NotificationReceived_t387 * L_3 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___notificationDelegate_9;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, NotificationReceived_t387 * >::Invoke(9 /* System.Void OneSignalPlatform::FireNotificationReceivedEvent(System.String,OneSignal/NotificationReceived) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.Void OneSignal::onIdsAvailable(System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onIdsAvailable_m2138 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		IdsAvailable_t376 * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_1 = ___jsonString;
		Object_t * L_2 = Json_Deserialize_m2104(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)IsInst(L_2, Dictionary_2_t312_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		IdsAvailable_t376 * L_3 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___idsAvailableDelegate_3;
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral803);
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral804);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void OneSignal/IdsAvailable::Invoke(System.String,System.String) */, L_3, ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var)));
	}

IL_0040:
	{
		return;
	}
}
// System.Void OneSignal::onTagsReceived(System.String)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern "C" void OneSignal_onTagsReceived_m2139 (OneSignal_t379 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		TagsReceived_t389 * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___tagsReceivedDelegate_4;
		String_t* L_1 = ___jsonString;
		Object_t * L_2 = Json_Deserialize_m2104(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< Dictionary_2_t312 * >::Invoke(11 /* System.Void OneSignal/TagsReceived::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, ((Dictionary_2_t312 *)IsInst(L_2, Dictionary_2_t312_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void OneSignal::OnApplicationPause(System.Boolean)
extern TypeInfo* OneSignal_t379_il2cpp_TypeInfo_var;
extern TypeInfo* OneSignalPlatform_t390_il2cpp_TypeInfo_var;
extern "C" void OneSignal_OnApplicationPause_m2140 (OneSignal_t379 * __this, bool ___paused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneSignal_t379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		OneSignalPlatform_t390_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(386);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OneSignal_t379_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((OneSignal_t379_StaticFields*)OneSignal_t379_il2cpp_TypeInfo_var->static_fields)->___oneSignalPlatform_7;
		bool L_1 = ___paused;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void OneSignalPlatform::OnApplicationPause(System.Boolean) */, OneSignalPlatform_t390_il2cpp_TypeInfo_var, L_0, L_1);
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
extern "C" void U3CSaveScreenshotU3Ec__IteratorD__ctor_m2141 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSaveScreenshotU3Ec__IteratorD_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2142 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSaveScreenshotU3Ec__IteratorD_System_Collections_IEnumerator_get_Current_m2143 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t708_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t108_il2cpp_TypeInfo_var;
extern "C" bool U3CSaveScreenshotU3Ec__IteratorD_MoveNext_m2144 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t708_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(183);
		Texture2D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
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
		WaitForEndOfFrame_t708 * L_2 = (WaitForEndOfFrame_t708 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t708_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m3695(L_2, /*hidden argument*/NULL);
		__this->___U24current_4 = L_2;
		__this->___U24PC_3 = 1;
		goto IL_00cb;
	}

IL_0038:
	{
		int32_t L_3 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CwidthU3E__0_0 = L_3;
		int32_t L_4 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___U3CheightU3E__1_1 = L_4;
		int32_t L_5 = (__this->___U3CwidthU3E__0_0);
		int32_t L_6 = (__this->___U3CheightU3E__1_1);
		Texture2D_t108 * L_7 = (Texture2D_t108 *)il2cpp_codegen_object_new (Texture2D_t108_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3696(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtexU3E__2_2 = L_7;
		Texture2D_t108 * L_8 = (__this->___U3CtexU3E__2_2);
		int32_t L_9 = (__this->___U3CwidthU3E__0_0);
		int32_t L_10 = (__this->___U3CheightU3E__1_1);
		Rect_t694  L_11 = {0};
		Rect__ctor_m3680(&L_11, (0.0f), (0.0f), (((float)L_9)), (((float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m3697(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		Texture2D_t108 * L_12 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_12);
		Texture2D_Apply_m3698(L_12, /*hidden argument*/NULL);
		SA_ScreenShotMaker_t391 * L_13 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_13);
		Action_1_t268 * L_14 = (L_13->___OnScreenshotReady_6);
		if (!L_14)
		{
			goto IL_00c2;
		}
	}
	{
		SA_ScreenShotMaker_t391 * L_15 = (__this->___U3CU3Ef__this_5);
		NullCheck(L_15);
		Action_1_t268 * L_16 = (L_15->___OnScreenshotReady_6);
		Texture2D_t108 * L_17 = (__this->___U3CtexU3E__2_2);
		NullCheck(L_16);
		VirtActionInvoker1< Texture2D_t108 * >::Invoke(11 /* System.Void System.Action`1<UnityEngine.Texture2D>::Invoke(!0) */, L_16, L_17);
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
extern "C" void U3CSaveScreenshotU3Ec__IteratorD_Dispose_m2145 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void SA_ScreenShotMaker/<SaveScreenshot>c__IteratorD::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CSaveScreenshotU3Ec__IteratorD_Reset_m2146 (U3CSaveScreenshotU3Ec__IteratorD_t392 * __this, const MethodInfo* method)
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
// SA_ScreenShotMaker
#include "AssemblyU2DCSharp_SA_ScreenShotMakerMethodDeclarations.h"

// UnityEngine.Coroutine
#include "UnityEngine_UnityEngine_Coroutine.h"
// SA_Singleton`1<SA_ScreenShotMaker>
#include "AssemblyU2DCSharp_SA_Singleton_1_gen_9MethodDeclarations.h"


// System.Void SA_ScreenShotMaker::.ctor()
extern TypeInfo* SA_Singleton_1_t393_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m3987_MethodInfo_var;
extern "C" void SA_ScreenShotMaker__ctor_m2147 (SA_ScreenShotMaker_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t393_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		SA_Singleton_1__ctor_m3987_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484060);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t393_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m3987(__this, /*hidden argument*/SA_Singleton_1__ctor_m3987_MethodInfo_var);
		return;
	}
}
// System.Void SA_ScreenShotMaker::GetScreenshot()
extern "C" void SA_ScreenShotMaker_GetScreenshot_m2148 (SA_ScreenShotMaker_t391 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = SA_ScreenShotMaker_SaveScreenshot_m2149(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3716(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SA_ScreenShotMaker::SaveScreenshot()
extern TypeInfo* U3CSaveScreenshotU3Ec__IteratorD_t392_il2cpp_TypeInfo_var;
extern "C" Object_t * SA_ScreenShotMaker_SaveScreenshot_m2149 (SA_ScreenShotMaker_t391 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSaveScreenshotU3Ec__IteratorD_t392_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(389);
		s_Il2CppMethodIntialized = true;
	}
	U3CSaveScreenshotU3Ec__IteratorD_t392 * V_0 = {0};
	{
		U3CSaveScreenshotU3Ec__IteratorD_t392 * L_0 = (U3CSaveScreenshotU3Ec__IteratorD_t392 *)il2cpp_codegen_object_new (U3CSaveScreenshotU3Ec__IteratorD_t392_il2cpp_TypeInfo_var);
		U3CSaveScreenshotU3Ec__IteratorD__ctor_m2141(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSaveScreenshotU3Ec__IteratorD_t392 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_5 = __this;
		U3CSaveScreenshotU3Ec__IteratorD_t392 * L_2 = V_0;
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
struct GameObject_t352;
struct TextMesh_t403;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
extern "C" Object_t * GameObject_GetComponentInChildren_TisObject_t_m3989_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponentInChildren_TisObject_t_m3989(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m3989_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
#define GameObject_GetComponentInChildren_TisTextMesh_t403_m3988(__this, method) (( TextMesh_t403 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponentInChildren_TisObject_t_m3989_gshared)(__this, method)
struct GameObject_t352;
struct TextMeshU5BU5D_t760;
struct GameObject_t352;
struct ObjectU5BU5D_t682;
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
extern "C" ObjectU5BU5D_t682* GameObject_GetComponentsInChildren_TisObject_t_m3991_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponentsInChildren_TisObject_t_m3991(__this, method) (( ObjectU5BU5D_t682* (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3991_gshared)(__this, method)
// Declaration !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.TextMesh>()
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.TextMesh>()
#define GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990(__this, method) (( TextMeshU5BU5D_t760* (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponentsInChildren_TisObject_t_m3991_gshared)(__this, method)
struct Component_t761;
struct AudioSource_t611;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t761;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m3993_gshared (Component_t761 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m3993(__this, method) (( Object_t * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t611_m3992(__this, method) (( AudioSource_t611 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)
struct GameObject_t352;
struct AudioSource_t611;
// Declaration !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t611_m3994(__this, method) (( AudioSource_t611 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3854_gshared)(__this, method)
struct Component_t761;
struct Renderer_t604;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t604_m3995(__this, method) (( Renderer_t604 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)


// System.Void DefaultPreviewButton::.ctor()
extern "C" void DefaultPreviewButton__ctor_m2150 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m626(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::Awake()
extern TypeInfo* Material_t523_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisAudioSource_t611_m3994_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void DefaultPreviewButton_Awake_m2151 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		GameObject_AddComponent_TisAudioSource_t611_m3994_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484062);
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		AudioSource_t611 * L_0 = Component_GetComponent_TisAudioSource_t611_m3992(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var);
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisAudioSource_t611_m3994(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t611_m3994_MethodInfo_var);
		AudioSource_t611 * L_3 = Component_GetComponent_TisAudioSource_t611_m3992(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var);
		AudioClip_t395 * L_4 = (__this->___sound_9);
		NullCheck(L_3);
		AudioSource_set_clip_m3996(L_3, L_4, /*hidden argument*/NULL);
		AudioSource_t611 * L_5 = Component_GetComponent_TisAudioSource_t611_m3992(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var);
		NullCheck(L_5);
		AudioSource_Stop_m3997(L_5, /*hidden argument*/NULL);
	}

IL_0039:
	{
		Renderer_t604 * L_6 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		Renderer_t604 * L_7 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_7);
		Material_t523 * L_8 = Renderer_get_material_m3998(L_7, /*hidden argument*/NULL);
		Material_t523 * L_9 = (Material_t523 *)il2cpp_codegen_object_new (Material_t523_il2cpp_TypeInfo_var);
		Material__ctor_m3999(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Renderer_set_material_m4000(L_6, L_9, /*hidden argument*/NULL);
		Texture_t394 * L_10 = (__this->___normalTexture_4);
		__this->___normalTex_8 = L_10;
		return;
	}
}
// System.Void DefaultPreviewButton::Select()
extern "C" void DefaultPreviewButton_Select_m2152 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	{
		Texture_t394 * L_0 = (__this->___selectedTexture_7);
		__this->___normalTexture_4 = L_0;
		DefaultPreviewButton_OnTimeoutPress_m2160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::Unselect()
extern "C" void DefaultPreviewButton_Unselect_m2153 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	{
		Texture_t394 * L_0 = (__this->___normalTex_8);
		__this->___normalTexture_4 = L_0;
		DefaultPreviewButton_OnTimeoutPress_m2160(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::DisabledButton()
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void DefaultPreviewButton_DisabledButton_m2154 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t394 * L_0 = (__this->___disabledTexture_6);
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Renderer_t604 * L_2 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_2);
		Material_t523 * L_3 = Renderer_get_material_m3998(L_2, /*hidden argument*/NULL);
		Texture_t394 * L_4 = (__this->___disabledTexture_6);
		NullCheck(L_3);
		Material_set_mainTexture_m4001(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		__this->___IsDisabled_11 = 1;
		return;
	}
}
// System.Void DefaultPreviewButton::EnabledButton()
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void DefaultPreviewButton_EnabledButton_m2155 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Texture_t394 * L_0 = (__this->___disabledTexture_6);
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Renderer_t604 * L_2 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_2);
		Material_t523 * L_3 = Renderer_get_material_m3998(L_2, /*hidden argument*/NULL);
		Texture_t394 * L_4 = (__this->___normalTexture_4);
		NullCheck(L_3);
		Material_set_mainTexture_m4001(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		__this->___IsDisabled_11 = 0;
		return;
	}
}
// System.String DefaultPreviewButton::get_text()
extern const MethodInfo* GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var;
extern "C" String_t* DefaultPreviewButton_get_text_m2156 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	TextMesh_t403 * V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMesh_t403 * L_1 = GameObject_GetComponentInChildren_TisTextMesh_t403_m3988(L_0, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var);
		V_0 = L_1;
		TextMesh_t403 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = TextMesh_get_text_m4002(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DefaultPreviewButton::set_text(System.String)
extern const MethodInfo* GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var;
extern "C" void DefaultPreviewButton_set_text_m2157 (DefaultPreviewButton_t349 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484065);
		s_Il2CppMethodIntialized = true;
	}
	TextMeshU5BU5D_t760* V_0 = {0};
	TextMesh_t403 * V_1 = {0};
	TextMeshU5BU5D_t760* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TextMeshU5BU5D_t760* L_1 = GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var);
		V_0 = L_1;
		TextMeshU5BU5D_t760* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0024;
	}

IL_0015:
	{
		TextMeshU5BU5D_t760* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(TextMesh_t403 **)(TextMesh_t403 **)SZArrayLdElema(L_3, L_5));
		TextMesh_t403 * L_6 = V_1;
		String_t* L_7 = ___value;
		NullCheck(L_6);
		TextMesh_set_text_m4003(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_9 = V_3;
		TextMeshU5BU5D_t760* L_10 = V_2;
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
extern TypeInfo* Input_t707_il2cpp_TypeInfo_var;
extern "C" void DefaultPreviewButton_Update_m2158 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		s_Il2CppMethodIntialized = true;
	}
	Ray_t762  V_0 = {0};
	RaycastHit_t763  V_1 = {0};
	{
		Camera_t574 * L_0 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t707_il2cpp_TypeInfo_var);
		Vector3_t536  L_1 = Input_get_mousePosition_m4005(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Ray_t762  L_2 = Camera_ScreenPointToRay_m4006(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = Input_GetMouseButtonDown_m4007(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Ray_t762  L_4 = V_0;
		bool L_5 = Physics_Raycast_m4008(NULL /*static, unused*/, L_4, (&V_1), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		Transform_t406 * L_6 = RaycastHit_get_transform_m4009((&V_1), /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_t352 * L_7 = Component_get_gameObject_m3753(L_6, /*hidden argument*/NULL);
		GameObject_t352 * L_8 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		bool L_9 = Object_op_Equality_m3778(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
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
extern const MethodInfo* Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void DefaultPreviewButton_OnClick_m2159 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484061);
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
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
		AudioSource_t611 * L_1 = Component_GetComponent_TisAudioSource_t611_m3992(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var);
		AudioClip_t395 * L_2 = (__this->___disabledsound_10);
		NullCheck(L_1);
		AudioSource_PlayOneShot_m4010(L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		AudioSource_t611 * L_3 = Component_GetComponent_TisAudioSource_t611_m3992(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t611_m3992_MethodInfo_var);
		AudioClip_t395 * L_4 = (__this->___sound_9);
		NullCheck(L_3);
		AudioSource_PlayOneShot_m4010(L_3, L_4, /*hidden argument*/NULL);
		Renderer_t604 * L_5 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_5);
		Material_t523 * L_6 = Renderer_get_material_m3998(L_5, /*hidden argument*/NULL);
		Texture_t394 * L_7 = (__this->___pressedTexture_5);
		NullCheck(L_6);
		Material_set_mainTexture_m4001(L_6, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral243);
		MonoBehaviour_CancelInvoke_m4011(__this, (String_t*) &_stringLiteral805, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4012(__this, (String_t*) &_stringLiteral805, (0.1f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultPreviewButton::OnTimeoutPress()
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void DefaultPreviewButton_OnTimeoutPress_m2160 (DefaultPreviewButton_t349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t604 * L_0 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_0);
		Material_t523 * L_1 = Renderer_get_material_m3998(L_0, /*hidden argument*/NULL);
		Texture_t394 * L_2 = (__this->___normalTexture_4);
		NullCheck(L_1);
		Material_set_mainTexture_m4001(L_1, L_2, /*hidden argument*/NULL);
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
extern TypeInfo* SA_Singleton_1_t397_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1__ctor_m4013_MethodInfo_var;
extern "C" void SALevelLoader__ctor_m2161 (SALevelLoader_t396 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		SA_Singleton_1__ctor_m4013_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484066);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t397_il2cpp_TypeInfo_var);
		SA_Singleton_1__ctor_m4013(__this, /*hidden argument*/SA_Singleton_1__ctor_m4013_MethodInfo_var);
		return;
	}
}
// System.Void SALevelLoader::Awake()
extern "C" void SALevelLoader_Awake_m2162 (SALevelLoader_t396 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALevelLoader::LoadLevel(System.String)
extern "C" void SALevelLoader_LoadLevel_m2163 (SALevelLoader_t396 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevel_m4014(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALevelLoader::Restart()
extern "C" void SALevelLoader_Restart_m2164 (SALevelLoader_t396 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Application_get_loadedLevelName_m3752(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m4014(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
extern "C" void SALoadedSceneOnClick__ctor_m2165 (SALoadedSceneOnClick_t398 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m2167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SALoadedSceneOnClick::OnClick()
extern TypeInfo* SA_Singleton_1_t397_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m4015_MethodInfo_var;
extern "C" void SALoadedSceneOnClick_OnClick_m2166 (SALoadedSceneOnClick_t398 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		SA_Singleton_1_get_instance_m4015_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t397_il2cpp_TypeInfo_var);
		SALevelLoader_t396 * L_0 = SA_Singleton_1_get_instance_m4015(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m4015_MethodInfo_var);
		String_t* L_1 = (__this->___levelName_2);
		NullCheck(L_0);
		SALevelLoader_LoadLevel_m2163(L_0, L_1, /*hidden argument*/NULL);
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
struct Component_t761;
struct DefaultPreviewButton_t349;
// Declaration !!0 UnityEngine.Component::GetComponent<DefaultPreviewButton>()
// !!0 UnityEngine.Component::GetComponent<DefaultPreviewButton>()
#define Component_GetComponent_TisDefaultPreviewButton_t349_m4016(__this, method) (( DefaultPreviewButton_t349 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)


// System.Void SAOnClickAction::.ctor()
extern "C" void SAOnClickAction__ctor_m2167 (SAOnClickAction_t399 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SAOnClickAction::Awake()
extern TypeInfo* EventHandlerFunction_t675_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDefaultPreviewButton_t349_m4016_MethodInfo_var;
extern "C" void SAOnClickAction_Awake_m2168 (SAOnClickAction_t399 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EventHandlerFunction_t675_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(207);
		Component_GetComponent_TisDefaultPreviewButton_t349_m4016_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484068);
		s_Il2CppMethodIntialized = true;
	}
	DefaultPreviewButton_t349 * V_0 = {0};
	{
		DefaultPreviewButton_t349 * L_0 = Component_GetComponent_TisDefaultPreviewButton_t349_m4016(__this, /*hidden argument*/Component_GetComponent_TisDefaultPreviewButton_t349_m4016_MethodInfo_var);
		V_0 = L_0;
		DefaultPreviewButton_t349 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		DefaultPreviewButton_t349 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)GetVirtualMethodInfo(__this, 4) };
		EventHandlerFunction_t675 * L_5 = (EventHandlerFunction_t675 *)il2cpp_codegen_object_new (EventHandlerFunction_t675_il2cpp_TypeInfo_var);
		EventHandlerFunction__ctor_m3636(L_5, __this, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, EventHandlerFunction_t675 * >::Invoke(4 /* System.Void UnionAssets.FLE.EventDispatcher::addEventListener(System.String,UnionAssets.FLE.EventHandlerFunction) */, L_3, (String_t*) &_stringLiteral243, L_5);
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
extern "C" void SAOpenUrlOnClick__ctor_m2169 (SAOpenUrlOnClick_t400 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m2167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SAOpenUrlOnClick::OnClick()
extern "C" void SAOpenUrlOnClick_OnClick_m2170 (SAOpenUrlOnClick_t400 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_2);
		Application_OpenURL_m3957(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
extern "C" void SASendMessageOnClick__ctor_m2171 (SASendMessageOnClick_t401 * __this, const MethodInfo* method)
{
	{
		SAOnClickAction__ctor_m2167(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SASendMessageOnClick::OnClick()
extern "C" void SASendMessageOnClick_OnClick_m2172 (SASendMessageOnClick_t401 * __this, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___Reciver_2);
		String_t* L_1 = (__this->___MethodName_3);
		NullCheck(L_0);
		GameObject_SendMessage_m4017(L_0, L_1, 1, /*hidden argument*/NULL);
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
struct Component_t761;
struct Collider_t764;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider>()
#define Component_GetComponent_TisCollider_t764_m4018(__this, method) (( Collider_t764 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)


// System.Void SA_BackButton::.ctor()
extern "C" void SA_BackButton__ctor_m2173 (SA_BackButton_t402 * __this, const MethodInfo* method)
{
	{
		DefaultPreviewButton__ctor_m2150(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_BackButton::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SA_BackButton_t402_il2cpp_TypeInfo_var;
extern "C" void SA_BackButton__cctor_m2174 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SA_BackButton_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12 = L_0;
		return;
	}
}
// System.Void SA_BackButton::Start()
extern TypeInfo* SA_BackButton_t402_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SA_BackButton_Start_m2175 (SA_BackButton_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_BackButton_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t402_il2cpp_TypeInfo_var);
		String_t* L_0 = ((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t352 * L_3 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		Object_Destroy_m3897(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		GameObject_t352 * L_4 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t402_il2cpp_TypeInfo_var);
		String_t* L_5 = ((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_7 = String_op_Equality_m456(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_8 = Application_get_loadedLevelName_m3752(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t402_il2cpp_TypeInfo_var);
		((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12 = L_8;
	}

IL_0049:
	{
		return;
	}
}
// System.Void SA_BackButton::FixedUpdate()
extern TypeInfo* SA_BackButton_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider_t764_m4018_MethodInfo_var;
extern "C" void SA_BackButton_FixedUpdate_m2176 (SA_BackButton_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_BackButton_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		Component_GetComponent_TisCollider_t764_m4018_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484069);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Application_get_loadedLevelName_m3752(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t402_il2cpp_TypeInfo_var);
		String_t* L_1 = ((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Renderer_t604 * L_3 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_3);
		Renderer_set_enabled_m4019(L_3, 0, /*hidden argument*/NULL);
		Collider_t764 * L_4 = Component_GetComponent_TisCollider_t764_m4018(__this, /*hidden argument*/Component_GetComponent_TisCollider_t764_m4018_MethodInfo_var);
		NullCheck(L_4);
		Collider_set_enabled_m4020(L_4, 0, /*hidden argument*/NULL);
		goto IL_0049;
	}

IL_0031:
	{
		Renderer_t604 * L_5 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_5);
		Renderer_set_enabled_m4019(L_5, 1, /*hidden argument*/NULL);
		Collider_t764 * L_6 = Component_GetComponent_TisCollider_t764_m4018(__this, /*hidden argument*/Component_GetComponent_TisCollider_t764_m4018_MethodInfo_var);
		NullCheck(L_6);
		Collider_set_enabled_m4020(L_6, 1, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.Void SA_BackButton::OnClick()
extern "C" void SA_BackButton_OnClick_m2177 (SA_BackButton_t402 * __this, const MethodInfo* method)
{
	{
		DefaultPreviewButton_OnClick_m2159(__this, /*hidden argument*/NULL);
		SA_BackButton_GoBack_m2178(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_BackButton::GoBack()
extern TypeInfo* SA_Singleton_1_t397_il2cpp_TypeInfo_var;
extern TypeInfo* SA_BackButton_t402_il2cpp_TypeInfo_var;
extern const MethodInfo* SA_Singleton_1_get_instance_m4015_MethodInfo_var;
extern "C" void SA_BackButton_GoBack_m2178 (SA_BackButton_t402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SA_Singleton_1_t397_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(395);
		SA_BackButton_t402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(397);
		SA_Singleton_1_get_instance_m4015_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484067);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SA_Singleton_1_t397_il2cpp_TypeInfo_var);
		SALevelLoader_t396 * L_0 = SA_Singleton_1_get_instance_m4015(NULL /*static, unused*/, /*hidden argument*/SA_Singleton_1_get_instance_m4015_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(SA_BackButton_t402_il2cpp_TypeInfo_var);
		String_t* L_1 = ((SA_BackButton_t402_StaticFields*)SA_BackButton_t402_il2cpp_TypeInfo_var->static_fields)->___firstLevel_12;
		NullCheck(L_0);
		SALevelLoader_LoadLevel_m2163(L_0, L_1, /*hidden argument*/NULL);
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
extern "C" void SA_Label__ctor_m2179 (SA_Label_t351 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA_Label::get_text()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var;
extern "C" String_t* SA_Label_get_text_m2180 (SA_Label_t351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484064);
		s_Il2CppMethodIntialized = true;
	}
	TextMesh_t403 * V_0 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
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
		GameObject_t352 * L_3 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TextMesh_t403 * L_4 = GameObject_GetComponentInChildren_TisTextMesh_t403_m3988(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t403_m3988_MethodInfo_var);
		V_0 = L_4;
		TextMesh_t403 * L_5 = V_0;
		bool L_6 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_5, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		TextMesh_t403 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = TextMesh_get_text_m4002(L_7, /*hidden argument*/NULL);
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
extern const MethodInfo* GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var;
extern "C" void SA_Label_set_text_m2181 (SA_Label_t351 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484065);
		s_Il2CppMethodIntialized = true;
	}
	TextMeshU5BU5D_t760* V_0 = {0};
	TextMesh_t403 * V_1 = {0};
	TextMeshU5BU5D_t760* V_2 = {0};
	int32_t V_3 = 0;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
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
		GameObject_t352 * L_2 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TextMeshU5BU5D_t760* L_3 = GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990(L_2, /*hidden argument*/GameObject_GetComponentsInChildren_TisTextMesh_t403_m3990_MethodInfo_var);
		V_0 = L_3;
		TextMeshU5BU5D_t760* L_4 = V_0;
		V_2 = L_4;
		V_3 = 0;
		goto IL_0042;
	}

IL_0027:
	{
		TextMeshU5BU5D_t760* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_1 = (*(TextMesh_t403 **)(TextMesh_t403 **)SZArrayLdElema(L_5, L_7));
		TextMesh_t403 * L_8 = V_1;
		bool L_9 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_8, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		TextMesh_t403 * L_10 = V_1;
		String_t* L_11 = ___value;
		NullCheck(L_10);
		TextMesh_set_text_m4003(L_10, L_11, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_12 = V_3;
		V_3 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_13 = V_3;
		TextMeshU5BU5D_t760* L_14 = V_2;
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

struct Object_t703;
struct SA_StatusBar_t404;
struct Object_t703;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m4022_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m4022(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m4022_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<SA_StatusBar>()
// !!0 UnityEngine.Object::FindObjectOfType<SA_StatusBar>()
#define Object_FindObjectOfType_TisSA_StatusBar_t404_m4021(__this /* static, unused */, method) (( SA_StatusBar_t404 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m4022_gshared)(__this /* static, unused */, method)


// System.Void SA_StatusBar::.ctor()
extern "C" void SA_StatusBar__ctor_m2182 (SA_StatusBar_t404 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_StatusBar::SetText(System.String)
extern "C" void SA_StatusBar_SetText_m2183 (SA_StatusBar_t404 * __this, String_t* ___text, const MethodInfo* method)
{
	{
		TextMesh_t403 * L_0 = (__this->___title_2);
		String_t* L_1 = ___text;
		NullCheck(L_0);
		TextMesh_set_text_m4003(L_0, L_1, /*hidden argument*/NULL);
		TextMesh_t403 * L_2 = (__this->___shadow_3);
		String_t* L_3 = ___text;
		NullCheck(L_2);
		TextMesh_set_text_m4003(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String SA_StatusBar::get_text()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var;
extern "C" String_t* SA_StatusBar_get_text_m2184 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		s_Il2CppMethodIntialized = true;
	}
	SA_StatusBar_t404 * V_0 = {0};
	{
		SA_StatusBar_t404 * L_0 = Object_FindObjectOfType_TisSA_StatusBar_t404_m4021(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var);
		V_0 = L_0;
		SA_StatusBar_t404 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m3778(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
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
		SA_StatusBar_t404 * L_4 = V_0;
		NullCheck(L_4);
		TextMesh_t403 * L_5 = (L_4->___title_2);
		NullCheck(L_5);
		String_t* L_6 = TextMesh_get_text_m4002(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void SA_StatusBar::set_text(System.String)
extern const MethodInfo* Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var;
extern "C" void SA_StatusBar_set_text_m2185 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484070);
		s_Il2CppMethodIntialized = true;
	}
	SA_StatusBar_t404 * V_0 = {0};
	{
		SA_StatusBar_t404 * L_0 = Object_FindObjectOfType_TisSA_StatusBar_t404_m4021(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisSA_StatusBar_t404_m4021_MethodInfo_var);
		V_0 = L_0;
		SA_StatusBar_t404 * L_1 = V_0;
		bool L_2 = Object_op_Equality_m3778(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
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
		SA_StatusBar_t404 * L_3 = V_0;
		String_t* L_4 = ___value;
		NullCheck(L_3);
		SA_StatusBar_SetText_m2183(L_3, L_4, /*hidden argument*/NULL);
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
extern "C" void SA_Texture__ctor_m2186 (SA_Texture_t350 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SA_Texture::Awake()
extern TypeInfo* Material_t523_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void SA_Texture_Awake_m2187 (SA_Texture_t350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Material_t523_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t604 * L_0 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		Renderer_t604 * L_1 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_1);
		Material_t523 * L_2 = Renderer_get_material_m3998(L_1, /*hidden argument*/NULL);
		Material_t523 * L_3 = (Material_t523 *)il2cpp_codegen_object_new (Material_t523_il2cpp_TypeInfo_var);
		Material__ctor_m3999(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_set_material_m4000(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture SA_Texture::get_texture()
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" Texture_t394 * SA_Texture_get_texture_m2188 (SA_Texture_t350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t604 * L_0 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_0);
		Material_t523 * L_1 = Renderer_get_material_m3998(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Texture_t394 * L_2 = Material_get_mainTexture_m4023(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void SA_Texture::set_texture(UnityEngine.Texture)
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void SA_Texture_set_texture_m2189 (SA_Texture_t350 * __this, Texture_t394 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	{
		Renderer_t604 * L_0 = Component_GetComponent_TisRenderer_t604_m3995(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_0);
		Material_t523 * L_1 = Renderer_get_material_m3998(L_0, /*hidden argument*/NULL);
		Texture_t394 * L_2 = ___value;
		NullCheck(L_1);
		Material_set_mainTexture_m4001(L_1, L_2, /*hidden argument*/NULL);
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
struct GameObject_t352;
struct PreviewScreenUtil_t405;
// Declaration !!0 UnityEngine.GameObject::AddComponent<PreviewScreenUtil>()
// !!0 UnityEngine.GameObject::AddComponent<PreviewScreenUtil>()
#define GameObject_AddComponent_TisPreviewScreenUtil_t405_m4024(__this, method) (( PreviewScreenUtil_t405 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3854_gshared)(__this, method)
struct GameObject_t352;
struct Renderer_t604;
struct GameObject_t352;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m4026_gshared (GameObject_t352 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m4026(__this, method) (( Object_t * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t604_m4025(__this, method) (( Renderer_t604 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)


// System.Void PreviewScreenUtil::.ctor()
extern "C" void PreviewScreenUtil__ctor_m2190 (PreviewScreenUtil_t405 * __this, const MethodInfo* method)
{
	{
		EventDispatcher__ctor_m626(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PreviewScreenUtil::.cctor()
extern "C" void PreviewScreenUtil__cctor_m2191 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean PreviewScreenUtil::isInScreenRect(UnityEngine.Rect,UnityEngine.Vector2)
extern "C" bool PreviewScreenUtil_isInScreenRect_m2192 (Object_t * __this /* static, unused */, Rect_t694  ___rect, Vector2_t110  ___point, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ((&___point)->___y_2);
		(&___point)->___y_2 = ((float)((float)(((float)L_0))-(float)L_1));
		Vector2_t110  L_2 = ___point;
		bool L_3 = Rect_Contains_m4027((&___rect), L_2, /*hidden argument*/NULL);
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
extern TypeInfo* PreviewScreenUtil_t405_il2cpp_TypeInfo_var;
extern TypeInfo* Rect_t694_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t604_m4025_MethodInfo_var;
extern "C" Rect_t694  PreviewScreenUtil_getObjectBounds_m2193 (Object_t * __this /* static, unused */, GameObject_t352 * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		Rect_t694_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(401);
		GameObject_GetComponent_TisRenderer_t604_m4025_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484071);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t694  V_0 = {0};
	{
		GameObject_t352 * L_0 = ___obj;
		NullCheck(L_0);
		Renderer_t604 * L_1 = GameObject_GetComponent_TisRenderer_t604_m4025(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t604_m4025_MethodInfo_var);
		bool L_2 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t352 * L_3 = ___obj;
		NullCheck(L_3);
		Renderer_t604 * L_4 = GameObject_GetComponent_TisRenderer_t604_m4025(L_3, /*hidden argument*/GameObject_GetComponent_TisRenderer_t604_m4025_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		Rect_t694  L_5 = PreviewScreenUtil_getRendererBounds_m2194(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001d:
	{
		Initobj (Rect_t694_il2cpp_TypeInfo_var, (&V_0));
		Rect_t694  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Rect PreviewScreenUtil::getRendererBounds(UnityEngine.Renderer)
extern "C" Rect_t694  PreviewScreenUtil_getRendererBounds_m2194 (Object_t * __this /* static, unused */, Renderer_t604 * ___renderer, const MethodInfo* method)
{
	Vector3_t536  V_0 = {0};
	Vector3_t536  V_1 = {0};
	Rect_t694  V_2 = {0};
	Bounds_t765  V_3 = {0};
	Vector3_t536  V_4 = {0};
	Bounds_t765  V_5 = {0};
	Vector3_t536  V_6 = {0};
	Bounds_t765  V_7 = {0};
	Vector3_t536  V_8 = {0};
	Bounds_t765  V_9 = {0};
	Vector3_t536  V_10 = {0};
	{
		Camera_t574 * L_0 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		Renderer_t604 * L_1 = ___renderer;
		NullCheck(L_1);
		Bounds_t765  L_2 = Renderer_get_bounds_m4028(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		Vector3_t536  L_3 = Bounds_get_min_m4029((&V_3), /*hidden argument*/NULL);
		V_4 = L_3;
		float L_4 = ((&V_4)->___x_1);
		Renderer_t604 * L_5 = ___renderer;
		NullCheck(L_5);
		Bounds_t765  L_6 = Renderer_get_bounds_m4028(L_5, /*hidden argument*/NULL);
		V_5 = L_6;
		Vector3_t536  L_7 = Bounds_get_max_m4030((&V_5), /*hidden argument*/NULL);
		V_6 = L_7;
		float L_8 = ((&V_6)->___y_2);
		Vector3_t536  L_9 = {0};
		Vector3__ctor_m4031(&L_9, L_4, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t536  L_10 = Camera_WorldToScreenPoint_m4032(L_0, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Camera_t574 * L_11 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		Renderer_t604 * L_12 = ___renderer;
		NullCheck(L_12);
		Bounds_t765  L_13 = Renderer_get_bounds_m4028(L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		Vector3_t536  L_14 = Bounds_get_max_m4030((&V_7), /*hidden argument*/NULL);
		V_8 = L_14;
		float L_15 = ((&V_8)->___x_1);
		Renderer_t604 * L_16 = ___renderer;
		NullCheck(L_16);
		Bounds_t765  L_17 = Renderer_get_bounds_m4028(L_16, /*hidden argument*/NULL);
		V_9 = L_17;
		Vector3_t536  L_18 = Bounds_get_min_m4029((&V_9), /*hidden argument*/NULL);
		V_10 = L_18;
		float L_19 = ((&V_10)->___y_2);
		Vector3_t536  L_20 = {0};
		Vector3__ctor_m4031(&L_20, L_15, L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t536  L_21 = Camera_WorldToScreenPoint_m4032(L_11, L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = ((&V_0)->___x_1);
		int32_t L_23 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = ((&V_0)->___y_2);
		float L_25 = ((&V_1)->___x_1);
		float L_26 = ((&V_0)->___x_1);
		float L_27 = ((&V_0)->___y_2);
		float L_28 = ((&V_1)->___y_2);
		Rect__ctor_m3680((&V_2), L_22, ((float)((float)(((float)L_23))-(float)L_24)), ((float)((float)L_25-(float)L_26)), ((float)((float)L_27-(float)L_28)), /*hidden argument*/NULL);
		Rect_t694  L_29 = V_2;
		return L_29;
	}
}
// System.Void PreviewScreenUtil::Awake()
extern "C" void PreviewScreenUtil_Awake_m2195 (PreviewScreenUtil_t405 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___W_6 = L_0;
		int32_t L_1 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___H_7 = L_1;
		return;
	}
}
// System.Void PreviewScreenUtil::FixedUpdate()
extern "C" void PreviewScreenUtil_FixedUpdate_m2196 (PreviewScreenUtil_t405 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___W_6);
		int32_t L_1 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = (__this->___H_7);
		int32_t L_3 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0041;
		}
	}

IL_0020:
	{
		int32_t L_4 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___W_6 = L_4;
		int32_t L_5 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___H_7 = L_5;
		VirtActionInvoker1< String_t* >::Invoke(18 /* System.Void UnionAssets.FLE.EventDispatcher::dispatch(System.String) */, __this, (String_t*) &_stringLiteral807);
	}

IL_0041:
	{
		return;
	}
}
// PreviewScreenUtil PreviewScreenUtil::get_instance()
extern TypeInfo* PreviewScreenUtil_t405_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisPreviewScreenUtil_t405_m4024_MethodInfo_var;
extern "C" PreviewScreenUtil_t405 * PreviewScreenUtil_get_instance_m2197 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_AddComponent_TisPreviewScreenUtil_t405_m4024_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484072);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		PreviewScreenUtil_t405 * L_0 = ((PreviewScreenUtil_t405_StaticFields*)PreviewScreenUtil_t405_il2cpp_TypeInfo_var->static_fields)->____instance_5;
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		GameObject_t352 * L_2 = (GameObject_t352 *)il2cpp_codegen_object_new (GameObject_t352_il2cpp_TypeInfo_var);
		GameObject__ctor_m3855(L_2, (String_t*) &_stringLiteral806, /*hidden argument*/NULL);
		NullCheck(L_2);
		PreviewScreenUtil_t405 * L_3 = GameObject_AddComponent_TisPreviewScreenUtil_t405_m4024(L_2, /*hidden argument*/GameObject_AddComponent_TisPreviewScreenUtil_t405_m4024_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		((PreviewScreenUtil_t405_StaticFields*)PreviewScreenUtil_t405_il2cpp_TypeInfo_var->static_fields)->____instance_5 = L_3;
		PreviewScreenUtil_t405 * L_4 = ((PreviewScreenUtil_t405_StaticFields*)PreviewScreenUtil_t405_il2cpp_TypeInfo_var->static_fields)->____instance_5;
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3753(L_4, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		PreviewScreenUtil_t405 * L_6 = ((PreviewScreenUtil_t405_StaticFields*)PreviewScreenUtil_t405_il2cpp_TypeInfo_var->static_fields)->____instance_5;
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
extern TypeInfo* Vector2_t110_il2cpp_TypeInfo_var;
extern "C" void ScreenPlacement__ctor_m2198 (ScreenPlacement_t407 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Vector2_t110_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(402);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t110  V_0 = {0};
	{
		__this->___calulateStartOnly_5 = 1;
		Initobj (Vector2_t110_il2cpp_TypeInfo_var, (&V_0));
		Vector2_t110  L_0 = V_0;
		__this->___actualOffset_7 = L_0;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacement::Start()
extern "C" void ScreenPlacement_Start_m2199 (ScreenPlacement_t407 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_5);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenPlacement_placementCalculation_m2201(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenPlacement::FixedUpdate()
extern "C" void ScreenPlacement_FixedUpdate_m2200 (ScreenPlacement_t407 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_5);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenPlacement_placementCalculation_m2201(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenPlacement::placementCalculation()
extern const MethodInfo* Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var;
extern "C" void ScreenPlacement_placementCalculation_m2201 (ScreenPlacement_t407 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484063);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t406 * V_0 = {0};
	Vector3_t536  V_1 = {0};
	Vector3_t536  V_2 = {0};
	Rect_t694  V_3 = {0};
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Bounds_t765  V_6 = {0};
	Vector3_t536  V_7 = {0};
	Bounds_t765  V_8 = {0};
	Vector3_t536  V_9 = {0};
	Bounds_t765  V_10 = {0};
	Vector3_t536  V_11 = {0};
	Bounds_t765  V_12 = {0};
	Vector3_t536  V_13 = {0};
	int32_t V_14 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___position_2);
		Vector2_t110  L_2 = (__this->___pixelOffset_3);
		ScreenPlacementExtension_ScreenPlacement_m2208(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		Transform_t406 * L_3 = (__this->___boundsTransform_6);
		bool L_4 = Object_op_Equality_m3778(NULL /*static, unused*/, L_3, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Transform_t406 * L_5 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003b;
	}

IL_0034:
	{
		Transform_t406 * L_6 = (__this->___boundsTransform_6);
		V_0 = L_6;
	}

IL_003b:
	{
		Camera_t574 * L_7 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t406 * L_8 = V_0;
		NullCheck(L_8);
		Renderer_t604 * L_9 = Component_GetComponent_TisRenderer_t604_m3995(L_8, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_9);
		Bounds_t765  L_10 = Renderer_get_bounds_m4028(L_9, /*hidden argument*/NULL);
		V_6 = L_10;
		Vector3_t536  L_11 = Bounds_get_min_m4029((&V_6), /*hidden argument*/NULL);
		V_7 = L_11;
		float L_12 = ((&V_7)->___x_1);
		Transform_t406 * L_13 = V_0;
		NullCheck(L_13);
		Renderer_t604 * L_14 = Component_GetComponent_TisRenderer_t604_m3995(L_13, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_14);
		Bounds_t765  L_15 = Renderer_get_bounds_m4028(L_14, /*hidden argument*/NULL);
		V_8 = L_15;
		Vector3_t536  L_16 = Bounds_get_max_m4030((&V_8), /*hidden argument*/NULL);
		V_9 = L_16;
		float L_17 = ((&V_9)->___y_2);
		Vector3_t536  L_18 = {0};
		Vector3__ctor_m4031(&L_18, L_12, L_17, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t536  L_19 = Camera_WorldToScreenPoint_m4032(L_7, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		Camera_t574 * L_20 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t406 * L_21 = V_0;
		NullCheck(L_21);
		Renderer_t604 * L_22 = Component_GetComponent_TisRenderer_t604_m3995(L_21, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_22);
		Bounds_t765  L_23 = Renderer_get_bounds_m4028(L_22, /*hidden argument*/NULL);
		V_10 = L_23;
		Vector3_t536  L_24 = Bounds_get_max_m4030((&V_10), /*hidden argument*/NULL);
		V_11 = L_24;
		float L_25 = ((&V_11)->___x_1);
		Transform_t406 * L_26 = V_0;
		NullCheck(L_26);
		Renderer_t604 * L_27 = Component_GetComponent_TisRenderer_t604_m3995(L_26, /*hidden argument*/Component_GetComponent_TisRenderer_t604_m3995_MethodInfo_var);
		NullCheck(L_27);
		Bounds_t765  L_28 = Renderer_get_bounds_m4028(L_27, /*hidden argument*/NULL);
		V_12 = L_28;
		Vector3_t536  L_29 = Bounds_get_min_m4029((&V_12), /*hidden argument*/NULL);
		V_13 = L_29;
		float L_30 = ((&V_13)->___y_2);
		Vector3_t536  L_31 = {0};
		Vector3__ctor_m4031(&L_31, L_25, L_30, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t536  L_32 = Camera_WorldToScreenPoint_m4032(L_20, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		float L_33 = ((&V_1)->___x_1);
		int32_t L_34 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_35 = ((&V_1)->___y_2);
		float L_36 = ((&V_2)->___x_1);
		float L_37 = ((&V_1)->___x_1);
		float L_38 = ((&V_1)->___y_2);
		float L_39 = ((&V_2)->___y_2);
		Rect__ctor_m3680((&V_3), L_33, ((float)((float)(((float)L_34))-(float)L_35)), ((float)((float)L_36-(float)L_37)), ((float)((float)L_38-(float)L_39)), /*hidden argument*/NULL);
		V_4 = (0.0f);
		V_5 = (0.0f);
		bool L_40 = (__this->___persents_4);
		if (!L_40)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_41 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110 * L_42 = &(__this->___pixelOffset_3);
		float L_43 = (L_42->___x_1);
		V_4 = ((float)((float)(((float)((int32_t)((int32_t)L_41/(int32_t)((int32_t)100)))))*(float)L_43));
		int32_t L_44 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t110 * L_45 = &(__this->___pixelOffset_3);
		float L_46 = (L_45->___y_2);
		V_5 = ((float)((float)(((float)((int32_t)((int32_t)L_44/(int32_t)((int32_t)100)))))*(float)L_46));
		goto IL_0179;
	}

IL_015f:
	{
		Vector2_t110 * L_47 = &(__this->___pixelOffset_3);
		float L_48 = (L_47->___x_1);
		V_4 = L_48;
		Vector2_t110 * L_49 = &(__this->___pixelOffset_3);
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
		Vector2_t110 * L_53 = &(__this->___actualOffset_7);
		float L_54 = V_4;
		float L_55 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_53->___x_1 = ((float)((float)L_54+(float)((float)((float)L_55/(float)(2.0f)))));
		goto IL_031d;
	}

IL_01d1:
	{
		Vector2_t110 * L_56 = &(__this->___actualOffset_7);
		float L_57 = V_4;
		float L_58 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_56->___x_1 = ((float)((float)L_57+(float)((float)((float)L_58/(float)(2.0f)))));
		Vector2_t110 * L_59 = &(__this->___actualOffset_7);
		float L_60 = V_5;
		float L_61 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_59->___y_2 = ((float)((float)L_60+(float)((float)((float)L_61/(float)(2.0f)))));
		goto IL_031d;
	}

IL_020c:
	{
		Vector2_t110 * L_62 = &(__this->___actualOffset_7);
		float L_63 = V_4;
		float L_64 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_62->___x_1 = ((float)((float)L_63+(float)((float)((float)L_64/(float)(2.0f)))));
		Vector2_t110 * L_65 = &(__this->___actualOffset_7);
		float L_66 = V_5;
		float L_67 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_65->___y_2 = ((float)((float)L_66+(float)((float)((float)L_67/(float)(2.0f)))));
		goto IL_031d;
	}

IL_0247:
	{
		Vector2_t110 * L_68 = &(__this->___actualOffset_7);
		float L_69 = V_4;
		float L_70 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_68->___x_1 = ((float)((float)L_69+(float)((float)((float)L_70/(float)(2.0f)))));
		goto IL_031d;
	}

IL_0267:
	{
		Vector2_t110 * L_71 = &(__this->___actualOffset_7);
		float L_72 = V_4;
		float L_73 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_71->___x_1 = ((float)((float)L_72+(float)((float)((float)L_73/(float)(2.0f)))));
		Vector2_t110 * L_74 = &(__this->___actualOffset_7);
		float L_75 = V_5;
		float L_76 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_74->___y_2 = ((float)((float)L_75+(float)((float)((float)L_76/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02a2:
	{
		Vector2_t110 * L_77 = &(__this->___actualOffset_7);
		float L_78 = V_4;
		float L_79 = Rect_get_width_m4034((&V_3), /*hidden argument*/NULL);
		L_77->___x_1 = ((float)((float)L_78+(float)((float)((float)L_79/(float)(2.0f)))));
		Vector2_t110 * L_80 = &(__this->___actualOffset_7);
		float L_81 = V_5;
		float L_82 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_80->___y_2 = ((float)((float)L_81+(float)((float)((float)L_82/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02dd:
	{
		Vector2_t110 * L_83 = &(__this->___actualOffset_7);
		float L_84 = V_5;
		float L_85 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_83->___y_2 = ((float)((float)L_84+(float)((float)((float)L_85/(float)(2.0f)))));
		goto IL_031d;
	}

IL_02fd:
	{
		Vector2_t110 * L_86 = &(__this->___actualOffset_7);
		float L_87 = V_5;
		float L_88 = Rect_get_height_m4035((&V_3), /*hidden argument*/NULL);
		L_86->___y_2 = ((float)((float)L_87+(float)((float)((float)L_88/(float)(2.0f)))));
		goto IL_031d;
	}

IL_031d:
	{
		Transform_t406 * L_89 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		int32_t L_90 = (__this->___position_2);
		Vector2_t110  L_91 = (__this->___actualOffset_7);
		ScreenPlacementExtension_ScreenPlacement_m2208(NULL /*static, unused*/, L_89, L_90, L_91, /*hidden argument*/NULL);
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
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2202 (Object_t * __this /* static, unused */, GameObject_t352 * ___target, int32_t ___position, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4036(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = Vector2_get_zero_m3657(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t574 * L_4 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2203 (Object_t * __this /* static, unused */, GameObject_t352 * ___target, int32_t ___position, Camera_t574 * ___renderingCamera, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4036(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = Vector2_get_zero_m3657(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t574 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Vector2)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2204 (Object_t * __this /* static, unused */, GameObject_t352 * ___target, int32_t ___position, Vector2_t110  ___pixelsFromEdge, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4036(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = ___pixelsFromEdge;
		Camera_t574 * L_4 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.GameObject,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2205 (Object_t * __this /* static, unused */, GameObject_t352 * ___target, int32_t ___position, Vector2_t110  ___pixelsFromEdge, Camera_t574 * ___renderingCamera, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = GameObject_get_transform_m4036(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = ___pixelsFromEdge;
		Camera_t574 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2206 (Object_t * __this /* static, unused */, Transform_t406 * ___target, int32_t ___position, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = Component_get_transform_m4033(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = Vector2_get_zero_m3657(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t574 * L_4 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2207 (Object_t * __this /* static, unused */, Transform_t406 * ___target, int32_t ___position, Camera_t574 * ___renderingCamera, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = Component_get_transform_m4033(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = Vector2_get_zero_m3657(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_t574 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2208 (Object_t * __this /* static, unused */, Transform_t406 * ___target, int32_t ___position, Vector2_t110  ___pixelsFromEdge, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = Component_get_transform_m4033(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = ___pixelsFromEdge;
		Camera_t574 * L_4 = Camera_get_main_m4004(NULL /*static, unused*/, /*hidden argument*/NULL);
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::ScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_ScreenPlacement_m2209 (Object_t * __this /* static, unused */, Transform_t406 * ___target, int32_t ___position, Vector2_t110  ___pixelsFromEdge, Camera_t574 * ___renderingCamera, const MethodInfo* method)
{
	{
		Transform_t406 * L_0 = ___target;
		NullCheck(L_0);
		Transform_t406 * L_1 = Component_get_transform_m4033(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___position;
		Vector2_t110  L_3 = ___pixelsFromEdge;
		Camera_t574 * L_4 = ___renderingCamera;
		ScreenPlacementExtension_DoScreenPlacement_m2210(NULL /*static, unused*/, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenPlacementExtension::DoScreenPlacement(UnityEngine.Transform,ScreenPosition,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" void ScreenPlacementExtension_DoScreenPlacement_m2210 (Object_t * __this /* static, unused */, Transform_t406 * ___target, int32_t ___position, Vector2_t110  ___pixelsFromEdge, Camera_t574 * ___renderingCamera, const MethodInfo* method)
{
	Vector3_t536  V_0 = {0};
	float V_1 = 0.0f;
	Vector3_t536  V_2 = {0};
	Vector3_t536  V_3 = {0};
	int32_t V_4 = {0};
	{
		Vector3_t536  L_0 = Vector3_get_zero_m4037(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Camera_t574 * L_1 = ___renderingCamera;
		NullCheck(L_1);
		Transform_t406 * L_2 = Component_get_transform_m4033(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t536  L_3 = Transform_get_position_m4038(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = ((&V_2)->___z_3);
		Transform_t406 * L_5 = ___target;
		NullCheck(L_5);
		Vector3_t536  L_6 = Transform_get_position_m4038(L_5, /*hidden argument*/NULL);
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
		Camera_t574 * L_10 = ___renderingCamera;
		float L_11 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_12 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = ((&___pixelsFromEdge)->___y_2);
		float L_14 = V_1;
		Vector3_t536  L_15 = {0};
		Vector3__ctor_m4031(&L_15, L_11, ((float)((float)(((float)L_12))-(float)L_13)), L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t536  L_16 = Camera_ScreenToWorldPoint_m4039(L_10, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_01dd;
	}

IL_0084:
	{
		Camera_t574 * L_17 = ___renderingCamera;
		int32_t L_18 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_20 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = ((&___pixelsFromEdge)->___y_2);
		float L_22 = V_1;
		Vector3_t536  L_23 = {0};
		Vector3__ctor_m4031(&L_23, ((float)((float)(((float)((int32_t)((int32_t)L_18/(int32_t)2))))+(float)L_19)), ((float)((float)(((float)L_20))-(float)L_21)), L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t536  L_24 = Camera_ScreenToWorldPoint_m4039(L_17, L_23, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_01dd;
	}

IL_00b4:
	{
		Camera_t574 * L_25 = ___renderingCamera;
		int32_t L_26 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_27 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_28 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_29 = ((&___pixelsFromEdge)->___y_2);
		float L_30 = V_1;
		Vector3_t536  L_31 = {0};
		Vector3__ctor_m4031(&L_31, ((float)((float)(((float)L_26))-(float)L_27)), ((float)((float)(((float)L_28))-(float)L_29)), L_30, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t536  L_32 = Camera_ScreenToWorldPoint_m4039(L_25, L_31, /*hidden argument*/NULL);
		V_0 = L_32;
		goto IL_01dd;
	}

IL_00e2:
	{
		Camera_t574 * L_33 = ___renderingCamera;
		float L_34 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_35 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = ((&___pixelsFromEdge)->___y_2);
		float L_37 = V_1;
		Vector3_t536  L_38 = {0};
		Vector3__ctor_m4031(&L_38, L_34, ((float)((float)(((float)((int32_t)((int32_t)L_35/(int32_t)2))))-(float)L_36)), L_37, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t536  L_39 = Camera_ScreenToWorldPoint_m4039(L_33, L_38, /*hidden argument*/NULL);
		V_0 = L_39;
		goto IL_01dd;
	}

IL_010b:
	{
		Camera_t574 * L_40 = ___renderingCamera;
		int32_t L_41 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_42 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_43 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_44 = ((&___pixelsFromEdge)->___y_2);
		float L_45 = V_1;
		Vector3_t536  L_46 = {0};
		Vector3__ctor_m4031(&L_46, ((float)((float)(((float)((int32_t)((int32_t)L_41/(int32_t)2))))+(float)L_42)), ((float)((float)(((float)((int32_t)((int32_t)L_43/(int32_t)2))))-(float)L_44)), L_45, /*hidden argument*/NULL);
		NullCheck(L_40);
		Vector3_t536  L_47 = Camera_ScreenToWorldPoint_m4039(L_40, L_46, /*hidden argument*/NULL);
		V_0 = L_47;
		goto IL_01dd;
	}

IL_013d:
	{
		Camera_t574 * L_48 = ___renderingCamera;
		int32_t L_49 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_50 = ((&___pixelsFromEdge)->___x_1);
		int32_t L_51 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_52 = ((&___pixelsFromEdge)->___y_2);
		float L_53 = V_1;
		Vector3_t536  L_54 = {0};
		Vector3__ctor_m4031(&L_54, ((float)((float)(((float)L_49))-(float)L_50)), ((float)((float)(((float)((int32_t)((int32_t)L_51/(int32_t)2))))-(float)L_52)), L_53, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t536  L_55 = Camera_ScreenToWorldPoint_m4039(L_48, L_54, /*hidden argument*/NULL);
		V_0 = L_55;
		goto IL_01dd;
	}

IL_016d:
	{
		Camera_t574 * L_56 = ___renderingCamera;
		float L_57 = ((&___pixelsFromEdge)->___x_1);
		float L_58 = ((&___pixelsFromEdge)->___y_2);
		float L_59 = V_1;
		Vector3_t536  L_60 = {0};
		Vector3__ctor_m4031(&L_60, L_57, L_58, L_59, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t536  L_61 = Camera_ScreenToWorldPoint_m4039(L_56, L_60, /*hidden argument*/NULL);
		V_0 = L_61;
		goto IL_01dd;
	}

IL_018d:
	{
		Camera_t574 * L_62 = ___renderingCamera;
		int32_t L_63 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_64 = ((&___pixelsFromEdge)->___x_1);
		float L_65 = ((&___pixelsFromEdge)->___y_2);
		float L_66 = V_1;
		Vector3_t536  L_67 = {0};
		Vector3__ctor_m4031(&L_67, ((float)((float)(((float)((int32_t)((int32_t)L_63/(int32_t)2))))+(float)L_64)), L_65, L_66, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t536  L_68 = Camera_ScreenToWorldPoint_m4039(L_62, L_67, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_01dd;
	}

IL_01b6:
	{
		Camera_t574 * L_69 = ___renderingCamera;
		int32_t L_70 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_71 = ((&___pixelsFromEdge)->___x_1);
		float L_72 = ((&___pixelsFromEdge)->___y_2);
		float L_73 = V_1;
		Vector3_t536  L_74 = {0};
		Vector3__ctor_m4031(&L_74, ((float)((float)(((float)L_70))-(float)L_71)), L_72, L_73, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t536  L_75 = Camera_ScreenToWorldPoint_m4039(L_69, L_74, /*hidden argument*/NULL);
		V_0 = L_75;
		goto IL_01dd;
	}

IL_01dd:
	{
		Transform_t406 * L_76 = ___target;
		NullCheck(L_76);
		Transform_t406 * L_77 = Component_get_transform_m4033(L_76, /*hidden argument*/NULL);
		Vector3_t536  L_78 = V_0;
		NullCheck(L_77);
		Transform_set_position_m4040(L_77, L_78, /*hidden argument*/NULL);
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
extern "C" void ScreenScaler__ctor_m2211 (ScreenScaler_t410 * __this, const MethodInfo* method)
{
	{
		__this->___calulateStartOnly_2 = 1;
		__this->___persentsY_3 = (100.0f);
		__this->____scaleFactorY_4 = (1.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScreenScaler::Awake()
extern "C" void ScreenScaler_Awake_m2212 (ScreenScaler_t410 * __this, const MethodInfo* method)
{
	Vector3_t536  V_0 = {0};
	Vector3_t536  V_1 = {0};
	Vector3_t536  V_2 = {0};
	{
		Transform_t406 * L_0 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t536  L_1 = Transform_get_localScale_m4041(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ((&V_0)->___y_2);
		__this->____scaleFactorY_4 = L_2;
		Transform_t406 * L_3 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t536  L_4 = Transform_get_localScale_m4041(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = ((&V_1)->___x_1);
		Transform_t406 * L_6 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t536  L_7 = Transform_get_localScale_m4041(L_6, /*hidden argument*/NULL);
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
		ScreenScaler_placementCalculation_m2214(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void ScreenScaler::Update()
extern "C" void ScreenScaler_Update_m2213 (ScreenScaler_t410 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_2);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ScreenScaler_placementCalculation_m2214(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void ScreenScaler::placementCalculation()
extern TypeInfo* PreviewScreenUtil_t405_il2cpp_TypeInfo_var;
extern "C" void ScreenScaler_placementCalculation_m2214 (ScreenScaler_t410 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t694  V_1 = {0};
	Vector3_t536  V_2 = {0};
	Vector3_t536  V_3 = {0};
	Vector3_t536  V_4 = {0};
	Vector3_t536  V_5 = {0};
	Vector3_t536  V_6 = {0};
	{
		int32_t L_0 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___persentsY_3);
		V_0 = ((float)((float)((float)((float)(((float)L_0))/(float)(100.0f)))*(float)L_1));
		GameObject_t352 * L_2 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		Rect_t694  L_3 = PreviewScreenUtil_getObjectBounds_m2193(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = Rect_get_height_m4035((&V_1), /*hidden argument*/NULL);
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
		GameObject_t352 * L_6 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		Rect_t694  L_7 = PreviewScreenUtil_getObjectBounds_m2193(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Transform_t406 * L_8 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		float L_9 = (__this->____scaleFactorY_4);
		float L_10 = (__this->____xScaleDiff_5);
		float L_11 = (__this->____scaleFactorY_4);
		Vector3_t536  L_12 = {0};
		Vector3__ctor_m4031(&L_12, ((float)((float)L_9*(float)L_10)), L_11, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localScale_m4042(L_8, L_12, /*hidden argument*/NULL);
		float L_13 = (__this->____scaleFactorY_4);
		__this->____scaleFactorY_4 = ((float)((float)L_13+(float)(0.1f)));
	}

IL_0078:
	{
		float L_14 = Rect_get_height_m4035((&V_1), /*hidden argument*/NULL);
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
		GameObject_t352 * L_16 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		Rect_t694  L_17 = PreviewScreenUtil_getObjectBounds_m2193(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Transform_t406 * L_18 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		Transform_t406 * L_19 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t536  L_20 = Transform_get_localScale_m4041(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = ((&V_2)->___x_1);
		Transform_t406 * L_22 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t536  L_23 = Transform_get_localScale_m4041(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = ((&V_3)->___x_1);
		Transform_t406 * L_25 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t536  L_26 = Transform_get_localScale_m4041(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		float L_27 = ((&V_4)->___y_2);
		Transform_t406 * L_28 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t536  L_29 = Transform_get_localScale_m4041(L_28, /*hidden argument*/NULL);
		V_5 = L_29;
		float L_30 = ((&V_5)->___y_2);
		Transform_t406 * L_31 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t536  L_32 = Transform_get_localScale_m4041(L_31, /*hidden argument*/NULL);
		V_6 = L_32;
		float L_33 = ((&V_6)->___z_3);
		Vector3_t536  L_34 = {0};
		Vector3__ctor_m4031(&L_34, ((float)((float)L_21-(float)((float)((float)L_24*(float)(0.1f))))), ((float)((float)L_27-(float)((float)((float)L_30*(float)(0.1f))))), L_33, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m4042(L_18, L_34, /*hidden argument*/NULL);
	}

IL_011b:
	{
		float L_35 = Rect_get_height_m4035((&V_1), /*hidden argument*/NULL);
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
extern "C" void XScaleModifayer__ctor_m2215 (XScaleModifayer_t411 * __this, const MethodInfo* method)
{
	{
		__this->___XMaxSize_2 = (10.0f);
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XScaleModifayer::Awake()
extern "C" void XScaleModifayer_Awake_m2216 (XScaleModifayer_t411 * __this, const MethodInfo* method)
{
	{
		XScaleModifayer_Calculate_m2218(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void XScaleModifayer::FixedUpdate()
extern "C" void XScaleModifayer_FixedUpdate_m2217 (XScaleModifayer_t411 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___calulateStartOnly_4);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		XScaleModifayer_Calculate_m2218(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void XScaleModifayer::Calculate()
extern TypeInfo* PreviewScreenUtil_t405_il2cpp_TypeInfo_var;
extern "C" void XScaleModifayer_Calculate_m2218 (XScaleModifayer_t411 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PreviewScreenUtil_t405_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t694  V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PreviewScreenUtil_t405_il2cpp_TypeInfo_var);
		Rect_t694  L_1 = PreviewScreenUtil_getObjectBounds_m2193(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___XMaxSize_2);
		V_1 = ((float)((float)((float)((float)(((float)L_2))/(float)(100.0f)))*(float)L_3));
		float L_4 = Rect_get_width_m4034((&V_0), /*hidden argument*/NULL);
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
		float L_8 = Rect_get_width_m4034((&V_0), /*hidden argument*/NULL);
		V_2 = ((float)((float)L_7/(float)L_8));
		Transform_t406 * L_9 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		Transform_t406 * L_10 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t536  L_11 = Transform_get_localScale_m4041(L_10, /*hidden argument*/NULL);
		float L_12 = V_2;
		Vector3_t536  L_13 = Vector3_op_Multiply_m4043(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localScale_m4042(L_9, L_13, /*hidden argument*/NULL);
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
extern "C" void AbstractFacebook__ctor_m2219 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::Awake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t412_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t413_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4044_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4045_MethodInfo_var;
extern "C" void AbstractFacebook_Awake_m2220 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		List_1_t412_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(403);
		Dictionary_2_t413_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(404);
		List_1__ctor_m4044_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484073);
		Dictionary_2__ctor_m4045_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484074);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->___isInitialized_4 = 0;
		__this->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___userId_6 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___accessToken_7 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_2 = ((DateTime_t287_StaticFields*)DateTime_t287_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		__this->___accessTokenExpiresAt_8 = L_2;
		List_1_t412 * L_3 = (List_1_t412 *)il2cpp_codegen_object_new (List_1_t412_il2cpp_TypeInfo_var);
		List_1__ctor_m4044(L_3, /*hidden argument*/List_1__ctor_m4044_MethodInfo_var);
		__this->___authDelegates_10 = L_3;
		__this->___nextAsyncId_11 = 0;
		Dictionary_2_t413 * L_4 = (Dictionary_2_t413 *)il2cpp_codegen_object_new (Dictionary_2_t413_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4045(L_4, /*hidden argument*/Dictionary_2__ctor_m4045_MethodInfo_var);
		__this->___facebookDelegates_12 = L_4;
		VirtActionInvoker0::Invoke(4 /* System.Void Facebook.AbstractFacebook::OnAwake() */, __this);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::OnAwake()
// System.Boolean Facebook.AbstractFacebook::get_IsInitialized()
extern "C" bool AbstractFacebook_get_IsInitialized_m2221 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isInitialized_4);
		return L_0;
	}
}
// System.Boolean Facebook.AbstractFacebook::get_IsLoggedIn()
extern "C" bool AbstractFacebook_get_IsLoggedIn_m2222 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isLoggedIn_5);
		return L_0;
	}
}
// System.String Facebook.AbstractFacebook::get_UserId()
extern "C" String_t* AbstractFacebook_get_UserId_m2223 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___userId_6);
		return L_0;
	}
}
// System.Void Facebook.AbstractFacebook::set_UserId(System.String)
extern "C" void AbstractFacebook_set_UserId_m2224 (AbstractFacebook_t414 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___userId_6 = L_0;
		return;
	}
}
// System.String Facebook.AbstractFacebook::get_AccessToken()
extern "C" String_t* AbstractFacebook_get_AccessToken_m2225 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___accessToken_7);
		return L_0;
	}
}
// System.Void Facebook.AbstractFacebook::set_AccessToken(System.String)
extern "C" void AbstractFacebook_set_AccessToken_m2226 (AbstractFacebook_t414 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___accessToken_7 = L_0;
		return;
	}
}
// System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt()
extern "C" DateTime_t287  AbstractFacebook_get_AccessTokenExpiresAt_m2227 (AbstractFacebook_t414 * __this, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = (__this->___accessTokenExpiresAt_8);
		return L_0;
	}
}
// System.Boolean Facebook.AbstractFacebook::get_LimitEventUsage()
// System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean)
// System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
// System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Logout()
// System.Void Facebook.AbstractFacebook::GetAuthResponse(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_GetAuthResponse_m2228 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m2232(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AppRequest_m2229 (AbstractFacebook_t414 * __this, String_t* ___message, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		StringU5BU5D_t75* L_1 = ___to;
		List_1_t684 * L_2 = ___filters;
		StringU5BU5D_t75* L_3 = ___excludeIds;
		Nullable_1_t690  L_4 = ___maxRecipients;
		String_t* L_5 = ___data;
		String_t* L_6 = ___title;
		FacebookDelegate_t433 * L_7 = ___callback;
		VirtActionInvoker10< String_t*, OGActionType_t432 *, String_t*, StringU5BU5D_t75*, List_1_t684 *, StringU5BU5D_t75*, Nullable_1_t690 , String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, __this, L_0, (OGActionType_t432 *)NULL, (String_t*)NULL, L_1, L_2, L_3, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3692_MethodInfo_var;
extern "C" void AbstractFacebook_API_m2230 (AbstractFacebook_t414 * __this, String_t* ___query, HttpMethod_t448 * ___method, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		Dictionary_2__ctor_m3692_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	Dictionary_2_t122 * G_B3_0 = {0};
	{
		Dictionary_2_t122 * L_0 = ___formData;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_t122 * L_1 = ___formData;
		Dictionary_2_t122 * L_2 = AbstractFacebook_CopyByValue_m2236(__this, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_0012:
	{
		Dictionary_2_t122 * L_3 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3692(L_3, /*hidden argument*/Dictionary_2__ctor_m3692_MethodInfo_var);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		Dictionary_2_t122 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0) */, L_4, (String_t*) &_stringLiteral615);
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_6 = ___query;
		NullCheck(L_6);
		bool L_7 = String_Contains_m3739(L_6, (String_t*) &_stringLiteral808, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0049;
		}
	}
	{
		Dictionary_2_t122 * L_8 = V_0;
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral615, L_9);
	}

IL_0049:
	{
		String_t* L_10 = ___query;
		String_t* L_11 = AbstractFacebook_GetGraphUrl_m2237(__this, L_10, /*hidden argument*/NULL);
		HttpMethod_t448 * L_12 = ___method;
		Dictionary_2_t122 * L_13 = V_0;
		FacebookDelegate_t433 * L_14 = ___callback;
		AsyncRequestString_Request_m2476(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern "C" void AbstractFacebook_API_m2231 (AbstractFacebook_t414 * __this, String_t* ___query, HttpMethod_t448 * ___method, WWWForm_t112 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		s_Il2CppMethodIntialized = true;
	}
	{
		WWWForm_t112 * L_0 = ___formData;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		WWWForm_t112 * L_1 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3700(L_1, /*hidden argument*/NULL);
		___formData = L_1;
	}

IL_000d:
	{
		WWWForm_t112 * L_2 = ___formData;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_2);
		WWWForm_AddField_m3702(L_2, (String_t*) &_stringLiteral615, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___query;
		String_t* L_5 = AbstractFacebook_GetGraphUrl_m2237(__this, L_4, /*hidden argument*/NULL);
		HttpMethod_t448 * L_6 = ___method;
		WWWForm_t112 * L_7 = ___formData;
		FacebookDelegate_t433 * L_8 = ___callback;
		AsyncRequestString_Request_m2475(NULL /*static, unused*/, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::ActivateApp(System.String)
// System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate)
// System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// System.Void Facebook.AbstractFacebook::AddAuthDelegate(Facebook.FacebookDelegate)
extern "C" void AbstractFacebook_AddAuthDelegate_m2232 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		List_1_t412 * L_0 = (__this->___authDelegates_10);
		FacebookDelegate_t433 * L_1 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker1< FacebookDelegate_t433 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<Facebook.FacebookDelegate>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void Facebook.AbstractFacebook::OnAuthResponse(FBResult)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t766_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m4046_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4047_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4048_MethodInfo_var;
extern "C" void AbstractFacebook_OnAuthResponse_m2233 (AbstractFacebook_t414 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Enumerator_t766_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(405);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		List_1_GetEnumerator_m4046_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484075);
		Enumerator_get_Current_m4047_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484076);
		Enumerator_MoveNext_m4048_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484077);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	FBResult_t281 * V_1 = {0};
	FacebookDelegate_t433 * V_2 = {0};
	Enumerator_t766  V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		bool L_2 = AbstractFacebook_get_IsLoggedIn_m2222(__this, /*hidden argument*/NULL);
		bool L_3 = L_2;
		Object_t * L_4 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral809, L_4);
		Dictionary_2_t312 * L_5 = V_0;
		String_t* L_6 = AbstractFacebook_get_UserId_m2223(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral810, L_6);
		Dictionary_2_t312 * L_7 = V_0;
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Facebook.AbstractFacebook::get_AccessToken() */, __this);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral615, L_8);
		Dictionary_2_t312 * L_9 = V_0;
		DateTime_t287  L_10 = (DateTime_t287 )VirtFuncInvoker0< DateTime_t287  >::Invoke(7 /* System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt() */, __this);
		DateTime_t287  L_11 = L_10;
		Object_t * L_12 = Box(DateTime_t287_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral811, L_12);
		Dictionary_2_t312 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_14 = Json_Serialize_m2512(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		FBResult_t281 * L_15 = ___result;
		NullCheck(L_15);
		String_t* L_16 = FBResult_get_Error_m2295(L_15, /*hidden argument*/NULL);
		FBResult_t281 * L_17 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_17, L_14, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		List_1_t412 * L_18 = (__this->___authDelegates_10);
		NullCheck(L_18);
		Enumerator_t766  L_19 = List_1_GetEnumerator_m4046(L_18, /*hidden argument*/List_1_GetEnumerator_m4046_MethodInfo_var);
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
			FacebookDelegate_t433 * L_20 = Enumerator_get_Current_m4047((&V_3), /*hidden argument*/Enumerator_get_Current_m4047_MethodInfo_var);
			V_2 = L_20;
			FacebookDelegate_t433 * L_21 = V_2;
			if (!L_21)
			{
				goto IL_008c;
			}
		}

IL_0085:
		{
			FacebookDelegate_t433 * L_22 = V_2;
			FBResult_t281 * L_23 = V_1;
			NullCheck(L_22);
			VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_22, L_23);
		}

IL_008c:
		{
			bool L_24 = Enumerator_MoveNext_m4048((&V_3), /*hidden argument*/Enumerator_MoveNext_m4048_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		Enumerator_t766  L_25 = V_3;
		Enumerator_t766  L_26 = L_25;
		Object_t * L_27 = Box(Enumerator_t766_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_27);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_27);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xA9, IL_00a9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a9:
	{
		List_1_t412 * L_28 = (__this->___authDelegates_10);
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<Facebook.FacebookDelegate>::Clear() */, L_28);
		return;
	}
}
// System.String Facebook.AbstractFacebook::AddFacebookDelegate(Facebook.FacebookDelegate)
extern "C" String_t* AbstractFacebook_AddFacebookDelegate_m2234 (AbstractFacebook_t414 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nextAsyncId_11);
		__this->___nextAsyncId_11 = ((int32_t)((int32_t)L_0+(int32_t)1));
		Dictionary_2_t413 * L_1 = (__this->___facebookDelegates_12);
		int32_t* L_2 = &(__this->___nextAsyncId_11);
		String_t* L_3 = Int32_ToString_m399(L_2, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_4 = ___callback;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, FacebookDelegate_t433 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::Add(!0,!1) */, L_1, L_3, L_4);
		int32_t* L_5 = &(__this->___nextAsyncId_11);
		String_t* L_6 = Int32_ToString_m399(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Facebook.AbstractFacebook::OnFacebookResponse(System.String,FBResult)
extern "C" void AbstractFacebook_OnFacebookResponse_m2235 (AbstractFacebook_t414 * __this, String_t* ___uniqueId, FBResult_t281 * ___result, const MethodInfo* method)
{
	FacebookDelegate_t433 * V_0 = {0};
	{
		Dictionary_2_t413 * L_0 = (__this->___facebookDelegates_12);
		String_t* L_1 = ___uniqueId;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, String_t*, FacebookDelegate_t433 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		FacebookDelegate_t433 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		FacebookDelegate_t433 * L_4 = V_0;
		FBResult_t281 * L_5 = ___result;
		NullCheck(L_4);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_4, L_5);
	}

IL_0020:
	{
		Dictionary_2_t413 * L_6 = (__this->___facebookDelegates_12);
		String_t* L_7 = ___uniqueId;
		NullCheck(L_6);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::Remove(!0) */, L_6, L_7);
	}

IL_002d:
	{
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AbstractFacebook::CopyByValue(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t301_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4049_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3903_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3904_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3905_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3906_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3907_MethodInfo_var;
extern "C" Dictionary_2_t122 * AbstractFacebook_CopyByValue_m2236 (AbstractFacebook_t414 * __this, Dictionary_2_t122 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m4049_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484078);
		Dictionary_2_GetEnumerator_m3903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483945);
		Enumerator_get_Current_m3904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		KeyValuePair_2_get_Key_m3905_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		KeyValuePair_2_get_Value_m3906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3907_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	KeyValuePair_2_t302  V_1 = {0};
	Enumerator_t301  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t122 * L_0 = ___data;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_0);
		Dictionary_2_t122 * L_2 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4049(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m4049_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t122 * L_3 = ___data;
		NullCheck(L_3);
		Enumerator_t301  L_4 = Dictionary_2_GetEnumerator_m3903(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_m3903_MethodInfo_var);
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
			KeyValuePair_2_t302  L_5 = Enumerator_get_Current_m3904((&V_2), /*hidden argument*/Enumerator_get_Current_m3904_MethodInfo_var);
			V_1 = L_5;
			Dictionary_2_t122 * L_6 = V_0;
			String_t* L_7 = KeyValuePair_2_get_Key_m3905((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3905_MethodInfo_var);
			String_t* L_8 = KeyValuePair_2_get_Value_m3906((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3906_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_9 = String_Copy_m4050(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_6, L_7, L_9);
		}

IL_0039:
		{
			bool L_10 = Enumerator_MoveNext_m3907((&V_2), /*hidden argument*/Enumerator_MoveNext_m3907_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Enumerator_t301  L_11 = V_2;
		Enumerator_t301  L_12 = L_11;
		Object_t * L_13 = Box(Enumerator_t301_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0056:
	{
		Dictionary_2_t122 * L_14 = V_0;
		return L_14;
	}
}
// System.String Facebook.AbstractFacebook::GetGraphUrl(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AbstractFacebook_GetGraphUrl_m2237 (AbstractFacebook_t414 * __this, String_t* ___query, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___query;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m4051(L_0, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_2 = ___query;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral521, L_2, /*hidden argument*/NULL);
		___query = L_3;
	}

IL_001d:
	{
		String_t* L_4 = ___query;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral596, L_4, /*hidden argument*/NULL);
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
extern "C" void AppEvents__ctor_m2238 (AppEvents_t415 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean FB/AppEvents::get_LimitEventUsage()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" bool AppEvents_get_LimitEventUsage_m2239 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
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
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void AppEvents_set_LimitEventUsage_m2240 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(9 /* System.Void Facebook.AbstractFacebook::set_LimitEventUsage(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Void FB/AppEvents::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void AppEvents_LogEvent_m2241 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___logEvent;
		Nullable_1_t691  L_2 = ___valueToSum;
		Dictionary_2_t312 * L_3 = ___parameters;
		NullCheck(L_0);
		VirtActionInvoker3< String_t*, Nullable_1_t691 , Dictionary_2_t312 * >::Invoke(25 /* System.Void Facebook.AbstractFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void FB/AppEvents::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void AppEvents_LogPurchase_m2242 (Object_t * __this /* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___logPurchase;
		String_t* L_2 = ___currency;
		Dictionary_2_t312 * L_3 = ___parameters;
		NullCheck(L_0);
		VirtActionInvoker3< float, String_t*, Dictionary_2_t312 * >::Invoke(26 /* System.Void Facebook.AbstractFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, L_3);
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
extern "C" void Canvas__ctor_m2243 (Canvas_t416 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB/Canvas::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void Canvas_Pay_m2244 (Object_t * __this /* static, unused */, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___product;
		String_t* L_2 = ___action;
		int32_t L_3 = ___quantity;
		Nullable_1_t690  L_4 = ___quantityMin;
		Nullable_1_t690  L_5 = ___quantityMax;
		String_t* L_6 = ___requestId;
		String_t* L_7 = ___pricepointId;
		String_t* L_8 = ___testCurrency;
		FacebookDelegate_t433 * L_9 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker9< String_t*, String_t*, int32_t, Nullable_1_t690 , Nullable_1_t690 , String_t*, String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(17 /* System.Void Facebook.AbstractFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9);
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
extern "C" void Android__ctor_m2245 (Android_t417 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String FB/Android::get_KeyHash()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* AndroidFacebook_t434_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Android_get_KeyHash_m2246 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		AndroidFacebook_t434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	AndroidFacebook_t434 * V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		V_0 = ((AndroidFacebook_t434 *)IsInst(L_0, AndroidFacebook_t434_il2cpp_TypeInfo_var));
		AndroidFacebook_t434 * L_1 = V_0;
		bool L_2 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		AndroidFacebook_t434 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = AndroidFacebook_get_KeyHash_m2329(L_3, /*hidden argument*/NULL);
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
extern "C" void CompiledFacebookLoader__ctor_m2247 (CompiledFacebookLoader_t418 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb()
// System.Void FB/CompiledFacebookLoader::Start()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void CompiledFacebookLoader_Start_m2248 (CompiledFacebookLoader_t418 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		AbstractFacebook_t414 * L_0 = (AbstractFacebook_t414 *)VirtFuncInvoker0< AbstractFacebook_t414 * >::Invoke(4 /* Facebook.AbstractFacebook FB/CompiledFacebookLoader::get_fb() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4 = L_0;
		FB_OnDllLoaded_m2260(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_Destroy_m3897(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
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
struct FBComponentFactory_t428;
struct IOSFacebookLoader_t445;
// Facebook.FBComponentFactory
#include "AssemblyU2DCSharp_Facebook_FBComponentFactory.h"
struct FBComponentFactory_t428;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<System.Object>(Facebook.IfNotExist)
extern "C" Object_t * FBComponentFactory_GetComponent_TisObject_t_m4053_gshared (Object_t * __this /* static, unused */, int32_t p0, const MethodInfo* method);
#define FBComponentFactory_GetComponent_TisObject_t_m4053(__this /* static, unused */, p0, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebookLoader>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebookLoader_t445_m4052(__this /* static, unused */, p0, method) (( IOSFacebookLoader_t445 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void FB::.ctor()
extern "C" void FB__ctor_m2249 (FB_t421 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m3777(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::.cctor()
extern "C" void FB__cctor_m2250 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// Facebook.AbstractFacebook FB::get_FacebookImpl()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t767_il2cpp_TypeInfo_var;
extern "C" AbstractFacebook_t414 * FB_get_FacebookImpl_m2251 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		NullReferenceException_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		NullReferenceException_t767 * L_2 = (NullReferenceException_t767 *)il2cpp_codegen_object_new (NullReferenceException_t767_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m4054(L_2, (String_t*) &_stringLiteral812, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_3 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		return L_3;
	}
}
// System.String FB::get_AppId()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AppId_m2252 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		return L_0;
	}
}
// System.String FB::get_UserId()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_UserId_m2253 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		String_t* L_3 = AbstractFacebook_get_UserId_m2223(L_2, /*hidden argument*/NULL);
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
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FB_get_AccessToken_m2254 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
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
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" DateTime_t287  FB_get_AccessTokenExpiresAt_m2255 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  G_B3_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		DateTime_t287  L_3 = (DateTime_t287 )VirtFuncInvoker0< DateTime_t287  >::Invoke(7 /* System.DateTime Facebook.AbstractFacebook::get_AccessTokenExpiresAt() */, L_2);
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_4 = ((DateTime_t287_StaticFields*)DateTime_t287_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Boolean FB::get_IsLoggedIn()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsLoggedIn_m2256 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsLoggedIn_m2222(L_2, /*hidden argument*/NULL);
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
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" bool FB_get_IsInitialized_m2257 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		bool L_1 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_2 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___facebook_4;
		NullCheck(L_2);
		bool L_3 = AbstractFacebook_get_IsInitialized_m2221(L_2, /*hidden argument*/NULL);
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
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_Init_m2258 (Object_t * __this /* static, unused */, InitDelegate_t419 * ___onInitComplete, HideUnityDelegate_t420 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		InitDelegate_t419 * L_0 = ___onInitComplete;
		String_t* L_1 = FBSettings_get_AppId_m2309(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = FBSettings_get_Cookie_m2311(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = FBSettings_get_Logging_m2313(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = FBSettings_get_Status_m2315(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_5 = FBSettings_get_Xfbml_m2317(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = FBSettings_get_FrictionlessRequests_m2322(NULL /*static, unused*/, /*hidden argument*/NULL);
		HideUnityDelegate_t420 * L_7 = ___onHideUnity;
		String_t* L_8 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_Init_m2259(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FB::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,Facebook.HideUnityDelegate,System.String)
extern const Il2CppType* AbstractFacebook_t414_0_0_0_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebookLoader_t445_m4052_MethodInfo_var;
extern "C" void FB_Init_m2259 (Object_t * __this /* static, unused */, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AbstractFacebook_t414_0_0_0_var = il2cpp_codegen_type_from_index(408);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t445_m4052_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484079);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t425 * V_0 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___appId_7 = L_0;
		bool L_1 = ___cookie;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___cookie_8 = L_1;
		bool L_2 = ___logging;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___logging_9 = L_2;
		bool L_3 = ___status;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___status_10 = L_3;
		bool L_4 = ___xfbml;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___xfbml_11 = L_4;
		bool L_5 = ___frictionlessRequests;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12 = L_5;
		String_t* L_6 = ___authResponse;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___authResponse_5 = L_6;
		InitDelegate_t419 * L_7 = ___onInitComplete;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2 = L_7;
		HideUnityDelegate_t420 * L_8 = ___onHideUnity;
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3 = L_8;
		bool L_9 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6;
		if (L_9)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m4055(NULL /*static, unused*/, LoadTypeToken(AbstractFacebook_t414_0_0_0_var), /*hidden argument*/NULL);
		FBBuildVersionAttribute_t425 * L_11 = FBBuildVersionAttribute_GetVersionAttributeOfType_m2283(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		FBBuildVersionAttribute_t425 * L_12 = V_0;
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		FBDebug_Warn_m2289(NULL /*static, unused*/, (String_t*) &_stringLiteral813, /*hidden argument*/NULL);
		goto IL_0085;
	}

IL_006a:
	{
		FBBuildVersionAttribute_t425 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = FBBuildVersionAttribute_get_SdkVersion_m2280(L_13, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t425 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = FBBuildVersionAttribute_get_BuildVersion_m2281(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m4056(NULL /*static, unused*/, (String_t*) &_stringLiteral814, L_14, L_16, /*hidden argument*/NULL);
		FBDebug_Info_m2288(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
	}

IL_0085:
	{
		FBComponentFactory_GetComponent_TisIOSFacebookLoader_t445_m4052(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebookLoader_t445_m4052_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___isInitCalled_6 = 1;
		return;
	}

IL_0093:
	{
		FBDebug_Warn_m2289(NULL /*static, unused*/, (String_t*) &_stringLiteral815, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_18 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_19 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_18, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_OnDllLoaded_m2260(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		return;
	}
}
// System.Void FB::OnDllLoaded()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FB_OnDllLoaded_m2260 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	FBBuildVersionAttribute_t425 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m4057(L_0, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t425 * L_2 = FBBuildVersionAttribute_GetVersionAttributeOfType_m2283(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		FBBuildVersionAttribute_t425 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		FBBuildVersionAttribute_t425 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = FBBuildVersionAttribute_get_SdkVersion_m2280(L_4, /*hidden argument*/NULL);
		FBBuildVersionAttribute_t425 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = FBBuildVersionAttribute_get_BuildVersion_m2281(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m4056(NULL /*static, unused*/, (String_t*) &_stringLiteral816, L_5, L_7, /*hidden argument*/NULL);
		FBDebug_Log_m2287(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_9 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		InitDelegate_t419 * L_10 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___OnInitComplete_2;
		String_t* L_11 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___appId_7;
		bool L_12 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___cookie_8;
		bool L_13 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___logging_9;
		bool L_14 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___status_10;
		bool L_15 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___xfbml_11;
		String_t* L_16 = FBSettings_get_ChannelUrl_m2321(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___authResponse_5;
		bool L_18 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___frictionlessRequests_12;
		HideUnityDelegate_t420 * L_19 = ((FB_t421_StaticFields*)FB_t421_il2cpp_TypeInfo_var->static_fields)->___OnHideUnity_3;
		NullCheck(L_9);
		VirtActionInvoker10< InitDelegate_t419 *, String_t*, bool, bool, bool, bool, String_t*, String_t*, bool, HideUnityDelegate_t420 * >::Invoke(10 /* System.Void Facebook.AbstractFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate) */, L_9, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, L_19);
		return;
	}
}
// System.Void FB::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_Login_m2261 (Object_t * __this /* static, unused */, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		FacebookDelegate_t433 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t433 * >::Invoke(11 /* System.Void Facebook.AbstractFacebook::Login(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::Logout()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_Logout_m2262 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void Facebook.AbstractFacebook::Logout() */, L_0);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t690_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m2263 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		Nullable_1_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t690  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t432 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		StringU5BU5D_t75* L_4 = ___to;
		Initobj (Nullable_1_t690_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t690  L_5 = V_0;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t433 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t432 *, String_t*, StringU5BU5D_t75*, List_1_t684 *, StringU5BU5D_t75*, Nullable_1_t690 , String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, (List_1_t684 *)NULL, (StringU5BU5D_t75*)(StringU5BU5D_t75*)NULL, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::AppRequest(System.String,Facebook.OGActionType,System.String,System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m2264 (Object_t * __this /* static, unused */, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		OGActionType_t432 * L_2 = ___actionType;
		String_t* L_3 = ___objectId;
		List_1_t684 * L_4 = ___filters;
		StringU5BU5D_t75* L_5 = ___excludeIds;
		Nullable_1_t690  L_6 = ___maxRecipients;
		String_t* L_7 = ___data;
		String_t* L_8 = ___title;
		FacebookDelegate_t433 * L_9 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t432 *, String_t*, StringU5BU5D_t75*, List_1_t684 *, StringU5BU5D_t75*, Nullable_1_t690 , String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, (StringU5BU5D_t75*)(StringU5BU5D_t75*)NULL, L_4, L_5, L_6, L_7, L_8, L_9);
		return;
	}
}
// System.Void FB::AppRequest(System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_AppRequest_m2265 (Object_t * __this /* static, unused */, String_t* ___message, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___message;
		StringU5BU5D_t75* L_2 = ___to;
		List_1_t684 * L_3 = ___filters;
		StringU5BU5D_t75* L_4 = ___excludeIds;
		Nullable_1_t690  L_5 = ___maxRecipients;
		String_t* L_6 = ___data;
		String_t* L_7 = ___title;
		FacebookDelegate_t433 * L_8 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker10< String_t*, OGActionType_t432 *, String_t*, StringU5BU5D_t75*, List_1_t684 *, StringU5BU5D_t75*, Nullable_1_t690 , String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(15 /* System.Void Facebook.AbstractFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, (OGActionType_t432 *)NULL, (String_t*)NULL, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return;
	}
}
// System.Void FB::Feed(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_Feed_m2266 (Object_t * __this /* static, unused */, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		Dictionary_2_t116 * L_11 = ___properties;
		FacebookDelegate_t433 * L_12 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker12< String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, String_t*, Dictionary_2_t116 *, FacebookDelegate_t433 * >::Invoke(16 /* System.Void Facebook.AbstractFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_API_m2267 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t448 * ___method, FacebookDelegate_t433 * ___callback, Dictionary_2_t122 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t448 * L_2 = ___method;
		Dictionary_2_t122 * L_3 = ___formData;
		FacebookDelegate_t433 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t448 *, Dictionary_2_t122 *, FacebookDelegate_t433 * >::Invoke(20 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::API(System.String,Facebook.HttpMethod,Facebook.FacebookDelegate,UnityEngine.WWWForm)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_API_m2268 (Object_t * __this /* static, unused */, String_t* ___query, HttpMethod_t448 * ___method, FacebookDelegate_t433 * ___callback, WWWForm_t112 * ___formData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___query;
		HttpMethod_t448 * L_2 = ___method;
		WWWForm_t112 * L_3 = ___formData;
		FacebookDelegate_t433 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, HttpMethod_t448 *, WWWForm_t112 *, FacebookDelegate_t433 * >::Invoke(21 /* System.Void Facebook.AbstractFacebook::API(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::PublishInstall(Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_PublishInstall_m2269 (Object_t * __this /* static, unused */, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t433 * >::Invoke(22 /* System.Void Facebook.AbstractFacebook::PublishInstall(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void FB::ActivateApp()
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_ActivateApp_m2270 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Facebook.AbstractFacebook::ActivateApp(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_GetDeepLink_m2271 (Object_t * __this /* static, unused */, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_1 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker1< FacebookDelegate_t433 * >::Invoke(24 /* System.Void Facebook.AbstractFacebook::GetDeepLink(Facebook.FacebookDelegate) */, L_0, L_1);
		return;
	}
}
// System.Void FB::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupCreate_m2272 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		String_t* L_2 = ___description;
		String_t* L_3 = ___privacy;
		FacebookDelegate_t433 * L_4 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker4< String_t*, String_t*, String_t*, FacebookDelegate_t433 * >::Invoke(18 /* System.Void Facebook.AbstractFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2, L_3, L_4);
		return;
	}
}
// System.Void FB::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern "C" void FB_GameGroupJoin_m2273 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		AbstractFacebook_t414 * L_0 = FB_get_FacebookImpl_m2251(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___id;
		FacebookDelegate_t433 * L_2 = ___callback;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, FacebookDelegate_t433 * >::Invoke(19 /* System.Void Facebook.AbstractFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate) */, L_0, L_1, L_2);
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
extern "C" void FBAppEventName__ctor_m2274 (FBAppEventName_t422 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern "C" void FBAppEventParameterName__ctor_m2275 (FBAppEventParameterName_t423 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
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
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void FBAppRequestsFilterGroup__ctor_m2276 (FBAppRequestsFilterGroup_t424 * __this, String_t* ___name, List_1_t115 * ___user_ids, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2__ctor_m3712(__this, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		String_t* L_0 = ___name;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral524, L_0);
		List_1_t115 * L_1 = ___user_ids;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, __this, (String_t*) &_stringLiteral817, L_1);
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
extern TypeInfo* CharU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t768_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" void FBBuildVersionAttribute__ctor_m2277 (FBBuildVersionAttribute_t425 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		CultureInfo_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	{
		Attribute__ctor_m4058(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___buildVersion;
		__this->___buildVersion_2 = L_0;
		String_t* L_1 = ___buildVersion;
		CharU5BU5D_t697* L_2 = ((CharU5BU5D_t697*)SZArrayNew(CharU5BU5D_t697_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_1);
		StringU5BU5D_t75* L_3 = String_Split_m3709(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t75* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t768_il2cpp_TypeInfo_var);
		CultureInfo_t768 * L_6 = CultureInfo_get_InvariantCulture_m4059(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_7 = DateTime_ParseExact_m4060(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), (String_t*) &_stringLiteral818, L_6, /*hidden argument*/NULL);
		__this->___buildDate_0 = L_7;
		StringU5BU5D_t75* L_8 = V_0;
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
extern "C" DateTime_t287  FBBuildVersionAttribute_get_Date_m2278 (FBBuildVersionAttribute_t425 * __this, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = (__this->___buildDate_0);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
extern "C" String_t* FBBuildVersionAttribute_get_Hash_m2279 (FBBuildVersionAttribute_t425 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildHash_1);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
extern "C" String_t* FBBuildVersionAttribute_get_SdkVersion_m2280 (FBBuildVersionAttribute_t425 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___sdkVersion_3);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
extern "C" String_t* FBBuildVersionAttribute_get_BuildVersion_m2281 (FBBuildVersionAttribute_t425 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// System.String Facebook.FBBuildVersionAttribute::ToString()
extern "C" String_t* FBBuildVersionAttribute_ToString_m2282 (FBBuildVersionAttribute_t425 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___buildVersion_2);
		return L_0;
	}
}
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
extern "C" FBBuildVersionAttribute_t425 * FBBuildVersionAttribute_GetVersionAttributeOfType_m2283 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	FBBuildVersionAttribute_t425 * V_0 = {0};
	FBBuildVersionAttributeU5BU5D_t695* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type;
		FBBuildVersionAttributeU5BU5D_t695* L_1 = FBBuildVersionAttribute_getAttributes_m2284(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0018;
	}

IL_000e:
	{
		FBBuildVersionAttributeU5BU5D_t695* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(FBBuildVersionAttribute_t425 **)(FBBuildVersionAttribute_t425 **)SZArrayLdElema(L_2, L_4));
		FBBuildVersionAttribute_t425 * L_5 = V_0;
		return L_5;
	}
	// Dead block : IL_0014: ldloc.2

IL_0018:
	{
		int32_t L_6 = V_2;
		FBBuildVersionAttributeU5BU5D_t695* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		return (FBBuildVersionAttribute_t425 *)NULL;
	}
}
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
extern const Il2CppType* FBBuildVersionAttribute_t425_0_0_0_var;
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBBuildVersionAttributeU5BU5D_t695_il2cpp_TypeInfo_var;
extern "C" FBBuildVersionAttributeU5BU5D_t695* FBBuildVersionAttribute_getAttributes_m2284 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBBuildVersionAttribute_t425_0_0_0_var = il2cpp_codegen_type_from_index(412);
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		FBBuildVersionAttributeU5BU5D_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(414);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t769 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4061(L_1, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		Assembly_t769 * L_3 = (Assembly_t769 *)VirtFuncInvoker0< Assembly_t769 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_2);
		V_0 = L_3;
		Assembly_t769 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4055(NULL /*static, unused*/, LoadTypeToken(FBBuildVersionAttribute_t425_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		ObjectU5BU5D_t682* L_6 = (ObjectU5BU5D_t682*)VirtFuncInvoker2< ObjectU5BU5D_t682*, Type_t *, bool >::Invoke(9 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_4, L_5, 0);
		return ((FBBuildVersionAttributeU5BU5D_t695*)Castclass(L_6, FBBuildVersionAttributeU5BU5D_t695_il2cpp_TypeInfo_var));
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
extern "C" void FBComponentFactory__ctor_m2285 (FBComponentFactory_t428 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject Facebook.FBComponentFactory::get_FacebookGameObject()
extern TypeInfo* FBComponentFactory_t428_il2cpp_TypeInfo_var;
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern "C" GameObject_t352 * FBComponentFactory_get_FacebookGameObject_m2286 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_t428_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(415);
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t352 * L_0 = ((FBComponentFactory_t428_StaticFields*)FBComponentFactory_t428_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_t352 * L_2 = (GameObject_t352 *)il2cpp_codegen_object_new (GameObject_t352_il2cpp_TypeInfo_var);
		GameObject__ctor_m3855(L_2, (String_t*) &_stringLiteral820, /*hidden argument*/NULL);
		((FBComponentFactory_t428_StaticFields*)FBComponentFactory_t428_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1 = L_2;
	}

IL_001f:
	{
		GameObject_t352 * L_3 = ((FBComponentFactory_t428_StaticFields*)FBComponentFactory_t428_il2cpp_TypeInfo_var->static_fields)->___facebookGameObject_1;
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
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Log_m2287 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Debug_get_isDebugBuild_m4062(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = Application_get_isWebPlayer_m4063(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		ObjectU5BU5D_t682* L_2 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___msg;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral821, L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		String_t* L_4 = ___msg;
		Debug_Log_m382(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void FBDebug::Info(System.String)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Info_m2288 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m4063(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t682* L_1 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral822, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_Log_m382(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Warn(System.String)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Warn_m2289 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m4063(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t682* L_1 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral823, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogWarning_m389(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FBDebug::Error(System.String)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void FBDebug_Error_m2290 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isWebPlayer_m4063(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t682* L_1 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		String_t* L_2 = ___msg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral824, L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		String_t* L_3 = ___msg;
		Debug_LogError_m393(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
extern "C" void FBResult__ctor_m2291 (FBResult_t281 * __this, WWW_t265 * ___www, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___isWWWWrapper_0 = 1;
		WWW_t265 * L_0 = ___www;
		__this->___data_1 = L_0;
		return;
	}
}
// System.Void FBResult::.ctor(System.String,System.String)
extern "C" void FBResult__ctor_m2292 (FBResult_t281 * __this, String_t* ___data, String_t* ___error, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___data;
		__this->___data_1 = L_0;
		String_t* L_1 = ___error;
		__this->___error_2 = L_1;
		return;
	}
}
// UnityEngine.Texture2D FBResult::get_Texture()
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t108_il2cpp_TypeInfo_var;
extern "C" Texture2D_t108 * FBResult_get_Texture_m2293 (FBResult_t281 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		Texture2D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t108 * G_B3_0 = {0};
	{
		bool L_0 = (__this->___isWWWWrapper_0);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_1 = (__this->___data_1);
		NullCheck(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)));
		Texture2D_t108 * L_2 = WWW_get_texture_m3852(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002b;
	}

IL_0020:
	{
		Object_t * L_3 = (__this->___data_1);
		G_B3_0 = ((Texture2D_t108 *)IsInst(L_3, Texture2D_t108_il2cpp_TypeInfo_var));
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// System.String FBResult::get_Text()
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Text_m2294 (FBResult_t281 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
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
		NullCheck(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_text_m3908(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern "C" String_t* FBResult_get_Error_m2295 (FBResult_t281 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
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
		NullCheck(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)));
		String_t* L_2 = WWW_get_error_m3851(((WWW_t265 *)Castclass(L_1, WWW_t265_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern "C" void FBResult_Dispose_m2296 (FBResult_t281 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
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
		NullCheck(((WWW_t265 *)Castclass(L_2, WWW_t265_il2cpp_TypeInfo_var)));
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, ((WWW_t265 *)Castclass(L_2, WWW_t265_il2cpp_TypeInfo_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void FBResult::Finalize()
extern "C" void FBResult_Finalize_m2297 (FBResult_t281 * __this, const MethodInfo* method)
{
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m490(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
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
struct ScriptableObject_t148;
struct FBSettings_t430;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
struct ScriptableObject_t148;
struct Object_t;
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<System.Object>()
extern "C" Object_t * ScriptableObject_CreateInstance_TisObject_t_m3775_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ScriptableObject_CreateInstance_TisObject_t_m3775(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3775_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
// !!0 UnityEngine.ScriptableObject::CreateInstance<FBSettings>()
#define ScriptableObject_CreateInstance_TisFBSettings_t430_m4065(__this /* static, unused */, method) (( FBSettings_t430 * (*) (Object_t * /* static, unused */, const MethodInfo*))ScriptableObject_CreateInstance_TisObject_t_m3775_gshared)(__this /* static, unused */, method)


// System.Void FBSettings::.ctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings__ctor_m2298 (FBSettings_t430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral330);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral330;
		__this->___appIds_7 = L_0;
		StringU5BU5D_t75* L_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral827);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral827;
		__this->___appLabels_8 = L_1;
		__this->___cookie_9 = 1;
		__this->___logging_10 = 1;
		__this->___status_11 = 1;
		__this->___frictionlessRequests_13 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___iosURLSuffix_14 = L_2;
		ScriptableObject__ctor_m3777(__this, /*hidden argument*/NULL);
		return;
	}
}
// FBSettings FBSettings::get_Instance()
extern TypeInfo* FBSettings_t430_il2cpp_TypeInfo_var;
extern const MethodInfo* ScriptableObject_CreateInstance_TisFBSettings_t430_m4065_MethodInfo_var;
extern "C" FBSettings_t430 * FBSettings_get_Instance_m2299 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBSettings_t430_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(416);
		ScriptableObject_CreateInstance_TisFBSettings_t430_m4065_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484080);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t430 * L_0 = ((FBSettings_t430_StaticFields*)FBSettings_t430_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Object_t703 * L_2 = Resources_Load_m3779(NULL /*static, unused*/, (String_t*) &_stringLiteral825, /*hidden argument*/NULL);
		((FBSettings_t430_StaticFields*)FBSettings_t430_il2cpp_TypeInfo_var->static_fields)->___instance_5 = ((FBSettings_t430 *)IsInst(L_2, FBSettings_t430_il2cpp_TypeInfo_var));
		FBSettings_t430 * L_3 = ((FBSettings_t430_StaticFields*)FBSettings_t430_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		bool L_4 = Object_op_Equality_m3778(NULL /*static, unused*/, L_3, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		FBSettings_t430 * L_5 = ScriptableObject_CreateInstance_TisFBSettings_t430_m4065(NULL /*static, unused*/, /*hidden argument*/ScriptableObject_CreateInstance_TisFBSettings_t430_m4065_MethodInfo_var);
		((FBSettings_t430_StaticFields*)FBSettings_t430_il2cpp_TypeInfo_var->static_fields)->___instance_5 = L_5;
	}

IL_003e:
	{
		FBSettings_t430 * L_6 = ((FBSettings_t430_StaticFields*)FBSettings_t430_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		return L_6;
	}
}
// System.Void FBSettings::SetAppIndex(System.Int32)
extern "C" void FBSettings_SetAppIndex_m2300 (FBSettings_t430 * __this, int32_t ___index, const MethodInfo* method)
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
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Int32 FBSettings::get_SelectedAppIndex()
extern "C" int32_t FBSettings_get_SelectedAppIndex_m2301 (FBSettings_t430 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___selectedAppIndex_6);
		return L_0;
	}
}
// System.Void FBSettings::SetAppId(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppId_m2302 (FBSettings_t430 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = (__this->___appIds_7);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m415(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t75* L_5 = (__this->___appIds_7);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppIds()
extern "C" StringU5BU5D_t75* FBSettings_get_AppIds_m2303 (FBSettings_t430 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___appIds_7);
		return L_0;
	}
}
// System.Void FBSettings::set_AppIds(System.String[])
extern "C" void FBSettings_set_AppIds_m2304 (FBSettings_t430 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___appIds_7);
		StringU5BU5D_t75* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t75*)L_0) == ((Object_t*)(StringU5BU5D_t75*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t75* L_2 = ___value;
		__this->___appIds_7 = L_2;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void FBSettings::SetAppLabel(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_SetAppLabel_m2305 (FBSettings_t430 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = (__this->___appLabels_8);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m415(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2)), L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		StringU5BU5D_t75* L_5 = FBSettings_get_AppLabels_m2306(__this, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		String_t* L_7 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_7);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, L_6)) = (String_t*)L_7;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.String[] FBSettings::get_AppLabels()
extern "C" StringU5BU5D_t75* FBSettings_get_AppLabels_m2306 (FBSettings_t430 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___appLabels_8);
		return L_0;
	}
}
// System.Void FBSettings::set_AppLabels(System.String[])
extern "C" void FBSettings_set_AppLabels_m2307 (FBSettings_t430 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___appLabels_8);
		StringU5BU5D_t75* L_1 = ___value;
		if ((((Object_t*)(StringU5BU5D_t75*)L_0) == ((Object_t*)(StringU5BU5D_t75*)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_t75* L_2 = ___value;
		__this->___appLabels_8 = L_2;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.String[] FBSettings::get_AllAppIds()
extern "C" StringU5BU5D_t75* FBSettings_get_AllAppIds_m2308 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = FBSettings_get_AppIds_m2303(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String FBSettings::get_AppId()
extern "C" String_t* FBSettings_get_AppId_m2309 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = FBSettings_get_AppIds_m2303(L_0, /*hidden argument*/NULL);
		FBSettings_t430 * L_2 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = FBSettings_get_SelectedAppIndex_m2301(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_3);
		int32_t L_4 = L_3;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_4));
	}
}
// System.Boolean FBSettings::get_IsValidAppId()
extern "C" bool FBSettings_get_IsValidAppId_m2310 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = FBSettings_get_AppId_m2309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = FBSettings_get_AppId_m2309(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = FBSettings_get_AppId_m2309(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_3, (String_t*) &_stringLiteral330);
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
extern "C" bool FBSettings_get_Cookie_m2311 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		return L_1;
	}
}
// System.Void FBSettings::set_Cookie(System.Boolean)
extern "C" void FBSettings_set_Cookie_m2312 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___cookie_9);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t430 * L_3 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___cookie_9 = L_4;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Logging()
extern "C" bool FBSettings_get_Logging_m2313 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		return L_1;
	}
}
// System.Void FBSettings::set_Logging(System.Boolean)
extern "C" void FBSettings_set_Logging_m2314 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___logging_10);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t430 * L_3 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___logging_10 = L_4;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Status()
extern "C" bool FBSettings_get_Status_m2315 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		return L_1;
	}
}
// System.Void FBSettings::set_Status(System.Boolean)
extern "C" void FBSettings_set_Status_m2316 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___status_11);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t430 * L_3 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___status_11 = L_4;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean FBSettings::get_Xfbml()
extern "C" bool FBSettings_get_Xfbml_m2317 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		return L_1;
	}
}
// System.Void FBSettings::set_Xfbml(System.Boolean)
extern "C" void FBSettings_set_Xfbml_m2318 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___xfbml_12);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t430 * L_3 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___xfbml_12 = L_4;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.String FBSettings::get_IosURLSuffix()
extern "C" String_t* FBSettings_get_IosURLSuffix_m2319 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		return L_1;
	}
}
// System.Void FBSettings::set_IosURLSuffix(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FBSettings_set_IosURLSuffix_m2320 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (L_0->___iosURLSuffix_14);
		String_t* L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		FBSettings_t430 * L_4 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___value;
		NullCheck(L_4);
		L_4->___iosURLSuffix_14 = L_5;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.String FBSettings::get_ChannelUrl()
extern "C" String_t* FBSettings_get_ChannelUrl_m2321 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral826;
	}
}
// System.Boolean FBSettings::get_FrictionlessRequests()
extern "C" bool FBSettings_get_FrictionlessRequests_m2322 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		return L_1;
	}
}
// System.Void FBSettings::set_FrictionlessRequests(System.Boolean)
extern "C" void FBSettings_set_FrictionlessRequests_m2323 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method)
{
	{
		FBSettings_t430 * L_0 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___frictionlessRequests_13);
		bool L_2 = ___value;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		FBSettings_t430 * L_3 = FBSettings_get_Instance_m2299(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = ___value;
		NullCheck(L_3);
		L_3->___frictionlessRequests_13 = L_4;
		FBSettings_DirtyEditor_m2324(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void FBSettings::DirtyEditor()
extern "C" void FBSettings_DirtyEditor_m2324 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" void OGActionType__ctor_m2325 (OGActionType_t432 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.OGActionType::.cctor()
extern TypeInfo* OGActionType_t432_il2cpp_TypeInfo_var;
extern "C" void OGActionType__cctor_m2326 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OGActionType_t432_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(297);
		s_Il2CppMethodIntialized = true;
	}
	OGActionType_t432 * V_0 = {0};
	{
		OGActionType_t432 * L_0 = (OGActionType_t432 *)il2cpp_codegen_object_new (OGActionType_t432_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2325(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		OGActionType_t432 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___actionTypeValue_3 = (String_t*) &_stringLiteral65;
		OGActionType_t432 * L_2 = V_0;
		((OGActionType_t432_StaticFields*)OGActionType_t432_il2cpp_TypeInfo_var->static_fields)->___Send_0 = L_2;
		OGActionType_t432 * L_3 = (OGActionType_t432 *)il2cpp_codegen_object_new (OGActionType_t432_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2325(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		OGActionType_t432 * L_4 = V_0;
		NullCheck(L_4);
		L_4->___actionTypeValue_3 = (String_t*) &_stringLiteral527;
		OGActionType_t432 * L_5 = V_0;
		((OGActionType_t432_StaticFields*)OGActionType_t432_il2cpp_TypeInfo_var->static_fields)->___AskFor_1 = L_5;
		OGActionType_t432 * L_6 = (OGActionType_t432 *)il2cpp_codegen_object_new (OGActionType_t432_il2cpp_TypeInfo_var);
		OGActionType__ctor_m2325(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		OGActionType_t432 * L_7 = V_0;
		NullCheck(L_7);
		L_7->___actionTypeValue_3 = (String_t*) &_stringLiteral528;
		OGActionType_t432 * L_8 = V_0;
		((OGActionType_t432_StaticFields*)OGActionType_t432_il2cpp_TypeInfo_var->static_fields)->___Turn_2 = L_8;
		return;
	}
}
// System.String Facebook.OGActionType::ToString()
extern "C" String_t* OGActionType_ToString_m2327 (OGActionType_t432 * __this, const MethodInfo* method)
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
extern "C" void AndroidFacebook__ctor_m2328 (AndroidFacebook_t434 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m2219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Facebook.AndroidFacebook::get_KeyHash()
extern "C" String_t* AndroidFacebook_get_KeyHash_m2329 (AndroidFacebook_t434 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___keyHash_15);
		return L_0;
	}
}
// System.Boolean Facebook.AndroidFacebook::get_LimitEventUsage()
extern "C" bool AndroidFacebook_get_LimitEventUsage_m2330 (AndroidFacebook_t434 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t414 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.AndroidFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void AndroidFacebook_set_LimitEventUsage_m2331 (AndroidFacebook_t434 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t414 *)__this)->___limitEventUsage_9 = L_0;
		String_t* L_1 = Boolean_ToString_m3816((&___value), /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral828, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::CallFB(System.String,System.String)
extern "C" void AndroidFacebook_CallFB_m2332 (AndroidFacebook_t434 * __this, String_t* ___method, String_t* ___args, const MethodInfo* method)
{
	{
		FBDebug_Error_m2290(NULL /*static, unused*/, (String_t*) &_stringLiteral829, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAwake()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAwake_m2333 (AndroidFacebook_t434 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
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
extern "C" bool AndroidFacebook_IsErrorResponse_m2334 (AndroidFacebook_t434 * __this, String_t* ___response, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void Facebook.AndroidFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void AndroidFacebook_Init_m2335 (AndroidFacebook_t434 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t711 * L_2 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4066(L_2, (String_t*) &_stringLiteral830, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Dictionary_2_t312 * L_3 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_3, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_3;
		Dictionary_2_t312 * L_4 = V_0;
		String_t* L_5 = ___appId;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral831, L_5);
		bool L_6 = ___cookie;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Dictionary_2_t312 * L_7 = V_0;
		bool L_8 = 1;
		Object_t * L_9 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral832, L_9);
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
		Dictionary_2_t312 * L_11 = V_0;
		bool L_12 = 0;
		Object_t * L_13 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral833, L_13);
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
		Dictionary_2_t312 * L_15 = V_0;
		bool L_16 = 0;
		Object_t * L_17 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral629, L_17);
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
		Dictionary_2_t312 * L_19 = V_0;
		bool L_20 = 1;
		Object_t * L_21 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral834, L_21);
	}

IL_0087:
	{
		String_t* L_22 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (L_23)
		{
			goto IL_00a0;
		}
	}
	{
		Dictionary_2_t312 * L_24 = V_0;
		String_t* L_25 = ___channelUrl;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral835, L_25);
	}

IL_00a0:
	{
		String_t* L_26 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00b9;
		}
	}
	{
		Dictionary_2_t312 * L_28 = V_0;
		String_t* L_29 = ___authResponse;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_28, (String_t*) &_stringLiteral836, L_29);
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
		Dictionary_2_t312 * L_31 = V_0;
		bool L_32 = 1;
		Object_t * L_33 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral837, L_33);
	}

IL_00d1:
	{
		Dictionary_2_t312 * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_35 = Json_Serialize_m2512(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		InitDelegate_t419 * L_36 = ___onInitComplete;
		__this->___onInitComplete_17 = L_36;
		String_t* L_37 = V_1;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_37);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral838, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnInitComplete(System.String)
extern "C" void AndroidFacebook_OnInitComplete_m2336 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		((AbstractFacebook_t414 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___message;
		AndroidFacebook_OnLoginComplete_m2338(__this, L_0, /*hidden argument*/NULL);
		InitDelegate_t419 * L_1 = (__this->___onInitComplete_17);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		InitDelegate_t419 * L_2 = (__this->___onInitComplete_17);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void Facebook.InitDelegate::Invoke() */, L_2);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void AndroidFacebook_Login_m2337 (AndroidFacebook_t434 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___scope;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_1, (String_t*) &_stringLiteral839, L_2);
		Dictionary_2_t312 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_4 = Json_Serialize_m2512(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		FacebookDelegate_t433 * L_5 = ___callback;
		AbstractFacebook_AddAuthDelegate_m2232(__this, L_5, /*hidden argument*/NULL);
		String_t* L_6 = V_1;
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral139, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLoginComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLoginComplete_m2338 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral810);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 1;
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral810);
		((AbstractFacebook_t414 *)__this)->___userId_6 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral615);
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral840);
		int32_t L_10 = Int32_Parse_m3707(NULL /*static, unused*/, ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t287  L_11 = AndroidFacebook_FromTimestamp_m2358(__this, L_10, /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t312 * L_12 = V_0;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_12, (String_t*) &_stringLiteral841);
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t312 * L_14 = V_0;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral841);
		__this->___keyHash_15 = ((String_t*)Castclass(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0096:
	{
		String_t* L_16 = ___message;
		FBResult_t281 * L_17 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_17, L_16, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGroupCreateComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGroupCreateComplete_m2339 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral842);
		V_1 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_4, (String_t*) &_stringLiteral842);
		String_t* L_5 = V_1;
		Dictionary_2_t312 * L_6 = V_0;
		String_t* L_7 = Json_Serialize_m2512(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		FBResult_t281 * L_8 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnAccessTokenRefresh_m2340 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral615);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral615);
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral840);
		int32_t L_8 = Int32_Parse_m3707(NULL /*static, unused*/, ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t287  L_9 = AndroidFacebook_FromTimestamp_m2358(__this, L_8, /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_9;
	}

IL_0053:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Logout_m2341 (AndroidFacebook_t434 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral143, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnLogoutComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnLogoutComplete_m2342 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___userId_6 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = L_1;
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m4068_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4069_MethodInfo_var;
extern "C" void AndroidFacebook_AppRequest_m2343 (AndroidFacebook_t434 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Nullable_1_get_HasValue_m4068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		Nullable_1_get_Value_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t770 * L_2 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_2, (String_t*) &_stringLiteral158, (String_t*) &_stringLiteral843, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t432 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t770 * L_6 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_6, (String_t*) &_stringLiteral844, (String_t*) &_stringLiteral845, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t432 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t770 * L_10 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_10, (String_t*) &_stringLiteral846, (String_t*) &_stringLiteral847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t312 * L_11 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_11, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t312 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral158, L_13);
		FacebookDelegate_t433 * L_14 = ___callback;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		Dictionary_2_t312 * L_15 = V_0;
		FacebookDelegate_t433 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral842, L_17);
	}

IL_0089:
	{
		OGActionType_t432 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00b7;
		}
	}
	{
		Dictionary_2_t312 * L_21 = V_0;
		OGActionType_t432 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral526, L_23);
		Dictionary_2_t312 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral848, L_25);
	}

IL_00b7:
	{
		StringU5BU5D_t75* L_26 = ___to;
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t312 * L_27 = V_0;
		StringU5BU5D_t75* L_28 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Join_m3784(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral178, L_29);
	}

IL_00d5:
	{
		List_1_t684 * L_30 = ___filters;
		if (!L_30)
		{
			goto IL_0109;
		}
	}
	{
		List_1_t684 * L_31 = ___filters;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_31);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t684 * L_33 = ___filters;
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
		Dictionary_2_t312 * L_36 = V_0;
		String_t* L_37 = V_1;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral849, L_37);
	}

IL_0109:
	{
		bool L_38 = Nullable_1_get_HasValue_m4068((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		if (!L_38)
		{
			goto IL_012c;
		}
	}
	{
		Dictionary_2_t312 * L_39 = V_0;
		int32_t L_40 = Nullable_1_get_Value_m4069((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral850, L_42);
	}

IL_012c:
	{
		String_t* L_43 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0145;
		}
	}
	{
		Dictionary_2_t312 * L_45 = V_0;
		String_t* L_46 = ___data;
		NullCheck(L_45);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_45, (String_t*) &_stringLiteral155, L_46);
	}

IL_0145:
	{
		String_t* L_47 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_015e;
		}
	}
	{
		Dictionary_2_t312 * L_49 = V_0;
		String_t* L_50 = ___title;
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_49, (String_t*) &_stringLiteral851, L_50);
	}

IL_015e:
	{
		Dictionary_2_t312 * L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_52 = Json_Serialize_m2512(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral852, L_52, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnAppRequestsComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t771_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4070_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m4071_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m4072_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4073_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4074_MethodInfo_var;
extern "C" void AndroidFacebook_OnAppRequestsComplete_m2344 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Enumerator_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		List_1__ctor_m4070_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484083);
		Dictionary_2_get_Keys_m4071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		KeyCollection_GetEnumerator_m4072_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		Enumerator_get_Current_m4073_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484086);
		Enumerator_MoveNext_m4074_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	String_t* V_2 = {0};
	List_1_t115 * V_3 = {0};
	String_t* V_4 = {0};
	Enumerator_t771  V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral842);
		if (!L_3)
		{
			goto IL_010c;
		}
	}
	{
		Dictionary_2_t312 * L_4 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_4, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t312 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral842);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral842);
		Dictionary_2_t312 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		Dictionary_2_t312 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_10);
		List_1_t115 * L_12 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m4070(L_12, ((int32_t)((int32_t)L_11-(int32_t)1)), /*hidden argument*/List_1__ctor_m4070_MethodInfo_var);
		V_3 = L_12;
		Dictionary_2_t312 * L_13 = V_0;
		NullCheck(L_13);
		KeyCollection_t772 * L_14 = Dictionary_2_get_Keys_m4071(L_13, /*hidden argument*/Dictionary_2_get_Keys_m4071_MethodInfo_var);
		NullCheck(L_14);
		Enumerator_t771  L_15 = KeyCollection_GetEnumerator_m4072(L_14, /*hidden argument*/KeyCollection_GetEnumerator_m4072_MethodInfo_var);
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
			String_t* L_16 = Enumerator_get_Current_m4073((&V_5), /*hidden argument*/Enumerator_get_Current_m4073_MethodInfo_var);
			V_4 = L_16;
			String_t* L_17 = V_4;
			NullCheck(L_17);
			bool L_18 = String_StartsWith_m4051(L_17, (String_t*) &_stringLiteral178, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_009a;
			}
		}

IL_0085:
		{
			Dictionary_2_t312 * L_19 = V_1;
			String_t* L_20 = V_4;
			Dictionary_2_t312 * L_21 = V_0;
			String_t* L_22 = V_4;
			NullCheck(L_21);
			Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_21, L_22);
			NullCheck(L_19);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, L_20, L_23);
			goto IL_00ad;
		}

IL_009a:
		{
			List_1_t115 * L_24 = V_3;
			Dictionary_2_t312 * L_25 = V_0;
			String_t* L_26 = V_4;
			NullCheck(L_25);
			Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_25, L_26);
			NullCheck(L_24);
			VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_24, ((String_t*)Castclass(L_27, String_t_il2cpp_TypeInfo_var)));
		}

IL_00ad:
		{
			bool L_28 = Enumerator_MoveNext_m4074((&V_5), /*hidden argument*/Enumerator_MoveNext_m4074_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		Enumerator_t771  L_29 = V_5;
		Enumerator_t771  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t771_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(190)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00cb:
	{
		Dictionary_2_t312 * L_32 = V_1;
		List_1_t115 * L_33 = V_3;
		NullCheck(L_32);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_32, (String_t*) &_stringLiteral178, L_33);
		Dictionary_2_t312 * L_34 = V_0;
		NullCheck(L_34);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_34);
		String_t* L_35 = V_2;
		Dictionary_2_t312 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_37 = Json_Serialize_m2512(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		FBResult_t281 * L_38 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_35, L_38, /*hidden argument*/NULL);
		goto IL_010c;
	}

IL_00f5:
	{
		String_t* L_39 = V_2;
		Dictionary_2_t312 * L_40 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2512(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		FBResult_t281 * L_42 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_42, L_41, (String_t*) &_stringLiteral853, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_39, L_42, /*hidden argument*/NULL);
	}

IL_010c:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t774_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4075_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4076_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4077_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4078_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4079_MethodInfo_var;
extern "C" void AndroidFacebook_FeedRequest_m2345 (AndroidFacebook_t434 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		Enumerator_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Dictionary_2_GetEnumerator_m4075_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		Enumerator_get_Current_m4076_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484089);
		KeyValuePair_2_get_Value_m4077_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484090);
		KeyValuePair_2_get_Key_m4078_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484091);
		Enumerator_MoveNext_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484092);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	Dictionary_2_t312 * V_2 = {0};
	KeyValuePair_2_t773  V_3 = {0};
	Enumerator_t774  V_4 = {0};
	Dictionary_2_t312 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		FacebookDelegate_t433 * L_1 = ___callback;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Dictionary_2_t312 * L_2 = V_0;
		FacebookDelegate_t433 * L_3 = ___callback;
		String_t* L_4 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_2, (String_t*) &_stringLiteral842, L_4);
	}

IL_0020:
	{
		String_t* L_5 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		Dictionary_2_t312 * L_7 = V_0;
		String_t* L_8 = ___toId;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral178, L_8);
	}

IL_0037:
	{
		String_t* L_9 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		Dictionary_2_t312 * L_11 = V_0;
		String_t* L_12 = ___link;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral586, L_12);
	}

IL_004e:
	{
		String_t* L_13 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		Dictionary_2_t312 * L_15 = V_0;
		String_t* L_16 = ___linkName;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral524, L_16);
	}

IL_0065:
	{
		String_t* L_17 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007e;
		}
	}
	{
		Dictionary_2_t312 * L_19 = V_0;
		String_t* L_20 = ___linkCaption;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_19, (String_t*) &_stringLiteral854, L_20);
	}

IL_007e:
	{
		String_t* L_21 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0097;
		}
	}
	{
		Dictionary_2_t312 * L_23 = V_0;
		String_t* L_24 = ___linkDescription;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_23, (String_t*) &_stringLiteral618, L_24);
	}

IL_0097:
	{
		String_t* L_25 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		Dictionary_2_t312 * L_27 = V_0;
		String_t* L_28 = ___picture;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_27, (String_t*) &_stringLiteral855, L_28);
	}

IL_00b0:
	{
		String_t* L_29 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_00c9;
		}
	}
	{
		Dictionary_2_t312 * L_31 = V_0;
		String_t* L_32 = ___mediaSource;
		NullCheck(L_31);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_31, (String_t*) &_stringLiteral667, L_32);
	}

IL_00c9:
	{
		String_t* L_33 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_35 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_t312 * L_37 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_37, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_1 = L_37;
		Dictionary_2_t312 * L_38 = V_1;
		String_t* L_39 = ___actionName;
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_38, (String_t*) &_stringLiteral524, L_39);
		Dictionary_2_t312 * L_40 = V_1;
		String_t* L_41 = ___actionLink;
		NullCheck(L_40);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_40, (String_t*) &_stringLiteral586, L_41);
		Dictionary_2_t312 * L_42 = V_0;
		Dictionary_2U5BU5D_t775* L_43 = ((Dictionary_2U5BU5D_t775*)SZArrayNew(Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t312 * L_44 = V_1;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		ArrayElementTypeCheck (L_43, L_44);
		*((Dictionary_2_t312 **)(Dictionary_2_t312 **)SZArrayLdElema(L_43, 0)) = (Dictionary_2_t312 *)L_44;
		NullCheck(L_42);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_42, (String_t*) &_stringLiteral856, (Object_t *)(Object_t *)L_43);
	}

IL_0116:
	{
		String_t* L_45 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_012f;
		}
	}
	{
		Dictionary_2_t312 * L_47 = V_0;
		String_t* L_48 = ___reference;
		NullCheck(L_47);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_47, (String_t*) &_stringLiteral857, L_48);
	}

IL_012f:
	{
		Dictionary_2_t116 * L_49 = ___properties;
		if (!L_49)
		{
			goto IL_01fa;
		}
	}
	{
		Dictionary_2_t312 * L_50 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_50, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_2 = L_50;
		Dictionary_2_t116 * L_51 = ___properties;
		NullCheck(L_51);
		Enumerator_t774  L_52 = Dictionary_2_GetEnumerator_m4075(L_51, /*hidden argument*/Dictionary_2_GetEnumerator_m4075_MethodInfo_var);
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
			KeyValuePair_2_t773  L_53 = Enumerator_get_Current_m4076((&V_4), /*hidden argument*/Enumerator_get_Current_m4076_MethodInfo_var);
			V_3 = L_53;
			StringU5BU5D_t75* L_54 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
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
			StringU5BU5D_t75* L_55 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_55);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_55)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_0190;
			}
		}

IL_0175:
		{
			Dictionary_2_t312 * L_56 = V_2;
			String_t* L_57 = KeyValuePair_2_get_Key_m4078((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4078_MethodInfo_var);
			StringU5BU5D_t75* L_58 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_58);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_58, 0);
			int32_t L_59 = 0;
			NullCheck(L_56);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_56, L_57, (*(String_t**)(String_t**)SZArrayLdElema(L_58, L_59)));
			goto IL_01d0;
		}

IL_0190:
		{
			Dictionary_2_t312 * L_60 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3712(L_60, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
			V_5 = L_60;
			Dictionary_2_t312 * L_61 = V_5;
			StringU5BU5D_t75* L_62 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 0);
			int32_t L_63 = 0;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral616, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t312 * L_64 = V_5;
			StringU5BU5D_t75* L_65 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_65);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 1);
			int32_t L_66 = 1;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, (String_t*) &_stringLiteral858, (*(String_t**)(String_t**)SZArrayLdElema(L_65, L_66)));
			Dictionary_2_t312 * L_67 = V_2;
			String_t* L_68 = KeyValuePair_2_get_Key_m4078((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4078_MethodInfo_var);
			Dictionary_2_t312 * L_69 = V_5;
			NullCheck(L_67);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_67, L_68, L_69);
		}

IL_01d0:
		{
			bool L_70 = Enumerator_MoveNext_m4079((&V_4), /*hidden argument*/Enumerator_MoveNext_m4079_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01e1;
	}

FINALLY_01e1:
	{ // begin finally (depth: 1)
		Enumerator_t774  L_71 = V_4;
		Enumerator_t774  L_72 = L_71;
		Object_t * L_73 = Box(Enumerator_t774_il2cpp_TypeInfo_var, &L_72);
		NullCheck(L_73);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_73);
		IL2CPP_END_FINALLY(481)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(481)
	{
		IL2CPP_JUMP_TBL(0x1EE, IL_01ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01ee:
	{
		Dictionary_2_t312 * L_74 = V_0;
		Dictionary_2_t312 * L_75 = V_2;
		NullCheck(L_74);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_74, (String_t*) &_stringLiteral859, L_75);
	}

IL_01fa:
	{
		Dictionary_2_t312 * L_76 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_77 = Json_Serialize_m2512(NULL /*static, unused*/, L_76, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral860, L_77, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnFeedRequestComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t771_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Dictionary_2_get_Keys_m4071_MethodInfo_var;
extern const MethodInfo* KeyCollection_GetEnumerator_m4072_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4073_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4074_MethodInfo_var;
extern "C" void AndroidFacebook_OnFeedRequestComplete_m2346 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(417);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Dictionary_2_get_Keys_m4071_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484084);
		KeyCollection_GetEnumerator_m4072_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484085);
		Enumerator_get_Current_m4073_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484086);
		Enumerator_MoveNext_m4074_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484087);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	Enumerator_t771  V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral842);
		if (!L_3)
		{
			goto IL_00c6;
		}
	}
	{
		Dictionary_2_t312 * L_4 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_4, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t312 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_5, (String_t*) &_stringLiteral842);
		V_2 = ((String_t*)Castclass(L_6, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_7 = V_0;
		NullCheck(L_7);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(!0) */, L_7, (String_t*) &_stringLiteral842);
		Dictionary_2_t312 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t312 * L_10 = V_0;
		NullCheck(L_10);
		KeyCollection_t772 * L_11 = Dictionary_2_get_Keys_m4071(L_10, /*hidden argument*/Dictionary_2_get_Keys_m4071_MethodInfo_var);
		NullCheck(L_11);
		Enumerator_t771  L_12 = KeyCollection_GetEnumerator_m4072(L_11, /*hidden argument*/KeyCollection_GetEnumerator_m4072_MethodInfo_var);
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
			String_t* L_13 = Enumerator_get_Current_m4073((&V_4), /*hidden argument*/Enumerator_get_Current_m4073_MethodInfo_var);
			V_3 = L_13;
			Dictionary_2_t312 * L_14 = V_1;
			String_t* L_15 = V_3;
			Dictionary_2_t312 * L_16 = V_0;
			String_t* L_17 = V_3;
			NullCheck(L_16);
			Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_16, L_17);
			NullCheck(L_14);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_14, L_15, L_18);
		}

IL_0073:
		{
			bool L_19 = Enumerator_MoveNext_m4074((&V_4), /*hidden argument*/Enumerator_MoveNext_m4074_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_t771  L_20 = V_4;
		Enumerator_t771  L_21 = L_20;
		Object_t * L_22 = Box(Enumerator_t771_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_22);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0091:
	{
		Dictionary_2_t312 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear() */, L_23);
		String_t* L_24 = V_2;
		Dictionary_2_t312 * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_26 = Json_Serialize_m2512(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		FBResult_t281 * L_27 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_24, L_27, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_00af:
	{
		String_t* L_28 = V_2;
		Dictionary_2_t312 * L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_30 = Json_Serialize_m2512(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		FBResult_t281 * L_31 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_31, L_30, (String_t*) &_stringLiteral853, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_28, L_31, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t776_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_Pay_m2347 (AndroidFacebook_t434 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t776 * L_0 = (PlatformNotSupportedException_t776 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t776_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m4080(L_0, (String_t*) &_stringLiteral861, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupCreate_m2348 (AndroidFacebook_t434 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral524, L_2);
		Dictionary_2_t312 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral618, L_4);
		Dictionary_2_t312 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral862, L_6);
		FacebookDelegate_t433 * L_7 = ___callback;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_t312 * L_8 = V_0;
		FacebookDelegate_t433 * L_9 = ___callback;
		String_t* L_10 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_8, (String_t*) &_stringLiteral842, L_10);
	}

IL_0044:
	{
		Dictionary_2_t312 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_12 = Json_Serialize_m2512(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral863, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void AndroidFacebook_GameGroupJoin_m2349 (AndroidFacebook_t434 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral154, L_2);
		FacebookDelegate_t433 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		Dictionary_2_t312 * L_4 = V_0;
		FacebookDelegate_t433 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral842, L_6);
	}

IL_002a:
	{
		Dictionary_2_t312 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2512(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral864, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_GetDeepLink_m2350 (AndroidFacebook_t434 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		FacebookDelegate_t433 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral865, L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnGetDeepLinkComplete_m2351 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		FacebookDelegate_t433 * L_2 = (__this->___deepLinkDelegate_16);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_3;
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral866, (&V_1));
		FacebookDelegate_t433 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t281 * L_8 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m4081_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4082_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogEvent_m2352 (AndroidFacebook_t434 * __this, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Nullable_1_get_HasValue_m4081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484093);
		Nullable_1_get_Value_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484094);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___logEvent;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral867, L_2);
		bool L_3 = Nullable_1_get_HasValue_m4081((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m4081_MethodInfo_var);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		Dictionary_2_t312 * L_4 = V_0;
		float L_5 = Nullable_1_get_Value_m4082((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m4082_MethodInfo_var);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t87_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral868, L_7);
	}

IL_0035:
	{
		Dictionary_2_t312 * L_8 = ___parameters;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		Dictionary_2_t312 * L_9 = V_0;
		Dictionary_2_t312 * L_10 = ___parameters;
		Dictionary_2_t122 * L_11 = AndroidFacebook_ToStringDict_m2357(__this, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_9, (String_t*) &_stringLiteral869, L_11);
	}

IL_004d:
	{
		Dictionary_2_t312 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_13 = Json_Serialize_m2512(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral870, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void AndroidFacebook_AppEventsLogPurchase_m2353 (AndroidFacebook_t434 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* G_B2_0 = {0};
	Dictionary_2_t312 * G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	Dictionary_2_t312 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	String_t* G_B3_1 = {0};
	Dictionary_2_t312 * G_B3_2 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		float L_2 = ___logPurchase;
		float L_3 = L_2;
		Object_t * L_4 = Box(Single_t87_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral871, L_4);
		Dictionary_2_t312 * L_5 = V_0;
		String_t* L_6 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		G_B1_0 = (String_t*) &_stringLiteral872;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = (String_t*) &_stringLiteral872;
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
		G_B3_0 = (String_t*) &_stringLiteral60;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0033:
	{
		NullCheck(G_B3_2);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, G_B3_2, G_B3_1, G_B3_0);
		Dictionary_2_t312 * L_9 = ___parameters;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Dictionary_2_t312 * L_10 = V_0;
		Dictionary_2_t312 * L_11 = ___parameters;
		Dictionary_2_t122 * L_12 = AndroidFacebook_ToStringDict_m2357(__this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral869, L_12);
	}

IL_0050:
	{
		Dictionary_2_t312 * L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_14 = Json_Serialize_m2512(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral870, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4049_MethodInfo_var;
extern "C" void AndroidFacebook_PublishInstall_m2354 (AndroidFacebook_t434 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m4049_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484078);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	{
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4049(L_0, 2, /*hidden argument*/Dictionary_2__ctor_m4049_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = V_0;
		String_t* L_2 = ___appId;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral873, L_2);
		FacebookDelegate_t433 * L_3 = ___callback;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		Dictionary_2_t122 * L_4 = V_0;
		FacebookDelegate_t433 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_4, (String_t*) &_stringLiteral842, L_6);
	}

IL_002b:
	{
		Dictionary_2_t122 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2512(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral874, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AndroidFacebook::OnPublishInstallComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void AndroidFacebook_OnPublishInstallComplete_m2355 (AndroidFacebook_t434 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral842);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral842);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t281 * L_7 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_7, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var)), L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void Facebook.AndroidFacebook::ActivateApp(System.String)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4049_MethodInfo_var;
extern "C" void AndroidFacebook_ActivateApp_m2356 (AndroidFacebook_t434 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m4049_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484078);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	{
		Dictionary_2_t122 * L_0 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4049(L_0, 1, /*hidden argument*/Dictionary_2__ctor_m4049_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Dictionary_2_t122 * L_3 = V_0;
		String_t* L_4 = ___appId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral873, L_4);
	}

IL_001e:
	{
		Dictionary_2_t122 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_6 = Json_Serialize_m2512(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AndroidFacebook_CallFB_m2332(__this, (String_t*) &_stringLiteral875, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.AndroidFacebook::ToStringDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t778_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3692_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4083_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4084_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4085_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4086_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4087_MethodInfo_var;
extern "C" Dictionary_2_t122 * AndroidFacebook_ToStringDict_m2357 (AndroidFacebook_t434 * __this, Dictionary_2_t312 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		Enumerator_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m3692_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		Dictionary_2_GetEnumerator_m4083_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		Enumerator_get_Current_m4084_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484096);
		KeyValuePair_2_get_Key_m4085_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		KeyValuePair_2_get_Value_m4086_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		Enumerator_MoveNext_m4087_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484099);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t122 * V_0 = {0};
	KeyValuePair_2_t777  V_1 = {0};
	Enumerator_t778  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t312 * L_0 = ___dict;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (Dictionary_2_t122 *)NULL;
	}

IL_0008:
	{
		Dictionary_2_t122 * L_1 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3692(L_1, /*hidden argument*/Dictionary_2__ctor_m3692_MethodInfo_var);
		V_0 = L_1;
		Dictionary_2_t312 * L_2 = ___dict;
		NullCheck(L_2);
		Enumerator_t778  L_3 = Dictionary_2_GetEnumerator_m4083(L_2, /*hidden argument*/Dictionary_2_GetEnumerator_m4083_MethodInfo_var);
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
			KeyValuePair_2_t777  L_4 = Enumerator_get_Current_m4084((&V_2), /*hidden argument*/Enumerator_get_Current_m4084_MethodInfo_var);
			V_1 = L_4;
			Dictionary_2_t122 * L_5 = V_0;
			String_t* L_6 = KeyValuePair_2_get_Key_m4085((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4085_MethodInfo_var);
			Object_t * L_7 = KeyValuePair_2_get_Value_m4086((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4086_MethodInfo_var);
			NullCheck(L_7);
			String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
			NullCheck(L_5);
			VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_5, L_6, L_8);
		}

IL_003b:
		{
			bool L_9 = Enumerator_MoveNext_m4087((&V_2), /*hidden argument*/Enumerator_MoveNext_m4087_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Enumerator_t778  L_10 = V_2;
		Enumerator_t778  L_11 = L_10;
		Object_t * L_12 = Box(Enumerator_t778_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_12);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_12);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0058:
	{
		Dictionary_2_t122 * L_13 = V_0;
		return L_13;
	}
}
// System.DateTime Facebook.AndroidFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t287  AndroidFacebook_FromTimestamp_m2358 (AndroidFacebook_t434 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t287  V_0 = {0};
	{
		DateTime__ctor_m3931((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t287  L_1 = DateTime_AddSeconds_m4088((&V_0), (((double)L_0)), /*hidden argument*/NULL);
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

struct FBComponentFactory_t428;
struct AndroidFacebook_t434;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.AndroidFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisAndroidFacebook_t434_m4089(__this /* static, unused */, p0, method) (( AndroidFacebook_t434 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.AndroidFacebookLoader::.ctor()
extern "C" void AndroidFacebookLoader__ctor_m2359 (AndroidFacebookLoader_t435 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m2247(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.AndroidFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisAndroidFacebook_t434_m4089_MethodInfo_var;
extern "C" AbstractFacebook_t414 * AndroidFacebookLoader_get_fb_m2360 (AndroidFacebookLoader_t435 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisAndroidFacebook_t434_m4089_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484100);
		s_Il2CppMethodIntialized = true;
	}
	{
		AndroidFacebook_t434 * L_0 = FBComponentFactory_GetComponent_TisAndroidFacebook_t434_m4089(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisAndroidFacebook_t434_m4089_MethodInfo_var);
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
struct GameObject_t352;
struct JsBridge_t438;
// Declaration !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
// !!0 UnityEngine.GameObject::AddComponent<Facebook.JsBridge>()
#define GameObject_AddComponent_TisJsBridge_t438_m4090(__this, method) (( JsBridge_t438 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m3854_gshared)(__this, method)


// System.Void Facebook.CanvasFacebook::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook__ctor_m2361 (CanvasFacebook_t436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___integrationMethodJs_22 = L_0;
		__this->___sdkLocale_24 = (String_t*) &_stringLiteral876;
		AbstractFacebook__ctor_m2219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnAwake()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisJsBridge_t438_m4090_MethodInfo_var;
extern "C" void CanvasFacebook_OnAwake_m2362 (CanvasFacebook_t436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_AddComponent_TisJsBridge_t438_m4090_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484101);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = (GameObject_t352 *)il2cpp_codegen_object_new (GameObject_t352_il2cpp_TypeInfo_var);
		GameObject__ctor_m3855(L_0, (String_t*) &_stringLiteral877, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t352 * L_1 = V_0;
		NullCheck(L_1);
		GameObject_AddComponent_TisJsBridge_t438_m4090(L_1, /*hidden argument*/GameObject_AddComponent_TisJsBridge_t438_m4090_MethodInfo_var);
		GameObject_t352 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t406 * L_3 = GameObject_get_transform_m4036(L_2, /*hidden argument*/NULL);
		GameObject_t352 * L_4 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t406 * L_5 = GameObject_get_transform_m4036(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m4091(L_3, L_5, /*hidden argument*/NULL);
		String_t* L_6 = CanvasFacebook_StringFromFile_m2384(__this, (String_t*) &_stringLiteral878, /*hidden argument*/NULL);
		__this->___integrationMethodJs_22 = L_6;
		return;
	}
}
// System.Boolean Facebook.CanvasFacebook::get_LimitEventUsage()
extern "C" bool CanvasFacebook_get_LimitEventUsage_m2363 (CanvasFacebook_t436 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t414 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void CanvasFacebook_set_LimitEventUsage_m2364 (CanvasFacebook_t436 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t414 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void CanvasFacebook_Init_m2365 (CanvasFacebook_t436 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	bool V_2 = false;
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t682* G_B20_1 = {0};
	ObjectU5BU5D_t682* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t682* G_B19_1 = {0};
	ObjectU5BU5D_t682* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	ObjectU5BU5D_t682* G_B21_2 = {0};
	ObjectU5BU5D_t682* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	int32_t G_B23_0 = 0;
	ObjectU5BU5D_t682* G_B23_1 = {0};
	ObjectU5BU5D_t682* G_B23_2 = {0};
	String_t* G_B23_3 = {0};
	int32_t G_B22_0 = 0;
	ObjectU5BU5D_t682* G_B22_1 = {0};
	ObjectU5BU5D_t682* G_B22_2 = {0};
	String_t* G_B22_3 = {0};
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	ObjectU5BU5D_t682* G_B24_2 = {0};
	ObjectU5BU5D_t682* G_B24_3 = {0};
	String_t* G_B24_4 = {0};
	int32_t G_B26_0 = 0;
	ObjectU5BU5D_t682* G_B26_1 = {0};
	ObjectU5BU5D_t682* G_B26_2 = {0};
	String_t* G_B26_3 = {0};
	int32_t G_B25_0 = 0;
	ObjectU5BU5D_t682* G_B25_1 = {0};
	ObjectU5BU5D_t682* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	ObjectU5BU5D_t682* G_B27_2 = {0};
	ObjectU5BU5D_t682* G_B27_3 = {0};
	String_t* G_B27_4 = {0};
	{
		String_t* L_0 = ___appId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t711 * L_2 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4066(L_2, (String_t*) &_stringLiteral830, /*hidden argument*/NULL);
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
		Exception_t57 * L_4 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_4, (String_t*) &_stringLiteral879, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		InitDelegate_t419 * L_5 = ___onInitComplete;
		__this->___onInitComplete_20 = L_5;
		HideUnityDelegate_t420 * L_6 = ___hideUnityDelegate;
		__this->___OnHideUnity_21 = L_6;
		Dictionary_2_t312 * L_7 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_7, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_7;
		String_t* L_8 = ___appId;
		__this->___appId_23 = L_8;
		Dictionary_2_t312 * L_9 = V_0;
		String_t* L_10 = ___appId;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral831, L_10);
		bool L_11 = ___cookie;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		Dictionary_2_t312 * L_12 = V_0;
		bool L_13 = 1;
		Object_t * L_14 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral832, L_14);
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
		Dictionary_2_t312 * L_16 = V_0;
		bool L_17 = 0;
		Object_t * L_18 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral833, L_18);
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
		Dictionary_2_t312 * L_20 = V_0;
		bool L_21 = 0;
		Object_t * L_22 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_20, (String_t*) &_stringLiteral629, L_22);
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
		Dictionary_2_t312 * L_24 = V_0;
		bool L_25 = 1;
		Object_t * L_26 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_24, (String_t*) &_stringLiteral834, L_26);
	}

IL_00b3:
	{
		String_t* L_27 = ___channelUrl;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00cc;
		}
	}
	{
		Dictionary_2_t312 * L_29 = V_0;
		String_t* L_30 = ___channelUrl;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_29, (String_t*) &_stringLiteral835, L_30);
	}

IL_00cc:
	{
		String_t* L_31 = ___authResponse;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00e5;
		}
	}
	{
		Dictionary_2_t312 * L_33 = V_0;
		String_t* L_34 = ___authResponse;
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_33, (String_t*) &_stringLiteral836, L_34);
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
		Dictionary_2_t312 * L_36 = V_0;
		bool L_37 = 1;
		Object_t * L_38 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_36, (String_t*) &_stringLiteral837, L_38);
	}

IL_00fd:
	{
		Dictionary_2_t312 * L_39 = V_0;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_39, (String_t*) &_stringLiteral880, (String_t*) &_stringLiteral881);
		Dictionary_2_t312 * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2512(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		String_t* L_42 = (__this->___integrationMethodJs_22);
		Application_ExternalEval_m4092(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_2 = 1;
		ObjectU5BU5D_t682* L_43 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 6));
		bool L_44 = V_2;
		G_B19_0 = 0;
		G_B19_1 = L_43;
		G_B19_2 = L_43;
		G_B19_3 = (String_t*) &_stringLiteral882;
		if (!L_44)
		{
			G_B20_0 = 0;
			G_B20_1 = L_43;
			G_B20_2 = L_43;
			G_B20_3 = (String_t*) &_stringLiteral882;
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
		Object_t * L_46 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_45);
		NullCheck(G_B21_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B21_2, G_B21_1);
		ArrayElementTypeCheck (G_B21_2, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B21_2, G_B21_1)) = (Object_t *)L_46;
		ObjectU5BU5D_t682* L_47 = G_B21_3;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 1);
		ArrayElementTypeCheck (L_47, (String_t*) &_stringLiteral883);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_47, 1)) = (Object_t *)(String_t*) &_stringLiteral883;
		ObjectU5BU5D_t682* L_48 = L_47;
		String_t* L_49 = (__this->___sdkLocale_24);
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, 2);
		ArrayElementTypeCheck (L_48, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_48, 2)) = (Object_t *)L_49;
		ObjectU5BU5D_t682* L_50 = L_48;
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
		Object_t * L_53 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_52);
		NullCheck(G_B24_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B24_2, G_B24_1);
		ArrayElementTypeCheck (G_B24_2, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B24_2, G_B24_1)) = (Object_t *)L_53;
		ObjectU5BU5D_t682* L_54 = G_B24_3;
		String_t* L_55 = V_1;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 4);
		ArrayElementTypeCheck (L_54, L_55);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_54, 4)) = (Object_t *)L_55;
		ObjectU5BU5D_t682* L_56 = L_54;
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
		Object_t * L_59 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_58);
		NullCheck(G_B27_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B27_2, G_B27_1);
		ArrayElementTypeCheck (G_B27_2, L_59);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B27_2, G_B27_1)) = (Object_t *)L_59;
		Application_ExternalCall_m4064(NULL /*static, unused*/, G_B27_4, G_B27_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Login(System.String,Facebook.FacebookDelegate)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Login_m2366 (CanvasFacebook_t436 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Screen_get_fullScreen_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m4094(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		FacebookDelegate_t433 * L_1 = ___callback;
		AbstractFacebook_AddAuthDelegate_m2232(__this, L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t682* L_2 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 1));
		String_t* L_3 = ___scope;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral884, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_Logout_m2367 (CanvasFacebook_t436 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = ((DateTime_t287_StaticFields*)DateTime_t287_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_1;
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___userId_6 = L_2;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral885, ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m4068_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4069_MethodInfo_var;
extern "C" void CanvasFacebook_AppRequest_m2368 (CanvasFacebook_t436 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Nullable_1_get_HasValue_m4068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		Nullable_1_get_Value_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t770 * L_2 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_2, (String_t*) &_stringLiteral158, (String_t*) &_stringLiteral843, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t432 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t770 * L_6 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_6, (String_t*) &_stringLiteral844, (String_t*) &_stringLiteral845, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t432 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t770 * L_10 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_10, (String_t*) &_stringLiteral846, (String_t*) &_stringLiteral847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		Dictionary_2_t312 * L_11 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_11, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_11;
		Dictionary_2_t312 * L_12 = V_0;
		String_t* L_13 = ___message;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_12, (String_t*) &_stringLiteral158, L_13);
		StringU5BU5D_t75* L_14 = ___to;
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		Dictionary_2_t312 * L_15 = V_0;
		StringU5BU5D_t75* L_16 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Join_m3784(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral178, L_17);
	}

IL_008d:
	{
		OGActionType_t432 * L_18 = ___actionType;
		if (!L_18)
		{
			goto IL_00bb;
		}
	}
	{
		String_t* L_19 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00bb;
		}
	}
	{
		Dictionary_2_t312 * L_21 = V_0;
		OGActionType_t432 * L_22 = ___actionType;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Facebook.OGActionType::ToString() */, L_22);
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral526, L_23);
		Dictionary_2_t312 * L_24 = V_0;
		String_t* L_25 = ___objectId;
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral848, L_25);
	}

IL_00bb:
	{
		List_1_t684 * L_26 = ___filters;
		if (!L_26)
		{
			goto IL_00cf;
		}
	}
	{
		Dictionary_2_t312 * L_27 = V_0;
		List_1_t684 * L_28 = ___filters;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral849, L_28);
	}

IL_00cf:
	{
		StringU5BU5D_t75* L_29 = ___excludeIds;
		if (!L_29)
		{
			goto IL_00e3;
		}
	}
	{
		Dictionary_2_t312 * L_30 = V_0;
		StringU5BU5D_t75* L_31 = ___excludeIds;
		NullCheck(L_30);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_30, (String_t*) &_stringLiteral886, (Object_t *)(Object_t *)L_31);
	}

IL_00e3:
	{
		bool L_32 = Nullable_1_get_HasValue_m4068((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		if (!L_32)
		{
			goto IL_0106;
		}
	}
	{
		Dictionary_2_t312 * L_33 = V_0;
		int32_t L_34 = Nullable_1_get_Value_m4069((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
		int32_t L_35 = L_34;
		Object_t * L_36 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_33);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_33, (String_t*) &_stringLiteral850, L_36);
	}

IL_0106:
	{
		String_t* L_37 = ___data;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_38 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_011f;
		}
	}
	{
		Dictionary_2_t312 * L_39 = V_0;
		String_t* L_40 = ___data;
		NullCheck(L_39);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_39, (String_t*) &_stringLiteral155, L_40);
	}

IL_011f:
	{
		String_t* L_41 = ___title;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_42 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0138;
		}
	}
	{
		Dictionary_2_t312 * L_43 = V_0;
		String_t* L_44 = ___title;
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_43, (String_t*) &_stringLiteral851, L_44);
	}

IL_0138:
	{
		Dictionary_2_t312 * L_45 = V_0;
		FacebookDelegate_t433 * L_46 = ___callback;
		CanvasFacebook_UI_m2375(__this, (String_t*) &_stringLiteral887, L_45, L_46, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void CanvasFacebook_PublishInstall_m2369 (CanvasFacebook_t436 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral888, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::ActivateApp(System.String)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_ActivateApp_m2370 (CanvasFacebook_t436 * __this, String_t* ___appId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral889, ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t774_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4075_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4076_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4077_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4078_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4079_MethodInfo_var;
extern "C" void CanvasFacebook_FeedRequest_m2371 (CanvasFacebook_t436 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(418);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Enumerator_t774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Dictionary_2_GetEnumerator_m4075_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484088);
		Enumerator_get_Current_m4076_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484089);
		KeyValuePair_2_get_Value_m4077_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484090);
		KeyValuePair_2_get_Key_m4078_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484091);
		Enumerator_MoveNext_m4079_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484092);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	Dictionary_2_t312 * V_2 = {0};
	KeyValuePair_2_t773  V_3 = {0};
	Enumerator_t774  V_4 = {0};
	Dictionary_2_t312 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		String_t* L_1 = ___toId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		Dictionary_2_t312 * L_3 = V_0;
		String_t* L_4 = ___toId;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral178, L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___link;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Dictionary_2_t312 * L_7 = V_0;
		String_t* L_8 = ___link;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral586, L_8);
	}

IL_0034:
	{
		String_t* L_9 = ___linkName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		Dictionary_2_t312 * L_11 = V_0;
		String_t* L_12 = ___linkName;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_11, (String_t*) &_stringLiteral524, L_12);
	}

IL_004b:
	{
		String_t* L_13 = ___linkCaption;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_t312 * L_15 = V_0;
		String_t* L_16 = ___linkCaption;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral854, L_16);
	}

IL_0064:
	{
		String_t* L_17 = ___linkDescription;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t312 * L_19 = V_0;
		String_t* L_20 = ___linkDescription;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_19, (String_t*) &_stringLiteral618, L_20);
	}

IL_007d:
	{
		String_t* L_21 = ___picture;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0096;
		}
	}
	{
		Dictionary_2_t312 * L_23 = V_0;
		String_t* L_24 = ___picture;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral855, L_24);
	}

IL_0096:
	{
		String_t* L_25 = ___mediaSource;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00af;
		}
	}
	{
		Dictionary_2_t312 * L_27 = V_0;
		String_t* L_28 = ___mediaSource;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_27, (String_t*) &_stringLiteral667, L_28);
	}

IL_00af:
	{
		String_t* L_29 = ___actionName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_30 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_31 = ___actionLink;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t312 * L_33 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_33, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_1 = L_33;
		Dictionary_2_t312 * L_34 = V_1;
		String_t* L_35 = ___actionName;
		NullCheck(L_34);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_34, (String_t*) &_stringLiteral524, L_35);
		Dictionary_2_t312 * L_36 = V_1;
		String_t* L_37 = ___actionLink;
		NullCheck(L_36);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_36, (String_t*) &_stringLiteral586, L_37);
		Dictionary_2_t312 * L_38 = V_0;
		Dictionary_2U5BU5D_t775* L_39 = ((Dictionary_2U5BU5D_t775*)SZArrayNew(Dictionary_2U5BU5D_t775_il2cpp_TypeInfo_var, 1));
		Dictionary_2_t312 * L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 0);
		ArrayElementTypeCheck (L_39, L_40);
		*((Dictionary_2_t312 **)(Dictionary_2_t312 **)SZArrayLdElema(L_39, 0)) = (Dictionary_2_t312 *)L_40;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_41 = Json_Serialize_m2512(NULL /*static, unused*/, (Object_t *)(Object_t *)L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_38, (String_t*) &_stringLiteral856, L_41);
	}

IL_0101:
	{
		String_t* L_42 = ___reference;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_011a;
		}
	}
	{
		Dictionary_2_t312 * L_44 = V_0;
		String_t* L_45 = ___reference;
		NullCheck(L_44);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_44, (String_t*) &_stringLiteral857, L_45);
	}

IL_011a:
	{
		Dictionary_2_t116 * L_46 = ___properties;
		if (!L_46)
		{
			goto IL_01ea;
		}
	}
	{
		Dictionary_2_t312 * L_47 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_47, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_2 = L_47;
		Dictionary_2_t116 * L_48 = ___properties;
		NullCheck(L_48);
		Enumerator_t774  L_49 = Dictionary_2_GetEnumerator_m4075(L_48, /*hidden argument*/Dictionary_2_GetEnumerator_m4075_MethodInfo_var);
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
			KeyValuePair_2_t773  L_50 = Enumerator_get_Current_m4076((&V_4), /*hidden argument*/Enumerator_get_Current_m4076_MethodInfo_var);
			V_3 = L_50;
			StringU5BU5D_t75* L_51 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
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
			StringU5BU5D_t75* L_52 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_52);
			if ((!(((uint32_t)(((int32_t)(((Array_t *)L_52)->max_length)))) == ((uint32_t)1))))
			{
				goto IL_017b;
			}
		}

IL_0160:
		{
			Dictionary_2_t312 * L_53 = V_2;
			String_t* L_54 = KeyValuePair_2_get_Key_m4078((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4078_MethodInfo_var);
			StringU5BU5D_t75* L_55 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_55);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_55, 0);
			int32_t L_56 = 0;
			NullCheck(L_53);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_53, L_54, (*(String_t**)(String_t**)SZArrayLdElema(L_55, L_56)));
			goto IL_01bb;
		}

IL_017b:
		{
			Dictionary_2_t312 * L_57 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m3712(L_57, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
			V_5 = L_57;
			Dictionary_2_t312 * L_58 = V_5;
			StringU5BU5D_t75* L_59 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_59);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 0);
			int32_t L_60 = 0;
			NullCheck(L_58);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_58, (String_t*) &_stringLiteral616, (*(String_t**)(String_t**)SZArrayLdElema(L_59, L_60)));
			Dictionary_2_t312 * L_61 = V_5;
			StringU5BU5D_t75* L_62 = KeyValuePair_2_get_Value_m4077((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m4077_MethodInfo_var);
			NullCheck(L_62);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_62, 1);
			int32_t L_63 = 1;
			NullCheck(L_61);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_61, (String_t*) &_stringLiteral858, (*(String_t**)(String_t**)SZArrayLdElema(L_62, L_63)));
			Dictionary_2_t312 * L_64 = V_2;
			String_t* L_65 = KeyValuePair_2_get_Key_m4078((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m4078_MethodInfo_var);
			Dictionary_2_t312 * L_66 = V_5;
			NullCheck(L_64);
			VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_64, L_65, L_66);
		}

IL_01bb:
		{
			bool L_67 = Enumerator_MoveNext_m4079((&V_4), /*hidden argument*/Enumerator_MoveNext_m4079_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01cc;
	}

FINALLY_01cc:
	{ // begin finally (depth: 1)
		Enumerator_t774  L_68 = V_4;
		Enumerator_t774  L_69 = L_68;
		Object_t * L_70 = Box(Enumerator_t774_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_70);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_70);
		IL2CPP_END_FINALLY(460)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(460)
	{
		IL2CPP_JUMP_TBL(0x1D9, IL_01d9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01d9:
	{
		Dictionary_2_t312 * L_71 = V_0;
		Dictionary_2_t312 * L_72 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_73 = Json_Serialize_m2512(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		NullCheck(L_71);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1) */, L_71, (String_t*) &_stringLiteral859, L_73);
	}

IL_01ea:
	{
		Dictionary_2_t312 * L_74 = V_0;
		FacebookDelegate_t433 * L_75 = ___callback;
		CanvasFacebook_UI_m2375(__this, (String_t*) &_stringLiteral890, L_74, L_75, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m4068_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4069_MethodInfo_var;
extern "C" void CanvasFacebook_Pay_m2372 (CanvasFacebook_t436 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		Nullable_1_get_HasValue_m4068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		Nullable_1_get_Value_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___product;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral891, L_2);
		Dictionary_2_t312 * L_3 = V_0;
		String_t* L_4 = ___action;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral231, L_4);
		Dictionary_2_t312 * L_5 = V_0;
		int32_t L_6 = ___quantity;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral892, L_8);
		bool L_9 = Nullable_1_get_HasValue_m4068((&___quantityMin), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t312 * L_10 = V_0;
		int32_t L_11 = Nullable_1_get_Value_m4069((&___quantityMin), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
		int32_t L_12 = L_11;
		Object_t * L_13 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, (String_t*) &_stringLiteral893, L_13);
	}

IL_0052:
	{
		bool L_14 = Nullable_1_get_HasValue_m4068((&___quantityMax), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		Dictionary_2_t312 * L_15 = V_0;
		int32_t L_16 = Nullable_1_get_Value_m4069((&___quantityMax), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_15, (String_t*) &_stringLiteral894, L_18);
	}

IL_0075:
	{
		String_t* L_19 = ___requestId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_20 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t312 * L_21 = V_0;
		String_t* L_22 = ___requestId;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_21, (String_t*) &_stringLiteral895, L_22);
	}

IL_008e:
	{
		String_t* L_23 = ___pricepointId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_24 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a7;
		}
	}
	{
		Dictionary_2_t312 * L_25 = V_0;
		String_t* L_26 = ___pricepointId;
		NullCheck(L_25);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_25, (String_t*) &_stringLiteral896, L_26);
	}

IL_00a7:
	{
		String_t* L_27 = ___testCurrency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		if (L_28)
		{
			goto IL_00c0;
		}
	}
	{
		Dictionary_2_t312 * L_29 = V_0;
		String_t* L_30 = ___testCurrency;
		NullCheck(L_29);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_29, (String_t*) &_stringLiteral897, L_30);
	}

IL_00c0:
	{
		Dictionary_2_t312 * L_31 = V_0;
		FacebookDelegate_t433 * L_32 = ___callback;
		CanvasFacebook_UI_m2375(__this, (String_t*) &_stringLiteral898, L_31, L_32, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupCreate_m2373 (CanvasFacebook_t436 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___name;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral524, L_2);
		Dictionary_2_t312 * L_3 = V_0;
		String_t* L_4 = ___description;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral618, L_4);
		Dictionary_2_t312 * L_5 = V_0;
		String_t* L_6 = ___privacy;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_5, (String_t*) &_stringLiteral862, L_6);
		Dictionary_2_t312 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral899, (String_t*) &_stringLiteral900);
		Dictionary_2_t312 * L_8 = V_0;
		FacebookDelegate_t433 * L_9 = ___callback;
		CanvasFacebook_UI_m2375(__this, (String_t*) &_stringLiteral901, L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" void CanvasFacebook_GameGroupJoin_m2374 (CanvasFacebook_t436 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = V_0;
		String_t* L_2 = ___id;
		NullCheck(L_1);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_1, (String_t*) &_stringLiteral154, L_2);
		Dictionary_2_t312 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral899, (String_t*) &_stringLiteral900);
		Dictionary_2_t312 * L_4 = V_0;
		FacebookDelegate_t433 * L_5 = ___callback;
		CanvasFacebook_UI_m2375(__this, (String_t*) &_stringLiteral902, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::UI(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Facebook.FacebookDelegate)
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4095_MethodInfo_var;
extern "C" void CanvasFacebook_UI_m2375 (CanvasFacebook_t436 * __this, String_t* ___method, Dictionary_2_t312 * ___paramsDict, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2__ctor_m4095_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484102);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	{
		bool L_0 = Screen_get_fullScreen_m4093(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Screen_set_fullScreen_m4094(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		Dictionary_2_t312 * L_1 = ___paramsDict;
		Dictionary_2_t312 * L_2 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4095(L_2, L_1, /*hidden argument*/Dictionary_2__ctor_m4095_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t312 * L_3 = V_0;
		String_t* L_4 = (__this->___appId_23);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_3, (String_t*) &_stringLiteral873, L_4);
		FacebookDelegate_t433 * L_5 = ___callback;
		String_t* L_6 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Dictionary_2_t312 * L_7 = V_0;
		String_t* L_8 = ___method;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_7, (String_t*) &_stringLiteral903, L_8);
		ObjectU5BU5D_t682* L_9 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 2));
		Dictionary_2_t312 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_11 = Json_Serialize_m2512(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		ArrayElementTypeCheck (L_9, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 0)) = (Object_t *)L_11;
		ObjectU5BU5D_t682* L_12 = L_9;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		ArrayElementTypeCheck (L_12, L_13);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 1)) = (Object_t *)L_13;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral904, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_GetDeepLink_m2376 (CanvasFacebook_t436 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		FacebookDelegate_t433 * L_1 = ___callback;
		String_t* L_2 = (__this->___deepLink_26);
		FBResult_t281 * L_3 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_3, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Nullable_1_t691_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogEvent_m2377 (CanvasFacebook_t436 * __this, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Nullable_1_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 3));
		String_t* L_1 = ___logEvent;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t682* L_2 = L_0;
		Nullable_1_t691  L_3 = ___valueToSum;
		Nullable_1_t691  L_4 = L_3;
		Object_t * L_5 = Box(Nullable_1_t691_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t682* L_6 = L_2;
		Dictionary_2_t312 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2512(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral905, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_AppEventsLogPurchase_m2378 (CanvasFacebook_t436 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 3));
		float L_1 = ___logPurchase;
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t87_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t682* L_4 = L_0;
		String_t* L_5 = ___currency;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t682* L_6 = L_4;
		Dictionary_2_t312 * L_7 = ___parameters;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2512(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_8;
		Application_ExternalCall_m4064(NULL /*static, unused*/, (String_t*) &_stringLiteral906, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponse(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponse_m2379 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	DateTime_t287  V_2 = {0};
	CanvasFacebook_t436 * G_B5_0 = {0};
	CanvasFacebook_t436 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	CanvasFacebook_t436 * G_B6_1 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)IsInst(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral836);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___responseJsonData;
		FBResult_t281 * L_5 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_5, L_4, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_5, /*hidden argument*/NULL);
		return;
	}

IL_002a:
	{
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral836);
		V_1 = ((Dictionary_2_t312 *)IsInst(L_7, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_8 = V_1;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_8, (String_t*) &_stringLiteral907);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, ((String_t*)IsInst(L_9, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00d5;
		}
	}
	{
		Dictionary_2_t312 * L_11 = V_1;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_11, (String_t*) &_stringLiteral907);
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_12, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_13 = DateTime_get_Now_m3937(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_13;
		Dictionary_2_t312 * L_14 = V_1;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_14, (String_t*) &_stringLiteral908);
		DateTime_t287  L_16 = DateTime_AddSeconds_m4088((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_15, Int64_t89_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_16;
		Dictionary_2_t312 * L_17 = V_1;
		NullCheck(L_17);
		Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral909);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, ((String_t*)IsInst(L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_19)
		{
			G_B5_0 = __this;
			goto IL_00bf;
		}
	}
	{
		Dictionary_2_t312 * L_20 = V_1;
		NullCheck(L_20);
		Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_20, (String_t*) &_stringLiteral909);
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
		((AbstractFacebook_t414 *)G_B6_1)->___userId_6 = G_B6_0;
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 1;
		goto IL_00fd;
	}

IL_00d5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = L_23;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_24 = ((DateTime_t287_StaticFields*)DateTime_t287_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_24;
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((AbstractFacebook_t414 *)__this)->___userId_6 = L_25;
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
	}

IL_00fd:
	{
		String_t* L_26 = ___responseJsonData;
		FBResult_t281 * L_27 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_27, L_26, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookAuthResponseChange_m2380 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Dictionary_2_t312 * V_1 = {0};
	DateTime_t287  V_2 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)IsInst(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral836);
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
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral836);
		V_1 = ((Dictionary_2_t312 *)IsInst(L_5, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_6 = V_1;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral907);
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = ((String_t*)IsInst(L_7, String_t_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_8 = DateTime_get_Now_m3937(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_8;
		Dictionary_2_t312 * L_9 = V_1;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral908);
		DateTime_t287  L_11 = DateTime_AddSeconds_m4088((&V_2), (((double)((*(int64_t*)((int64_t*)UnBox (L_10, Int64_t89_il2cpp_TypeInfo_var)))))), /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_11;
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnFacebookUiResponse(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void CanvasFacebook_OnFacebookUiResponse_m2381 (CanvasFacebook_t436 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	String_t* G_B4_0 = {0};
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_2, (String_t*) &_stringLiteral910);
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_4, (String_t*) &_stringLiteral910);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		Dictionary_2_t312 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral910);
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		String_t* L_8 = Json_Serialize_m2512(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		G_B4_0 = L_8;
		goto IL_0046;
	}

IL_0041:
	{
		G_B4_0 = (String_t*) &_stringLiteral911;
	}

IL_0046:
	{
		V_1 = G_B4_0;
		Dictionary_2_t312 * L_9 = V_0;
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_9, (String_t*) &_stringLiteral912);
		String_t* L_11 = V_1;
		FBResult_t281 * L_12 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, ((String_t*)Castclass(L_10, String_t_il2cpp_TypeInfo_var)), L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.CanvasFacebook::SetInitComplete()
extern "C" void CanvasFacebook_SetInitComplete_m2382 (CanvasFacebook_t436 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t414 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t419 * L_0 = (__this->___onInitComplete_20);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		InitDelegate_t419 * L_1 = (__this->___onInitComplete_20);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Facebook.CanvasFacebook::OnUrlResponse(System.String)
extern "C" void CanvasFacebook_OnUrlResponse_m2383 (CanvasFacebook_t436 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___deepLink_26 = L_0;
		return;
	}
}
// System.String Facebook.CanvasFacebook::StringFromFile(System.String)
extern TypeInfo* TextAsset_t779_il2cpp_TypeInfo_var;
extern "C" String_t* CanvasFacebook_StringFromFile_m2384 (CanvasFacebook_t436 * __this, String_t* ___resourceName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TextAsset_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(423);
		s_Il2CppMethodIntialized = true;
	}
	TextAsset_t779 * V_0 = {0};
	{
		String_t* L_0 = ___resourceName;
		Object_t703 * L_1 = Resources_Load_m3779(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t779 *)IsInst(L_1, TextAsset_t779_il2cpp_TypeInfo_var));
		TextAsset_t779 * L_2 = V_0;
		bool L_3 = Object_op_Implicit_m4096(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		TextAsset_t779 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = TextAsset_get_text_m4097(L_4, /*hidden argument*/NULL);
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

struct FBComponentFactory_t428;
struct CanvasFacebook_t436;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.CanvasFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098(__this /* static, unused */, p0, method) (( CanvasFacebook_t436 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.CanvasFacebookLoader::.ctor()
extern "C" void CanvasFacebookLoader__ctor_m2385 (CanvasFacebookLoader_t437 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m2247(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.CanvasFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var;
extern "C" AbstractFacebook_t414 * CanvasFacebookLoader_get_fb_m2386 (CanvasFacebookLoader_t437 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484103);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t436 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var);
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
extern "C" void JsBridge__ctor_m2387 (JsBridge_t438 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::Start()
extern const MethodInfo* FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var;
extern "C" void JsBridge_Start_m2388 (JsBridge_t438 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484103);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t436 * L_0 = FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098(NULL /*static, unused*/, 1, /*hidden argument*/FBComponentFactory_GetComponent_TisCanvasFacebook_t436_m4098_MethodInfo_var);
		__this->___facebook_2 = L_0;
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponse(System.String)
extern "C" void JsBridge_OnFacebookAuthResponse_m2389 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t436 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponse_m2379(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookAuthResponseChange(System.String)
extern "C" void JsBridge_OnFacebookAuthResponseChange_m2390 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t436 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookAuthResponseChange_m2380(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookUiResponse(System.String)
extern "C" void JsBridge_OnFacebookUiResponse_m2391 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	{
		CanvasFacebook_t436 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___responseJsonData;
		NullCheck(L_0);
		CanvasFacebook_OnFacebookUiResponse_m2381(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnFacebookFocus(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnFacebookFocus_m2392 (JsBridge_t438 * __this, String_t* ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		CanvasFacebook_t436 * L_0 = (__this->___facebook_2);
		NullCheck(L_0);
		HideUnityDelegate_t420 * L_1 = (L_0->___OnHideUnity_21);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		CanvasFacebook_t436 * L_2 = (__this->___facebook_2);
		NullCheck(L_2);
		HideUnityDelegate_t420 * L_3 = (L_2->___OnHideUnity_21);
		String_t* L_4 = ___state;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral452, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean) */, L_3, L_5);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Facebook.JsBridge::OnInit(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void JsBridge_OnInit_m2393 (JsBridge_t438 * __this, String_t* ___responseJsonData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___responseJsonData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___responseJsonData;
		JsBridge_OnFacebookAuthResponse_m2389(__this, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		CanvasFacebook_t436 * L_3 = (__this->___facebook_2);
		NullCheck(L_3);
		CanvasFacebook_SetInitComplete_m2382(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.JsBridge::OnUrlResponse(System.String)
extern "C" void JsBridge_OnUrlResponse_m2394 (JsBridge_t438 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		CanvasFacebook_t436 * L_0 = (__this->___facebook_2);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		CanvasFacebook_OnUrlResponse_m2383(L_0, L_1, /*hidden argument*/NULL);
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
struct FBComponentFactory_t428;
struct EditorFacebookAccessToken_t440;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<EditorFacebookAccessToken>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099(__this /* static, unused */, p0, method) (( EditorFacebookAccessToken_t440 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.EditorFacebook::.ctor()
extern "C" void EditorFacebook__ctor_m2395 (EditorFacebook_t439 * __this, const MethodInfo* method)
{
	{
		AbstractFacebook__ctor_m2219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.EditorFacebook::get_LimitEventUsage()
extern "C" bool EditorFacebook_get_LimitEventUsage_m2396 (EditorFacebook_t439 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t414 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void EditorFacebook_set_LimitEventUsage_m2397 (EditorFacebook_t439 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t414 *)__this)->___limitEventUsage_9 = L_0;
		return;
	}
}
// System.Void Facebook.EditorFacebook::OnAwake()
extern "C" void EditorFacebook_OnAwake_m2398 (EditorFacebook_t439 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void EditorFacebook_Init_m2399 (EditorFacebook_t439 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		((AbstractFacebook_t414 *)__this)->___isInitialized_4 = 1;
		InitDelegate_t419 * L_0 = ___onInitComplete;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InitDelegate_t419 * L_1 = ___onInitComplete;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(11 /* System.Void Facebook.InitDelegate::Invoke() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::Login(System.String,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var;
extern "C" void EditorFacebook_Login_m2400 (EditorFacebook_t439 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484104);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m2232(__this, L_0, /*hidden argument*/NULL);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Logout()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_Logout_m2401 (EditorFacebook_t439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m2224(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_1);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_AppRequest_m2402 (EditorFacebook_t439 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral913, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_FeedRequest_m2403 (EditorFacebook_t439 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral914, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_Pay_m2404 (EditorFacebook_t439 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral915, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t776_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupCreate_m2405 (EditorFacebook_t439 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t776 * L_0 = (PlatformNotSupportedException_t776 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t776_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m4080(L_0, (String_t*) &_stringLiteral916, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t776_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GameGroupJoin_m2406 (EditorFacebook_t439 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t776 * L_0 = (PlatformNotSupportedException_t776 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t776_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m4080(L_0, (String_t*) &_stringLiteral917, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.EditorFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern "C" void EditorFacebook_PublishInstall_m2407 (EditorFacebook_t439 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::ActivateApp(System.String)
extern "C" void EditorFacebook_ActivateApp_m2408 (EditorFacebook_t439 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral918, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_GetDeepLink_m2409 (EditorFacebook_t439 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	{
		FBDebug_Info_m2288(NULL /*static, unused*/, (String_t*) &_stringLiteral919, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_0 = ___callback;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		FacebookDelegate_t433 * L_1 = ___callback;
		FBResult_t281 * L_2 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_2, (String_t*) &_stringLiteral920, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_1, L_2);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogEvent_m2410 (EditorFacebook_t439 * __this, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m2287(NULL /*static, unused*/, (String_t*) &_stringLiteral921, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C" void EditorFacebook_AppEventsLogPurchase_m2411 (EditorFacebook_t439 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	{
		FBDebug_Log_m2287(NULL /*static, unused*/, (String_t*) &_stringLiteral921, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockLoginCallback(FBResult)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t684_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t746_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3705_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3866_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3867_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3868_MethodInfo_var;
extern "C" void EditorFacebook_MockLoginCallback_m2412 (EditorFacebook_t439 * __this, FBResult_t281 * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		List_1_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484104);
		List_1__ctor_m3705_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		List_1_GetEnumerator_m3866_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483890);
		Enumerator_get_Current_m3867_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483891);
		Enumerator_MoveNext_m3868_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483892);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t684 * V_0 = {0};
	List_1_t115 * V_1 = {0};
	Object_t * V_2 = {0};
	Enumerator_t746  V_3 = {0};
	Dictionary_2_t312 * V_4 = {0};
	Dictionary_2_t312 * V_5 = {0};
	Dictionary_2_t312 * V_6 = {0};
	Exception_t57 * V_7 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EditorFacebookAccessToken_t440 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var);
		Object_Destroy_m3897(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		FBResult_t281 * L_1 = ___result;
		NullCheck(L_1);
		String_t* L_2 = FBResult_get_Error_m2295(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		FBResult_t281 * L_3 = ___result;
		NullCheck(L_3);
		String_t* L_4 = FBResult_get_Error_m2295(L_3, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m2414(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			FBResult_t281 * L_5 = ___result;
			NullCheck(L_5);
			String_t* L_6 = FBResult_get_Text_m2294(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
			Object_t * L_7 = Json_Deserialize_m2511(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
			V_0 = ((List_1_t684 *)Castclass(L_7, List_1_t684_il2cpp_TypeInfo_var));
			List_1_t115 * L_8 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
			List_1__ctor_m3705(L_8, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
			V_1 = L_8;
			List_1_t684 * L_9 = V_0;
			NullCheck(L_9);
			Enumerator_t746  L_10 = List_1_GetEnumerator_m3866(L_9, /*hidden argument*/List_1_GetEnumerator_m3866_MethodInfo_var);
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
				Object_t * L_11 = Enumerator_get_Current_m3867((&V_3), /*hidden argument*/Enumerator_get_Current_m3867_MethodInfo_var);
				V_2 = L_11;
				Object_t * L_12 = V_2;
				if (((Dictionary_2_t312 *)IsInst(L_12, Dictionary_2_t312_il2cpp_TypeInfo_var)))
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
				V_4 = ((Dictionary_2_t312 *)Castclass(L_13, Dictionary_2_t312_il2cpp_TypeInfo_var));
				Dictionary_2_t312 * L_14 = V_4;
				NullCheck(L_14);
				bool L_15 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_14, (String_t*) &_stringLiteral922);
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
				List_1_t115 * L_16 = V_1;
				Dictionary_2_t312 * L_17 = V_4;
				NullCheck(L_17);
				Object_t * L_18 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_17, (String_t*) &_stringLiteral922);
				NullCheck(L_16);
				VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_16, ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var)));
			}

IL_0093:
			{
				bool L_19 = Enumerator_MoveNext_m3868((&V_3), /*hidden argument*/Enumerator_MoveNext_m3868_MethodInfo_var);
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
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_00a4;
		}

FINALLY_00a4:
		{ // begin finally (depth: 2)
			Enumerator_t746  L_20 = V_3;
			Enumerator_t746  L_21 = L_20;
			Object_t * L_22 = Box(Enumerator_t746_il2cpp_TypeInfo_var, &L_21);
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(164)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(164)
		{
			IL2CPP_JUMP_TBL(0xB0, IL_00b0)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_00b0:
		{
			List_1_t115 * L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_23, 0);
			IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
			Object_t * L_25 = Json_Deserialize_m2511(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_5 = ((Dictionary_2_t312 *)Castclass(L_25, Dictionary_2_t312_il2cpp_TypeInfo_var));
			List_1_t115 * L_26 = V_1;
			NullCheck(L_26);
			String_t* L_27 = (String_t*)VirtFuncInvoker1< String_t*, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32) */, L_26, 1);
			Object_t * L_28 = Json_Deserialize_m2511(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_6 = ((Dictionary_2_t312 *)Castclass(L_28, Dictionary_2_t312_il2cpp_TypeInfo_var));
			IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
			String_t* L_29 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
			Dictionary_2_t312 * L_30 = V_6;
			NullCheck(L_30);
			Object_t * L_31 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_30, (String_t*) &_stringLiteral154);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_32 = String_op_Inequality_m415(NULL /*static, unused*/, L_29, ((String_t*)Castclass(L_31, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0110;
			}
		}

IL_00f6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
			String_t* L_33 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral923, L_33, /*hidden argument*/NULL);
			EditorFacebook_BadAccessToken_m2414(__this, L_34, /*hidden argument*/NULL);
			goto IL_0162;
		}

IL_0110:
		{
			Dictionary_2_t312 * L_35 = V_5;
			NullCheck(L_35);
			Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_35, (String_t*) &_stringLiteral154);
			((AbstractFacebook_t414 *)__this)->___userId_6 = ((String_t*)Castclass(L_36, String_t_il2cpp_TypeInfo_var));
			((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 1;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_37 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			FBResult_t281 * L_38 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
			FBResult__ctor_m2292(L_38, L_37, (String_t*)NULL, /*hidden argument*/NULL);
			AbstractFacebook_OnAuthResponse_m2233(__this, L_38, /*hidden argument*/NULL);
			goto IL_0162;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0144;
		throw e;
	}

CATCH_0144:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_39 = V_7;
		NullCheck(L_39);
		String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral924, L_40, /*hidden argument*/NULL);
		EditorFacebook_BadAccessToken_m2414(__this, L_41, /*hidden argument*/NULL);
		goto IL_0162;
	} // end catch (depth: 1)

IL_0162:
	{
		return;
	}
}
// System.Void Facebook.EditorFacebook::MockCancelledLoginCallback()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void EditorFacebook_MockCancelledLoginCallback_m2413 (EditorFacebook_t439 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		FBResult_t281 * L_1 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_1, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.EditorFacebook::BadAccessToken(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var;
extern "C" void EditorFacebook_BadAccessToken_m2414 (EditorFacebook_t439 * __this, String_t* ___error, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484104);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___error;
		FBDebug_Error_m2290(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		AbstractFacebook_set_UserId_m2224(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, __this, L_2);
		FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebookAccessToken_t440_m4099_MethodInfo_var);
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
struct FBComponentFactory_t428;
struct EditorFacebook_t439;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.EditorFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100(__this /* static, unused */, p0, method) (( EditorFacebook_t439 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void EditorFacebookAccessToken::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void EditorFacebookAccessToken__ctor_m2415 (EditorFacebookAccessToken_t440 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___windowHeight_3 = (200.0f);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___accessToken_4 = L_0;
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUI()
extern TypeInfo* GUI_t705_il2cpp_TypeInfo_var;
extern TypeInfo* WindowFunction_t781_il2cpp_TypeInfo_var;
extern const MethodInfo* EditorFacebookAccessToken_OnGUIDialog_m2417_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUI_m2416 (EditorFacebookAccessToken_t440 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		WindowFunction_t781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(426);
		EditorFacebookAccessToken_OnGUIDialog_m2417_MethodInfo_var = il2cpp_codegen_method_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		int32_t L_0 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___windowHeight_3);
		V_0 = ((float)((float)(((float)((int32_t)((int32_t)L_0/(int32_t)2))))-(float)((float)((float)L_1/(float)(2.0f)))));
		int32_t L_2 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((int32_t)((int32_t)L_2/(int32_t)2))))-(float)(296.0f)));
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t705_il2cpp_TypeInfo_var);
		GUISkin_t780 * L_3 = GUI_get_skin_m4101(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		GUIStyle_t107 * L_4 = GUISkin_get_button_m4102(L_3, /*hidden argument*/NULL);
		__this->___greyButton_6 = L_4;
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 UnityEngine.Object::GetHashCode() */, __this);
		float L_6 = V_1;
		float L_7 = V_0;
		float L_8 = (__this->___windowHeight_3);
		Rect_t694  L_9 = {0};
		Rect__ctor_m3680(&L_9, L_6, L_7, (592.0f), L_8, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)EditorFacebookAccessToken_OnGUIDialog_m2417_MethodInfo_var };
		WindowFunction_t781 * L_11 = (WindowFunction_t781 *)il2cpp_codegen_object_new (WindowFunction_t781_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m4103(L_11, __this, L_10, /*hidden argument*/NULL);
		GUI_ModalWindow_m4104(NULL /*static, unused*/, L_5, L_9, L_11, (String_t*) &_stringLiteral925, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorFacebookAccessToken::OnGUIDialog(System.Int32)
extern TypeInfo* GUI_t705_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var;
extern TypeInfo* FB_t421_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIContent_t782_il2cpp_TypeInfo_var;
extern TypeInfo* GUILayoutUtility_t704_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t122_il2cpp_TypeInfo_var;
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* FacebookDelegate_t433_il2cpp_TypeInfo_var;
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3692_MethodInfo_var;
extern const MethodInfo* EditorFacebook_MockLoginCallback_m2412_MethodInfo_var;
extern "C" void EditorFacebookAccessToken_OnGUIDialog_m2417 (EditorFacebookAccessToken_t440 * __this, int32_t ___windowId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t705_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(168);
		FB_t421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(172);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		GUIContent_t782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		GUILayoutUtility_t704_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(170);
		Dictionary_2_t122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(182);
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		FacebookDelegate_t433_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(177);
		FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484106);
		Dictionary_2__ctor_m3692_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483707);
		EditorFacebook_MockLoginCallback_m2412_MethodInfo_var = il2cpp_codegen_method_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	GUIContent_t782 * V_0 = {0};
	Rect_t694  V_1 = {0};
	EditorFacebook_t439 * V_2 = {0};
	Dictionary_2_t122 * V_3 = {0};
	GUIContent_t782 * V_4 = {0};
	Rect_t694  V_5 = {0};
	{
		bool L_0 = (__this->___isLoggingIn_5);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t705_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3691(NULL /*static, unused*/, ((((int32_t)L_0) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		GUILayout_Space_m3683(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3668(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_BeginVertical_m3682(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_Space_m3683(NULL /*static, unused*/, (10.0f), /*hidden argument*/NULL);
		GUILayout_Label_m3669(NULL /*static, unused*/, (String_t*) &_stringLiteral926, ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		GUILayout_EndVertical_m3693(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___accessToken_4);
		GUISkin_t780 * L_2 = GUI_get_skin_m4101(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyle_t107 * L_3 = GUISkin_get_textArea_m4105(L_2, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_t701* L_4 = ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 1));
		GUILayoutOption_t702 * L_5 = GUILayout_MinWidth_m3684(NULL /*static, unused*/, (400.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_5);
		*((GUILayoutOption_t702 **)(GUILayoutOption_t702 **)SZArrayLdElema(L_4, 0)) = (GUILayoutOption_t702 *)L_5;
		String_t* L_6 = GUILayout_TextField_m4106(NULL /*static, unused*/, L_1, L_3, L_4, /*hidden argument*/NULL);
		__this->___accessToken_4 = L_6;
		GUILayout_EndHorizontal_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUILayout_Space_m3683(NULL /*static, unused*/, (20.0f), /*hidden argument*/NULL);
		GUILayout_BeginHorizontal_m3668(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		bool L_7 = GUILayout_Button_m3667(NULL /*static, unused*/, (String_t*) &_stringLiteral927, ((GUILayoutOptionU5BU5D_t701*)SZArrayNew(GUILayoutOptionU5BU5D_t701_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		String_t* L_8 = FB_get_AppId_m2252(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m4107(NULL /*static, unused*/, (String_t*) &_stringLiteral928, L_8, /*hidden argument*/NULL);
		Application_OpenURL_m3957(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_00be:
	{
		GUILayout_FlexibleSpace_m4108(NULL /*static, unused*/, /*hidden argument*/NULL);
		GUIContent_t782 * L_10 = (GUIContent_t782 *)il2cpp_codegen_object_new (GUIContent_t782_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4109(L_10, (String_t*) &_stringLiteral139, /*hidden argument*/NULL);
		V_0 = L_10;
		GUIContent_t782 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t705_il2cpp_TypeInfo_var);
		GUISkin_t780 * L_12 = GUI_get_skin_m4101(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		GUIStyle_t107 * L_13 = GUISkin_get_button_m4102(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t704_il2cpp_TypeInfo_var);
		Rect_t694  L_14 = GUILayoutUtility_GetRect_m4110(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		Rect_t694  L_15 = V_1;
		GUIContent_t782 * L_16 = V_0;
		bool L_17 = GUI_Button_m4111(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0158;
		}
	}
	{
		EditorFacebook_t439 * L_18 = FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var);
		V_2 = L_18;
		EditorFacebook_t439 * L_19 = V_2;
		String_t* L_20 = (__this->___accessToken_4);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(6 /* System.Void Facebook.AbstractFacebook::set_AccessToken(System.String) */, L_19, L_20);
		Dictionary_2_t122 * L_21 = (Dictionary_2_t122 *)il2cpp_codegen_object_new (Dictionary_2_t122_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3692(L_21, /*hidden argument*/Dictionary_2__ctor_m3692_MethodInfo_var);
		V_3 = L_21;
		Dictionary_2_t122 * L_22 = V_3;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_22, (String_t*) &_stringLiteral929, (String_t*) &_stringLiteral930);
		Dictionary_2_t122 * L_23 = V_3;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_23, (String_t*) &_stringLiteral903, (String_t*) &_stringLiteral931);
		Dictionary_2_t122 * L_24 = V_3;
		String_t* L_25 = (__this->___accessToken_4);
		NullCheck(L_24);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1) */, L_24, (String_t*) &_stringLiteral615, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_26 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		EditorFacebook_t439 * L_27 = V_2;
		IntPtr_t L_28 = { (void*)EditorFacebook_MockLoginCallback_m2412_MethodInfo_var };
		FacebookDelegate_t433 * L_29 = (FacebookDelegate_t433 *)il2cpp_codegen_object_new (FacebookDelegate_t433_il2cpp_TypeInfo_var);
		FacebookDelegate__ctor_m3648(L_29, L_27, L_28, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_30 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(FB_t421_il2cpp_TypeInfo_var);
		FB_API_m2267(NULL /*static, unused*/, (String_t*) &_stringLiteral521, L_26, L_29, L_30, /*hidden argument*/NULL);
		__this->___isLoggingIn_5 = 1;
	}

IL_0158:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t705_il2cpp_TypeInfo_var);
		GUI_set_enabled_m3691(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		GUIContent_t782 * L_31 = (GUIContent_t782 *)il2cpp_codegen_object_new (GUIContent_t782_il2cpp_TypeInfo_var);
		GUIContent__ctor_m4109(L_31, (String_t*) &_stringLiteral932, /*hidden argument*/NULL);
		V_4 = L_31;
		GUIContent_t782 * L_32 = V_4;
		GUIStyle_t107 * L_33 = (__this->___greyButton_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUILayoutUtility_t704_il2cpp_TypeInfo_var);
		Rect_t694  L_34 = GUILayoutUtility_GetRect_m4110(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Rect_t694  L_35 = V_5;
		GUIContent_t782 * L_36 = V_4;
		GUIStyle_t107 * L_37 = (__this->___greyButton_6);
		bool L_38 = GUI_Button_m4112(NULL /*static, unused*/, L_35, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_019e;
		}
	}
	{
		EditorFacebook_t439 * L_39 = FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var);
		NullCheck(L_39);
		EditorFacebook_MockCancelledLoginCallback_m2413(L_39, /*hidden argument*/NULL);
		Object_Destroy_m3897(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_019e:
	{
		GUILayout_EndHorizontal_m3671(NULL /*static, unused*/, /*hidden argument*/NULL);
		Event_t783 * L_40 = Event_get_current_m4113(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_41 = Event_get_type_m4114(L_40, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_41) == ((uint32_t)7))))
		{
			goto IL_01de;
		}
	}
	{
		float L_42 = Rect_get_y_m3678((&V_5), /*hidden argument*/NULL);
		float L_43 = Rect_get_height_m4035((&V_5), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t705_il2cpp_TypeInfo_var);
		GUISkin_t780 * L_44 = GUI_get_skin_m4101(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_44);
		GUIStyle_t107 * L_45 = GUISkin_get_window_m4115(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		RectOffset_t700 * L_46 = GUIStyle_get_padding_m4116(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		int32_t L_47 = RectOffset_get_bottom_m4117(L_46, /*hidden argument*/NULL);
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
extern "C" void EditorFacebookLoader__ctor_m2418 (EditorFacebookLoader_t441 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m2247(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.EditorFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var;
extern "C" AbstractFacebook_t414 * EditorFacebookLoader_get_fb_m2419 (EditorFacebookLoader_t441 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484106);
		s_Il2CppMethodIntialized = true;
	}
	{
		EditorFacebook_t439 * L_0 = FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisEditorFacebook_t439_m4100_MethodInfo_var);
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
extern "C" void NativeDict__ctor_m2420 (NativeDict_t442 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___numEntries_0 = 0;
		__this->___keys_1 = (StringU5BU5D_t75*)NULL;
		__this->___vals_2 = (StringU5BU5D_t75*)NULL;
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
extern "C" void IOSFacebook__ctor_m2421 (IOSFacebook_t444 * __this, const MethodInfo* method)
{
	{
		__this->___dialogMode_14 = 1;
		AbstractFacebook__ctor_m2219(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::iosInit(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String)
extern "C" {void DEFAULT_CALL iosInit(char*, int32_t, int32_t, int32_t, int32_t, char*);}
extern "C" void IOSFacebook_iosInit_m2422 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___frictionlessRequests, String_t* ___urlSuffix, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosLogin_m2423 (Object_t * __this /* static, unused */, String_t* ___scope, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosLogout_m2424 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosSetShareDialogMode_m2425 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFeedRequest_m2426 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosAppRequest_m2427 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___message, String_t* ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, int32_t ___toLength, String_t* ___filters, StringU5BU5D_t75* ___excludeIds, int32_t ___excludeIdsLength, bool ___hasMaxRecipients, int32_t ___maxRecipients, String_t* ___data, String_t* ___title, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosCreateGameGroup_m2428 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___name, String_t* ___description, String_t* ___privacy, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosJoinGameGroup_m2429 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___id, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFBSettingsPublishInstall_m2430 (Object_t * __this /* static, unused */, int32_t ___requestId, String_t* ___appId, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFBSettingsActivateApp_m2431 (Object_t * __this /* static, unused */, String_t* ___appId, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFBAppEventsLogEvent_m2432 (Object_t * __this /* static, unused */, String_t* ___logEvent, double ___valueToSum, int32_t ___numParams, StringU5BU5D_t75* ___paramKeys, StringU5BU5D_t75* ___paramVals, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFBAppEventsLogPurchase_m2433 (Object_t * __this /* static, unused */, double ___logPurchase, String_t* ___currency, int32_t ___numParams, StringU5BU5D_t75* ___paramKeys, StringU5BU5D_t75* ___paramVals, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosFBAppEventsSetLimitEventUsage_m2434 (Object_t * __this /* static, unused */, bool ___limitEventUsage, const MethodInfo* method)
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
extern "C" void IOSFacebook_iosGetDeepLink_m2435 (Object_t * __this /* static, unused */, const MethodInfo* method)
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
extern "C" int32_t IOSFacebook_get_DialogMode_m2436 (IOSFacebook_t444 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___dialogMode_14);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_DialogMode(System.Int32)
extern "C" void IOSFacebook_set_DialogMode_m2437 (IOSFacebook_t444 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___dialogMode_14 = L_0;
		int32_t L_1 = (__this->___dialogMode_14);
		IOSFacebook_iosSetShareDialogMode_m2425(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Facebook.IOSFacebook::get_LimitEventUsage()
extern "C" bool IOSFacebook_get_LimitEventUsage_m2438 (IOSFacebook_t444 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (((AbstractFacebook_t414 *)__this)->___limitEventUsage_9);
		return L_0;
	}
}
// System.Void Facebook.IOSFacebook::set_LimitEventUsage(System.Boolean)
extern "C" void IOSFacebook_set_LimitEventUsage_m2439 (IOSFacebook_t444 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		((AbstractFacebook_t414 *)__this)->___limitEventUsage_9 = L_0;
		bool L_1 = ___value;
		IOSFacebook_iosFBAppEventsSetLimitEventUsage_m2434(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAwake()
extern "C" void IOSFacebook_OnAwake_m2440 (IOSFacebook_t444 * __this, const MethodInfo* method)
{
	{
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = (String_t*) &_stringLiteral933;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Init(Facebook.InitDelegate,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,Facebook.HideUnityDelegate)
extern "C" void IOSFacebook_Init_m2441 (IOSFacebook_t444 * __this, InitDelegate_t419 * ___onInitComplete, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, HideUnityDelegate_t420 * ___hideUnityDelegate, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		bool L_1 = ___cookie;
		bool L_2 = ___logging;
		bool L_3 = ___status;
		bool L_4 = ___frictionlessRequests;
		String_t* L_5 = FBSettings_get_IosURLSuffix_m2319(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOSFacebook_iosInit_m2422(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		InitDelegate_t419 * L_6 = ___onInitComplete;
		__this->___externalInitDelegate_15 = L_6;
		return;
	}
}
// System.Void Facebook.IOSFacebook::Login(System.String,Facebook.FacebookDelegate)
extern "C" void IOSFacebook_Login_m2442 (IOSFacebook_t444 * __this, String_t* ___scope, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		AbstractFacebook_AddAuthDelegate_m2232(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___scope;
		IOSFacebook_iosLogin_m2423(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Logout()
extern "C" void IOSFacebook_Logout_m2443 (IOSFacebook_t444 * __this, const MethodInfo* method)
{
	{
		IOSFacebook_iosLogout_m2424(NULL /*static, unused*/, /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppRequest(System.String,Facebook.OGActionType,System.String,System.String[],System.Collections.Generic.List`1<System.Object>,System.String[],System.Nullable`1<System.Int32>,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern const MethodInfo* Nullable_1_get_HasValue_m4068_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4069_MethodInfo_var;
extern "C" void IOSFacebook_AppRequest_m2444 (IOSFacebook_t444 * __this, String_t* ___message, OGActionType_t432 * ___actionType, String_t* ___objectId, StringU5BU5D_t75* ___to, List_1_t684 * ___filters, StringU5BU5D_t75* ___excludeIds, Nullable_1_t690  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Nullable_1_get_HasValue_m4068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		Nullable_1_get_Value_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
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
	StringU5BU5D_t75* G_B16_0 = {0};
	String_t* G_B16_1 = {0};
	String_t* G_B16_2 = {0};
	String_t* G_B16_3 = {0};
	int32_t G_B16_4 = 0;
	StringU5BU5D_t75* G_B15_0 = {0};
	String_t* G_B15_1 = {0};
	String_t* G_B15_2 = {0};
	String_t* G_B15_3 = {0};
	int32_t G_B15_4 = 0;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t75* G_B17_1 = {0};
	String_t* G_B17_2 = {0};
	String_t* G_B17_3 = {0};
	String_t* G_B17_4 = {0};
	int32_t G_B17_5 = 0;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t75* G_B19_1 = {0};
	String_t* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	String_t* G_B19_4 = {0};
	int32_t G_B19_5 = 0;
	int32_t G_B18_0 = 0;
	StringU5BU5D_t75* G_B18_1 = {0};
	String_t* G_B18_2 = {0};
	String_t* G_B18_3 = {0};
	String_t* G_B18_4 = {0};
	int32_t G_B18_5 = 0;
	String_t* G_B20_0 = {0};
	int32_t G_B20_1 = 0;
	StringU5BU5D_t75* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	String_t* G_B20_4 = {0};
	String_t* G_B20_5 = {0};
	int32_t G_B20_6 = 0;
	StringU5BU5D_t75* G_B22_0 = {0};
	String_t* G_B22_1 = {0};
	int32_t G_B22_2 = 0;
	StringU5BU5D_t75* G_B22_3 = {0};
	String_t* G_B22_4 = {0};
	String_t* G_B22_5 = {0};
	String_t* G_B22_6 = {0};
	int32_t G_B22_7 = 0;
	StringU5BU5D_t75* G_B21_0 = {0};
	String_t* G_B21_1 = {0};
	int32_t G_B21_2 = 0;
	StringU5BU5D_t75* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	String_t* G_B21_5 = {0};
	String_t* G_B21_6 = {0};
	int32_t G_B21_7 = 0;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t75* G_B23_1 = {0};
	String_t* G_B23_2 = {0};
	int32_t G_B23_3 = 0;
	StringU5BU5D_t75* G_B23_4 = {0};
	String_t* G_B23_5 = {0};
	String_t* G_B23_6 = {0};
	String_t* G_B23_7 = {0};
	int32_t G_B23_8 = 0;
	bool G_B25_0 = false;
	int32_t G_B25_1 = 0;
	StringU5BU5D_t75* G_B25_2 = {0};
	String_t* G_B25_3 = {0};
	int32_t G_B25_4 = 0;
	StringU5BU5D_t75* G_B25_5 = {0};
	String_t* G_B25_6 = {0};
	String_t* G_B25_7 = {0};
	String_t* G_B25_8 = {0};
	int32_t G_B25_9 = 0;
	bool G_B24_0 = false;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t75* G_B24_2 = {0};
	String_t* G_B24_3 = {0};
	int32_t G_B24_4 = 0;
	StringU5BU5D_t75* G_B24_5 = {0};
	String_t* G_B24_6 = {0};
	String_t* G_B24_7 = {0};
	String_t* G_B24_8 = {0};
	int32_t G_B24_9 = 0;
	int32_t G_B26_0 = 0;
	bool G_B26_1 = false;
	int32_t G_B26_2 = 0;
	StringU5BU5D_t75* G_B26_3 = {0};
	String_t* G_B26_4 = {0};
	int32_t G_B26_5 = 0;
	StringU5BU5D_t75* G_B26_6 = {0};
	String_t* G_B26_7 = {0};
	String_t* G_B26_8 = {0};
	String_t* G_B26_9 = {0};
	int32_t G_B26_10 = 0;
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t770 * L_2 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_2, (String_t*) &_stringLiteral158, (String_t*) &_stringLiteral843, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001b:
	{
		OGActionType_t432 * L_3 = ___actionType;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		ArgumentNullException_t770 * L_6 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_6, (String_t*) &_stringLiteral844, (String_t*) &_stringLiteral845, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_003c:
	{
		OGActionType_t432 * L_7 = ___actionType;
		if (L_7)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_8 = ___objectId;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		ArgumentNullException_t770 * L_10 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4067(L_10, (String_t*) &_stringLiteral846, (String_t*) &_stringLiteral847, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_005d:
	{
		V_0 = (String_t*)NULL;
		List_1_t684 * L_11 = ___filters;
		if (!L_11)
		{
			goto IL_0081;
		}
	}
	{
		List_1_t684 * L_12 = ___filters;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		List_1_t684 * L_14 = ___filters;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32) */, L_14, 0);
		V_0 = ((String_t*)IsInst(L_15, String_t_il2cpp_TypeInfo_var));
	}

IL_0081:
	{
		FacebookDelegate_t433 * L_16 = ___callback;
		String_t* L_17 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m3790(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___message;
		OGActionType_t432 * L_20 = ___actionType;
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
		OGActionType_t432 * L_21 = ___actionType;
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
		StringU5BU5D_t75* L_24 = ___to;
		StringU5BU5D_t75* L_25 = ___to;
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
		StringU5BU5D_t75* L_26 = ___to;
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
		StringU5BU5D_t75* L_30 = ___excludeIds;
		StringU5BU5D_t75* L_31 = ___excludeIds;
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
		StringU5BU5D_t75* L_32 = ___excludeIds;
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
		bool L_33 = Nullable_1_get_HasValue_m4068((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		bool L_34 = Nullable_1_get_HasValue_m4068((&___maxRecipients), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
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
		int32_t L_35 = Nullable_1_get_Value_m4069((&___maxRecipients), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
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
		IOSFacebook_iosAppRequest_m2427(NULL /*static, unused*/, G_B26_10, G_B26_9, G_B26_8, G_B26_7, G_B26_6, G_B26_5, G_B26_4, G_B26_3, G_B26_2, G_B26_1, G_B26_0, L_36, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::FeedRequest(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String[]>,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_FeedRequest_m2445 (IOSFacebook_t444 * __this, String_t* ___toId, String_t* ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, String_t* ___picture, String_t* ___mediaSource, String_t* ___actionName, String_t* ___actionLink, String_t* ___reference, Dictionary_2_t116 * ___properties, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3790(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
		IOSFacebook_iosFeedRequest_m2426(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* PlatformNotSupportedException_t776_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_Pay_m2446 (IOSFacebook_t444 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t690  ___quantityMin, Nullable_1_t690  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlatformNotSupportedException_t776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		PlatformNotSupportedException_t776 * L_0 = (PlatformNotSupportedException_t776 *)il2cpp_codegen_object_new (PlatformNotSupportedException_t776_il2cpp_TypeInfo_var);
		PlatformNotSupportedException__ctor_m4080(L_0, (String_t*) &_stringLiteral934, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void Facebook.IOSFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupCreate_m2447 (IOSFacebook_t444 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3790(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		String_t* L_4 = ___description;
		String_t* L_5 = ___privacy;
		IOSFacebook_iosCreateGameGroup_m2428(NULL /*static, unused*/, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GameGroupJoin(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_GameGroupJoin_m2448 (IOSFacebook_t444 * __this, String_t* ___id, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3790(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___id;
		IOSFacebook_iosJoinGameGroup_m2429(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::GetDeepLink(Facebook.FacebookDelegate)
extern "C" void IOSFacebook_GetDeepLink_m2449 (IOSFacebook_t444 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t433 * L_0 = ___callback;
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
		FacebookDelegate_t433 * L_1 = ___callback;
		__this->___deepLinkDelegate_16 = L_1;
		IOSFacebook_iosGetDeepLink_m2435(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnGetDeepLinkComplete(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnGetDeepLinkComplete_m2450 (IOSFacebook_t444 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	Object_t * V_1 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		FacebookDelegate_t433 * L_2 = (__this->___deepLinkDelegate_16);
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
		Dictionary_2_t312 * L_4 = V_0;
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(!0,!1&) */, L_4, (String_t*) &_stringLiteral866, (&V_1));
		FacebookDelegate_t433 * L_5 = (__this->___deepLinkDelegate_16);
		Object_t * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		FBResult_t281 * L_8 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_8, L_7, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_5, L_8);
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern const MethodInfo* Nullable_1_get_HasValue_m4081_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4082_MethodInfo_var;
extern "C" void IOSFacebook_AppEventsLogEvent_m2451 (IOSFacebook_t444 * __this, String_t* ___logEvent, Nullable_1_t691  ___valueToSum, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_get_HasValue_m4081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484093);
		Nullable_1_get_Value_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484094);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t442 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = ___parameters;
		NativeDict_t442 * L_1 = IOSFacebook_MarshallDict_m2455(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m4081((&___valueToSum), /*hidden argument*/Nullable_1_get_HasValue_m4081_MethodInfo_var);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_3 = ___logEvent;
		float L_4 = Nullable_1_get_Value_m4082((&___valueToSum), /*hidden argument*/Nullable_1_get_Value_m4082_MethodInfo_var);
		NativeDict_t442 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___numEntries_0);
		NativeDict_t442 * L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t75* L_8 = (L_7->___keys_1);
		NativeDict_t442 * L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t75* L_10 = (L_9->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m2432(NULL /*static, unused*/, L_3, (((double)L_4)), L_6, L_8, L_10, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0039:
	{
		String_t* L_11 = ___logEvent;
		NativeDict_t442 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = (L_12->___numEntries_0);
		NativeDict_t442 * L_14 = V_0;
		NullCheck(L_14);
		StringU5BU5D_t75* L_15 = (L_14->___keys_1);
		NativeDict_t442 * L_16 = V_0;
		NullCheck(L_16);
		StringU5BU5D_t75* L_17 = (L_16->___vals_2);
		IOSFacebook_iosFBAppEventsLogEvent_m2432(NULL /*static, unused*/, L_11, (0.0), L_13, L_15, L_17, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_AppEventsLogPurchase_m2452 (IOSFacebook_t444 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t442 * V_0 = {0};
	{
		Dictionary_2_t312 * L_0 = ___parameters;
		NativeDict_t442 * L_1 = IOSFacebook_MarshallDict_m2455(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___currency;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		___currency = (String_t*) &_stringLiteral60;
	}

IL_001a:
	{
		float L_4 = ___logPurchase;
		String_t* L_5 = ___currency;
		NativeDict_t442 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (L_6->___numEntries_0);
		NativeDict_t442 * L_8 = V_0;
		NullCheck(L_8);
		StringU5BU5D_t75* L_9 = (L_8->___keys_1);
		NativeDict_t442 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t75* L_11 = (L_10->___vals_2);
		IOSFacebook_iosFBAppEventsLogPurchase_m2433(NULL /*static, unused*/, (((double)L_4)), L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::PublishInstall(System.String,Facebook.FacebookDelegate)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_PublishInstall_m2453 (IOSFacebook_t444 * __this, String_t* ___appId, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		String_t* L_1 = AbstractFacebook_AddFacebookDelegate_m2234(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m3790(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___appId;
		IOSFacebook_iosFBSettingsPublishInstall_m2430(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ActivateApp(System.String)
extern "C" void IOSFacebook_ActivateApp_m2454 (IOSFacebook_t444 * __this, String_t* ___appId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___appId;
		IOSFacebook_iosFBSettingsActivateApp_m2431(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* NativeDict_t442_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t778_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m4083_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4084_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m4085_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m4086_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4087_MethodInfo_var;
extern "C" NativeDict_t442 * IOSFacebook_MarshallDict_m2455 (IOSFacebook_t444 * __this, Dictionary_2_t312 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t778_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m4083_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484095);
		Enumerator_get_Current_m4084_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484096);
		KeyValuePair_2_get_Key_m4085_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484097);
		KeyValuePair_2_get_Value_m4086_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484098);
		Enumerator_MoveNext_m4087_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484099);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t442 * V_0 = {0};
	KeyValuePair_2_t777  V_1 = {0};
	Enumerator_t778  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t442 * L_0 = (NativeDict_t442 *)il2cpp_codegen_object_new (NativeDict_t442_il2cpp_TypeInfo_var);
		NativeDict__ctor_m2420(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t312 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00ad;
		}
	}
	{
		Dictionary_2_t312 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		NativeDict_t442 * L_4 = V_0;
		Dictionary_2_t312 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_6));
		NativeDict_t442 * L_7 = V_0;
		Dictionary_2_t312 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_9));
		NativeDict_t442 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t312 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t778  L_12 = Dictionary_2_GetEnumerator_m4083(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m4083_MethodInfo_var);
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
			KeyValuePair_2_t777  L_13 = Enumerator_get_Current_m4084((&V_2), /*hidden argument*/Enumerator_get_Current_m4084_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t442 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t75* L_15 = (L_14->___keys_1);
			NativeDict_t442 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m4085((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m4085_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t442 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t75* L_20 = (L_19->___vals_2);
			NativeDict_t442 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			Object_t * L_23 = KeyValuePair_2_get_Value_m4086((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m4086_MethodInfo_var);
			NullCheck(L_23);
			String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_24);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_24;
			NativeDict_t442 * L_25 = V_0;
			NativeDict_t442 * L_26 = L_25;
			NullCheck(L_26);
			int32_t L_27 = (L_26->___numEntries_0);
			NullCheck(L_26);
			L_26->___numEntries_0 = ((int32_t)((int32_t)L_27+(int32_t)1));
		}

IL_0090:
		{
			bool L_28 = Enumerator_MoveNext_m4087((&V_2), /*hidden argument*/Enumerator_MoveNext_m4087_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_t778  L_29 = V_2;
		Enumerator_t778  L_30 = L_29;
		Object_t * L_31 = Box(Enumerator_t778_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_31);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ad:
	{
		NativeDict_t442 * L_32 = V_0;
		return L_32;
	}
}
// Facebook.IOSFacebook/NativeDict Facebook.IOSFacebook::MarshallDict(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern TypeInfo* NativeDict_t442_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t301_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3903_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3904_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3905_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3906_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3907_MethodInfo_var;
extern "C" NativeDict_t442 * IOSFacebook_MarshallDict_m2456 (IOSFacebook_t444 * __this, Dictionary_2_t122 * ___dict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NativeDict_t442_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		Enumerator_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		Dictionary_2_GetEnumerator_m3903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483945);
		Enumerator_get_Current_m3904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		KeyValuePair_2_get_Key_m3905_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		KeyValuePair_2_get_Value_m3906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3907_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	NativeDict_t442 * V_0 = {0};
	KeyValuePair_2_t302  V_1 = {0};
	Enumerator_t301  V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NativeDict_t442 * L_0 = (NativeDict_t442 *)il2cpp_codegen_object_new (NativeDict_t442_il2cpp_TypeInfo_var);
		NativeDict__ctor_m2420(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Dictionary_2_t122 * L_1 = ___dict;
		if (!L_1)
		{
			goto IL_00a8;
		}
	}
	{
		Dictionary_2_t122 * L_2 = ___dict;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_2);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_00a8;
		}
	}
	{
		NativeDict_t442 * L_4 = V_0;
		Dictionary_2_t122 * L_5 = ___dict;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_5);
		NullCheck(L_4);
		L_4->___keys_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_6));
		NativeDict_t442 * L_7 = V_0;
		Dictionary_2_t122 * L_8 = ___dict;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count() */, L_8);
		NullCheck(L_7);
		L_7->___vals_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_9));
		NativeDict_t442 * L_10 = V_0;
		NullCheck(L_10);
		L_10->___numEntries_0 = 0;
		Dictionary_2_t122 * L_11 = ___dict;
		NullCheck(L_11);
		Enumerator_t301  L_12 = Dictionary_2_GetEnumerator_m3903(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3903_MethodInfo_var);
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
			KeyValuePair_2_t302  L_13 = Enumerator_get_Current_m3904((&V_2), /*hidden argument*/Enumerator_get_Current_m3904_MethodInfo_var);
			V_1 = L_13;
			NativeDict_t442 * L_14 = V_0;
			NullCheck(L_14);
			StringU5BU5D_t75* L_15 = (L_14->___keys_1);
			NativeDict_t442 * L_16 = V_0;
			NullCheck(L_16);
			int32_t L_17 = (L_16->___numEntries_0);
			String_t* L_18 = KeyValuePair_2_get_Key_m3905((&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m3905_MethodInfo_var);
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
			ArrayElementTypeCheck (L_15, L_18);
			*((String_t**)(String_t**)SZArrayLdElema(L_15, L_17)) = (String_t*)L_18;
			NativeDict_t442 * L_19 = V_0;
			NullCheck(L_19);
			StringU5BU5D_t75* L_20 = (L_19->___vals_2);
			NativeDict_t442 * L_21 = V_0;
			NullCheck(L_21);
			int32_t L_22 = (L_21->___numEntries_0);
			String_t* L_23 = KeyValuePair_2_get_Value_m3906((&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m3906_MethodInfo_var);
			NullCheck(L_20);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_22);
			ArrayElementTypeCheck (L_20, L_23);
			*((String_t**)(String_t**)SZArrayLdElema(L_20, L_22)) = (String_t*)L_23;
			NativeDict_t442 * L_24 = V_0;
			NativeDict_t442 * L_25 = L_24;
			NullCheck(L_25);
			int32_t L_26 = (L_25->___numEntries_0);
			NullCheck(L_25);
			L_25->___numEntries_0 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_008b:
		{
			bool L_27 = Enumerator_MoveNext_m3907((&V_2), /*hidden argument*/Enumerator_MoveNext_m3907_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_009c;
	}

FINALLY_009c:
	{ // begin finally (depth: 1)
		Enumerator_t301  L_28 = V_2;
		Enumerator_t301  L_29 = L_28;
		Object_t * L_30 = Box(Enumerator_t301_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_30);
		IL2CPP_END_FINALLY(156)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(156)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a8:
	{
		NativeDict_t442 * L_31 = V_0;
		return L_31;
	}
}
// System.Void Facebook.IOSFacebook::OnInitComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnInitComplete_m2457 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AbstractFacebook_t414 *)__this)->___isInitialized_4 = 1;
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___msg;
		IOSFacebook_OnLogin_m2458(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		InitDelegate_t419 * L_3 = (__this->___externalInitDelegate_15);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(11 /* System.Void Facebook.InitDelegate::Invoke() */, L_3);
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnLogin(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnLogin_m2458 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		FBResult_t281 * L_2 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_2, (String_t*) &_stringLiteral911, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_4 = Json_Deserialize_m2511(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_4, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_5, (String_t*) &_stringLiteral810);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 1;
	}

IL_0040:
	{
		Dictionary_2_t312 * L_7 = V_0;
		IOSFacebook_ParseLoginDict_m2459(__this, L_7, /*hidden argument*/NULL);
		String_t* L_8 = ___msg;
		FBResult_t281 * L_9 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_9, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.IOSFacebook::ParseLoginDict(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_ParseLoginDict_m2459 (IOSFacebook_t444 * __this, Dictionary_2_t312 * ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t312 * L_0 = ___parameters;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_0, (String_t*) &_stringLiteral810);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Dictionary_2_t312 * L_2 = ___parameters;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_2, (String_t*) &_stringLiteral810);
		((AbstractFacebook_t414 *)__this)->___userId_6 = ((String_t*)Castclass(L_3, String_t_il2cpp_TypeInfo_var));
	}

IL_0026:
	{
		Dictionary_2_t312 * L_4 = ___parameters;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_4, (String_t*) &_stringLiteral615);
		if (!L_5)
		{
			goto IL_004c;
		}
	}
	{
		Dictionary_2_t312 * L_6 = ___parameters;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_6, (String_t*) &_stringLiteral615);
		((AbstractFacebook_t414 *)__this)->___accessToken_7 = ((String_t*)Castclass(L_7, String_t_il2cpp_TypeInfo_var));
	}

IL_004c:
	{
		Dictionary_2_t312 * L_8 = ___parameters;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(!0) */, L_8, (String_t*) &_stringLiteral840);
		if (!L_9)
		{
			goto IL_007d;
		}
	}
	{
		Dictionary_2_t312 * L_10 = ___parameters;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0) */, L_10, (String_t*) &_stringLiteral840);
		int32_t L_12 = Int32_Parse_m3707(NULL /*static, unused*/, ((String_t*)Castclass(L_11, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DateTime_t287  L_13 = IOSFacebook_FromTimestamp_m2461(__this, L_12, /*hidden argument*/NULL);
		((AbstractFacebook_t414 *)__this)->___accessTokenExpiresAt_8 = L_13;
	}

IL_007d:
	{
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnAccessTokenRefresh(System.String)
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnAccessTokenRefresh_m2460 (IOSFacebook_t444 * __this, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	{
		String_t* L_0 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		Object_t * L_1 = Json_Deserialize_m2511(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Dictionary_2_t312 *)Castclass(L_1, Dictionary_2_t312_il2cpp_TypeInfo_var));
		Dictionary_2_t312 * L_2 = V_0;
		IOSFacebook_ParseLoginDict_m2459(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___message;
		FBResult_t281 * L_4 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_4, L_3, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnAuthResponse_m2233(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.DateTime Facebook.IOSFacebook::FromTimestamp(System.Int32)
extern "C" DateTime_t287  IOSFacebook_FromTimestamp_m2461 (IOSFacebook_t444 * __this, int32_t ___timestamp, const MethodInfo* method)
{
	DateTime_t287  V_0 = {0};
	{
		DateTime__ctor_m3931((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_0 = ___timestamp;
		DateTime_t287  L_1 = DateTime_AddSeconds_m4088((&V_0), (((double)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Facebook.IOSFacebook::OnLogout(System.String)
extern "C" void IOSFacebook_OnLogout_m2462 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method)
{
	{
		((AbstractFacebook_t414 *)__this)->___isLoggedIn_5 = 0;
		return;
	}
}
// System.Void Facebook.IOSFacebook::OnRequestComplete(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern "C" void IOSFacebook_OnRequestComplete_m2463 (IOSFacebook_t444 * __this, String_t* ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___msg;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m4118(L_0, (String_t*) &_stringLiteral610, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		FBDebug_Error_m2290(NULL /*static, unused*/, (String_t*) &_stringLiteral935, /*hidden argument*/NULL);
		String_t* L_3 = ___msg;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral936, L_3, /*hidden argument*/NULL);
		FBDebug_Error_m2290(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}

IL_002e:
	{
		String_t* L_5 = ___msg;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_m418(L_5, 0, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = ___msg;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		String_t* L_10 = String_Substring_m4119(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_1;
		String_t* L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral937, L_11, (String_t*) &_stringLiteral938, L_12, /*hidden argument*/NULL);
		FBDebug_Info_m2288(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		String_t* L_14 = V_1;
		String_t* L_15 = V_2;
		FBResult_t281 * L_16 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2292(L_16, L_15, (String_t*)NULL, /*hidden argument*/NULL);
		AbstractFacebook_OnFacebookResponse_m2235(__this, L_14, L_16, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// Facebook.IOSFacebookLoader
#include "AssemblyU2DCSharp_Facebook_IOSFacebookLoaderMethodDeclarations.h"

struct FBComponentFactory_t428;
struct IOSFacebook_t444;
// Declaration !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
// !!0 Facebook.FBComponentFactory::GetComponent<Facebook.IOSFacebook>(Facebook.IfNotExist)
#define FBComponentFactory_GetComponent_TisIOSFacebook_t444_m4120(__this /* static, unused */, p0, method) (( IOSFacebook_t444 * (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))FBComponentFactory_GetComponent_TisObject_t_m4053_gshared)(__this /* static, unused */, p0, method)


// System.Void Facebook.IOSFacebookLoader::.ctor()
extern "C" void IOSFacebookLoader__ctor_m2464 (IOSFacebookLoader_t445 * __this, const MethodInfo* method)
{
	{
		CompiledFacebookLoader__ctor_m2247(__this, /*hidden argument*/NULL);
		return;
	}
}
// Facebook.AbstractFacebook Facebook.IOSFacebookLoader::get_fb()
extern const MethodInfo* FBComponentFactory_GetComponent_TisIOSFacebook_t444_m4120_MethodInfo_var;
extern "C" AbstractFacebook_t414 * IOSFacebookLoader_get_fb_m2465 (IOSFacebookLoader_t445 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_GetComponent_TisIOSFacebook_t444_m4120_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484108);
		s_Il2CppMethodIntialized = true;
	}
	{
		IOSFacebook_t444 * L_0 = FBComponentFactory_GetComponent_TisIOSFacebook_t444_m4120(NULL /*static, unused*/, 0, /*hidden argument*/FBComponentFactory_GetComponent_TisIOSFacebook_t444_m4120_MethodInfo_var);
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
extern "C" void U3CStartU3Ec__IteratorE__ctor_m2466 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2467 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Object Facebook.AsyncRequestString/<Start>c__IteratorE::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CStartU3Ec__IteratorE_System_Collections_IEnumerator_get_Current_m2468 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_7);
		return L_0;
	}
}
// System.Boolean Facebook.AsyncRequestString/<Start>c__IteratorE::MoveNext()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t757_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enumerator_t301_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* WWW_t265_il2cpp_TypeInfo_var;
extern TypeInfo* WWWForm_t112_il2cpp_TypeInfo_var;
extern TypeInfo* FBResult_t281_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2_GetEnumerator_m3903_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3904_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m3905_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m3906_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m3907_MethodInfo_var;
extern "C" bool U3CStartU3Ec__IteratorE_MoveNext_m2469 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		Uri_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Enumerator_t301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(317);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		WWW_t265_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(276);
		WWWForm_t112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(185);
		FBResult_t281_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(188);
		Dictionary_2_GetEnumerator_m3903_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483945);
		Enumerator_get_Current_m3904_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483946);
		KeyValuePair_2_get_Key_m3905_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483947);
		KeyValuePair_2_get_Value_m3906_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483948);
		Enumerator_MoveNext_m3907_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483949);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	U3CStartU3Ec__IteratorE_t447 * G_B5_0 = {0};
	U3CStartU3Ec__IteratorE_t447 * G_B4_0 = {0};
	String_t* G_B6_0 = {0};
	U3CStartU3Ec__IteratorE_t447 * G_B6_1 = {0};
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
		AsyncRequestString_t446 * L_2 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_2);
		HttpMethod_t448 * L_3 = (L_2->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_4 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t448 *)L_3) == ((Object_t*)(HttpMethod_t448 *)L_4))))
		{
			goto IL_0128;
		}
	}
	{
		AsyncRequestString_t446 * L_5 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_5);
		String_t* L_6 = (L_5->___url_2);
		NullCheck(L_6);
		bool L_7 = String_Contains_m3739(L_6, (String_t*) &_stringLiteral600, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (!L_7)
		{
			G_B5_0 = __this;
			goto IL_005b;
		}
	}
	{
		G_B6_0 = (String_t*) &_stringLiteral599;
		G_B6_1 = G_B4_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B6_0 = (String_t*) &_stringLiteral600;
		G_B6_1 = G_B5_0;
	}

IL_0060:
	{
		NullCheck(G_B6_1);
		G_B6_1->___U3CurlParamsU3E__0_0 = G_B6_0;
		AsyncRequestString_t446 * L_8 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_8);
		Dictionary_2_t122 * L_9 = (L_8->___formData_4);
		if (!L_9)
		{
			goto IL_0102;
		}
	}
	{
		AsyncRequestString_t446 * L_10 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_10);
		Dictionary_2_t122 * L_11 = (L_10->___formData_4);
		NullCheck(L_11);
		Enumerator_t301  L_12 = Dictionary_2_GetEnumerator_m3903(L_11, /*hidden argument*/Dictionary_2_GetEnumerator_m3903_MethodInfo_var);
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
			Enumerator_t301 * L_13 = &(__this->___U3CU24s_77U3E__1_1);
			KeyValuePair_2_t302  L_14 = Enumerator_get_Current_m3904(L_13, /*hidden argument*/Enumerator_get_Current_m3904_MethodInfo_var);
			__this->___U3CpairU3E__2_2 = L_14;
			String_t* L_15 = (__this->___U3CurlParamsU3E__0_0);
			KeyValuePair_2_t302 * L_16 = &(__this->___U3CpairU3E__2_2);
			String_t* L_17 = KeyValuePair_2_get_Key_m3905(L_16, /*hidden argument*/KeyValuePair_2_get_Key_m3905_MethodInfo_var);
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t757_il2cpp_TypeInfo_var);
			String_t* L_18 = Uri_EscapeDataString_m3939(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			KeyValuePair_2_t302 * L_19 = &(__this->___U3CpairU3E__2_2);
			String_t* L_20 = KeyValuePair_2_get_Value_m3906(L_19, /*hidden argument*/KeyValuePair_2_get_Value_m3906_MethodInfo_var);
			String_t* L_21 = Uri_EscapeDataString_m3939(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_22 = String_Format_m4056(NULL /*static, unused*/, (String_t*) &_stringLiteral939, L_18, L_21, /*hidden argument*/NULL);
			String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, L_15, L_22, /*hidden argument*/NULL);
			__this->___U3CurlParamsU3E__0_0 = L_23;
		}

IL_00dc:
		{
			Enumerator_t301 * L_24 = &(__this->___U3CU24s_77U3E__1_1);
			bool L_25 = Enumerator_MoveNext_m3907(L_24, /*hidden argument*/Enumerator_MoveNext_m3907_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00f1;
	}

FINALLY_00f1:
	{ // begin finally (depth: 1)
		Enumerator_t301  L_26 = (__this->___U3CU24s_77U3E__1_1);
		Enumerator_t301  L_27 = L_26;
		Object_t * L_28 = Box(Enumerator_t301_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_28);
		IL2CPP_END_FINALLY(241)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(241)
	{
		IL2CPP_JUMP_TBL(0x102, IL_0102)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0102:
	{
		AsyncRequestString_t446 * L_29 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_29);
		String_t* L_30 = (L_29->___url_2);
		String_t* L_31 = (__this->___U3CurlParamsU3E__0_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m408(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		WWW_t265 * L_33 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m3850(L_33, L_32, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_33;
		goto IL_0220;
	}

IL_0128:
	{
		AsyncRequestString_t446 * L_34 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_34);
		WWWForm_t112 * L_35 = (L_34->___query_5);
		if (L_35)
		{
			goto IL_0148;
		}
	}
	{
		AsyncRequestString_t446 * L_36 = (__this->___U3CU3Ef__this_8);
		WWWForm_t112 * L_37 = (WWWForm_t112 *)il2cpp_codegen_object_new (WWWForm_t112_il2cpp_TypeInfo_var);
		WWWForm__ctor_m3700(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___query_5 = L_37;
	}

IL_0148:
	{
		AsyncRequestString_t446 * L_38 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_38);
		HttpMethod_t448 * L_39 = (L_38->___method_3);
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_40 = HttpMethod_get_DELETE_m2487(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((Object_t*)(HttpMethod_t448 *)L_39) == ((Object_t*)(HttpMethod_t448 *)L_40))))
		{
			goto IL_0177;
		}
	}
	{
		AsyncRequestString_t446 * L_41 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_41);
		WWWForm_t112 * L_42 = (L_41->___query_5);
		NullCheck(L_42);
		WWWForm_AddField_m3702(L_42, (String_t*) &_stringLiteral903, (String_t*) &_stringLiteral940, /*hidden argument*/NULL);
	}

IL_0177:
	{
		AsyncRequestString_t446 * L_43 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_43);
		Dictionary_2_t122 * L_44 = (L_43->___formData_4);
		if (!L_44)
		{
			goto IL_01ff;
		}
	}
	{
		AsyncRequestString_t446 * L_45 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_45);
		Dictionary_2_t122 * L_46 = (L_45->___formData_4);
		NullCheck(L_46);
		Enumerator_t301  L_47 = Dictionary_2_GetEnumerator_m3903(L_46, /*hidden argument*/Dictionary_2_GetEnumerator_m3903_MethodInfo_var);
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
			Enumerator_t301 * L_48 = &(__this->___U3CU24s_78U3E__4_4);
			KeyValuePair_2_t302  L_49 = Enumerator_get_Current_m3904(L_48, /*hidden argument*/Enumerator_get_Current_m3904_MethodInfo_var);
			__this->___U3CpairU3E__5_5 = L_49;
			AsyncRequestString_t446 * L_50 = (__this->___U3CU3Ef__this_8);
			NullCheck(L_50);
			WWWForm_t112 * L_51 = (L_50->___query_5);
			KeyValuePair_2_t302 * L_52 = &(__this->___U3CpairU3E__5_5);
			String_t* L_53 = KeyValuePair_2_get_Key_m3905(L_52, /*hidden argument*/KeyValuePair_2_get_Key_m3905_MethodInfo_var);
			KeyValuePair_2_t302 * L_54 = &(__this->___U3CpairU3E__5_5);
			String_t* L_55 = KeyValuePair_2_get_Value_m3906(L_54, /*hidden argument*/KeyValuePair_2_get_Value_m3906_MethodInfo_var);
			NullCheck(L_51);
			WWWForm_AddField_m3702(L_51, L_53, L_55, /*hidden argument*/NULL);
		}

IL_01d9:
		{
			Enumerator_t301 * L_56 = &(__this->___U3CU24s_78U3E__4_4);
			bool L_57 = Enumerator_MoveNext_m3907(L_56, /*hidden argument*/Enumerator_MoveNext_m3907_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_01ee;
	}

FINALLY_01ee:
	{ // begin finally (depth: 1)
		Enumerator_t301  L_58 = (__this->___U3CU24s_78U3E__4_4);
		Enumerator_t301  L_59 = L_58;
		Object_t * L_60 = Box(Enumerator_t301_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_60);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_60);
		IL2CPP_END_FINALLY(494)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(494)
	{
		IL2CPP_JUMP_TBL(0x1FF, IL_01ff)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_01ff:
	{
		AsyncRequestString_t446 * L_61 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_61);
		String_t* L_62 = (L_61->___url_2);
		AsyncRequestString_t446 * L_63 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_63);
		WWWForm_t112 * L_64 = (L_63->___query_5);
		WWW_t265 * L_65 = (WWW_t265 *)il2cpp_codegen_object_new (WWW_t265_il2cpp_TypeInfo_var);
		WWW__ctor_m4121(L_65, L_62, L_64, /*hidden argument*/NULL);
		__this->___U3CwwwU3E__3_3 = L_65;
	}

IL_0220:
	{
		WWW_t265 * L_66 = (__this->___U3CwwwU3E__3_3);
		__this->___U24current_7 = L_66;
		__this->___U24PC_6 = 1;
		goto IL_0282;
	}

IL_0238:
	{
		AsyncRequestString_t446 * L_67 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_67);
		FacebookDelegate_t433 * L_68 = (L_67->___callback_6);
		if (!L_68)
		{
			goto IL_0263;
		}
	}
	{
		AsyncRequestString_t446 * L_69 = (__this->___U3CU3Ef__this_8);
		NullCheck(L_69);
		FacebookDelegate_t433 * L_70 = (L_69->___callback_6);
		WWW_t265 * L_71 = (__this->___U3CwwwU3E__3_3);
		FBResult_t281 * L_72 = (FBResult_t281 *)il2cpp_codegen_object_new (FBResult_t281_il2cpp_TypeInfo_var);
		FBResult__ctor_m2291(L_72, L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		VirtActionInvoker1< FBResult_t281 * >::Invoke(11 /* System.Void Facebook.FacebookDelegate::Invoke(FBResult) */, L_70, L_72);
	}

IL_0263:
	{
		WWW_t265 * L_73 = (__this->___U3CwwwU3E__3_3);
		NullCheck(L_73);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.WWW::Dispose() */, L_73);
		AsyncRequestString_t446 * L_74 = (__this->___U3CU3Ef__this_8);
		Object_Destroy_m3897(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
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
extern "C" void U3CStartU3Ec__IteratorE_Dispose_m2470 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_6 = (-1);
		return;
	}
}
// System.Void Facebook.AsyncRequestString/<Start>c__IteratorE::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CStartU3Ec__IteratorE_Reset_m2471 (U3CStartU3Ec__IteratorE_t447 * __this, const MethodInfo* method)
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

struct FBComponentFactory_t428;
struct AsyncRequestString_t446;
struct FBComponentFactory_t428;
struct Object_t;
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
// !!0 Facebook.FBComponentFactory::AddComponent<System.Object>()
extern "C" Object_t * FBComponentFactory_AddComponent_TisObject_t_m4123_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define FBComponentFactory_AddComponent_TisObject_t_m4123(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m4123_gshared)(__this /* static, unused */, method)
// Declaration !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
// !!0 Facebook.FBComponentFactory::AddComponent<Facebook.AsyncRequestString>()
#define FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122(__this /* static, unused */, method) (( AsyncRequestString_t446 * (*) (Object_t * /* static, unused */, const MethodInfo*))FBComponentFactory_AddComponent_TisObject_t_m4123_gshared)(__this /* static, unused */, method)


// System.Void Facebook.AsyncRequestString::.ctor()
extern "C" void AsyncRequestString__ctor_m2472 (AsyncRequestString_t446 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Post(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Post_m2473 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_1 = HttpMethod_get_POST_m2486(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_2 = ___formData;
		FacebookDelegate_t433 * L_3 = ___callback;
		AsyncRequestString_Request_m2476(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Get(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" void AsyncRequestString_Get_m2474 (Object_t * __this /* static, unused */, String_t* ___url, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_1 = HttpMethod_get_GET_m2485(NULL /*static, unused*/, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_2 = ___formData;
		FacebookDelegate_t433 * L_3 = ___callback;
		AsyncRequestString_Request_m2476(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,UnityEngine.WWWForm,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m2475 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t448 * ___method, WWWForm_t112 * ___query, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484109);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t446 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t446 * L_2 = AsyncRequestString_SetUrl_m2478(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t448 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t446 * L_4 = AsyncRequestString_SetMethod_m2479(L_2, L_3, /*hidden argument*/NULL);
		WWWForm_t112 * L_5 = ___query;
		NullCheck(L_4);
		AsyncRequestString_t446 * L_6 = AsyncRequestString_SetQuery_m2481(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m2482(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.AsyncRequestString::Request(System.String,Facebook.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.FacebookDelegate)
extern const MethodInfo* FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var;
extern "C" void AsyncRequestString_Request_m2476 (Object_t * __this /* static, unused */, String_t* ___url, HttpMethod_t448 * ___method, Dictionary_2_t122 * ___formData, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484109);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsyncRequestString_t446 * L_0 = FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122(NULL /*static, unused*/, /*hidden argument*/FBComponentFactory_AddComponent_TisAsyncRequestString_t446_m4122_MethodInfo_var);
		String_t* L_1 = ___url;
		NullCheck(L_0);
		AsyncRequestString_t446 * L_2 = AsyncRequestString_SetUrl_m2478(L_0, L_1, /*hidden argument*/NULL);
		HttpMethod_t448 * L_3 = ___method;
		NullCheck(L_2);
		AsyncRequestString_t446 * L_4 = AsyncRequestString_SetMethod_m2479(L_2, L_3, /*hidden argument*/NULL);
		Dictionary_2_t122 * L_5 = ___formData;
		NullCheck(L_4);
		AsyncRequestString_t446 * L_6 = AsyncRequestString_SetFormData_m2480(L_4, L_5, /*hidden argument*/NULL);
		FacebookDelegate_t433 * L_7 = ___callback;
		NullCheck(L_6);
		AsyncRequestString_SetCallback_m2482(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Facebook.AsyncRequestString::Start()
extern TypeInfo* U3CStartU3Ec__IteratorE_t447_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncRequestString_Start_m2477 (AsyncRequestString_t446 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CStartU3Ec__IteratorE_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		s_Il2CppMethodIntialized = true;
	}
	U3CStartU3Ec__IteratorE_t447 * V_0 = {0};
	{
		U3CStartU3Ec__IteratorE_t447 * L_0 = (U3CStartU3Ec__IteratorE_t447 *)il2cpp_codegen_object_new (U3CStartU3Ec__IteratorE_t447_il2cpp_TypeInfo_var);
		U3CStartU3Ec__IteratorE__ctor_m2466(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CStartU3Ec__IteratorE_t447 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_8 = __this;
		U3CStartU3Ec__IteratorE_t447 * L_2 = V_0;
		return L_2;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetUrl(System.String)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetUrl_m2478 (AsyncRequestString_t446 * __this, String_t* ___url, const MethodInfo* method)
{
	{
		String_t* L_0 = ___url;
		__this->___url_2 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetMethod(Facebook.HttpMethod)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetMethod_m2479 (AsyncRequestString_t446 * __this, HttpMethod_t448 * ___method, const MethodInfo* method)
{
	{
		HttpMethod_t448 * L_0 = ___method;
		__this->___method_3 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetFormData(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetFormData_m2480 (AsyncRequestString_t446 * __this, Dictionary_2_t122 * ___formData, const MethodInfo* method)
{
	{
		Dictionary_2_t122 * L_0 = ___formData;
		__this->___formData_4 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetQuery_m2481 (AsyncRequestString_t446 * __this, WWWForm_t112 * ___query, const MethodInfo* method)
{
	{
		WWWForm_t112 * L_0 = ___query;
		__this->___query_5 = L_0;
		return __this;
	}
}
// Facebook.AsyncRequestString Facebook.AsyncRequestString::SetCallback(Facebook.FacebookDelegate)
extern "C" AsyncRequestString_t446 * AsyncRequestString_SetCallback_m2482 (AsyncRequestString_t446 * __this, FacebookDelegate_t433 * ___callback, const MethodInfo* method)
{
	{
		FacebookDelegate_t433 * L_0 = ___callback;
		__this->___callback_6 = L_0;
		return __this;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void Facebook.HttpMethod::.ctor(System.String)
extern "C" void HttpMethod__ctor_m2483 (HttpMethod_t448 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___methodValue_3 = L_0;
		return;
	}
}
// System.Void Facebook.HttpMethod::.cctor()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" void HttpMethod__cctor_m2484 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		HttpMethod_t448 * L_0 = (HttpMethod_t448 *)il2cpp_codegen_object_new (HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2483(L_0, (String_t*) &_stringLiteral941, /*hidden argument*/NULL);
		((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___getMethod_0 = L_0;
		HttpMethod_t448 * L_1 = (HttpMethod_t448 *)il2cpp_codegen_object_new (HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2483(L_1, (String_t*) &_stringLiteral931, /*hidden argument*/NULL);
		((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___postMethod_1 = L_1;
		HttpMethod_t448 * L_2 = (HttpMethod_t448 *)il2cpp_codegen_object_new (HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod__ctor_m2483(L_2, (String_t*) &_stringLiteral942, /*hidden argument*/NULL);
		((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2 = L_2;
		return;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_GET()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t448 * HttpMethod_get_GET_m2485 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_0 = ((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___getMethod_0;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_POST()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t448 * HttpMethod_get_POST_m2486 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_0 = ((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___postMethod_1;
		return L_0;
	}
}
// Facebook.HttpMethod Facebook.HttpMethod::get_DELETE()
extern TypeInfo* HttpMethod_t448_il2cpp_TypeInfo_var;
extern "C" HttpMethod_t448 * HttpMethod_get_DELETE_m2487 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HttpMethod_t448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(181);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_t448_il2cpp_TypeInfo_var);
		HttpMethod_t448 * L_0 = ((HttpMethod_t448_StaticFields*)HttpMethod_t448_il2cpp_TypeInfo_var->static_fields)->___deleteMethod_2;
		return L_0;
	}
}
// System.String Facebook.HttpMethod::ToString()
extern "C" String_t* HttpMethod_ToString_m2488 (HttpMethod_t448 * __this, const MethodInfo* method)
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
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern "C" void Parser__ctor_m2489 (Parser_t450 * __this, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString;
		StringReader_t259 * L_1 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
		StringReader__ctor_m3836(L_1, L_0, /*hidden argument*/NULL);
		__this->___json_2 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern TypeInfo* Parser_t450_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_Parse_m2490 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Parser_t450 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString;
		Parser_t450 * L_1 = (Parser_t450 *)il2cpp_codegen_object_new (Parser_t450_il2cpp_TypeInfo_var);
		Parser__ctor_m2489(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			Parser_t450 * L_2 = V_0;
			NullCheck(L_2);
			Object_t * L_3 = Parser_ParseValue_m2494(L_2, /*hidden argument*/NULL);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		{
			Parser_t450 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0024;
			}
		}

IL_001e:
		{
			Parser_t450 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_5);
		}

IL_0024:
		{
			IL2CPP_END_FINALLY(24)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0025:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C" void Parser_Dispose_m2491 (Parser_t450 * __this, const MethodInfo* method)
{
	{
		StringReader_t259 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void System.IO.TextReader::Dispose() */, L_0);
		__this->___json_2 = (StringReader_t259 *)NULL;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern TypeInfo* Dictionary_2_t312_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3712_MethodInfo_var;
extern "C" Dictionary_2_t312 * Parser_ParseObject_m2492 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(179);
		Dictionary_2__ctor_m3712_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483713);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t312 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = {0};
	{
		Dictionary_2_t312 * L_0 = (Dictionary_2_t312 *)il2cpp_codegen_object_new (Dictionary_2_t312_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3712(L_0, /*hidden argument*/Dictionary_2__ctor_m3712_MethodInfo_var);
		V_0 = L_0;
		StringReader_t259 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_m2502(__this, /*hidden argument*/NULL);
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
		return (Dictionary_2_t312 *)NULL;
	}

IL_0039:
	{
		goto IL_0012;
	}

IL_003e:
	{
		Dictionary_2_t312 * L_5 = V_0;
		return L_5;
	}

IL_0040:
	{
		String_t* L_6 = Parser_ParseString_m2496(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		return (Dictionary_2_t312 *)NULL;
	}

IL_004f:
	{
		int32_t L_8 = Parser_get_NextToken_m2502(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)5)))
		{
			goto IL_005d;
		}
	}
	{
		return (Dictionary_2_t312 *)NULL;
	}

IL_005d:
	{
		StringReader_t259 * L_9 = (__this->___json_2);
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_9);
		Dictionary_2_t312 * L_10 = V_0;
		String_t* L_11 = V_1;
		Object_t * L_12 = Parser_ParseValue_m2494(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1) */, L_10, L_11, L_12);
		goto IL_007b;
	}

IL_007b:
	{
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern TypeInfo* List_1_t684_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3710_MethodInfo_var;
extern "C" List_1_t684 * Parser_ParseArray_m2493 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t684_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(180);
		List_1__ctor_m3710_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483711);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t684 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	Object_t * V_3 = {0};
	int32_t V_4 = {0};
	{
		List_1_t684 * L_0 = (List_1_t684 *)il2cpp_codegen_object_new (List_1_t684_il2cpp_TypeInfo_var);
		List_1__ctor_m3710(L_0, /*hidden argument*/List_1__ctor_m3710_MethodInfo_var);
		V_0 = L_0;
		StringReader_t259 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_1 = 1;
		goto IL_0066;
	}

IL_0019:
	{
		int32_t L_2 = Parser_get_NextToken_m2502(__this, /*hidden argument*/NULL);
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
		return (List_1_t684 *)NULL;
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
		Object_t * L_7 = Parser_ParseByToken_m2495(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t684 * L_8 = V_0;
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
		List_1_t684 * L_11 = V_0;
		return L_11;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C" Object_t * Parser_ParseValue_m2494 (Parser_t450 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = Parser_get_NextToken_m2502(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Object_t * L_2 = Parser_ParseByToken_m2495(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseByToken_m2495 (Parser_t450 * __this, int32_t ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
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
		String_t* L_2 = Parser_ParseString_m2496(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0042:
	{
		Object_t * L_3 = Parser_ParseNumber_m2497(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_0049:
	{
		Dictionary_2_t312 * L_4 = Parser_ParseObject_m2492(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0050:
	{
		List_1_t684 * L_5 = Parser_ParseArray_m2493(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0057:
	{
		bool L_6 = 1;
		Object_t * L_7 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_005e:
	{
		bool L_8 = 0;
		Object_t * L_9 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_8);
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
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_ParseString_m2496 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	StringBuilder_t261 * V_3 = {0};
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	uint16_t V_6 = 0x0;
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3837(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t259 * L_1 = (__this->___json_2);
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_1);
		V_2 = 1;
		goto IL_017e;
	}

IL_0019:
	{
		StringReader_t259 * L_2 = (__this->___json_2);
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
		uint16_t L_4 = Parser_get_NextChar_m2500(__this, /*hidden argument*/NULL);
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
		StringReader_t259 * L_8 = (__this->___json_2);
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
		uint16_t L_10 = Parser_get_NextChar_m2500(__this, /*hidden argument*/NULL);
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
		StringBuilder_t261 * L_18 = V_0;
		uint16_t L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_Append_m3838(L_18, L_19, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00e4:
	{
		StringBuilder_t261 * L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_Append_m3838(L_20, 8, /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00f1:
	{
		StringBuilder_t261 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3838(L_21, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_00ff:
	{
		StringBuilder_t261 * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m3838(L_22, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_010d:
	{
		StringBuilder_t261 * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m3838(L_23, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_011b:
	{
		StringBuilder_t261 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m3838(L_24, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_0129:
	{
		StringBuilder_t261 * L_25 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3837(L_25, /*hidden argument*/NULL);
		V_3 = L_25;
		V_4 = 0;
		goto IL_014a;
	}

IL_0137:
	{
		StringBuilder_t261 * L_26 = V_3;
		uint16_t L_27 = Parser_get_NextChar_m2500(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		StringBuilder_Append_m3838(L_26, L_27, /*hidden argument*/NULL);
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
		StringBuilder_t261 * L_30 = V_0;
		StringBuilder_t261 * L_31 = V_3;
		NullCheck(L_31);
		String_t* L_32 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_33 = Convert_ToInt32_m3839(NULL /*static, unused*/, L_32, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_m3838(L_30, (((uint16_t)L_33)), /*hidden argument*/NULL);
		goto IL_016c;
	}

IL_016c:
	{
		goto IL_017e;
	}

IL_0171:
	{
		StringBuilder_t261 * L_34 = V_0;
		uint16_t L_35 = V_1;
		NullCheck(L_34);
		StringBuilder_Append_m3838(L_34, L_35, /*hidden argument*/NULL);
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
		StringBuilder_t261 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_37);
		return L_38;
	}
}
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern "C" Object_t * Parser_ParseNumber_m2497 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Parser_get_NextWord_m2501(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_m3840(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		NumberFormatInfo_t452 * L_4 = ((Json_t453_StaticFields*)Json_t453_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		int64_t L_5 = Int64_Parse_m4124(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0026:
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Json_t453_il2cpp_TypeInfo_var);
		NumberFormatInfo_t452 * L_9 = ((Json_t453_StaticFields*)Json_t453_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0;
		double L_10 = Double_Parse_m4125(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		double L_11 = L_10;
		Object_t * L_12 = Box(Double_t90_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C" void Parser_EatWhitespace_m2498 (Parser_t450 * __this, const MethodInfo* method)
{
	{
		goto IL_0027;
	}

IL_0005:
	{
		StringReader_t259 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		StringReader_t259 * L_1 = (__this->___json_2);
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
		uint16_t L_3 = Parser_get_PeekChar_m2499(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral502);
		int32_t L_4 = String_IndexOf_m3840((String_t*) &_stringLiteral502, L_3, /*hidden argument*/NULL);
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
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_PeekChar_m2499 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t259 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.StringReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m3842(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" uint16_t Parser_get_NextChar_m2500 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringReader_t259 * L_0 = (__this->___json_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		uint16_t L_2 = Convert_ToChar_m3842(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* Parser_get_NextWord_m2501 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3837(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_002e;
	}

IL_000b:
	{
		StringBuilder_t261 * L_1 = V_0;
		uint16_t L_2 = Parser_get_NextChar_m2500(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3838(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t259 * L_3 = (__this->___json_2);
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
		uint16_t L_5 = Parser_get_PeekChar_m2499(__this, /*hidden argument*/NULL);
		NullCheck((String_t*) &_stringLiteral500);
		int32_t L_6 = String_IndexOf_m3840((String_t*) &_stringLiteral500, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_000b;
		}
	}

IL_0044:
	{
		StringBuilder_t261 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_7);
		return L_8;
	}
}
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern TypeInfo* Parser_t450_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3843_MethodInfo_var;
extern "C" int32_t Parser_get_NextToken_m2502 (Parser_t450 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Parser_t450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(433);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m3843_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	String_t* V_3 = {0};
	Dictionary_2_t223 * V_4 = {0};
	int32_t V_5 = 0;
	{
		Parser_EatWhitespace_m2498(__this, /*hidden argument*/NULL);
		StringReader_t259 * L_0 = (__this->___json_2);
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
		uint16_t L_2 = Parser_get_PeekChar_m2499(__this, /*hidden argument*/NULL);
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
		StringReader_t259 * L_7 = (__this->___json_2);
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
		StringReader_t259 * L_8 = (__this->___json_2);
		NullCheck(L_8);
		VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.StringReader::Read() */, L_8);
		return (int32_t)(4);
	}

IL_00de:
	{
		StringReader_t259 * L_9 = (__this->___json_2);
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
		String_t* L_10 = Parser_get_NextWord_m2501(__this, /*hidden argument*/NULL);
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
		Dictionary_2_t223 * L_13 = ((Parser_t450_StaticFields*)Parser_t450_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3;
		if (L_13)
		{
			goto IL_0141;
		}
	}
	{
		Dictionary_2_t223 * L_14 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3843(L_14, 3, /*hidden argument*/Dictionary_2__ctor_m3843_MethodInfo_var);
		V_4 = L_14;
		Dictionary_2_t223 * L_15 = V_4;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, (String_t*) &_stringLiteral106, 0);
		Dictionary_2_t223 * L_16 = V_4;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_16, (String_t*) &_stringLiteral105, 1);
		Dictionary_2_t223 * L_17 = V_4;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_17, (String_t*) &_stringLiteral501, 2);
		Dictionary_2_t223 * L_18 = V_4;
		((Parser_t450_StaticFields*)Parser_t450_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3 = L_18;
	}

IL_0141:
	{
		Dictionary_2_t223 * L_19 = ((Parser_t450_StaticFields*)Parser_t450_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map3_3;
		String_t* L_20 = V_3;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_19, L_20, (&V_5));
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
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" void Serializer__ctor_m2503 (Serializer_t451 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3837(L_0, /*hidden argument*/NULL);
		__this->___builder_0 = L_0;
		return;
	}
}
// System.String Facebook.MiniJSON.Json/Serializer::Serialize(System.Object)
extern TypeInfo* Serializer_t451_il2cpp_TypeInfo_var;
extern "C" String_t* Serializer_Serialize_m2504 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Serializer_t451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		s_Il2CppMethodIntialized = true;
	}
	Serializer_t451 * V_0 = {0};
	{
		Serializer_t451 * L_0 = (Serializer_t451 *)il2cpp_codegen_object_new (Serializer_t451_il2cpp_TypeInfo_var);
		Serializer__ctor_m2503(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Serializer_t451 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		Serializer_SerializeValue_m2505(L_1, L_2, /*hidden argument*/NULL);
		Serializer_t451 * L_3 = V_0;
		NullCheck(L_3);
		StringBuilder_t261 * L_4 = (L_3->___builder_0);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_4);
		return L_5;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeValue_m2505 (Serializer_t451 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
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
		StringBuilder_t261 * L_1 = (__this->___builder_0);
		NullCheck(L_1);
		StringBuilder_Append_m3844(L_1, (String_t*) &_stringLiteral501, /*hidden argument*/NULL);
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
		Serializer_SerializeString_m2508(__this, L_4, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0035:
	{
		Object_t * L_5 = ___value;
		if (!((Object_t *)IsInst(L_5, Boolean_t59_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		StringBuilder_t261 * L_6 = (__this->___builder_0);
		Object_t * L_7 = ___value;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = String_ToLower_m3845(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		StringBuilder_Append_m3844(L_6, L_9, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_005c:
	{
		Object_t * L_10 = ___value;
		Object_t * L_11 = ((Object_t *)IsInst(L_10, IList_t686_il2cpp_TypeInfo_var));
		V_0 = L_11;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		Object_t * L_12 = V_0;
		Serializer_SerializeArray_m2507(__this, L_12, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_0075:
	{
		Object_t * L_13 = ___value;
		Object_t * L_14 = ((Object_t *)IsInst(L_13, IDictionary_t685_il2cpp_TypeInfo_var));
		V_1 = L_14;
		if (!L_14)
		{
			goto IL_008e;
		}
	}
	{
		Object_t * L_15 = V_1;
		Serializer_SerializeObject_m2506(__this, L_15, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_008e:
	{
		Object_t * L_16 = ___value;
		if (!((Object_t *)IsInst(L_16, Char_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t * L_17 = ___value;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		Serializer_SerializeString_m2508(__this, L_18, /*hidden argument*/NULL);
		goto IL_00b1;
	}

IL_00aa:
	{
		Object_t * L_19 = ___value;
		Serializer_SerializeOther_m2509(__this, L_19, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeObject_m2506 (Serializer_t451 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		StringBuilder_t261 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3838(L_0, ((int32_t)123), /*hidden argument*/NULL);
		Object_t * L_1 = ___obj;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t685_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_2);
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
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_002e:
		{
			StringBuilder_t261 * L_7 = (__this->___builder_0);
			NullCheck(L_7);
			StringBuilder_Append_m3838(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_003c:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m2508(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t261 * L_10 = (__this->___builder_0);
			NullCheck(L_10);
			StringBuilder_Append_m3838(L_10, ((int32_t)58), /*hidden argument*/NULL);
			Object_t * L_11 = ___obj;
			Object_t * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m2505(__this, L_13, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0065:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_14);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			Object_t * L_16 = V_2;
			V_3 = ((Object_t *)IsInst(L_16, IDisposable_t58_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x87, IL_0087)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0087:
	{
		StringBuilder_t261 * L_19 = (__this->___builder_0);
		NullCheck(L_19);
		StringBuilder_Append_m3838(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeArray_m2507 (Serializer_t451 * __this, Object_t * ___anArray, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t261 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3838(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = 1;
		Object_t * L_1 = ___anArray;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_1);
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
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0037;
			}
		}

IL_0029:
		{
			StringBuilder_t261 * L_6 = (__this->___builder_0);
			NullCheck(L_6);
			StringBuilder_Append_m3838(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0037:
		{
			Object_t * L_7 = V_1;
			Serializer_SerializeValue_m2505(__this, L_7, /*hidden argument*/NULL);
			V_0 = 0;
		}

IL_0040:
		{
			Object_t * L_8 = V_2;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_8);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_2;
			V_3 = ((Object_t *)IsInst(L_10, IDisposable_t58_il2cpp_TypeInfo_var));
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
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0062:
	{
		StringBuilder_t261 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m3838(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeString(System.String)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeString_m2508 (Serializer_t451 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t697* V_0 = {0};
	uint16_t V_1 = 0x0;
	CharU5BU5D_t697* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	{
		StringBuilder_t261 * L_0 = (__this->___builder_0);
		NullCheck(L_0);
		StringBuilder_Append_m3838(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str;
		NullCheck(L_1);
		CharU5BU5D_t697* L_2 = String_ToCharArray_m3846(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CharU5BU5D_t697* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_0153;
	}

IL_001e:
	{
		CharU5BU5D_t697* L_4 = V_2;
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
		StringBuilder_t261 * L_11 = (__this->___builder_0);
		NullCheck(L_11);
		StringBuilder_Append_m3844(L_11, (String_t*) &_stringLiteral109, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0073:
	{
		StringBuilder_t261 * L_12 = (__this->___builder_0);
		NullCheck(L_12);
		StringBuilder_Append_m3844(L_12, (String_t*) &_stringLiteral108, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_0089:
	{
		StringBuilder_t261 * L_13 = (__this->___builder_0);
		NullCheck(L_13);
		StringBuilder_Append_m3844(L_13, (String_t*) &_stringLiteral113, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_009f:
	{
		StringBuilder_t261 * L_14 = (__this->___builder_0);
		NullCheck(L_14);
		StringBuilder_Append_m3844(L_14, (String_t*) &_stringLiteral114, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00b5:
	{
		StringBuilder_t261 * L_15 = (__this->___builder_0);
		NullCheck(L_15);
		StringBuilder_Append_m3844(L_15, (String_t*) &_stringLiteral110, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00cb:
	{
		StringBuilder_t261 * L_16 = (__this->___builder_0);
		NullCheck(L_16);
		StringBuilder_Append_m3844(L_16, (String_t*) &_stringLiteral111, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00e1:
	{
		StringBuilder_t261 * L_17 = (__this->___builder_0);
		NullCheck(L_17);
		StringBuilder_Append_m3844(L_17, (String_t*) &_stringLiteral112, /*hidden argument*/NULL);
		goto IL_014f;
	}

IL_00f7:
	{
		uint16_t L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_19 = Convert_ToInt32_m3847(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
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
		StringBuilder_t261 * L_22 = (__this->___builder_0);
		uint16_t L_23 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m3838(L_22, L_23, /*hidden argument*/NULL);
		goto IL_014a;
	}

IL_0123:
	{
		StringBuilder_t261 * L_24 = (__this->___builder_0);
		int32_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		String_t* L_26 = Convert_ToString_m3848(NULL /*static, unused*/, L_25, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = String_PadLeft_m3849(L_26, 4, ((int32_t)48), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral503, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m3844(L_24, L_28, /*hidden argument*/NULL);
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
		CharU5BU5D_t697* L_31 = V_2;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		StringBuilder_t261 * L_32 = (__this->___builder_0);
		NullCheck(L_32);
		StringBuilder_Append_m3838(L_32, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Facebook.MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t740_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t88_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t742_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t743_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t744_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t745_il2cpp_TypeInfo_var;
extern "C" void Serializer_SerializeOther_m2509 (Serializer_t451 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		UInt32_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		SByte_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Byte_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Int16_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		UInt16_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		UInt64_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		Decimal_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (((Object_t *)IsInst(L_0, Single_t87_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_1 = ___value;
		if (((Object_t *)IsInst(L_1, Int32_t82_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_2 = ___value;
		if (((Object_t *)IsInst(L_2, UInt32_t740_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_3 = ___value;
		if (((Object_t *)IsInst(L_3, Int64_t89_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_4 = ___value;
		if (((Object_t *)IsInst(L_4, Double_t90_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (((Object_t *)IsInst(L_5, SByte_t88_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_6 = ___value;
		if (((Object_t *)IsInst(L_6, Byte_t741_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_7 = ___value;
		if (((Object_t *)IsInst(L_7, Int16_t742_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_8 = ___value;
		if (((Object_t *)IsInst(L_8, UInt16_t743_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_9 = ___value;
		if (((Object_t *)IsInst(L_9, UInt64_t744_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_10 = ___value;
		if (!((Object_t *)IsInst(L_10, Decimal_t745_il2cpp_TypeInfo_var)))
		{
			goto IL_0090;
		}
	}

IL_0079:
	{
		StringBuilder_t261 * L_11 = (__this->___builder_0);
		Object_t * L_12 = ___value;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		StringBuilder_Append_m3844(L_11, L_13, /*hidden argument*/NULL);
		goto IL_009c;
	}

IL_0090:
	{
		Object_t * L_14 = ___value;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		Serializer_SerializeString_m2508(__this, L_15, /*hidden argument*/NULL);
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
extern TypeInfo* CultureInfo_t768_il2cpp_TypeInfo_var;
extern TypeInfo* Json_t453_il2cpp_TypeInfo_var;
extern "C" void Json__cctor_m2510 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Json_t453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(178);
		s_Il2CppMethodIntialized = true;
	}
	{
		CultureInfo_t768 * L_0 = (CultureInfo_t768 *)il2cpp_codegen_object_new (CultureInfo_t768_il2cpp_TypeInfo_var);
		CultureInfo__ctor_m4126(L_0, (String_t*) &_stringLiteral943, /*hidden argument*/NULL);
		NullCheck(L_0);
		NumberFormatInfo_t452 * L_1 = (NumberFormatInfo_t452 *)VirtFuncInvoker0< NumberFormatInfo_t452 * >::Invoke(11 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_0);
		((Json_t453_StaticFields*)Json_t453_il2cpp_TypeInfo_var->static_fields)->___numberFormat_0 = L_1;
		return;
	}
}
// System.Object Facebook.MiniJSON.Json::Deserialize(System.String)
extern "C" Object_t * Json_Deserialize_m2511 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
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
		Object_t * L_2 = Parser_Parse_m2490(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Facebook.MiniJSON.Json::Serialize(System.Object)
extern "C" String_t* Json_Serialize_m2512 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		String_t* L_1 = Serializer_Serialize_m2504(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// GameAnalyticsSDK.GAPlatform
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatform.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GAPlatform
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatformMethodDeclarations.h"



// GameAnalyticsSDK.GAPlatformSignUp
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatformSignUp.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GAPlatformSignUp
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GAPlatformSignUpMethodDeclarations.h"



// GameAnalyticsSDK.GA_Wrapper
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Wrapper.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Wrapper
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_WrapperMethodDeclarations.h"

// GameAnalyticsSDK.GA_Resource/GAResourceFlowType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Resource_GAResourceFlo.h"
// GameAnalyticsSDK.GA_Progression/GAProgressionStatus
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression_GAProgress.h"
// GameAnalyticsSDK.GA_Error/GAErrorSeverity
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error_GAErrorSeverity.h"


// System.Void GameAnalyticsSDK.GA_Wrapper::.ctor()
extern "C" void GA_Wrapper__ctor_m2513 (GA_Wrapper_t456 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions01(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions01_m2514 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	{
		String_t* L_0 = ___list;
		GA_Wrapper_configureAvailableCustomDimensions01_m2539(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions02(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions02_m2515 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	{
		String_t* L_0 = ___list;
		GA_Wrapper_configureAvailableCustomDimensions02_m2540(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableCustomDimensions03(System.String)
extern "C" void GA_Wrapper_SetAvailableCustomDimensions03_m2516 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	{
		String_t* L_0 = ___list;
		GA_Wrapper_configureAvailableCustomDimensions03_m2541(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableResourceCurrencies(System.String)
extern "C" void GA_Wrapper_SetAvailableResourceCurrencies_m2517 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	{
		String_t* L_0 = ___list;
		GA_Wrapper_configureAvailableResourceCurrencies_m2542(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetAvailableResourceItemTypes(System.String)
extern "C" void GA_Wrapper_SetAvailableResourceItemTypes_m2518 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	{
		String_t* L_0 = ___list;
		GA_Wrapper_configureAvailableResourceItemTypes_m2543(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetUnitySdkVersion(System.String)
extern "C" void GA_Wrapper_SetUnitySdkVersion_m2519 (Object_t * __this /* static, unused */, String_t* ___unitySdkVersion, const MethodInfo* method)
{
	{
		String_t* L_0 = ___unitySdkVersion;
		GA_Wrapper_configureUnitySdkVersion_m2544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetUnityEngineVersion(System.String)
extern "C" void GA_Wrapper_SetUnityEngineVersion_m2520 (Object_t * __this /* static, unused */, String_t* ___unityEngineVersion, const MethodInfo* method)
{
	{
		String_t* L_0 = ___unityEngineVersion;
		GA_Wrapper_configureUnityEngineVersion_m2545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetBuild(System.String)
extern "C" void GA_Wrapper_SetBuild_m2521 (Object_t * __this /* static, unused */, String_t* ___build, const MethodInfo* method)
{
	{
		String_t* L_0 = ___build;
		GA_Wrapper_configureBuild_m2546(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::Initialize(System.String,System.String)
extern "C" void GA_Wrapper_Initialize_m2522 (Object_t * __this /* static, unused */, String_t* ___gamekey, String_t* ___gamesecret, const MethodInfo* method)
{
	{
		String_t* L_0 = ___gamekey;
		String_t* L_1 = ___gamesecret;
		GA_Wrapper_initialize_m2547(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension01(System.String)
extern "C" void GA_Wrapper_SetCustomDimension01_m2523 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_setCustomDimension01_m2548(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension02(System.String)
extern "C" void GA_Wrapper_SetCustomDimension02_m2524 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_setCustomDimension02_m2549(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetCustomDimension03(System.String)
extern "C" void GA_Wrapper_SetCustomDimension03_m2525 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_setCustomDimension03_m2550(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddBusinessEvent(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddBusinessEvent_m2526 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		String_t* L_5 = ___receipt;
		GA_Wrapper_addBusinessEvent_m2551(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddBusinessEventAndAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddBusinessEventAndAutoFetchReceipt_m2527 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		GA_Wrapper_addBusinessEventAndAutoFetchReceipt_m2552(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddResourceEvent(GameAnalyticsSDK.GA_Resource/GAResourceFlowType,System.String,System.Single,System.String,System.String)
extern "C" void GA_Wrapper_AddResourceEvent_m2528 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___flowType;
		String_t* L_1 = ___currency;
		float L_2 = ___amount;
		String_t* L_3 = ___itemType;
		String_t* L_4 = ___itemId;
		GA_Wrapper_addResourceEvent_m2553(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String)
extern "C" void GA_Wrapper_AddProgressionEvent_m2529 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		GA_Wrapper_addProgressionEvent_m2554(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddProgressionEventWithScore(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Int32)
extern "C" void GA_Wrapper_AddProgressionEventWithScore_m2530 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		int32_t L_4 = ___score;
		GA_Wrapper_addProgressionEventWithScore_m2555(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddDesignEvent(System.String,System.Single)
extern "C" void GA_Wrapper_AddDesignEvent_m2531 (Object_t * __this /* static, unused */, String_t* ___eventID, float ___eventValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventID;
		float L_1 = ___eventValue;
		GA_Wrapper_addDesignEventWithValue_m2557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddDesignEvent(System.String)
extern "C" void GA_Wrapper_AddDesignEvent_m2532 (Object_t * __this /* static, unused */, String_t* ___eventID, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventID;
		GA_Wrapper_addDesignEvent_m2556(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::AddErrorEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Wrapper_AddErrorEvent_m2533 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method)
{
	{
		int32_t L_0 = ___severity;
		String_t* L_1 = ___message;
		GA_Wrapper_addErrorEvent_m2558(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetInfoLog(System.Boolean)
extern "C" void GA_Wrapper_SetInfoLog_m2534 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		GA_Wrapper_setEnabledInfoLog_m2559(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetVerboseLog(System.Boolean)
extern "C" void GA_Wrapper_SetVerboseLog_m2535 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		GA_Wrapper_setEnabledVerboseLog_m2560(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetFacebookId(System.String)
extern "C" void GA_Wrapper_SetFacebookId_m2536 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___facebookId;
		GA_Wrapper_setFacebookId_m2561(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetGender(System.String)
extern "C" void GA_Wrapper_SetGender_m2537 (Object_t * __this /* static, unused */, String_t* ___gender, const MethodInfo* method)
{
	{
		String_t* L_0 = ___gender;
		GA_Wrapper_setGender_m2562(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::SetBirthYear(System.Int32)
extern "C" void GA_Wrapper_SetBirthYear_m2538 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method)
{
	{
		int32_t L_0 = ___birthYear;
		GA_Wrapper_setBirthYear_m2563(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions01(System.String)
extern "C" {void DEFAULT_CALL configureAvailableCustomDimensions01(char*);}
extern "C" void GA_Wrapper_configureAvailableCustomDimensions01_m2539 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureAvailableCustomDimensions01;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureAvailableCustomDimensions01'"));
		}
	}

	// Marshaling of parameter '___list' to native representation
	char* ____list_marshaled = { 0 };
	____list_marshaled = il2cpp_codegen_marshal_string(___list);

	// Native function invocation
	_il2cpp_pinvoke_func(____list_marshaled);

	// Marshaling cleanup of parameter '___list' native representation
	il2cpp_codegen_marshal_free(____list_marshaled);
	____list_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions02(System.String)
extern "C" {void DEFAULT_CALL configureAvailableCustomDimensions02(char*);}
extern "C" void GA_Wrapper_configureAvailableCustomDimensions02_m2540 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureAvailableCustomDimensions02;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureAvailableCustomDimensions02'"));
		}
	}

	// Marshaling of parameter '___list' to native representation
	char* ____list_marshaled = { 0 };
	____list_marshaled = il2cpp_codegen_marshal_string(___list);

	// Native function invocation
	_il2cpp_pinvoke_func(____list_marshaled);

	// Marshaling cleanup of parameter '___list' native representation
	il2cpp_codegen_marshal_free(____list_marshaled);
	____list_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableCustomDimensions03(System.String)
extern "C" {void DEFAULT_CALL configureAvailableCustomDimensions03(char*);}
extern "C" void GA_Wrapper_configureAvailableCustomDimensions03_m2541 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureAvailableCustomDimensions03;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureAvailableCustomDimensions03'"));
		}
	}

	// Marshaling of parameter '___list' to native representation
	char* ____list_marshaled = { 0 };
	____list_marshaled = il2cpp_codegen_marshal_string(___list);

	// Native function invocation
	_il2cpp_pinvoke_func(____list_marshaled);

	// Marshaling cleanup of parameter '___list' native representation
	il2cpp_codegen_marshal_free(____list_marshaled);
	____list_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableResourceCurrencies(System.String)
extern "C" {void DEFAULT_CALL configureAvailableResourceCurrencies(char*);}
extern "C" void GA_Wrapper_configureAvailableResourceCurrencies_m2542 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureAvailableResourceCurrencies;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureAvailableResourceCurrencies'"));
		}
	}

	// Marshaling of parameter '___list' to native representation
	char* ____list_marshaled = { 0 };
	____list_marshaled = il2cpp_codegen_marshal_string(___list);

	// Native function invocation
	_il2cpp_pinvoke_func(____list_marshaled);

	// Marshaling cleanup of parameter '___list' native representation
	il2cpp_codegen_marshal_free(____list_marshaled);
	____list_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureAvailableResourceItemTypes(System.String)
extern "C" {void DEFAULT_CALL configureAvailableResourceItemTypes(char*);}
extern "C" void GA_Wrapper_configureAvailableResourceItemTypes_m2543 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureAvailableResourceItemTypes;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureAvailableResourceItemTypes'"));
		}
	}

	// Marshaling of parameter '___list' to native representation
	char* ____list_marshaled = { 0 };
	____list_marshaled = il2cpp_codegen_marshal_string(___list);

	// Native function invocation
	_il2cpp_pinvoke_func(____list_marshaled);

	// Marshaling cleanup of parameter '___list' native representation
	il2cpp_codegen_marshal_free(____list_marshaled);
	____list_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureUnitySdkVersion(System.String)
extern "C" {void DEFAULT_CALL configureUnitySdkVersion(char*);}
extern "C" void GA_Wrapper_configureUnitySdkVersion_m2544 (Object_t * __this /* static, unused */, String_t* ___unitySdkVersion, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureUnitySdkVersion;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureUnitySdkVersion'"));
		}
	}

	// Marshaling of parameter '___unitySdkVersion' to native representation
	char* ____unitySdkVersion_marshaled = { 0 };
	____unitySdkVersion_marshaled = il2cpp_codegen_marshal_string(___unitySdkVersion);

	// Native function invocation
	_il2cpp_pinvoke_func(____unitySdkVersion_marshaled);

	// Marshaling cleanup of parameter '___unitySdkVersion' native representation
	il2cpp_codegen_marshal_free(____unitySdkVersion_marshaled);
	____unitySdkVersion_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureUnityEngineVersion(System.String)
extern "C" {void DEFAULT_CALL configureUnityEngineVersion(char*);}
extern "C" void GA_Wrapper_configureUnityEngineVersion_m2545 (Object_t * __this /* static, unused */, String_t* ___unityEngineVersion, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureUnityEngineVersion;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureUnityEngineVersion'"));
		}
	}

	// Marshaling of parameter '___unityEngineVersion' to native representation
	char* ____unityEngineVersion_marshaled = { 0 };
	____unityEngineVersion_marshaled = il2cpp_codegen_marshal_string(___unityEngineVersion);

	// Native function invocation
	_il2cpp_pinvoke_func(____unityEngineVersion_marshaled);

	// Marshaling cleanup of parameter '___unityEngineVersion' native representation
	il2cpp_codegen_marshal_free(____unityEngineVersion_marshaled);
	____unityEngineVersion_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::configureBuild(System.String)
extern "C" {void DEFAULT_CALL configureBuild(char*);}
extern "C" void GA_Wrapper_configureBuild_m2546 (Object_t * __this /* static, unused */, String_t* ___build, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)configureBuild;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'configureBuild'"));
		}
	}

	// Marshaling of parameter '___build' to native representation
	char* ____build_marshaled = { 0 };
	____build_marshaled = il2cpp_codegen_marshal_string(___build);

	// Native function invocation
	_il2cpp_pinvoke_func(____build_marshaled);

	// Marshaling cleanup of parameter '___build' native representation
	il2cpp_codegen_marshal_free(____build_marshaled);
	____build_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::initialize(System.String,System.String)
extern "C" {void DEFAULT_CALL initialize(char*, char*);}
extern "C" void GA_Wrapper_initialize_m2547 (Object_t * __this /* static, unused */, String_t* ___gamekey, String_t* ___gamesecret, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)initialize;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'initialize'"));
		}
	}

	// Marshaling of parameter '___gamekey' to native representation
	char* ____gamekey_marshaled = { 0 };
	____gamekey_marshaled = il2cpp_codegen_marshal_string(___gamekey);

	// Marshaling of parameter '___gamesecret' to native representation
	char* ____gamesecret_marshaled = { 0 };
	____gamesecret_marshaled = il2cpp_codegen_marshal_string(___gamesecret);

	// Native function invocation
	_il2cpp_pinvoke_func(____gamekey_marshaled, ____gamesecret_marshaled);

	// Marshaling cleanup of parameter '___gamekey' native representation
	il2cpp_codegen_marshal_free(____gamekey_marshaled);
	____gamekey_marshaled = NULL;

	// Marshaling cleanup of parameter '___gamesecret' native representation
	il2cpp_codegen_marshal_free(____gamesecret_marshaled);
	____gamesecret_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension01(System.String)
extern "C" {void DEFAULT_CALL setCustomDimension01(char*);}
extern "C" void GA_Wrapper_setCustomDimension01_m2548 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setCustomDimension01;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setCustomDimension01'"));
		}
	}

	// Marshaling of parameter '___customDimension' to native representation
	char* ____customDimension_marshaled = { 0 };
	____customDimension_marshaled = il2cpp_codegen_marshal_string(___customDimension);

	// Native function invocation
	_il2cpp_pinvoke_func(____customDimension_marshaled);

	// Marshaling cleanup of parameter '___customDimension' native representation
	il2cpp_codegen_marshal_free(____customDimension_marshaled);
	____customDimension_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension02(System.String)
extern "C" {void DEFAULT_CALL setCustomDimension02(char*);}
extern "C" void GA_Wrapper_setCustomDimension02_m2549 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setCustomDimension02;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setCustomDimension02'"));
		}
	}

	// Marshaling of parameter '___customDimension' to native representation
	char* ____customDimension_marshaled = { 0 };
	____customDimension_marshaled = il2cpp_codegen_marshal_string(___customDimension);

	// Native function invocation
	_il2cpp_pinvoke_func(____customDimension_marshaled);

	// Marshaling cleanup of parameter '___customDimension' native representation
	il2cpp_codegen_marshal_free(____customDimension_marshaled);
	____customDimension_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setCustomDimension03(System.String)
extern "C" {void DEFAULT_CALL setCustomDimension03(char*);}
extern "C" void GA_Wrapper_setCustomDimension03_m2550 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setCustomDimension03;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setCustomDimension03'"));
		}
	}

	// Marshaling of parameter '___customDimension' to native representation
	char* ____customDimension_marshaled = { 0 };
	____customDimension_marshaled = il2cpp_codegen_marshal_string(___customDimension);

	// Native function invocation
	_il2cpp_pinvoke_func(____customDimension_marshaled);

	// Marshaling cleanup of parameter '___customDimension' native representation
	il2cpp_codegen_marshal_free(____customDimension_marshaled);
	____customDimension_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addBusinessEvent(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL addBusinessEvent(char*, int32_t, char*, char*, char*, char*);}
extern "C" void GA_Wrapper_addBusinessEvent_m2551 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addBusinessEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addBusinessEvent'"));
		}
	}

	// Marshaling of parameter '___currency' to native representation
	char* ____currency_marshaled = { 0 };
	____currency_marshaled = il2cpp_codegen_marshal_string(___currency);

	// Marshaling of parameter '___amount' to native representation

	// Marshaling of parameter '___itemType' to native representation
	char* ____itemType_marshaled = { 0 };
	____itemType_marshaled = il2cpp_codegen_marshal_string(___itemType);

	// Marshaling of parameter '___itemId' to native representation
	char* ____itemId_marshaled = { 0 };
	____itemId_marshaled = il2cpp_codegen_marshal_string(___itemId);

	// Marshaling of parameter '___cartType' to native representation
	char* ____cartType_marshaled = { 0 };
	____cartType_marshaled = il2cpp_codegen_marshal_string(___cartType);

	// Marshaling of parameter '___receipt' to native representation
	char* ____receipt_marshaled = { 0 };
	____receipt_marshaled = il2cpp_codegen_marshal_string(___receipt);

	// Native function invocation
	_il2cpp_pinvoke_func(____currency_marshaled, ___amount, ____itemType_marshaled, ____itemId_marshaled, ____cartType_marshaled, ____receipt_marshaled);

	// Marshaling cleanup of parameter '___currency' native representation
	il2cpp_codegen_marshal_free(____currency_marshaled);
	____currency_marshaled = NULL;

	// Marshaling cleanup of parameter '___amount' native representation

	// Marshaling cleanup of parameter '___itemType' native representation
	il2cpp_codegen_marshal_free(____itemType_marshaled);
	____itemType_marshaled = NULL;

	// Marshaling cleanup of parameter '___itemId' native representation
	il2cpp_codegen_marshal_free(____itemId_marshaled);
	____itemId_marshaled = NULL;

	// Marshaling cleanup of parameter '___cartType' native representation
	il2cpp_codegen_marshal_free(____cartType_marshaled);
	____cartType_marshaled = NULL;

	// Marshaling cleanup of parameter '___receipt' native representation
	il2cpp_codegen_marshal_free(____receipt_marshaled);
	____receipt_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addBusinessEventAndAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL addBusinessEventAndAutoFetchReceipt(char*, int32_t, char*, char*, char*);}
extern "C" void GA_Wrapper_addBusinessEventAndAutoFetchReceipt_m2552 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addBusinessEventAndAutoFetchReceipt;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addBusinessEventAndAutoFetchReceipt'"));
		}
	}

	// Marshaling of parameter '___currency' to native representation
	char* ____currency_marshaled = { 0 };
	____currency_marshaled = il2cpp_codegen_marshal_string(___currency);

	// Marshaling of parameter '___amount' to native representation

	// Marshaling of parameter '___itemType' to native representation
	char* ____itemType_marshaled = { 0 };
	____itemType_marshaled = il2cpp_codegen_marshal_string(___itemType);

	// Marshaling of parameter '___itemId' to native representation
	char* ____itemId_marshaled = { 0 };
	____itemId_marshaled = il2cpp_codegen_marshal_string(___itemId);

	// Marshaling of parameter '___cartType' to native representation
	char* ____cartType_marshaled = { 0 };
	____cartType_marshaled = il2cpp_codegen_marshal_string(___cartType);

	// Native function invocation
	_il2cpp_pinvoke_func(____currency_marshaled, ___amount, ____itemType_marshaled, ____itemId_marshaled, ____cartType_marshaled);

	// Marshaling cleanup of parameter '___currency' native representation
	il2cpp_codegen_marshal_free(____currency_marshaled);
	____currency_marshaled = NULL;

	// Marshaling cleanup of parameter '___amount' native representation

	// Marshaling cleanup of parameter '___itemType' native representation
	il2cpp_codegen_marshal_free(____itemType_marshaled);
	____itemType_marshaled = NULL;

	// Marshaling cleanup of parameter '___itemId' native representation
	il2cpp_codegen_marshal_free(____itemId_marshaled);
	____itemId_marshaled = NULL;

	// Marshaling cleanup of parameter '___cartType' native representation
	il2cpp_codegen_marshal_free(____cartType_marshaled);
	____cartType_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addResourceEvent(System.Int32,System.String,System.Single,System.String,System.String)
extern "C" {void DEFAULT_CALL addResourceEvent(int32_t, char*, float, char*, char*);}
extern "C" void GA_Wrapper_addResourceEvent_m2553 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, float, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addResourceEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addResourceEvent'"));
		}
	}

	// Marshaling of parameter '___flowType' to native representation

	// Marshaling of parameter '___currency' to native representation
	char* ____currency_marshaled = { 0 };
	____currency_marshaled = il2cpp_codegen_marshal_string(___currency);

	// Marshaling of parameter '___amount' to native representation

	// Marshaling of parameter '___itemType' to native representation
	char* ____itemType_marshaled = { 0 };
	____itemType_marshaled = il2cpp_codegen_marshal_string(___itemType);

	// Marshaling of parameter '___itemId' to native representation
	char* ____itemId_marshaled = { 0 };
	____itemId_marshaled = il2cpp_codegen_marshal_string(___itemId);

	// Native function invocation
	_il2cpp_pinvoke_func(___flowType, ____currency_marshaled, ___amount, ____itemType_marshaled, ____itemId_marshaled);

	// Marshaling cleanup of parameter '___flowType' native representation

	// Marshaling cleanup of parameter '___currency' native representation
	il2cpp_codegen_marshal_free(____currency_marshaled);
	____currency_marshaled = NULL;

	// Marshaling cleanup of parameter '___amount' native representation

	// Marshaling cleanup of parameter '___itemType' native representation
	il2cpp_codegen_marshal_free(____itemType_marshaled);
	____itemType_marshaled = NULL;

	// Marshaling cleanup of parameter '___itemId' native representation
	il2cpp_codegen_marshal_free(____itemId_marshaled);
	____itemId_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addProgressionEvent(System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL addProgressionEvent(int32_t, char*, char*, char*);}
extern "C" void GA_Wrapper_addProgressionEvent_m2554 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addProgressionEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addProgressionEvent'"));
		}
	}

	// Marshaling of parameter '___progressionStatus' to native representation

	// Marshaling of parameter '___progression01' to native representation
	char* ____progression01_marshaled = { 0 };
	____progression01_marshaled = il2cpp_codegen_marshal_string(___progression01);

	// Marshaling of parameter '___progression02' to native representation
	char* ____progression02_marshaled = { 0 };
	____progression02_marshaled = il2cpp_codegen_marshal_string(___progression02);

	// Marshaling of parameter '___progression03' to native representation
	char* ____progression03_marshaled = { 0 };
	____progression03_marshaled = il2cpp_codegen_marshal_string(___progression03);

	// Native function invocation
	_il2cpp_pinvoke_func(___progressionStatus, ____progression01_marshaled, ____progression02_marshaled, ____progression03_marshaled);

	// Marshaling cleanup of parameter '___progressionStatus' native representation

	// Marshaling cleanup of parameter '___progression01' native representation
	il2cpp_codegen_marshal_free(____progression01_marshaled);
	____progression01_marshaled = NULL;

	// Marshaling cleanup of parameter '___progression02' native representation
	il2cpp_codegen_marshal_free(____progression02_marshaled);
	____progression02_marshaled = NULL;

	// Marshaling cleanup of parameter '___progression03' native representation
	il2cpp_codegen_marshal_free(____progression03_marshaled);
	____progression03_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addProgressionEventWithScore(System.Int32,System.String,System.String,System.String,System.Int32)
extern "C" {void DEFAULT_CALL addProgressionEventWithScore(int32_t, char*, char*, char*, int32_t);}
extern "C" void GA_Wrapper_addProgressionEventWithScore_m2555 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addProgressionEventWithScore;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addProgressionEventWithScore'"));
		}
	}

	// Marshaling of parameter '___progressionStatus' to native representation

	// Marshaling of parameter '___progression01' to native representation
	char* ____progression01_marshaled = { 0 };
	____progression01_marshaled = il2cpp_codegen_marshal_string(___progression01);

	// Marshaling of parameter '___progression02' to native representation
	char* ____progression02_marshaled = { 0 };
	____progression02_marshaled = il2cpp_codegen_marshal_string(___progression02);

	// Marshaling of parameter '___progression03' to native representation
	char* ____progression03_marshaled = { 0 };
	____progression03_marshaled = il2cpp_codegen_marshal_string(___progression03);

	// Marshaling of parameter '___score' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___progressionStatus, ____progression01_marshaled, ____progression02_marshaled, ____progression03_marshaled, ___score);

	// Marshaling cleanup of parameter '___progressionStatus' native representation

	// Marshaling cleanup of parameter '___progression01' native representation
	il2cpp_codegen_marshal_free(____progression01_marshaled);
	____progression01_marshaled = NULL;

	// Marshaling cleanup of parameter '___progression02' native representation
	il2cpp_codegen_marshal_free(____progression02_marshaled);
	____progression02_marshaled = NULL;

	// Marshaling cleanup of parameter '___progression03' native representation
	il2cpp_codegen_marshal_free(____progression03_marshaled);
	____progression03_marshaled = NULL;

	// Marshaling cleanup of parameter '___score' native representation

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addDesignEvent(System.String)
extern "C" {void DEFAULT_CALL addDesignEvent(char*);}
extern "C" void GA_Wrapper_addDesignEvent_m2556 (Object_t * __this /* static, unused */, String_t* ___eventId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addDesignEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addDesignEvent'"));
		}
	}

	// Marshaling of parameter '___eventId' to native representation
	char* ____eventId_marshaled = { 0 };
	____eventId_marshaled = il2cpp_codegen_marshal_string(___eventId);

	// Native function invocation
	_il2cpp_pinvoke_func(____eventId_marshaled);

	// Marshaling cleanup of parameter '___eventId' native representation
	il2cpp_codegen_marshal_free(____eventId_marshaled);
	____eventId_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addDesignEventWithValue(System.String,System.Single)
extern "C" {void DEFAULT_CALL addDesignEventWithValue(char*, float);}
extern "C" void GA_Wrapper_addDesignEventWithValue_m2557 (Object_t * __this /* static, unused */, String_t* ___eventId, float ___value, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addDesignEventWithValue;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addDesignEventWithValue'"));
		}
	}

	// Marshaling of parameter '___eventId' to native representation
	char* ____eventId_marshaled = { 0 };
	____eventId_marshaled = il2cpp_codegen_marshal_string(___eventId);

	// Marshaling of parameter '___value' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____eventId_marshaled, ___value);

	// Marshaling cleanup of parameter '___eventId' native representation
	il2cpp_codegen_marshal_free(____eventId_marshaled);
	____eventId_marshaled = NULL;

	// Marshaling cleanup of parameter '___value' native representation

}
// System.Void GameAnalyticsSDK.GA_Wrapper::addErrorEvent(System.Int32,System.String)
extern "C" {void DEFAULT_CALL addErrorEvent(int32_t, char*);}
extern "C" void GA_Wrapper_addErrorEvent_m2558 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)addErrorEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'addErrorEvent'"));
		}
	}

	// Marshaling of parameter '___severity' to native representation

	// Marshaling of parameter '___message' to native representation
	char* ____message_marshaled = { 0 };
	____message_marshaled = il2cpp_codegen_marshal_string(___message);

	// Native function invocation
	_il2cpp_pinvoke_func(___severity, ____message_marshaled);

	// Marshaling cleanup of parameter '___severity' native representation

	// Marshaling cleanup of parameter '___message' native representation
	il2cpp_codegen_marshal_free(____message_marshaled);
	____message_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setEnabledInfoLog(System.Boolean)
extern "C" {void DEFAULT_CALL setEnabledInfoLog(int32_t);}
extern "C" void GA_Wrapper_setEnabledInfoLog_m2559 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setEnabledInfoLog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setEnabledInfoLog'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setEnabledVerboseLog(System.Boolean)
extern "C" {void DEFAULT_CALL setEnabledVerboseLog(int32_t);}
extern "C" void GA_Wrapper_setEnabledVerboseLog_m2560 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setEnabledVerboseLog;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setEnabledVerboseLog'"));
		}
	}

	// Marshaling of parameter '___enabled' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___enabled);

	// Marshaling cleanup of parameter '___enabled' native representation

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setFacebookId(System.String)
extern "C" {void DEFAULT_CALL setFacebookId(char*);}
extern "C" void GA_Wrapper_setFacebookId_m2561 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setFacebookId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setFacebookId'"));
		}
	}

	// Marshaling of parameter '___facebookId' to native representation
	char* ____facebookId_marshaled = { 0 };
	____facebookId_marshaled = il2cpp_codegen_marshal_string(___facebookId);

	// Native function invocation
	_il2cpp_pinvoke_func(____facebookId_marshaled);

	// Marshaling cleanup of parameter '___facebookId' native representation
	il2cpp_codegen_marshal_free(____facebookId_marshaled);
	____facebookId_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setGender(System.String)
extern "C" {void DEFAULT_CALL setGender(char*);}
extern "C" void GA_Wrapper_setGender_m2562 (Object_t * __this /* static, unused */, String_t* ___gender, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setGender;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setGender'"));
		}
	}

	// Marshaling of parameter '___gender' to native representation
	char* ____gender_marshaled = { 0 };
	____gender_marshaled = il2cpp_codegen_marshal_string(___gender);

	// Native function invocation
	_il2cpp_pinvoke_func(____gender_marshaled);

	// Marshaling cleanup of parameter '___gender' native representation
	il2cpp_codegen_marshal_free(____gender_marshaled);
	____gender_marshaled = NULL;

}
// System.Void GameAnalyticsSDK.GA_Wrapper::setBirthYear(System.Int32)
extern "C" {void DEFAULT_CALL setBirthYear(int32_t);}
extern "C" void GA_Wrapper_setBirthYear_m2563 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)setBirthYear;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'setBirthYear'"));
		}
	}

	// Marshaling of parameter '___birthYear' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___birthYear);

	// Marshaling cleanup of parameter '___birthYear' native representation

}
// GameAnalyticsSDK.GA_Business
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Business.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Business
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_BusinessMethodDeclarations.h"



// System.Void GameAnalyticsSDK.GA_Business::NewEvent(System.String,System.Int32,System.String,System.String,System.String,System.String,System.Boolean)
extern "C" void GA_Business_NewEvent_m2564 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, bool ___autoFetchReceipt, const MethodInfo* method)
{
	{
		bool L_0 = ___autoFetchReceipt;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = ___currency;
		int32_t L_2 = ___amount;
		String_t* L_3 = ___itemType;
		String_t* L_4 = ___itemId;
		String_t* L_5 = ___cartType;
		GA_Wrapper_AddBusinessEventAndAutoFetchReceipt_m2527(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_0017:
	{
		String_t* L_6 = ___currency;
		int32_t L_7 = ___amount;
		String_t* L_8 = ___itemType;
		String_t* L_9 = ___itemId;
		String_t* L_10 = ___cartType;
		String_t* L_11 = ___receipt;
		GA_Wrapper_AddBusinessEvent_m2526(NULL /*static, unused*/, L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Business::NewEvent(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GA_Business_NewEvent_m2565 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		GA_Business_NewEvent_m2564(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (String_t*)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ContinuationManager_Ed.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ContinuationManager_EdMethodDeclarations.h"

// System.Func`1<System.Boolean>
#include "System_Core_System_Func_1_gen.h"
// System.Action
#include "System_Core_System_Action.h"


// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::.ctor(System.Collections.IEnumerator,System.Func`1<System.Boolean>)
extern "C" void EditorCoroutine__ctor_m2566 (EditorCoroutine_t459 * __this, Object_t * ___routine, Func_1_t458 * ___done, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___routine;
		EditorCoroutine_set_Routine_m2568(__this, L_0, /*hidden argument*/NULL);
		Func_1_t458 * L_1 = ___done;
		EditorCoroutine_set_Done_m2570(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_Routine()
extern "C" Object_t * EditorCoroutine_get_Routine_m2567 (EditorCoroutine_t459 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CRoutineU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_Routine(System.Collections.IEnumerator)
extern "C" void EditorCoroutine_set_Routine_m2568 (EditorCoroutine_t459 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CRoutineU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Func`1<System.Boolean> GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_Done()
extern "C" Func_1_t458 * EditorCoroutine_get_Done_m2569 (EditorCoroutine_t459 * __this, const MethodInfo* method)
{
	{
		Func_1_t458 * L_0 = (__this->___U3CDoneU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_Done(System.Func`1<System.Boolean>)
extern "C" void EditorCoroutine_set_Done_m2570 (EditorCoroutine_t459 * __this, Func_1_t458 * ___value, const MethodInfo* method)
{
	{
		Func_1_t458 * L_0 = ___value;
		__this->___U3CDoneU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Action GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::get_ContinueWith()
extern "C" Action_t143 * EditorCoroutine_get_ContinueWith_m2571 (EditorCoroutine_t459 * __this, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = (__this->___U3CContinueWithU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.GA_ContinuationManager/EditorCoroutine::set_ContinueWith(System.Action)
extern "C" void EditorCoroutine_set_ContinueWith_m2572 (EditorCoroutine_t459 * __this, Action_t143 * ___value, const MethodInfo* method)
{
	{
		Action_t143 * L_0 = ___value;
		__this->___U3CContinueWithU3Ek__BackingField_2 = L_0;
		return;
	}
}
// GameAnalyticsSDK.GA_ContinuationManager
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ContinuationManager.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_ContinuationManager
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ContinuationManagerMethodDeclarations.h"



// GameAnalyticsSDK.GA_Debug
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Debug.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Debug
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_DebugMethodDeclarations.h"

// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"
// GameAnalyticsSDK.Settings
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings.h"
// GameAnalyticsSDK.GameAnalytics
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GameAnalyticsMethodDeclarations.h"
// GameAnalyticsSDK.GA_Error
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ErrorMethodDeclarations.h"


// System.Void GameAnalyticsSDK.GA_Debug::.cctor()
extern TypeInfo* GA_Debug_t461_il2cpp_TypeInfo_var;
extern "C" void GA_Debug__cctor_m2573 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_Debug_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->___MaxErrorCount_0 = ((int32_t)10);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Debug::HandleLog(System.String,System.String,UnityEngine.LogType)
extern TypeInfo* GA_Debug_t461_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3705_MethodInfo_var;
extern "C" void GA_Debug_HandleLog_m2574 (Object_t * __this /* static, unused */, String_t* ___logString, String_t* ___stackTrace, int32_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_Debug_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		List_1__ctor_m3705_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		bool L_0 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->____showLogOnGUI_2;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		List_1_t115 * L_1 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->___Messages_3;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t115 * L_2 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_2, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->___Messages_3 = L_2;
	}

IL_001e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		List_1_t115 * L_3 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->___Messages_3;
		String_t* L_4 = ___logString;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_3, L_4);
	}

IL_0029:
	{
		Settings_t478 * L_5 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = (L_5->___SubmitErrors_73);
		if (!L_6)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		int32_t L_7 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->____errorCount_1;
		int32_t L_8 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->___MaxErrorCount_0;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_9 = ___type;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		int32_t L_10 = ((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->____errorCount_1;
		((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->____errorCount_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		String_t* L_11 = ___logString;
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m4127(L_11, ((int32_t)34), ((int32_t)39), /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = String_Replace_m4127(L_12, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = String_Replace_m4127(L_13, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15 = ___stackTrace;
		NullCheck(L_15);
		String_t* L_16 = String_Replace_m4127(L_15, ((int32_t)34), ((int32_t)39), /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = String_Replace_m4127(L_16, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = String_Replace_m4127(L_17, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = V_0;
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m455(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral944, L_20, /*hidden argument*/NULL);
		int32_t L_22 = ___type;
		GA_Debug_SubmitError_m2575(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Debug::SubmitError(System.String,UnityEngine.LogType)
extern "C" void GA_Debug_SubmitError_m2575 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___type, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = 2;
		int32_t L_0 = ___type;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (L_1 == 0)
		{
			goto IL_002a;
		}
		if (L_1 == 1)
		{
			goto IL_0023;
		}
		if (L_1 == 2)
		{
			goto IL_003f;
		}
		if (L_1 == 3)
		{
			goto IL_0038;
		}
		if (L_1 == 4)
		{
			goto IL_0031;
		}
	}
	{
		goto IL_0046;
	}

IL_0023:
	{
		V_0 = 2;
		goto IL_0046;
	}

IL_002a:
	{
		V_0 = 4;
		goto IL_0046;
	}

IL_0031:
	{
		V_0 = 5;
		goto IL_0046;
	}

IL_0038:
	{
		V_0 = 1;
		goto IL_0046;
	}

IL_003f:
	{
		V_0 = 3;
		goto IL_0046;
	}

IL_0046:
	{
		int32_t L_2 = V_0;
		String_t* L_3 = ___message;
		GA_Error_NewEvent_m2580(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Debug::EnabledLog()
extern TypeInfo* GA_Debug_t461_il2cpp_TypeInfo_var;
extern "C" void GA_Debug_EnabledLog_m2576 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_Debug_t461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(435);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_Debug_t461_il2cpp_TypeInfo_var);
		((GA_Debug_t461_StaticFields*)GA_Debug_t461_il2cpp_TypeInfo_var->static_fields)->____showLogOnGUI_2 = 1;
		return;
	}
}
// GameAnalyticsSDK.GA_Design
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Design.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Design
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_DesignMethodDeclarations.h"



// System.Void GameAnalyticsSDK.GA_Design::NewEvent(System.String,System.Single)
extern const MethodInfo* Nullable_1__ctor_m3891_MethodInfo_var;
extern "C" void GA_Design_NewEvent_m2577 (Object_t * __this /* static, unused */, String_t* ___eventName, float ___eventValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1__ctor_m3891_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483920);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___eventName;
		float L_1 = ___eventValue;
		Nullable_1_t691  L_2 = {0};
		Nullable_1__ctor_m3891(&L_2, L_1, /*hidden argument*/Nullable_1__ctor_m3891_MethodInfo_var);
		GA_Design_CreateNewEvent_m2579(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Design::NewEvent(System.String)
extern TypeInfo* Nullable_1_t691_il2cpp_TypeInfo_var;
extern "C" void GA_Design_NewEvent_m2578 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t691_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(193);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t691  V_0 = {0};
	{
		String_t* L_0 = ___eventName;
		Initobj (Nullable_1_t691_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t691  L_1 = V_0;
		GA_Design_CreateNewEvent_m2579(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Design::CreateNewEvent(System.String,System.Nullable`1<System.Single>)
extern const MethodInfo* Nullable_1_get_HasValue_m4081_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4082_MethodInfo_var;
extern "C" void GA_Design_CreateNewEvent_m2579 (Object_t * __this /* static, unused */, String_t* ___eventName, Nullable_1_t691  ___eventValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_get_HasValue_m4081_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484093);
		Nullable_1_get_Value_m4082_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484094);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Nullable_1_get_HasValue_m4081((&___eventValue), /*hidden argument*/Nullable_1_get_HasValue_m4081_MethodInfo_var);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___eventName;
		float L_2 = Nullable_1_get_Value_m4082((&___eventValue), /*hidden argument*/Nullable_1_get_Value_m4082_MethodInfo_var);
		GA_Wrapper_AddDesignEvent_m2531(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001e:
	{
		String_t* L_3 = ___eventName;
		GA_Wrapper_AddDesignEvent_m2532(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Error/GAErrorSeverity
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error_GAErrorSeverityMethodDeclarations.h"



// GameAnalyticsSDK.GA_Error
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Error.h"
#ifndef _MSC_VER
#else
#endif



// System.Void GameAnalyticsSDK.GA_Error::NewEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Error_NewEvent_m2580 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method)
{
	{
		int32_t L_0 = ___severity;
		String_t* L_1 = ___message;
		GA_Error_CreateNewEvent_m2581(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Error::CreateNewEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GA_Error_CreateNewEvent_m2581 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method)
{
	{
		int32_t L_0 = ___severity;
		String_t* L_1 = ___message;
		GA_Wrapper_AddErrorEvent_m2533(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsSDK.GA_MiniJSON
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_MiniJSON.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_MiniJSON
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_MiniJSONMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.Single
#include "mscorlib_System_SingleMethodDeclarations.h"


// System.Void GameAnalyticsSDK.GA_MiniJSON::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GA_MiniJSON__ctor_m2582 (GA_MiniJSON_t465 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___lastErrorIndex_14 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___lastDecode_15 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_MiniJSON::.cctor()
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern "C" void GA_MiniJSON__cctor_m2583 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		GA_MiniJSON_t465 * L_0 = (GA_MiniJSON_t465 *)il2cpp_codegen_object_new (GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON__ctor_m2582(L_0, /*hidden argument*/NULL);
		((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13 = L_0;
		return;
	}
}
// System.Object GameAnalyticsSDK.GA_MiniJSON::JsonDecode(System.String)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern "C" Object_t * GA_MiniJSON_JsonDecode_m2584 (Object_t * __this /* static, unused */, String_t* ___json, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t697* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	Object_t * V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_0 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		String_t* L_1 = ___json;
		NullCheck(L_0);
		L_0->___lastDecode_15 = L_1;
		String_t* L_2 = ___json;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_3 = ___json;
		NullCheck(L_3);
		CharU5BU5D_t697* L_4 = String_ToCharArray_m3846(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		V_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_5 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		CharU5BU5D_t697* L_6 = V_0;
		NullCheck(L_5);
		Object_t * L_7 = GA_MiniJSON_ParseValue_m2591(L_5, L_6, (&V_1), (&V_2), /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_9 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_9);
		L_9->___lastErrorIndex_14 = (-1);
		goto IL_004d;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_10 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		L_10->___lastErrorIndex_14 = L_11;
	}

IL_004d:
	{
		Object_t * L_12 = V_3;
		return L_12;
	}

IL_004f:
	{
		return NULL;
	}
}
// System.String GameAnalyticsSDK.GA_MiniJSON::JsonEncode(System.Object)
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern "C" String_t* GA_MiniJSON_JsonEncode_m2585 (Object_t * __this /* static, unused */, Object_t * ___json, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	bool V_1 = false;
	String_t* G_B3_0 = {0};
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4128(L_0, ((int32_t)2000), /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_1 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		Object_t * L_2 = ___json;
		StringBuilder_t261 * L_3 = V_0;
		NullCheck(L_1);
		bool L_4 = GA_MiniJSON_SerializeValue_m2601(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		StringBuilder_t261 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_6);
		G_B3_0 = L_7;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::LastDecodeSuccessful()
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern "C" bool GA_MiniJSON_LastDecodeSuccessful_m2586 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_0 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___lastErrorIndex_14);
		return ((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::GetLastErrorIndex()
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern "C" int32_t GA_MiniJSON_GetLastErrorIndex_m2587 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_0 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___lastErrorIndex_14);
		return L_1;
	}
}
// System.String GameAnalyticsSDK.GA_MiniJSON::GetLastErrorSnippet()
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* GA_MiniJSON_GetLastErrorSnippet_m2588 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_0 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___lastErrorIndex_14);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_2;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_3 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_3);
		int32_t L_4 = (L_3->___lastErrorIndex_14);
		V_0 = ((int32_t)((int32_t)L_4-(int32_t)5));
		GA_MiniJSON_t465 * L_5 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_5);
		int32_t L_6 = (L_5->___lastErrorIndex_14);
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)((int32_t)15)));
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		V_0 = 0;
	}

IL_003a:
	{
		int32_t L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_9 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_9);
		String_t* L_10 = (L_9->___lastDecode_15);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m410(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_11)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_12 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_12);
		String_t* L_13 = (L_12->___lastDecode_15);
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m410(L_13, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_14-(int32_t)1));
	}

IL_0061:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		GA_MiniJSON_t465 * L_15 = ((GA_MiniJSON_t465_StaticFields*)GA_MiniJSON_t465_il2cpp_TypeInfo_var->static_fields)->___instance_13;
		NullCheck(L_15);
		String_t* L_16 = (L_15->___lastDecode_15);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		NullCheck(L_16);
		String_t* L_20 = String_Substring_m418(L_16, L_17, ((int32_t)((int32_t)((int32_t)((int32_t)L_18-(int32_t)L_19))+(int32_t)1)), /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Collections.Hashtable GameAnalyticsSDK.GA_MiniJSON::ParseObject(System.Char[],System.Int32&)
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern "C" Hashtable_t696 * GA_MiniJSON_ParseObject_m2589 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t696 * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = {0};
	bool V_4 = false;
	Object_t * V_5 = {0};
	{
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4129(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t697* L_1 = ___json;
		int32_t* L_2 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_1, L_2, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_0093;
	}

IL_0016:
	{
		CharU5BU5D_t697* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = GA_MiniJSON_LookAhead_m2596(__this, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (Hashtable_t696 *)NULL;
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t697* L_8 = ___json;
		int32_t* L_9 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_003d:
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_004f;
		}
	}
	{
		CharU5BU5D_t697* L_11 = ___json;
		int32_t* L_12 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_11, L_12, /*hidden argument*/NULL);
		Hashtable_t696 * L_13 = V_0;
		return L_13;
	}

IL_004f:
	{
		CharU5BU5D_t697* L_14 = ___json;
		int32_t* L_15 = ___index;
		String_t* L_16 = GA_MiniJSON_ParseString_m2592(__this, L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = V_3;
		if (L_17)
		{
			goto IL_0060;
		}
	}
	{
		return (Hashtable_t696 *)NULL;
	}

IL_0060:
	{
		CharU5BU5D_t697* L_18 = ___json;
		int32_t* L_19 = ___index;
		int32_t L_20 = GA_MiniJSON_NextToken_m2597(__this, L_18, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) == ((int32_t)5)))
		{
			goto IL_0072;
		}
	}
	{
		return (Hashtable_t696 *)NULL;
	}

IL_0072:
	{
		V_4 = 1;
		CharU5BU5D_t697* L_22 = ___json;
		int32_t* L_23 = ___index;
		Object_t * L_24 = GA_MiniJSON_ParseValue_m2591(__this, L_22, L_23, (&V_4), /*hidden argument*/NULL);
		V_5 = L_24;
		bool L_25 = V_4;
		if (L_25)
		{
			goto IL_008a;
		}
	}
	{
		return (Hashtable_t696 *)NULL;
	}

IL_008a:
	{
		Hashtable_t696 * L_26 = V_0;
		String_t* L_27 = V_3;
		Object_t * L_28 = V_5;
		NullCheck(L_26);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_26, L_27, L_28);
	}

IL_0093:
	{
		bool L_29 = V_2;
		if (!L_29)
		{
			goto IL_0016;
		}
	}
	{
		Hashtable_t696 * L_30 = V_0;
		return L_30;
	}
}
// System.Collections.ArrayList GameAnalyticsSDK.GA_MiniJSON::ParseArray(System.Char[],System.Int32&)
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern "C" ArrayList_t698 * GA_MiniJSON_ParseArray_m2590 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t698 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Object_t * V_4 = {0};
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4130(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t697* L_1 = ___json;
		int32_t* L_2 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_0071;
	}

IL_0016:
	{
		CharU5BU5D_t697* L_3 = ___json;
		int32_t* L_4 = ___index;
		int32_t L_5 = GA_MiniJSON_LookAhead_m2596(__this, L_3, (*((int32_t*)L_4)), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return (ArrayList_t698 *)NULL;
	}

IL_0028:
	{
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)6))))
		{
			goto IL_003d;
		}
	}
	{
		CharU5BU5D_t697* L_8 = ___json;
		int32_t* L_9 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0071;
	}

IL_003d:
	{
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)4))))
		{
			goto IL_0052;
		}
	}
	{
		CharU5BU5D_t697* L_11 = ___json;
		int32_t* L_12 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_11, L_12, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0052:
	{
		V_3 = 1;
		CharU5BU5D_t697* L_13 = ___json;
		int32_t* L_14 = ___index;
		Object_t * L_15 = GA_MiniJSON_ParseValue_m2591(__this, L_13, L_14, (&V_3), /*hidden argument*/NULL);
		V_4 = L_15;
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0068;
		}
	}
	{
		return (ArrayList_t698 *)NULL;
	}

IL_0068:
	{
		ArrayList_t698 * L_17 = V_0;
		Object_t * L_18 = V_4;
		NullCheck(L_17);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_17, L_18);
	}

IL_0071:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0016;
		}
	}

IL_0077:
	{
		ArrayList_t698 * L_20 = V_0;
		return L_20;
	}
}
// System.Object GameAnalyticsSDK.GA_MiniJSON::ParseValue(System.Char[],System.Int32&,System.Boolean&)
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern "C" Object_t * GA_MiniJSON_ParseValue_m2591 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t697* L_0 = ___json;
		int32_t* L_1 = ___index;
		int32_t L_2 = GA_MiniJSON_LookAhead_m2596(__this, L_0, (*((int32_t*)L_1)), /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3 == 0)
		{
			goto IL_00ab;
		}
		if (L_3 == 1)
		{
			goto IL_005c;
		}
		if (L_3 == 2)
		{
			goto IL_00b0;
		}
		if (L_3 == 3)
		{
			goto IL_0065;
		}
		if (L_3 == 4)
		{
			goto IL_00b0;
		}
		if (L_3 == 5)
		{
			goto IL_00b0;
		}
		if (L_3 == 6)
		{
			goto IL_00b0;
		}
		if (L_3 == 7)
		{
			goto IL_0045;
		}
		if (L_3 == 8)
		{
			goto IL_004e;
		}
		if (L_3 == 9)
		{
			goto IL_006e;
		}
		if (L_3 == 10)
		{
			goto IL_0087;
		}
		if (L_3 == 11)
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00b0;
	}

IL_0045:
	{
		CharU5BU5D_t697* L_4 = ___json;
		int32_t* L_5 = ___index;
		String_t* L_6 = GA_MiniJSON_ParseString_m2592(__this, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004e:
	{
		CharU5BU5D_t697* L_7 = ___json;
		int32_t* L_8 = ___index;
		float L_9 = GA_MiniJSON_ParseNumber_m2593(__this, L_7, L_8, /*hidden argument*/NULL);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t87_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_005c:
	{
		CharU5BU5D_t697* L_12 = ___json;
		int32_t* L_13 = ___index;
		Hashtable_t696 * L_14 = GA_MiniJSON_ParseObject_m2589(__this, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0065:
	{
		CharU5BU5D_t697* L_15 = ___json;
		int32_t* L_16 = ___index;
		ArrayList_t698 * L_17 = GA_MiniJSON_ParseArray_m2590(__this, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_006e:
	{
		CharU5BU5D_t697* L_18 = ___json;
		int32_t* L_19 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t59_il2cpp_TypeInfo_var);
		bool L_20 = Boolean_Parse_m4131(NULL /*static, unused*/, (String_t*) &_stringLiteral945, /*hidden argument*/NULL);
		bool L_21 = L_20;
		Object_t * L_22 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_21);
		return L_22;
	}

IL_0087:
	{
		CharU5BU5D_t697* L_23 = ___json;
		int32_t* L_24 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t59_il2cpp_TypeInfo_var);
		bool L_25 = Boolean_Parse_m4131(NULL /*static, unused*/, (String_t*) &_stringLiteral946, /*hidden argument*/NULL);
		bool L_26 = L_25;
		Object_t * L_27 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_26);
		return L_27;
	}

IL_00a0:
	{
		CharU5BU5D_t697* L_28 = ___json;
		int32_t* L_29 = ___index;
		GA_MiniJSON_NextToken_m2597(__this, L_28, L_29, /*hidden argument*/NULL);
		return NULL;
	}

IL_00ab:
	{
		goto IL_00b0;
	}

IL_00b0:
	{
		bool* L_30 = ___success;
		*((int8_t*)(L_30)) = (int8_t)0;
		return NULL;
	}
}
// System.String GameAnalyticsSDK.GA_MiniJSON::ParseString(System.Char[],System.Int32&)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t697_il2cpp_TypeInfo_var;
extern "C" String_t* GA_MiniJSON_ParseString_m2592 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		CharU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	bool V_2 = false;
	int32_t V_3 = 0;
	CharU5BU5D_t697* V_4 = {0};
	int32_t V_5 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		CharU5BU5D_t697* L_1 = ___json;
		int32_t* L_2 = ___index;
		GA_MiniJSON_EatWhitespace_m2595(__this, L_1, L_2, /*hidden argument*/NULL);
		CharU5BU5D_t697* L_3 = ___json;
		int32_t* L_4 = ___index;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*((int32_t*)L_4)));
		int32_t L_5 = (*((int32_t*)L_4));
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		int32_t* L_6 = ___index;
		int32_t* L_7 = ___index;
		*((int32_t*)(L_6)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_7))+(int32_t)1));
		V_2 = 0;
		goto IL_01bd;
	}

IL_0020:
	{
		int32_t* L_8 = ___index;
		CharU5BU5D_t697* L_9 = ___json;
		NullCheck(L_9);
		if ((!(((uint32_t)(*((int32_t*)L_8))) == ((uint32_t)(((int32_t)(((Array_t *)L_9)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		goto IL_01c3;
	}

IL_002f:
	{
		CharU5BU5D_t697* L_10 = ___json;
		int32_t* L_11 = ___index;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, (*((int32_t*)L_11)));
		int32_t L_12 = (*((int32_t*)L_11));
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_12));
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))+(int32_t)1));
		uint16_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0049;
		}
	}
	{
		V_2 = 1;
		goto IL_01c3;
	}

IL_0049:
	{
		uint16_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_01af;
		}
	}
	{
		int32_t* L_17 = ___index;
		CharU5BU5D_t697* L_18 = ___json;
		NullCheck(L_18);
		if ((!(((uint32_t)(*((int32_t*)L_17))) == ((uint32_t)(((int32_t)(((Array_t *)L_18)->max_length)))))))
		{
			goto IL_0060;
		}
	}
	{
		goto IL_01c3;
	}

IL_0060:
	{
		CharU5BU5D_t697* L_19 = ___json;
		int32_t* L_20 = ___index;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, (*((int32_t*)L_20)));
		int32_t L_21 = (*((int32_t*)L_20));
		V_1 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_19, L_21));
		int32_t* L_22 = ___index;
		int32_t* L_23 = ___index;
		*((int32_t*)(L_22)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_23))+(int32_t)1));
		uint16_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0086;
		}
	}
	{
		String_t* L_25 = V_0;
		uint16_t L_26 = ((int32_t)34);
		Object_t * L_27 = Box(Char_t60_il2cpp_TypeInfo_var, &L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m409(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_01aa;
	}

IL_0086:
	{
		uint16_t L_29 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_30 = V_0;
		uint16_t L_31 = ((int32_t)92);
		Object_t * L_32 = Box(Char_t60_il2cpp_TypeInfo_var, &L_31);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m409(NULL /*static, unused*/, L_30, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		goto IL_01aa;
	}

IL_00a1:
	{
		uint16_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_35 = V_0;
		uint16_t L_36 = ((int32_t)47);
		Object_t * L_37 = Box(Char_t60_il2cpp_TypeInfo_var, &L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m409(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_01aa;
	}

IL_00bc:
	{
		uint16_t L_39 = V_1;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00d6;
		}
	}
	{
		String_t* L_40 = V_0;
		uint16_t L_41 = 8;
		Object_t * L_42 = Box(Char_t60_il2cpp_TypeInfo_var, &L_41);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m409(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		V_0 = L_43;
		goto IL_01aa;
	}

IL_00d6:
	{
		uint16_t L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_45 = V_0;
		uint16_t L_46 = ((int32_t)12);
		Object_t * L_47 = Box(Char_t60_il2cpp_TypeInfo_var, &L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m409(NULL /*static, unused*/, L_45, L_47, /*hidden argument*/NULL);
		V_0 = L_48;
		goto IL_01aa;
	}

IL_00f1:
	{
		uint16_t L_49 = V_1;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_010c;
		}
	}
	{
		String_t* L_50 = V_0;
		uint16_t L_51 = ((int32_t)10);
		Object_t * L_52 = Box(Char_t60_il2cpp_TypeInfo_var, &L_51);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_53 = String_Concat_m409(NULL /*static, unused*/, L_50, L_52, /*hidden argument*/NULL);
		V_0 = L_53;
		goto IL_01aa;
	}

IL_010c:
	{
		uint16_t L_54 = V_1;
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0127;
		}
	}
	{
		String_t* L_55 = V_0;
		uint16_t L_56 = ((int32_t)13);
		Object_t * L_57 = Box(Char_t60_il2cpp_TypeInfo_var, &L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m409(NULL /*static, unused*/, L_55, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		goto IL_01aa;
	}

IL_0127:
	{
		uint16_t L_59 = V_1;
		if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_60 = V_0;
		uint16_t L_61 = ((int32_t)9);
		Object_t * L_62 = Box(Char_t60_il2cpp_TypeInfo_var, &L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m409(NULL /*static, unused*/, L_60, L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		goto IL_01aa;
	}

IL_0142:
	{
		uint16_t L_64 = V_1;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01aa;
		}
	}
	{
		CharU5BU5D_t697* L_65 = ___json;
		NullCheck(L_65);
		int32_t* L_66 = ___index;
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_65)->max_length)))-(int32_t)(*((int32_t*)L_66))));
		int32_t L_67 = V_3;
		if ((((int32_t)L_67) < ((int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_4 = ((CharU5BU5D_t697*)SZArrayNew(CharU5BU5D_t697_il2cpp_TypeInfo_var, 4));
		V_5 = 0;
		goto IL_017a;
	}

IL_0168:
	{
		CharU5BU5D_t697* L_68 = V_4;
		int32_t L_69 = V_5;
		CharU5BU5D_t697* L_70 = ___json;
		int32_t* L_71 = ___index;
		int32_t L_72 = V_5;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)((int32_t)(*((int32_t*)L_71))+(int32_t)L_72)));
		int32_t L_73 = ((int32_t)((int32_t)(*((int32_t*)L_71))+(int32_t)L_72));
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_69);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_68, L_69)) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_70, L_73));
		int32_t L_74 = V_5;
		V_5 = ((int32_t)((int32_t)L_74+(int32_t)1));
	}

IL_017a:
	{
		int32_t L_75 = V_5;
		if ((((int32_t)L_75) < ((int32_t)4)))
		{
			goto IL_0168;
		}
	}
	{
		String_t* L_76 = V_0;
		CharU5BU5D_t697* L_77 = V_4;
		String_t* L_78 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_78 = String_CreateString_m3979(L_78, L_77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_79 = String_Concat_m384(NULL /*static, unused*/, L_76, (String_t*) &_stringLiteral947, L_78, (String_t*) &_stringLiteral948, /*hidden argument*/NULL);
		V_0 = L_79;
		int32_t* L_80 = ___index;
		int32_t* L_81 = ___index;
		*((int32_t*)(L_80)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_81))+(int32_t)4));
		goto IL_01aa;
	}

IL_01a5:
	{
		goto IL_01c3;
	}

IL_01aa:
	{
		goto IL_01bd;
	}

IL_01af:
	{
		String_t* L_82 = V_0;
		String_t* L_83 = Char_ToString_m4132((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Concat_m408(NULL /*static, unused*/, L_82, L_83, /*hidden argument*/NULL);
		V_0 = L_84;
	}

IL_01bd:
	{
		bool L_85 = V_2;
		if (!L_85)
		{
			goto IL_0020;
		}
	}

IL_01c3:
	{
		bool L_86 = V_2;
		if (L_86)
		{
			goto IL_01cb;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_01cb:
	{
		String_t* L_87 = V_0;
		return L_87;
	}
}
// System.Single GameAnalyticsSDK.GA_MiniJSON::ParseNumber(System.Char[],System.Int32&)
extern TypeInfo* CharU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" float GA_MiniJSON_ParseNumber_m2593 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CharU5BU5D_t697* V_2 = {0};
	int32_t V_3 = 0;
	{
		CharU5BU5D_t697* L_0 = ___json;
		int32_t* L_1 = ___index;
		GA_MiniJSON_EatWhitespace_m2595(__this, L_0, L_1, /*hidden argument*/NULL);
		CharU5BU5D_t697* L_2 = ___json;
		int32_t* L_3 = ___index;
		int32_t L_4 = GA_MiniJSON_GetLastIndexOfNumber_m2594(__this, L_2, (*((int32_t*)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t* L_6 = ___index;
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)L_5-(int32_t)(*((int32_t*)L_6))))+(int32_t)1));
		int32_t L_7 = V_1;
		V_2 = ((CharU5BU5D_t697*)SZArrayNew(CharU5BU5D_t697_il2cpp_TypeInfo_var, L_7));
		V_3 = 0;
		goto IL_0034;
	}

IL_0027:
	{
		CharU5BU5D_t697* L_8 = V_2;
		int32_t L_9 = V_3;
		CharU5BU5D_t697* L_10 = ___json;
		int32_t* L_11 = ___index;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)L_12)));
		int32_t L_13 = ((int32_t)((int32_t)(*((int32_t*)L_11))+(int32_t)L_12));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, L_9)) = (uint16_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_10, L_13));
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_17 = ___index;
		int32_t L_18 = V_0;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)((int32_t)L_18+(int32_t)1));
		CharU5BU5D_t697* L_19 = V_2;
		String_t* L_20 = (String_t*)il2cpp_codegen_object_new (String_t_il2cpp_TypeInfo_var);
		L_20 = String_CreateString_m3979(L_20, L_19, /*hidden argument*/NULL);
		float L_21 = Single_Parse_m4133(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::GetLastIndexOfNumber(System.Char[],System.Int32)
extern "C" int32_t GA_MiniJSON_GetLastIndexOfNumber_m2594 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		goto IL_0023;
	}

IL_0007:
	{
		CharU5BU5D_t697* L_1 = ___json;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((String_t*) &_stringLiteral949);
		int32_t L_4 = String_IndexOf_m3840((String_t*) &_stringLiteral949, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_1, L_3)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002c;
	}

IL_001f:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		CharU5BU5D_t697* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0007;
		}
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		return ((int32_t)((int32_t)L_8-(int32_t)1));
	}
}
// System.Void GameAnalyticsSDK.GA_MiniJSON::EatWhitespace(System.Char[],System.Int32&)
extern "C" void GA_MiniJSON_EatWhitespace_m2595 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	{
		goto IL_0024;
	}

IL_0005:
	{
		CharU5BU5D_t697* L_0 = ___json;
		int32_t* L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, (*((int32_t*)L_1)));
		int32_t L_2 = (*((int32_t*)L_1));
		NullCheck((String_t*) &_stringLiteral502);
		int32_t L_3 = String_IndexOf_m3840((String_t*) &_stringLiteral502, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		goto IL_002e;
	}

IL_001e:
	{
		int32_t* L_4 = ___index;
		int32_t* L_5 = ___index;
		*((int32_t*)(L_4)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_5))+(int32_t)1));
	}

IL_0024:
	{
		int32_t* L_6 = ___index;
		CharU5BU5D_t697* L_7 = ___json;
		NullCheck(L_7);
		if ((((int32_t)(*((int32_t*)L_6))) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0005;
		}
	}

IL_002e:
	{
		return;
	}
}
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::LookAhead(System.Char[],System.Int32)
extern "C" int32_t GA_MiniJSON_LookAhead_m2596 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t ___index, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index;
		V_0 = L_0;
		CharU5BU5D_t697* L_1 = ___json;
		int32_t L_2 = GA_MiniJSON_NextToken_m2597(__this, L_1, (&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 GameAnalyticsSDK.GA_MiniJSON::NextToken(System.Char[],System.Int32&)
extern "C" int32_t GA_MiniJSON_NextToken_m2597 (GA_MiniJSON_t465 * __this, CharU5BU5D_t697* ___json, int32_t* ___index, const MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	{
		CharU5BU5D_t697* L_0 = ___json;
		int32_t* L_1 = ___index;
		GA_MiniJSON_EatWhitespace_m2595(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t* L_2 = ___index;
		CharU5BU5D_t697* L_3 = ___json;
		NullCheck(L_3);
		if ((!(((uint32_t)(*((int32_t*)L_2))) == ((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		CharU5BU5D_t697* L_4 = ___json;
		int32_t* L_5 = ___index;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, (*((int32_t*)L_5)));
		int32_t L_6 = (*((int32_t*)L_5));
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_6));
		int32_t* L_7 = ___index;
		int32_t* L_8 = ___index;
		*((int32_t*)(L_7)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_8))+(int32_t)1));
		uint16_t L_9 = V_0;
		V_2 = L_9;
		uint16_t L_10 = V_2;
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 0)
		{
			goto IL_00c7;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 1)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 2)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 3)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 4)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 5)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 6)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 7)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 8)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 9)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 10)
		{
			goto IL_00c5;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 11)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 12)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 13)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 14)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 15)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 16)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 17)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 18)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 19)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 20)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 21)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 22)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 23)
		{
			goto IL_00c9;
		}
		if (((int32_t)((int32_t)L_10-(int32_t)((int32_t)34))) == 24)
		{
			goto IL_00cb;
		}
	}

IL_008e:
	{
		uint16_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 0)
		{
			goto IL_00c1;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 1)
		{
			goto IL_00a3;
		}
		if (((int32_t)((int32_t)L_11-(int32_t)((int32_t)91))) == 2)
		{
			goto IL_00c3;
		}
	}

IL_00a3:
	{
		uint16_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 0)
		{
			goto IL_00bd;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 1)
		{
			goto IL_00cd;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)123))) == 2)
		{
			goto IL_00bf;
		}
	}
	{
		goto IL_00cd;
	}

IL_00bd:
	{
		return 1;
	}

IL_00bf:
	{
		return 2;
	}

IL_00c1:
	{
		return 3;
	}

IL_00c3:
	{
		return 4;
	}

IL_00c5:
	{
		return 6;
	}

IL_00c7:
	{
		return 7;
	}

IL_00c9:
	{
		return 8;
	}

IL_00cb:
	{
		return 5;
	}

IL_00cd:
	{
		int32_t* L_13 = ___index;
		int32_t* L_14 = ___index;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_14))-(int32_t)1));
		CharU5BU5D_t697* L_15 = ___json;
		NullCheck(L_15);
		int32_t* L_16 = ___index;
		V_1 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_15)->max_length)))-(int32_t)(*((int32_t*)L_16))));
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) < ((int32_t)5)))
		{
			goto IL_0129;
		}
	}
	{
		CharU5BU5D_t697* L_18 = ___json;
		int32_t* L_19 = ___index;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, (*((int32_t*)L_19)));
		int32_t L_20 = (*((int32_t*)L_19));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_18, L_20))) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_0129;
		}
	}
	{
		CharU5BU5D_t697* L_21 = ___json;
		int32_t* L_22 = ___index;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1)));
		int32_t L_23 = ((int32_t)((int32_t)(*((int32_t*)L_22))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_21, L_23))) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0129;
		}
	}
	{
		CharU5BU5D_t697* L_24 = ___json;
		int32_t* L_25 = ___index;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2)));
		int32_t L_26 = ((int32_t)((int32_t)(*((int32_t*)L_25))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_24, L_26))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0129;
		}
	}
	{
		CharU5BU5D_t697* L_27 = ___json;
		int32_t* L_28 = ___index;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3)));
		int32_t L_29 = ((int32_t)((int32_t)(*((int32_t*)L_28))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_27, L_29))) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0129;
		}
	}
	{
		CharU5BU5D_t697* L_30 = ___json;
		int32_t* L_31 = ___index;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4)));
		int32_t L_32 = ((int32_t)((int32_t)(*((int32_t*)L_31))+(int32_t)4));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_30, L_32))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_0129;
		}
	}
	{
		int32_t* L_33 = ___index;
		int32_t* L_34 = ___index;
		*((int32_t*)(L_33)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_34))+(int32_t)5));
		return ((int32_t)10);
	}

IL_0129:
	{
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) < ((int32_t)4)))
		{
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t697* L_36 = ___json;
		int32_t* L_37 = ___index;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, (*((int32_t*)L_37)));
		int32_t L_38 = (*((int32_t*)L_37));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_36, L_38))) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t697* L_39 = ___json;
		int32_t* L_40 = ___index;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(*((int32_t*)L_40))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_39, L_41))) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t697* L_42 = ___json;
		int32_t* L_43 = ___index;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2)));
		int32_t L_44 = ((int32_t)((int32_t)(*((int32_t*)L_43))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_42, L_44))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t697* L_45 = ___json;
		int32_t* L_46 = ___index;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3)));
		int32_t L_47 = ((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_45, L_47))) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_016b;
		}
	}
	{
		int32_t* L_48 = ___index;
		int32_t* L_49 = ___index;
		*((int32_t*)(L_48)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_49))+(int32_t)4));
		return ((int32_t)9);
	}

IL_016b:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) < ((int32_t)4)))
		{
			goto IL_01ad;
		}
	}
	{
		CharU5BU5D_t697* L_51 = ___json;
		int32_t* L_52 = ___index;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, (*((int32_t*)L_52)));
		int32_t L_53 = (*((int32_t*)L_52));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_51, L_53))) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_01ad;
		}
	}
	{
		CharU5BU5D_t697* L_54 = ___json;
		int32_t* L_55 = ___index;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1)));
		int32_t L_56 = ((int32_t)((int32_t)(*((int32_t*)L_55))+(int32_t)1));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_54, L_56))) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_01ad;
		}
	}
	{
		CharU5BU5D_t697* L_57 = ___json;
		int32_t* L_58 = ___index;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2)));
		int32_t L_59 = ((int32_t)((int32_t)(*((int32_t*)L_58))+(int32_t)2));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_57, L_59))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ad;
		}
	}
	{
		CharU5BU5D_t697* L_60 = ___json;
		int32_t* L_61 = ___index;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3)));
		int32_t L_62 = ((int32_t)((int32_t)(*((int32_t*)L_61))+(int32_t)3));
		if ((!(((uint32_t)(*(uint16_t*)(uint16_t*)SZArrayLdElema(L_60, L_62))) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_01ad;
		}
	}
	{
		int32_t* L_63 = ___index;
		int32_t* L_64 = ___index;
		*((int32_t*)(L_63)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_64))+(int32_t)4));
		return ((int32_t)11);
	}

IL_01ad:
	{
		return 0;
	}
}
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeObjectOrArray(System.Object,System.Text.StringBuilder)
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern "C" bool GA_MiniJSON_SerializeObjectOrArray_m2598 (GA_MiniJSON_t465 * __this, Object_t * ___objectOrArray, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___objectOrArray;
		if (!((Hashtable_t696 *)IsInst(L_0, Hashtable_t696_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		Object_t * L_1 = ___objectOrArray;
		StringBuilder_t261 * L_2 = ___builder;
		bool L_3 = GA_MiniJSON_SerializeObject_m2599(__this, ((Hashtable_t696 *)Castclass(L_1, Hashtable_t696_il2cpp_TypeInfo_var)), L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		Object_t * L_4 = ___objectOrArray;
		if (!((ArrayList_t698 *)IsInst(L_4, ArrayList_t698_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		Object_t * L_5 = ___objectOrArray;
		StringBuilder_t261 * L_6 = ___builder;
		bool L_7 = GA_MiniJSON_SerializeArray_m2600(__this, ((ArrayList_t698 *)Castclass(L_5, ArrayList_t698_il2cpp_TypeInfo_var)), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0032:
	{
		return 0;
	}
}
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
extern TypeInfo* IDictionaryEnumerator_t784_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool GA_MiniJSON_SerializeObject_m2599 (GA_MiniJSON_t465 * __this, Hashtable_t696 * ___anObject, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	Object_t * V_3 = {0};
	{
		StringBuilder_t261 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3844(L_0, (String_t*) &_stringLiteral124, /*hidden argument*/NULL);
		Hashtable_t696 * L_1 = ___anObject;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_1);
		V_0 = L_2;
		V_1 = 1;
		goto IL_0064;
	}

IL_001a:
	{
		Object_t * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t784_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_2 = L_5;
		Object_t * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_t784_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t261 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3844(L_9, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_003f:
	{
		String_t* L_10 = V_2;
		StringBuilder_t261 * L_11 = ___builder;
		GA_MiniJSON_SerializeString_m2602(__this, L_10, L_11, /*hidden argument*/NULL);
		StringBuilder_t261 * L_12 = ___builder;
		NullCheck(L_12);
		StringBuilder_Append_m3844(L_12, (String_t*) &_stringLiteral610, /*hidden argument*/NULL);
		Object_t * L_13 = V_3;
		StringBuilder_t261 * L_14 = ___builder;
		bool L_15 = GA_MiniJSON_SerializeValue_m2601(__this, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0062;
		}
	}
	{
		return 0;
	}

IL_0062:
	{
		V_1 = 0;
	}

IL_0064:
	{
		Object_t * L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_16);
		if (L_17)
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t261 * L_18 = ___builder;
		NullCheck(L_18);
		StringBuilder_Append_m3844(L_18, (String_t*) &_stringLiteral127, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
extern "C" bool GA_MiniJSON_SerializeArray_m2600 (GA_MiniJSON_t465 * __this, ArrayList_t698 * ___anArray, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	{
		StringBuilder_t261 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3844(L_0, (String_t*) &_stringLiteral950, /*hidden argument*/NULL);
		V_0 = 1;
		V_1 = 0;
		goto IL_0044;
	}

IL_0015:
	{
		ArrayList_t698 * L_1 = ___anArray;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		StringBuilder_t261 * L_5 = ___builder;
		NullCheck(L_5);
		StringBuilder_Append_m3844(L_5, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_002f:
	{
		Object_t * L_6 = V_2;
		StringBuilder_t261 * L_7 = ___builder;
		bool L_8 = GA_MiniJSON_SerializeValue_m2601(__this, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		V_0 = 0;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_10 = V_1;
		ArrayList_t698 * L_11 = ___anArray;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t261 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3844(L_13, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean GameAnalyticsSDK.GA_MiniJSON::SerializeValue(System.Object,System.Text.StringBuilder)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern "C" bool GA_MiniJSON_SerializeValue_m2601 (GA_MiniJSON_t465 * __this, Object_t * ___value, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t261 * L_1 = ___builder;
		NullCheck(L_1);
		StringBuilder_Append_m3844(L_1, (String_t*) &_stringLiteral501, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0017:
	{
		Object_t * L_2 = ___value;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m4057(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_3);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		Object_t * L_5 = ___value;
		ArrayList_t698 * L_6 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4134(L_6, ((Object_t *)Castclass(L_5, ICollection_t754_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		StringBuilder_t261 * L_7 = ___builder;
		GA_MiniJSON_SerializeArray_m2600(__this, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_003f:
	{
		Object_t * L_8 = ___value;
		if (!((String_t*)IsInst(L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005c;
		}
	}
	{
		Object_t * L_9 = ___value;
		StringBuilder_t261 * L_10 = ___builder;
		GA_MiniJSON_SerializeString_m2602(__this, ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var)), L_10, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_005c:
	{
		Object_t * L_11 = ___value;
		if (!((Object_t *)IsInst(L_11, Char_t60_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		Object_t * L_12 = ___value;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		StringBuilder_t261 * L_14 = ___builder;
		GA_MiniJSON_SerializeString_m2602(__this, L_13, L_14, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0079:
	{
		Object_t * L_15 = ___value;
		if (!((Hashtable_t696 *)IsInst(L_15, Hashtable_t696_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		Object_t * L_16 = ___value;
		StringBuilder_t261 * L_17 = ___builder;
		GA_MiniJSON_SerializeObject_m2599(__this, ((Hashtable_t696 *)Castclass(L_16, Hashtable_t696_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0097:
	{
		Object_t * L_18 = ___value;
		if (!((ArrayList_t698 *)IsInst(L_18, ArrayList_t698_il2cpp_TypeInfo_var)))
		{
			goto IL_00b5;
		}
	}
	{
		Object_t * L_19 = ___value;
		StringBuilder_t261 * L_20 = ___builder;
		GA_MiniJSON_SerializeArray_m2600(__this, ((ArrayList_t698 *)Castclass(L_19, ArrayList_t698_il2cpp_TypeInfo_var)), L_20, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_00b5:
	{
		Object_t * L_21 = ___value;
		if (!((Object_t *)IsInst(L_21, Boolean_t59_il2cpp_TypeInfo_var)))
		{
			goto IL_00dc;
		}
	}
	{
		Object_t * L_22 = ___value;
		if (!((*(bool*)((bool*)UnBox (L_22, Boolean_t59_il2cpp_TypeInfo_var)))))
		{
			goto IL_00dc;
		}
	}
	{
		StringBuilder_t261 * L_23 = ___builder;
		NullCheck(L_23);
		StringBuilder_Append_m3844(L_23, (String_t*) &_stringLiteral105, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_00dc:
	{
		Object_t * L_24 = ___value;
		if (!((Object_t *)IsInst(L_24, Boolean_t59_il2cpp_TypeInfo_var)))
		{
			goto IL_0103;
		}
	}
	{
		Object_t * L_25 = ___value;
		if (((*(bool*)((bool*)UnBox (L_25, Boolean_t59_il2cpp_TypeInfo_var)))))
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t261 * L_26 = ___builder;
		NullCheck(L_26);
		StringBuilder_Append_m3844(L_26, (String_t*) &_stringLiteral106, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0103:
	{
		Object_t * L_27 = ___value;
		if (!((Object_t *)IsInst(L_27, Single_t87_il2cpp_TypeInfo_var)))
		{
			goto IL_0120;
		}
	}
	{
		Object_t * L_28 = ___value;
		StringBuilder_t261 * L_29 = ___builder;
		GA_MiniJSON_SerializeNumber_m2603(__this, ((*(float*)((float*)UnBox (L_28, Single_t87_il2cpp_TypeInfo_var)))), L_29, /*hidden argument*/NULL);
		goto IL_0122;
	}

IL_0120:
	{
		return 0;
	}

IL_0122:
	{
		return 1;
	}
}
// System.Void GameAnalyticsSDK.GA_MiniJSON::SerializeString(System.String,System.Text.StringBuilder)
extern "C" void GA_MiniJSON_SerializeString_m2602 (GA_MiniJSON_t465 * __this, String_t* ___aString, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	CharU5BU5D_t697* V_0 = {0};
	int32_t V_1 = 0;
	uint16_t V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t261 * L_0 = ___builder;
		NullCheck(L_0);
		StringBuilder_Append_m3844(L_0, (String_t*) &_stringLiteral125, /*hidden argument*/NULL);
		String_t* L_1 = ___aString;
		NullCheck(L_1);
		CharU5BU5D_t697* L_2 = String_ToCharArray_m3846(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00ea;
	}

IL_001a:
	{
		CharU5BU5D_t697* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_2 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_3, L_5));
		uint16_t L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t261 * L_7 = ___builder;
		NullCheck(L_7);
		StringBuilder_Append_m3844(L_7, (String_t*) &_stringLiteral109, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_0037:
	{
		uint16_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t261 * L_9 = ___builder;
		NullCheck(L_9);
		StringBuilder_Append_m3844(L_9, (String_t*) &_stringLiteral108, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_0050:
	{
		uint16_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t261 * L_11 = ___builder;
		NullCheck(L_11);
		StringBuilder_Append_m3844(L_11, (String_t*) &_stringLiteral113, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_0068:
	{
		uint16_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0081;
		}
	}
	{
		StringBuilder_t261 * L_13 = ___builder;
		NullCheck(L_13);
		StringBuilder_Append_m3844(L_13, (String_t*) &_stringLiteral114, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_0081:
	{
		uint16_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_009a;
		}
	}
	{
		StringBuilder_t261 * L_15 = ___builder;
		NullCheck(L_15);
		StringBuilder_Append_m3844(L_15, (String_t*) &_stringLiteral110, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_009a:
	{
		uint16_t L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t261 * L_17 = ___builder;
		NullCheck(L_17);
		StringBuilder_Append_m3844(L_17, (String_t*) &_stringLiteral111, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_00b3:
	{
		uint16_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_00cc;
		}
	}
	{
		StringBuilder_t261 * L_19 = ___builder;
		NullCheck(L_19);
		StringBuilder_Append_m3844(L_19, (String_t*) &_stringLiteral112, /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_00cc:
	{
		uint16_t L_20 = V_2;
		V_3 = L_20;
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)32))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_22 = V_3;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)126))))
		{
			goto IL_00e6;
		}
	}
	{
		StringBuilder_t261 * L_23 = ___builder;
		uint16_t L_24 = V_2;
		NullCheck(L_23);
		StringBuilder_Append_m3838(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00e6:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_00ea:
	{
		int32_t L_26 = V_1;
		CharU5BU5D_t697* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t261 * L_28 = ___builder;
		NullCheck(L_28);
		StringBuilder_Append_m3844(L_28, (String_t*) &_stringLiteral125, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_MiniJSON::SerializeNumber(System.Single,System.Text.StringBuilder)
extern "C" void GA_MiniJSON_SerializeNumber_m2603 (GA_MiniJSON_t465 * __this, float ___number, StringBuilder_t261 * ___builder, const MethodInfo* method)
{
	{
		StringBuilder_t261 * L_0 = ___builder;
		String_t* L_1 = Single_ToString_m401((&___number), /*hidden argument*/NULL);
		NullCheck(L_0);
		StringBuilder_Append_m3844(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Progression/GAProgressionStatus
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression_GAProgressMethodDeclarations.h"



// GameAnalyticsSDK.GA_Progression
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Progression.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Progression
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ProgressionMethodDeclarations.h"



// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String)
extern TypeInfo* Nullable_1_t690_il2cpp_TypeInfo_var;
extern "C" void GA_Progression_NewEvent_m2604 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t690  V_0 = {0};
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		Initobj (Nullable_1_t690_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t690  L_2 = V_0;
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, (String_t*)NULL, (String_t*)NULL, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String)
extern TypeInfo* Nullable_1_t690_il2cpp_TypeInfo_var;
extern "C" void GA_Progression_NewEvent_m2605 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t690  V_0 = {0};
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		Initobj (Nullable_1_t690_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t690  L_3 = V_0;
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, L_2, (String_t*)NULL, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String)
extern TypeInfo* Nullable_1_t690_il2cpp_TypeInfo_var;
extern "C" void GA_Progression_NewEvent_m2606 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_t690_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(189);
		s_Il2CppMethodIntialized = true;
	}
	Nullable_1_t690  V_0 = {0};
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		Initobj (Nullable_1_t690_il2cpp_TypeInfo_var, (&V_0));
		Nullable_1_t690  L_4 = V_0;
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.Int32)
extern const MethodInfo* Nullable_1__ctor_m3708_MethodInfo_var;
extern "C" void GA_Progression_NewEvent_m2607 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1__ctor_m3708_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		int32_t L_2 = ___score;
		Nullable_1_t690  L_3 = {0};
		Nullable_1__ctor_m3708(&L_3, L_2, /*hidden argument*/Nullable_1__ctor_m3708_MethodInfo_var);
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, (String_t*)NULL, (String_t*)NULL, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.Int32)
extern const MethodInfo* Nullable_1__ctor_m3708_MethodInfo_var;
extern "C" void GA_Progression_NewEvent_m2608 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1__ctor_m3708_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		int32_t L_3 = ___score;
		Nullable_1_t690  L_4 = {0};
		Nullable_1__ctor_m3708(&L_4, L_3, /*hidden argument*/Nullable_1__ctor_m3708_MethodInfo_var);
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, L_2, (String_t*)NULL, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::NewEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Int32)
extern const MethodInfo* Nullable_1__ctor_m3708_MethodInfo_var;
extern "C" void GA_Progression_NewEvent_m2609 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1__ctor_m3708_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483710);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		int32_t L_4 = ___score;
		Nullable_1_t690  L_5 = {0};
		Nullable_1__ctor_m3708(&L_5, L_4, /*hidden argument*/Nullable_1__ctor_m3708_MethodInfo_var);
		GA_Progression_CreateEvent_m2610(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Progression::CreateEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Nullable`1<System.Int32>)
extern const MethodInfo* Nullable_1_get_HasValue_m4068_MethodInfo_var;
extern const MethodInfo* Nullable_1_get_Value_m4069_MethodInfo_var;
extern "C" void GA_Progression_CreateEvent_m2610 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, Nullable_1_t690  ___score, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Nullable_1_get_HasValue_m4068_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484081);
		Nullable_1_get_Value_m4069_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484082);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Nullable_1_get_HasValue_m4068((&___score), /*hidden argument*/Nullable_1_get_HasValue_m4068_MethodInfo_var);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___progressionStatus;
		String_t* L_2 = ___progression01;
		String_t* L_3 = ___progression02;
		String_t* L_4 = ___progression03;
		int32_t L_5 = Nullable_1_get_Value_m4069((&___score), /*hidden argument*/Nullable_1_get_Value_m4069_MethodInfo_var);
		GA_Wrapper_AddProgressionEventWithScore_m2530(NULL /*static, unused*/, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0021:
	{
		int32_t L_6 = ___progressionStatus;
		String_t* L_7 = ___progression01;
		String_t* L_8 = ___progression02;
		String_t* L_9 = ___progression03;
		GA_Wrapper_AddProgressionEvent_m2529(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Resource/GAResourceFlowType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Resource_GAResourceFloMethodDeclarations.h"



// GameAnalyticsSDK.GA_Resource
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Resource.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Resource
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ResourceMethodDeclarations.h"



// System.Void GameAnalyticsSDK.GA_Resource::NewEvent(GameAnalyticsSDK.GA_Resource/GAResourceFlowType,System.String,System.Single,System.String,System.String)
extern "C" void GA_Resource_NewEvent_m2611 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___flowType;
		String_t* L_1 = ___currency;
		float L_2 = ___amount;
		String_t* L_3 = ___itemType;
		String_t* L_4 = ___itemId;
		GA_Wrapper_AddResourceEvent_m2528(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsSDK.GA_ServerFieldTypes/FieldType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ServerFieldTypes_Field.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_ServerFieldTypes/FieldType
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ServerFieldTypes_FieldMethodDeclarations.h"



// GameAnalyticsSDK.GA_ServerFieldTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ServerFieldTypes.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_ServerFieldTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_ServerFieldTypesMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21.h"
// System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_21MethodDeclarations.h"


// System.Void GameAnalyticsSDK.GA_ServerFieldTypes::.cctor()
extern TypeInfo* Dictionary_2_t471_il2cpp_TypeInfo_var;
extern TypeInfo* GA_ServerFieldTypes_t472_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4135_MethodInfo_var;
extern "C" void GA_ServerFieldTypes__cctor_m2612 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t471_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(441);
		GA_ServerFieldTypes_t472_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		Dictionary_2__ctor_m4135_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484110);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t471 * V_0 = {0};
	{
		Dictionary_2_t471 * L_0 = (Dictionary_2_t471 *)il2cpp_codegen_object_new (Dictionary_2_t471_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4135(L_0, /*hidden argument*/Dictionary_2__ctor_m4135_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t471 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_1, 0, (String_t*) &_stringLiteral810);
		Dictionary_2_t471 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_2, 1, (String_t*) &_stringLiteral951);
		Dictionary_2_t471 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_3, 2, (String_t*) &_stringLiteral952);
		Dictionary_2_t471 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_4, 3, (String_t*) &_stringLiteral953);
		Dictionary_2_t471 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_5, 4, (String_t*) &_stringLiteral954);
		Dictionary_2_t471 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_6, 5, (String_t*) &_stringLiteral955);
		Dictionary_2_t471 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_7, 6, (String_t*) &_stringLiteral956);
		Dictionary_2_t471 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_8, 7, (String_t*) &_stringLiteral957);
		Dictionary_2_t471 * L_9 = V_0;
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_9, 8, (String_t*) &_stringLiteral958);
		Dictionary_2_t471 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_10, ((int32_t)9), (String_t*) &_stringLiteral959);
		Dictionary_2_t471 * L_11 = V_0;
		NullCheck(L_11);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_11, ((int32_t)10), (String_t*) &_stringLiteral960);
		Dictionary_2_t471 * L_12 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_12, ((int32_t)11), (String_t*) &_stringLiteral961);
		Dictionary_2_t471 * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_13, ((int32_t)12), (String_t*) &_stringLiteral158);
		Dictionary_2_t471 * L_14 = V_0;
		NullCheck(L_14);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_14, ((int32_t)13), (String_t*) &_stringLiteral872);
		Dictionary_2_t471 * L_15 = V_0;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_15, ((int32_t)14), (String_t*) &_stringLiteral962);
		Dictionary_2_t471 * L_16 = V_0;
		NullCheck(L_16);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_16, ((int32_t)15), (String_t*) &_stringLiteral963);
		Dictionary_2_t471 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_17, ((int32_t)16), (String_t*) &_stringLiteral964);
		Dictionary_2_t471 * L_18 = V_0;
		NullCheck(L_18);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_18, ((int32_t)17), (String_t*) &_stringLiteral589);
		Dictionary_2_t471 * L_19 = V_0;
		NullCheck(L_19);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_19, ((int32_t)18), (String_t*) &_stringLiteral965);
		Dictionary_2_t471 * L_20 = V_0;
		NullCheck(L_20);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_20, ((int32_t)19), (String_t*) &_stringLiteral966);
		Dictionary_2_t471 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_21, ((int32_t)20), (String_t*) &_stringLiteral967);
		Dictionary_2_t471 * L_22 = V_0;
		NullCheck(L_22);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_22, ((int32_t)21), (String_t*) &_stringLiteral968);
		Dictionary_2_t471 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_23, ((int32_t)22), (String_t*) &_stringLiteral969);
		Dictionary_2_t471 * L_24 = V_0;
		NullCheck(L_24);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_24, ((int32_t)23), (String_t*) &_stringLiteral970);
		Dictionary_2_t471 * L_25 = V_0;
		NullCheck(L_25);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_25, ((int32_t)24), (String_t*) &_stringLiteral971);
		Dictionary_2_t471 * L_26 = V_0;
		NullCheck(L_26);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_26, ((int32_t)25), (String_t*) &_stringLiteral972);
		Dictionary_2_t471 * L_27 = V_0;
		NullCheck(L_27);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_27, ((int32_t)26), (String_t*) &_stringLiteral973);
		Dictionary_2_t471 * L_28 = V_0;
		NullCheck(L_28);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_28, ((int32_t)27), (String_t*) &_stringLiteral974);
		Dictionary_2_t471 * L_29 = V_0;
		NullCheck(L_29);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_29, ((int32_t)28), (String_t*) &_stringLiteral975);
		Dictionary_2_t471 * L_30 = V_0;
		NullCheck(L_30);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_30, ((int32_t)29), (String_t*) &_stringLiteral976);
		Dictionary_2_t471 * L_31 = V_0;
		NullCheck(L_31);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_31, ((int32_t)30), (String_t*) &_stringLiteral977);
		Dictionary_2_t471 * L_32 = V_0;
		NullCheck(L_32);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_32, ((int32_t)31), (String_t*) &_stringLiteral978);
		Dictionary_2_t471 * L_33 = V_0;
		NullCheck(L_33);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_33, ((int32_t)32), (String_t*) &_stringLiteral979);
		Dictionary_2_t471 * L_34 = V_0;
		NullCheck(L_34);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_34, ((int32_t)33), (String_t*) &_stringLiteral980);
		Dictionary_2_t471 * L_35 = V_0;
		NullCheck(L_35);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_35, ((int32_t)34), (String_t*) &_stringLiteral981);
		Dictionary_2_t471 * L_36 = V_0;
		NullCheck(L_36);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_36, ((int32_t)35), (String_t*) &_stringLiteral982);
		Dictionary_2_t471 * L_37 = V_0;
		NullCheck(L_37);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_37, ((int32_t)36), (String_t*) &_stringLiteral983);
		Dictionary_2_t471 * L_38 = V_0;
		NullCheck(L_38);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<GameAnalyticsSDK.GA_ServerFieldTypes/FieldType,System.String>::Add(!0,!1) */, L_38, ((int32_t)37), (String_t*) &_stringLiteral984);
		Dictionary_2_t471 * L_39 = V_0;
		((GA_ServerFieldTypes_t472_StaticFields*)GA_ServerFieldTypes_t472_il2cpp_TypeInfo_var->static_fields)->___Fields_0 = L_39;
		return;
	}
}
// GameAnalyticsSDK.GA_Setup/GAGender
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Setup_GAGender.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Setup/GAGender
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Setup_GAGenderMethodDeclarations.h"



// GameAnalyticsSDK.GA_Setup
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_Setup.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_Setup
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SetupMethodDeclarations.h"



// System.Void GameAnalyticsSDK.GA_Setup::SetAvailableCustomDimensions01(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3773_MethodInfo_var;
extern "C" void GA_Setup_SetAvailableCustomDimensions01_m2613 (Object_t * __this /* static, unused */, List_1_t115 * ___customDimensions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		List_1_ToArray_m3773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		List_1_t115 * L_0 = ___customDimensions;
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = List_1_ToArray_m3773(L_0, /*hidden argument*/List_1_ToArray_m3773_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		String_t* L_2 = GA_MiniJSON_JsonEncode_m2585(NULL /*static, unused*/, (Object_t *)(Object_t *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GA_Wrapper_SetAvailableCustomDimensions01_m2514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetAvailableCustomDimensions02(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3773_MethodInfo_var;
extern "C" void GA_Setup_SetAvailableCustomDimensions02_m2614 (Object_t * __this /* static, unused */, List_1_t115 * ___customDimensions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		List_1_ToArray_m3773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		List_1_t115 * L_0 = ___customDimensions;
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = List_1_ToArray_m3773(L_0, /*hidden argument*/List_1_ToArray_m3773_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		String_t* L_2 = GA_MiniJSON_JsonEncode_m2585(NULL /*static, unused*/, (Object_t *)(Object_t *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GA_Wrapper_SetAvailableCustomDimensions02_m2515(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetAvailableCustomDimensions03(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3773_MethodInfo_var;
extern "C" void GA_Setup_SetAvailableCustomDimensions03_m2615 (Object_t * __this /* static, unused */, List_1_t115 * ___customDimensions, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		List_1_ToArray_m3773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		List_1_t115 * L_0 = ___customDimensions;
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = List_1_ToArray_m3773(L_0, /*hidden argument*/List_1_ToArray_m3773_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		String_t* L_2 = GA_MiniJSON_JsonEncode_m2585(NULL /*static, unused*/, (Object_t *)(Object_t *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GA_Wrapper_SetAvailableCustomDimensions03_m2516(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetAvailableResourceCurrencies(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3773_MethodInfo_var;
extern "C" void GA_Setup_SetAvailableResourceCurrencies_m2616 (Object_t * __this /* static, unused */, List_1_t115 * ___resourceCurrencies, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		List_1_ToArray_m3773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		List_1_t115 * L_0 = ___resourceCurrencies;
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = List_1_ToArray_m3773(L_0, /*hidden argument*/List_1_ToArray_m3773_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		String_t* L_2 = GA_MiniJSON_JsonEncode_m2585(NULL /*static, unused*/, (Object_t *)(Object_t *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GA_Wrapper_SetAvailableResourceCurrencies_m2517(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetAvailableResourceItemTypes(System.Collections.Generic.List`1<System.String>)
extern TypeInfo* GA_MiniJSON_t465_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_ToArray_m3773_MethodInfo_var;
extern "C" void GA_Setup_SetAvailableResourceItemTypes_m2617 (Object_t * __this /* static, unused */, List_1_t115 * ___resourceItemTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_MiniJSON_t465_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		List_1_ToArray_m3773_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483772);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		List_1_t115 * L_0 = ___resourceItemTypes;
		NullCheck(L_0);
		StringU5BU5D_t75* L_1 = List_1_ToArray_m3773(L_0, /*hidden argument*/List_1_ToArray_m3773_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(GA_MiniJSON_t465_il2cpp_TypeInfo_var);
		String_t* L_2 = GA_MiniJSON_JsonEncode_m2585(NULL /*static, unused*/, (Object_t *)(Object_t *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		GA_Wrapper_SetAvailableResourceItemTypes_m2518(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetInfoLog(System.Boolean)
extern "C" void GA_Setup_SetInfoLog_m2618 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		GA_Wrapper_SetInfoLog_m2534(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetVerboseLog(System.Boolean)
extern "C" void GA_Setup_SetVerboseLog_m2619 (Object_t * __this /* static, unused */, bool ___enabled, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled;
		GA_Wrapper_SetVerboseLog_m2535(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetFacebookId(System.String)
extern "C" void GA_Setup_SetFacebookId_m2620 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___facebookId;
		GA_Wrapper_SetFacebookId_m2536(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetGender(GameAnalyticsSDK.GA_Setup/GAGender)
extern "C" void GA_Setup_SetGender_m2621 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___gender;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0033;
	}

IL_0015:
	{
		GA_Wrapper_SetGender_m2537(NULL /*static, unused*/, (String_t*) &_stringLiteral590, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0024:
	{
		GA_Wrapper_SetGender_m2537(NULL /*static, unused*/, (String_t*) &_stringLiteral985, /*hidden argument*/NULL);
		goto IL_0033;
	}

IL_0033:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetBirthYear(System.Int32)
extern "C" void GA_Setup_SetBirthYear_m2622 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method)
{
	{
		int32_t L_0 = ___birthYear;
		GA_Wrapper_SetBirthYear_m2538(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetCustomDimension01(System.String)
extern "C" void GA_Setup_SetCustomDimension01_m2623 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_SetCustomDimension01_m2523(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetCustomDimension02(System.String)
extern "C" void GA_Setup_SetCustomDimension02_m2624 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_SetCustomDimension02_m2524(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_Setup::SetCustomDimension03(System.String)
extern "C" void GA_Setup_SetCustomDimension03_m2625 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Wrapper_SetCustomDimension03_m2525(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEvents_U3CSubmi.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEvents_U3CSubmiMethodDeclarations.h"

// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSeconds.h"
// UnityEngine.WaitForSeconds
#include "UnityEngine_UnityEngine_WaitForSecondsMethodDeclarations.h"
// GameAnalyticsSDK.GA_SpecialEvents
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEventsMethodDeclarations.h"


// System.Void GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::.ctor()
extern "C" void U3CSubmitFPSRoutineU3Ec__IteratorF__ctor_m2626 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSubmitFPSRoutineU3Ec__IteratorF_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2627 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSubmitFPSRoutineU3Ec__IteratorF_System_Collections_IEnumerator_get_Current_m2628 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::MoveNext()
extern TypeInfo* WaitForSeconds_t785_il2cpp_TypeInfo_var;
extern TypeInfo* GA_SpecialEvents_t476_il2cpp_TypeInfo_var;
extern "C" bool U3CSubmitFPSRoutineU3Ec__IteratorF_MoveNext_m2629 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		GA_SpecialEvents_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
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
			goto IL_0042;
		}
	}
	{
		goto IL_0067;
	}

IL_0021:
	{
		goto IL_0047;
	}

IL_0026:
	{
		WaitForSeconds_t785 * L_2 = (WaitForSeconds_t785 *)il2cpp_codegen_object_new (WaitForSeconds_t785_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4136(L_2, (30.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0069;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		GA_SpecialEvents_SubmitFPS_m2644(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0047:
	{
		bool L_3 = Application_get_isPlaying_m4137(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		Settings_t478 * L_4 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = (L_4->___SubmitFpsAverage_75);
		if (L_5)
		{
			goto IL_0026;
		}
	}

IL_0060:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0067:
	{
		return 0;
	}

IL_0069:
	{
		return 1;
	}
	// Dead block : IL_006b: ldloc.1
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::Dispose()
extern "C" void U3CSubmitFPSRoutineU3Ec__IteratorF_Dispose_m2630 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents/<SubmitFPSRoutine>c__IteratorF::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CSubmitFPSRoutineU3Ec__IteratorF_Reset_m2631 (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * __this, const MethodInfo* method)
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
// GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEvents_U3CCheck.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEvents_U3CCheckMethodDeclarations.h"

// GameAnalyticsSDK.GA_SpecialEvents
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GA_SpecialEvents.h"


// System.Void GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::.ctor()
extern "C" void U3CCheckCriticalFPSRoutineU3Ec__Iterator10__ctor_m2632 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCheckCriticalFPSRoutineU3Ec__Iterator10_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2633 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCheckCriticalFPSRoutineU3Ec__Iterator10_System_Collections_IEnumerator_get_Current_m2634 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::MoveNext()
extern TypeInfo* WaitForSeconds_t785_il2cpp_TypeInfo_var;
extern "C" bool U3CCheckCriticalFPSRoutineU3Ec__Iterator10_MoveNext_m2635 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
			goto IL_0048;
		}
	}
	{
		goto IL_0073;
	}

IL_0021:
	{
		goto IL_0053;
	}

IL_0026:
	{
		Settings_t478 * L_2 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (L_2->___FpsCirticalSubmitInterval_78);
		WaitForSeconds_t785 * L_4 = (WaitForSeconds_t785 *)il2cpp_codegen_object_new (WaitForSeconds_t785_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4136(L_4, (((float)L_3)), /*hidden argument*/NULL);
		__this->___U24current_1 = L_4;
		__this->___U24PC_0 = 1;
		goto IL_0075;
	}

IL_0048:
	{
		GA_SpecialEvents_t476 * L_5 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_5);
		GA_SpecialEvents_CheckCriticalFPS_m2645(L_5, /*hidden argument*/NULL);
	}

IL_0053:
	{
		bool L_6 = Application_get_isPlaying_m4137(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006c;
		}
	}
	{
		Settings_t478 * L_7 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = (L_7->___SubmitFpsCritical_76);
		if (L_8)
		{
			goto IL_0026;
		}
	}

IL_006c:
	{
		__this->___U24PC_0 = (-1);
	}

IL_0073:
	{
		return 0;
	}

IL_0075:
	{
		return 1;
	}
	// Dead block : IL_0077: ldloc.1
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::Dispose()
extern "C" void U3CCheckCriticalFPSRoutineU3Ec__Iterator10_Dispose_m2636 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents/<CheckCriticalFPSRoutine>c__Iterator10::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CCheckCriticalFPSRoutineU3Ec__Iterator10_Reset_m2637 (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * __this, const MethodInfo* method)
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

// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"


// System.Void GameAnalyticsSDK.GA_SpecialEvents::.ctor()
extern "C" void GA_SpecialEvents__ctor_m2638 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents::.cctor()
extern "C" void GA_SpecialEvents__cctor_m2639 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents::Start()
extern "C" void GA_SpecialEvents_Start_m2640 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = GA_SpecialEvents_SubmitFPSRoutine_m2641(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3716(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = GA_SpecialEvents_CheckCriticalFPSRoutine_m2642(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3716(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameAnalyticsSDK.GA_SpecialEvents::SubmitFPSRoutine()
extern TypeInfo* U3CSubmitFPSRoutineU3Ec__IteratorF_t475_il2cpp_TypeInfo_var;
extern "C" Object_t * GA_SpecialEvents_SubmitFPSRoutine_m2641 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSubmitFPSRoutineU3Ec__IteratorF_t475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * V_0 = {0};
	{
		U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * L_0 = (U3CSubmitFPSRoutineU3Ec__IteratorF_t475 *)il2cpp_codegen_object_new (U3CSubmitFPSRoutineU3Ec__IteratorF_t475_il2cpp_TypeInfo_var);
		U3CSubmitFPSRoutineU3Ec__IteratorF__ctor_m2626(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSubmitFPSRoutineU3Ec__IteratorF_t475 * L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator GameAnalyticsSDK.GA_SpecialEvents::CheckCriticalFPSRoutine()
extern TypeInfo* U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477_il2cpp_TypeInfo_var;
extern "C" Object_t * GA_SpecialEvents_CheckCriticalFPSRoutine_m2642 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * V_0 = {0};
	{
		U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * L_0 = (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 *)il2cpp_codegen_object_new (U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477_il2cpp_TypeInfo_var);
		U3CCheckCriticalFPSRoutineU3Ec__Iterator10__ctor_m2632(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CCheckCriticalFPSRoutineU3Ec__Iterator10_t477 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents::Update()
extern TypeInfo* GA_SpecialEvents_t476_il2cpp_TypeInfo_var;
extern "C" void GA_SpecialEvents_Update_m2643 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_SpecialEvents_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	{
		Settings_t478 * L_0 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___SubmitFpsAverage_75);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		int32_t L_2 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____frameCountAvg_2;
		((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____frameCountAvg_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_001b:
	{
		Settings_t478 * L_3 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (L_3->___SubmitFpsCritical_76);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_5 = (__this->____frameCountCrit_4);
		__this->____frameCountCrit_4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0038:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents::SubmitFPS()
extern TypeInfo* GA_SpecialEvents_t476_il2cpp_TypeInfo_var;
extern "C" void GA_SpecialEvents_SubmitFPS_m2644 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_SpecialEvents_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Settings_t478 * L_0 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___SubmitFpsAverage_75);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		float L_2 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		float L_3 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____lastUpdateAvg_3;
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		int32_t L_5 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____frameCountAvg_2;
		float L_6 = V_0;
		V_1 = ((float)((float)(((float)L_5))/(float)L_6));
		float L_7 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____lastUpdateAvg_3 = L_7;
		((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____frameCountAvg_2 = 0;
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		float L_9 = V_1;
		GA_Design_NewEvent_m2577(NULL /*static, unused*/, (String_t*) &_stringLiteral986, (((float)(((int32_t)L_9)))), /*hidden argument*/NULL);
	}

IL_0057:
	{
		Settings_t478 * L_10 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11 = (L_10->___SubmitFpsCritical_76);
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		int32_t L_12 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____criticalFpsCount_6;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		int32_t L_13 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____criticalFpsCount_6;
		GA_Design_NewEvent_m2577(NULL /*static, unused*/, (String_t*) &_stringLiteral987, (((float)L_13)), /*hidden argument*/NULL);
		((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____criticalFpsCount_6 = 0;
	}

IL_0087:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GA_SpecialEvents::CheckCriticalFPS()
extern TypeInfo* GA_SpecialEvents_t476_il2cpp_TypeInfo_var;
extern "C" void GA_SpecialEvents_CheckCriticalFPS_m2645 (GA_SpecialEvents_t476 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GA_SpecialEvents_t476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(444);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Settings_t478 * L_0 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___SubmitFpsCritical_76);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		float L_2 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->____lastUpdateCrit_5);
		V_0 = ((float)((float)L_2-(float)L_3));
		float L_4 = V_0;
		if ((!(((float)L_4) >= ((float)(1.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_5 = (__this->____frameCountCrit_4);
		float L_6 = V_0;
		V_1 = ((float)((float)(((float)L_5))/(float)L_6));
		float L_7 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____lastUpdateCrit_5 = L_7;
		__this->____frameCountCrit_4 = 0;
		float L_8 = V_1;
		Settings_t478 * L_9 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = (L_9->___FpsCriticalThreshold_77);
		if ((!(((float)L_8) <= ((float)(((float)L_10))))))
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_t476_il2cpp_TypeInfo_var);
		int32_t L_11 = ((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____criticalFpsCount_6;
		((GA_SpecialEvents_t476_StaticFields*)GA_SpecialEvents_t476_il2cpp_TypeInfo_var->static_fields)->____criticalFpsCount_6 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0060:
	{
		return;
	}
}
// GameAnalyticsSDK.GameAnalytics
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GameAnalytics.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallback.h"
// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
// UnityEngine.Application/LogCallback
#include "UnityEngine_UnityEngine_Application_LogCallbackMethodDeclarations.h"
// GameAnalyticsSDK.Settings
#include "AssemblyU2DCSharp_GameAnalyticsSDK_SettingsMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void GameAnalyticsSDK.GameAnalytics::.ctor()
extern "C" void GameAnalytics__ctor_m2646 (GameAnalytics_t479 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameAnalyticsSDK.Settings GameAnalyticsSDK.GameAnalytics::get_SettingsGA()
extern TypeInfo* GameAnalytics_t479_il2cpp_TypeInfo_var;
extern "C" Settings_t478 * GameAnalytics_get_SettingsGA_m2647 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameAnalytics_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	{
		Settings_t478 * L_0 = ((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____settings_2;
		bool L_1 = Object_op_Equality_m3778(NULL /*static, unused*/, L_0, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		GameAnalytics_InitAPI_m2653(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0015:
	{
		Settings_t478 * L_2 = ((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____settings_2;
		return L_2;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::set_SettingsGA(GameAnalyticsSDK.Settings)
extern TypeInfo* GameAnalytics_t479_il2cpp_TypeInfo_var;
extern "C" void GameAnalytics_set_SettingsGA_m2648 (Object_t * __this /* static, unused */, Settings_t478 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameAnalytics_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	{
		Settings_t478 * L_0 = ___value;
		((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____settings_2 = L_0;
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::Awake()
extern TypeInfo* GameAnalytics_t479_il2cpp_TypeInfo_var;
extern TypeInfo* LogCallback_t54_il2cpp_TypeInfo_var;
extern const MethodInfo* GA_Debug_HandleLog_m2574_MethodInfo_var;
extern "C" void GameAnalytics_Awake_m2649 (GameAnalytics_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameAnalytics_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		LogCallback_t54_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		GA_Debug_HandleLog_m2574_MethodInfo_var = il2cpp_codegen_method_info_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m4137(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		GameAnalytics_t479 * L_1 = ((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____instance_3;
		bool L_2 = Object_op_Inequality_m3674(NULL /*static, unused*/, L_1, (Object_t703 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Debug_LogWarning_m389(NULL /*static, unused*/, (String_t*) &_stringLiteral988, /*hidden argument*/NULL);
		GameObject_t352 * L_3 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		Object_Destroy_m3897(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0031:
	{
		((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____instance_3 = __this;
		GameObject_t352 * L_4 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m385(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)GA_Debug_HandleLog_m2574_MethodInfo_var };
		LogCallback_t54 * L_6 = (LogCallback_t54 *)il2cpp_codegen_object_new (LogCallback_t54_il2cpp_TypeInfo_var);
		LogCallback__ctor_m380(L_6, NULL, L_5, /*hidden argument*/NULL);
		Application_add_logMessageReceived_m4139(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		GameAnalytics_Initialize_m2654(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::OnDestroy()
extern TypeInfo* GameAnalytics_t479_il2cpp_TypeInfo_var;
extern "C" void GameAnalytics_OnDestroy_m2650 (GameAnalytics_t479 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameAnalytics_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = Application_get_isPlaying_m4137(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		GameAnalytics_t479 * L_1 = ((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____instance_3;
		bool L_2 = Object_op_Equality_m3778(NULL /*static, unused*/, L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____instance_3 = (GameAnalytics_t479 *)NULL;
	}

IL_0021:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::OnApplicationPause(System.Boolean)
extern "C" void GameAnalytics_OnApplicationPause_m2651 (GameAnalytics_t479 * __this, bool ___pauseStatus, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::OnApplicationQuit()
extern "C" void GameAnalytics_OnApplicationQuit_m2652 (GameAnalytics_t479 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::InitAPI()
extern const Il2CppType* Settings_t478_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Settings_t478_il2cpp_TypeInfo_var;
extern TypeInfo* GameAnalytics_t479_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void GameAnalytics_InitAPI_m2653 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Settings_t478_0_0_0_var = il2cpp_codegen_type_from_index(448);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Settings_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		GameAnalytics_t479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4055(NULL /*static, unused*/, LoadTypeToken(Settings_t478_0_0_0_var), /*hidden argument*/NULL);
		Object_t703 * L_1 = Resources_Load_m4140(NULL /*static, unused*/, (String_t*) &_stringLiteral989, L_0, /*hidden argument*/NULL);
		((GameAnalytics_t479_StaticFields*)GameAnalytics_t479_il2cpp_TypeInfo_var->static_fields)->____settings_2 = ((Settings_t478 *)Castclass(L_1, Settings_t478_il2cpp_TypeInfo_var));
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral990, L_3, /*hidden argument*/NULL);
		Debug_Log_m382(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::Initialize()
extern TypeInfo* Settings_t478_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimePlatform_t786_il2cpp_TypeInfo_var;
extern "C" void GameAnalytics_Initialize_m2654 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Settings_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RuntimePlatform_t786_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		bool L_0 = Application_get_isPlaying_m4137(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		Settings_t478 * L_1 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (L_1->___InfoLogBuild_44);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		GA_Setup_SetInfoLog_m2618(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0020:
	{
		Settings_t478 * L_3 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (L_3->___VerboseLogBuild_45);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		GA_Setup_SetVerboseLog_m2619(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_5 = GameAnalytics_GetPlatform_m2675(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(Settings_t478_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Settings_t478_StaticFields*)Settings_t478_il2cpp_TypeInfo_var->static_fields)->___VERSION_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral991, L_6, /*hidden argument*/NULL);
		GA_Wrapper_SetUnitySdkVersion_m2519(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		String_t* L_8 = GameAnalytics_GetUnityVersion_m2674(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral991, L_8, /*hidden argument*/NULL);
		GA_Wrapper_SetUnityEngineVersion_m2520(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_11 = V_0;
		V_1 = L_11;
		Settings_t478 * L_12 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		StringU5BU5D_t75* L_13 = (L_12->___Build_19);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14-(int32_t)1)));
		int32_t L_15 = ((int32_t)((int32_t)L_14-(int32_t)1));
		GA_Wrapper_SetBuild_m2521(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_13, L_15)), /*hidden argument*/NULL);
	}

IL_007e:
	{
		Settings_t478 * L_16 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_t115 * L_17 = (L_16->___CustomDimensions01_48);
		NullCheck(L_17);
		int32_t L_18 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_17);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		Settings_t478 * L_19 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_t115 * L_20 = (L_19->___CustomDimensions01_48);
		GA_Setup_SetAvailableCustomDimensions01_m2613(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		Settings_t478 * L_21 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_t115 * L_22 = (L_21->___CustomDimensions02_49);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_22);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		Settings_t478 * L_24 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_t115 * L_25 = (L_24->___CustomDimensions02_49);
		GA_Setup_SetAvailableCustomDimensions02_m2614(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		Settings_t478 * L_26 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_t115 * L_27 = (L_26->___CustomDimensions03_50);
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_27);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		Settings_t478 * L_29 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_t115 * L_30 = (L_29->___CustomDimensions03_50);
		GA_Setup_SetAvailableCustomDimensions03_m2615(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		Settings_t478 * L_31 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_t115 * L_32 = (L_31->___ResourceItemTypes_51);
		NullCheck(L_32);
		int32_t L_33 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_32);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		Settings_t478 * L_34 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_34);
		List_1_t115 * L_35 = (L_34->___ResourceItemTypes_51);
		GA_Setup_SetAvailableResourceItemTypes_m2617(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
	}

IL_010e:
	{
		Settings_t478 * L_36 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_t115 * L_37 = (L_36->___ResourceCurrencies_52);
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.String>::get_Count() */, L_37);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_0132;
		}
	}
	{
		Settings_t478 * L_39 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_t115 * L_40 = (L_39->___ResourceCurrencies_52);
		GA_Setup_SetAvailableResourceCurrencies_m2616(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
	}

IL_0132:
	{
		int32_t L_41 = V_0;
		if (!L_41)
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_42 = V_0;
		V_2 = L_42;
		Settings_t478 * L_43 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_44 = V_2;
		NullCheck(L_43);
		String_t* L_45 = Settings_GetGameKey_m2686(L_43, ((int32_t)((int32_t)L_44-(int32_t)1)), /*hidden argument*/NULL);
		Settings_t478 * L_46 = GameAnalytics_get_SettingsGA_m2647(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_47 = V_2;
		NullCheck(L_46);
		String_t* L_48 = Settings_GetSecretKey_m2687(L_46, ((int32_t)((int32_t)L_47-(int32_t)1)), /*hidden argument*/NULL);
		GA_Wrapper_Initialize_m2522(NULL /*static, unused*/, L_45, L_48, /*hidden argument*/NULL);
		goto IL_0177;
	}

IL_015e:
	{
		int32_t L_49 = Application_get_platform_m3766(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_50 = L_49;
		Object_t * L_51 = Box(RuntimePlatform_t786_il2cpp_TypeInfo_var, &L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral992, L_51, /*hidden argument*/NULL);
		Debug_LogWarning_m389(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
	}

IL_0177:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEvent(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEvent_m2655 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		GA_Business_NewEvent_m2565(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEventIOS(System.String,System.Int32,System.String,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEventIOS_m2656 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, String_t* ___receipt, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		String_t* L_5 = ___receipt;
		GA_Business_NewEvent_m2564(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewBusinessEventIOSAutoFetchReceipt(System.String,System.Int32,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewBusinessEventIOSAutoFetchReceipt_m2657 (Object_t * __this /* static, unused */, String_t* ___currency, int32_t ___amount, String_t* ___itemType, String_t* ___itemId, String_t* ___cartType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___currency;
		int32_t L_1 = ___amount;
		String_t* L_2 = ___itemType;
		String_t* L_3 = ___itemId;
		String_t* L_4 = ___cartType;
		GA_Business_NewEvent_m2564(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (String_t*)NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String)
extern "C" void GameAnalytics_NewDesignEvent_m2658 (Object_t * __this /* static, unused */, String_t* ___eventName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		GA_Design_NewEvent_m2578(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String,System.Single)
extern "C" void GameAnalytics_NewDesignEvent_m2659 (Object_t * __this /* static, unused */, String_t* ___eventName, float ___eventValue, const MethodInfo* method)
{
	{
		String_t* L_0 = ___eventName;
		float L_1 = ___eventValue;
		GA_Design_NewEvent_m2577(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2660 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		GA_Progression_NewEvent_m2604(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2661 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		GA_Progression_NewEvent_m2605(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String)
extern "C" void GameAnalytics_NewProgressionEvent_m2662 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		GA_Progression_NewEvent_m2606(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2663 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		int32_t L_2 = ___score;
		GA_Progression_NewEvent_m2607(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2664 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		int32_t L_3 = ___score;
		GA_Progression_NewEvent_m2608(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GA_Progression/GAProgressionStatus,System.String,System.String,System.String,System.Int32)
extern "C" void GameAnalytics_NewProgressionEvent_m2665 (Object_t * __this /* static, unused */, int32_t ___progressionStatus, String_t* ___progression01, String_t* ___progression02, String_t* ___progression03, int32_t ___score, const MethodInfo* method)
{
	{
		int32_t L_0 = ___progressionStatus;
		String_t* L_1 = ___progression01;
		String_t* L_2 = ___progression02;
		String_t* L_3 = ___progression03;
		int32_t L_4 = ___score;
		GA_Progression_NewEvent_m2609(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewResourceEvent(GameAnalyticsSDK.GA_Resource/GAResourceFlowType,System.String,System.Single,System.String,System.String)
extern "C" void GameAnalytics_NewResourceEvent_m2666 (Object_t * __this /* static, unused */, int32_t ___flowType, String_t* ___currency, float ___amount, String_t* ___itemType, String_t* ___itemId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___flowType;
		String_t* L_1 = ___currency;
		float L_2 = ___amount;
		String_t* L_3 = ___itemType;
		String_t* L_4 = ___itemId;
		GA_Resource_NewEvent_m2611(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewErrorEvent(GameAnalyticsSDK.GA_Error/GAErrorSeverity,System.String)
extern "C" void GameAnalytics_NewErrorEvent_m2667 (Object_t * __this /* static, unused */, int32_t ___severity, String_t* ___message, const MethodInfo* method)
{
	{
		int32_t L_0 = ___severity;
		String_t* L_1 = ___message;
		GA_Error_NewEvent_m2580(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetFacebookId(System.String)
extern "C" void GameAnalytics_SetFacebookId_m2668 (Object_t * __this /* static, unused */, String_t* ___facebookId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___facebookId;
		GA_Setup_SetFacebookId_m2620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetGender(GameAnalyticsSDK.GA_Setup/GAGender)
extern "C" void GameAnalytics_SetGender_m2669 (Object_t * __this /* static, unused */, int32_t ___gender, const MethodInfo* method)
{
	{
		int32_t L_0 = ___gender;
		GA_Setup_SetGender_m2621(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetBirthYear(System.Int32)
extern "C" void GameAnalytics_SetBirthYear_m2670 (Object_t * __this /* static, unused */, int32_t ___birthYear, const MethodInfo* method)
{
	{
		int32_t L_0 = ___birthYear;
		GA_Setup_SetBirthYear_m2622(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension01(System.String)
extern "C" void GameAnalytics_SetCustomDimension01_m2671 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Setup_SetCustomDimension01_m2623(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension02(System.String)
extern "C" void GameAnalytics_SetCustomDimension02_m2672 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Setup_SetCustomDimension02_m2624(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.GameAnalytics::SetCustomDimension03(System.String)
extern "C" void GameAnalytics_SetCustomDimension03_m2673 (Object_t * __this /* static, unused */, String_t* ___customDimension, const MethodInfo* method)
{
	{
		String_t* L_0 = ___customDimension;
		GA_Setup_SetCustomDimension03_m2625(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String GameAnalyticsSDK.GameAnalytics::GetUnityVersion()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t787_il2cpp_TypeInfo_var;
extern "C" String_t* GameAnalytics_GetUnityVersion_m2674 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		Regex_t787_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	StringU5BU5D_t75* V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = Application_get_unityVersion_m4141(NULL /*static, unused*/, /*hidden argument*/NULL);
		CharU5BU5D_t697* L_2 = ((CharU5BU5D_t697*)SZArrayNew(CharU5BU5D_t697_il2cpp_TypeInfo_var, 1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)((int32_t)46);
		NullCheck(L_1);
		StringU5BU5D_t75* L_3 = String_Split_m3709(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0092;
	}

IL_0023:
	{
		StringU5BU5D_t75* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		bool L_7 = Int32_TryParse_m398(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6)), (&V_3), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		StringU5BU5D_t75* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11));
		goto IL_0050;
	}

IL_0041:
	{
		String_t* L_12 = V_0;
		StringU5BU5D_t75* L_13 = V_1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m455(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral993, (*(String_t**)(String_t**)SZArrayLdElema(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_0050:
	{
		goto IL_008e;
	}

IL_0055:
	{
		StringU5BU5D_t75* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t787_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_20 = Regex_Split_m4142(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19)), (String_t*) &_stringLiteral994, /*hidden argument*/NULL);
		V_4 = L_20;
		StringU5BU5D_t75* L_21 = V_4;
		NullCheck(L_21);
		if ((((int32_t)(((int32_t)(((Array_t *)L_21)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		StringU5BU5D_t75* L_22 = V_4;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 0);
		int32_t L_23 = 0;
		bool L_24 = Int32_TryParse_m398(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_22, L_23)), (&V_3), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_25 = V_0;
		StringU5BU5D_t75* L_26 = V_4;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m455(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral993, (*(String_t**)(String_t**)SZArrayLdElema(L_26, L_27)), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_008e:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0092:
	{
		int32_t L_30 = V_2;
		StringU5BU5D_t75* L_31 = V_1;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_32 = V_0;
		return L_32;
	}
}
// GameAnalyticsSDK.GAPlatform GameAnalyticsSDK.GameAnalytics::GetPlatform()
extern "C" int32_t GameAnalytics_GetPlatform_m2675 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	{
		V_0 = 0;
		int32_t L_0 = Application_get_platform_m3766(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 0)
		{
			goto IL_002c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 1)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 2)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)8)) == 3)
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0033;
	}

IL_0025:
	{
		V_0 = 2;
		goto IL_0033;
	}

IL_002c:
	{
		V_0 = 1;
		goto IL_0033;
	}

IL_0033:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// GameAnalyticsSDK.Settings/HelpTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_HelpTypes.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.Settings/HelpTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_HelpTypesMethodDeclarations.h"



// GameAnalyticsSDK.Settings/MessageTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_MessageTypes.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.Settings/MessageTypes
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_MessageTypesMethodDeclarations.h"



// GameAnalyticsSDK.Settings/HelpInfo
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_HelpInfo.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.Settings/HelpInfo
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_HelpInfoMethodDeclarations.h"



// Conversion methods for marshalling of: GameAnalyticsSDK.Settings/HelpInfo
void HelpInfo_t482_marshal(const HelpInfo_t482& unmarshaled, HelpInfo_t482_marshaled& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_string(unmarshaled.___Message_0);
	marshaled.___MsgType_1 = unmarshaled.___MsgType_1;
	marshaled.___HelpType_2 = unmarshaled.___HelpType_2;
}
void HelpInfo_t482_marshal_back(const HelpInfo_t482_marshaled& marshaled, HelpInfo_t482& unmarshaled)
{
	unmarshaled.___Message_0 = il2cpp_codegen_marshal_string_result(marshaled.___Message_0);
	unmarshaled.___MsgType_1 = marshaled.___MsgType_1;
	unmarshaled.___HelpType_2 = marshaled.___HelpType_2;
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Settings/HelpInfo
void HelpInfo_t482_marshal_cleanup(HelpInfo_t482_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
// GameAnalyticsSDK.Settings/InspectorStates
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_InspectorStates.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.Settings/InspectorStates
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Settings_InspectorStatesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<GameAnalyticsSDK.Settings/HelpTypes>
#include "mscorlib_System_Collections_Generic_List_1_gen_16.h"
// System.Collections.Generic.List`1<GameAnalyticsSDK.Settings/HelpTypes>
#include "mscorlib_System_Collections_Generic_List_1_gen_16MethodDeclarations.h"


// System.Void GameAnalyticsSDK.Settings::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Settings_t478_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t115_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t486_il2cpp_TypeInfo_var;
extern TypeInfo* BooleanU5BU5D_t487_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m3705_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m4143_MethodInfo_var;
extern "C" void Settings__ctor_m2676 (Settings_t478 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Settings_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		List_1_t115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(186);
		List_1_t486_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		BooleanU5BU5D_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		List_1__ctor_m3705_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483708);
		List_1__ctor_m4143_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484112);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___CustomArea_16 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Settings_t478_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = Settings_CreateStringArrayWithEmptyStrings_m2678(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___gameKey_17 = L_1;
		StringU5BU5D_t75* L_2 = Settings_CreateStringArrayWithEmptyStrings_m2678(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___secretKey_18 = L_2;
		StringU5BU5D_t75* L_3 = Settings_CreateStringArrayWithPlatformStrings_m2679(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___Build_19 = L_3;
		StringU5BU5D_t75* L_4 = Settings_CreateStringArrayWithEmptyStrings_m2678(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___SelectedPlatformStudio_20 = L_4;
		StringU5BU5D_t75* L_5 = Settings_CreateStringArrayWithEmptyStrings_m2678(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		__this->___SelectedPlatformGame_21 = L_5;
		Int32U5BU5D_t484* L_6 = Settings_CreateIntArrayWithIDs_m2680(NULL /*static, unused*/, 2, (-1), /*hidden argument*/NULL);
		__this->___SelectedPlatformGameID_22 = L_6;
		Int32U5BU5D_t484* L_7 = Settings_CreateIntArrayWithIDs_m2680(NULL /*static, unused*/, 2, 0, /*hidden argument*/NULL);
		__this->___SelectedStudio_23 = L_7;
		Int32U5BU5D_t484* L_8 = Settings_CreateIntArrayWithIDs_m2680(NULL /*static, unused*/, 2, 0, /*hidden argument*/NULL);
		__this->___SelectedGame_24 = L_8;
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___NewVersion_25 = L_9;
		String_t* L_10 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___Changes_26 = L_10;
		__this->___SignUpOpen_27 = 1;
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___FirstName_28 = L_11;
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___LastName_29 = L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___StudioName_30 = L_13;
		String_t* L_14 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___GameName_31 = L_14;
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___PasswordConfirm_32 = L_15;
		__this->___EmailOptIn_33 = 1;
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___EmailGA_34 = L_16;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___PasswordGA_35 = L_17;
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___TokenGA_36 = L_18;
		String_t* L_19 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___ExpireTime_37 = L_19;
		__this->___LoginStatus_38 = (String_t*) &_stringLiteral995;
		__this->___IntroScreen_41 = 1;
		__this->___InfoLogEditor_43 = 1;
		__this->___InfoLogBuild_44 = 1;
		List_1_t115 * L_20 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_20, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		__this->___CustomDimensions01_48 = L_20;
		List_1_t115 * L_21 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_21, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		__this->___CustomDimensions02_49 = L_21;
		List_1_t115 * L_22 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_22, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		__this->___CustomDimensions03_50 = L_22;
		List_1_t115 * L_23 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_23, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		__this->___ResourceItemTypes_51 = L_23;
		List_1_t115 * L_24 = (List_1_t115 *)il2cpp_codegen_object_new (List_1_t115_il2cpp_TypeInfo_var);
		List_1__ctor_m3705(L_24, /*hidden argument*/List_1__ctor_m3705_MethodInfo_var);
		__this->___ResourceCurrencies_52 = L_24;
		List_1_t486 * L_25 = (List_1_t486 *)il2cpp_codegen_object_new (List_1_t486_il2cpp_TypeInfo_var);
		List_1__ctor_m4143(L_25, /*hidden argument*/List_1__ctor_m4143_MethodInfo_var);
		__this->___ClosedHints_55 = L_25;
		__this->___SubmitErrors_73 = 1;
		__this->___MaxErrorCount_74 = ((int32_t)10);
		__this->___SubmitFpsAverage_75 = 1;
		__this->___SubmitFpsCritical_76 = 1;
		__this->___FpsCriticalThreshold_77 = ((int32_t)20);
		__this->___FpsCirticalSubmitInterval_78 = 1;
		__this->___PlatformFoldOut_79 = ((BooleanU5BU5D_t487*)SZArrayNew(BooleanU5BU5D_t487_il2cpp_TypeInfo_var, 2));
		ScriptableObject__ctor_m3777(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameAnalyticsSDK.Settings::.cctor()
extern TypeInfo* Settings_t478_il2cpp_TypeInfo_var;
extern "C" void Settings__cctor_m2677 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Settings_t478_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		s_Il2CppMethodIntialized = true;
	}
	{
		((Settings_t478_StaticFields*)Settings_t478_il2cpp_TypeInfo_var->static_fields)->___VERSION_3 = (String_t*) &_stringLiteral996;
		return;
	}
}
// System.String[] GameAnalyticsSDK.Settings::CreateStringArrayWithEmptyStrings(System.Int32)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t75* Settings_CreateStringArrayWithEmptyStrings_m2678 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___size;
		V_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		StringU5BU5D_t75* L_1 = V_0;
		int32_t L_2 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, L_2)) = (String_t*)L_3;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___size;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000e;
		}
	}
	{
		StringU5BU5D_t75* L_7 = V_0;
		return L_7;
	}
}
// System.String[] GameAnalyticsSDK.Settings::CreateStringArrayWithPlatformStrings(System.Int32)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t75* Settings_CreateStringArrayWithPlatformStrings_m2679 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___size;
		V_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_001a;
	}

IL_000e:
	{
		StringU5BU5D_t75* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral645);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, L_2)) = (String_t*)(String_t*) &_stringLiteral645;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		int32_t L_4 = V_1;
		int32_t L_5 = ___size;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_000e;
		}
	}
	{
		StringU5BU5D_t75* L_6 = V_0;
		return L_6;
	}
}
// System.Int32[] GameAnalyticsSDK.Settings::CreateIntArrayWithIDs(System.Int32,System.Int32)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" Int32U5BU5D_t484* Settings_CreateIntArrayWithIDs_m2680 (Object_t * __this /* static, unused */, int32_t ___size, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	Int32U5BU5D_t484* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___size;
		V_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_000e:
	{
		Int32U5BU5D_t484* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)L_3;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0016:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = ___size;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t484* L_7 = V_0;
		return L_7;
	}
}
// System.Void GameAnalyticsSDK.Settings::SetCustomUserID(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Settings_SetCustomUserID_m2681 (Settings_t478 * __this, String_t* ___customID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___customID;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_2 = String_op_Inequality_m415(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean GameAnalyticsSDK.Settings::IsGameKeyValid(System.Int32,System.String)
extern "C" bool Settings_IsGameKeyValid_m2682 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0009:
	{
		int32_t L_0 = ___index;
		int32_t L_1 = V_1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___value;
		StringU5BU5D_t75* L_3 = (__this->___gameKey_17);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_2, (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_5)));
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_0009;
		}
	}

IL_0035:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean GameAnalyticsSDK.Settings::IsSecretKeyValid(System.Int32,System.String)
extern "C" bool Settings_IsSecretKeyValid_m2683 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0009:
	{
		int32_t L_0 = ___index;
		int32_t L_1 = V_1;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___value;
		StringU5BU5D_t75* L_3 = (__this->___secretKey_18);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck(L_2);
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_2, (*(String_t**)(String_t**)SZArrayLdElema(L_3, L_5)));
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_0009;
		}
	}

IL_0035:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void GameAnalyticsSDK.Settings::UpdateGameKey(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Settings_UpdateGameKey_m2684 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___index;
		String_t* L_3 = ___value;
		bool L_4 = Settings_IsGameKeyValid_m2682(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t75* L_6 = (__this->___gameKey_17);
		int32_t L_7 = ___index;
		String_t* L_8 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		ArrayElementTypeCheck (L_6, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, L_7)) = (String_t*)L_8;
		goto IL_0048;
	}

IL_0028:
	{
		StringU5BU5D_t75* L_9 = (__this->___gameKey_17);
		int32_t L_10 = ___index;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		String_t* L_12 = ___value;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)));
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)), L_12);
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		StringU5BU5D_t75* L_14 = (__this->___gameKey_17);
		int32_t L_15 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_16);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, L_15)) = (String_t*)L_16;
	}

IL_0048:
	{
		goto IL_0056;
	}

IL_004d:
	{
		StringU5BU5D_t75* L_17 = (__this->___gameKey_17);
		int32_t L_18 = ___index;
		String_t* L_19 = ___value;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_19);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, L_18)) = (String_t*)L_19;
	}

IL_0056:
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.Settings::UpdateSecretKey(System.Int32,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Settings_UpdateSecretKey_m2685 (Settings_t478 * __this, int32_t ___index, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_2 = ___index;
		String_t* L_3 = ___value;
		bool L_4 = Settings_IsSecretKeyValid_m2683(__this, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		StringU5BU5D_t75* L_6 = (__this->___secretKey_18);
		int32_t L_7 = ___index;
		String_t* L_8 = ___value;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		ArrayElementTypeCheck (L_6, L_8);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, L_7)) = (String_t*)L_8;
		goto IL_0048;
	}

IL_0028:
	{
		StringU5BU5D_t75* L_9 = (__this->___secretKey_18);
		int32_t L_10 = ___index;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		String_t* L_12 = ___value;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)));
		bool L_13 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11)), L_12);
		if (!L_13)
		{
			goto IL_0048;
		}
	}
	{
		StringU5BU5D_t75* L_14 = (__this->___secretKey_18);
		int32_t L_15 = ___index;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_16);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, L_15)) = (String_t*)L_16;
	}

IL_0048:
	{
		goto IL_0056;
	}

IL_004d:
	{
		StringU5BU5D_t75* L_17 = (__this->___secretKey_18);
		int32_t L_18 = ___index;
		String_t* L_19 = ___value;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_19);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, L_18)) = (String_t*)L_19;
	}

IL_0056:
	{
		return;
	}
}
// System.String GameAnalyticsSDK.Settings::GetGameKey(System.Int32)
extern "C" String_t* Settings_GetGameKey_m2686 (Settings_t478 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___gameKey_17);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2));
	}
}
// System.String GameAnalyticsSDK.Settings::GetSecretKey(System.Int32)
extern "C" String_t* Settings_GetSecretKey_m2687 (Settings_t478 * __this, int32_t ___index, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___secretKey_18);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void GameAnalyticsSDK.Settings::SetCustomArea(System.String)
extern "C" void Settings_SetCustomArea_m2688 (Settings_t478 * __this, String_t* ___customArea, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameAnalyticsSDK.Settings::SetKeys(System.String,System.String)
extern "C" void Settings_SetKeys_m2689 (Settings_t478 * __this, String_t* ___gamekey, String_t* ___secretkey, const MethodInfo* method)
{
	{
		return;
	}
}
// GameAnalyticsSDK.Studio
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Studio.h"
#ifndef _MSC_VER
#else
#endif
// GameAnalyticsSDK.Studio
#include "AssemblyU2DCSharp_GameAnalyticsSDK_StudioMethodDeclarations.h"

// System.Collections.Generic.List`1<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_gen_17.h"
// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>
#include "mscorlib_System_Collections_Generic_List_1_gen_18.h"
// GameAnalyticsSDK.Game
#include "AssemblyU2DCSharp_GameAnalyticsSDK_Game.h"
// System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>
#include "mscorlib_System_Collections_Generic_List_1_gen_18MethodDeclarations.h"
// System.Collections.Generic.List`1<GameAnalyticsSDK.Game>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
// GameAnalyticsSDK.Game
#include "AssemblyU2DCSharp_GameAnalyticsSDK_GameMethodDeclarations.h"


// System.Void GameAnalyticsSDK.Studio::.ctor(System.String,System.String,System.Collections.Generic.List`1<GameAnalyticsSDK.Game>)
extern "C" void Studio__ctor_m2690 (Studio_t489 * __this, String_t* ___name, String_t* ___id, List_1_t488 * ___games, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Studio_set_Name_m2692(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___id;
		Studio_set_ID_m2694(__this, L_1, /*hidden argument*/NULL);
		List_1_t488 * L_2 = ___games;
		Studio_set_Games_m2696(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String GameAnalyticsSDK.Studio::get_Name()
extern "C" String_t* Studio_get_Name_m2691 (Studio_t489 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CNameU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Studio::set_Name(System.String)
extern "C" void Studio_set_Name_m2692 (Studio_t489 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String GameAnalyticsSDK.Studio::get_ID()
extern "C" String_t* Studio_get_ID_m2693 (Studio_t489 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CIDU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Studio::set_ID(System.String)
extern "C" void Studio_set_ID_m2694 (Studio_t489 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CIDU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Collections.Generic.List`1<GameAnalyticsSDK.Game> GameAnalyticsSDK.Studio::get_Games()
extern "C" List_1_t488 * Studio_get_Games_m2695 (Studio_t489 * __this, const MethodInfo* method)
{
	{
		List_1_t488 * L_0 = (__this->___U3CGamesU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Studio::set_Games(System.Collections.Generic.List`1<GameAnalyticsSDK.Game>)
extern "C" void Studio_set_Games_m2696 (Studio_t489 * __this, List_1_t488 * ___value, const MethodInfo* method)
{
	{
		List_1_t488 * L_0 = ___value;
		__this->___U3CGamesU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String[] GameAnalyticsSDK.Studio::GetStudioNames(System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>,System.Boolean)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t75* Studio_GetStudioNames_m2697 (Object_t * __this /* static, unused */, List_1_t485 * ___studios, bool ___addFirstEmpty, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	StringU5BU5D_t75* V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	{
		List_1_t485 * L_0 = ___studios;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringU5BU5D_t75* L_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral997);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 0)) = (String_t*)(String_t*) &_stringLiteral997;
		return L_1;
	}

IL_0015:
	{
		bool L_2 = ___addFirstEmpty;
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		List_1_t485 * L_3 = ___studios;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count() */, L_3);
		V_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4+(int32_t)1))));
		StringU5BU5D_t75* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral997);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 0)) = (String_t*)(String_t*) &_stringLiteral997;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0065;
	}

IL_003e:
	{
		StringU5BU5D_t75* L_7 = V_0;
		int32_t L_8 = V_2;
		List_1_t485 * L_9 = ___studios;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		Studio_t489 * L_11 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_9, L_10);
		NullCheck(L_11);
		String_t* L_12 = Studio_get_Name_m2691(L_11, /*hidden argument*/NULL);
		String_t* L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m408(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)L_8+(int32_t)1)));
		ArrayElementTypeCheck (L_7, L_14);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, ((int32_t)((int32_t)L_8+(int32_t)1)))) = (String_t*)L_14;
		String_t* L_15 = V_1;
		String_t* L_16 = String_Concat_m408(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral944, /*hidden argument*/NULL);
		V_1 = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0065:
	{
		int32_t L_18 = V_2;
		List_1_t485 * L_19 = ___studios;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count() */, L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_003e;
		}
	}
	{
		StringU5BU5D_t75* L_21 = V_0;
		return L_21;
	}

IL_0073:
	{
		List_1_t485 * L_22 = ___studios;
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count() */, L_22);
		V_3 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_23));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_24;
		V_5 = 0;
		goto IL_00ba;
	}

IL_008e:
	{
		StringU5BU5D_t75* L_25 = V_3;
		int32_t L_26 = V_5;
		List_1_t485 * L_27 = ___studios;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		Studio_t489 * L_29 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_27, L_28);
		NullCheck(L_29);
		String_t* L_30 = Studio_get_Name_m2691(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m408(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		ArrayElementTypeCheck (L_25, L_32);
		*((String_t**)(String_t**)SZArrayLdElema(L_25, L_26)) = (String_t*)L_32;
		String_t* L_33 = V_4;
		String_t* L_34 = String_Concat_m408(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral944, /*hidden argument*/NULL);
		V_4 = L_34;
		int32_t L_35 = V_5;
		V_5 = ((int32_t)((int32_t)L_35+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_36 = V_5;
		List_1_t485 * L_37 = ___studios;
		NullCheck(L_37);
		int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Count() */, L_37);
		if ((((int32_t)L_36) < ((int32_t)L_38)))
		{
			goto IL_008e;
		}
	}
	{
		StringU5BU5D_t75* L_39 = V_3;
		return L_39;
	}
}
// System.String[] GameAnalyticsSDK.Studio::GetGameNames(System.Int32,System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>)
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" StringU5BU5D_t75* Studio_GetGameNames_m2698 (Object_t * __this /* static, unused */, int32_t ___index, List_1_t485 * ___studios, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		List_1_t485 * L_0 = ___studios;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		List_1_t485 * L_1 = ___studios;
		int32_t L_2 = ___index;
		NullCheck(L_1);
		Studio_t489 * L_3 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_1, L_2);
		NullCheck(L_3);
		List_1_t488 * L_4 = Studio_get_Games_m2695(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}

IL_0017:
	{
		StringU5BU5D_t75* L_5 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral997);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 0)) = (String_t*)(String_t*) &_stringLiteral997;
		return L_5;
	}

IL_0026:
	{
		List_1_t485 * L_6 = ___studios;
		int32_t L_7 = ___index;
		NullCheck(L_6);
		Studio_t489 * L_8 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_6, L_7);
		NullCheck(L_8);
		List_1_t488 * L_9 = Studio_get_Games_m2695(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count() */, L_9);
		V_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		StringU5BU5D_t75* L_11 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral997);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, 0)) = (String_t*)(String_t*) &_stringLiteral997;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_12;
		V_2 = 0;
		goto IL_0086;
	}

IL_0054:
	{
		StringU5BU5D_t75* L_13 = V_0;
		int32_t L_14 = V_2;
		List_1_t485 * L_15 = ___studios;
		int32_t L_16 = ___index;
		NullCheck(L_15);
		Studio_t489 * L_17 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_15, L_16);
		NullCheck(L_17);
		List_1_t488 * L_18 = Studio_get_Games_m2695(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Game_t490 * L_20 = (Game_t490 *)VirtFuncInvoker1< Game_t490 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Item(System.Int32) */, L_18, L_19);
		NullCheck(L_20);
		String_t* L_21 = Game_get_Name_m2700(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)));
		ArrayElementTypeCheck (L_13, L_23);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)))) = (String_t*)L_23;
		String_t* L_24 = V_1;
		String_t* L_25 = String_Concat_m408(NULL /*static, unused*/, L_24, (String_t*) &_stringLiteral944, /*hidden argument*/NULL);
		V_1 = L_25;
		int32_t L_26 = V_2;
		V_2 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0086:
	{
		int32_t L_27 = V_2;
		List_1_t485 * L_28 = ___studios;
		int32_t L_29 = ___index;
		NullCheck(L_28);
		Studio_t489 * L_30 = (Studio_t489 *)VirtFuncInvoker1< Studio_t489 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<GameAnalyticsSDK.Studio>::get_Item(System.Int32) */, L_28, L_29);
		NullCheck(L_30);
		List_1_t488 * L_31 = Studio_get_Games_m2695(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<GameAnalyticsSDK.Game>::get_Count() */, L_31);
		if ((((int32_t)L_27) < ((int32_t)L_32)))
		{
			goto IL_0054;
		}
	}
	{
		StringU5BU5D_t75* L_33 = V_0;
		return L_33;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void GameAnalyticsSDK.Game::.ctor(System.String,System.Int32,System.String,System.String)
extern "C" void Game__ctor_m2699 (Game_t490 * __this, String_t* ___name, int32_t ___id, String_t* ___gameKey, String_t* ___secretKey, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		Game_set_Name_m2701(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___id;
		Game_set_ID_m2703(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___gameKey;
		Game_set_GameKey_m2705(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___secretKey;
		Game_set_SecretKey_m2707(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.String GameAnalyticsSDK.Game::get_Name()
extern "C" String_t* Game_get_Name_m2700 (Game_t490 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CNameU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Game::set_Name(System.String)
extern "C" void Game_set_Name_m2701 (Game_t490 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 GameAnalyticsSDK.Game::get_ID()
extern "C" int32_t Game_get_ID_m2702 (Game_t490 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CIDU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Game::set_ID(System.Int32)
extern "C" void Game_set_ID_m2703 (Game_t490 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CIDU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String GameAnalyticsSDK.Game::get_GameKey()
extern "C" String_t* Game_get_GameKey_m2704 (Game_t490 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CGameKeyU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Game::set_GameKey(System.String)
extern "C" void Game_set_GameKey_m2705 (Game_t490 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CGameKeyU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String GameAnalyticsSDK.Game::get_SecretKey()
extern "C" String_t* Game_get_SecretKey_m2706 (Game_t490 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CSecretKeyU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Game::set_SecretKey(System.String)
extern "C" void Game_set_SecretKey_m2707 (Game_t490 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CSecretKeyU3Ek__BackingField_3 = L_0;
		return;
	}
}
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinner.h"
#ifndef _MSC_VER
#else
#endif
// AcceleratingSpinner
#include "AssemblyU2DCSharp_AcceleratingSpinnerMethodDeclarations.h"

// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"


// System.Void AcceleratingSpinner::.ctor()
extern "C" void AcceleratingSpinner__ctor_m2708 (AcceleratingSpinner_t491 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AcceleratingSpinner::Start()
extern "C" void AcceleratingSpinner_Start_m2709 (AcceleratingSpinner_t491 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AcceleratingSpinner::Update()
extern "C" void AcceleratingSpinner_Update_m2710 (AcceleratingSpinner_t491 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___angleDeg_4);
		float L_1 = (__this->___angleVelocityDeg_5);
		float L_2 = Time_get_deltaTime_m4144(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___angleDeg_4 = ((float)((float)L_0+(float)((float)((float)L_1*(float)L_2))));
		float L_3 = (__this->___angleVelocityDeg_5);
		float L_4 = (__this->___angleAccelerationDeg_3);
		float L_5 = Time_get_deltaTime_m4144(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___angleVelocityDeg_5 = ((float)((float)L_3+(float)((float)((float)L_4*(float)L_5))));
		Transform_t406 * L_6 = Component_get_transform_m4033(__this, /*hidden argument*/NULL);
		float L_7 = (__this->___angleDeg_4);
		Quaternion_t788  L_8 = Quaternion_Euler_m4145(NULL /*static, unused*/, (0.0f), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_rotation_m4146(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AcceleratingSpinner::Configure(System.Single)
extern "C" void AcceleratingSpinner_Configure_m2711 (AcceleratingSpinner_t491 * __this, float ___angleDeg, const MethodInfo* method)
{
	{
		float L_0 = ___angleDeg;
		__this->___angleDeg_4 = L_0;
		float L_1 = (__this->___initialAngleVelocityDeg_2);
		__this->___angleVelocityDeg_5 = L_1;
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
extern "C" void AchievementController__ctor_m2712 (AchievementController_t492 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::Awake()
extern "C" void AchievementController_Awake_m2713 (AchievementController_t492 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AchievementController::Start()
extern "C" void AchievementController_Start_m2714 (AchievementController_t492 * __this, const MethodInfo* method)
{
	{
		AchievementController_RegisterForEvents_m2716(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::OnDestroy()
extern "C" void AchievementController_OnDestroy_m2715 (AchievementController_t492 * __this, const MethodInfo* method)
{
	{
		AchievementController_UnregisterForEvents_m2717(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::RegisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m2719_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var;
extern "C" void AchievementController_RegisterForEvents_m2716 (AchievementController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		AchievementController_OnGameLevelChanged_m2719_MethodInfo_var = il2cpp_codegen_method_info_from_index(465);
		AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var = il2cpp_codegen_method_info_from_index(466);
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
		GameLevelState_t556 * L_1 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m2719_MethodInfo_var };
		GameLevelChangedEventHandler_t555 * L_3 = (GameLevelChangedEventHandler_t555 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2964(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_add_GameLevelChanged_m2969(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t560 * L_4 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var };
		GameInstanceChangedEventHandler_t558 * L_6 = (GameInstanceChangedEventHandler_t558 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2978(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_add_GameInstanceChanged_m2993(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AchievementController::UnregisterForEvents()
extern TypeInfo* GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var;
extern TypeInfo* GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var;
extern const MethodInfo* AchievementController_OnGameLevelChanged_m2719_MethodInfo_var;
extern const MethodInfo* AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var;
extern "C" void AchievementController_UnregisterForEvents_m2717 (AchievementController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		AchievementController_OnGameLevelChanged_m2719_MethodInfo_var = il2cpp_codegen_method_info_from_index(465);
		AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var = il2cpp_codegen_method_info_from_index(466);
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
		GameLevelState_t556 * L_1 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)AchievementController_OnGameLevelChanged_m2719_MethodInfo_var };
		GameLevelChangedEventHandler_t555 * L_3 = (GameLevelChangedEventHandler_t555 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2964(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameLevelState_remove_GameLevelChanged_m2970(L_1, L_3, /*hidden argument*/NULL);
		GamePhaseState_t560 * L_4 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)AchievementController_OnGameInstanceChanged_m2718_MethodInfo_var };
		GameInstanceChangedEventHandler_t558 * L_6 = (GameInstanceChangedEventHandler_t558 *)il2cpp_codegen_object_new (GameInstanceChangedEventHandler_t558_il2cpp_TypeInfo_var);
		GameInstanceChangedEventHandler__ctor_m2978(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		GamePhaseState_remove_GameInstanceChanged_m2994(L_4, L_6, /*hidden argument*/NULL);
	}

IL_0037:
	{
		return;
	}
}
// System.Void AchievementController::OnGameInstanceChanged()
extern TypeInfo* SocialHelper_t647_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameInstanceChanged_m2718 (AchievementController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = (L_0->___clearAchievements_4);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		SocialHelper_t647 * L_2 = ((SocialHelper_t647_StaticFields*)SocialHelper_t647_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		NullCheck(L_2);
		SocialHelper_ClearAchievements_m3480(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void AchievementController::OnGameLevelChanged()
extern TypeInfo* SocialHelper_t647_il2cpp_TypeInfo_var;
extern "C" void AchievementController_OnGameLevelChanged_m2719 (AchievementController_t492 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SocialHelper_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	LevelDescription_t585 * V_0 = {0};
	{
		LevelConfig_t591 * L_0 = LevelConfig_get_instance_m3103(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		LevelDescription_t585 * L_1 = LevelConfig_GetCurrentLevelDescription_m3112(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		LevelDescription_t585 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = (L_2->___previousLevelClearedAchievementID_11);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		SocialHelper_t647 * L_4 = ((SocialHelper_t647_StaticFields*)SocialHelper_t647_il2cpp_TypeInfo_var->static_fields)->___instance_3;
		LevelDescription_t585 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___previousLevelClearedAchievementID_11);
		NullCheck(L_4);
		SocialHelper_RecordAchievement_m3482(L_4, L_6, /*hidden argument*/NULL);
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

struct Component_t761;
struct Camera_t574;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t574_m4147(__this, method) (( Camera_t574 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)


// System.Void AspectRatioPreserve::.ctor()
extern "C" void AspectRatioPreserve__ctor_m2720 (AspectRatioPreserve_t493 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AspectRatioPreserve::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t574_m4147_MethodInfo_var;
extern "C" void AspectRatioPreserve_Start_m2721 (AspectRatioPreserve_t493 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisCamera_t574_m4147_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484115);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Camera_t574 * V_3 = {0};
	Rect_t694  V_4 = {0};
	float V_5 = 0.0f;
	Rect_t694  V_6 = {0};
	{
		V_0 = (1.0f);
		int32_t L_0 = Screen_get_width_m3658(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m3673(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)L_0))/(float)(((float)L_1))));
		float L_2 = V_1;
		float L_3 = V_0;
		V_2 = ((float)((float)L_2/(float)L_3));
		Camera_t574 * L_4 = Component_GetComponent_TisCamera_t574_m4147(__this, /*hidden argument*/Component_GetComponent_TisCamera_t574_m4147_MethodInfo_var);
		V_3 = L_4;
		float L_5 = V_2;
		if ((!(((float)L_5) < ((float)(1.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		Camera_t574 * L_6 = V_3;
		NullCheck(L_6);
		Rect_t694  L_7 = Camera_get_rect_m4148(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Rect_set_width_m4149((&V_4), (1.0f), /*hidden argument*/NULL);
		float L_8 = V_2;
		Rect_set_height_m4150((&V_4), L_8, /*hidden argument*/NULL);
		Rect_set_x_m4151((&V_4), (0.0f), /*hidden argument*/NULL);
		float L_9 = V_2;
		Rect_set_y_m4152((&V_4), ((float)((float)((float)((float)(1.0f)-(float)L_9))/(float)(2.0f))), /*hidden argument*/NULL);
		Camera_t574 * L_10 = V_3;
		Rect_t694  L_11 = V_4;
		NullCheck(L_10);
		Camera_set_rect_m4153(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_0073:
	{
		float L_12 = V_2;
		V_5 = ((float)((float)(1.0f)/(float)L_12));
		Camera_t574 * L_13 = V_3;
		NullCheck(L_13);
		Rect_t694  L_14 = Camera_get_rect_m4148(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = V_5;
		Rect_set_width_m4149((&V_6), L_15, /*hidden argument*/NULL);
		Rect_set_height_m4150((&V_6), (1.0f), /*hidden argument*/NULL);
		float L_16 = V_5;
		Rect_set_x_m4151((&V_6), ((float)((float)((float)((float)(1.0f)-(float)L_16))/(float)(2.0f))), /*hidden argument*/NULL);
		Rect_set_y_m4152((&V_6), (0.0f), /*hidden argument*/NULL);
		Camera_t574 * L_17 = V_3;
		Rect_t694  L_18 = V_6;
		NullCheck(L_17);
		Camera_set_rect_m4153(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		return;
	}
}
// System.Void AspectRatioPreserve::Update()
extern "C" void AspectRatioPreserve_Update_m2722 (AspectRatioPreserve_t493 * __this, const MethodInfo* method)
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
// BoostButtonLayout
#include "AssemblyU2DCSharp_BoostButtonLayoutMethodDeclarations.h"
// UnityEngine.RectTransform
#include "UnityEngine_UnityEngine_RectTransformMethodDeclarations.h"
// UnityEngine.UI.Slider
#include "UnityEngine_UI_UnityEngine_UI_SliderMethodDeclarations.h"
struct GameObject_t352;
struct Slider_t495;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
#define GameObject_GetComponent_TisSlider_t495_m4154(__this, method) (( Slider_t495 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)
struct GameObject_t352;
struct BoostButtonLayout_t502;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButtonLayout>()
#define GameObject_GetComponent_TisBoostButtonLayout_t502_m4155(__this, method) (( BoostButtonLayout_t502 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)
struct GameObject_t352;
struct RectTransform_t543;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
#define GameObject_GetComponent_TisRectTransform_t543_m4156(__this, method) (( RectTransform_t543 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)


// System.Void BoostActiveLayout::.ctor()
extern "C" void BoostActiveLayout__ctor_m2723 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::Awake()
extern "C" void BoostActiveLayout_Awake_m2724 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	{
		__this->___registerdForEvents_3 = 0;
		__this->___sliderDirty_10 = 0;
		__this->___started_8 = 0;
		return;
	}
}
// System.Void BoostActiveLayout::Start()
extern "C" void BoostActiveLayout_Start_m2725 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	{
		BoostConfig_t494 * L_0 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___boostConfig_7 = L_0;
		BoostActiveLayout_RegisterForEvents_m2728(__this, /*hidden argument*/NULL);
		BoostActiveLayout_AddSlider_m2732(__this, /*hidden argument*/NULL);
		BoostActiveLayout_RefreshSlider_m2733(__this, /*hidden argument*/NULL);
		__this->___started_8 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::OnEnable()
extern "C" void BoostActiveLayout_OnEnable_m2726 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
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
		BoostActiveLayout_RefreshSlider_m2733(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnDestroy()
extern "C" void BoostActiveLayout_OnDestroy_m2727 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	{
		BoostActiveLayout_UnregisterForEvents_m2729(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RegisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var;
extern "C" void BoostActiveLayout_RegisterForEvents_m2728 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var = il2cpp_codegen_method_info_from_index(468);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t494 * L_0 = (__this->___boostConfig_7);
		IntPtr_t L_1 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_2 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2774(L_2, __this, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoostConfig_add_BoostActive_m2785(L_0, L_2, /*hidden argument*/NULL);
		__this->___registerdForEvents_3 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::UnregisterForEvents()
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var;
extern "C" void BoostActiveLayout_UnregisterForEvents_m2729 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var = il2cpp_codegen_method_info_from_index(468);
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
		BoostConfig_t494 * L_1 = (__this->___boostConfig_7);
		IntPtr_t L_2 = { (void*)BoostActiveLayout_OnBoostUsageChanged_m2731_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_3 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2774(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		BoostConfig_remove_BoostActive_m2786(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void BoostActiveLayout::Update()
extern "C" void BoostActiveLayout_Update_m2730 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sliderDirty_10);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BoostActiveLayout_RefreshSlider_m2733(__this, /*hidden argument*/NULL);
		__this->___sliderDirty_10 = 0;
	}

IL_0018:
	{
		BoostActiveLayout_MaybeUpdateSliderProgress_m2734(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveLayout_OnBoostUsageChanged_m2731 (BoostActiveLayout_t496 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___sliderDirty_10 = 1;
		return;
	}
}
// System.Void BoostActiveLayout::AddSlider()
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisSlider_t495_m4154_MethodInfo_var;
extern "C" void BoostActiveLayout_AddSlider_m2732 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisSlider_t495_m4154_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484117);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	{
		GameObject_t352 * L_0 = (__this->___sliderPrototype_2);
		Vector3_t536  L_1 = {0};
		Vector3__ctor_m4031(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t788  L_2 = Quaternion_get_identity_m4157(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t703 * L_3 = Object_Instantiate_m4158(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		Slider_t495 * L_5 = GameObject_GetComponent_TisSlider_t495_m4154(L_4, /*hidden argument*/GameObject_GetComponent_TisSlider_t495_m4154_MethodInfo_var);
		__this->___sliderInstance_9 = L_5;
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4036(L_6, /*hidden argument*/NULL);
		GameObject_t352 * L_8 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m4036(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4159(L_7, L_9, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostActiveLayout::RefreshSlider()
extern const MethodInfo* GameObject_GetComponent_TisBoostButtonLayout_t502_m4155_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var;
extern "C" void BoostActiveLayout_RefreshSlider_m2733 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisBoostButtonLayout_t502_m4155_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484118);
		GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	BoostButtonLayout_t502 * V_0 = {0};
	BoostButton_t497 * V_1 = {0};
	RectTransform_t543 * V_2 = {0};
	RectTransform_t543 * V_3 = {0};
	{
		BoostConfig_t494 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2808(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00a7;
		}
	}
	{
		GameObject_t352 * L_2 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoostButtonLayout_t502 * L_3 = GameObject_GetComponent_TisBoostButtonLayout_t502_m4155(L_2, /*hidden argument*/GameObject_GetComponent_TisBoostButtonLayout_t502_m4155_MethodInfo_var);
		V_0 = L_3;
		Slider_t495 * L_4 = (__this->___sliderInstance_9);
		NullCheck(L_4);
		GameObject_t352 * L_5 = Component_get_gameObject_m3753(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m3953(L_5, 1, /*hidden argument*/NULL);
		BoostButtonLayout_t502 * L_6 = V_0;
		BoostConfig_t494 * L_7 = (__this->___boostConfig_7);
		NullCheck(L_7);
		int32_t L_8 = BoostConfig_get_activeBoost_m2789(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		BoostButton_t497 * L_9 = BoostButtonLayout_GetButtonForBoost_m2773(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		BoostButton_t497 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t352 * L_11 = Component_get_gameObject_m3753(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_t543 * L_12 = GameObject_GetComponent_TisRectTransform_t543_m4156(L_11, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var);
		V_2 = L_12;
		Slider_t495 * L_13 = (__this->___sliderInstance_9);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3753(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t406 * L_15 = GameObject_get_transform_m4036(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_SetAsLastSibling_m4160(L_15, /*hidden argument*/NULL);
		Slider_t495 * L_16 = (__this->___sliderInstance_9);
		NullCheck(L_16);
		GameObject_t352 * L_17 = Component_get_gameObject_m3753(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_t543 * L_18 = GameObject_GetComponent_TisRectTransform_t543_m4156(L_17, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var);
		V_3 = L_18;
		RectTransform_t543 * L_19 = V_3;
		RectTransform_t543 * L_20 = V_2;
		NullCheck(L_20);
		Vector3_t536  L_21 = RectTransform_get_anchoredPosition3D_m4161(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchoredPosition3D_m4162(L_19, L_21, /*hidden argument*/NULL);
		RectTransform_t543 * L_22 = V_3;
		Vector3_t536  L_23 = {0};
		Vector3__ctor_m4031(&L_23, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m4042(L_22, L_23, /*hidden argument*/NULL);
		RectTransform_t543 * L_24 = V_3;
		Quaternion_t788  L_25 = Quaternion_get_identity_m4157(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_rotation_m4146(L_24, L_25, /*hidden argument*/NULL);
		goto IL_00b8;
	}

IL_00a7:
	{
		Slider_t495 * L_26 = (__this->___sliderInstance_9);
		NullCheck(L_26);
		GameObject_t352 * L_27 = Component_get_gameObject_m3753(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		GameObject_SetActive_m3953(L_27, 0, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		return;
	}
}
// System.Void BoostActiveLayout::MaybeUpdateSliderProgress()
extern "C" void BoostActiveLayout_MaybeUpdateSliderProgress_m2734 (BoostActiveLayout_t496 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		BoostConfig_t494 * L_0 = (__this->___boostConfig_7);
		NullCheck(L_0);
		bool L_1 = BoostConfig_IsBoostActive_m2808(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		BoostConfig_t494 * L_2 = (__this->___boostConfig_7);
		NullCheck(L_2);
		float L_3 = BoostConfig_GetActiveBoostFractionUsed_m2807(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Slider_t495 * L_4 = (__this->___sliderInstance_9);
		float L_5 = V_0;
		NullCheck(L_4);
		Slider_set_value_m4163(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// BoostButton/<TriggerDistortionEffect>c__Iterator11
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3Ec.h"
#ifndef _MSC_VER
#else
#endif
// BoostButton/<TriggerDistortionEffect>c__Iterator11
#include "AssemblyU2DCSharp_BoostButton_U3CTriggerDistortionEffectU3EcMethodDeclarations.h"

// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffect.h"
// DistortForEffect
#include "AssemblyU2DCSharp_DistortForEffectMethodDeclarations.h"
struct Component_t761;
struct DistortForEffect_t535;
// Declaration !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
// !!0 UnityEngine.Component::GetComponent<DistortForEffect>()
#define Component_GetComponent_TisDistortForEffect_t535_m4164(__this, method) (( DistortForEffect_t535 * (*) (Component_t761 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3993_gshared)(__this, method)


// System.Void BoostButton/<TriggerDistortionEffect>c__Iterator11::.ctor()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator11__ctor_m2735 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__Iterator11::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator11_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2736 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object BoostButton/<TriggerDistortionEffect>c__Iterator11::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CTriggerDistortionEffectU3Ec__Iterator11_System_Collections_IEnumerator_get_Current_m2737 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean BoostButton/<TriggerDistortionEffect>c__Iterator11::MoveNext()
extern TypeInfo* WaitForSeconds_t785_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var;
extern "C" bool U3CTriggerDistortionEffectU3Ec__Iterator11_MoveNext_m2738 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
		Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
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
		WaitForSeconds_t785 * L_2 = (WaitForSeconds_t785 *)il2cpp_codegen_object_new (WaitForSeconds_t785_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4136(L_2, (0.25f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0056;
	}

IL_003d:
	{
		BoostButton_t497 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		DistortForEffect_t535 * L_4 = Component_GetComponent_TisDistortForEffect_t535_m4164(L_3, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var);
		NullCheck(L_4);
		DistortForEffect_Distort_m2884(L_4, /*hidden argument*/NULL);
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
// System.Void BoostButton/<TriggerDistortionEffect>c__Iterator11::Dispose()
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator11_Dispose_m2739 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void BoostButton/<TriggerDistortionEffect>c__Iterator11::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CTriggerDistortionEffectU3Ec__Iterator11_Reset_m2740 (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * __this, const MethodInfo* method)
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
// BoostButton
#include "AssemblyU2DCSharp_BoostButtonMethodDeclarations.h"

// PlayerStats
#include "AssemblyU2DCSharp_PlayerStats.h"
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandler.h"
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
// PlayerStats/MoneyChangedEventHandler
#include "AssemblyU2DCSharp_PlayerStats_MoneyChangedEventHandlerMethodDeclarations.h"
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
struct GameObject_t352;
struct Button_t499;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
#define GameObject_GetComponent_TisButton_t499_m4165(__this, method) (( Button_t499 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)
struct GameObject_t352;
struct Image_t501;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t501_m4166(__this, method) (( Image_t501 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)


// System.Void BoostButton::.ctor()
extern "C" void BoostButton__ctor_m2741 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Start()
extern "C" void BoostButton_Start_m2742 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		BoostButton_RegisterForEvents_m2744(__this, /*hidden argument*/NULL);
		__this->___buttonDirty_9 = 0;
		BoostButton_CheckForLevelUnlockEffects_m2752(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::Update()
extern "C" void BoostButton_Update_m2743 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___buttonDirty_9);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		BoostButton_RefreshButton_m2748(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void BoostButton::RegisterForEvents()
extern TypeInfo* MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m2755_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m2753_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m2750_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGamePhaseChanged_m2751_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var;
extern "C" void BoostButton_RegisterForEvents_m2744 (BoostButton_t497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		BoostButton_OnTreatsChanged_m2755_MethodInfo_var = il2cpp_codegen_method_info_from_index(473);
		BoostButton_OnBoostsChanged_m2753_MethodInfo_var = il2cpp_codegen_method_info_from_index(474);
		BoostButton_OnGameLevelChanged_m2750_MethodInfo_var = il2cpp_codegen_method_info_from_index(475);
		BoostButton_OnGamePhaseChanged_m2751_MethodInfo_var = il2cpp_codegen_method_info_from_index(476);
		BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var = il2cpp_codegen_method_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_8);
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		__this->___registeredForEvents_8 = 1;
		PlayerStats_t513 * L_1 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m2755_MethodInfo_var };
		MoneyChangedEventHandler_t627 * L_3 = (MoneyChangedEventHandler_t627 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3353(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_add_MoneyChanged_m3364(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t513 * L_4 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m2753_MethodInfo_var };
		BoostsChangedEventHandler_t628 * L_6 = (BoostsChangedEventHandler_t628 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m3357(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_add_BoostsChanged_m3366(L_4, L_6, /*hidden argument*/NULL);
		GameLevelState_t556 * L_7 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m2750_MethodInfo_var };
		GameLevelChangedEventHandler_t555 * L_9 = (GameLevelChangedEventHandler_t555 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2964(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameLevelState_add_GameLevelChanged_m2969(L_7, L_9, /*hidden argument*/NULL);
		GamePhaseState_t560 * L_10 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)BoostButton_OnGamePhaseChanged_m2751_MethodInfo_var };
		GamePhaseChangedEventHandler_t559 * L_12 = (GamePhaseChangedEventHandler_t559 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2982(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GamePhaseState_add_GamePhaseChanged_m2995(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t494 * L_13 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_15 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2774(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_add_BoostActive_m2785(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Void BoostButton::UnregisterForEvents()
extern TypeInfo* MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var;
extern TypeInfo* BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var;
extern TypeInfo* GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var;
extern TypeInfo* GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostButton_OnTreatsChanged_m2755_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostsChanged_m2753_MethodInfo_var;
extern const MethodInfo* BoostButton_OnGameLevelChanged_m2750_MethodInfo_var;
extern const MethodInfo* BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var;
extern "C" void BoostButton_UnregisterForEvents_m2745 (BoostButton_t497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		BoostButton_OnTreatsChanged_m2755_MethodInfo_var = il2cpp_codegen_method_info_from_index(473);
		BoostButton_OnBoostsChanged_m2753_MethodInfo_var = il2cpp_codegen_method_info_from_index(474);
		BoostButton_OnGameLevelChanged_m2750_MethodInfo_var = il2cpp_codegen_method_info_from_index(475);
		BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var = il2cpp_codegen_method_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___registeredForEvents_8);
		if (!L_0)
		{
			goto IL_0079;
		}
	}
	{
		PlayerStats_t513 * L_1 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostButton_OnTreatsChanged_m2755_MethodInfo_var };
		MoneyChangedEventHandler_t627 * L_3 = (MoneyChangedEventHandler_t627 *)il2cpp_codegen_object_new (MoneyChangedEventHandler_t627_il2cpp_TypeInfo_var);
		MoneyChangedEventHandler__ctor_m3353(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PlayerStats_remove_MoneyChanged_m3365(L_1, L_3, /*hidden argument*/NULL);
		PlayerStats_t513 * L_4 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_5 = { (void*)BoostButton_OnBoostsChanged_m2753_MethodInfo_var };
		BoostsChangedEventHandler_t628 * L_6 = (BoostsChangedEventHandler_t628 *)il2cpp_codegen_object_new (BoostsChangedEventHandler_t628_il2cpp_TypeInfo_var);
		BoostsChangedEventHandler__ctor_m3357(L_6, __this, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		PlayerStats_remove_BoostsChanged_m3367(L_4, L_6, /*hidden argument*/NULL);
		GameLevelState_t556 * L_7 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)BoostButton_OnGameLevelChanged_m2750_MethodInfo_var };
		GameLevelChangedEventHandler_t555 * L_9 = (GameLevelChangedEventHandler_t555 *)il2cpp_codegen_object_new (GameLevelChangedEventHandler_t555_il2cpp_TypeInfo_var);
		GameLevelChangedEventHandler__ctor_m2964(L_9, __this, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameLevelState_remove_GameLevelChanged_m2970(L_7, L_9, /*hidden argument*/NULL);
		GamePhaseState_t560 * L_10 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_11 = { (void*)BoostButton_OnGameLevelChanged_m2750_MethodInfo_var };
		GamePhaseChangedEventHandler_t559 * L_12 = (GamePhaseChangedEventHandler_t559 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2982(L_12, __this, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		GamePhaseState_remove_GamePhaseChanged_m2996(L_10, L_12, /*hidden argument*/NULL);
		BoostConfig_t494 * L_13 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_14 = { (void*)BoostButton_OnBoostUsageChanged_m2754_MethodInfo_var };
		BoostActiveEventHandler_t507 * L_15 = (BoostActiveEventHandler_t507 *)il2cpp_codegen_object_new (BoostActiveEventHandler_t507_il2cpp_TypeInfo_var);
		BoostActiveEventHandler__ctor_m2774(L_15, __this, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		BoostConfig_remove_BoostActive_m2786(L_13, L_15, /*hidden argument*/NULL);
	}

IL_0079:
	{
		return;
	}
}
// System.Void BoostButton::OnDestroy()
extern "C" void BoostButton_OnDestroy_m2746 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		BoostButton_UnregisterForEvents_m2745(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::ConfigureForType(BoostConfig/BoostType)
extern const MethodInfo* GameObject_GetComponent_TisButton_t499_m4165_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisImage_t501_m4166_MethodInfo_var;
extern "C" void BoostButton_ConfigureForType_m2747 (BoostButton_t497 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisButton_t499_m4165_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484126);
		GameObject_GetComponent_TisImage_t501_m4166_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484127);
		s_Il2CppMethodIntialized = true;
	}
	Image_t501 * V_0 = {0};
	{
		int32_t L_0 = ___bType;
		__this->___boostType_6 = L_0;
		GameObject_t352 * L_1 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Button_t499 * L_2 = GameObject_GetComponent_TisButton_t499_m4165(L_1, /*hidden argument*/GameObject_GetComponent_TisButton_t499_m4165_MethodInfo_var);
		__this->___button_2 = L_2;
		GameObject_t352 * L_3 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t501 * L_4 = GameObject_GetComponent_TisImage_t501_m4166(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t501_m4166_MethodInfo_var);
		V_0 = L_4;
		Image_t501 * L_5 = V_0;
		BoostConfig_t494 * L_6 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___boostType_6);
		NullCheck(L_6);
		Sprite_t510 * L_8 = BoostConfig_GetButtonImageForType_m2798(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_set_sprite_m4167(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::RefreshButton()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void BoostButton_RefreshButton_m2748 (BoostButton_t497 * __this, const MethodInfo* method)
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
	Button_t499 * G_B5_0 = {0};
	Button_t499 * G_B3_0 = {0};
	Button_t499 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	Button_t499 * G_B6_1 = {0};
	{
		Text_t500 * L_0 = (__this->___levelLockText_3);
		NullCheck(L_0);
		GameObject_t352 * L_1 = Component_get_gameObject_m3753(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3953(L_1, 1, /*hidden argument*/NULL);
		LevelConfig_t591 * L_2 = LevelConfig_get_instance_m3103(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___boostType_6);
		NullCheck(L_2);
		int32_t L_4 = LevelConfig_GetLevelLock_m3110(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		GameLevelState_t556 * L_5 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = GameLevelState_get_gameLevel_m2971(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0093;
		}
	}
	{
		Text_t500 * L_9 = (__this->___levelLockText_3);
		NullCheck(L_9);
		GameObject_t352 * L_10 = Component_get_gameObject_m3753(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m3953(L_10, 1, /*hidden argument*/NULL);
		Image_t501 * L_11 = (__this->___levelLockImage_4);
		NullCheck(L_11);
		GameObject_t352 * L_12 = Component_get_gameObject_m3753(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m3953(L_12, 1, /*hidden argument*/NULL);
		Text_t500 * L_13 = (__this->___costText_5);
		NullCheck(L_13);
		GameObject_t352 * L_14 = Component_get_gameObject_m3753(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m3953(L_14, 0, /*hidden argument*/NULL);
		Text_t500 * L_15 = (__this->___levelLockText_3);
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral998, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_19);
		Button_t499 * L_20 = (__this->___button_2);
		NullCheck(L_20);
		Selectable_set_interactable_m4168(L_20, 0, /*hidden argument*/NULL);
		goto IL_0165;
	}

IL_0093:
	{
		Text_t500 * L_21 = (__this->___levelLockText_3);
		NullCheck(L_21);
		GameObject_t352 * L_22 = Component_get_gameObject_m3753(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_SetActive_m3953(L_22, 0, /*hidden argument*/NULL);
		Image_t501 * L_23 = (__this->___levelLockImage_4);
		NullCheck(L_23);
		GameObject_t352 * L_24 = Component_get_gameObject_m3753(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m3953(L_24, 0, /*hidden argument*/NULL);
		Text_t500 * L_25 = (__this->___costText_5);
		NullCheck(L_25);
		GameObject_t352 * L_26 = Component_get_gameObject_m3753(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_SetActive_m3953(L_26, 1, /*hidden argument*/NULL);
		BoostConfig_t494 * L_27 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_28 = (__this->___boostType_6);
		NullCheck(L_27);
		int32_t L_29 = BoostConfig_GetCurrentPriceForBoost_m2801(L_27, L_28, /*hidden argument*/NULL);
		__this->___priceInTreats_7 = L_29;
		Text_t500 * L_30 = (__this->___costText_5);
		int32_t L_31 = (__this->___priceInTreats_7);
		int32_t L_32 = L_31;
		Object_t * L_33 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_32);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral999, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		Button_t499 * L_35 = (__this->___button_2);
		PlayerStats_t513 * L_36 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_37 = (__this->___priceInTreats_7);
		NullCheck(L_36);
		bool L_38 = PlayerStats_CanAfford_m3382(L_36, L_37, /*hidden argument*/NULL);
		G_B3_0 = L_35;
		if (!L_38)
		{
			G_B5_0 = L_35;
			goto IL_0132;
		}
	}
	{
		BoostConfig_t494 * L_39 = BoostConfig_get_instance_m2787(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_40 = BoostConfig_IsBoostActive_m2808(L_39, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_40)
		{
			G_B5_0 = G_B3_0;
			goto IL_0132;
		}
	}
	{
		GamePhaseState_t560 * L_41 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_41);
		bool L_42 = GamePhaseState_IsPlaying_m3008(L_41, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_42));
		G_B6_1 = G_B4_0;
		goto IL_0133;
	}

IL_0132:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0133:
	{
		NullCheck(G_B6_1);
		Selectable_set_interactable_m4168(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		Button_t499 * L_43 = (__this->___button_2);
		NullCheck(L_43);
		bool L_44 = Selectable_get_interactable_m4169(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0159;
		}
	}
	{
		Text_t500 * L_45 = (__this->___costText_5);
		NullCheck(L_45);
		Text_set_fontStyle_m4170(L_45, 2, /*hidden argument*/NULL);
		goto IL_0165;
	}

IL_0159:
	{
		Text_t500 * L_46 = (__this->___costText_5);
		NullCheck(L_46);
		Text_set_fontStyle_m4170(L_46, 0, /*hidden argument*/NULL);
	}

IL_0165:
	{
		return;
	}
}
// BoostConfig/BoostType BoostButton::GetBoostType()
extern "C" int32_t BoostButton_GetBoostType_m2749 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___boostType_6);
		return L_0;
	}
}
// System.Void BoostButton::OnGameLevelChanged()
extern "C" void BoostButton_OnGameLevelChanged_m2750 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_9 = 1;
		return;
	}
}
// System.Void BoostButton::OnGamePhaseChanged()
extern "C" void BoostButton_OnGamePhaseChanged_m2751 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_DebugFlagSet_m2866(L_0, 0, /*hidden argument*/NULL);
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
		__this->___buttonDirty_9 = 1;
		BoostButton_CheckForLevelUnlockEffects_m2752(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButton::CheckForLevelUnlockEffects()
extern "C" void BoostButton_CheckForLevelUnlockEffects_m2752 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		GamePhaseState_t560 * L_0 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GamePhaseState_IsPlaying_m3008(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		GameLevelState_t556 * L_2 = GameLevelState_get_instance_m2973(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GameLevelState_get_gameLevel_m2971(L_2, /*hidden argument*/NULL);
		LevelConfig_t591 * L_4 = LevelConfig_get_instance_m3103(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___boostType_6);
		NullCheck(L_4);
		int32_t L_6 = LevelConfig_GetLevelLock_m3110(L_4, L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_003b;
		}
	}
	{
		Object_t * L_7 = BoostButton_TriggerDistortionEffect_m2757(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3716(__this, L_7, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void BoostButton::OnBoostsChanged()
extern "C" void BoostButton_OnBoostsChanged_m2753 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_9 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUsageChanged(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostButton_OnBoostUsageChanged_m2754 (BoostButton_t497 * __this, int32_t ___newType, int32_t ___oldType, const MethodInfo* method)
{
	{
		__this->___buttonDirty_9 = 1;
		return;
	}
}
// System.Void BoostButton::OnTreatsChanged()
extern "C" void BoostButton_OnTreatsChanged_m2755 (BoostButton_t497 * __this, const MethodInfo* method)
{
	{
		__this->___buttonDirty_9 = 1;
		return;
	}
}
// System.Void BoostButton::OnBoostUnlocked(BoostConfig/BoostType)
extern const MethodInfo* Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var;
extern "C" void BoostButton_OnBoostUnlocked_m2756 (BoostButton_t497 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484120);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___bType;
		int32_t L_1 = (__this->___boostType_6);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		DistortForEffect_t535 * L_2 = Component_GetComponent_TisDistortForEffect_t535_m4164(__this, /*hidden argument*/Component_GetComponent_TisDistortForEffect_t535_m4164_MethodInfo_var);
		NullCheck(L_2);
		DistortForEffect_Distort_m2884(L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Collections.IEnumerator BoostButton::TriggerDistortionEffect()
extern TypeInfo* U3CTriggerDistortionEffectU3Ec__Iterator11_t498_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostButton_TriggerDistortionEffect_m2757 (BoostButton_t497 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CTriggerDistortionEffectU3Ec__Iterator11_t498_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * V_0 = {0};
	{
		U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * L_0 = (U3CTriggerDistortionEffectU3Ec__Iterator11_t498 *)il2cpp_codegen_object_new (U3CTriggerDistortionEffectU3Ec__Iterator11_t498_il2cpp_TypeInfo_var);
		U3CTriggerDistortionEffectU3Ec__Iterator11__ctor_m2735(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CTriggerDistortionEffectU3Ec__Iterator11_t498 * L_2 = V_0;
		return L_2;
	}
}
// BoostButtonLayout/<DelayThenLayout>c__Iterator12
#include "AssemblyU2DCSharp_BoostButtonLayout_U3CDelayThenLayoutU3Ec__.h"
#ifndef _MSC_VER
#else
#endif
// BoostButtonLayout/<DelayThenLayout>c__Iterator12
#include "AssemblyU2DCSharp_BoostButtonLayout_U3CDelayThenLayoutU3Ec__MethodDeclarations.h"



// System.Void BoostButtonLayout/<DelayThenLayout>c__Iterator12::.ctor()
extern "C" void U3CDelayThenLayoutU3Ec__Iterator12__ctor_m2758 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostButtonLayout/<DelayThenLayout>c__Iterator12::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CDelayThenLayoutU3Ec__Iterator12_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2759 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object BoostButtonLayout/<DelayThenLayout>c__Iterator12::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CDelayThenLayoutU3Ec__Iterator12_System_Collections_IEnumerator_get_Current_m2760 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean BoostButtonLayout/<DelayThenLayout>c__Iterator12::MoveNext()
extern TypeInfo* WaitForSeconds_t785_il2cpp_TypeInfo_var;
extern "C" bool U3CDelayThenLayoutU3Ec__Iterator12_MoveNext_m2761 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		goto IL_004f;
	}

IL_0021:
	{
		WaitForSeconds_t785 * L_2 = (WaitForSeconds_t785 *)il2cpp_codegen_object_new (WaitForSeconds_t785_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4136(L_2, (0.0f), /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0051;
	}

IL_003d:
	{
		BoostButtonLayout_t502 * L_3 = (__this->___U3CU3Ef__this_2);
		NullCheck(L_3);
		BoostButtonLayout_DoLayout_m2768(L_3, /*hidden argument*/NULL);
		__this->___U24PC_0 = (-1);
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
// System.Void BoostButtonLayout/<DelayThenLayout>c__Iterator12::Dispose()
extern "C" void U3CDelayThenLayoutU3Ec__Iterator12_Dispose_m2762 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void BoostButtonLayout/<DelayThenLayout>c__Iterator12::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CDelayThenLayoutU3Ec__Iterator12_Reset_m2763 (U3CDelayThenLayoutU3Ec__Iterator12_t503 * __this, const MethodInfo* method)
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

// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_19.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9.h"
// System.Collections.Generic.List`1<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_gen_19MethodDeclarations.h"
// Utilities
#include "AssemblyU2DCSharp_UtilitiesMethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<BoostButton>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_9MethodDeclarations.h"
struct GameObject_t352;
struct BoostButton_t497;
// Declaration !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
// !!0 UnityEngine.GameObject::GetComponent<BoostButton>()
#define GameObject_GetComponent_TisBoostButton_t497_m4171(__this, method) (( BoostButton_t497 * (*) (GameObject_t352 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m4026_gshared)(__this, method)


// System.Void BoostButtonLayout::.ctor()
extern "C" void BoostButtonLayout__ctor_m2764 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::Awake()
extern "C" void BoostButtonLayout_Awake_m2765 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	{
		__this->___boostButtons_4 = (List_1_t504 *)NULL;
		return;
	}
}
// System.Void BoostButtonLayout::Start()
extern "C" void BoostButtonLayout_Start_m2766 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = BoostButtonLayout_DelayThenLayout_m2767(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3716(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoostButtonLayout::DelayThenLayout()
extern TypeInfo* U3CDelayThenLayoutU3Ec__Iterator12_t503_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostButtonLayout_DelayThenLayout_m2767 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CDelayThenLayoutU3Ec__Iterator12_t503_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	U3CDelayThenLayoutU3Ec__Iterator12_t503 * V_0 = {0};
	{
		U3CDelayThenLayoutU3Ec__Iterator12_t503 * L_0 = (U3CDelayThenLayoutU3Ec__Iterator12_t503 *)il2cpp_codegen_object_new (U3CDelayThenLayoutU3Ec__Iterator12_t503_il2cpp_TypeInfo_var);
		U3CDelayThenLayoutU3Ec__Iterator12__ctor_m2758(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CDelayThenLayoutU3Ec__Iterator12_t503 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_2 = __this;
		U3CDelayThenLayoutU3Ec__Iterator12_t503 * L_2 = V_0;
		return L_2;
	}
}
// System.Void BoostButtonLayout::DoLayout()
extern "C" void BoostButtonLayout_DoLayout_m2768 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	{
		BoostButtonLayout_AddBoostButtons_m2769(__this, /*hidden argument*/NULL);
		BoostButtonLayout_LayoutBoostButtons_m2771(__this, /*hidden argument*/NULL);
		BoostButtonLayout_RefreshBoostButtons_m2772(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::AddBoostButtons()
extern TypeInfo* List_1_t504_il2cpp_TypeInfo_var;
extern TypeInfo* GameObjectU5BU5D_t505_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4172_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtons_m2769 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t504_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(472);
		GameObjectU5BU5D_t505_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(473);
		List_1__ctor_m4172_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484128);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t504 * L_0 = (List_1_t504 *)il2cpp_codegen_object_new (List_1_t504_il2cpp_TypeInfo_var);
		List_1__ctor_m4172(L_0, /*hidden argument*/List_1__ctor_m4172_MethodInfo_var);
		__this->___boostButtons_4 = L_0;
		__this->___boostButtonGameObjects_5 = ((GameObjectU5BU5D_t505*)SZArrayNew(GameObjectU5BU5D_t505_il2cpp_TypeInfo_var, 5));
		V_0 = 0;
		goto IL_0029;
	}

IL_001e:
	{
		int32_t L_1 = V_0;
		BoostButtonLayout_AddBoostButtonForType_m2770(__this, L_1, /*hidden argument*/NULL);
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
extern TypeInfo* GameObject_t352_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisBoostButton_t497_m4171_MethodInfo_var;
extern "C" void BoostButtonLayout_AddBoostButtonForType_m2770 (BoostButtonLayout_t502 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(278);
		GameObject_GetComponent_TisBoostButton_t497_m4171_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484129);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t352 * V_0 = {0};
	BoostButton_t497 * V_1 = {0};
	{
		GameObject_t352 * L_0 = (__this->___boostButtonPrototype_3);
		Vector3_t536  L_1 = {0};
		Vector3__ctor_m4031(&L_1, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t788  L_2 = Quaternion_get_identity_m4157(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t703 * L_3 = Object_Instantiate_m4158(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = ((GameObject_t352 *)IsInst(L_3, GameObject_t352_il2cpp_TypeInfo_var));
		GameObject_t352 * L_4 = V_0;
		NullCheck(L_4);
		BoostButton_t497 * L_5 = GameObject_GetComponent_TisBoostButton_t497_m4171(L_4, /*hidden argument*/GameObject_GetComponent_TisBoostButton_t497_m4171_MethodInfo_var);
		V_1 = L_5;
		GameObject_t352 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t406 * L_7 = GameObject_get_transform_m4036(L_6, /*hidden argument*/NULL);
		GameObject_t352 * L_8 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_t406 * L_9 = GameObject_get_transform_m4036(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_SetParent_m4159(L_7, L_9, 0, /*hidden argument*/NULL);
		BoostButton_t497 * L_10 = V_1;
		int32_t L_11 = ___bType;
		NullCheck(L_10);
		BoostButton_ConfigureForType_m2747(L_10, L_11, /*hidden argument*/NULL);
		List_1_t504 * L_12 = (__this->___boostButtons_4);
		BoostButton_t497 * L_13 = V_1;
		NullCheck(L_12);
		VirtActionInvoker1< BoostButton_t497 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<BoostButton>::Add(!0) */, L_12, L_13);
		GameObjectU5BU5D_t505* L_14 = (__this->___boostButtonGameObjects_5);
		int32_t L_15 = ___bType;
		BoostButton_t497 * L_16 = V_1;
		NullCheck(L_16);
		GameObject_t352 * L_17 = Component_get_gameObject_m3753(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, L_17);
		*((GameObject_t352 **)(GameObject_t352 **)SZArrayLdElema(L_14, L_15)) = (GameObject_t352 *)L_17;
		return;
	}
}
// System.Void BoostButtonLayout::LayoutBoostButtons()
extern TypeInfo* Utilities_t672_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var;
extern "C" void BoostButtonLayout_LayoutBoostButtons_m2771 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Utilities_t672_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(474);
		GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484119);
		s_Il2CppMethodIntialized = true;
	}
	RectTransform_t543 * V_0 = {0};
	float V_1 = 0.0f;
	Rect_t694  V_2 = {0};
	{
		GameObject_t352 * L_0 = Component_get_gameObject_m3753(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_t543 * L_1 = GameObject_GetComponent_TisRectTransform_t543_m4156(L_0, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t543_m4156_MethodInfo_var);
		V_0 = L_1;
		RectTransform_t543 * L_2 = V_0;
		NullCheck(L_2);
		Rect_t694  L_3 = RectTransform_get_rect_m4173(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = Rect_get_width_m4034((&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_1;
		GameObjectU5BU5D_t505* L_6 = (__this->___boostButtonGameObjects_5);
		float L_7 = (__this->___boostButtonYOffset_2);
		IL2CPP_RUNTIME_CLASS_INIT(Utilities_t672_il2cpp_TypeInfo_var);
		Utilities_SpaceHorizontally_m3619(NULL /*static, unused*/, L_5, L_6, L_7, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostButtonLayout::RefreshBoostButtons()
extern TypeInfo* Enumerator_t789_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m4174_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m4175_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m4176_MethodInfo_var;
extern "C" void BoostButtonLayout_RefreshBoostButtons_m2772 (BoostButtonLayout_t502 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(475);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m4174_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484130);
		Enumerator_get_Current_m4175_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484131);
		Enumerator_MoveNext_m4176_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484132);
		s_Il2CppMethodIntialized = true;
	}
	BoostButton_t497 * V_0 = {0};
	Enumerator_t789  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t504 * L_0 = (__this->___boostButtons_4);
		NullCheck(L_0);
		Enumerator_t789  L_1 = List_1_GetEnumerator_m4174(L_0, /*hidden argument*/List_1_GetEnumerator_m4174_MethodInfo_var);
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
			BoostButton_t497 * L_2 = Enumerator_get_Current_m4175((&V_1), /*hidden argument*/Enumerator_get_Current_m4175_MethodInfo_var);
			V_0 = L_2;
			BoostButton_t497 * L_3 = V_0;
			NullCheck(L_3);
			BoostButton_RefreshButton_m2748(L_3, /*hidden argument*/NULL);
		}

IL_001f:
		{
			bool L_4 = Enumerator_MoveNext_m4176((&V_1), /*hidden argument*/Enumerator_MoveNext_m4176_MethodInfo_var);
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
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		Enumerator_t789  L_5 = V_1;
		Enumerator_t789  L_6 = L_5;
		Object_t * L_7 = Box(Enumerator_t789_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_7);
		IL2CPP_END_FINALLY(48)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003c:
	{
		return;
	}
}
// BoostButton BoostButtonLayout::GetButtonForBoost(BoostConfig/BoostType)
extern "C" BoostButton_t497 * BoostButtonLayout_GetButtonForBoost_m2773 (BoostButtonLayout_t502 * __this, int32_t ___boostType, const MethodInfo* method)
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
		return (BoostButton_t497 *)NULL;
	}

IL_0009:
	{
		int32_t L_1 = ___boostType;
		V_0 = L_1;
		List_1_t504 * L_2 = (__this->___boostButtons_4);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		BoostButton_t497 * L_4 = (BoostButton_t497 *)VirtFuncInvoker1< BoostButton_t497 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<BoostButton>::get_Item(System.Int32) */, L_2, L_3);
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
extern "C" void BoostActiveEventHandler__ctor_m2774 (BoostActiveEventHandler_t507 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType)
extern "C" void BoostActiveEventHandler_Invoke_m2775 (BoostActiveEventHandler_t507 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		BoostActiveEventHandler_Invoke_m2775((BoostActiveEventHandler_t507 *)__this->___prev_9,___newBoostType, ___oldBoostType, method);
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
extern "C" void pinvoke_delegate_wrapper_BoostActiveEventHandler_t507(Il2CppObject* delegate, int32_t ___newBoostType, int32_t ___oldBoostType)
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
extern TypeInfo* BoostType_t506_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostActiveEventHandler_BeginInvoke_m2776 (BoostActiveEventHandler_t507 * __this, int32_t ___newBoostType, int32_t ___oldBoostType, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostType_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(BoostType_t506_il2cpp_TypeInfo_var, &___newBoostType);
	__d_args[1] = Box(BoostType_t506_il2cpp_TypeInfo_var, &___oldBoostType);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void BoostConfig/BoostActiveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void BoostActiveEventHandler_EndInvoke_m2777 (BoostActiveEventHandler_t507 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// BoostConfig/<WaitThenCleanup>c__Iterator13
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__Iterat.h"
#ifndef _MSC_VER
#else
#endif
// BoostConfig/<WaitThenCleanup>c__Iterator13
#include "AssemblyU2DCSharp_BoostConfig_U3CWaitThenCleanupU3Ec__IteratMethodDeclarations.h"



// System.Void BoostConfig/<WaitThenCleanup>c__Iterator13::.ctor()
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13__ctor_m2778 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator13::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator13_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2779 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Object BoostConfig/<WaitThenCleanup>c__Iterator13::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CWaitThenCleanupU3Ec__Iterator13_System_Collections_IEnumerator_get_Current_m2780 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_2);
		return L_0;
	}
}
// System.Boolean BoostConfig/<WaitThenCleanup>c__Iterator13::MoveNext()
extern TypeInfo* WaitForSeconds_t785_il2cpp_TypeInfo_var;
extern "C" bool U3CWaitThenCleanupU3Ec__Iterator13_MoveNext_m2781 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForSeconds_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(443);
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
		WaitForSeconds_t785 * L_3 = (WaitForSeconds_t785 *)il2cpp_codegen_object_new (WaitForSeconds_t785_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m4136(L_3, L_2, /*hidden argument*/NULL);
		__this->___U24current_2 = L_3;
		__this->___U24PC_1 = 1;
		goto IL_005e;
	}

IL_003e:
	{
		BoostConfig_t494 * L_4 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_4);
		L_4->___activePause_3 = (Object_t *)NULL;
		BoostConfig_t494 * L_5 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_5);
		BoostConfig_CleanupActiveBoost_m2806(L_5, /*hidden argument*/NULL);
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
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13_Dispose_m2782 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_1 = (-1);
		return;
	}
}
// System.Void BoostConfig/<WaitThenCleanup>c__Iterator13::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CWaitThenCleanupU3Ec__Iterator13_Reset_m2783 (U3CWaitThenCleanupU3Ec__Iterator13_t508 * __this, const MethodInfo* method)
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
// SoundController
#include "AssemblyU2DCSharp_SoundControllerMethodDeclarations.h"
// SFXPlayer
#include "AssemblyU2DCSharp_SFXPlayerMethodDeclarations.h"
// TipController
#include "AssemblyU2DCSharp_TipControllerMethodDeclarations.h"


// System.Void BoostConfig::.ctor()
extern "C" void BoostConfig__ctor_m2784 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::add_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_add_BoostActive_m2785 (BoostConfig_t494 * __this, BoostActiveEventHandler_t507 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t507 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t507 * L_1 = ___value;
		Delegate_t724 * L_2 = Delegate_Combine_m3756(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t507 *)Castclass(L_2, BoostActiveEventHandler_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void BoostConfig::remove_BoostActive(BoostConfig/BoostActiveEventHandler)
extern TypeInfo* BoostActiveEventHandler_t507_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_remove_BoostActive_m2786 (BoostConfig_t494 * __this, BoostActiveEventHandler_t507 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostActiveEventHandler_t507_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostActiveEventHandler_t507 * L_0 = (__this->___BoostActive_7);
		BoostActiveEventHandler_t507 * L_1 = ___value;
		Delegate_t724 * L_2 = Delegate_Remove_m3764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___BoostActive_7 = ((BoostActiveEventHandler_t507 *)Castclass(L_2, BoostActiveEventHandler_t507_il2cpp_TypeInfo_var));
		return;
	}
}
// BoostConfig BoostConfig::get_instance()
extern TypeInfo* BoostConfig_t494_il2cpp_TypeInfo_var;
extern "C" BoostConfig_t494 * BoostConfig_get_instance_m2787 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t494 * L_0 = ((BoostConfig_t494_StaticFields*)BoostConfig_t494_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void BoostConfig::set_instance(BoostConfig)
extern TypeInfo* BoostConfig_t494_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_set_instance_m2788 (Object_t * __this /* static, unused */, BoostConfig_t494 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostConfig_t494_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	{
		BoostConfig_t494 * L_0 = ___value;
		((BoostConfig_t494_StaticFields*)BoostConfig_t494_il2cpp_TypeInfo_var->static_fields)->___U3CinstanceU3Ek__BackingField_8 = L_0;
		return;
	}
}
// BoostConfig/BoostType BoostConfig::get_activeBoost()
extern "C" int32_t BoostConfig_get_activeBoost_m2789 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CactiveBoostU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void BoostConfig::set_activeBoost(BoostConfig/BoostType)
extern "C" void BoostConfig_set_activeBoost_m2790 (BoostConfig_t494 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CactiveBoostU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void BoostConfig::Awake()
extern "C" void BoostConfig_Awake_m2791 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		BoostConfig_set_instance_m2788(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		BoostConfig_set_activeBoost_m2790(__this, 5, /*hidden argument*/NULL);
		BoostConfig_LoadBoostDescs_m2797(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::Start()
extern "C" void BoostConfig_Start_m2792 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		BoostConfig_RegisterForEvents_m2794(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::OnDestroy()
extern "C" void BoostConfig_OnDestroy_m2793 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		BoostConfig_UnregisterForEvents_m2795(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::RegisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var;
extern "C" void BoostConfig_RegisterForEvents_m2794 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var = il2cpp_codegen_method_info_from_index(485);
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
		GamePhaseState_t560 * L_1 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var };
		GamePhaseChangedEventHandler_t559 * L_3 = (GamePhaseChangedEventHandler_t559 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2982(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_add_GamePhaseChanged_m2995(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::UnregisterForEvents()
extern TypeInfo* GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var;
extern const MethodInfo* BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var;
extern "C" void BoostConfig_UnregisterForEvents_m2795 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var = il2cpp_codegen_method_info_from_index(485);
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
		GamePhaseState_t560 * L_1 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)BoostConfig_OnGamePhaseChanged_m2796_MethodInfo_var };
		GamePhaseChangedEventHandler_t559 * L_3 = (GamePhaseChangedEventHandler_t559 *)il2cpp_codegen_object_new (GamePhaseChangedEventHandler_t559_il2cpp_TypeInfo_var);
		GamePhaseChangedEventHandler__ctor_m2982(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GamePhaseState_remove_GamePhaseChanged_m2996(L_1, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void BoostConfig::OnGamePhaseChanged()
extern "C" void BoostConfig_OnGamePhaseChanged_m2796 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		DebugConfig_t530 * L_0 = DebugConfig_get_instance_m2862(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = DebugConfig_DebugFlagSet_m2866(L_0, 1, /*hidden argument*/NULL);
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
		GamePhaseState_t560 * L_2 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = GamePhaseState_get_gamePhase_m2997(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		BoostConfig_CancelBoosts_m2803(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void BoostConfig::LoadBoostDescs()
extern TypeInfo* BoostDescU5BU5D_t509_il2cpp_TypeInfo_var;
extern TypeInfo* TipConfig_t511_il2cpp_TypeInfo_var;
extern TypeInfo* BoostDesc_t512_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_LoadBoostDescs_m2797 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BoostDescU5BU5D_t509_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(478);
		TipConfig_t511_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(480);
		BoostDesc_t512_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___boostDescs_2 = ((BoostDescU5BU5D_t509*)SZArrayNew(BoostDescU5BU5D_t509_il2cpp_TypeInfo_var, 5));
		BoostDescU5BU5D_t509* L_0 = (__this->___boostDescs_2);
		TipConfig_t511 * L_1 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3550(L_1, (String_t*) &_stringLiteral1002, (String_t*) &_stringLiteral1003, /*hidden argument*/NULL);
		BoostDesc_t512 * L_2 = (BoostDesc_t512 *)il2cpp_codegen_object_new (BoostDesc_t512_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2809(L_2, (String_t*) &_stringLiteral1000, (String_t*) &_stringLiteral1001, (String_t*) &_stringLiteral1001, (15.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_2);
		*((BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_0, 0)) = (BoostDesc_t512 *)L_2;
		BoostDescU5BU5D_t509* L_3 = (__this->___boostDescs_2);
		TipConfig_t511 * L_4 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3550(L_4, (String_t*) &_stringLiteral1006, (String_t*) &_stringLiteral1007, /*hidden argument*/NULL);
		BoostDesc_t512 * L_5 = (BoostDesc_t512 *)il2cpp_codegen_object_new (BoostDesc_t512_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2809(L_5, (String_t*) &_stringLiteral1004, (String_t*) &_stringLiteral1005, (String_t*) &_stringLiteral1005, (15.0f), L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_3, 1)) = (BoostDesc_t512 *)L_5;
		BoostDescU5BU5D_t509* L_6 = (__this->___boostDescs_2);
		TipConfig_t511 * L_7 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3550(L_7, (String_t*) &_stringLiteral1010, (String_t*) &_stringLiteral1011, /*hidden argument*/NULL);
		BoostDesc_t512 * L_8 = (BoostDesc_t512 *)il2cpp_codegen_object_new (BoostDesc_t512_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2809(L_8, (String_t*) &_stringLiteral1008, (String_t*) &_stringLiteral1009, (String_t*) &_stringLiteral1009, (15.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_8);
		*((BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_6, 2)) = (BoostDesc_t512 *)L_8;
		BoostDescU5BU5D_t509* L_9 = (__this->___boostDescs_2);
		TipConfig_t511 * L_10 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3550(L_10, (String_t*) &_stringLiteral1014, (String_t*) &_stringLiteral1015, /*hidden argument*/NULL);
		BoostDesc_t512 * L_11 = (BoostDesc_t512 *)il2cpp_codegen_object_new (BoostDesc_t512_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2809(L_11, (String_t*) &_stringLiteral1012, (String_t*) &_stringLiteral1013, (String_t*) &_stringLiteral1013, (7.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, L_11);
		*((BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_9, 4)) = (BoostDesc_t512 *)L_11;
		BoostDescU5BU5D_t509* L_12 = (__this->___boostDescs_2);
		TipConfig_t511 * L_13 = (TipConfig_t511 *)il2cpp_codegen_object_new (TipConfig_t511_il2cpp_TypeInfo_var);
		TipConfig__ctor_m3550(L_13, (String_t*) &_stringLiteral1018, (String_t*) &_stringLiteral1019, /*hidden argument*/NULL);
		BoostDesc_t512 * L_14 = (BoostDesc_t512 *)il2cpp_codegen_object_new (BoostDesc_t512_il2cpp_TypeInfo_var);
		BoostDesc__ctor_m2809(L_14, (String_t*) &_stringLiteral1016, (String_t*) &_stringLiteral1017, (String_t*) &_stringLiteral1017, (7.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_14);
		*((BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_12, 3)) = (BoostDesc_t512 *)L_14;
		return;
	}
}
// UnityEngine.Sprite BoostConfig::GetButtonImageForType(BoostConfig/BoostType)
extern "C" Sprite_t510 * BoostConfig_GetButtonImageForType_m2798 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t509* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t510 * L_4 = ((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3))->___buttonSprite_0);
		return L_4;
	}
}
// UnityEngine.Sprite BoostConfig::GetIntroImageForType(BoostConfig/BoostType)
extern "C" Sprite_t510 * BoostConfig_GetIntroImageForType_m2799 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t509* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3)));
		Sprite_t510 * L_4 = ((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3))->___introScreenSprite_1);
		return L_4;
	}
}
// System.String BoostConfig::GetTitleForType(BoostConfig/BoostType)
extern "C" String_t* BoostConfig_GetTitleForType_m2800 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t509* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = ((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3))->___boostName_3);
		return L_4;
	}
}
// System.Int32 BoostConfig::GetCurrentPriceForBoost(BoostConfig/BoostType)
extern "C" int32_t BoostConfig_GetCurrentPriceForBoost_m2801 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		PlayerStats_t513 * L_0 = PlayerStats_get_instance_m3372(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = ___bType;
		NullCheck(L_0);
		int32_t L_2 = PlayerStats_GetPurchasedBoostCount_m3385(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)1))*(int32_t)((int32_t)((int32_t)L_4+(int32_t)2))))/(int32_t)2));
	}
}
// System.Single BoostConfig::GetBoostTime(BoostConfig/BoostType)
extern "C" float BoostConfig_GetBoostTime_m2802 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bType;
		V_0 = L_0;
		BoostDescU5BU5D_t509* L_1 = (__this->___boostDescs_2);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3)));
		float L_4 = ((*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_1, L_3))->___effectiveTime_2);
		return L_4;
	}
}
// System.Void BoostConfig::CancelBoosts()
extern "C" void BoostConfig_CancelBoosts_m2803 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
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
		BoostConfig_CleanupActiveBoost_m2806(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoostConfig::ExecuteBoost(BoostConfig/BoostType)
extern TypeInfo* SoundController_t651_il2cpp_TypeInfo_var;
extern TypeInfo* TipController_t660_il2cpp_TypeInfo_var;
extern "C" void BoostConfig_ExecuteBoost_m2804 (BoostConfig_t494 * __this, int32_t ___bType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SoundController_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(481);
		TipController_t660_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(482);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = {0};
	BoostDesc_t512 * V_2 = {0};
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
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
		GamePhaseState_t560 * L_2 = GamePhaseState_get_instance_m3003(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = GamePhaseState_IsPlaying_m3008(L_2, /*hidden argument*/NULL);
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
		BoostConfig_CleanupActiveBoost_m2806(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___bType;
		float L_5 = BoostConfig_GetBoostTime_m2802(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int32_t L_6 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = ___bType;
		BoostConfig_set_activeBoost_m2790(__this, L_7, /*hidden argument*/NULL);
		float L_8 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___activeBoostStartTime_4 = L_8;
		float L_9 = (__this->___activeBoostStartTime_4);
		float L_10 = V_0;
		__this->___activeBoostEndTime_5 = ((float)((float)L_9+(float)L_10));
		SoundController_t651 * L_11 = ((SoundController_t651_StaticFields*)SoundController_t651_il2cpp_TypeInfo_var->static_fields)->___instance_4;
		NullCheck(L_11);
		bool L_12 = SoundController_get_sfxMuted_m3506(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		SFXPlayer_t638 * L_13 = SFXPlayer_get_instance_m3422(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_13);
		SFXPlayer_Play_m3427(L_13, 6, /*hidden argument*/NULL);
	}

IL_0074:
	{
		BoostActiveEventHandler_t507 * L_14 = (__this->___BoostActive_7);
		if (!L_14)
		{
			goto IL_0091;
		}
	}
	{
		BoostActiveEventHandler_t507 * L_15 = (__this->___BoostActive_7);
		int32_t L_16 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
		int32_t L_17 = V_1;
		NullCheck(L_15);
		VirtActionInvoker2< int32_t, int32_t >::Invoke(11 /* System.Void BoostConfig/BoostActiveEventHandler::Invoke(BoostConfig/BoostType,BoostConfig/BoostType) */, L_15, L_16, L_17);
	}

IL_0091:
	{
		float L_18 = V_0;
		Object_t * L_19 = BoostConfig_WaitThenCleanup_m2805(__this, L_18, /*hidden argument*/NULL);
		__this->___activePause_3 = L_19;
		BoostDescU5BU5D_t509* L_20 = (__this->___boostDescs_2);
		int32_t L_21 = ___bType;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(BoostDesc_t512 **)(BoostDesc_t512 **)SZArrayLdElema(L_20, L_22));
		TipController_t660 * L_23 = ((TipController_t660_StaticFields*)TipController_t660_il2cpp_TypeInfo_var->static_fields)->___instance_5;
		BoostDesc_t512 * L_24 = V_2;
		NullCheck(L_24);
		TipConfig_t511 * L_25 = (L_24->___tipConfig_4);
		NullCheck(L_23);
		TipController_MaybeShowTip_m3568(L_23, L_25, /*hidden argument*/NULL);
		Object_t * L_26 = (__this->___activePause_3);
		MonoBehaviour_StartCoroutine_m3716(__this, L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator BoostConfig::WaitThenCleanup(System.Single)
extern TypeInfo* U3CWaitThenCleanupU3Ec__Iterator13_t508_il2cpp_TypeInfo_var;
extern "C" Object_t * BoostConfig_WaitThenCleanup_m2805 (BoostConfig_t494 * __this, float ___pauseTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CWaitThenCleanupU3Ec__Iterator13_t508_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	U3CWaitThenCleanupU3Ec__Iterator13_t508 * V_0 = {0};
	{
		U3CWaitThenCleanupU3Ec__Iterator13_t508 * L_0 = (U3CWaitThenCleanupU3Ec__Iterator13_t508 *)il2cpp_codegen_object_new (U3CWaitThenCleanupU3Ec__Iterator13_t508_il2cpp_TypeInfo_var);
		U3CWaitThenCleanupU3Ec__Iterator13__ctor_m2778(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWaitThenCleanupU3Ec__Iterator13_t508 * L_1 = V_0;
		float L_2 = ___pauseTime;
		NullCheck(L_1);
		L_1->___pauseTime_0 = L_2;
		U3CWaitThenCleanupU3Ec__Iterator13_t508 * L_3 = V_0;
		float L_4 = ___pauseTime;
		NullCheck(L_3);
		L_3->___U3CU24U3EpauseTime_3 = L_4;
		U3CWaitThenCleanupU3Ec__Iterator13_t508 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___U3CU3Ef__this_4 = __this;
		U3CWaitThenCleanupU3Ec__Iterator13_t508 * L_6 = V_0;
		return L_6;
	}
}
// System.Void BoostConfig::CleanupActiveBoost()
extern "C" void BoostConfig_CleanupActiveBoost_m2806 (BoostConfig_t494 * __this, const MethodInfo* method)
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
		MonoBehaviour_StopCoroutine_m4177(__this, L_1, /*hidden argument*/NULL);
		__this->___activePause_3 = (Object_t *)NULL;
	}

IL_001e:
	{
		int32_t L_2 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		BoostConfig_set_activeBoost_m2790(__this, 5, /*hidden argument*/NULL);
		float L_3 = (0.0f);
		V_1 = L_3;
		__this->___activeBoostEndTime_5 = L_3;
		float L_4 = V_1;
		__this->___activeBoostStartTime_4 = L_4;
		BoostActiveEventHandler_t507 * L_5 = (__this->___BoostActive_7);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		BoostActiveEventHandler_t507 * L_6 = (__this->___BoostActive_7);
		int32_t L_7 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
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
extern "C" float BoostConfig_GetActiveBoostFractionUsed_m2807 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_time_m4138(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___activeBoostStartTime_4);
		float L_2 = (__this->___activeBoostEndTime_5);
		float L_3 = (__this->___activeBoostStartTime_4);
		return ((float)((float)((float)((float)L_0-(float)L_1))/(float)((float)((float)L_2-(float)L_3))));
	}
}
// System.Boolean BoostConfig::IsBoostActive()
extern "C" bool BoostConfig_IsBoostActive_m2808 (BoostConfig_t494 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = BoostConfig_get_activeBoost_m2789(__this, /*hidden argument*/NULL);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
