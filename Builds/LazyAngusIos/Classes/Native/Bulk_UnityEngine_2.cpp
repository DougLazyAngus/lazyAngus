﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategy.h"
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
// SimpleJson.PocoJsonSerializerStrategy
#include "UnityEngine_SimpleJson_PocoJsonSerializerStrategyMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_Constructo.h"
// System.Type
#include "mscorlib_System_Type.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4.h"
#include "mscorlib_ArrayTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegat.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_43.h"
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegat.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"
// System.Enum
#include "mscorlib_System_Enum.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Uri
#include "System_System_Uri.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObject.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_0MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_1MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_2MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_3MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>>
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ThreadSafe_4MethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtilsMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_42MethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_43MethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14MethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffsetMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// SimpleJson.JsonObject
#include "UnityEngine_SimpleJson_JsonObjectMethodDeclarations.h"
// System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15MethodDeclarations.h"
// SimpleJson.Reflection.ReflectionUtils/GetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_GetDelegatMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void SimpleJson.PocoJsonSerializerStrategy::.ctor()
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t2876_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t2877_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t2878_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t2879_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionaryValueFactory_2_t2880_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadSafeDictionary_2_t2881_il2cpp_TypeInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m9831_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m9832_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m9833_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m9834_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionaryValueFactory_2__ctor_m9835_MethodInfo_var;
extern const MethodInfo* ThreadSafeDictionary_2__ctor_m9836_MethodInfo_var;
extern "C" void PocoJsonSerializerStrategy__ctor_m9488 (PocoJsonSerializerStrategy_t2763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ThreadSafeDictionaryValueFactory_2_t2876_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4382);
		ThreadSafeDictionary_2_t2877_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4383);
		ThreadSafeDictionaryValueFactory_2_t2878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4384);
		ThreadSafeDictionary_2_t2879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4385);
		ThreadSafeDictionaryValueFactory_2_t2880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4386);
		ThreadSafeDictionary_2_t2881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4387);
		ThreadSafeDictionaryValueFactory_2__ctor_m9831_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485106);
		ThreadSafeDictionary_2__ctor_m9832_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485107);
		ThreadSafeDictionaryValueFactory_2__ctor_m9833_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485108);
		ThreadSafeDictionary_2__ctor_m9834_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485109);
		ThreadSafeDictionaryValueFactory_2__ctor_m9835_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485110);
		ThreadSafeDictionary_2__ctor_m9836_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485111);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GetVirtualMethodInfo(__this, 6) };
		ThreadSafeDictionaryValueFactory_2_t2876 * L_1 = (ThreadSafeDictionaryValueFactory_2_t2876 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t2876_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m9831(L_1, __this, L_0, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m9831_MethodInfo_var);
		ThreadSafeDictionary_2_t2877 * L_2 = (ThreadSafeDictionary_2_t2877 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t2877_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m9832(L_2, L_1, /*hidden argument*/ThreadSafeDictionary_2__ctor_m9832_MethodInfo_var);
		__this->___ConstructorCache_0 = L_2;
		IntPtr_t L_3 = { (void*)GetVirtualMethodInfo(__this, 7) };
		ThreadSafeDictionaryValueFactory_2_t2878 * L_4 = (ThreadSafeDictionaryValueFactory_2_t2878 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t2878_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m9833(L_4, __this, L_3, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m9833_MethodInfo_var);
		ThreadSafeDictionary_2_t2879 * L_5 = (ThreadSafeDictionary_2_t2879 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t2879_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m9834(L_5, L_4, /*hidden argument*/ThreadSafeDictionary_2__ctor_m9834_MethodInfo_var);
		__this->___GetCache_1 = L_5;
		IntPtr_t L_6 = { (void*)GetVirtualMethodInfo(__this, 8) };
		ThreadSafeDictionaryValueFactory_2_t2880 * L_7 = (ThreadSafeDictionaryValueFactory_2_t2880 *)il2cpp_codegen_object_new (ThreadSafeDictionaryValueFactory_2_t2880_il2cpp_TypeInfo_var);
		ThreadSafeDictionaryValueFactory_2__ctor_m9835(L_7, __this, L_6, /*hidden argument*/ThreadSafeDictionaryValueFactory_2__ctor_m9835_MethodInfo_var);
		ThreadSafeDictionary_2_t2881 * L_8 = (ThreadSafeDictionary_2_t2881 *)il2cpp_codegen_object_new (ThreadSafeDictionary_2_t2881_il2cpp_TypeInfo_var);
		ThreadSafeDictionary_2__ctor_m9836(L_8, L_7, /*hidden argument*/ThreadSafeDictionary_2__ctor_m9836_MethodInfo_var);
		__this->___SetCache_2 = L_8;
		return;
	}
}
// System.Void SimpleJson.PocoJsonSerializerStrategy::.cctor()
extern const Il2CppType* Int32_t82_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void PocoJsonSerializerStrategy__cctor_m9489 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4375);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 0));
		TypeU5BU5D_t1142* L_0 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_0, 0)) = (Type_t *)L_1;
		((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4 = L_0;
		StringU5BU5D_t75* L_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 3));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1906);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 0)) = (String_t*)(String_t*) &_stringLiteral1906;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1907);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 1)) = (String_t*)(String_t*) &_stringLiteral1907;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral1908);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral1908;
		((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5 = L_4;
		return;
	}
}
// System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String)
extern "C" String_t* PocoJsonSerializerStrategy_MapClrMemberNameToJsonFieldName_m9490 (PocoJsonSerializerStrategy_t2763 * __this, String_t* ___clrPropertyName, const MethodInfo* method)
{
	{
		String_t* L_0 = ___clrPropertyName;
		return L_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.PocoJsonSerializerStrategy::ContructorDelegateFactory(System.Type)
extern TypeInfo* PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t2770 * PocoJsonSerializerStrategy_ContructorDelegateFactory_m9491 (PocoJsonSerializerStrategy_t2763 * __this, Type_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4375);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * G_B2_0 = {0};
	Type_t * G_B1_0 = {0};
	TypeU5BU5D_t1142* G_B3_0 = {0};
	Type_t * G_B3_1 = {0};
	{
		Type_t * L_0 = ___key;
		Type_t * L_1 = ___key;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_1);
		G_B1_0 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1142* L_3 = ((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___ArrayConstructorParameterTypes_4;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1142* L_4 = ((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		ConstructorDelegate_t2770 * L_5 = ReflectionUtils_GetContructor_m9527(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate> SimpleJson.PocoJsonSerializerStrategy::GetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t2882_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1319_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2883_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t2857_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2884_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m9837_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_GetterValueFactory_m9492 (PocoJsonSerializerStrategy_t2763 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t2882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4389);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		IEnumerable_1_t1319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3568);
		IEnumerator_1_t2883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4390);
		IDictionary_2_t2857_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4377);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IEnumerable_1_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4391);
		IEnumerator_1_t2884_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4393);
		Dictionary_2__ctor_m9837_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485112);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2882 * L_0 = (Dictionary_2_t2882 *)il2cpp_codegen_object_new (Dictionary_2_t2882_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9837(L_0, /*hidden argument*/Dictionary_2__ctor_m9837_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m9523(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t1319_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t2883_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(15 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_6);
			if (!L_7)
			{
				goto IL_0063;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetGetterMethodInfo_m9525(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_0063;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			GetDelegate_t2768 * L_19 = ReflectionUtils_GetGetMethod_m9530(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, GetDelegate_t2768 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t2857_il2cpp_TypeInfo_var, L_14, L_17, L_19);
		}

IL_0063:
		{
			Object_t* L_20 = V_2;
			NullCheck(L_20);
			bool L_21 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0017;
			}
		}

IL_006e:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			Object_t* L_22 = V_2;
			if (L_22)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(115)
		}

IL_0077:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007e:
	{
		Type_t * L_24 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		Object_t* L_25 = ReflectionUtils_GetFields_m9524(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Object_t* L_26 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t2859_il2cpp_TypeInfo_var, L_25);
		V_5 = L_26;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d0;
		}

IL_0090:
		{
			Object_t* L_27 = V_5;
			NullCheck(L_27);
			FieldInfo_t * L_28 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t2884_il2cpp_TypeInfo_var, L_27);
			V_4 = L_28;
			FieldInfo_t * L_29 = V_4;
			NullCheck(L_29);
			bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_29);
			if (L_30)
			{
				goto IL_00b1;
			}
		}

IL_00a5:
		{
			FieldInfo_t * L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_31);
			if (L_32)
			{
				goto IL_00b6;
			}
		}

IL_00b1:
		{
			goto IL_00d0;
		}

IL_00b6:
		{
			Object_t* L_33 = V_0;
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
			String_t* L_36 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_35);
			FieldInfo_t * L_37 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			GetDelegate_t2768 * L_38 = ReflectionUtils_GetGetMethod_m9531(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
			NullCheck(L_33);
			InterfaceActionInvoker2< String_t*, GetDelegate_t2768 * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>::set_Item(!0,!1) */, IDictionary_2_t2857_il2cpp_TypeInfo_var, L_33, L_36, L_38);
		}

IL_00d0:
		{
			Object_t* L_39 = V_5;
			NullCheck(L_39);
			bool L_40 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_39);
			if (L_40)
			{
				goto IL_0090;
			}
		}

IL_00dc:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00e1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00e1;
	}

FINALLY_00e1:
	{ // begin finally (depth: 1)
		{
			Object_t* L_41 = V_5;
			if (L_41)
			{
				goto IL_00e6;
			}
		}

IL_00e5:
		{
			IL2CPP_END_FINALLY(225)
		}

IL_00e6:
		{
			Object_t* L_42 = V_5;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_42);
			IL2CPP_END_FINALLY(225)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(225)
	{
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ee:
	{
		Object_t* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>> SimpleJson.PocoJsonSerializerStrategy::SetterValueFactory(System.Type)
extern TypeInfo* Dictionary_2_t2885_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1319_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2883_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t2858_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2859_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2884_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m9838_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2__ctor_m9839_MethodInfo_var;
extern "C" Object_t* PocoJsonSerializerStrategy_SetterValueFactory_m9493 (PocoJsonSerializerStrategy_t2763 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t2885_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4394);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		IEnumerable_1_t1319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3568);
		IEnumerator_1_t2883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4390);
		IDictionary_2_t2858_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4379);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		IEnumerable_1_t2859_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4391);
		IEnumerator_1_t2884_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4393);
		Dictionary_2__ctor_m9838_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485113);
		KeyValuePair_2__ctor_m9839_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485114);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	Object_t* V_2 = {0};
	MethodInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	Object_t* V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2885 * L_0 = (Dictionary_2_t2885 *)il2cpp_codegen_object_new (Dictionary_2_t2885_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9838(L_0, /*hidden argument*/Dictionary_2__ctor_m9838_MethodInfo_var);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		Object_t* L_2 = ReflectionUtils_GetProperties_m9523(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator() */, IEnumerable_1_t1319_il2cpp_TypeInfo_var, L_2);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_0017:
		{
			Object_t* L_4 = V_2;
			NullCheck(L_4);
			PropertyInfo_t * L_5 = (PropertyInfo_t *)InterfaceFuncInvoker0< PropertyInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current() */, IEnumerator_1_t2883_il2cpp_TypeInfo_var, L_4);
			V_1 = L_5;
			PropertyInfo_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_6);
			if (!L_7)
			{
				goto IL_006e;
			}
		}

IL_0029:
		{
			PropertyInfo_t * L_8 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			MethodInfo_t * L_9 = ReflectionUtils_GetSetterMethodInfo_m9526(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			MethodInfo_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_10);
			if (L_11)
			{
				goto IL_0046;
			}
		}

IL_003b:
		{
			MethodInfo_t * L_12 = V_3;
			NullCheck(L_12);
			bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_12);
			if (L_13)
			{
				goto IL_004b;
			}
		}

IL_0046:
		{
			goto IL_006e;
		}

IL_004b:
		{
			Object_t* L_14 = V_0;
			PropertyInfo_t * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
			String_t* L_17 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_16);
			PropertyInfo_t * L_18 = V_1;
			NullCheck(L_18);
			Type_t * L_19 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
			PropertyInfo_t * L_20 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			SetDelegate_t2769 * L_21 = ReflectionUtils_GetSetMethod_m9534(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			KeyValuePair_2_t2886  L_22 = {0};
			KeyValuePair_2__ctor_m9839(&L_22, L_19, L_21, /*hidden argument*/KeyValuePair_2__ctor_m9839_MethodInfo_var);
			NullCheck(L_14);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2886  >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t2858_il2cpp_TypeInfo_var, L_14, L_17, L_22);
		}

IL_006e:
		{
			Object_t* L_23 = V_2;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0017;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		{
			Object_t* L_25 = V_2;
			if (L_25)
			{
				goto IL_0082;
			}
		}

IL_0081:
		{
			IL2CPP_END_FINALLY(126)
		}

IL_0082:
		{
			Object_t* L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(126)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x89, IL_0089)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0089:
	{
		Type_t * L_27 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		Object_t* L_28 = ReflectionUtils_GetFields_m9524(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Object_t* L_29 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>::GetEnumerator() */, IEnumerable_1_t2859_il2cpp_TypeInfo_var, L_28);
		V_5 = L_29;
	}

IL_0096:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00f3;
		}

IL_009b:
		{
			Object_t* L_30 = V_5;
			NullCheck(L_30);
			FieldInfo_t * L_31 = (FieldInfo_t *)InterfaceFuncInvoker0< FieldInfo_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.FieldInfo>::get_Current() */, IEnumerator_1_t2884_il2cpp_TypeInfo_var, L_30);
			V_4 = L_31;
			FieldInfo_t * L_32 = V_4;
			NullCheck(L_32);
			bool L_33 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.FieldInfo::get_IsInitOnly() */, L_32);
			if (L_33)
			{
				goto IL_00c8;
			}
		}

IL_00b0:
		{
			FieldInfo_t * L_34 = V_4;
			NullCheck(L_34);
			bool L_35 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, L_34);
			if (L_35)
			{
				goto IL_00c8;
			}
		}

IL_00bc:
		{
			FieldInfo_t * L_36 = V_4;
			NullCheck(L_36);
			bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_36);
			if (L_37)
			{
				goto IL_00cd;
			}
		}

IL_00c8:
		{
			goto IL_00f3;
		}

IL_00cd:
		{
			Object_t* L_38 = V_0;
			FieldInfo_t * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_39);
			String_t* L_41 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_40);
			FieldInfo_t * L_42 = V_4;
			NullCheck(L_42);
			Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_42);
			FieldInfo_t * L_44 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
			SetDelegate_t2769 * L_45 = ReflectionUtils_GetSetMethod_m9535(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
			KeyValuePair_2_t2886  L_46 = {0};
			KeyValuePair_2__ctor_m9839(&L_46, L_43, L_45, /*hidden argument*/KeyValuePair_2__ctor_m9839_MethodInfo_var);
			NullCheck(L_38);
			InterfaceActionInvoker2< String_t*, KeyValuePair_2_t2886  >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.KeyValuePair`2<System.Type,SimpleJson.Reflection.ReflectionUtils/SetDelegate>>::set_Item(!0,!1) */, IDictionary_2_t2858_il2cpp_TypeInfo_var, L_38, L_41, L_46);
		}

IL_00f3:
		{
			Object_t* L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_47);
			if (L_48)
			{
				goto IL_009b;
			}
		}

IL_00ff:
		{
			IL2CPP_LEAVE(0x111, FINALLY_0104);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0104;
	}

FINALLY_0104:
	{ // begin finally (depth: 1)
		{
			Object_t* L_49 = V_5;
			if (L_49)
			{
				goto IL_0109;
			}
		}

IL_0108:
		{
			IL2CPP_END_FINALLY(260)
		}

IL_0109:
		{
			Object_t* L_50 = V_5;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(260)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(260)
	{
		IL2CPP_JUMP_TBL(0x111, IL_0111)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0111:
	{
		Object_t* L_51 = V_0;
		return L_51;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(System.Object,System.Object&)
extern "C" bool PocoJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m9494 (PocoJsonSerializerStrategy_t2763 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Object_t * L_0 = ___input;
		Object_t ** L_1 = ___output;
		bool L_2 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(11 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&) */, __this, L_0, L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		Object_t * L_3 = ___input;
		Object_t ** L_4 = ___output;
		bool L_5 = (bool)VirtFuncInvoker2< bool, Object_t *, Object_t ** >::Invoke(12 /* System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&) */, __this, L_3, L_4);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum)
extern TypeInfo* CultureInfo_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern "C" Object_t * PocoJsonSerializerStrategy_SerializeEnum_m9495 (PocoJsonSerializerStrategy_t2763 * __this, Enum_t100 * ___p, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		s_Il2CppMethodIntialized = true;
	}
	{
		Enum_t100 * L_0 = ___p;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t711_il2cpp_TypeInfo_var);
		CultureInfo_t711 * L_1 = CultureInfo_get_InvariantCulture_m3768(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		double L_2 = Convert_ToDouble_m9829(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		double L_3 = L_2;
		Object_t * L_4 = Box(Double_t90_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeKnownTypes(System.Object,System.Object&)
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t711_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeOffset_t2887_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t74_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t100_il2cpp_TypeInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeKnownTypes_m9496 (PocoJsonSerializerStrategy_t2763 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4375);
		CultureInfo_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		DateTimeOffset_t2887_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4395);
		Guid_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		Uri_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(345);
		Enum_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Enum_t100 * V_1 = {0};
	DateTime_t287  V_2 = {0};
	DateTime_t287  V_3 = {0};
	DateTimeOffset_t2887  V_4 = {0};
	DateTimeOffset_t2887  V_5 = {0};
	Guid_t74  V_6 = {0};
	{
		V_0 = 1;
		Object_t * L_0 = ___input;
		if (!((Object_t *)IsInst(L_0, DateTime_t287_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Object_t ** L_1 = ___output;
		Object_t * L_2 = ___input;
		V_2 = ((*(DateTime_t287 *)((DateTime_t287 *)UnBox (L_2, DateTime_t287_il2cpp_TypeInfo_var))));
		DateTime_t287  L_3 = DateTime_ToUniversalTime_m9840((&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_4 = ((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t711_il2cpp_TypeInfo_var);
		CultureInfo_t711 * L_6 = CultureInfo_get_InvariantCulture_m3768(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = DateTime_ToString_m9841((&V_3), (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_5)), L_6, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_7;
		goto IL_00ca;
	}

IL_0036:
	{
		Object_t * L_8 = ___input;
		if (!((Object_t *)IsInst(L_8, DateTimeOffset_t2887_il2cpp_TypeInfo_var)))
		{
			goto IL_006c;
		}
	}
	{
		Object_t ** L_9 = ___output;
		Object_t * L_10 = ___input;
		V_4 = ((*(DateTimeOffset_t2887 *)((DateTimeOffset_t2887 *)UnBox (L_10, DateTimeOffset_t2887_il2cpp_TypeInfo_var))));
		DateTimeOffset_t2887  L_11 = DateTimeOffset_ToUniversalTime_m9842((&V_4), /*hidden argument*/NULL);
		V_5 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_12 = ((PocoJsonSerializerStrategy_t2763_StaticFields*)PocoJsonSerializerStrategy_t2763_il2cpp_TypeInfo_var->static_fields)->___Iso8601Format_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		int32_t L_13 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t711_il2cpp_TypeInfo_var);
		CultureInfo_t711 * L_14 = CultureInfo_get_InvariantCulture_m3768(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_15 = DateTimeOffset_ToString_m9843((&V_5), (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_13)), L_14, /*hidden argument*/NULL);
		*((Object_t **)(L_9)) = (Object_t *)L_15;
		goto IL_00ca;
	}

IL_006c:
	{
		Object_t * L_16 = ___input;
		if (!((Object_t *)IsInst(L_16, Guid_t74_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		Object_t ** L_17 = ___output;
		Object_t * L_18 = ___input;
		V_6 = ((*(Guid_t74 *)((Guid_t74 *)UnBox (L_18, Guid_t74_il2cpp_TypeInfo_var))));
		String_t* L_19 = Guid_ToString_m9844((&V_6), (String_t*) &_stringLiteral1909, /*hidden argument*/NULL);
		*((Object_t **)(L_17)) = (Object_t *)L_19;
		goto IL_00ca;
	}

IL_0092:
	{
		Object_t * L_20 = ___input;
		if (!((Uri_t700 *)IsInst(L_20, Uri_t700_il2cpp_TypeInfo_var)))
		{
			goto IL_00aa;
		}
	}
	{
		Object_t ** L_21 = ___output;
		Object_t * L_22 = ___input;
		NullCheck(L_22);
		String_t* L_23 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		*((Object_t **)(L_21)) = (Object_t *)L_23;
		goto IL_00ca;
	}

IL_00aa:
	{
		Object_t * L_24 = ___input;
		V_1 = ((Enum_t100 *)IsInst(L_24, Enum_t100_il2cpp_TypeInfo_var));
		Enum_t100 * L_25 = V_1;
		if (!L_25)
		{
			goto IL_00c5;
		}
	}
	{
		Object_t ** L_26 = ___output;
		Enum_t100 * L_27 = V_1;
		Object_t * L_28 = (Object_t *)VirtFuncInvoker1< Object_t *, Enum_t100 * >::Invoke(10 /* System.Object SimpleJson.PocoJsonSerializerStrategy::SerializeEnum(System.Enum) */, __this, L_27);
		*((Object_t **)(L_26)) = (Object_t *)L_28;
		goto IL_00ca;
	}

IL_00c5:
	{
		V_0 = 0;
		Object_t ** L_29 = ___output;
		*((Object_t **)(L_29)) = (Object_t *)NULL;
	}

IL_00ca:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Boolean SimpleJson.PocoJsonSerializerStrategy::TrySerializeUnknownTypes(System.Object,System.Object&)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern TypeInfo* JsonObject_t2761_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t2766_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t2889_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2890_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_2_t758_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Value_m9845_MethodInfo_var;
extern const MethodInfo* KeyValuePair_2_get_Key_m9846_MethodInfo_var;
extern "C" bool PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m9497 (PocoJsonSerializerStrategy_t2763 * __this, Object_t * ___input, Object_t ** ___output, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		JsonObject_t2761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4371);
		IDictionary_2_t2766_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4396);
		IEnumerable_1_t2889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4397);
		IEnumerator_1_t2890_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4399);
		IDictionary_2_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1199);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		KeyValuePair_2_get_Value_m9845_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485115);
		KeyValuePair_2_get_Key_m9846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485116);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t* V_1 = {0};
	Object_t* V_2 = {0};
	KeyValuePair_2_t2888  V_3 = {0};
	Object_t* V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___input;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*) &_stringLiteral1910, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t ** L_2 = ___output;
		*((Object_t **)(L_2)) = (Object_t *)NULL;
		Object_t * L_3 = ___input;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3766(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_5);
		if (L_6)
		{
			goto IL_0028;
		}
	}
	{
		return 0;
	}

IL_0028:
	{
		JsonObject_t2761 * L_7 = (JsonObject_t2761 *)il2cpp_codegen_object_new (JsonObject_t2761_il2cpp_TypeInfo_var);
		JsonObject__ctor_m9448(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		Object_t* L_8 = (__this->___GetCache_1);
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Object_t* L_10 = (Object_t*)InterfaceFuncInvoker1< Object_t*, Type_t * >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Item(!0) */, IDictionary_2_t2766_il2cpp_TypeInfo_var, L_8, L_9);
		V_2 = L_10;
		Object_t* L_11 = V_2;
		NullCheck(L_11);
		Object_t* L_12 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::GetEnumerator() */, IEnumerable_1_t2889_il2cpp_TypeInfo_var, L_11);
		V_4 = L_12;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0048:
		{
			Object_t* L_13 = V_4;
			NullCheck(L_13);
			KeyValuePair_2_t2888  L_14 = (KeyValuePair_2_t2888 )InterfaceFuncInvoker0< KeyValuePair_2_t2888  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,SimpleJson.Reflection.ReflectionUtils/GetDelegate>>::get_Current() */, IEnumerator_1_t2890_il2cpp_TypeInfo_var, L_13);
			V_3 = L_14;
			GetDelegate_t2768 * L_15 = KeyValuePair_2_get_Value_m9845((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m9845_MethodInfo_var);
			if (!L_15)
			{
				goto IL_007c;
			}
		}

IL_005c:
		{
			Object_t* L_16 = V_1;
			String_t* L_17 = KeyValuePair_2_get_Key_m9846((&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m9846_MethodInfo_var);
			String_t* L_18 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String SimpleJson.PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(System.String) */, __this, L_17);
			GetDelegate_t2768 * L_19 = KeyValuePair_2_get_Value_m9845((&V_3), /*hidden argument*/KeyValuePair_2_get_Value_m9845_MethodInfo_var);
			Object_t * L_20 = ___input;
			NullCheck(L_19);
			Object_t * L_21 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(11 /* System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object) */, L_19, L_20);
			NullCheck(L_16);
			InterfaceActionInvoker2< String_t*, Object_t * >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::Add(!0,!1) */, IDictionary_2_t758_il2cpp_TypeInfo_var, L_16, L_18, L_21);
		}

IL_007c:
		{
			Object_t* L_22 = V_4;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0048;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		{
			Object_t* L_24 = V_4;
			if (L_24)
			{
				goto IL_0092;
			}
		}

IL_0091:
		{
			IL2CPP_END_FINALLY(141)
		}

IL_0092:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(141)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_009a:
	{
		Object_t ** L_26 = ___output;
		Object_t* L_27 = V_1;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/GetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetDelegate__ctor_m9498 (GetDelegate_t2768 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::Invoke(System.Object)
extern "C" Object_t * GetDelegate_Invoke_m9499 (GetDelegate_t2768 * __this, Object_t * ___source, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetDelegate_Invoke_m9499((GetDelegate_t2768 *)__this->___prev_9,___source, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___source, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___source,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetDelegate_t2768(Il2CppObject* delegate, Object_t * ___source)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/GetDelegate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetDelegate_BeginInvoke_m9500 (GetDelegate_t2768 * __this, Object_t * ___source, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/GetDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetDelegate_EndInvoke_m9501 (GetDelegate_t2768 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/SetDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_SetDelegatMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SetDelegate__ctor_m9502 (SetDelegate_t2769 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::Invoke(System.Object,System.Object)
extern "C" void SetDelegate_Invoke_m9503 (SetDelegate_t2769 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		SetDelegate_Invoke_m9503((SetDelegate_t2769 *)__this->___prev_9,___source, ___value, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ___value, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(___source, ___value,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_SetDelegate_t2769(Il2CppObject* delegate, Object_t * ___source, Object_t * ___value)
{
	// Marshaling of parameter '___source' to native representation
	Object_t * ____source_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/SetDelegate::BeginInvoke(System.Object,System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * SetDelegate_BeginInvoke_m9504 (SetDelegate_t2769 * __this, Object_t * ___source, Object_t * ___value, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source;
	__d_args[1] = ___value;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void SimpleJson.Reflection.ReflectionUtils/SetDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SetDelegate_EndInvoke_m9505 (SetDelegate_t2769 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_ConstructoMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void ConstructorDelegate__ctor_m9506 (ConstructorDelegate_t2770 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::Invoke(System.Object[])
extern "C" Object_t * ConstructorDelegate_Invoke_m9507 (ConstructorDelegate_t2770 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ConstructorDelegate_Invoke_m9507((ConstructorDelegate_t2770 *)__this->___prev_9,___args, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___args,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_ConstructorDelegate_t2770(Il2CppObject* delegate, ObjectU5BU5D_t627* ___args)
{
	typedef Object_t * (STDCALL *native_function_ptr_type)(Object_t **);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___args' to native representation
	Object_t ** ____args_marshaled = { 0 };
	____args_marshaled = il2cpp_codegen_marshal_array<Object_t *>((Il2CppCodeGenArray*)___args);

	// Native function invocation and marshaling of return value back from native representation
	Object_t * _return_value = _il2cpp_pinvoke_func(____args_marshaled);
	Object_t * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));

	// Marshaling cleanup of parameter '___args' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
extern "C" Object_t * ConstructorDelegate_BeginInvoke_m9508 (ConstructorDelegate_t2770 * __this, ObjectU5BU5D_t627* ___args, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ConstructorDelegate_EndInvoke_m9509 (ConstructorDelegate_t2770 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetCons.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetConsMethodDeclarations.h"

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::.ctor()
extern "C" void U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m9510 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetConstructorByReflection>c__AnonStorey1::<>m__0(System.Object[])
extern "C" Object_t * U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m9511 (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		ConstructorInfo_t1322 * L_0 = (__this->___constructorInfo_0);
		ObjectU5BU5D_t627* L_1 = ___args;
		NullCheck(L_0);
		Object_t * L_2 = ConstructorInfo_Invoke_m9847(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetMMethodDeclarations.h"

// SimpleJson.Reflection.ReflectionUtils
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils.h"


// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m9512 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey2::<>m__1(System.Object)
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m9513 (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * __this, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t627* L_2 = ((ReflectionUtils_t2776_StaticFields*)ReflectionUtils_t2776_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0;
		NullCheck(L_0);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t627* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return L_3;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetGetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::.ctor()
extern "C" void U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m9514 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SimpleJson.Reflection.ReflectionUtils/<GetGetMethodByReflection>c__AnonStorey3::<>m__2(System.Object)
extern "C" Object_t * U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m9515 (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * __this, Object_t * ___source, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetMMethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m9516 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey4::<>m__3(System.Object,System.Object)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m9517 (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = (__this->___methodInfo_0);
		Object_t * L_1 = ___source;
		ObjectU5BU5D_t627* L_2 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		Object_t * L_3 = ___value;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 0)) = (Object_t *)L_3;
		NullCheck(L_0);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t627* >::Invoke(15 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_0, L_1, L_2);
		return;
	}
}
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0.h"
#ifndef _MSC_VER
#else
#endif
// SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5
#include "UnityEngine_SimpleJson_Reflection_ReflectionUtils_U3CGetSetM_0MethodDeclarations.h"



// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::.ctor()
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m9518 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimpleJson.Reflection.ReflectionUtils/<GetSetMethodByReflection>c__AnonStorey5::<>m__4(System.Object,System.Object)
extern "C" void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m9519 (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * __this, Object_t * ___source, Object_t * ___value, const MethodInfo* method)
{
	{
		FieldInfo_t * L_0 = (__this->___fieldInfo_0);
		Object_t * L_1 = ___source;
		Object_t * L_2 = ___value;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32
#include "mscorlib_System_Int32.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void SimpleJson.Reflection.ReflectionUtils::.cctor()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" void ReflectionUtils__cctor_m9520 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ReflectionUtils_t2776_StaticFields*)ReflectionUtils_t2776_il2cpp_TypeInfo_var->static_fields)->___EmptyObjects_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> SimpleJson.Reflection.ReflectionUtils::GetConstructors(System.Type)
extern "C" Object_t* ReflectionUtils_GetConstructors_m9521 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1397* L_1 = (ConstructorInfoU5BU5D_t1397*)VirtFuncInvoker0< ConstructorInfoU5BU5D_t1397* >::Invoke(76 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors() */, L_0);
		return (Object_t*)L_1;
	}
}
// System.Reflection.ConstructorInfo SimpleJson.Reflection.ReflectionUtils::GetConstructorInfo(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_1_t1321_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_1_t2891_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1322 * ReflectionUtils_GetConstructorInfo_m9522 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1142* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		IEnumerable_1_t1321_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3569);
		IEnumerator_1_t2891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4400);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Object_t* V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ConstructorInfo_t1322 * V_3 = {0};
	Object_t* V_4 = {0};
	ParameterInfoU5BU5D_t1399* V_5 = {0};
	ParameterInfo_t1324 * V_6 = {0};
	ParameterInfoU5BU5D_t1399* V_7 = {0};
	int32_t V_8 = 0;
	ConstructorInfo_t1322 * V_9 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		Object_t* L_1 = ReflectionUtils_GetConstructors_m9521(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Object_t* L_2 = V_0;
		NullCheck(L_2);
		Object_t* L_3 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator() */, IEnumerable_1_t1321_il2cpp_TypeInfo_var, L_2);
		V_4 = L_3;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_0014:
		{
			Object_t* L_4 = V_4;
			NullCheck(L_4);
			ConstructorInfo_t1322 * L_5 = (ConstructorInfo_t1322 *)InterfaceFuncInvoker0< ConstructorInfo_t1322 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current() */, IEnumerator_1_t2891_il2cpp_TypeInfo_var, L_4);
			V_3 = L_5;
			ConstructorInfo_t1322 * L_6 = V_3;
			NullCheck(L_6);
			ParameterInfoU5BU5D_t1399* L_7 = (ParameterInfoU5BU5D_t1399*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1399* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
			V_5 = L_7;
			TypeU5BU5D_t1142* L_8 = ___argsType;
			NullCheck(L_8);
			ParameterInfoU5BU5D_t1399* L_9 = V_5;
			NullCheck(L_9);
			if ((((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			goto IL_0085;
		}

IL_0035:
		{
			V_1 = 0;
			V_2 = 1;
			ConstructorInfo_t1322 * L_10 = V_3;
			NullCheck(L_10);
			ParameterInfoU5BU5D_t1399* L_11 = (ParameterInfoU5BU5D_t1399*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1399* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
			V_7 = L_11;
			V_8 = 0;
			goto IL_006c;
		}

IL_0049:
		{
			ParameterInfoU5BU5D_t1399* L_12 = V_7;
			int32_t L_13 = V_8;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			V_6 = (*(ParameterInfo_t1324 **)(ParameterInfo_t1324 **)SZArrayLdElema(L_12, L_14));
			ParameterInfo_t1324 * L_15 = V_6;
			NullCheck(L_15);
			Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
			TypeU5BU5D_t1142* L_17 = ___argsType;
			int32_t L_18 = V_1;
			NullCheck(L_17);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
			int32_t L_19 = L_18;
			if ((((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_17, L_19)))))
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			V_2 = 0;
			goto IL_0077;
		}

IL_0066:
		{
			int32_t L_20 = V_8;
			V_8 = ((int32_t)((int32_t)L_20+(int32_t)1));
		}

IL_006c:
		{
			int32_t L_21 = V_8;
			ParameterInfoU5BU5D_t1399* L_22 = V_7;
			NullCheck(L_22);
			if ((((int32_t)L_21) < ((int32_t)(((int32_t)(((Array_t *)L_22)->max_length))))))
			{
				goto IL_0049;
			}
		}

IL_0077:
		{
			bool L_23 = V_2;
			if (!L_23)
			{
				goto IL_0085;
			}
		}

IL_007d:
		{
			ConstructorInfo_t1322 * L_24 = V_3;
			V_9 = L_24;
			IL2CPP_LEAVE(0xA5, FINALLY_0096);
		}

IL_0085:
		{
			Object_t* L_25 = V_4;
			NullCheck(L_25);
			bool L_26 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_0014;
			}
		}

IL_0091:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0096);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0096;
	}

FINALLY_0096:
	{ // begin finally (depth: 1)
		{
			Object_t* L_27 = V_4;
			if (L_27)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(150)
		}

IL_009b:
		{
			Object_t* L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_28);
			IL2CPP_END_FINALLY(150)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(150)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a3:
	{
		return (ConstructorInfo_t1322 *)NULL;
	}

IL_00a5:
	{
		ConstructorInfo_t1322 * L_29 = V_9;
		return L_29;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> SimpleJson.Reflection.ReflectionUtils::GetProperties(System.Type)
extern "C" Object_t* ReflectionUtils_GetProperties_m9523 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1396* L_1 = (PropertyInfoU5BU5D_t1396*)VirtFuncInvoker1< PropertyInfoU5BU5D_t1396*, int32_t >::Invoke(56 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> SimpleJson.Reflection.ReflectionUtils::GetFields(System.Type)
extern "C" Object_t* ReflectionUtils_GetFields_m9524 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t2892* L_1 = (FieldInfoU5BU5D_t2892*)VirtFuncInvoker1< FieldInfoU5BU5D_t2892*, int32_t >::Invoke(46 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)60));
		return (Object_t*)L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetGetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetGetterMethodInfo_m9525 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(19 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// System.Reflection.MethodInfo SimpleJson.Reflection.ReflectionUtils::GetSetterMethodInfo(System.Reflection.PropertyInfo)
extern "C" MethodInfo_t * ReflectionUtils_GetSetterMethodInfo_m9526 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(21 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, 1);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetContructor(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t2770 * ReflectionUtils_GetContructor_m9527 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1142* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t1142* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		ConstructorDelegate_t2770 * L_2 = ReflectionUtils_GetConstructorByReflection_m9529(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Reflection.ConstructorInfo)
extern TypeInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorDelegate_t2770_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m9511_MethodInfo_var;
extern "C" ConstructorDelegate_t2770 * ReflectionUtils_GetConstructorByReflection_m9528 (Object_t * __this /* static, unused */, ConstructorInfo_t1322 * ___constructorInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4401);
		ConstructorDelegate_t2770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4376);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m9511_MethodInfo_var = il2cpp_codegen_method_info_from_index(1469);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * V_0 = {0};
	{
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * L_0 = (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 *)il2cpp_codegen_object_new (U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771_il2cpp_TypeInfo_var);
		U3CGetConstructorByReflectionU3Ec__AnonStorey1__ctor_m9510(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * L_1 = V_0;
		ConstructorInfo_t1322 * L_2 = ___constructorInfo;
		NullCheck(L_1);
		L_1->___constructorInfo_0 = L_2;
		U3CGetConstructorByReflectionU3Ec__AnonStorey1_t2771 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetConstructorByReflectionU3Ec__AnonStorey1_U3CU3Em__0_m9511_MethodInfo_var };
		ConstructorDelegate_t2770 * L_5 = (ConstructorDelegate_t2770 *)il2cpp_codegen_object_new (ConstructorDelegate_t2770_il2cpp_TypeInfo_var);
		ConstructorDelegate__ctor_m9506(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/ConstructorDelegate SimpleJson.Reflection.ReflectionUtils::GetConstructorByReflection(System.Type,System.Type[])
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" ConstructorDelegate_t2770 * ReflectionUtils_GetConstructorByReflection_m9529 (Object_t * __this /* static, unused */, Type_t * ___type, TypeU5BU5D_t1142* ___argsType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfo_t1322 * V_0 = {0};
	ConstructorDelegate_t2770 * G_B3_0 = {0};
	{
		Type_t * L_0 = ___type;
		TypeU5BU5D_t1142* L_1 = ___argsType;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		ConstructorInfo_t1322 * L_2 = ReflectionUtils_GetConstructorInfo_m9522(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConstructorInfo_t1322 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B3_0 = ((ConstructorDelegate_t2770 *)(NULL));
		goto IL_001a;
	}

IL_0014:
	{
		ConstructorInfo_t1322 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		ConstructorDelegate_t2770 * L_5 = ReflectionUtils_GetConstructorByReflection_m9528(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t2768 * ReflectionUtils_GetGetMethod_m9530 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		GetDelegate_t2768 * L_1 = ReflectionUtils_GetGetMethodByReflection_m9532(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" GetDelegate_t2768 * ReflectionUtils_GetGetMethod_m9531 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		GetDelegate_t2768 * L_1 = ReflectionUtils_GetGetMethodByReflection_m9533(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t2768_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m9513_MethodInfo_var;
extern "C" GetDelegate_t2768 * ReflectionUtils_GetGetMethodByReflection_m9532 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4402);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		GetDelegate_t2768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4378);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m9513_MethodInfo_var = il2cpp_codegen_method_info_from_index(1470);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2__ctor_m9512(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetGetterMethodInfo_m9525(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t2772 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey2_U3CU3Em__1_m9513_MethodInfo_var };
		GetDelegate_t2768 * L_6 = (GetDelegate_t2768 *)il2cpp_codegen_object_new (GetDelegate_t2768_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m9498(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/GetDelegate SimpleJson.Reflection.ReflectionUtils::GetGetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773_il2cpp_TypeInfo_var;
extern TypeInfo* GetDelegate_t2768_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m9515_MethodInfo_var;
extern "C" GetDelegate_t2768 * ReflectionUtils_GetGetMethodByReflection_m9533 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4403);
		GetDelegate_t2768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4378);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m9515_MethodInfo_var = il2cpp_codegen_method_info_from_index(1471);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * V_0 = {0};
	{
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * L_0 = (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 *)il2cpp_codegen_object_new (U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773_il2cpp_TypeInfo_var);
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3__ctor_m9514(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t2773 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetGetMethodByReflectionU3Ec__AnonStorey3_U3CU3Em__2_m9515_MethodInfo_var };
		GetDelegate_t2768 * L_5 = (GetDelegate_t2768 *)il2cpp_codegen_object_new (GetDelegate_t2768_il2cpp_TypeInfo_var);
		GetDelegate__ctor_m9498(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.PropertyInfo)
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t2769 * ReflectionUtils_GetSetMethod_m9534 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		SetDelegate_t2769 * L_1 = ReflectionUtils_GetSetMethodByReflection_m9536(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethod(System.Reflection.FieldInfo)
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern "C" SetDelegate_t2769 * ReflectionUtils_GetSetMethod_m9535 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		s_Il2CppMethodIntialized = true;
	}
	{
		FieldInfo_t * L_0 = ___fieldInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		SetDelegate_t2769 * L_1 = ReflectionUtils_GetSetMethodByReflection_m9537(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.PropertyInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774_il2cpp_TypeInfo_var;
extern TypeInfo* ReflectionUtils_t2776_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t2769_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m9517_MethodInfo_var;
extern "C" SetDelegate_t2769 * ReflectionUtils_GetSetMethodByReflection_m9536 (Object_t * __this /* static, unused */, PropertyInfo_t * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4404);
		ReflectionUtils_t2776_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4388);
		SetDelegate_t2769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4381);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m9517_MethodInfo_var = il2cpp_codegen_method_info_from_index(1472);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4__ctor_m9516(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * L_1 = V_0;
		PropertyInfo_t * L_2 = ___propertyInfo;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t2776_il2cpp_TypeInfo_var);
		MethodInfo_t * L_3 = ReflectionUtils_GetSetterMethodInfo_m9526(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_3;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t2774 * L_4 = V_0;
		IntPtr_t L_5 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey4_U3CU3Em__3_m9517_MethodInfo_var };
		SetDelegate_t2769 * L_6 = (SetDelegate_t2769 *)il2cpp_codegen_object_new (SetDelegate_t2769_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m9502(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// SimpleJson.Reflection.ReflectionUtils/SetDelegate SimpleJson.Reflection.ReflectionUtils::GetSetMethodByReflection(System.Reflection.FieldInfo)
extern TypeInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775_il2cpp_TypeInfo_var;
extern TypeInfo* SetDelegate_t2769_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m9519_MethodInfo_var;
extern "C" SetDelegate_t2769 * ReflectionUtils_GetSetMethodByReflection_m9537 (Object_t * __this /* static, unused */, FieldInfo_t * ___fieldInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4405);
		SetDelegate_t2769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4381);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m9519_MethodInfo_var = il2cpp_codegen_method_info_from_index(1473);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * V_0 = {0};
	{
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * L_0 = (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 *)il2cpp_codegen_object_new (U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775_il2cpp_TypeInfo_var);
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5__ctor_m9518(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * L_1 = V_0;
		FieldInfo_t * L_2 = ___fieldInfo;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t2775 * L_3 = V_0;
		IntPtr_t L_4 = { (void*)U3CGetSetMethodByReflectionU3Ec__AnonStorey5_U3CU3Em__4_m9519_MethodInfo_var };
		SetDelegate_t2769 * L_5 = (SetDelegate_t2769 *)il2cpp_codegen_object_new (SetDelegate_t2769_il2cpp_TypeInfo_var);
		SetDelegate__ctor_m9502(L_5, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C" void WrapperlessIcall__ctor_m9538 (WrapperlessIcall_t2777 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"



// System.Void UnityEngine.IL2CPPStructAlignmentAttribute::.ctor()
extern "C" void IL2CPPStructAlignmentAttribute__ctor_m9539 (IL2CPPStructAlignmentAttribute_t2778 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		__this->___Align_0 = 1;
		return;
	}
}
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AttributeHelperEngine
#include "UnityEngine_UnityEngine_AttributeHelperEngineMethodDeclarations.h"

#include "UnityEngine_ArrayTypes.h"
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponent.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponent.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen_0.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_53.h"
// System.Collections.Generic.Stack`1<System.Type>
#include "System_System_Collections_Generic_Stack_1_gen_0MethodDeclarations.h"
// System.Collections.Generic.List`1<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_gen_53MethodDeclarations.h"


// System.Void UnityEngine.AttributeHelperEngine::.cctor()
extern TypeInfo* DisallowMultipleComponentU5BU5D_t2779_il2cpp_TypeInfo_var;
extern TypeInfo* AttributeHelperEngine_t2782_il2cpp_TypeInfo_var;
extern TypeInfo* ExecuteInEditModeU5BU5D_t2780_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponentU5BU5D_t2781_il2cpp_TypeInfo_var;
extern "C" void AttributeHelperEngine__cctor_m9540 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DisallowMultipleComponentU5BU5D_t2779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4406);
		AttributeHelperEngine_t2782_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4407);
		ExecuteInEditModeU5BU5D_t2780_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4408);
		RequireComponentU5BU5D_t2781_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4409);
		s_Il2CppMethodIntialized = true;
	}
	{
		((AttributeHelperEngine_t2782_StaticFields*)AttributeHelperEngine_t2782_il2cpp_TypeInfo_var->static_fields)->____disallowMultipleComponentArray_0 = ((DisallowMultipleComponentU5BU5D_t2779*)SZArrayNew(DisallowMultipleComponentU5BU5D_t2779_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t2782_StaticFields*)AttributeHelperEngine_t2782_il2cpp_TypeInfo_var->static_fields)->____executeInEditModeArray_1 = ((ExecuteInEditModeU5BU5D_t2780*)SZArrayNew(ExecuteInEditModeU5BU5D_t2780_il2cpp_TypeInfo_var, 1));
		((AttributeHelperEngine_t2782_StaticFields*)AttributeHelperEngine_t2782_il2cpp_TypeInfo_var->static_fields)->____requireComponentArray_2 = ((RequireComponentU5BU5D_t2781*)SZArrayNew(RequireComponentU5BU5D_t2781_il2cpp_TypeInfo_var, 1));
		return;
	}
}
// System.Type UnityEngine.AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion(System.Type)
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern const Il2CppType* DisallowMultipleComponent_t1049_0_0_0_var;
extern TypeInfo* Stack_1_t2893_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Stack_1__ctor_m9848_MethodInfo_var;
extern const MethodInfo* Stack_1_Push_m9849_MethodInfo_var;
extern const MethodInfo* Stack_1_Pop_m9850_MethodInfo_var;
extern "C" Type_t * AttributeHelperEngine_GetParentTypeDisallowingMultipleInclusion_m9541 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(108);
		DisallowMultipleComponent_t1049_0_0_0_var = il2cpp_codegen_type_from_index(1814);
		Stack_1_t2893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4410);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Stack_1__ctor_m9848_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485122);
		Stack_1_Push_m9849_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485123);
		Stack_1_Pop_m9850_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485124);
		s_Il2CppMethodIntialized = true;
	}
	Stack_1_t2893 * V_0 = {0};
	Type_t * V_1 = {0};
	ObjectU5BU5D_t627* V_2 = {0};
	{
		Stack_1_t2893 * L_0 = (Stack_1_t2893 *)il2cpp_codegen_object_new (Stack_1_t2893_il2cpp_TypeInfo_var);
		Stack_1__ctor_m9848(L_0, /*hidden argument*/Stack_1__ctor_m9848_MethodInfo_var);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000b:
	{
		Stack_1_t2893 * L_1 = V_0;
		Type_t * L_2 = ___type;
		NullCheck(L_1);
		Stack_1_Push_m9849(L_1, L_2, /*hidden argument*/Stack_1_Push_m9849_MethodInfo_var);
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_3);
		___type = L_4;
	}

IL_001a:
	{
		Type_t * L_5 = ___type;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7))))
		{
			goto IL_000b;
		}
	}

IL_0030:
	{
		V_1 = (Type_t *)NULL;
		goto IL_005a;
	}

IL_0037:
	{
		Stack_1_t2893 * L_8 = V_0;
		NullCheck(L_8);
		Type_t * L_9 = Stack_1_Pop_m9850(L_8, /*hidden argument*/Stack_1_Pop_m9850_MethodInfo_var);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(DisallowMultipleComponent_t1049_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ObjectU5BU5D_t627* L_12 = (ObjectU5BU5D_t627*)VirtFuncInvoker2< ObjectU5BU5D_t627*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_10, L_11, 0);
		V_2 = L_12;
		ObjectU5BU5D_t627* L_13 = V_2;
		NullCheck(L_13);
		if (!(((int32_t)(((Array_t *)L_13)->max_length))))
		{
			goto IL_005a;
		}
	}
	{
		Type_t * L_14 = V_1;
		return L_14;
	}

IL_005a:
	{
		Stack_1_t2893 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Collections.Generic.Stack`1<System.Type>::get_Count() */, L_15);
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.Type[] UnityEngine.AttributeHelperEngine::GetRequiredComponents(System.Type)
extern const Il2CppType* RequireComponent_t1043_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RequireComponent_t1043_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2894_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m9851_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m9852_MethodInfo_var;
extern "C" TypeU5BU5D_t1142* AttributeHelperEngine_GetRequiredComponents_m9542 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RequireComponent_t1043_0_0_0_var = il2cpp_codegen_type_from_index(1811);
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(108);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RequireComponent_t1043_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1811);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		List_1_t2894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4411);
		List_1__ctor_m9851_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485125);
		List_1_ToArray_m9852_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485126);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2894 * V_0 = {0};
	ObjectU5BU5D_t627* V_1 = {0};
	int32_t V_2 = 0;
	RequireComponent_t1043 * V_3 = {0};
	TypeU5BU5D_t1142* V_4 = {0};
	{
		V_0 = (List_1_t2894 *)NULL;
		goto IL_00d9;
	}

IL_0007:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(RequireComponent_t1043_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)VirtFuncInvoker2< ObjectU5BU5D_t627*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c8;
	}

IL_0020:
	{
		ObjectU5BU5D_t627* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = ((RequireComponent_t1043 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5)), RequireComponent_t1043_il2cpp_TypeInfo_var));
		List_1_t2894 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t627* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Type_t * L_8 = ___klass;
		NullCheck(L_8);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_9) == ((Object_t*)(Type_t *)L_10))))
		{
			goto IL_0073;
		}
	}
	{
		TypeU5BU5D_t1142* L_11 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 3));
		RequireComponent_t1043 * L_12 = V_3;
		NullCheck(L_12);
		Type_t * L_13 = (L_12->___m_Type0_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_13);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_13;
		TypeU5BU5D_t1142* L_14 = L_11;
		RequireComponent_t1043 * L_15 = V_3;
		NullCheck(L_15);
		Type_t * L_16 = (L_15->___m_Type1_1);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		ArrayElementTypeCheck (L_14, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_14, 1)) = (Type_t *)L_16;
		TypeU5BU5D_t1142* L_17 = L_14;
		RequireComponent_t1043 * L_18 = V_3;
		NullCheck(L_18);
		Type_t * L_19 = (L_18->___m_Type2_2);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		ArrayElementTypeCheck (L_17, L_19);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 2)) = (Type_t *)L_19;
		V_4 = L_17;
		TypeU5BU5D_t1142* L_20 = V_4;
		return L_20;
	}

IL_0073:
	{
		List_1_t2894 * L_21 = V_0;
		if (L_21)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t2894 * L_22 = (List_1_t2894 *)il2cpp_codegen_object_new (List_1_t2894_il2cpp_TypeInfo_var);
		List_1__ctor_m9851(L_22, /*hidden argument*/List_1__ctor_m9851_MethodInfo_var);
		V_0 = L_22;
	}

IL_007f:
	{
		RequireComponent_t1043 * L_23 = V_3;
		NullCheck(L_23);
		Type_t * L_24 = (L_23->___m_Type0_0);
		if (!L_24)
		{
			goto IL_0096;
		}
	}
	{
		List_1_t2894 * L_25 = V_0;
		RequireComponent_t1043 * L_26 = V_3;
		NullCheck(L_26);
		Type_t * L_27 = (L_26->___m_Type0_0);
		NullCheck(L_25);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_25, L_27);
	}

IL_0096:
	{
		RequireComponent_t1043 * L_28 = V_3;
		NullCheck(L_28);
		Type_t * L_29 = (L_28->___m_Type1_1);
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		List_1_t2894 * L_30 = V_0;
		RequireComponent_t1043 * L_31 = V_3;
		NullCheck(L_31);
		Type_t * L_32 = (L_31->___m_Type1_1);
		NullCheck(L_30);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_30, L_32);
	}

IL_00ad:
	{
		RequireComponent_t1043 * L_33 = V_3;
		NullCheck(L_33);
		Type_t * L_34 = (L_33->___m_Type2_2);
		if (!L_34)
		{
			goto IL_00c4;
		}
	}
	{
		List_1_t2894 * L_35 = V_0;
		RequireComponent_t1043 * L_36 = V_3;
		NullCheck(L_36);
		Type_t * L_37 = (L_36->___m_Type2_2);
		NullCheck(L_35);
		VirtActionInvoker1< Type_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Type>::Add(!0) */, L_35, L_37);
	}

IL_00c4:
	{
		int32_t L_38 = V_2;
		V_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_00c8:
	{
		int32_t L_39 = V_2;
		ObjectU5BU5D_t627* L_40 = V_1;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)(((int32_t)(((Array_t *)L_40)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		Type_t * L_41 = ___klass;
		NullCheck(L_41);
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_41);
		___klass = L_42;
	}

IL_00d9:
	{
		Type_t * L_43 = ___klass;
		if (!L_43)
		{
			goto IL_00ef;
		}
	}
	{
		Type_t * L_44 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_44) == ((Object_t*)(Type_t *)L_45))))
		{
			goto IL_0007;
		}
	}

IL_00ef:
	{
		List_1_t2894 * L_46 = V_0;
		if (L_46)
		{
			goto IL_00f7;
		}
	}
	{
		return (TypeU5BU5D_t1142*)NULL;
	}

IL_00f7:
	{
		List_1_t2894 * L_47 = V_0;
		NullCheck(L_47);
		TypeU5BU5D_t1142* L_48 = List_1_ToArray_m9852(L_47, /*hidden argument*/List_1_ToArray_m9852_MethodInfo_var);
		return L_48;
	}
}
// System.Boolean UnityEngine.AttributeHelperEngine::CheckIsEditorScript(System.Type)
extern const Il2CppType* ExecuteInEditMode_t1048_0_0_0_var;
extern const Il2CppType* MonoBehaviour_t13_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool AttributeHelperEngine_CheckIsEditorScript_m9543 (Object_t * __this /* static, unused */, Type_t * ___klass, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t1048_0_0_0_var = il2cpp_codegen_type_from_index(1813);
		MonoBehaviour_t13_0_0_0_var = il2cpp_codegen_type_from_index(108);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t627* V_0 = {0};
	{
		goto IL_0029;
	}

IL_0005:
	{
		Type_t * L_0 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(ExecuteInEditMode_t1048_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t627* L_2 = (ObjectU5BU5D_t627*)VirtFuncInvoker2< ObjectU5BU5D_t627*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t627* L_3 = V_0;
		NullCheck(L_3);
		if (!(((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		Type_t * L_4 = ___klass;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_4);
		___klass = L_5;
	}

IL_0029:
	{
		Type_t * L_6 = ___klass;
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		Type_t * L_7 = ___klass;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(MonoBehaviour_t13_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8))))
		{
			goto IL_0005;
		}
	}

IL_003f:
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.DisallowMultipleComponent
#include "UnityEngine_UnityEngine_DisallowMultipleComponentMethodDeclarations.h"



// System.Void UnityEngine.DisallowMultipleComponent::.ctor()
extern "C" void DisallowMultipleComponent__ctor_m5941 (DisallowMultipleComponent_t1049 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RequireComponent
#include "UnityEngine_UnityEngine_RequireComponentMethodDeclarations.h"



// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" void RequireComponent__ctor_m5917 (RequireComponent_t1043 * __this, Type_t * ___requiredComponent, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent;
		__this->___m_Type0_0 = L_0;
		return;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"



// System.Void UnityEngine.AddComponentMenu::.ctor(System.String)
extern "C" void AddComponentMenu__ctor_m5903 (AddComponentMenu_t1040 * __this, String_t* ___menuName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		__this->___m_Ordering_1 = 0;
		return;
	}
}
// System.Void UnityEngine.AddComponentMenu::.ctor(System.String,System.Int32)
extern "C" void AddComponentMenu__ctor_m5935 (AddComponentMenu_t1040 * __this, String_t* ___menuName, int32_t ___order, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuName;
		__this->___m_AddComponentMenu_0 = L_0;
		int32_t L_1 = ___order;
		__this->___m_Ordering_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"



// System.Void UnityEngine.ExecuteInEditMode::.ctor()
extern "C" void ExecuteInEditMode__ctor_m5940 (ExecuteInEditMode_t1048 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspector.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.HideInInspector
#include "UnityEngine_UnityEngine_HideInInspectorMethodDeclarations.h"



// System.Void UnityEngine.HideInInspector::.ctor()
extern "C" void HideInInspector__ctor_m462 (HideInInspector_t79 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutine.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SetupCoroutine
#include "UnityEngine_UnityEngine_SetupCoroutineMethodDeclarations.h"

// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"


// System.Void UnityEngine.SetupCoroutine::.ctor()
extern "C" void SetupCoroutine__ctor_m9544 (SetupCoroutine_t2783 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeMember_m9545 (Object_t * __this /* static, unused */, Object_t * ___behaviour, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t627* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t627*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t627* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Object_t * L_3 = ___behaviour;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3766(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		Object_t * L_6 = ___behaviour;
		ObjectU5BU5D_t627* L_7 = V_0;
		NullCheck(L_4);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t2895 *, Object_t *, ObjectU5BU5D_t627*, ParameterModifierU5BU5D_t2896*, CultureInfo_t711 *, StringU5BU5D_t75* >::Invoke(78 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_4, L_5, ((int32_t)308), (Binder_t2895 *)NULL, L_6, L_7, (ParameterModifierU5BU5D_t2896*)(ParameterModifierU5BU5D_t2896*)NULL, (CultureInfo_t711 *)NULL, (StringU5BU5D_t75*)(StringU5BU5D_t75*)NULL);
		return L_8;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeStatic(System.Type,System.String,System.Object)
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" Object_t * SetupCoroutine_InvokeStatic_m9546 (Object_t * __this /* static, unused */, Type_t * ___klass, String_t* ___name, Object_t * ___variable, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t627* V_0 = {0};
	{
		V_0 = (ObjectU5BU5D_t627*)NULL;
		Object_t * L_0 = ___variable;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		V_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 1));
		ObjectU5BU5D_t627* L_1 = V_0;
		Object_t * L_2 = ___variable;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
	}

IL_0013:
	{
		Type_t * L_3 = ___klass;
		String_t* L_4 = ___name;
		ObjectU5BU5D_t627* L_5 = V_0;
		NullCheck(L_3);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t2895 *, Object_t *, ObjectU5BU5D_t627*, ParameterModifierU5BU5D_t2896*, CultureInfo_t711 *, StringU5BU5D_t75* >::Invoke(78 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_3, L_4, ((int32_t)312), (Binder_t2895 *)NULL, NULL, L_5, (ParameterModifierU5BU5D_t2896*)(ParameterModifierU5BU5D_t2896*)NULL, (CultureInfo_t711 *)NULL, (StringU5BU5D_t75*)(StringU5BU5D_t75*)NULL);
		return L_6;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"



// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C" void WritableAttribute__ctor_m9547 (WritableAttribute_t2784 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssembly.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.AssemblyIsEditorAssembly
#include "UnityEngine_UnityEngine_AssemblyIsEditorAssemblyMethodDeclarations.h"



// System.Void UnityEngine.AssemblyIsEditorAssembly::.ctor()
extern "C" void AssemblyIsEditorAssembly__ctor_m9548 (AssemblyIsEditorAssembly_t2785 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserPro.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcUserProMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfile.h"
// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2D.h"
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserState.h"
// UnityEngine.SocialPlatforms.Impl.UserProfile
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_UserProfileMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern TypeInfo* UserProfile_t2798_il2cpp_TypeInfo_var;
extern "C" UserProfile_t2798 * GcUserProfileData_ToUserProfile_m9549 (GcUserProfileData_t2786 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfile_t2798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4290);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = (__this->___userName_0);
		String_t* L_1 = (__this->___userID_1);
		int32_t L_2 = (__this->___isFriend_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001f:
	{
		Texture2D_t108 * L_3 = (__this->___image_3);
		UserProfile_t2798 * L_4 = (UserProfile_t2798 *)il2cpp_codegen_object_new (UserProfile_t2798_il2cpp_TypeInfo_var);
		UserProfile__ctor_m9571(L_4, G_B3_2, G_B3_1, G_B3_0, 3, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m9550 (GcUserProfileData_t2786 * __this, UserProfileU5BU5D_t2637** ___array, int32_t ___number, const MethodInfo* method)
{
	{
		UserProfileU5BU5D_t2637** L_0 = ___array;
		NullCheck((*((UserProfileU5BU5D_t2637**)L_0)));
		int32_t L_1 = ___number;
		if ((((int32_t)(((int32_t)(((Array_t *)(*((UserProfileU5BU5D_t2637**)L_0)))->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = ___number;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		UserProfileU5BU5D_t2637** L_3 = ___array;
		int32_t L_4 = ___number;
		UserProfile_t2798 * L_5 = GcUserProfileData_ToUserProfile_m9549(__this, /*hidden argument*/NULL);
		NullCheck((*((UserProfileU5BU5D_t2637**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((UserProfileU5BU5D_t2637**)L_3)), L_4);
		ArrayElementTypeCheck ((*((UserProfileU5BU5D_t2637**)L_3)), L_5);
		*((UserProfile_t2798 **)(UserProfile_t2798 **)SZArrayLdElema((*((UserProfileU5BU5D_t2637**)L_3)), L_4)) = (UserProfile_t2798 *)L_5;
		goto IL_002a;
	}

IL_0020:
	{
		Debug_Log_m382(NULL /*static, unused*/, (String_t*) &_stringLiteral1911, /*hidden argument*/NULL);
	}

IL_002a:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieveMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDesc.h"
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementDescMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
extern TypeInfo* AchievementDescription_t2800_il2cpp_TypeInfo_var;
extern "C" AchievementDescription_t2800 * GcAchievementDescriptionData_ToAchievementDescription_m9551 (GcAchievementDescriptionData_t2787 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AchievementDescription_t2800_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4288);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	Texture2D_t108 * G_B2_2 = {0};
	String_t* G_B2_3 = {0};
	String_t* G_B2_4 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	Texture2D_t108 * G_B1_2 = {0};
	String_t* G_B1_3 = {0};
	String_t* G_B1_4 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	Texture2D_t108 * G_B3_3 = {0};
	String_t* G_B3_4 = {0};
	String_t* G_B3_5 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		String_t* L_1 = (__this->___m_Title_1);
		Texture2D_t108 * L_2 = (__this->___m_Image_2);
		String_t* L_3 = (__this->___m_AchievedDescription_3);
		String_t* L_4 = (__this->___m_UnachievedDescription_4);
		int32_t L_5 = (__this->___m_Hidden_5);
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_0030:
	{
		int32_t L_6 = (__this->___m_Points_6);
		AchievementDescription_t2800 * L_7 = (AchievementDescription_t2800 *)il2cpp_codegen_object_new (AchievementDescription_t2800_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m9591(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcAchieve_0MethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Achievement.h"
// UnityEngine.SocialPlatforms.Impl.Achievement
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_AchievementMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern TypeInfo* Achievement_t2799_il2cpp_TypeInfo_var;
extern "C" Achievement_t2799 * GcAchievementData_ToAchievement_m9552 (GcAchievementData_t2788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Achievement_t2799_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4293);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = {0};
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = {0};
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = {0};
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = {0};
	{
		String_t* L_0 = (__this->___m_Identifier_0);
		double L_1 = (__this->___m_PercentCompleted_1);
		int32_t L_2 = (__this->___m_Completed_2);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___m_Hidden_3);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0030:
	{
		DateTime__ctor_m3640((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_LastReportedDate_4);
		DateTime_t287  L_5 = DateTime_AddSeconds_m3797((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		Achievement_t2799 * L_6 = (Achievement_t2799 *)il2cpp_codegen_object_new (Achievement_t2799_il2cpp_TypeInfo_var);
		Achievement__ctor_m9580(L_6, G_B6_3, G_B6_2, G_B6_1, G_B6_0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t2788_marshal(const GcAchievementData_t2788& unmarshaled, GcAchievementData_t2788_marshaled& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
void GcAchievementData_t2788_marshal_back(const GcAchievementData_t2788_marshaled& marshaled, GcAchievementData_t2788& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	unmarshaled.___m_PercentCompleted_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_Completed_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Hidden_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_LastReportedDate_4 = marshaled.___m_LastReportedDate_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
void GcAchievementData_t2788_marshal_cleanup(GcAchievementData_t2788_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDa.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GcScoreDaMethodDeclarations.h"

// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Score.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// UnityEngine.SocialPlatforms.Impl.Score
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_ScoreMethodDeclarations.h"


// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern TypeInfo* Score_t2801_il2cpp_TypeInfo_var;
extern "C" Score_t2801 * GcScoreData_ToScore_m9553 (GcScoreData_t2789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t2801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4295);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	{
		String_t* L_0 = (__this->___m_Category_0);
		int32_t L_1 = (__this->___m_ValueHigh_2);
		int32_t L_2 = (__this->___m_ValueLow_1);
		String_t* L_3 = (__this->___m_PlayerID_5);
		DateTime__ctor_m3640((&V_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		int32_t L_4 = (__this->___m_Date_3);
		DateTime_t287  L_5 = DateTime_AddSeconds_m3797((&V_0), (((double)L_4)), /*hidden argument*/NULL);
		String_t* L_6 = (__this->___m_FormattedValue_4);
		int32_t L_7 = (__this->___m_Rank_6);
		Score_t2801 * L_8 = (Score_t2801 *)il2cpp_codegen_object_new (Score_t2801_il2cpp_TypeInfo_var);
		Score__ctor_m9602(L_8, L_0, ((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)L_1))<<(int32_t)((int32_t)32)))+(int64_t)(((int64_t)L_2)))), L_3, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t2789_marshal(const GcScoreData_t2789& unmarshaled, GcScoreData_t2789_marshaled& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
void GcScoreData_t2789_marshal_back(const GcScoreData_t2789_marshaled& marshaled, GcScoreData_t2789& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	unmarshaled.___m_ValueLow_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueHigh_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_Date_3 = marshaled.___m_Date_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	unmarshaled.___m_Rank_6 = marshaled.___m_Rank_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
void GcScoreData_t2789_marshal_cleanup(GcScoreData_t2789_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_Resolution.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Resolution
#include "UnityEngine_UnityEngine_ResolutionMethodDeclarations.h"

// UnityEngine.UnityString
#include "UnityEngine_UnityEngine_UnityStringMethodDeclarations.h"


// System.Int32 UnityEngine.Resolution::get_width()
extern "C" int32_t Resolution_get_width_m9554 (Resolution_t2790 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Width_0);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_width(System.Int32)
extern "C" void Resolution_set_width_m9555 (Resolution_t2790 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Width_0 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_height()
extern "C" int32_t Resolution_get_height_m9556 (Resolution_t2790 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Height_1);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_height(System.Int32)
extern "C" void Resolution_set_height_m9557 (Resolution_t2790 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_Height_1 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Resolution::get_refreshRate()
extern "C" int32_t Resolution_get_refreshRate_m9558 (Resolution_t2790 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_RefreshRate_2);
		return L_0;
	}
}
// System.Void UnityEngine.Resolution::set_refreshRate(System.Int32)
extern "C" void Resolution_set_refreshRate_m9559 (Resolution_t2790 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___m_RefreshRate_2 = L_0;
		return;
	}
}
// System.String UnityEngine.Resolution::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* Resolution_ToString_m9560 (Resolution_t2790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 3));
		int32_t L_1 = (__this->___m_Width_0);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_3;
		ObjectU5BU5D_t627* L_4 = L_0;
		int32_t L_5 = (__this->___m_Height_1);
		int32_t L_6 = L_5;
		Object_t * L_7 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1)) = (Object_t *)L_7;
		ObjectU5BU5D_t627* L_8 = L_4;
		int32_t L_9 = (__this->___m_RefreshRate_2);
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2)) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m8987(NULL /*static, unused*/, (String_t*) &_stringLiteral1912, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBuffer.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RenderBuffer
#include "UnityEngine_UnityEngine_RenderBufferMethodDeclarations.h"



// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlagsMethodDeclarations.h"



// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientationMethodDeclarations.h"



// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormatMethodDeclarations.h"



// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine_UnityEngine_Rendering_ReflectionProbeBlendInfoMethodDeclarations.h"



// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjects.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.GUIStateObjects
#include "UnityEngine_UnityEngine_GUIStateObjectsMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_44MethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void UnityEngine.GUIStateObjects::.cctor()
extern TypeInfo* Dictionary_2_t2795_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStateObjects_t2796_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m9853_MethodInfo_var;
extern "C" void GUIStateObjects__cctor_m9561 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t2795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4412);
		GUIStateObjects_t2796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4315);
		Dictionary_2__ctor_m9853_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485127);
		s_Il2CppMethodIntialized = true;
	}
	{
		Dictionary_2_t2795 * L_0 = (Dictionary_2_t2795 *)il2cpp_codegen_object_new (Dictionary_2_t2795_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9853(L_0, /*hidden argument*/Dictionary_2__ctor_m9853_MethodInfo_var);
		((GUIStateObjects_t2796_StaticFields*)GUIStateObjects_t2796_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.GUIStateObjects::GetStateObject(System.Type,System.Int32)
extern TypeInfo* GUIStateObjects_t2796_il2cpp_TypeInfo_var;
extern "C" Object_t * GUIStateObjects_GetStateObject_m9562 (Object_t * __this /* static, unused */, Type_t * ___t, int32_t ___controlID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIStateObjects_t2796_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4315);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIStateObjects_t2796_il2cpp_TypeInfo_var);
		Dictionary_2_t2795 * L_0 = ((GUIStateObjects_t2796_StaticFields*)GUIStateObjects_t2796_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0;
		int32_t L_1 = ___controlID;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, int32_t, Object_t ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&) */, L_0, L_1, (&V_0));
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m3766(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = ___t;
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_0031;
		}
	}

IL_001e:
	{
		Type_t * L_6 = ___t;
		Object_t * L_7 = Activator_CreateInstance_m7143(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStateObjects_t2796_il2cpp_TypeInfo_var);
		Dictionary_2_t2795 * L_8 = ((GUIStateObjects_t2796_StaticFields*)GUIStateObjects_t2796_il2cpp_TypeInfo_var->static_fields)->___s_StateCache_0;
		int32_t L_9 = ___controlID;
		Object_t * L_10 = V_0;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1) */, L_8, L_9, L_10);
	}

IL_0031:
	{
		Object_t * L_11 = V_0;
		return L_11;
	}
}
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUser.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.LocalUser
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LocalUserMethodDeclarations.h"

// System.Action`1<System.Boolean>
#include "mscorlib_System_Action_1_gen_3.h"
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatformMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern TypeInfo* UserProfileU5BU5D_t2637_il2cpp_TypeInfo_var;
extern "C" void LocalUser__ctor_m9563 (LocalUser_t2638 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UserProfileU5BU5D_t2637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4289);
		s_Il2CppMethodIntialized = true;
	}
	{
		UserProfile__ctor_m9570(__this, /*hidden argument*/NULL);
		__this->___m_Friends_5 = (IUserProfileU5BU5D_t2797*)((UserProfileU5BU5D_t2637*)SZArrayNew(UserProfileU5BU5D_t2637_il2cpp_TypeInfo_var, 0));
		__this->___m_Authenticated_6 = 0;
		__this->___m_Underage_7 = 0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t2810_il2cpp_TypeInfo_var;
extern "C" void LocalUser_Authenticate_m9564 (LocalUser_t2638 * __this, Action_1_t277 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m9630(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t277 * L_1 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker2< Object_t *, Action_1_t277 * >::Invoke(4 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_t2810_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
extern "C" void LocalUser_SetFriends_m9565 (LocalUser_t2638 * __this, IUserProfileU5BU5D_t2797* ___friends, const MethodInfo* method)
{
	{
		IUserProfileU5BU5D_t2797* L_0 = ___friends;
		__this->___m_Friends_5 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" void LocalUser_SetAuthenticated_m9566 (LocalUser_t2638 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Authenticated_6 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" void LocalUser_SetUnderage_m9567 (LocalUser_t2638 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___m_Underage_7 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
extern "C" bool LocalUser_get_authenticated_m9568 (LocalUser_t2638 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Authenticated_6);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_underage()
extern "C" bool LocalUser_get_underage_m9569 (LocalUser_t2638 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Underage_7);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Texture2D
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern TypeInfo* Texture2D_t108_il2cpp_TypeInfo_var;
extern "C" void UserProfile__ctor_m9570 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(184);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___m_UserName_0 = (String_t*) &_stringLiteral1913;
		__this->___m_ID_1 = (String_t*) &_stringLiteral330;
		__this->___m_IsFriend_2 = 0;
		__this->___m_State_3 = 3;
		Texture2D_t108 * L_0 = (Texture2D_t108 *)il2cpp_codegen_object_new (Texture2D_t108_il2cpp_TypeInfo_var);
		Texture2D__ctor_m8483(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" void UserProfile__ctor_m9571 (UserProfile_t2798 * __this, String_t* ___name, String_t* ___id, bool ___friend, int32_t ___state, Texture2D_t108 * ___image, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		String_t* L_1 = ___id;
		__this->___m_ID_1 = L_1;
		bool L_2 = ___friend;
		__this->___m_IsFriend_2 = L_2;
		int32_t L_3 = ___state;
		__this->___m_State_3 = L_3;
		Texture2D_t108 * L_4 = ___image;
		__this->___m_Image_4 = L_4;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* UserState_t2812_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UserProfile_ToString_m9572 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		UserState_t2812_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4414);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 7));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t627* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t627* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_6 = L_5;
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend() */, __this);
		bool L_8 = L_7;
		Object_t * L_9 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_9;
		ObjectU5BU5D_t627* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 5);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 5)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_11 = L_10;
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state() */, __this);
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(UserState_t2812_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)L_14;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3580(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" void UserProfile_SetUserName_m9573 (UserProfile_t2798 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___m_UserName_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" void UserProfile_SetUserID_m9574 (UserProfile_t2798 * __this, String_t* ___id, const MethodInfo* method)
{
	{
		String_t* L_0 = ___id;
		__this->___m_ID_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" void UserProfile_SetImage_m9575 (UserProfile_t2798 * __this, Texture2D_t108 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t108 * L_0 = ___image;
		__this->___m_Image_4 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" String_t* UserProfile_get_userName_m9576 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UserName_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" String_t* UserProfile_get_id_m9577 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ID_1);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" bool UserProfile_get_isFriend_m9578 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_IsFriend_2);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" int32_t UserProfile_get_state_m9579 (UserProfile_t2798 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_State_3);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
extern "C" void Achievement__ctor_m9580 (Achievement_t2799 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t287  ___lastReportedDate, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percentCompleted;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		bool L_2 = ___completed;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden;
		__this->___m_Hidden_1 = L_3;
		DateTime_t287  L_4 = ___lastReportedDate;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" void Achievement__ctor_m9581 (Achievement_t2799 * __this, String_t* ___id, double ___percent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String) */, __this, L_0);
		double L_1 = ___percent;
		VirtActionInvoker1< double >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double) */, __this, L_1);
		__this->___m_Hidden_1 = 0;
		__this->___m_Completed_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_2 = ((DateTime_t287_StaticFields*)DateTime_t287_il2cpp_TypeInfo_var->static_fields)->___MinValue_13;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
extern "C" void Achievement__ctor_m9582 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		Achievement__ctor_m9581(__this, (String_t*) &_stringLiteral1373, (0.0), /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Achievement_ToString_m9583 (Achievement_t2799 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, ((int32_t)9)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t627* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_3 = L_2;
		double L_4 = (double)VirtFuncInvoker0< double >::Invoke(6 /* System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted() */, __this);
		double L_5 = L_4;
		Object_t * L_6 = Box(Double_t90_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_6;
		ObjectU5BU5D_t627* L_7 = L_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_8 = L_7;
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed() */, __this);
		bool L_10 = L_9;
		Object_t * L_11 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 4);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 4)) = (Object_t *)L_11;
		ObjectU5BU5D_t627* L_12 = L_8;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 5);
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 5)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_13 = L_12;
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden() */, __this);
		bool L_15 = L_14;
		Object_t * L_16 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)L_16;
		ObjectU5BU5D_t627* L_17 = L_13;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 7);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 7)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_18 = L_17;
		DateTime_t287  L_19 = (DateTime_t287 )VirtFuncInvoker0< DateTime_t287  >::Invoke(10 /* System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate() */, __this);
		DateTime_t287  L_20 = L_19;
		Object_t * L_21 = Box(DateTime_t287_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 8);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 8)) = (Object_t *)L_21;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Concat_m3580(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" String_t* Achievement_get_id_m9584 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
extern "C" void Achievement_set_id_m9585 (Achievement_t2799 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" double Achievement_get_percentCompleted_m9586 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		double L_0 = (__this->___U3CpercentCompletedU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
extern "C" void Achievement_set_percentCompleted_m9587 (Achievement_t2799 * __this, double ___value, const MethodInfo* method)
{
	{
		double L_0 = ___value;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" bool Achievement_get_completed_m9588 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Completed_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" bool Achievement_get_hidden_m9589 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_1);
		return L_0;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" DateTime_t287  Achievement_get_lastReportedDate_m9590 (Achievement_t2799 * __this, const MethodInfo* method)
{
	{
		DateTime_t287  L_0 = (__this->___m_LastReportedDate_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" void AchievementDescription__ctor_m9591 (AchievementDescription_t2800 * __this, String_t* ___id, String_t* ___title, Texture2D_t108 * ___image, String_t* ___achievedDescription, String_t* ___unachievedDescription, bool ___hidden, int32_t ___points, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String) */, __this, L_0);
		String_t* L_1 = ___title;
		__this->___m_Title_0 = L_1;
		Texture2D_t108 * L_2 = ___image;
		__this->___m_Image_1 = L_2;
		String_t* L_3 = ___achievedDescription;
		__this->___m_AchievedDescription_2 = L_3;
		String_t* L_4 = ___unachievedDescription;
		__this->___m_UnachievedDescription_3 = L_4;
		bool L_5 = ___hidden;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AchievementDescription_ToString_m9592 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, ((int32_t)11)));
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id() */, __this);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_1);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)L_1;
		ObjectU5BU5D_t627* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_2, 1)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_3 = L_2;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)L_4;
		ObjectU5BU5D_t627* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 3)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_6 = L_5;
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription() */, __this);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)L_7;
		ObjectU5BU5D_t627* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 5);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 5)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_9 = L_8;
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription() */, __this);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 6);
		ArrayElementTypeCheck (L_9, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 6)) = (Object_t *)L_10;
		ObjectU5BU5D_t627* L_11 = L_9;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 7);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 7)) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_12 = L_11;
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points() */, __this);
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 8);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 8)) = (Object_t *)L_15;
		ObjectU5BU5D_t627* L_16 = L_12;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)9));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1914);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, ((int32_t)9))) = (Object_t *)(String_t*) &_stringLiteral1914;
		ObjectU5BU5D_t627* L_17 = L_16;
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden() */, __this);
		bool L_19 = L_18;
		Object_t * L_20 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)10));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)10))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3580(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
extern "C" void AchievementDescription_SetImage_m9593 (AchievementDescription_t2800 * __this, Texture2D_t108 * ___image, const MethodInfo* method)
{
	{
		Texture2D_t108 * L_0 = ___image;
		__this->___m_Image_1 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" String_t* AchievementDescription_get_id_m9594 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" void AchievementDescription_set_id_m9595 (AchievementDescription_t2800 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" String_t* AchievementDescription_get_title_m9596 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_Title_0);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" String_t* AchievementDescription_get_achievedDescription_m9597 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_AchievedDescription_2);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" String_t* AchievementDescription_get_unachievedDescription_m9598 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_UnachievedDescription_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" bool AchievementDescription_get_hidden_m9599 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_Hidden_4);
		return L_0;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" int32_t AchievementDescription_get_points_m9600 (AchievementDescription_t2800 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Points_5);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Score__ctor_m9601 (Score_t2801 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID;
		int64_t L_1 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_2 = DateTime_get_Now_m3646(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		Score__ctor_m9602(__this, L_0, L_1, (String_t*) &_stringLiteral330, L_2, L_3, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m9602 (Score_t2801 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t287  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID;
		VirtActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String) */, __this, L_0);
		int64_t L_1 = ___value;
		VirtActionInvoker1< int64_t >::Invoke(7 /* System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64) */, __this, L_1);
		String_t* L_2 = ___userID;
		__this->___m_UserID_2 = L_2;
		DateTime_t287  L_3 = ___date;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue;
		__this->___m_FormattedValue_1 = L_4;
		int32_t L_5 = ___rank;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Score_ToString_m9603 (Score_t2801 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, ((int32_t)10)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1915);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral1915;
		ObjectU5BU5D_t627* L_1 = L_0;
		int32_t L_2 = (__this->___m_Rank_3);
		int32_t L_3 = L_2;
		Object_t * L_4 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_4;
		ObjectU5BU5D_t627* L_5 = L_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1916);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 2)) = (Object_t *)(String_t*) &_stringLiteral1916;
		ObjectU5BU5D_t627* L_6 = L_5;
		int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(6 /* System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value() */, __this);
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 3);
		ArrayElementTypeCheck (L_6, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 3)) = (Object_t *)L_9;
		ObjectU5BU5D_t627* L_10 = L_6;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 4);
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral1917);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 4)) = (Object_t *)(String_t*) &_stringLiteral1917;
		ObjectU5BU5D_t627* L_11 = L_10;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID() */, __this);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 5)) = (Object_t *)L_12;
		ObjectU5BU5D_t627* L_13 = L_11;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral1918);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 6)) = (Object_t *)(String_t*) &_stringLiteral1918;
		ObjectU5BU5D_t627* L_14 = L_13;
		String_t* L_15 = (__this->___m_UserID_2);
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 7);
		ArrayElementTypeCheck (L_14, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 7)) = (Object_t *)L_15;
		ObjectU5BU5D_t627* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 8);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral1919);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 8)) = (Object_t *)(String_t*) &_stringLiteral1919;
		ObjectU5BU5D_t627* L_17 = L_16;
		DateTime_t287  L_18 = (__this->___m_Date_0);
		DateTime_t287  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t287_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)9));
		ArrayElementTypeCheck (L_17, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, ((int32_t)9))) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3580(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m9604 (Score_t2801 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CleaderboardIDU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m9605 (Score_t2801 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m9606 (Score_t2801 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___U3CvalueU3Ek__BackingField_5);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m9607 (Score_t2801 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leaderboard.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.Impl.Leaderboard
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_LeaderboardMethodDeclarations.h"

// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScope.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_Range.h"
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScope.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"
// UnityEngine.SocialPlatforms.Range
#include "UnityEngine_UnityEngine_SocialPlatforms_RangeMethodDeclarations.h"


// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern TypeInfo* Score_t2801_il2cpp_TypeInfo_var;
extern TypeInfo* ScoreU5BU5D_t2866_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void Leaderboard__ctor_m9608 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Score_t2801_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4295);
		ScoreU5BU5D_t2866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4294);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String) */, __this, (String_t*) &_stringLiteral1920);
		Range_t2804  L_0 = {0};
		Range__ctor_m9632(&L_0, 1, ((int32_t)10), /*hidden argument*/NULL);
		VirtActionInvoker1< Range_t2804  >::Invoke(10 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range) */, __this, L_0);
		VirtActionInvoker1< int32_t >::Invoke(9 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope) */, __this, 0);
		VirtActionInvoker1< int32_t >::Invoke(11 /* System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope) */, __this, 2);
		__this->___m_Loading_0 = 0;
		Score_t2801 * L_1 = (Score_t2801 *)il2cpp_codegen_object_new (Score_t2801_il2cpp_TypeInfo_var);
		Score__ctor_m9601(L_1, (String_t*) &_stringLiteral1920, (((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		__this->___m_MaxRange_2 = 0;
		__this->___m_Scores_3 = (IScoreU5BU5D_t2803*)((ScoreU5BU5D_t2866*)SZArrayNew(ScoreU5BU5D_t2866_il2cpp_TypeInfo_var, 0));
		__this->___m_Title_4 = (String_t*) &_stringLiteral1920;
		__this->___m_UserIDs_5 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t683_il2cpp_TypeInfo_var;
extern TypeInfo* UserScope_t2813_il2cpp_TypeInfo_var;
extern TypeInfo* TimeScope_t2814_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Leaderboard_ToString_m9609 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		UInt32_t683_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		UserScope_t2813_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4415);
		TimeScope_t2814_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4416);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Range_t2804  V_0 = {0};
	Range_t2804  V_1 = {0};
	{
		ObjectU5BU5D_t627* L_0 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, ((int32_t)20)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1921);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0)) = (Object_t *)(String_t*) &_stringLiteral1921;
		ObjectU5BU5D_t627* L_1 = L_0;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id() */, __this);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 1)) = (Object_t *)L_2;
		ObjectU5BU5D_t627* L_3 = L_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral1922);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 2)) = (Object_t *)(String_t*) &_stringLiteral1922;
		ObjectU5BU5D_t627* L_4 = L_3;
		String_t* L_5 = (__this->___m_Title_4);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 3);
		ArrayElementTypeCheck (L_4, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 3)) = (Object_t *)L_5;
		ObjectU5BU5D_t627* L_6 = L_4;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 4);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral1923);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 4)) = (Object_t *)(String_t*) &_stringLiteral1923;
		ObjectU5BU5D_t627* L_7 = L_6;
		bool L_8 = (__this->___m_Loading_0);
		bool L_9 = L_8;
		Object_t * L_10 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 5);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 5)) = (Object_t *)L_10;
		ObjectU5BU5D_t627* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 6);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral1924);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 6)) = (Object_t *)(String_t*) &_stringLiteral1924;
		ObjectU5BU5D_t627* L_12 = L_11;
		Range_t2804  L_13 = (Range_t2804 )VirtFuncInvoker0< Range_t2804  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_0 = L_13;
		int32_t L_14 = ((&V_0)->___from_0);
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 7);
		ArrayElementTypeCheck (L_12, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 7)) = (Object_t *)L_16;
		ObjectU5BU5D_t627* L_17 = L_12;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral303);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, 8)) = (Object_t *)(String_t*) &_stringLiteral303;
		ObjectU5BU5D_t627* L_18 = L_17;
		Range_t2804  L_19 = (Range_t2804 )VirtFuncInvoker0< Range_t2804  >::Invoke(6 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range() */, __this);
		V_1 = L_19;
		int32_t L_20 = ((&V_1)->___count_1);
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)9));
		ArrayElementTypeCheck (L_18, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, ((int32_t)9))) = (Object_t *)L_22;
		ObjectU5BU5D_t627* L_23 = L_18;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)10));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral1925);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, ((int32_t)10))) = (Object_t *)(String_t*) &_stringLiteral1925;
		ObjectU5BU5D_t627* L_24 = L_23;
		uint32_t L_25 = (__this->___m_MaxRange_2);
		uint32_t L_26 = L_25;
		Object_t * L_27 = Box(UInt32_t683_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)11));
		ArrayElementTypeCheck (L_24, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, ((int32_t)11))) = (Object_t *)L_27;
		ObjectU5BU5D_t627* L_28 = L_24;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)12));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral1926);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_28, ((int32_t)12))) = (Object_t *)(String_t*) &_stringLiteral1926;
		ObjectU5BU5D_t627* L_29 = L_28;
		IScoreU5BU5D_t2803* L_30 = (__this->___m_Scores_3);
		NullCheck(L_30);
		int32_t L_31 = (((int32_t)(((Array_t *)L_30)->max_length)));
		Object_t * L_32 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)13));
		ArrayElementTypeCheck (L_29, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, ((int32_t)13))) = (Object_t *)L_32;
		ObjectU5BU5D_t627* L_33 = L_29;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)14));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral1927);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, ((int32_t)14))) = (Object_t *)(String_t*) &_stringLiteral1927;
		ObjectU5BU5D_t627* L_34 = L_33;
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope() */, __this);
		int32_t L_36 = L_35;
		Object_t * L_37 = Box(UserScope_t2813_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)15));
		ArrayElementTypeCheck (L_34, L_37);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, ((int32_t)15))) = (Object_t *)L_37;
		ObjectU5BU5D_t627* L_38 = L_34;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)16));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral1928);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_38, ((int32_t)16))) = (Object_t *)(String_t*) &_stringLiteral1928;
		ObjectU5BU5D_t627* L_39 = L_38;
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope() */, __this);
		int32_t L_41 = L_40;
		Object_t * L_42 = Box(TimeScope_t2814_il2cpp_TypeInfo_var, &L_41);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)17));
		ArrayElementTypeCheck (L_39, L_42);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, ((int32_t)17))) = (Object_t *)L_42;
		ObjectU5BU5D_t627* L_43 = L_39;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)18));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral1929);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_43, ((int32_t)18))) = (Object_t *)(String_t*) &_stringLiteral1929;
		ObjectU5BU5D_t627* L_44 = L_43;
		StringU5BU5D_t75* L_45 = (__this->___m_UserIDs_5);
		NullCheck(L_45);
		int32_t L_46 = (((int32_t)(((Array_t *)L_45)->max_length)));
		Object_t * L_47 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)19));
		ArrayElementTypeCheck (L_44, L_47);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, ((int32_t)19))) = (Object_t *)L_47;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m3580(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
extern "C" void Leaderboard_SetLocalUserScore_m9610 (Leaderboard_t2640 * __this, Object_t * ___score, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___score;
		__this->___m_LocalUserScore_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
extern "C" void Leaderboard_SetMaxRange_m9611 (Leaderboard_t2640 * __this, uint32_t ___maxRange, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___maxRange;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" void Leaderboard_SetScores_m9612 (Leaderboard_t2640 * __this, IScoreU5BU5D_t2803* ___scores, const MethodInfo* method)
{
	{
		IScoreU5BU5D_t2803* L_0 = ___scores;
		__this->___m_Scores_3 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" void Leaderboard_SetTitle_m9613 (Leaderboard_t2640 * __this, String_t* ___title, const MethodInfo* method)
{
	{
		String_t* L_0 = ___title;
		__this->___m_Title_4 = L_0;
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
extern "C" StringU5BU5D_t75* Leaderboard_GetUserFilter_m9614 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = (__this->___m_UserIDs_5);
		return L_0;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" String_t* Leaderboard_get_id_m9615 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CidU3Ek__BackingField_6);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" void Leaderboard_set_id_m9616 (Leaderboard_t2640 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" int32_t Leaderboard_get_userScope_m9617 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CuserScopeU3Ek__BackingField_7);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" void Leaderboard_set_userScope_m9618 (Leaderboard_t2640 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" Range_t2804  Leaderboard_get_range_m9619 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	{
		Range_t2804  L_0 = (__this->___U3CrangeU3Ek__BackingField_8);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" void Leaderboard_set_range_m9620 (Leaderboard_t2640 * __this, Range_t2804  ___value, const MethodInfo* method)
{
	{
		Range_t2804  L_0 = ___value;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" int32_t Leaderboard_get_timeScope_m9621 (Leaderboard_t2640 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CtimeScopeU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" void Leaderboard_set_timeScope_m9622 (Leaderboard_t2640 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfoMethodDeclarations.h"

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"


// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" void HitInfo_SendMessage_m9623 (HitInfo_t2805 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		GameObject_t352 * L_0 = (__this->___target_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		GameObject_SendMessage_m9088(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_Compare_m9624 (Object_t * __this /* static, unused */, HitInfo_t2805  ___lhs, HitInfo_t2805  ___rhs, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t352 * L_0 = ((&___lhs)->___target_0);
		GameObject_t352 * L_1 = ((&___rhs)->___target_0);
		bool L_2 = Object_op_Equality_m3487(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		Camera_t524 * L_3 = ((&___lhs)->___camera_1);
		Camera_t524 * L_4 = ((&___rhs)->___camera_1);
		bool L_5 = Object_op_Equality_m3487(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" bool HitInfo_op_Implicit_m9625 (Object_t * __this /* static, unused */, HitInfo_t2805  ___exists, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		GameObject_t352 * L_0 = ((&___exists)->___target_0);
		bool L_1 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_0, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Camera_t524 * L_2 = ((&___exists)->___camera_1);
		bool L_3 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_2, (Object_t645 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEvents.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SendMouseEvents
#include "UnityEngine_UnityEngine_SendMouseEventsMethodDeclarations.h"

// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayer.h"
// UnityEngine.GUIElement
#include "UnityEngine_UnityEngine_GUIElement.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// System.Single
#include "mscorlib_System_Single.h"
// UnityEngine.RenderTexture
#include "UnityEngine_UnityEngine_RenderTexture.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.GUILayer
#include "UnityEngine_UnityEngine_GUILayerMethodDeclarations.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_RayMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
struct Component_t704;
struct GUILayer_t2647;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t704;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m3702_gshared (Component_t704 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m3702(__this, method) (( Object_t * (*) (Component_t704 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3702_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
#define Component_GetComponent_TisGUILayer_t2647_m9854(__this, method) (( GUILayer_t2647 * (*) (Component_t704 *, const MethodInfo*))Component_GetComponent_TisObject_t_m3702_gshared)(__this, method)


// System.Void UnityEngine.SendMouseEvents::.cctor()
extern TypeInfo* HitInfoU5BU5D_t2806_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t2805_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t2808_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents__cctor_m9626 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HitInfoU5BU5D_t2806_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4417);
		HitInfo_t2805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4418);
		SendMouseEvents_t2808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4419);
		s_Il2CppMethodIntialized = true;
	}
	HitInfo_t2805  V_0 = {0};
	HitInfo_t2805  V_1 = {0};
	HitInfo_t2805  V_2 = {0};
	HitInfo_t2805  V_3 = {0};
	HitInfo_t2805  V_4 = {0};
	HitInfo_t2805  V_5 = {0};
	HitInfo_t2805  V_6 = {0};
	HitInfo_t2805  V_7 = {0};
	HitInfo_t2805  V_8 = {0};
	{
		HitInfoU5BU5D_t2806* L_0 = ((HitInfoU5BU5D_t2806*)SZArrayNew(HitInfoU5BU5D_t2806_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_0));
		HitInfo_t2805  L_1 = V_0;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_0, 0)) = L_1;
		HitInfoU5BU5D_t2806* L_2 = L_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_1));
		HitInfo_t2805  L_3 = V_1;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_2, 1)) = L_3;
		HitInfoU5BU5D_t2806* L_4 = L_2;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t2805  L_5 = V_2;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_4, 2)) = L_5;
		((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3 = L_4;
		HitInfoU5BU5D_t2806* L_6 = ((HitInfoU5BU5D_t2806*)SZArrayNew(HitInfoU5BU5D_t2806_il2cpp_TypeInfo_var, 3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_3));
		HitInfo_t2805  L_7 = V_3;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_6, 0)) = L_7;
		HitInfoU5BU5D_t2806* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_4));
		HitInfo_t2805  L_9 = V_4;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_8, 1)) = L_9;
		HitInfoU5BU5D_t2806* L_10 = L_8;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_5));
		HitInfo_t2805  L_11 = V_5;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_10, 2)) = L_11;
		((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4 = L_10;
		HitInfoU5BU5D_t2806* L_12 = ((HitInfoU5BU5D_t2806*)SZArrayNew(HitInfoU5BU5D_t2806_il2cpp_TypeInfo_var, 3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_6));
		HitInfo_t2805  L_13 = V_6;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_12, 0)) = L_13;
		HitInfoU5BU5D_t2806* L_14 = L_12;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 1);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_7));
		HitInfo_t2805  L_15 = V_7;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_14, 1)) = L_15;
		HitInfoU5BU5D_t2806* L_16 = L_14;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 2);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_8));
		HitInfo_t2805  L_17 = V_8;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_16, 2)) = L_17;
		((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5 = L_16;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
extern TypeInfo* Input_t649_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t2808_il2cpp_TypeInfo_var;
extern TypeInfo* CameraU5BU5D_t2807_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t2805_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisGUILayer_t2647_m9854_MethodInfo_var;
extern "C" void SendMouseEvents_DoSendMouseEvents_m9627 (Object_t * __this /* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SendMouseEvents_t2808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4419);
		CameraU5BU5D_t2807_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4421);
		HitInfo_t2805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4418);
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		Component_GetComponent_TisGUILayer_t2647_m9854_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485128);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t494  V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Camera_t524 * V_3 = {0};
	CameraU5BU5D_t2807* V_4 = {0};
	int32_t V_5 = 0;
	Rect_t640  V_6 = {0};
	GUILayer_t2647 * V_7 = {0};
	GUIElement_t2646 * V_8 = {0};
	Ray_t705  V_9 = {0};
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	GameObject_t352 * V_12 = {0};
	GameObject_t352 * V_13 = {0};
	int32_t V_14 = 0;
	HitInfo_t2805  V_15 = {0};
	Vector3_t494  V_16 = {0};
	float G_B23_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t649_il2cpp_TypeInfo_var);
		Vector3_t494  L_0 = Input_get_mousePosition_m3714(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m9020(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		CameraU5BU5D_t2807* L_2 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		CameraU5BU5D_t2807* L_3 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}

IL_0023:
	{
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6 = ((CameraU5BU5D_t2807*)SZArrayNew(CameraU5BU5D_t2807_il2cpp_TypeInfo_var, L_5));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		CameraU5BU5D_t2807* L_6 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		Camera_GetAllCameras_m9021(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_7 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_15));
		HitInfo_t2805  L_9 = V_15;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_7, L_8)) = L_9;
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_12 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_13 = ___mouseUsed;
		if (L_13)
		{
			goto IL_02bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		CameraU5BU5D_t2807* L_14 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_Cameras_6;
		V_4 = L_14;
		V_5 = 0;
		goto IL_02b4;
	}

IL_0080:
	{
		CameraU5BU5D_t2807* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = L_16;
		V_3 = (*(Camera_t524 **)(Camera_t524 **)SZArrayLdElema(L_15, L_17));
		Camera_t524 * L_18 = V_3;
		bool L_19 = Object_op_Equality_m3487(NULL /*static, unused*/, L_18, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_20 = ___skipRTCameras;
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Camera_t524 * L_21 = V_3;
		NullCheck(L_21);
		RenderTexture_t2644 * L_22 = Camera_get_targetTexture_m9013(L_21, /*hidden argument*/NULL);
		bool L_23 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_22, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}

IL_00a9:
	{
		goto IL_02ae;
	}

IL_00ae:
	{
		Camera_t524 * L_24 = V_3;
		NullCheck(L_24);
		Rect_t640  L_25 = Camera_get_pixelRect_m9012(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		Vector3_t494  L_26 = V_0;
		bool L_27 = Rect_Contains_m8822((&V_6), L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_02ae;
	}

IL_00c8:
	{
		Camera_t524 * L_28 = V_3;
		NullCheck(L_28);
		GUILayer_t2647 * L_29 = Component_GetComponent_TisGUILayer_t2647_m9854(L_28, /*hidden argument*/Component_GetComponent_TisGUILayer_t2647_m9854_MethodInfo_var);
		V_7 = L_29;
		GUILayer_t2647 * L_30 = V_7;
		bool L_31 = Object_op_Implicit_m3805(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0141;
		}
	}
	{
		GUILayer_t2647 * L_32 = V_7;
		Vector3_t494  L_33 = V_0;
		NullCheck(L_32);
		GUIElement_t2646 * L_34 = GUILayer_HitTest_m8491(L_32, L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		GUIElement_t2646 * L_35 = V_8;
		bool L_36 = Object_op_Implicit_m3805(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_011f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_37 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 0);
		GUIElement_t2646 * L_38 = V_8;
		NullCheck(L_38);
		GameObject_t352 * L_39 = Component_get_gameObject_m3462(L_38, /*hidden argument*/NULL);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_37, 0))->___target_0 = L_39;
		HitInfoU5BU5D_t2806* L_40 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
		Camera_t524 * L_41 = V_3;
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_40, 0))->___camera_1 = L_41;
		goto IL_0141;
	}

IL_011f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_42 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 0);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_42, 0))->___target_0 = (GameObject_t352 *)NULL;
		HitInfoU5BU5D_t2806* L_43 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 0);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_43, 0))->___camera_1 = (Camera_t524 *)NULL;
	}

IL_0141:
	{
		Camera_t524 * L_44 = V_3;
		NullCheck(L_44);
		int32_t L_45 = Camera_get_eventMask_m9008(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_02ae;
	}

IL_0151:
	{
		Camera_t524 * L_46 = V_3;
		Vector3_t494  L_47 = V_0;
		NullCheck(L_46);
		Ray_t705  L_48 = Camera_ScreenPointToRay_m3715(L_46, L_47, /*hidden argument*/NULL);
		V_9 = L_48;
		Vector3_t494  L_49 = Ray_get_direction_m5532((&V_9), /*hidden argument*/NULL);
		V_16 = L_49;
		float L_50 = ((&V_16)->___z_3);
		V_10 = L_50;
		float L_51 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		bool L_52 = Mathf_Approximately_m5522(NULL /*static, unused*/, (0.0f), L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0187;
		}
	}
	{
		G_B23_0 = (std::numeric_limits<float>::infinity());
		goto IL_019c;
	}

IL_0187:
	{
		Camera_t524 * L_53 = V_3;
		NullCheck(L_53);
		float L_54 = Camera_get_farClipPlane_m5529(L_53, /*hidden argument*/NULL);
		Camera_t524 * L_55 = V_3;
		NullCheck(L_55);
		float L_56 = Camera_get_nearClipPlane_m5530(L_55, /*hidden argument*/NULL);
		float L_57 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		float L_58 = fabsf(((float)((float)((float)((float)L_54-(float)L_56))/(float)L_57)));
		G_B23_0 = L_58;
	}

IL_019c:
	{
		V_11 = G_B23_0;
		Camera_t524 * L_59 = V_3;
		Ray_t705  L_60 = V_9;
		float L_61 = V_11;
		Camera_t524 * L_62 = V_3;
		NullCheck(L_62);
		int32_t L_63 = Camera_get_cullingMask_m5543(L_62, /*hidden argument*/NULL);
		Camera_t524 * L_64 = V_3;
		NullCheck(L_64);
		int32_t L_65 = Camera_get_eventMask_m9008(L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		GameObject_t352 * L_66 = Camera_RaycastTry_m9025(L_59, L_60, L_61, ((int32_t)((int32_t)L_63&(int32_t)L_65)), /*hidden argument*/NULL);
		V_12 = L_66;
		GameObject_t352 * L_67 = V_12;
		bool L_68 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_67, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01ec;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_69 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		GameObject_t352 * L_70 = V_12;
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_69, 1))->___target_0 = L_70;
		HitInfoU5BU5D_t2806* L_71 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, 1);
		Camera_t524 * L_72 = V_3;
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_71, 1))->___camera_1 = L_72;
		goto IL_0226;
	}

IL_01ec:
	{
		Camera_t524 * L_73 = V_3;
		NullCheck(L_73);
		int32_t L_74 = Camera_get_clearFlags_m9014(L_73, /*hidden argument*/NULL);
		if ((((int32_t)L_74) == ((int32_t)1)))
		{
			goto IL_0204;
		}
	}
	{
		Camera_t524 * L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76 = Camera_get_clearFlags_m9014(L_75, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)2))))
		{
			goto IL_0226;
		}
	}

IL_0204:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_77 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_77, 1))->___target_0 = (GameObject_t352 *)NULL;
		HitInfoU5BU5D_t2806* L_78 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, 1);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_78, 1))->___camera_1 = (Camera_t524 *)NULL;
	}

IL_0226:
	{
		Camera_t524 * L_79 = V_3;
		Ray_t705  L_80 = V_9;
		float L_81 = V_11;
		Camera_t524 * L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = Camera_get_cullingMask_m5543(L_82, /*hidden argument*/NULL);
		Camera_t524 * L_84 = V_3;
		NullCheck(L_84);
		int32_t L_85 = Camera_get_eventMask_m9008(L_84, /*hidden argument*/NULL);
		NullCheck(L_79);
		GameObject_t352 * L_86 = Camera_RaycastTry2D_m9027(L_79, L_80, L_81, ((int32_t)((int32_t)L_83&(int32_t)L_85)), /*hidden argument*/NULL);
		V_13 = L_86;
		GameObject_t352 * L_87 = V_13;
		bool L_88 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_87, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_88)
		{
			goto IL_0274;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_89 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 2);
		GameObject_t352 * L_90 = V_13;
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_89, 2))->___target_0 = L_90;
		HitInfoU5BU5D_t2806* L_91 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, 2);
		Camera_t524 * L_92 = V_3;
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_91, 2))->___camera_1 = L_92;
		goto IL_02ae;
	}

IL_0274:
	{
		Camera_t524 * L_93 = V_3;
		NullCheck(L_93);
		int32_t L_94 = Camera_get_clearFlags_m9014(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_94) == ((int32_t)1)))
		{
			goto IL_028c;
		}
	}
	{
		Camera_t524 * L_95 = V_3;
		NullCheck(L_95);
		int32_t L_96 = Camera_get_clearFlags_m9014(L_95, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_96) == ((uint32_t)2))))
		{
			goto IL_02ae;
		}
	}

IL_028c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_97 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, 2);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_97, 2))->___target_0 = (GameObject_t352 *)NULL;
		HitInfoU5BU5D_t2806* L_98 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, 2);
		((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_98, 2))->___camera_1 = (Camera_t524 *)NULL;
	}

IL_02ae:
	{
		int32_t L_99 = V_5;
		V_5 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_02b4:
	{
		int32_t L_100 = V_5;
		CameraU5BU5D_t2807* L_101 = V_4;
		NullCheck(L_101);
		if ((((int32_t)L_100) < ((int32_t)(((int32_t)(((Array_t *)L_101)->max_length))))))
		{
			goto IL_0080;
		}
	}

IL_02bf:
	{
		V_14 = 0;
		goto IL_02e5;
	}

IL_02c7:
	{
		int32_t L_102 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_103 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		int32_t L_104 = V_14;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, L_104);
		SendMouseEvents_SendEvents_m9628(NULL /*static, unused*/, L_102, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_103, L_104))), /*hidden argument*/NULL);
		int32_t L_105 = V_14;
		V_14 = ((int32_t)((int32_t)L_105+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_106 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_107 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_CurrentHit_5;
		NullCheck(L_107);
		if ((((int32_t)L_106) < ((int32_t)(((int32_t)(((Array_t *)L_107)->max_length))))))
		{
			goto IL_02c7;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern TypeInfo* Input_t649_il2cpp_TypeInfo_var;
extern TypeInfo* SendMouseEvents_t2808_il2cpp_TypeInfo_var;
extern TypeInfo* HitInfo_t2805_il2cpp_TypeInfo_var;
extern "C" void SendMouseEvents_SendEvents_m9628 (Object_t * __this /* static, unused */, int32_t ___i, HitInfo_t2805  ___hit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(174);
		SendMouseEvents_t2808_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4419);
		HitInfo_t2805_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4418);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t2805  V_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t649_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m3716(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m3919(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		HitInfo_t2805  L_3 = ___hit;
		bool L_4 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_5 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_6 = ___i;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		HitInfo_t2805  L_7 = ___hit;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_5, L_6)) = L_7;
		HitInfoU5BU5D_t2806* L_8 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_9 = ___i;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		HitInfo_SendMessage_m9623(((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_8, L_9)), (String_t*) &_stringLiteral1930, /*hidden argument*/NULL);
	}

IL_0045:
	{
		goto IL_00fc;
	}

IL_004a:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_11 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_12 = ___i;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		bool L_13 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_11, L_12))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		HitInfo_t2805  L_14 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_15 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_16 = ___i;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		bool L_17 = HitInfo_Compare_m9624(NULL /*static, unused*/, L_14, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_15, L_16))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_18 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_19 = ___i;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		HitInfo_SendMessage_m9623(((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_18, L_19)), (String_t*) &_stringLiteral1931, /*hidden argument*/NULL);
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_20 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_21 = ___i;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		HitInfo_SendMessage_m9623(((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_20, L_21)), (String_t*) &_stringLiteral1932, /*hidden argument*/NULL);
		HitInfoU5BU5D_t2806* L_22 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_23 = ___i;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, L_23);
		Initobj (HitInfo_t2805_il2cpp_TypeInfo_var, (&V_2));
		HitInfo_t2805  L_24 = V_2;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_22, L_23)) = L_24;
	}

IL_00c8:
	{
		goto IL_00fc;
	}

IL_00cd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_25 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_26 = ___i;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		bool L_27 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_25, L_26))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_28 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_MouseDownHit_4;
		int32_t L_29 = ___i;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, L_29);
		HitInfo_SendMessage_m9623(((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_28, L_29)), (String_t*) &_stringLiteral1933, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		HitInfo_t2805  L_30 = ___hit;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_31 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_32 = ___i;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		bool L_33 = HitInfo_Compare_m9624(NULL /*static, unused*/, L_30, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_31, L_32))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0133;
		}
	}
	{
		HitInfo_t2805  L_34 = ___hit;
		bool L_35 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		HitInfo_SendMessage_m9623((&___hit), (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
	}

IL_012e:
	{
		goto IL_0185;
	}

IL_0133:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_36 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_37 = ___i;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		bool L_38 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, (*(HitInfo_t2805 *)((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_36, L_37))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0162;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_39 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_40 = ___i;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		HitInfo_SendMessage_m9623(((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_39, L_40)), (String_t*) &_stringLiteral1935, /*hidden argument*/NULL);
	}

IL_0162:
	{
		HitInfo_t2805  L_41 = ___hit;
		bool L_42 = HitInfo_op_Implicit_m9625(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0185;
		}
	}
	{
		HitInfo_SendMessage_m9623((&___hit), (String_t*) &_stringLiteral1936, /*hidden argument*/NULL);
		HitInfo_SendMessage_m9623((&___hit), (String_t*) &_stringLiteral1934, /*hidden argument*/NULL);
	}

IL_0185:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t2808_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t2806* L_43 = ((SendMouseEvents_t2808_StaticFields*)SendMouseEvents_t2808_il2cpp_TypeInfo_var->static_fields)->___m_LastHit_3;
		int32_t L_44 = ___i;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, L_44);
		HitInfo_t2805  L_45 = ___hit;
		*((HitInfo_t2805 *)(HitInfo_t2805 *)SZArrayLdElema(L_43, L_44)) = L_45;
		return;
	}
}
// UnityEngine.Social
#include "UnityEngine_UnityEngine_Social.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Social
#include "UnityEngine_UnityEngine_SocialMethodDeclarations.h"



// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m9629 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Object_t * L_0 = ActivePlatform_get_Instance_m9630(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern TypeInfo* ISocialPlatform_t2810_il2cpp_TypeInfo_var;
extern "C" Object_t * Social_get_localUser_m3902 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m9629(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_t2810_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.Social::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t2810_il2cpp_TypeInfo_var;
extern "C" void Social_ReportProgress_m3997 (Object_t * __this /* static, unused */, String_t* ___achievementID, double ___progress, Action_1_t277 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m9629(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___achievementID;
		double L_2 = ___progress;
		Action_1_t277 * L_3 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, double, Action_1_t277 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>) */, ISocialPlatform_t2810_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern TypeInfo* ISocialPlatform_t2810_il2cpp_TypeInfo_var;
extern "C" void Social_ReportScore_m3996 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t277 * ___callback, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m9629(NULL /*static, unused*/, /*hidden argument*/NULL);
		int64_t L_1 = ___score;
		String_t* L_2 = ___board;
		Action_1_t277 * L_3 = ___callback;
		NullCheck(L_0);
		InterfaceActionInvoker3< int64_t, String_t*, Action_1_t277 * >::Invoke(2 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>) */, ISocialPlatform_t2810_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void UnityEngine.Social::ShowAchievementsUI()
extern TypeInfo* ISocialPlatform_t2810_il2cpp_TypeInfo_var;
extern "C" void Social_ShowAchievementsUI_m3999 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISocialPlatform_t2810_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = Social_get_Active_m9629(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::ShowAchievementsUI() */, ISocialPlatform_t2810_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.ActivePlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_ActivePlatform.h"
#ifndef _MSC_VER
#else
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCente.h"
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_GameCenteMethodDeclarations.h"


// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern TypeInfo* ActivePlatform_t2811_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_get_Instance_m9630 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivePlatform_t2811_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4422);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivePlatform_t2811_StaticFields*)ActivePlatform_t2811_il2cpp_TypeInfo_var->static_fields)->____active_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = ActivePlatform_SelectSocialPlatform_m9631(NULL /*static, unused*/, /*hidden argument*/NULL);
		((ActivePlatform_t2811_StaticFields*)ActivePlatform_t2811_il2cpp_TypeInfo_var->static_fields)->____active_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = ((ActivePlatform_t2811_StaticFields*)ActivePlatform_t2811_il2cpp_TypeInfo_var->static_fields)->____active_0;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern TypeInfo* GameCenterPlatform_t740_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivePlatform_SelectSocialPlatform_m9631 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameCenterPlatform_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(549);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameCenterPlatform_t740 * L_0 = (GameCenterPlatform_t740 *)il2cpp_codegen_object_new (GameCenterPlatform_t740_il2cpp_TypeInfo_var);
		GameCenterPlatform__ctor_m8387(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserState
#include "UnityEngine_UnityEngine_SocialPlatforms_UserStateMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.UserScope
#include "UnityEngine_UnityEngine_SocialPlatforms_UserScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// UnityEngine.SocialPlatforms.TimeScope
#include "UnityEngine_UnityEngine_SocialPlatforms_TimeScopeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" void Range__ctor_m9632 (Range_t2804 * __this, int32_t ___fromValue, int32_t ___valueCount, const MethodInfo* method)
{
	{
		int32_t L_0 = ___fromValue;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount;
		__this->___count_1 = L_1;
		return;
	}
}
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.PropertyAttribute
#include "UnityEngine_UnityEngine_PropertyAttributeMethodDeclarations.h"



// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" void PropertyAttribute__ctor_m353 (PropertyAttribute_t2 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TooltipAttribute
#include "UnityEngine_UnityEngine_TooltipAttributeMethodDeclarations.h"



// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" void TooltipAttribute__ctor_m5947 (TooltipAttribute_t1052 * __this, String_t* ___tooltip, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip;
		__this->___tooltip_0 = L_0;
		return;
	}
}
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SpaceAttribute
#include "UnityEngine_UnityEngine_SpaceAttributeMethodDeclarations.h"



// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" void SpaceAttribute__ctor_m5945 (SpaceAttribute_t1050 * __this, float ___height, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		float L_0 = ___height;
		__this->___height_0 = L_0;
		return;
	}
}
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.RangeAttribute
#include "UnityEngine_UnityEngine_RangeAttributeMethodDeclarations.h"



// System.Void UnityEngine.RangeAttribute::.ctor(System.Single,System.Single)
extern "C" void RangeAttribute__ctor_m5939 (RangeAttribute_t1047 * __this, float ___min, float ___max, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		float L_0 = ___min;
		__this->___min_0 = L_0;
		float L_1 = ___max;
		__this->___max_1 = L_1;
		return;
	}
}
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextAreaAttribute
#include "UnityEngine_UnityEngine_TextAreaAttributeMethodDeclarations.h"



// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TextAreaAttribute__ctor_m5950 (TextAreaAttribute_t1053 * __this, int32_t ___minLines, int32_t ___maxLines, const MethodInfo* method)
{
	{
		PropertyAttribute__ctor_m353(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines;
		__this->___minLines_0 = L_0;
		int32_t L_1 = ___maxLines;
		__this->___maxLines_1 = L_1;
		return;
	}
}
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SelectionBaseAttribute
#include "UnityEngine_UnityEngine_SelectionBaseAttributeMethodDeclarations.h"



// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" void SelectionBaseAttribute__ctor_m5946 (SelectionBaseAttribute_t1051 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderState
#include "UnityEngine_UnityEngine_SliderStateMethodDeclarations.h"



// System.Void UnityEngine.SliderState::.ctor()
extern "C" void SliderState__ctor_m9633 (SliderState_t2815 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandler.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SliderHandler
#include "UnityEngine_UnityEngine_SliderHandlerMethodDeclarations.h"

// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyle.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_Event.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContent.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffset.h"
// UnityEngine.Event
#include "UnityEngine_UnityEngine_EventMethodDeclarations.h"
// UnityEngine.GUI
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
// UnityEngine.GUIUtility
#include "UnityEngine_UnityEngine_GUIUtilityMethodDeclarations.h"
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClockMethodDeclarations.h"
// UnityEngine.GUIContent
#include "UnityEngine_UnityEngine_GUIContentMethodDeclarations.h"
// UnityEngine.GUIStyle
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
// UnityEngine.RectOffset
#include "UnityEngine_UnityEngine_RectOffsetMethodDeclarations.h"


// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m9634 (SliderHandler_t2816 * __this, Rect_t640  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t107 * ___slider, GUIStyle_t107 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method)
{
	{
		Rect_t640  L_0 = ___position;
		__this->___position_0 = L_0;
		float L_1 = ___currentValue;
		__this->___currentValue_1 = L_1;
		float L_2 = ___size;
		__this->___size_2 = L_2;
		float L_3 = ___start;
		__this->___start_3 = L_3;
		float L_4 = ___end;
		__this->___end_4 = L_4;
		GUIStyle_t107 * L_5 = ___slider;
		__this->___slider_5 = L_5;
		GUIStyle_t107 * L_6 = ___thumb;
		__this->___thumb_6 = L_6;
		bool L_7 = ___horiz;
		__this->___horiz_7 = L_7;
		int32_t L_8 = ___id;
		__this->___id_8 = L_8;
		return;
	}
}
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m9635 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		GUIStyle_t107 * L_0 = (__this->___slider_5);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		GUIStyle_t107 * L_1 = (__this->___thumb_6);
		if (L_1)
		{
			goto IL_001d;
		}
	}

IL_0016:
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_001d:
	{
		int32_t L_3 = SliderHandler_CurrentEventType_m9640(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (L_4 == 0)
		{
			goto IL_004f;
		}
		if (L_4 == 1)
		{
			goto IL_005d;
		}
		if (L_4 == 2)
		{
			goto IL_006b;
		}
		if (L_4 == 3)
		{
			goto IL_0056;
		}
		if (L_4 == 4)
		{
			goto IL_006b;
		}
		if (L_4 == 5)
		{
			goto IL_006b;
		}
		if (L_4 == 6)
		{
			goto IL_006b;
		}
		if (L_4 == 7)
		{
			goto IL_0064;
		}
	}
	{
		goto IL_006b;
	}

IL_004f:
	{
		float L_5 = SliderHandler_OnMouseDown_m9636(__this, /*hidden argument*/NULL);
		return L_5;
	}

IL_0056:
	{
		float L_6 = SliderHandler_OnMouseDrag_m9637(__this, /*hidden argument*/NULL);
		return L_6;
	}

IL_005d:
	{
		float L_7 = SliderHandler_OnMouseUp_m9638(__this, /*hidden argument*/NULL);
		return L_7;
	}

IL_0064:
	{
		float L_8 = SliderHandler_OnRepaint_m9639(__this, /*hidden argument*/NULL);
		return L_8;
	}

IL_006b:
	{
		float L_9 = (__this->___currentValue_1);
		return L_9;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern TypeInfo* GUI_t647_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* SystemClock_t2819_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseDown_m9636 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		SystemClock_t2819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4423);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Rect_t640  V_1 = {0};
	Rect_t640  V_2 = {0};
	DateTime_t287  V_3 = {0};
	{
		Rect_t640  L_0 = (__this->___position_0);
		V_1 = L_0;
		Event_t726 * L_1 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t110  L_2 = Event_get_mousePosition_m8778(L_1, /*hidden argument*/NULL);
		bool L_3 = Rect_Contains_m3736((&V_1), L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = SliderHandler_IsEmptySlider_m9642(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		float L_5 = (__this->___currentValue_1);
		return L_5;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_scrollTroughSide_m8507(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m8623(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		Event_t726 * L_7 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Event_Use_m8785(L_7, /*hidden argument*/NULL);
		Rect_t640  L_8 = SliderHandler_ThumbSelectionRect_m9649(__this, /*hidden argument*/NULL);
		V_2 = L_8;
		Event_t726 * L_9 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector2_t110  L_10 = Event_get_mousePosition_m8778(L_9, /*hidden argument*/NULL);
		bool L_11 = Rect_Contains_m3736((&V_2), L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007d;
		}
	}
	{
		float L_12 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		SliderHandler_StartDraggingWithValue_m9650(__this, L_12, /*hidden argument*/NULL);
		float L_13 = (__this->___currentValue_1);
		return L_13;
	}

IL_007d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_changed_m8509(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		bool L_14 = SliderHandler_SupportsPageMovements_m9643(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00c7;
		}
	}
	{
		SliderState_t2815 * L_15 = SliderHandler_SliderState_m9651(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t2819_il2cpp_TypeInfo_var);
		DateTime_t287  L_16 = SystemClock_get_now_m9683(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_16;
		DateTime_t287  L_17 = DateTime_AddMilliseconds_m9767((&V_3), (250.0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_m8505(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		int32_t L_18 = SliderHandler_CurrentScrollTroughSide_m9641(__this, /*hidden argument*/NULL);
		GUI_set_scrollTroughSide_m8507(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		float L_19 = SliderHandler_PageMovementValue_m9644(__this, /*hidden argument*/NULL);
		return L_19;
	}

IL_00c7:
	{
		float L_20 = SliderHandler_ValueForCurrentMousePosition_m9647(__this, /*hidden argument*/NULL);
		V_0 = L_20;
		float L_21 = V_0;
		SliderHandler_StartDraggingWithValue_m9650(__this, L_21, /*hidden argument*/NULL);
		float L_22 = V_0;
		float L_23 = SliderHandler_Clamp_m9648(__this, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t647_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseDrag_m9637 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		GUI_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	SliderState_t2815 * V_0 = {0};
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_get_hotControl_m8622(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		float L_2 = (__this->___currentValue_1);
		return L_2;
	}

IL_0017:
	{
		SliderState_t2815 * L_3 = SliderHandler_SliderState_m9651(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		SliderState_t2815 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = (L_4->___isDragging_2);
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = (__this->___currentValue_1);
		return L_6;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_changed_m8509(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		Event_t726 * L_7 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Event_Use_m8785(L_7, /*hidden argument*/NULL);
		float L_8 = SliderHandler_MousePosition_m9656(__this, /*hidden argument*/NULL);
		SliderState_t2815 * L_9 = V_0;
		NullCheck(L_9);
		float L_10 = (L_9->___dragStartPos_0);
		V_1 = ((float)((float)L_8-(float)L_10));
		SliderState_t2815 * L_11 = V_0;
		NullCheck(L_11);
		float L_12 = (L_11->___dragStartValue_1);
		float L_13 = V_1;
		float L_14 = SliderHandler_ValuesPerPixel_m9657(__this, /*hidden argument*/NULL);
		V_2 = ((float)((float)L_12+(float)((float)((float)L_13/(float)L_14))));
		float L_15 = V_2;
		float L_16 = SliderHandler_Clamp_m9648(__this, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnMouseUp_m9638 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		int32_t L_0 = GUIUtility_get_hotControl_m8622(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		Event_t726 * L_2 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Event_Use_m8785(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m8623(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		float L_3 = (__this->___currentValue_1);
		return L_3;
	}
}
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern TypeInfo* GUIContent_t725_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* GUI_t647_il2cpp_TypeInfo_var;
extern TypeInfo* SystemClock_t2819_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_OnRepaint_m9639 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		GUI_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		SystemClock_t2819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4423);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	Rect_t640  V_0 = {0};
	Rect_t640  V_1 = {0};
	DateTime_t287  V_2 = {0};
	{
		GUIStyle_t107 * L_0 = (__this->___slider_5);
		Rect_t640  L_1 = (__this->___position_0);
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t725_il2cpp_TypeInfo_var);
		GUIContent_t725 * L_2 = ((GUIContent_t725_StaticFields*)GUIContent_t725_il2cpp_TypeInfo_var->static_fields)->___none_3;
		int32_t L_3 = (__this->___id_8);
		NullCheck(L_0);
		GUIStyle_Draw_m8752(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = SliderHandler_IsEmptySlider_m9642(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		GUIStyle_t107 * L_5 = (__this->___thumb_6);
		Rect_t640  L_6 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUIContent_t725_il2cpp_TypeInfo_var);
		GUIContent_t725 * L_7 = ((GUIContent_t725_StaticFields*)GUIContent_t725_il2cpp_TypeInfo_var->static_fields)->___none_3;
		int32_t L_8 = (__this->___id_8);
		NullCheck(L_5);
		GUIStyle_Draw_m8752(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0043:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		int32_t L_9 = GUIUtility_get_hotControl_m8622(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = (__this->___id_8);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_007c;
		}
	}
	{
		Rect_t640  L_11 = (__this->___position_0);
		V_0 = L_11;
		Event_t726 * L_12 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector2_t110  L_13 = Event_get_mousePosition_m8778(L_12, /*hidden argument*/NULL);
		bool L_14 = Rect_Contains_m3736((&V_0), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_007c;
		}
	}
	{
		bool L_15 = SliderHandler_IsEmptySlider_m9642(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0083;
		}
	}

IL_007c:
	{
		float L_16 = (__this->___currentValue_1);
		return L_16;
	}

IL_0083:
	{
		Rect_t640  L_17 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_1 = L_17;
		Event_t726 * L_18 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector2_t110  L_19 = Event_get_mousePosition_m8778(L_18, /*hidden argument*/NULL);
		bool L_20 = Rect_Contains_m3736((&V_1), L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		int32_t L_21 = GUI_get_scrollTroughSide_m8506(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		GUIUtility_set_hotControl_m8623(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		float L_22 = (__this->___currentValue_1);
		return L_22;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_InternalRepaintEditorWindow_m8534(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t2819_il2cpp_TypeInfo_var);
		DateTime_t287  L_23 = SystemClock_get_now_m9683(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t287  L_24 = GUI_get_nextScrollStepTime_m8504(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		bool L_25 = DateTime_op_LessThan_m9855(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d8;
		}
	}
	{
		float L_26 = (__this->___currentValue_1);
		return L_26;
	}

IL_00d8:
	{
		int32_t L_27 = SliderHandler_CurrentScrollTroughSide_m9641(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		int32_t L_28 = GUI_get_scrollTroughSide_m8506(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00ef;
		}
	}
	{
		float L_29 = (__this->___currentValue_1);
		return L_29;
	}

IL_00ef:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SystemClock_t2819_il2cpp_TypeInfo_var);
		DateTime_t287  L_30 = SystemClock_get_now_m9683(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_30;
		DateTime_t287  L_31 = DateTime_AddMilliseconds_m9767((&V_2), (30.0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_nextScrollStepTime_m8505(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		bool L_32 = SliderHandler_SupportsPageMovements_m9643(__this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_012e;
		}
	}
	{
		SliderState_t2815 * L_33 = SliderHandler_SliderState_m9651(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		L_33->___isDragging_2 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		GUI_set_changed_m8509(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		float L_34 = SliderHandler_PageMovementValue_m9644(__this, /*hidden argument*/NULL);
		return L_34;
	}

IL_012e:
	{
		float L_35 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		return L_35;
	}
}
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m9640 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	{
		Event_t726 * L_0 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		NullCheck(L_0);
		int32_t L_2 = Event_GetTypeForControl_m8777(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m9641 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector2_t110  V_2 = {0};
	Vector2_t110  V_3 = {0};
	Rect_t640  V_4 = {0};
	Rect_t640  V_5 = {0};
	float G_B3_0 = 0.0f;
	float G_B6_0 = 0.0f;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Event_t726 * L_1 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t110  L_2 = Event_get_mousePosition_m8778(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->___x_1);
		G_B3_0 = L_3;
		goto IL_0036;
	}

IL_0023:
	{
		Event_t726 * L_4 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector2_t110  L_5 = Event_get_mousePosition_m8778(L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		float L_6 = ((&V_3)->___y_2);
		G_B3_0 = L_6;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		bool L_7 = (__this->___horiz_7);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Rect_t640  L_8 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = Rect_get_x_m3388((&V_4), /*hidden argument*/NULL);
		G_B6_0 = L_9;
		goto IL_0065;
	}

IL_0056:
	{
		Rect_t640  L_10 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Rect_get_y_m3387((&V_5), /*hidden argument*/NULL);
		G_B6_0 = L_11;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_0073;
		}
	}
	{
		G_B9_0 = 1;
		goto IL_0074;
	}

IL_0073:
	{
		G_B9_0 = (-1);
	}

IL_0074:
	{
		return G_B9_0;
	}
}
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m9642 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		return ((((float)L_0) == ((float)L_1))? 1 : 0);
	}
}
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern TypeInfo* GUI_t647_il2cpp_TypeInfo_var;
extern "C" bool SliderHandler_SupportsPageMovements_m9643 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(173);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___size_2);
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t647_il2cpp_TypeInfo_var);
		bool L_1 = GUI_get_usePageScrollbars_m8532(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m9644 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		float L_0 = (__this->___currentValue_1);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = G_B3_0;
		float L_3 = SliderHandler_MousePosition_m9656(__this, /*hidden argument*/NULL);
		float L_4 = SliderHandler_PageUpMovementBound_m9645(__this, /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)L_4))))
		{
			goto IL_0048;
		}
	}
	{
		float L_5 = V_0;
		float L_6 = (__this->___size_2);
		int32_t L_7 = V_1;
		V_0 = ((float)((float)L_5+(float)((float)((float)((float)((float)L_6*(float)(((float)L_7))))*(float)(0.9f)))));
		goto IL_005a;
	}

IL_0048:
	{
		float L_8 = V_0;
		float L_9 = (__this->___size_2);
		int32_t L_10 = V_1;
		V_0 = ((float)((float)L_8-(float)((float)((float)((float)((float)L_9*(float)(((float)L_10))))*(float)(0.9f)))));
	}

IL_005a:
	{
		float L_11 = V_0;
		float L_12 = SliderHandler_Clamp_m9648(__this, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m9645 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Rect_t640  V_0 = {0};
	Rect_t640  V_1 = {0};
	Rect_t640  V_2 = {0};
	Rect_t640  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		Rect_t640  L_1 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = Rect_get_xMax_m5655((&V_0), /*hidden argument*/NULL);
		Rect_t640  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m3388((&V_1), /*hidden argument*/NULL);
		return ((float)((float)L_2-(float)L_4));
	}

IL_0029:
	{
		Rect_t640  L_5 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = Rect_get_yMax_m5656((&V_2), /*hidden argument*/NULL);
		Rect_t640  L_7 = (__this->___position_0);
		V_3 = L_7;
		float L_8 = Rect_get_y_m3387((&V_3), /*hidden argument*/NULL);
		return ((float)((float)L_6-(float)L_8));
	}
}
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t726 * SliderHandler_CurrentEvent_m9646 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	{
		Event_t726 * L_0 = Event_get_current_m3822(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m9647 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Rect_t640  V_0 = {0};
	Rect_t640  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		float L_1 = SliderHandler_MousePosition_m9656(__this, /*hidden argument*/NULL);
		Rect_t640  L_2 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Rect_get_width_m3743((&V_0), /*hidden argument*/NULL);
		float L_4 = SliderHandler_ValuesPerPixel_m9657(__this, /*hidden argument*/NULL);
		float L_5 = (__this->___start_3);
		float L_6 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_1-(float)((float)((float)L_3*(float)(0.5f)))))/(float)L_4))+(float)L_5))-(float)((float)((float)L_6*(float)(0.5f)))));
	}

IL_0042:
	{
		float L_7 = SliderHandler_MousePosition_m9656(__this, /*hidden argument*/NULL);
		Rect_t640  L_8 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		float L_10 = SliderHandler_ValuesPerPixel_m9657(__this, /*hidden argument*/NULL);
		float L_11 = (__this->___start_3);
		float L_12 = (__this->___size_2);
		return ((float)((float)((float)((float)((float)((float)((float)((float)L_7-(float)((float)((float)L_9*(float)(0.5f)))))/(float)L_10))+(float)L_11))-(float)((float)((float)L_12*(float)(0.5f)))));
	}
}
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_Clamp_m9648 (SliderHandler_t2816 * __this, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___value;
		float L_1 = SliderHandler_MinValue_m9660(__this, /*hidden argument*/NULL);
		float L_2 = SliderHandler_MaxValue_m9659(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m3905(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t640  SliderHandler_ThumbSelectionRect_m9649 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Rect_t640  V_0 = {0};
	int32_t V_1 = 0;
	{
		Rect_t640  L_0 = SliderHandler_ThumbRect_m9652(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = ((int32_t)12);
		float L_1 = Rect_get_width_m3743((&V_0), /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		if ((!(((float)L_1) < ((float)(((float)L_2))))))
		{
			goto IL_003f;
		}
	}
	{
		Rect_t640 * L_3 = (&V_0);
		float L_4 = Rect_get_x_m3388(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		float L_6 = Rect_get_width_m3743((&V_0), /*hidden argument*/NULL);
		Rect_set_x_m3840(L_3, ((float)((float)L_4-(float)((float)((float)((float)((float)(((float)L_5))-(float)L_6))/(float)(2.0f))))), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		Rect_set_width_m3838((&V_0), (((float)L_7)), /*hidden argument*/NULL);
	}

IL_003f:
	{
		float L_8 = Rect_get_height_m3744((&V_0), /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		if ((!(((float)L_8) < ((float)(((float)L_9))))))
		{
			goto IL_0074;
		}
	}
	{
		Rect_t640 * L_10 = (&V_0);
		float L_11 = Rect_get_y_m3387(L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		float L_13 = Rect_get_height_m3744((&V_0), /*hidden argument*/NULL);
		Rect_set_y_m3841(L_10, ((float)((float)L_11-(float)((float)((float)((float)((float)(((float)L_12))-(float)L_13))/(float)(2.0f))))), /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		Rect_set_height_m3839((&V_0), (((float)L_14)), /*hidden argument*/NULL);
	}

IL_0074:
	{
		Rect_t640  L_15 = V_0;
		return L_15;
	}
}
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m9650 (SliderHandler_t2816 * __this, float ___dragStartValue, const MethodInfo* method)
{
	SliderState_t2815 * V_0 = {0};
	{
		SliderState_t2815 * L_0 = SliderHandler_SliderState_m9651(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		SliderState_t2815 * L_1 = V_0;
		float L_2 = SliderHandler_MousePosition_m9656(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->___dragStartPos_0 = L_2;
		SliderState_t2815 * L_3 = V_0;
		float L_4 = ___dragStartValue;
		NullCheck(L_3);
		L_3->___dragStartValue_1 = L_4;
		SliderState_t2815 * L_5 = V_0;
		NullCheck(L_5);
		L_5->___isDragging_2 = 1;
		return;
	}
}
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern const Il2CppType* SliderState_t2815_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* SliderState_t2815_il2cpp_TypeInfo_var;
extern "C" SliderState_t2815 * SliderHandler_SliderState_m9651 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SliderState_t2815_0_0_0_var = il2cpp_codegen_type_from_index(4424);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		SliderState_t2815_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4424);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(SliderState_t2815_0_0_0_var), /*hidden argument*/NULL);
		int32_t L_1 = (__this->___id_8);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		Object_t * L_2 = GUIUtility_GetStateObject_m8621(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return ((SliderState_t2815 *)Castclass(L_2, SliderState_t2815_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t640  SliderHandler_ThumbRect_m9652 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Rect_t640  G_B3_0 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Rect_t640  L_1 = SliderHandler_HorizontalThumbRect_m9654(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		Rect_t640  L_2 = SliderHandler_VerticalThumbRect_m9653(__this, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t640  SliderHandler_VerticalThumbRect_m9653 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t640  V_1 = {0};
	Rect_t640  V_2 = {0};
	Rect_t640  V_3 = {0};
	Rect_t640  V_4 = {0};
	Rect_t640  V_5 = {0};
	Rect_t640  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m9657(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		Rect_t640  L_3 = (__this->___position_0);
		V_1 = L_3;
		float L_4 = Rect_get_x_m3388((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_5 = (__this->___slider_5);
		NullCheck(L_5);
		RectOffset_t642 * L_6 = GUIStyle_get_padding_m3825(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_left_m5848(L_6, /*hidden argument*/NULL);
		float L_8 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		float L_9 = (__this->___start_3);
		float L_10 = V_0;
		Rect_t640  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m3387((&V_2), /*hidden argument*/NULL);
		GUIStyle_t107 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t642 * L_14 = GUIStyle_get_padding_m3825(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m5849(L_14, /*hidden argument*/NULL);
		Rect_t640  L_16 = (__this->___position_0);
		V_3 = L_16;
		float L_17 = Rect_get_width_m3743((&V_3), /*hidden argument*/NULL);
		GUIStyle_t107 * L_18 = (__this->___slider_5);
		NullCheck(L_18);
		RectOffset_t642 * L_19 = GUIStyle_get_padding_m3825(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = RectOffset_get_horizontal_m5842(L_19, /*hidden argument*/NULL);
		float L_21 = (__this->___size_2);
		float L_22 = V_0;
		float L_23 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		Rect_t640  L_24 = {0};
		Rect__ctor_m3389(&L_24, ((float)((float)L_4+(float)(((float)L_7)))), ((float)((float)((float)((float)((float)((float)((float)((float)L_8-(float)L_9))*(float)L_10))+(float)L_12))+(float)(((float)L_15)))), ((float)((float)L_17-(float)(((float)L_20)))), ((float)((float)((float)((float)L_21*(float)L_22))+(float)L_23)), /*hidden argument*/NULL);
		return L_24;
	}

IL_009d:
	{
		Rect_t640  L_25 = (__this->___position_0);
		V_4 = L_25;
		float L_26 = Rect_get_x_m3388((&V_4), /*hidden argument*/NULL);
		GUIStyle_t107 * L_27 = (__this->___slider_5);
		NullCheck(L_27);
		RectOffset_t642 * L_28 = GUIStyle_get_padding_m3825(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = RectOffset_get_left_m5848(L_28, /*hidden argument*/NULL);
		float L_30 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		float L_31 = (__this->___size_2);
		float L_32 = (__this->___start_3);
		float L_33 = V_0;
		Rect_t640  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m3387((&V_5), /*hidden argument*/NULL);
		GUIStyle_t107 * L_36 = (__this->___slider_5);
		NullCheck(L_36);
		RectOffset_t642 * L_37 = GUIStyle_get_padding_m3825(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = RectOffset_get_top_m5849(L_37, /*hidden argument*/NULL);
		Rect_t640  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_width_m3743((&V_6), /*hidden argument*/NULL);
		GUIStyle_t107 * L_41 = (__this->___slider_5);
		NullCheck(L_41);
		RectOffset_t642 * L_42 = GUIStyle_get_padding_m3825(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		int32_t L_43 = RectOffset_get_horizontal_m5842(L_42, /*hidden argument*/NULL);
		float L_44 = (__this->___size_2);
		float L_45 = V_0;
		float L_46 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		Rect_t640  L_47 = {0};
		Rect__ctor_m3389(&L_47, ((float)((float)L_26+(float)(((float)L_29)))), ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_30+(float)L_31))-(float)L_32))*(float)L_33))+(float)L_35))+(float)(((float)L_38)))), ((float)((float)L_40-(float)(((float)L_43)))), ((float)((float)((float)((float)L_44*(float)((-L_45))))+(float)L_46)), /*hidden argument*/NULL);
		return L_47;
	}
}
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t640  SliderHandler_HorizontalThumbRect_m9654 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Rect_t640  V_1 = {0};
	Rect_t640  V_2 = {0};
	Rect_t640  V_3 = {0};
	Rect_t640  V_4 = {0};
	Rect_t640  V_5 = {0};
	Rect_t640  V_6 = {0};
	{
		float L_0 = SliderHandler_ValuesPerPixel_m9657(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = (__this->___start_3);
		float L_2 = (__this->___end_4);
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_009d;
		}
	}
	{
		float L_3 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		float L_4 = (__this->___start_3);
		float L_5 = V_0;
		Rect_t640  L_6 = (__this->___position_0);
		V_1 = L_6;
		float L_7 = Rect_get_x_m3388((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_8 = (__this->___slider_5);
		NullCheck(L_8);
		RectOffset_t642 * L_9 = GUIStyle_get_padding_m3825(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = RectOffset_get_left_m5848(L_9, /*hidden argument*/NULL);
		Rect_t640  L_11 = (__this->___position_0);
		V_2 = L_11;
		float L_12 = Rect_get_y_m3387((&V_2), /*hidden argument*/NULL);
		GUIStyle_t107 * L_13 = (__this->___slider_5);
		NullCheck(L_13);
		RectOffset_t642 * L_14 = GUIStyle_get_padding_m3825(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = RectOffset_get_top_m5849(L_14, /*hidden argument*/NULL);
		float L_16 = (__this->___size_2);
		float L_17 = V_0;
		float L_18 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		Rect_t640  L_19 = (__this->___position_0);
		V_3 = L_19;
		float L_20 = Rect_get_height_m3744((&V_3), /*hidden argument*/NULL);
		GUIStyle_t107 * L_21 = (__this->___slider_5);
		NullCheck(L_21);
		RectOffset_t642 * L_22 = GUIStyle_get_padding_m3825(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = RectOffset_get_vertical_m5843(L_22, /*hidden argument*/NULL);
		Rect_t640  L_24 = {0};
		Rect__ctor_m3389(&L_24, ((float)((float)((float)((float)((float)((float)((float)((float)L_3-(float)L_4))*(float)L_5))+(float)L_7))+(float)(((float)L_10)))), ((float)((float)L_12+(float)(((float)L_15)))), ((float)((float)((float)((float)L_16*(float)L_17))+(float)L_18)), ((float)((float)L_20-(float)(((float)L_23)))), /*hidden argument*/NULL);
		return L_24;
	}

IL_009d:
	{
		float L_25 = SliderHandler_ClampedCurrentValue_m9655(__this, /*hidden argument*/NULL);
		float L_26 = (__this->___size_2);
		float L_27 = (__this->___start_3);
		float L_28 = V_0;
		Rect_t640  L_29 = (__this->___position_0);
		V_4 = L_29;
		float L_30 = Rect_get_x_m3388((&V_4), /*hidden argument*/NULL);
		GUIStyle_t107 * L_31 = (__this->___slider_5);
		NullCheck(L_31);
		RectOffset_t642 * L_32 = GUIStyle_get_padding_m3825(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = RectOffset_get_left_m5848(L_32, /*hidden argument*/NULL);
		Rect_t640  L_34 = (__this->___position_0);
		V_5 = L_34;
		float L_35 = Rect_get_y_m3387((&V_5), /*hidden argument*/NULL);
		float L_36 = (__this->___size_2);
		float L_37 = V_0;
		float L_38 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		Rect_t640  L_39 = (__this->___position_0);
		V_6 = L_39;
		float L_40 = Rect_get_height_m3744((&V_6), /*hidden argument*/NULL);
		Rect_t640  L_41 = {0};
		Rect__ctor_m3389(&L_41, ((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)L_25+(float)L_26))-(float)L_27))*(float)L_28))+(float)L_30))+(float)(((float)L_33)))), L_35, ((float)((float)((float)((float)L_36*(float)((-L_37))))+(float)L_38)), L_40, /*hidden argument*/NULL);
		return L_41;
	}
}
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m9655 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___currentValue_1);
		float L_1 = SliderHandler_Clamp_m9648(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m9656 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Vector2_t110  V_0 = {0};
	Rect_t640  V_1 = {0};
	Vector2_t110  V_2 = {0};
	Rect_t640  V_3 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		Event_t726 * L_1 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector2_t110  L_2 = Event_get_mousePosition_m8778(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = ((&V_0)->___x_1);
		Rect_t640  L_4 = (__this->___position_0);
		V_1 = L_4;
		float L_5 = Rect_get_x_m3388((&V_1), /*hidden argument*/NULL);
		return ((float)((float)L_3-(float)L_5));
	}

IL_002e:
	{
		Event_t726 * L_6 = SliderHandler_CurrentEvent_m9646(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t110  L_7 = Event_get_mousePosition_m8778(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = ((&V_2)->___y_2);
		Rect_t640  L_9 = (__this->___position_0);
		V_3 = L_9;
		float L_10 = Rect_get_y_m3387((&V_3), /*hidden argument*/NULL);
		return ((float)((float)L_8-(float)L_10));
	}
}
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m9657 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	Rect_t640  V_0 = {0};
	Rect_t640  V_1 = {0};
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		Rect_t640  L_1 = (__this->___position_0);
		V_0 = L_1;
		float L_2 = Rect_get_width_m3743((&V_0), /*hidden argument*/NULL);
		GUIStyle_t107 * L_3 = (__this->___slider_5);
		NullCheck(L_3);
		RectOffset_t642 * L_4 = GUIStyle_get_padding_m3825(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = RectOffset_get_horizontal_m5842(L_4, /*hidden argument*/NULL);
		float L_6 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		float L_7 = (__this->___end_4);
		float L_8 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_2-(float)(((float)L_5))))-(float)L_6))/(float)((float)((float)L_7-(float)L_8))));
	}

IL_0041:
	{
		Rect_t640  L_9 = (__this->___position_0);
		V_1 = L_9;
		float L_10 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_11 = (__this->___slider_5);
		NullCheck(L_11);
		RectOffset_t642 * L_12 = GUIStyle_get_padding_m3825(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = RectOffset_get_vertical_m5843(L_12, /*hidden argument*/NULL);
		float L_14 = SliderHandler_ThumbSize_m9658(__this, /*hidden argument*/NULL);
		float L_15 = (__this->___end_4);
		float L_16 = (__this->___start_3);
		return ((float)((float)((float)((float)((float)((float)L_10-(float)(((float)L_13))))-(float)L_14))/(float)((float)((float)L_15-(float)L_16))));
	}
}
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m9658 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	float G_B4_0 = 0.0f;
	float G_B8_0 = 0.0f;
	{
		bool L_0 = (__this->___horiz_7);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		GUIStyle_t107 * L_1 = (__this->___thumb_6);
		NullCheck(L_1);
		float L_2 = GUIStyle_get_fixedWidth_m8742(L_1, /*hidden argument*/NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0030;
		}
	}
	{
		GUIStyle_t107 * L_3 = (__this->___thumb_6);
		NullCheck(L_3);
		float L_4 = GUIStyle_get_fixedWidth_m8742(L_3, /*hidden argument*/NULL);
		G_B4_0 = L_4;
		goto IL_0041;
	}

IL_0030:
	{
		GUIStyle_t107 * L_5 = (__this->___thumb_6);
		NullCheck(L_5);
		RectOffset_t642 * L_6 = GUIStyle_get_padding_m3825(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = RectOffset_get_horizontal_m5842(L_6, /*hidden argument*/NULL);
		G_B4_0 = (((float)L_7));
	}

IL_0041:
	{
		return G_B4_0;
	}

IL_0042:
	{
		GUIStyle_t107 * L_8 = (__this->___thumb_6);
		NullCheck(L_8);
		float L_9 = GUIStyle_get_fixedHeight_m8743(L_8, /*hidden argument*/NULL);
		if ((((float)L_9) == ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		GUIStyle_t107 * L_10 = (__this->___thumb_6);
		NullCheck(L_10);
		float L_11 = GUIStyle_get_fixedHeight_m8743(L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		goto IL_0078;
	}

IL_0067:
	{
		GUIStyle_t107 * L_12 = (__this->___thumb_6);
		NullCheck(L_12);
		RectOffset_t642 * L_13 = GUIStyle_get_padding_m3825(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int32_t L_14 = RectOffset_get_vertical_m5843(L_13, /*hidden argument*/NULL);
		G_B8_0 = (((float)L_14));
	}

IL_0078:
	{
		return G_B8_0;
	}
}
// System.Single UnityEngine.SliderHandler::MaxValue()
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_MaxValue_m9659 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m5799(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (__this->___size_2);
		return ((float)((float)L_2-(float)L_3));
	}
}
// System.Single UnityEngine.SliderHandler::MinValue()
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern "C" float SliderHandler_MinValue_m9660 (SliderHandler_t2816 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___start_3);
		float L_1 = (__this->___end_4);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m5832(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtility.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StackTraceUtility
#include "UnityEngine_UnityEngine_StackTraceUtilityMethodDeclarations.h"

// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTrace.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrame.h"
// System.Diagnostics.StackTrace
#include "mscorlib_System_Diagnostics_StackTraceMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Diagnostics.StackFrame
#include "mscorlib_System_Diagnostics_StackFrameMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void UnityEngine.StackTraceUtility::.ctor()
extern "C" void StackTraceUtility__ctor_m9661 (StackTraceUtility_t55 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility__cctor_m9662 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_SetProjectFolder_m9663 (Object_t * __this /* static, unused */, String_t* ___folder, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___folder;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0 = L_0;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern TypeInfo* StackTrace_t2860_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStackTrace_m383 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StackTrace_t2860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4425);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	StackTrace_t2860 * V_0 = {0};
	String_t* V_1 = {0};
	{
		StackTrace_t2860 * L_0 = (StackTrace_t2860 *)il2cpp_codegen_object_new (StackTrace_t2860_il2cpp_TypeInfo_var);
		StackTrace__ctor_m9856(L_0, 1, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t2860 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m9668(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.String::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool StackTraceUtility_IsSystemStacktraceType_m9664 (Object_t * __this /* static, unused */, Object_t * ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___name;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m3760(L_1, (String_t*) &_stringLiteral1937, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m3760(L_3, (String_t*) &_stringLiteral1938, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m3760(L_5, (String_t*) &_stringLiteral1939, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m3760(L_7, (String_t*) &_stringLiteral1940, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m3760(L_9, (String_t*) &_stringLiteral1941, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m3760(L_11, (String_t*) &_stringLiteral1942, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0065;
	}

IL_0064:
	{
		G_B7_0 = 1;
	}

IL_0065:
	{
		return G_B7_0;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractStringFromException_m9665 (Object_t * __this /* static, unused */, Object_t * ___exception, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Object_t * L_2 = ___exception;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		StackTraceUtility_ExtractStringFromExceptionInternal_m9666(NULL /*static, unused*/, L_2, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_3 = V_0;
		String_t* L_4 = V_1;
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral75, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern TypeInfo* ArgumentException_t654_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTrace_t2860_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" void StackTraceUtility_ExtractStringFromExceptionInternal_m9666 (Object_t * __this /* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StackTrace_t2860_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4425);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t57 * V_0 = {0};
	StringBuilder_t261 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	StackTrace_t2860 * V_5 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___exceptiono;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t654 * L_1 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_1, (String_t*) &_stringLiteral1943, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___exceptiono;
		V_0 = ((Exception_t57 *)IsInst(L_2, Exception_t57_il2cpp_TypeInfo_var));
		Exception_t57 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t654 * L_4 = (ArgumentException_t654 *)il2cpp_codegen_object_new (ArgumentException_t654_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3775(L_4, (String_t*) &_stringLiteral1944, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Exception_t57 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004b;
	}

IL_003e:
	{
		Exception_t57 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m410(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)((int32_t)L_9*(int32_t)2));
	}

IL_004b:
	{
		StringBuilder_t261 * L_10 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9819(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		*((Object_t **)(L_11)) = (Object_t *)L_12;
		String_t* L_13 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_13;
		goto IL_00ff;
	}

IL_0063:
	{
		String_t* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m410(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		Exception_t57 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_16);
		V_2 = L_17;
		goto IL_008c;
	}

IL_007a:
	{
		Exception_t57 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Exception::get_StackTrace() */, L_18);
		String_t* L_20 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m455(NULL /*static, unused*/, L_19, (String_t*) &_stringLiteral75, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008c:
	{
		Exception_t57 * L_22 = V_0;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(10 /* System.Type System.Exception::GetType() */, L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		V_3 = L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_4 = L_25;
		Exception_t57 * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_26);
		if (!L_27)
		{
			goto IL_00b2;
		}
	}
	{
		Exception_t57 * L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_28);
		V_4 = L_29;
	}

IL_00b2:
	{
		String_t* L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = String_Trim_m413(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m410(L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d8;
		}
	}
	{
		String_t* L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m408(NULL /*static, unused*/, L_33, (String_t*) &_stringLiteral1805, /*hidden argument*/NULL);
		V_3 = L_34;
		String_t* L_35 = V_3;
		String_t* L_36 = V_4;
		String_t* L_37 = String_Concat_m408(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
	}

IL_00d8:
	{
		String_t** L_38 = ___message;
		String_t* L_39 = V_3;
		*((Object_t **)(L_38)) = (Object_t *)L_39;
		Exception_t57 * L_40 = V_0;
		NullCheck(L_40);
		Exception_t57 * L_41 = (Exception_t57 *)VirtFuncInvoker0< Exception_t57 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_40);
		if (!L_41)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_42 = V_3;
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral1945, L_42, (String_t*) &_stringLiteral75, L_43, /*hidden argument*/NULL);
		V_2 = L_44;
	}

IL_00f8:
	{
		Exception_t57 * L_45 = V_0;
		NullCheck(L_45);
		Exception_t57 * L_46 = (Exception_t57 *)VirtFuncInvoker0< Exception_t57 * >::Invoke(5 /* System.Exception System.Exception::get_InnerException() */, L_45);
		V_0 = L_46;
	}

IL_00ff:
	{
		Exception_t57 * L_47 = V_0;
		if (L_47)
		{
			goto IL_0063;
		}
	}
	{
		StringBuilder_t261 * L_48 = V_1;
		String_t* L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_50 = String_Concat_m408(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
		NullCheck(L_48);
		StringBuilder_Append_m3553(L_48, L_50, /*hidden argument*/NULL);
		StackTrace_t2860 * L_51 = (StackTrace_t2860 *)il2cpp_codegen_object_new (StackTrace_t2860_il2cpp_TypeInfo_var);
		StackTrace__ctor_m9856(L_51, 1, 1, /*hidden argument*/NULL);
		V_5 = L_51;
		StringBuilder_t261 * L_52 = V_1;
		StackTrace_t2860 * L_53 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_54 = StackTraceUtility_ExtractFormattedStackTrace_m9668(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		StringBuilder_Append_m3553(L_52, L_54, /*hidden argument*/NULL);
		String_t** L_55 = ___stackTrace;
		StringBuilder_t261 * L_56 = V_1;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_56);
		*((Object_t **)(L_55)) = (Object_t *)L_57;
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t653_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_PostprocessStacktrace_m9667 (Object_t * __this /* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		CharU5BU5D_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	StringBuilder_t261 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = ___oldString;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000c:
	{
		String_t* L_2 = ___oldString;
		CharU5BU5D_t653* L_3 = ((CharU5BU5D_t653*)SZArrayNew(CharU5BU5D_t653_il2cpp_TypeInfo_var, 1));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, 0)) = (uint16_t)((int32_t)10);
		NullCheck(L_2);
		StringU5BU5D_t75* L_4 = String_Split_m3418(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = ___oldString;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m410(L_5, /*hidden argument*/NULL);
		StringBuilder_t261 * L_7 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9819(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0040;
	}

IL_0031:
	{
		StringU5BU5D_t75* L_8 = V_0;
		int32_t L_9 = V_2;
		StringU5BU5D_t75* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)));
		String_t* L_13 = String_Trim_m413((*(String_t**)(String_t**)SZArrayLdElema(L_10, L_12)), /*hidden argument*/NULL);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_13);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, L_9)) = (String_t*)L_13;
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0040:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t75* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		V_3 = 0;
		goto IL_0265;
	}

IL_0050:
	{
		StringU5BU5D_t75* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_17, L_19));
		String_t* L_20 = V_4;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m410(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		String_t* L_22 = V_4;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m407(L_22, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0075;
		}
	}

IL_0070:
	{
		goto IL_0261;
	}

IL_0075:
	{
		String_t* L_24 = V_4;
		NullCheck(L_24);
		bool L_25 = String_StartsWith_m3760(L_24, (String_t*) &_stringLiteral1946, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}
	{
		goto IL_0261;
	}

IL_008b:
	{
		bool L_26 = ___stripEngineInternalInformation;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m3760(L_27, (String_t*) &_stringLiteral1947, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		goto IL_026e;
	}

IL_00a7:
	{
		bool L_29 = ___stripEngineInternalInformation;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t75* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_31)->max_length)))-(int32_t)1)))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_32 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		bool L_33 = StackTraceUtility_IsSystemStacktraceType_m9664(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00fa;
		}
	}
	{
		StringU5BU5D_t75* L_34 = V_0;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		bool L_37 = StackTraceUtility_IsSystemStacktraceType_m9664(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_34, L_36)), /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00d8;
		}
	}
	{
		goto IL_0261;
	}

IL_00d8:
	{
		String_t* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = String_IndexOf_m3827(L_38, (String_t*) &_stringLiteral1948, /*hidden argument*/NULL);
		V_5 = L_39;
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_41 = V_4;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m418(L_41, 0, L_42, /*hidden argument*/NULL);
		V_4 = L_43;
	}

IL_00fa:
	{
		String_t* L_44 = V_4;
		NullCheck(L_44);
		int32_t L_45 = String_IndexOf_m3827(L_44, (String_t*) &_stringLiteral1949, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)(-1))))
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0261;
	}

IL_0111:
	{
		String_t* L_46 = V_4;
		NullCheck(L_46);
		int32_t L_47 = String_IndexOf_m3827(L_46, (String_t*) &_stringLiteral1950, /*hidden argument*/NULL);
		if ((((int32_t)L_47) == ((int32_t)(-1))))
		{
			goto IL_0128;
		}
	}
	{
		goto IL_0261;
	}

IL_0128:
	{
		String_t* L_48 = V_4;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m3827(L_48, (String_t*) &_stringLiteral1951, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_013f;
		}
	}
	{
		goto IL_0261;
	}

IL_013f:
	{
		bool L_50 = ___stripEngineInternalInformation;
		if (!L_50)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_51 = V_4;
		NullCheck(L_51);
		bool L_52 = String_StartsWith_m3760(L_51, (String_t*) &_stringLiteral1196, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_016c;
		}
	}
	{
		String_t* L_53 = V_4;
		NullCheck(L_53);
		bool L_54 = String_EndsWith_m9857(L_53, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_0261;
	}

IL_016c:
	{
		String_t* L_55 = V_4;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m3760(L_55, (String_t*) &_stringLiteral1952, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_57 = V_4;
		NullCheck(L_57);
		String_t* L_58 = String_Remove_m5713(L_57, 0, 3, /*hidden argument*/NULL);
		V_4 = L_58;
	}

IL_0188:
	{
		String_t* L_59 = V_4;
		NullCheck(L_59);
		int32_t L_60 = String_IndexOf_m3827(L_59, (String_t*) &_stringLiteral1953, /*hidden argument*/NULL);
		V_6 = L_60;
		V_7 = (-1);
		int32_t L_61 = V_6;
		if ((((int32_t)L_61) == ((int32_t)(-1))))
		{
			goto IL_01b1;
		}
	}
	{
		String_t* L_62 = V_4;
		int32_t L_63 = V_6;
		NullCheck(L_62);
		int32_t L_64 = String_IndexOf_m9858(L_62, (String_t*) &_stringLiteral123, L_63, /*hidden argument*/NULL);
		V_7 = L_64;
	}

IL_01b1:
	{
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01d4;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		if ((((int32_t)L_66) <= ((int32_t)L_67)))
		{
			goto IL_01d4;
		}
	}
	{
		String_t* L_68 = V_4;
		int32_t L_69 = V_6;
		int32_t L_70 = V_7;
		int32_t L_71 = V_6;
		NullCheck(L_68);
		String_t* L_72 = String_Remove_m5713(L_68, L_69, ((int32_t)((int32_t)((int32_t)((int32_t)L_70-(int32_t)L_71))+(int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_72;
	}

IL_01d4:
	{
		String_t* L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_73);
		String_t* L_75 = String_Replace_m3449(L_73, (String_t*) &_stringLiteral1954, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		String_t* L_76 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_77 = ((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		String_t* L_78 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_76);
		String_t* L_79 = String_Replace_m3449(L_76, L_77, L_78, /*hidden argument*/NULL);
		V_4 = L_79;
		String_t* L_80 = V_4;
		NullCheck(L_80);
		String_t* L_81 = String_Replace_m9859(L_80, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_4 = L_81;
		String_t* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83 = String_LastIndexOf_m9860(L_82, (String_t*) &_stringLiteral1955, /*hidden argument*/NULL);
		V_8 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) == ((int32_t)(-1))))
		{
			goto IL_024e;
		}
	}
	{
		String_t* L_85 = V_4;
		int32_t L_86 = V_8;
		NullCheck(L_85);
		String_t* L_87 = String_Remove_m5713(L_85, L_86, 5, /*hidden argument*/NULL);
		V_4 = L_87;
		String_t* L_88 = V_4;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		String_t* L_90 = String_Insert_m5715(L_88, L_89, (String_t*) &_stringLiteral1956, /*hidden argument*/NULL);
		V_4 = L_90;
		String_t* L_91 = V_4;
		String_t* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = String_get_Length_m410(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		String_t* L_94 = String_Insert_m5715(L_91, L_93, (String_t*) &_stringLiteral1167, /*hidden argument*/NULL);
		V_4 = L_94;
	}

IL_024e:
	{
		StringBuilder_t261 * L_95 = V_1;
		String_t* L_96 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_97 = String_Concat_m408(NULL /*static, unused*/, L_96, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
		NullCheck(L_95);
		StringBuilder_Append_m3553(L_95, L_97, /*hidden argument*/NULL);
	}

IL_0261:
	{
		int32_t L_98 = V_3;
		V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
	}

IL_0265:
	{
		int32_t L_99 = V_3;
		StringU5BU5D_t75* L_100 = V_0;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)(((int32_t)(((Array_t *)L_100)->max_length))))))
		{
			goto IL_0050;
		}
	}

IL_026e:
	{
		StringBuilder_t261 * L_101 = V_1;
		NullCheck(L_101);
		String_t* L_102 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_101);
		return L_102;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StackTraceUtility_t55_il2cpp_TypeInfo_var;
extern "C" String_t* StackTraceUtility_ExtractFormattedStackTrace_m9668 (Object_t * __this /* static, unused */, StackTrace_t2860 * ___stackTrace, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StackTraceUtility_t55_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	int32_t V_1 = 0;
	StackFrame_t2897 * V_2 = {0};
	MethodBase_t1466 * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t1399* V_7 = {0};
	bool V_8 = false;
	String_t* V_9 = {0};
	int32_t V_10 = 0;
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m9819(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_01c9;
	}

IL_0012:
	{
		StackTrace_t2860 * L_1 = ___stackTrace;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t2897 * L_3 = (StackFrame_t2897 *)VirtFuncInvoker1< StackFrame_t2897 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t2897 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t1466 * L_5 = (MethodBase_t1466 *)VirtFuncInvoker0< MethodBase_t1466 * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t1466 * L_6 = V_3;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_01c5;
	}

IL_002c:
	{
		MethodBase_t1466 * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		goto IL_01c5;
	}

IL_0040:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m410(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		StringBuilder_t261 * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m3553(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t261 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m3553(L_17, (String_t*) &_stringLiteral1159, /*hidden argument*/NULL);
	}

IL_0071:
	{
		StringBuilder_t261 * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m3553(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t261 * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m3553(L_21, (String_t*) &_stringLiteral610, /*hidden argument*/NULL);
		StringBuilder_t261 * L_22 = V_0;
		MethodBase_t1466 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m3553(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t261 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m3553(L_25, (String_t*) &_stringLiteral1957, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t1466 * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t1399* L_27 = (ParameterInfoU5BU5D_t1399*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1399* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = 1;
		goto IL_00ee;
	}

IL_00b7:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00cf;
		}
	}
	{
		StringBuilder_t261 * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m3553(L_29, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
		goto IL_00d2;
	}

IL_00cf:
	{
		V_8 = 0;
	}

IL_00d2:
	{
		StringBuilder_t261 * L_30 = V_0;
		ParameterInfoU5BU5D_t1399* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1324 **)(ParameterInfo_t1324 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1324 **)(ParameterInfo_t1324 **)SZArrayLdElema(L_31, L_33)));
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_34);
		NullCheck(L_30);
		StringBuilder_Append_m3553(L_30, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_6;
		V_6 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00ee:
	{
		int32_t L_37 = V_6;
		ParameterInfoU5BU5D_t1399* L_38 = V_7;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)(((Array_t *)L_38)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		StringBuilder_t261 * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3553(L_39, (String_t*) &_stringLiteral1167, /*hidden argument*/NULL);
		StackFrame_t2897 * L_40 = V_2;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_40);
		V_9 = L_41;
		String_t* L_42 = V_9;
		if (!L_42)
		{
			goto IL_01b9;
		}
	}
	{
		Type_t * L_43 = V_4;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m456(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral1958, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0140;
		}
	}
	{
		Type_t * L_46 = V_4;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_46);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m456(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral1959, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_01b9;
		}
	}

IL_0140:
	{
		StringBuilder_t261 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m3553(L_49, (String_t*) &_stringLiteral1956, /*hidden argument*/NULL);
		String_t* L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_51 = ((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_50);
		bool L_52 = String_StartsWith_m3760(L_50, L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0182;
		}
	}
	{
		String_t* L_53 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t55_il2cpp_TypeInfo_var);
		String_t* L_54 = ((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_54);
		int32_t L_55 = String_get_Length_m410(L_54, /*hidden argument*/NULL);
		String_t* L_56 = V_9;
		NullCheck(L_56);
		int32_t L_57 = String_get_Length_m410(L_56, /*hidden argument*/NULL);
		String_t* L_58 = ((StackTraceUtility_t55_StaticFields*)StackTraceUtility_t55_il2cpp_TypeInfo_var->static_fields)->___projectFolder_0;
		NullCheck(L_58);
		int32_t L_59 = String_get_Length_m410(L_58, /*hidden argument*/NULL);
		NullCheck(L_53);
		String_t* L_60 = String_Substring_m418(L_53, L_55, ((int32_t)((int32_t)L_57-(int32_t)L_59)), /*hidden argument*/NULL);
		V_9 = L_60;
	}

IL_0182:
	{
		StringBuilder_t261 * L_61 = V_0;
		String_t* L_62 = V_9;
		NullCheck(L_61);
		StringBuilder_Append_m3553(L_61, L_62, /*hidden argument*/NULL);
		StringBuilder_t261 * L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_Append_m3553(L_63, (String_t*) &_stringLiteral610, /*hidden argument*/NULL);
		StringBuilder_t261 * L_64 = V_0;
		StackFrame_t2897 * L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_65);
		V_10 = L_66;
		String_t* L_67 = Int32_ToString_m399((&V_10), /*hidden argument*/NULL);
		NullCheck(L_64);
		StringBuilder_Append_m3553(L_64, L_67, /*hidden argument*/NULL);
		StringBuilder_t261 * L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_Append_m3553(L_68, (String_t*) &_stringLiteral1167, /*hidden argument*/NULL);
	}

IL_01b9:
	{
		StringBuilder_t261 * L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_Append_m3553(L_69, (String_t*) &_stringLiteral75, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		int32_t L_70 = V_1;
		V_1 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_01c9:
	{
		int32_t L_71 = V_1;
		StackTrace_t2860 * L_72 = ___stackTrace;
		NullCheck(L_72);
		int32_t L_73 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_72);
		if ((((int32_t)L_71) < ((int32_t)L_73)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t261 * L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_74);
		return L_75;
	}
}
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityException.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UnityException
#include "UnityEngine_UnityEngine_UnityExceptionMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"


// System.Void UnityEngine.UnityException::.ctor()
extern "C" void UnityException__ctor_m9669 (UnityException_t1005 * __this, const MethodInfo* method)
{
	{
		Exception__ctor_m416(__this, (String_t*) &_stringLiteral1960, /*hidden argument*/NULL);
		Exception_set_HResult_m9861(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" void UnityException__ctor_m9670 (UnityException_t1005 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m416(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m9861(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C" void UnityException__ctor_m9671 (UnityException_t1005 * __this, String_t* ___message, Exception_t57 * ___innerException, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t57 * L_1 = ___innerException;
		Exception__ctor_m7177(__this, L_0, L_1, /*hidden argument*/NULL);
		Exception_set_HResult_m9861(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnityException__ctor_m9672 (UnityException_t1005 * __this, SerializationInfo_t2861 * ___info, StreamingContext_t2862  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2861 * L_0 = ___info;
		StreamingContext_t2862  L_1 = ___context;
		Exception__ctor_m9862(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.SharedBetweenAnimatorsAttribute
#include "UnityEngine_UnityEngine_SharedBetweenAnimatorsAttributeMethodDeclarations.h"



// System.Void UnityEngine.SharedBetweenAnimatorsAttribute::.ctor()
extern "C" void SharedBetweenAnimatorsAttribute__ctor_m9673 (SharedBetweenAnimatorsAttribute_t2817 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviour.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.StateMachineBehaviour
#include "UnityEngine_UnityEngine_StateMachineBehaviourMethodDeclarations.h"

// UnityEngine.Animator
#include "UnityEngine_UnityEngine_Animator.h"
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObjectMethodDeclarations.h"


// System.Void UnityEngine.StateMachineBehaviour::.ctor()
extern "C" void StateMachineBehaviour__ctor_m9674 (StateMachineBehaviour_t2818 * __this, const MethodInfo* method)
{
	{
		ScriptableObject__ctor_m3486(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateEnter_m9675 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, AnimatorStateInfo_t2720  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateUpdate_m9676 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, AnimatorStateInfo_t2720  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateExit_m9677 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, AnimatorStateInfo_t2720  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMove_m9678 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, AnimatorStateInfo_t2720  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
extern "C" void StateMachineBehaviour_OnStateIK_m9679 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, AnimatorStateInfo_t2720  ___stateInfo, int32_t ___layerIndex, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineEnter_m9680 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
extern "C" void StateMachineBehaviour_OnStateMachineExit_m9681 (StateMachineBehaviour_t2818 * __this, Animator_t611 * ___animator, int32_t ___stateMachinePathHash, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.SystemClock
#include "UnityEngine_UnityEngine_SystemClock.h"
#ifndef _MSC_VER
#else
#endif

// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"


// System.Void UnityEngine.SystemClock::.cctor()
extern TypeInfo* SystemClock_t2819_il2cpp_TypeInfo_var;
extern "C" void SystemClock__cctor_m9682 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemClock_t2819_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4423);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = {0};
		DateTime__ctor_m9795(&L_0, ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((SystemClock_t2819_StaticFields*)SystemClock_t2819_il2cpp_TypeInfo_var->static_fields)->___s_Epoch_0 = L_0;
		return;
	}
}
// System.DateTime UnityEngine.SystemClock::get_now()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" DateTime_t287  SystemClock_get_now_m9683 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_Now_m3646(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappingMethodDeclarations.h"



// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOpMethodDeclarations.h"



// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditor.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextEditor
#include "UnityEngine_UnityEngine_TextEditorMethodDeclarations.h"

// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"


// System.Void UnityEngine.TextEditor::.ctor()
extern TypeInfo* GUIContent_t725_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t107_il2cpp_TypeInfo_var;
extern "C" void TextEditor__ctor_m5688 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIContent_t725_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(428);
		GUIStyle_t107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(166);
		s_Il2CppMethodIntialized = true;
	}
	{
		GUIContent_t725 * L_0 = (GUIContent_t725 *)il2cpp_codegen_object_new (GUIContent_t725_il2cpp_TypeInfo_var);
		GUIContent__ctor_m8699(L_0, /*hidden argument*/NULL);
		__this->___content_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIStyle_t107_il2cpp_TypeInfo_var);
		GUIStyle_t107 * L_1 = GUIStyle_get_none_m8757(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___style_5 = L_1;
		Vector2_t110  L_2 = Vector2_get_zero_m3366(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_2;
		__this->___m_iAltCursorPos_19 = (-1);
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C" void TextEditor_ClearCursorPos_m9684 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	{
		__this->___hasHorizontalCursorPos_8 = 0;
		__this->___m_iAltCursorPos_19 = (-1);
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C" void TextEditor_OnFocus_m5691 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___multiline_7);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = 0;
		V_0 = L_1;
		__this->___selectPos_2 = L_1;
		int32_t L_2 = V_0;
		__this->___pos_1 = L_2;
		goto IL_0026;
	}

IL_0020:
	{
		TextEditor_SelectAll_m9686(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		__this->___m_HasFocus_10 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C" void TextEditor_OnLostFocus_m9685 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	{
		__this->___m_HasFocus_10 = 0;
		Vector2_t110  L_0 = Vector2_get_zero_m3366(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___scrollOffset_11 = L_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C" void TextEditor_SelectAll_m9686 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	{
		__this->___pos_1 = 0;
		GUIContent_t725 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m5690(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_2;
		TextEditor_ClearCursorPos_m9684(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_DeleteSelection_m9687 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		GUIContent_t725 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m5690(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m410(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = V_0;
		__this->___pos_1 = L_5;
	}

IL_0024:
	{
		int32_t L_6 = (__this->___selectPos_2);
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_0;
		__this->___selectPos_2 = L_8;
	}

IL_0037:
	{
		int32_t L_9 = (__this->___pos_1);
		int32_t L_10 = (__this->___selectPos_2);
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		return 0;
	}

IL_004a:
	{
		int32_t L_11 = (__this->___pos_1);
		int32_t L_12 = (__this->___selectPos_2);
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_00c0;
		}
	}
	{
		GUIContent_t725 * L_13 = (__this->___content_4);
		GUIContent_t725 * L_14 = (__this->___content_4);
		NullCheck(L_14);
		String_t* L_15 = GUIContent_get_text_m5690(L_14, /*hidden argument*/NULL);
		int32_t L_16 = (__this->___pos_1);
		NullCheck(L_15);
		String_t* L_17 = String_Substring_m418(L_15, 0, L_16, /*hidden argument*/NULL);
		GUIContent_t725 * L_18 = (__this->___content_4);
		NullCheck(L_18);
		String_t* L_19 = GUIContent_get_text_m5690(L_18, /*hidden argument*/NULL);
		int32_t L_20 = (__this->___selectPos_2);
		GUIContent_t725 * L_21 = (__this->___content_4);
		NullCheck(L_21);
		String_t* L_22 = GUIContent_get_text_m5690(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m410(L_22, /*hidden argument*/NULL);
		int32_t L_24 = (__this->___selectPos_2);
		NullCheck(L_19);
		String_t* L_25 = String_Substring_m418(L_19, L_20, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m408(NULL /*static, unused*/, L_17, L_25, /*hidden argument*/NULL);
		NullCheck(L_13);
		GUIContent_set_text_m8702(L_13, L_26, /*hidden argument*/NULL);
		int32_t L_27 = (__this->___pos_1);
		__this->___selectPos_2 = L_27;
		goto IL_0120;
	}

IL_00c0:
	{
		GUIContent_t725 * L_28 = (__this->___content_4);
		GUIContent_t725 * L_29 = (__this->___content_4);
		NullCheck(L_29);
		String_t* L_30 = GUIContent_get_text_m5690(L_29, /*hidden argument*/NULL);
		int32_t L_31 = (__this->___selectPos_2);
		NullCheck(L_30);
		String_t* L_32 = String_Substring_m418(L_30, 0, L_31, /*hidden argument*/NULL);
		GUIContent_t725 * L_33 = (__this->___content_4);
		NullCheck(L_33);
		String_t* L_34 = GUIContent_get_text_m5690(L_33, /*hidden argument*/NULL);
		int32_t L_35 = (__this->___pos_1);
		GUIContent_t725 * L_36 = (__this->___content_4);
		NullCheck(L_36);
		String_t* L_37 = GUIContent_get_text_m5690(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m410(L_37, /*hidden argument*/NULL);
		int32_t L_39 = (__this->___pos_1);
		NullCheck(L_34);
		String_t* L_40 = String_Substring_m418(L_34, L_35, ((int32_t)((int32_t)L_38-(int32_t)L_39)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m408(NULL /*static, unused*/, L_32, L_40, /*hidden argument*/NULL);
		NullCheck(L_28);
		GUIContent_set_text_m8702(L_28, L_41, /*hidden argument*/NULL);
		int32_t L_42 = (__this->___selectPos_2);
		__this->___pos_1 = L_42;
	}

IL_0120:
	{
		TextEditor_ClearCursorPos_m9684(__this, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C" void TextEditor_ReplaceSelection_m9688 (TextEditor_t1007 * __this, String_t* ___replace, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		TextEditor_DeleteSelection_m9687(__this, /*hidden argument*/NULL);
		GUIContent_t725 * L_0 = (__this->___content_4);
		GUIContent_t725 * L_1 = (__this->___content_4);
		NullCheck(L_1);
		String_t* L_2 = GUIContent_get_text_m5690(L_1, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___pos_1);
		String_t* L_4 = ___replace;
		NullCheck(L_2);
		String_t* L_5 = String_Insert_m5715(L_2, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		GUIContent_set_text_m8702(L_0, L_5, /*hidden argument*/NULL);
		int32_t L_6 = (__this->___pos_1);
		String_t* L_7 = ___replace;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m410(L_7, /*hidden argument*/NULL);
		int32_t L_9 = ((int32_t)((int32_t)L_6+(int32_t)L_8));
		V_0 = L_9;
		__this->___pos_1 = L_9;
		int32_t L_10 = V_0;
		__this->___selectPos_2 = L_10;
		TextEditor_ClearCursorPos_m9684(__this, /*hidden argument*/NULL);
		TextEditor_UpdateScrollOffset_m9690(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 1;
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C" void TextEditor_UpdateScrollOffsetIfNeeded_m9689 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_TextHeightPotentiallyChanged_12);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TextEditor_UpdateScrollOffset_m9690(__this, /*hidden argument*/NULL);
		__this->___m_TextHeightPotentiallyChanged_12 = 0;
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C" void TextEditor_UpdateScrollOffset_m9690 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Rect_t640  V_1 = {0};
	Vector2_t110  V_2 = {0};
	Vector2_t110  V_3 = {0};
	Vector2_t110 * G_B17_0 = {0};
	Vector2_t110 * G_B16_0 = {0};
	float G_B18_0 = 0.0f;
	Vector2_t110 * G_B18_1 = {0};
	{
		int32_t L_0 = (__this->___pos_1);
		V_0 = L_0;
		GUIStyle_t107 * L_1 = (__this->___style_5);
		Rect_t640 * L_2 = &(__this->___position_6);
		float L_3 = Rect_get_width_m3743(L_2, /*hidden argument*/NULL);
		Rect_t640 * L_4 = &(__this->___position_6);
		float L_5 = Rect_get_height_m3744(L_4, /*hidden argument*/NULL);
		Rect_t640  L_6 = {0};
		Rect__ctor_m3389(&L_6, (0.0f), (0.0f), L_3, L_5, /*hidden argument*/NULL);
		GUIContent_t725 * L_7 = (__this->___content_4);
		int32_t L_8 = V_0;
		NullCheck(L_1);
		Vector2_t110  L_9 = GUIStyle_GetCursorPixelPosition_m8758(L_1, L_6, L_7, L_8, /*hidden argument*/NULL);
		__this->___graphicalCursorPos_13 = L_9;
		GUIStyle_t107 * L_10 = (__this->___style_5);
		NullCheck(L_10);
		RectOffset_t642 * L_11 = GUIStyle_get_padding_m3825(L_10, /*hidden argument*/NULL);
		Rect_t640  L_12 = (__this->___position_6);
		NullCheck(L_11);
		Rect_t640  L_13 = RectOffset_Remove_m8726(L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		GUIStyle_t107 * L_14 = (__this->___style_5);
		GUIContent_t725 * L_15 = (__this->___content_4);
		NullCheck(L_14);
		Vector2_t110  L_16 = GUIStyle_CalcSize_m8761(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		float L_17 = ((&V_3)->___x_1);
		GUIStyle_t107 * L_18 = (__this->___style_5);
		GUIContent_t725 * L_19 = (__this->___content_4);
		Rect_t640 * L_20 = &(__this->___position_6);
		float L_21 = Rect_get_width_m3743(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		float L_22 = GUIStyle_CalcHeight_m8763(L_18, L_19, L_21, /*hidden argument*/NULL);
		Vector2__ctor_m4001((&V_2), L_17, L_22, /*hidden argument*/NULL);
		float L_23 = ((&V_2)->___x_1);
		Rect_t640 * L_24 = &(__this->___position_6);
		float L_25 = Rect_get_width_m3743(L_24, /*hidden argument*/NULL);
		if ((!(((float)L_23) < ((float)L_25))))
		{
			goto IL_00c3;
		}
	}
	{
		Vector2_t110 * L_26 = &(__this->___scrollOffset_11);
		L_26->___x_1 = (0.0f);
		goto IL_015f;
	}

IL_00c3:
	{
		Vector2_t110 * L_27 = &(__this->___graphicalCursorPos_13);
		float L_28 = (L_27->___x_1);
		Vector2_t110 * L_29 = &(__this->___scrollOffset_11);
		float L_30 = (L_29->___x_1);
		float L_31 = Rect_get_width_m3743((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_28+(float)(1.0f)))) > ((float)((float)((float)L_30+(float)L_31))))))
		{
			goto IL_010a;
		}
	}
	{
		Vector2_t110 * L_32 = &(__this->___scrollOffset_11);
		Vector2_t110 * L_33 = &(__this->___graphicalCursorPos_13);
		float L_34 = (L_33->___x_1);
		float L_35 = Rect_get_width_m3743((&V_1), /*hidden argument*/NULL);
		L_32->___x_1 = ((float)((float)L_34-(float)L_35));
	}

IL_010a:
	{
		Vector2_t110 * L_36 = &(__this->___graphicalCursorPos_13);
		float L_37 = (L_36->___x_1);
		Vector2_t110 * L_38 = &(__this->___scrollOffset_11);
		float L_39 = (L_38->___x_1);
		GUIStyle_t107 * L_40 = (__this->___style_5);
		NullCheck(L_40);
		RectOffset_t642 * L_41 = GUIStyle_get_padding_m3825(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		int32_t L_42 = RectOffset_get_left_m5848(L_41, /*hidden argument*/NULL);
		if ((!(((float)L_37) < ((float)((float)((float)L_39+(float)(((float)L_42))))))))
		{
			goto IL_015f;
		}
	}
	{
		Vector2_t110 * L_43 = &(__this->___scrollOffset_11);
		Vector2_t110 * L_44 = &(__this->___graphicalCursorPos_13);
		float L_45 = (L_44->___x_1);
		GUIStyle_t107 * L_46 = (__this->___style_5);
		NullCheck(L_46);
		RectOffset_t642 * L_47 = GUIStyle_get_padding_m3825(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = RectOffset_get_left_m5848(L_47, /*hidden argument*/NULL);
		L_43->___x_1 = ((float)((float)L_45-(float)(((float)L_48))));
	}

IL_015f:
	{
		float L_49 = ((&V_2)->___y_2);
		float L_50 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_49) < ((float)L_50))))
		{
			goto IL_0187;
		}
	}
	{
		Vector2_t110 * L_51 = &(__this->___scrollOffset_11);
		L_51->___y_2 = (0.0f);
		goto IL_0259;
	}

IL_0187:
	{
		Vector2_t110 * L_52 = &(__this->___graphicalCursorPos_13);
		float L_53 = (L_52->___y_2);
		GUIStyle_t107 * L_54 = (__this->___style_5);
		NullCheck(L_54);
		float L_55 = GUIStyle_get_lineHeight_m8747(L_54, /*hidden argument*/NULL);
		Vector2_t110 * L_56 = &(__this->___scrollOffset_11);
		float L_57 = (L_56->___y_2);
		float L_58 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_59 = (__this->___style_5);
		NullCheck(L_59);
		RectOffset_t642 * L_60 = GUIStyle_get_padding_m3825(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_61 = RectOffset_get_top_m5849(L_60, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_53+(float)L_55))) > ((float)((float)((float)((float)((float)L_57+(float)L_58))+(float)(((float)L_61))))))))
		{
			goto IL_0204;
		}
	}
	{
		Vector2_t110 * L_62 = &(__this->___scrollOffset_11);
		Vector2_t110 * L_63 = &(__this->___graphicalCursorPos_13);
		float L_64 = (L_63->___y_2);
		float L_65 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_66 = (__this->___style_5);
		NullCheck(L_66);
		RectOffset_t642 * L_67 = GUIStyle_get_padding_m3825(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = RectOffset_get_top_m5849(L_67, /*hidden argument*/NULL);
		GUIStyle_t107 * L_69 = (__this->___style_5);
		NullCheck(L_69);
		float L_70 = GUIStyle_get_lineHeight_m8747(L_69, /*hidden argument*/NULL);
		L_62->___y_2 = ((float)((float)((float)((float)((float)((float)L_64-(float)L_65))-(float)(((float)L_68))))+(float)L_70));
	}

IL_0204:
	{
		Vector2_t110 * L_71 = &(__this->___graphicalCursorPos_13);
		float L_72 = (L_71->___y_2);
		Vector2_t110 * L_73 = &(__this->___scrollOffset_11);
		float L_74 = (L_73->___y_2);
		GUIStyle_t107 * L_75 = (__this->___style_5);
		NullCheck(L_75);
		RectOffset_t642 * L_76 = GUIStyle_get_padding_m3825(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = RectOffset_get_top_m5849(L_76, /*hidden argument*/NULL);
		if ((!(((float)L_72) < ((float)((float)((float)L_74+(float)(((float)L_77))))))))
		{
			goto IL_0259;
		}
	}
	{
		Vector2_t110 * L_78 = &(__this->___scrollOffset_11);
		Vector2_t110 * L_79 = &(__this->___graphicalCursorPos_13);
		float L_80 = (L_79->___y_2);
		GUIStyle_t107 * L_81 = (__this->___style_5);
		NullCheck(L_81);
		RectOffset_t642 * L_82 = GUIStyle_get_padding_m3825(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		int32_t L_83 = RectOffset_get_top_m5849(L_82, /*hidden argument*/NULL);
		L_78->___y_2 = ((float)((float)L_80-(float)(((float)L_83))));
	}

IL_0259:
	{
		Vector2_t110 * L_84 = &(__this->___scrollOffset_11);
		float L_85 = (L_84->___y_2);
		if ((!(((float)L_85) > ((float)(0.0f)))))
		{
			goto IL_02cb;
		}
	}
	{
		float L_86 = ((&V_2)->___y_2);
		Vector2_t110 * L_87 = &(__this->___scrollOffset_11);
		float L_88 = (L_87->___y_2);
		float L_89 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_86-(float)L_88))) < ((float)L_89))))
		{
			goto IL_02cb;
		}
	}
	{
		Vector2_t110 * L_90 = &(__this->___scrollOffset_11);
		float L_91 = ((&V_2)->___y_2);
		float L_92 = Rect_get_height_m3744((&V_1), /*hidden argument*/NULL);
		GUIStyle_t107 * L_93 = (__this->___style_5);
		NullCheck(L_93);
		RectOffset_t642 * L_94 = GUIStyle_get_padding_m3825(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		int32_t L_95 = RectOffset_get_top_m5849(L_94, /*hidden argument*/NULL);
		GUIStyle_t107 * L_96 = (__this->___style_5);
		NullCheck(L_96);
		RectOffset_t642 * L_97 = GUIStyle_get_padding_m3825(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		int32_t L_98 = RectOffset_get_bottom_m3826(L_97, /*hidden argument*/NULL);
		L_90->___y_2 = ((float)((float)((float)((float)((float)((float)L_91-(float)L_92))-(float)(((float)L_95))))-(float)(((float)L_98))));
	}

IL_02cb:
	{
		Vector2_t110 * L_99 = &(__this->___scrollOffset_11);
		Vector2_t110 * L_100 = &(__this->___scrollOffset_11);
		float L_101 = (L_100->___y_2);
		G_B16_0 = L_99;
		if ((!(((float)L_101) < ((float)(0.0f)))))
		{
			G_B17_0 = L_99;
			goto IL_02f0;
		}
	}
	{
		G_B18_0 = (0.0f);
		G_B18_1 = G_B16_0;
		goto IL_02fb;
	}

IL_02f0:
	{
		Vector2_t110 * L_102 = &(__this->___scrollOffset_11);
		float L_103 = (L_102->___y_2);
		G_B18_0 = L_103;
		G_B18_1 = G_B17_0;
	}

IL_02fb:
	{
		G_B18_1->___y_2 = G_B18_0;
		return;
	}
}
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C" void TextEditor_SaveBackup_m9691 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	{
		GUIContent_t725 * L_0 = (__this->___content_4);
		NullCheck(L_0);
		String_t* L_1 = GUIContent_get_text_m5690(L_0, /*hidden argument*/NULL);
		__this->___oldText_20 = L_1;
		int32_t L_2 = (__this->___pos_1);
		__this->___oldPos_21 = L_2;
		int32_t L_3 = (__this->___selectPos_2);
		__this->___oldSelectPos_22 = L_3;
		return;
	}
}
// System.Void UnityEngine.TextEditor::Copy()
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern "C" void TextEditor_Copy_m5692 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = (__this->___selectPos_2);
		int32_t L_1 = (__this->___pos_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		bool L_2 = (__this->___isPasswordField_9);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_3 = (__this->___pos_1);
		int32_t L_4 = (__this->___selectPos_2);
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t725 * L_5 = (__this->___content_4);
		NullCheck(L_5);
		String_t* L_6 = GUIContent_get_text_m5690(L_5, /*hidden argument*/NULL);
		int32_t L_7 = (__this->___pos_1);
		int32_t L_8 = (__this->___selectPos_2);
		int32_t L_9 = (__this->___pos_1);
		NullCheck(L_6);
		String_t* L_10 = String_Substring_m418(L_6, L_7, ((int32_t)((int32_t)L_8-(int32_t)L_9)), /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_007c;
	}

IL_0058:
	{
		GUIContent_t725 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m5690(L_11, /*hidden argument*/NULL);
		int32_t L_13 = (__this->___selectPos_2);
		int32_t L_14 = (__this->___pos_1);
		int32_t L_15 = (__this->___selectPos_2);
		NullCheck(L_12);
		String_t* L_16 = String_Substring_m418(L_12, L_13, ((int32_t)((int32_t)L_14-(int32_t)L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
	}

IL_007c:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		GUIUtility_set_systemCopyBuffer_m8629(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C" String_t* TextEditor_ReplaceNewlinesWithSpaces_m9692 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		NullCheck(L_0);
		String_t* L_1 = String_Replace_m3449(L_0, (String_t*) &_stringLiteral1809, (String_t*) &_stringLiteral1286, /*hidden argument*/NULL);
		___value = L_1;
		String_t* L_2 = ___value;
		NullCheck(L_2);
		String_t* L_3 = String_Replace_m9859(L_2, ((int32_t)10), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_3;
		String_t* L_4 = ___value;
		NullCheck(L_4);
		String_t* L_5 = String_Replace_m9859(L_4, ((int32_t)13), ((int32_t)32), /*hidden argument*/NULL);
		___value = L_5;
		String_t* L_6 = ___value;
		return L_6;
	}
}
// System.Boolean UnityEngine.TextEditor::Paste()
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TextEditor_Paste_m5689 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		String_t* L_0 = GUIUtility_get_systemCopyBuffer_m8628(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_3 = String_op_Inequality_m415(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		bool L_4 = (__this->___multiline_7);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_5 = V_0;
		String_t* L_6 = TextEditor_ReplaceNewlinesWithSpaces_m9692(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0028:
	{
		String_t* L_7 = V_0;
		TextEditor_ReplaceSelection_m9688(__this, L_7, /*hidden argument*/NULL);
		return 1;
	}

IL_0031:
	{
		return 0;
	}
}
// System.Void UnityEngine.TextEditor::ClampPos()
extern TypeInfo* GUIUtility_t2665_il2cpp_TypeInfo_var;
extern "C" void TextEditor_ClampPos_m9693 (TextEditor_t1007 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUIUtility_t2665_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4302);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___m_HasFocus_10);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		int32_t L_2 = GUIUtility_get_keyboardControl_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0021;
		}
	}
	{
		TextEditor_OnLostFocus_m9685(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		bool L_3 = (__this->___m_HasFocus_10);
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = (__this->___controlID_3);
		IL2CPP_RUNTIME_CLASS_INIT(GUIUtility_t2665_il2cpp_TypeInfo_var);
		int32_t L_5 = GUIUtility_get_keyboardControl_m8626(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0042;
		}
	}
	{
		TextEditor_OnFocus_m5691(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		int32_t L_6 = (__this->___pos_1);
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		__this->___pos_1 = 0;
		goto IL_008b;
	}

IL_005a:
	{
		int32_t L_7 = (__this->___pos_1);
		GUIContent_t725 * L_8 = (__this->___content_4);
		NullCheck(L_8);
		String_t* L_9 = GUIContent_get_text_m5690(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m410(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)L_10)))
		{
			goto IL_008b;
		}
	}
	{
		GUIContent_t725 * L_11 = (__this->___content_4);
		NullCheck(L_11);
		String_t* L_12 = GUIContent_get_text_m5690(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m410(L_12, /*hidden argument*/NULL);
		__this->___pos_1 = L_13;
	}

IL_008b:
	{
		int32_t L_14 = (__this->___selectPos_2);
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}
	{
		__this->___selectPos_2 = 0;
		goto IL_00d4;
	}

IL_00a3:
	{
		int32_t L_15 = (__this->___selectPos_2);
		GUIContent_t725 * L_16 = (__this->___content_4);
		NullCheck(L_16);
		String_t* L_17 = GUIContent_get_text_m5690(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m410(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)L_18)))
		{
			goto IL_00d4;
		}
	}
	{
		GUIContent_t725 * L_19 = (__this->___content_4);
		NullCheck(L_19);
		String_t* L_20 = GUIContent_get_text_m5690(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m410(L_20, /*hidden argument*/NULL);
		__this->___selectPos_2 = L_21;
	}

IL_00d4:
	{
		int32_t L_22 = (__this->___m_iAltCursorPos_19);
		GUIContent_t725 * L_23 = (__this->___content_4);
		NullCheck(L_23);
		String_t* L_24 = GUIContent_get_text_m5690(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m410(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_22) <= ((int32_t)L_25)))
		{
			goto IL_0105;
		}
	}
	{
		GUIContent_t725 * L_26 = (__this->___content_4);
		NullCheck(L_26);
		String_t* L_27 = GUIContent_get_text_m5690(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m410(L_27, /*hidden argument*/NULL);
		__this->___m_iAltCursorPos_19 = L_28;
	}

IL_0105:
	{
		return;
	}
}
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettingsMethodDeclarations.h"

// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.Font
#include "UnityEngine_UnityEngine_Font.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32MethodDeclarations.h"
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"


// System.Boolean UnityEngine.TextGenerationSettings::CompareColors(UnityEngine.Color,UnityEngine.Color)
extern TypeInfo* Color32_t698_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareColors_m9694 (TextGenerationSettings_t979 * __this, Color_t325  ___left, Color_t325  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Color32_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2298);
		s_Il2CppMethodIntialized = true;
	}
	Color32_t698  V_0 = {0};
	Color32_t698  V_1 = {0};
	{
		Color_t325  L_0 = ___left;
		Color32_t698  L_1 = Color32_op_Implicit_m5588(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Color_t325  L_2 = ___right;
		Color32_t698  L_3 = Color32_op_Implicit_m5588(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Color32_t698  L_4 = V_0;
		Color32_t698  L_5 = L_4;
		Object_t * L_6 = Box(Color32_t698_il2cpp_TypeInfo_var, &L_5);
		Color32_t698  L_7 = V_1;
		Color32_t698  L_8 = L_7;
		Object_t * L_9 = Box(Color32_t698_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.ValueType::Equals(System.Object) */, L_6, L_9);
		return L_10;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::CompareVector2(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_CompareVector2_m9695 (TextGenerationSettings_t979 * __this, Vector2_t110  ___left, Vector2_t110  ___right, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		float L_0 = ((&___left)->___x_1);
		float L_1 = ((&___right)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		bool L_2 = Mathf_Approximately_m5522(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = ((&___left)->___y_2);
		float L_4 = ((&___right)->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		bool L_5 = Mathf_Approximately_m5522(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
extern TypeInfo* Mathf_t670_il2cpp_TypeInfo_var;
extern "C" bool TextGenerationSettings_Equals_m9696 (TextGenerationSettings_t979 * __this, TextGenerationSettings_t979  ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mathf_t670_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(233);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B20_0 = 0;
	{
		Color_t325  L_0 = (__this->___color_1);
		Color_t325  L_1 = ((&___other)->___color_1);
		bool L_2 = TextGenerationSettings_CompareColors_m9694(__this, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_3 = (__this->___fontSize_2);
		int32_t L_4 = ((&___other)->___fontSize_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0174;
		}
	}
	{
		float L_5 = (__this->___scaleFactor_5);
		float L_6 = ((&___other)->___scaleFactor_5);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		bool L_7 = Mathf_Approximately_m5522(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_8 = (__this->___resizeTextMinSize_9);
		int32_t L_9 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_10 = (__this->___resizeTextMaxSize_10);
		int32_t L_11 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0174;
		}
	}
	{
		float L_12 = (__this->___lineSpacing_3);
		float L_13 = ((&___other)->___lineSpacing_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t670_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m5522(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_15 = (__this->___fontStyle_6);
		int32_t L_16 = ((&___other)->___fontStyle_6);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_17 = (__this->___richText_4);
		bool L_18 = ((&___other)->___richText_4);
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_19 = (__this->___textAnchor_7);
		int32_t L_20 = ((&___other)->___textAnchor_7);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_21 = (__this->___resizeTextForBestFit_8);
		bool L_22 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_23 = (__this->___resizeTextMinSize_9);
		int32_t L_24 = ((&___other)->___resizeTextMinSize_9);
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_25 = (__this->___resizeTextMaxSize_10);
		int32_t L_26 = ((&___other)->___resizeTextMaxSize_10);
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_27 = (__this->___resizeTextForBestFit_8);
		bool L_28 = ((&___other)->___resizeTextForBestFit_8);
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_0174;
		}
	}
	{
		bool L_29 = (__this->___updateBounds_11);
		bool L_30 = ((&___other)->___updateBounds_11);
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_31 = (__this->___horizontalOverflow_13);
		int32_t L_32 = ((&___other)->___horizontalOverflow_13);
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_33 = (__this->___verticalOverflow_12);
		int32_t L_34 = ((&___other)->___verticalOverflow_12);
		if ((!(((uint32_t)L_33) == ((uint32_t)L_34))))
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t110  L_35 = (__this->___generationExtents_14);
		Vector2_t110  L_36 = ((&___other)->___generationExtents_14);
		bool L_37 = TextGenerationSettings_CompareVector2_m9695(__this, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0174;
		}
	}
	{
		Vector2_t110  L_38 = (__this->___pivot_15);
		Vector2_t110  L_39 = ((&___other)->___pivot_15);
		bool L_40 = TextGenerationSettings_CompareVector2_m9695(__this, L_38, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0174;
		}
	}
	{
		Font_t845 * L_41 = (__this->___font_0);
		Font_t845 * L_42 = ((&___other)->___font_0);
		bool L_43 = Object_op_Equality_m3487(NULL /*static, unused*/, L_41, L_42, /*hidden argument*/NULL);
		G_B20_0 = ((int32_t)(L_43));
		goto IL_0175;
	}

IL_0174:
	{
		G_B20_0 = 0;
	}

IL_0175:
	{
		return G_B20_0;
	}
}
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReference.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.TrackedReference
#include "UnityEngine_UnityEngine_TrackedReferenceMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern TypeInfo* TrackedReference_t2724_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_Equals_m9697 (TrackedReference_t2724 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackedReference_t2724_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4426);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		bool L_1 = TrackedReference_op_Equality_m9699(NULL /*static, unused*/, ((TrackedReference_t2724 *)IsInst(L_0, TrackedReference_t2724_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m9698 (TrackedReference_t2724 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___m_Ptr_0);
		int32_t L_1 = IntPtr_op_Explicit_m9863(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" bool TrackedReference_op_Equality_m9699 (Object_t * __this /* static, unused */, TrackedReference_t2724 * ___x, TrackedReference_t2724 * ___y, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		TrackedReference_t2724 * L_0 = ___x;
		V_0 = L_0;
		TrackedReference_t2724 * L_1 = ___y;
		V_1 = L_1;
		Object_t * L_2 = V_1;
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		return 1;
	}

IL_0012:
	{
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		TrackedReference_t2724 * L_5 = ___x;
		NullCheck(L_5);
		IntPtr_t L_6 = (L_5->___m_Ptr_0);
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Equality_m9864(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0029:
	{
		Object_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		TrackedReference_t2724 * L_10 = ___y;
		NullCheck(L_10);
		IntPtr_t L_11 = (L_10->___m_Ptr_0);
		IntPtr_t L_12 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_13 = IntPtr_op_Equality_m9864(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0040:
	{
		TrackedReference_t2724 * L_14 = ___x;
		NullCheck(L_14);
		IntPtr_t L_15 = (L_14->___m_Ptr_0);
		TrackedReference_t2724 * L_16 = ___y;
		NullCheck(L_16);
		IntPtr_t L_17 = (L_16->___m_Ptr_0);
		bool L_18 = IntPtr_op_Equality_m9864(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
void TrackedReference_t2724_marshal(const TrackedReference_t2724& unmarshaled, TrackedReference_t2724_marshaled& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
void TrackedReference_t2724_marshal_back(const TrackedReference_t2724_marshaled& marshaled, TrackedReference_t2724& unmarshaled)
{
	unmarshaled.___m_Ptr_0 = marshaled.___m_Ptr_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
void TrackedReference_t2724_marshal_cleanup(TrackedReference_t2724_marshaled& marshaled)
{
}
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerModeMethodDeclarations.h"



// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.ArgumentCache
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"

// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"


// System.Void UnityEngine.Events.ArgumentCache::.ctor()
extern "C" void ArgumentCache__ctor_m9700 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.ArgumentCache::get_unityObjectArgument()
extern "C" Object_t645 * ArgumentCache_get_unityObjectArgument_m9701 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		Object_t645 * L_0 = (__this->___m_ObjectArgument_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_unityObjectArgumentAssemblyTypeName()
extern "C" String_t* ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m9702 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		return L_0;
	}
}
// System.Int32 UnityEngine.Events.ArgumentCache::get_intArgument()
extern "C" int32_t ArgumentCache_get_intArgument_m9703 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_IntArgument_2);
		return L_0;
	}
}
// System.Single UnityEngine.Events.ArgumentCache::get_floatArgument()
extern "C" float ArgumentCache_get_floatArgument_m9704 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___m_FloatArgument_3);
		return L_0;
	}
}
// System.String UnityEngine.Events.ArgumentCache::get_stringArgument()
extern "C" String_t* ArgumentCache_get_stringArgument_m9705 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_StringArgument_4);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.ArgumentCache::get_boolArgument()
extern "C" bool ArgumentCache_get_boolArgument_m9706 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_BoolArgument_5);
		return L_0;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::TidyAssemblyTypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t1117_il2cpp_TypeInfo_var;
extern "C" void ArgumentCache_TidyAssemblyTypeName_m9707 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Regex_t1117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2344);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		String_t* L_2 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		IL2CPP_RUNTIME_CLASS_INIT(Regex_t1117_il2cpp_TypeInfo_var);
		String_t* L_4 = Regex_Replace_m9865(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral1961, L_3, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_4;
		String_t* L_5 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_7 = Regex_Replace_m9865(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral1962, L_6, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_7;
		String_t* L_8 = (__this->___m_ObjectArgumentAssemblyTypeName_1);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_10 = Regex_Replace_m9865(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral1963, L_9, /*hidden argument*/NULL);
		__this->___m_ObjectArgumentAssemblyTypeName_1 = L_10;
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnBeforeSerialize()
extern "C" void ArgumentCache_OnBeforeSerialize_m9708 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m9707(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.ArgumentCache::OnAfterDeserialize()
extern "C" void ArgumentCache_OnAfterDeserialize_m9709 (ArgumentCache_t2824 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_TidyAssemblyTypeName_m9707(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
extern "C" void BaseInvokableCall__ctor_m9710 (BaseInvokableCall_t2825 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t713_il2cpp_TypeInfo_var;
extern "C" void BaseInvokableCall__ctor_m9711 (BaseInvokableCall_t2825 * __this, Object_t * ___target, MethodInfo_t * ___function, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___target;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t713 * L_1 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_1, (String_t*) &_stringLiteral1964, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0017:
	{
		MethodInfo_t * L_2 = ___function;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t713 * L_3 = (ArgumentNullException_t713 *)il2cpp_codegen_object_new (ArgumentNullException_t713_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3770(L_3, (String_t*) &_stringLiteral1965, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
extern "C" bool BaseInvokableCall_AllowInvoke_m9712 (Object_t * __this /* static, unused */, Delegate_t667 * ___delegate, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Delegate_t667 * L_0 = ___delegate;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m9866(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_1);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Delegate_t667 * L_3 = ___delegate;
		NullCheck(L_3);
		Object_t * L_4 = Delegate_get_Target_m3457(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo)
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.InvokableCall
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"

// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
// UnityEngine.Events.UnityAction
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
extern const Il2CppType* UnityAction_t501_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* UnityAction_t501_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m9713 (InvokableCall_t2826 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t501_0_0_0_var = il2cpp_codegen_type_from_index(483);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		UnityAction_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		BaseInvokableCall__ctor_m9711(__this, L_0, L_1, /*hidden argument*/NULL);
		UnityAction_t501 * L_2 = (__this->___Delegate_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(UnityAction_t501_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_4 = ___target;
		MethodInfo_t * L_5 = ___theFunction;
		Delegate_t667 * L_6 = Delegate_CreateDelegate_m9867(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		Delegate_t667 * L_7 = Delegate_Combine_m3465(NULL /*static, unused*/, L_2, ((UnityAction_t501 *)IsInst(L_6, UnityAction_t501_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t501 *)Castclass(L_7, UnityAction_t501_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::.ctor(UnityEngine.Events.UnityAction)
extern TypeInfo* UnityAction_t501_il2cpp_TypeInfo_var;
extern "C" void InvokableCall__ctor_m9714 (InvokableCall_t2826 * __this, UnityAction_t501 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UnityAction_t501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(483);
		s_Il2CppMethodIntialized = true;
	}
	{
		BaseInvokableCall__ctor_m9710(__this, /*hidden argument*/NULL);
		UnityAction_t501 * L_0 = (__this->___Delegate_0);
		UnityAction_t501 * L_1 = ___action;
		Delegate_t667 * L_2 = Delegate_Combine_m3465(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___Delegate_0 = ((UnityAction_t501 *)Castclass(L_2, UnityAction_t501_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall::Invoke(System.Object[])
extern "C" void InvokableCall_Invoke_m9715 (InvokableCall_t2826 * __this, ObjectU5BU5D_t627* ___args, const MethodInfo* method)
{
	{
		UnityAction_t501 * L_0 = (__this->___Delegate_0);
		bool L_1 = BaseInvokableCall_AllowInvoke_m9712(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		UnityAction_t501 * L_2 = (__this->___Delegate_0);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.Events.UnityAction::Invoke() */, L_2);
	}

IL_001b:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_Find_m9716 (InvokableCall_t2826 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		UnityAction_t501 * L_0 = (__this->___Delegate_0);
		NullCheck(L_0);
		Object_t * L_1 = Delegate_get_Target_m3457(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___targetObj;
		if ((!(((Object_t*)(Object_t *)L_1) == ((Object_t*)(Object_t *)L_2))))
		{
			goto IL_0021;
		}
	}
	{
		UnityAction_t501 * L_3 = (__this->___Delegate_0);
		NullCheck(L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m9866(L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method;
		G_B3_0 = ((((Object_t*)(MethodInfo_t *)L_4) == ((Object_t*)(MethodInfo_t *)L_5))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEventCallState
#include "UnityEngine_UnityEngine_Events_UnityEventCallStateMethodDeclarations.h"



// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCall
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"

// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
// UnityEngine.Events.UnityEventBase
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.String>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t2824_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m9717 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t2824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4427);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t2824 * L_0 = (ArgumentCache_t2824 *)il2cpp_codegen_object_new (ArgumentCache_t2824_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m9700(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t645 * PersistentCall_get_target_m9718 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	{
		Object_t645 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m9719 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m9720 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t2824 * PersistentCall_get_arguments_m9721 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t2824 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m9722 (PersistentCall_t2828 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t645 * L_0 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_0, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m9719(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t2898_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t2899_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t2900_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t2901_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t2826_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m9868_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m9869_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m9870_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m9871_MethodInfo_var;
extern "C" BaseInvokableCall_t2825 * PersistentCall_GetRuntimeCall_m9723 (PersistentCall_t2828 * __this, UnityEventBase_t2833 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t2898_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4428);
		CachedInvokableCall_1_t2899_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4429);
		CachedInvokableCall_1_t2900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4430);
		CachedInvokableCall_1_t2901_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4431);
		InvokableCall_t2826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4432);
		CachedInvokableCall_1__ctor_m9868_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485129);
		CachedInvokableCall_1__ctor_m9869_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485130);
		CachedInvokableCall_1__ctor_m9870_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485131);
		CachedInvokableCall_1__ctor_m9871_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485132);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t2833 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t2825 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t2833 * L_2 = ___theEvent;
		NullCheck(L_2);
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m9734(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t2825 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t2833 * L_7 = ___theEvent;
		Object_t645 * L_8 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		NullCheck(L_7);
		BaseInvokableCall_t2825 * L_10 = (BaseInvokableCall_t2825 *)VirtFuncInvoker2< BaseInvokableCall_t2825 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t645 * L_11 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t2824 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t2825 * L_14 = PersistentCall_GetObjectCall_m9724(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t645 * L_15 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t2824 * L_17 = (__this->___m_Arguments_3);
		NullCheck(L_17);
		float L_18 = ArgumentCache_get_floatArgument_m9704(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t2898 * L_19 = (CachedInvokableCall_1_t2898 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t2898_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m9868(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m9868_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t645 * L_20 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t2824 * L_22 = (__this->___m_Arguments_3);
		NullCheck(L_22);
		int32_t L_23 = ArgumentCache_get_intArgument_m9703(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t2899 * L_24 = (CachedInvokableCall_1_t2899 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t2899_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m9869(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m9869_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t645 * L_25 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t2824 * L_27 = (__this->___m_Arguments_3);
		NullCheck(L_27);
		String_t* L_28 = ArgumentCache_get_stringArgument_m9705(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t2900 * L_29 = (CachedInvokableCall_1_t2900 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t2900_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m9870(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m9870_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t645 * L_30 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t2824 * L_32 = (__this->___m_Arguments_3);
		NullCheck(L_32);
		bool L_33 = ArgumentCache_get_boolArgument_m9706(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t2901 * L_34 = (CachedInvokableCall_1_t2901 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t2901_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m9871(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m9871_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t645 * L_35 = PersistentCall_get_target_m9718(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t2826 * L_37 = (InvokableCall_t2826 *)il2cpp_codegen_object_new (InvokableCall_t2826_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m9713(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t2825 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t645_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t2902_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t2825_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t2825 * PersistentCall_GetObjectCall_m9724 (Object_t * __this /* static, unused */, Object_t645 * ___target, MethodInfo_t * ___method, ArgumentCache_t2824 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t645_0_0_0_var = il2cpp_codegen_type_from_index(1684);
		CachedInvokableCall_1_t2902_0_0_0_var = il2cpp_codegen_type_from_index(4433);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(2537);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		BaseInvokableCall_t2825_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4434);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1322 * V_3 = {0};
	Object_t645 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t2824 * L_1 = ___arguments;
		NullCheck(L_1);
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m9702(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t2824 * L_4 = ___arguments;
		NullCheck(L_4);
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m9702(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetType_m9872(NULL /*static, unused*/, L_5, 0, /*hidden argument*/NULL);
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t2902_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t1142* L_11 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0)) = (Type_t *)L_12;
		NullCheck(L_10);
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1142* >::Invoke(84 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t1142* L_15 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		TypeU5BU5D_t1142* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1)) = (Type_t *)L_18;
		TypeU5BU5D_t1142* L_19 = L_17;
		Type_t * L_20 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2)) = (Type_t *)L_20;
		NullCheck(L_14);
		ConstructorInfo_t1322 * L_21 = (ConstructorInfo_t1322 *)VirtFuncInvoker1< ConstructorInfo_t1322 *, TypeU5BU5D_t1142* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t2824 * L_22 = ___arguments;
		NullCheck(L_22);
		Object_t645 * L_23 = ArgumentCache_get_unityObjectArgument_m9701(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t645 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m3383(NULL /*static, unused*/, L_24, (Object_t645 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t645 * L_27 = V_4;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m3766(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t645 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1322 * L_30 = V_3;
		ObjectU5BU5D_t627* L_31 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 3));
		Object_t645 * L_32 = ___target;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)L_32;
		ObjectU5BU5D_t627* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 1);
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1)) = (Object_t *)L_34;
		ObjectU5BU5D_t627* L_35 = L_33;
		Object_t645 * L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2)) = (Object_t *)L_36;
		NullCheck(L_30);
		Object_t * L_37 = ConstructorInfo_Invoke_m9847(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t2825 *)IsInst(L_37, BaseInvokableCall_t2825_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.PersistentCallGroup
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"

// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_54.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_54MethodDeclarations.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.PersistentCall>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13MethodDeclarations.h"
// UnityEngine.Events.InvokableCallList
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"


// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t2829_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m9873_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m9725 (PersistentCallGroup_t2830 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2829_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4436);
		List_1__ctor_m9873_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485133);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		List_1_t2829 * L_0 = (List_1_t2829 *)il2cpp_codegen_object_new (List_1_t2829_il2cpp_TypeInfo_var);
		List_1__ctor_m9873(L_0, /*hidden argument*/List_1__ctor_m9873_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t2903_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m9874_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m9875_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m9876_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m9726 (PersistentCallGroup_t2830 * __this, InvokableCallList_t2832 * ___invokableList, UnityEventBase_t2833 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t2903_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4437);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		List_1_GetEnumerator_m9874_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485134);
		Enumerator_get_Current_m9875_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485135);
		Enumerator_MoveNext_m9876_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485136);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t2828 * V_0 = {0};
	Enumerator_t2903  V_1 = {0};
	BaseInvokableCall_t2825 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2829 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		Enumerator_t2903  L_1 = List_1_GetEnumerator_m9874(L_0, /*hidden argument*/List_1_GetEnumerator_m9874_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t2828 * L_2 = Enumerator_get_Current_m9875((&V_1), /*hidden argument*/Enumerator_get_Current_m9875_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t2828 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = PersistentCall_IsValid_m9722(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t2828 * L_5 = V_0;
			UnityEventBase_t2833 * L_6 = ___unityEventBase;
			NullCheck(L_5);
			BaseInvokableCall_t2825 * L_7 = PersistentCall_GetRuntimeCall_m9723(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t2825 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t2832 * L_9 = ___invokableList;
			BaseInvokableCall_t2825 * L_10 = V_2;
			NullCheck(L_9);
			InvokableCallList_AddPersistentInvokableCall_m9728(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m9876((&V_1), /*hidden argument*/Enumerator_MoveNext_m9876_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t2903  L_12 = V_1;
		Enumerator_t2903  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t2903_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005b:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2.h"
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Collections_Generic_List_1_gen_55MethodDeclarations.h"
// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
#include "mscorlib_System_Predicate_1_gen_2MethodDeclarations.h"


// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t2831_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m9877_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m9727 (InvokableCallList_t2832 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4438);
		List_1__ctor_m9877_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485137);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t2831 * L_0 = (List_1_t2831 *)il2cpp_codegen_object_new (List_1_t2831_il2cpp_TypeInfo_var);
		List_1__ctor_m9877(L_0, /*hidden argument*/List_1__ctor_m9877_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t2831 * L_1 = (List_1_t2831 *)il2cpp_codegen_object_new (List_1_t2831_il2cpp_TypeInfo_var);
		List_1__ctor_m9877(L_1, /*hidden argument*/List_1__ctor_m9877_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t2831 * L_2 = (List_1_t2831 *)il2cpp_codegen_object_new (List_1_t2831_il2cpp_TypeInfo_var);
		List_1__ctor_m9877(L_2, /*hidden argument*/List_1__ctor_m9877_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m9728 (InvokableCallList_t2832 * __this, BaseInvokableCall_t2825 * ___call, const MethodInfo* method)
{
	{
		List_1_t2831 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t2825 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t2825 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m9729 (InvokableCallList_t2832 * __this, BaseInvokableCall_t2825 * ___call, const MethodInfo* method)
{
	{
		List_1_t2831 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t2825 * L_1 = ___call;
		NullCheck(L_0);
		VirtActionInvoker1< BaseInvokableCall_t2825 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t2831_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t2904_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m9877_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m9878_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m9879_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m9730 (InvokableCallList_t2832 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t2831_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4438);
		Predicate_1_t2904_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4439);
		List_1__ctor_m9877_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485137);
		Predicate_1__ctor_m9878_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485138);
		List_1_RemoveAll_m9879_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485139);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t2831 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t2831 * L_0 = (List_1_t2831 *)il2cpp_codegen_object_new (List_1_t2831_il2cpp_TypeInfo_var);
		List_1__ctor_m9877(L_0, /*hidden argument*/List_1__ctor_m9877_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t2831 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		BaseInvokableCall_t2825 * L_3 = (BaseInvokableCall_t2825 *)VirtFuncInvoker1< BaseInvokableCall_t2825 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t2831 * L_7 = V_0;
		List_1_t2831 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		BaseInvokableCall_t2825 * L_10 = (BaseInvokableCall_t2825 *)VirtFuncInvoker1< BaseInvokableCall_t2825 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		NullCheck(L_7);
		VirtActionInvoker1< BaseInvokableCall_t2825 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t2831 * L_13 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t2831 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t2831 * L_16 = V_0;
		List_1_t2831 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t2904 * L_19 = (Predicate_1_t2904 *)il2cpp_codegen_object_new (Predicate_1_t2904_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m9878(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m9878_MethodInfo_var);
		NullCheck(L_15);
		List_1_RemoveAll_m9879(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m9879_MethodInfo_var);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m9731 (InvokableCallList_t2832 * __this, const MethodInfo* method)
{
	{
		List_1_t2831 * L_0 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m9880_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m9732 (InvokableCallList_t2832 * __this, ObjectU5BU5D_t627* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m9880_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485140);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t2831 * L_0 = (__this->___m_ExecutingCalls_2);
		List_1_t2831 * L_1 = (__this->___m_PersistentCalls_0);
		NullCheck(L_0);
		List_1_AddRange_m9880(L_0, L_1, /*hidden argument*/List_1_AddRange_m9880_MethodInfo_var);
		List_1_t2831 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t2831 * L_3 = (__this->___m_RuntimeCalls_1);
		NullCheck(L_2);
		List_1_AddRange_m9880(L_2, L_3, /*hidden argument*/List_1_AddRange_m9880_MethodInfo_var);
		V_0 = 0;
		goto IL_003f;
	}

IL_0029:
	{
		List_1_t2831 * L_4 = (__this->___m_ExecutingCalls_2);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		BaseInvokableCall_t2825 * L_6 = (BaseInvokableCall_t2825 *)VirtFuncInvoker1< BaseInvokableCall_t2825 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_4, L_5);
		ObjectU5BU5D_t627* L_7 = ___parameters;
		NullCheck(L_6);
		VirtActionInvoker1< ObjectU5BU5D_t627* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_6, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_003f:
	{
		int32_t L_9 = V_0;
		List_1_t2831 * L_10 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0029;
		}
	}
	{
		List_1_t2831 * L_12 = (__this->___m_ExecutingCalls_2);
		NullCheck(L_12);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_12);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t2832_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t2830_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m9733 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t2832_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4440);
		PersistentCallGroup_t2830_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4441);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		InvokableCallList_t2832 * L_0 = (InvokableCallList_t2832 *)il2cpp_codegen_object_new (InvokableCallList_t2832_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m9727(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t2830 * L_1 = (PersistentCallGroup_t2830 *)il2cpp_codegen_object_new (PersistentCallGroup_t2830_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m9725(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m3766(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5995 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5996 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m9736(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m3766(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t645_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m9734 (UnityEventBase_t2833 * __this, PersistentCall_t2828 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t645_0_0_0_var = il2cpp_codegen_type_from_index(1684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t2828 * L_1 = ___call;
		NullCheck(L_1);
		ArgumentCache_t2824 * L_2 = PersistentCall_get_arguments_m9721(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m9702(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t2828 * L_5 = ___call;
		NullCheck(L_5);
		ArgumentCache_t2824 * L_6 = PersistentCall_get_arguments_m9721(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m9702(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetType_m9872(NULL /*static, unused*/, L_7, 0, /*hidden argument*/NULL);
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t2828 * L_11 = ___call;
		NullCheck(L_11);
		String_t* L_12 = PersistentCall_get_methodName_m9719(L_11, /*hidden argument*/NULL);
		PersistentCall_t2828 * L_13 = ___call;
		NullCheck(L_13);
		Object_t645 * L_14 = PersistentCall_get_target_m9718(L_13, /*hidden argument*/NULL);
		PersistentCall_t2828 * L_15 = ___call;
		NullCheck(L_15);
		int32_t L_16 = PersistentCall_get_mode_m9720(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m9735(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t87_0_0_0_var;
extern const Il2CppType* Int32_t82_0_0_0_var;
extern const Il2CppType* Boolean_t59_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t645_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m9735 (UnityEventBase_t2833 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_0_0_0_var = il2cpp_codegen_type_from_index(66);
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		Boolean_t59_0_0_0_var = il2cpp_codegen_type_from_index(24);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Object_t645_0_0_0_var = il2cpp_codegen_type_from_index(1684);
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t1142* G_B10_2 = {0};
	TypeU5BU5D_t1142* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t1142* G_B9_2 = {0};
	TypeU5BU5D_t1142* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t1142* L_10 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Single_t87_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0)) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t1142* L_15 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0)) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t1142* L_20 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Boolean_t59_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0)) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t1142* L_25 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 0);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0)) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t1142* L_30 = ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t645_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		NullCheck(G_B10_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B10_2, G_B10_1);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1)) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m9736 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t2832 * L_0 = (__this->___m_Calls_0);
		NullCheck(L_0);
		InvokableCallList_ClearPersistent_m9731(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m9737 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t2830 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t2832 * L_2 = (__this->___m_Calls_0);
		NullCheck(L_1);
		PersistentCallGroup_Initialize_m9726(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m9738 (UnityEventBase_t2833 * __this, BaseInvokableCall_t2825 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t2832 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t2825 * L_1 = ___call;
		NullCheck(L_0);
		InvokableCallList_AddListener_m9729(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m9739 (UnityEventBase_t2833 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t2832 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		NullCheck(L_0);
		InvokableCallList_RemoveListener_m9730(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m9740 (UnityEventBase_t2833 * __this, ObjectU5BU5D_t627* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m9737(__this, /*hidden argument*/NULL);
		InvokableCallList_t2832 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t627* L_1 = ___parameters;
		NullCheck(L_0);
		InvokableCallList_Invoke_m9732(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* UnityEventBase_ToString_m5994 (UnityEventBase_t2833 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m492(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m3766(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral1286, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m9741 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t1142* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t1399* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1324 * V_5 = {0};
	ParameterInfoU5BU5D_t1399* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m3766(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t1142* L_4 = ___argumentTypes;
		NullCheck(L_2);
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t2895 *, TypeU5BU5D_t1142*, ParameterModifierU5BU5D_t2896* >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t2895 *)NULL, L_4, (ParameterModifierU5BU5D_t2896*)(ParameterModifierU5BU5D_t2896*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1399* L_8 = (ParameterInfoU5BU5D_t1399*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1399* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t1399* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t1399* L_10 = V_6;
		int32_t L_11 = V_7;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t1324 **)(ParameterInfo_t1324 **)SZArrayLdElema(L_10, L_12));
		TypeU5BU5D_t1142* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15));
		ParameterInfo_t1324 * L_16 = V_5;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		NullCheck(L_20);
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t1399* L_26 = V_6;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		NullCheck(L_29);
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m3764(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Events.UnityEvent
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"



// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t627_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m5554 (UnityEvent_t836 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t627*)SZArrayNew(ObjectU5BU5D_t627_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m9733(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m3899 (UnityEvent_t836 * __this, UnityAction_t501 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t501 * L_0 = ___call;
		BaseInvokableCall_t2825 * L_1 = UnityEvent_GetDelegate_m9742(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m9738(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1142_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m6012 (UnityEvent_t836 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m9741(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t1142*)SZArrayNew(TypeU5BU5D_t1142_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t2826_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t2825 * UnityEvent_GetDelegate_m6013 (UnityEvent_t836 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t2826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4432);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t2826 * L_2 = (InvokableCall_t2826 *)il2cpp_codegen_object_new (InvokableCall_t2826_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m9713(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t2826_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t2825 * UnityEvent_GetDelegate_m9742 (Object_t * __this /* static, unused */, UnityAction_t501 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t2826_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4432);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t501 * L_0 = ___action;
		InvokableCall_t2826 * L_1 = (InvokableCall_t2826 *)il2cpp_codegen_object_new (InvokableCall_t2826_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m9714(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m5556 (UnityEvent_t836 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t627* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m9740(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialog.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.UserAuthorizationDialog
#include "UnityEngine_UnityEngine_UserAuthorizationDialogMethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"


// System.Void UnityEngine.UserAuthorizationDialog::.ctor()
extern "C" void UserAuthorizationDialog__ctor_m9743 (UserAuthorizationDialog_t2834 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m379(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::Start()
extern "C" void UserAuthorizationDialog_Start_m9744 (UserAuthorizationDialog_t2834 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::OnGUI()
extern "C" void UserAuthorizationDialog_OnGUI_m9745 (UserAuthorizationDialog_t2834 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.UserAuthorizationDialog::DoUserAuthorizationDialog(System.Int32)
extern "C" void UserAuthorizationDialog_DoUserAuthorizationDialog_m9746 (UserAuthorizationDialog_t2834 * __this, int32_t ___windowID, const MethodInfo* method)
{
	{
		return;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_Attribute.h"


// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m9747 (DefaultValueAttribute_t2835 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m9748 (DefaultValueAttribute_t2835 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t2835_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m9749 (DefaultValueAttribute_t2835 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t2835_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4442);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t2835 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t2835 *)IsInst(L_0, DefaultValueAttribute_t2835_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t2835 * L_1 = V_0;
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
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t2835 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = DefaultValueAttribute_get_Value_m9748(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t2835 * L_6 = V_0;
		NullCheck(L_6);
		Object_t * L_7 = DefaultValueAttribute_get_Value_m9748(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m9750 (DefaultValueAttribute_t2835 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m491(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"



// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m9751 (ExcludeFromDocsAttribute_t2836 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"



// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m5904 (FormerlySerializedAsAttribute_t1041 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRules
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"



// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"

// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t2837_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m9752 (TypeInferenceRuleAttribute_t2838 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t2837_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4443);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t2837_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m9753(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m9753 (TypeInferenceRuleAttribute_t2838 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m3767(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m9754 (TypeInferenceRuleAttribute_t2838 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#ifndef _MSC_VER
#else
#endif
// UnityEngineInternal.GenericStack
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"

// System.Collections.Stack
#include "mscorlib_System_Collections_StackMethodDeclarations.h"


// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m9755 (GenericStack_t2652 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m9881(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m3898 (UnityAction_t501 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m9756 (UnityAction_t501 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m9756((UnityAction_t501 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_UnityAction_t501(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m9757 (UnityAction_t501 * __this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m9758 (UnityAction_t501 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
