#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "System_Configuration_U3CModuleU3E.h"
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
// <Module>
#include "System_Configuration_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Configuration.Provider.ProviderBase
#include "System_Configuration_System_Configuration_Provider_ProviderB.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.Provider.ProviderBase
#include "System_Configuration_System_Configuration_Provider_ProviderBMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollection.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Collections.Specialized.NameValueCollection
#include "System_System_Collections_Specialized_NameValueCollectionMethodDeclarations.h"


// System.Void System.Configuration.Provider.ProviderBase::Initialize(System.String,System.Collections.Specialized.NameValueCollection)
extern TypeInfo* ArgumentNullException_t788_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t729_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1450_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ProviderBase_Initialize_m11660 (ProviderBase_t3298 * __this, String_t* ___name, NameValueCollection_t3303 * ___config, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		InvalidOperationException_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2518);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t788 * L_1 = (ArgumentNullException_t788 *)il2cpp_codegen_object_new (ArgumentNullException_t788_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t729 * L_4 = (ArgumentException_t729 *)il2cpp_codegen_object_new (ArgumentException_t729_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_4, (String_t*) &_stringLiteral2386, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_002c:
	{
		bool L_5 = (__this->___alreadyInitialized_0);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		InvalidOperationException_t1450 * L_6 = (InvalidOperationException_t1450 *)il2cpp_codegen_object_new (InvalidOperationException_t1450_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_6, (String_t*) &_stringLiteral2387, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0042:
	{
		__this->___alreadyInitialized_0 = 1;
		String_t* L_7 = ___name;
		__this->____name_2 = L_7;
		NameValueCollection_t3303 * L_8 = ___config;
		if (!L_8)
		{
			goto IL_0072;
		}
	}
	{
		NameValueCollection_t3303 * L_9 = ___config;
		NullCheck(L_9);
		String_t* L_10 = NameValueCollection_get_Item_m12064(L_9, (String_t*) &_stringLiteral618, /*hidden argument*/NULL);
		__this->____description_1 = L_10;
		NameValueCollection_t3303 * L_11 = ___config;
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(21 /* System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String) */, L_11, (String_t*) &_stringLiteral618);
	}

IL_0072:
	{
		String_t* L_12 = (__this->____description_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008e;
		}
	}
	{
		String_t* L_14 = (__this->____name_2);
		__this->____description_1 = L_14;
	}

IL_008e:
	{
		return;
	}
}
// System.String System.Configuration.Provider.ProviderBase::get_Name()
extern "C" String_t* ProviderBase_get_Name_m11661 (ProviderBase_t3298 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____name_2);
		return L_0;
	}
}
// System.Configuration.Provider.ProviderCollection
#include "System_Configuration_System_Configuration_Provider_ProviderC.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.Provider.ProviderCollection
#include "System_Configuration_System_Configuration_Provider_ProviderCMethodDeclarations.h"

// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.StringComparer
#include "mscorlib_System_StringComparer.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.StringComparer
#include "mscorlib_System_StringComparerMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"


// System.Void System.Configuration.Provider.ProviderCollection::.ctor()
extern TypeInfo* StringComparer_t2948_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t716_il2cpp_TypeInfo_var;
extern "C" void ProviderCollection__ctor_m11662 (ProviderCollection_t3299 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4507);
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ArrayList_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2948_il2cpp_TypeInfo_var);
		StringComparer_t2948 * L_0 = StringComparer_get_InvariantCultureIgnoreCase_m12065(NULL /*static, unused*/, /*hidden argument*/NULL);
		Hashtable_t714 * L_1 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m12066(L_1, ((int32_t)10), L_0, /*hidden argument*/NULL);
		__this->___lookup_0 = L_1;
		ArrayList_t716 * L_2 = (ArrayList_t716 *)il2cpp_codegen_object_new (ArrayList_t716_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_2, /*hidden argument*/NULL);
		__this->___values_2 = L_2;
		return;
	}
}
// System.Void System.Configuration.Provider.ProviderCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ProviderCollection_System_Collections_ICollection_CopyTo_m11663 (ProviderCollection_t3299 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___values_2);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.Provider.ProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t788_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ProviderCollection_Add_m11664 (ProviderCollection_t3299 * __this, ProviderBase_t3298 * ___provider, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		ArgumentNullException_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___readOnly_1);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		NotSupportedException_t56 * L_1 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		ProviderBase_t3298 * L_2 = ___provider;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ProviderBase_t3298 * L_3 = ___provider;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Configuration.Provider.ProviderBase::get_Name() */, L_3);
		if (L_4)
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		ArgumentNullException_t788 * L_5 = (ArgumentNullException_t788 *)il2cpp_codegen_object_new (ArgumentNullException_t788_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7522(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0028:
	{
		ArrayList_t716 * L_6 = (__this->___values_2);
		ProviderBase_t3298 * L_7 = ___provider;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_7);
		V_0 = L_8;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		Hashtable_t714 * L_9 = (__this->___lookup_0);
		ProviderBase_t3298 * L_10 = ___provider;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Configuration.Provider.ProviderBase::get_Name() */, L_10);
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		Object_t * L_14 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_9, L_11, L_14);
		goto IL_0065;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Object)
		ArrayList_t716 * L_15 = (__this->___values_2);
		int32_t L_16 = V_0;
		NullCheck(L_15);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_15, L_16);
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0065;
	} // end catch (depth: 1)

IL_0065:
	{
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.Provider.ProviderCollection::GetEnumerator()
extern "C" Object_t * ProviderCollection_GetEnumerator_m11665 (ProviderCollection_t3299 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___values_2);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Configuration.Provider.ProviderCollection::get_Count()
extern "C" int32_t ProviderCollection_get_Count_m11666 (ProviderCollection_t3299 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___values_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Configuration.Provider.ProviderCollection::get_IsSynchronized()
extern "C" bool ProviderCollection_get_IsSynchronized_m11667 (ProviderCollection_t3299 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.Provider.ProviderCollection::get_SyncRoot()
extern "C" Object_t * ProviderCollection_get_SyncRoot_m11668 (ProviderCollection_t3299 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Configuration.Provider.ProviderBase System.Configuration.Provider.ProviderCollection::get_Item(System.String)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderBase_t3298_il2cpp_TypeInfo_var;
extern "C" ProviderBase_t3298 * ProviderCollection_get_Item_m11669 (ProviderCollection_t3299 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		ProviderBase_t3298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5793);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Hashtable_t714 * L_0 = (__this->___lookup_0);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		return (ProviderBase_t3298 *)NULL;
	}

IL_0015:
	{
		ArrayList_t716 * L_4 = (__this->___values_2);
		Object_t * L_5 = V_0;
		NullCheck(L_4);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t82_il2cpp_TypeInfo_var)))));
		return ((ProviderBase_t3298 *)IsInst(L_6, ProviderBase_t3298_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ClientConfigurationSystem
#include "System_Configuration_System_Configuration_ClientConfiguratio.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ClientConfigurationSystem
#include "System_Configuration_System_Configuration_ClientConfiguratioMethodDeclarations.h"

// System.Configuration.Configuration
#include "System_Configuration_System_Configuration_Configuration.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserL.h"
// System.Configuration.ConfigurationErrorsException
#include "System_Configuration_System_Configuration_ConfigurationError.h"
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSecti.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Configuration.ConfigurationManager
#include "System_Configuration_System_Configuration_ConfigurationManagMethodDeclarations.h"
// System.Configuration.ConfigurationErrorsException
#include "System_Configuration_System_Configuration_ConfigurationErrorMethodDeclarations.h"
// System.Configuration.Configuration
#include "System_Configuration_System_Configuration_ConfigurationMethodDeclarations.h"
// System.Configuration.ConfigurationSection
#include "System_Configuration_System_Configuration_ConfigurationSectiMethodDeclarations.h"


// System.Void System.Configuration.ClientConfigurationSystem::.ctor()
extern "C" void ClientConfigurationSystem__ctor_m11670 (ClientConfigurationSystem_t3301 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ClientConfigurationSystem::System.Configuration.Internal.IInternalConfigSystem.GetSection(System.String)
extern "C" Object_t * ClientConfigurationSystem_System_Configuration_Internal_IInternalConfigSystem_GetSection_m11671 (ClientConfigurationSystem_t3301 * __this, String_t* ___configKey, const MethodInfo* method)
{
	ConfigurationSection_t3340 * V_0 = {0};
	Object_t * G_B3_0 = {0};
	{
		Configuration_t3300 * L_0 = ClientConfigurationSystem_get_Configuration_m11672(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___configKey;
		NullCheck(L_0);
		ConfigurationSection_t3340 * L_2 = Configuration_GetSection_m11698(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationSection_t3340 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		ConfigurationSection_t3340 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, L_4);
		G_B3_0 = L_5;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = NULL;
	}

IL_001f:
	{
		return G_B3_0;
	}
}
// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::get_Configuration()
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * ClientConfigurationSystem_get_Configuration_m11672 (ClientConfigurationSystem_t3301 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	Assembly_t787 * V_0 = {0};
	Exception_t57 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Configuration_t3300 * L_0 = (__this->___cfg_0);
		if (L_0)
		{
			goto IL_0036;
		}
	}
	{
		Assembly_t787 * L_1 = Assembly_GetEntryAssembly_m12067(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		Assembly_t787 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		Configuration_t3300 * L_3 = ConfigurationManager_OpenExeConfigurationInternal_m11841(NULL /*static, unused*/, 0, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		__this->___cfg_0 = L_3;
		goto IL_0036;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0024;
		throw e;
	}

CATCH_0024:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_4 = V_1;
		ConfigurationErrorsException_t3322 * L_5 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11805(L_5, (String_t*) &_stringLiteral2388, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
		goto IL_0036;
	} // end catch (depth: 1)

IL_0036:
	{
		Configuration_t3300 * L_6 = (__this->___cfg_0);
		return L_6;
	}
}
// System.Configuration.ConfigNameValueCollection
#include "System_Configuration_System_Configuration_ConfigNameValueCol.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigNameValueCollection
#include "System_Configuration_System_Configuration_ConfigNameValueColMethodDeclarations.h"

// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBa.h"
// System.Collections.Specialized.NameObjectCollectionBase
#include "System_System_Collections_Specialized_NameObjectCollectionBaMethodDeclarations.h"


// System.Void System.Configuration.ConfigNameValueCollection::.ctor()
extern "C" void ConfigNameValueCollection__ctor_m11673 (ConfigNameValueCollection_t3302 * __this, const MethodInfo* method)
{
	{
		NameValueCollection__ctor_m12068(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::.ctor(System.Configuration.ConfigNameValueCollection)
extern "C" void ConfigNameValueCollection__ctor_m11674 (ConfigNameValueCollection_t3302 * __this, ConfigNameValueCollection_t3302 * ___col, const MethodInfo* method)
{
	{
		ConfigNameValueCollection_t3302 * L_0 = ___col;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_0);
		ConfigNameValueCollection_t3302 * L_2 = ___col;
		NameValueCollection__ctor_m12069(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::ResetModified()
extern "C" void ConfigNameValueCollection_ResetModified_m11675 (ConfigNameValueCollection_t3302 * __this, const MethodInfo* method)
{
	{
		__this->___modified_12 = 0;
		return;
	}
}
// System.Boolean System.Configuration.ConfigNameValueCollection::get_IsModified()
extern "C" bool ConfigNameValueCollection_get_IsModified_m11676 (ConfigNameValueCollection_t3302 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_12);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigNameValueCollection::Set(System.String,System.String)
extern "C" void ConfigNameValueCollection_Set_m11677 (ConfigNameValueCollection_t3302 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___value;
		NameValueCollection_Set_m12070(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->___modified_12 = 1;
		return;
	}
}
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigInfo
#include "System_Configuration_System_Configuration_ConfigInfoMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReader.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"


// System.Void System.Configuration.ConfigInfo::.ctor()
extern "C" void ConfigInfo__ctor_m11678 (ConfigInfo_t3304 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigInfo::CreateInstance()
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigInfo_CreateInstance_m11679 (ConfigInfo_t3304 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___Type_2);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_1 = (__this->___ConfigHost_5);
		String_t* L_2 = (__this->___TypeName_1);
		NullCheck(L_1);
		Type_t * L_3 = (Type_t *)InterfaceFuncInvoker2< Type_t *, String_t*, bool >::Invoke(2 /* System.Type System.Configuration.Internal.IInternalConfigHost::GetConfigType(System.String,System.Boolean) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_1, L_2, 1);
		__this->___Type_2 = L_3;
	}

IL_0023:
	{
		Type_t * L_4 = (__this->___Type_2);
		Object_t * L_5 = Activator_CreateInstance_m12071(NULL /*static, unused*/, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void System.Configuration.ConfigInfo::set_StreamName(System.String)
extern "C" void ConfigInfo_set_StreamName_m11680 (ConfigInfo_t3304 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___streamName_3 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigInfo::ThrowException(System.String,System.Xml.XmlReader)
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" void ConfigInfo_ThrowException_m11681 (ConfigInfo_t3304 * __this, String_t* ___text, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___text;
		XmlReader_t3372 * L_1 = ___reader;
		ConfigurationErrorsException_t3322 * L_2 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_2, L_0, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void System.Configuration.ConfigInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
// System.Void System.Configuration.ConfigInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
// System.Void System.Configuration.ConfigInfo::Merge(System.Configuration.ConfigInfo)
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ConfigurationLocationCollection
#include "System_Configuration_System_Configuration_ConfigurationLocat_0.h"
// System.Configuration.ConfigurationSectionGroup
#include "System_Configuration_System_Configuration_ConfigurationSecti_2.h"
// System.Configuration.SectionGroupInfo
#include "System_Configuration_System_Configuration_SectionGroupInfo.h"
// System.Configuration.ConfigurationSectionGroupCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_3.h"
// System.Configuration.ConfigurationSectionCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_1.h"
// System.Configuration.InternalConfigurationSystem
#include "System_Configuration_System_Configuration_InternalConfigurat_0.h"
// System.Configuration.ConfigurationLocation
#include "System_Configuration_System_Configuration_ConfigurationLocat.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
#include "mscorlib_ArrayTypes.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Configuration.SectionInfo
#include "System_Configuration_System_Configuration_SectionInfo.h"
// System.Configuration.DefaultSection
#include "System_Configuration_System_Configuration_DefaultSection.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReader.h"
// System.Configuration.SectionInformation
#include "System_Configuration_System_Configuration_SectionInformation.h"
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
// ConfigXmlTextReader
#include "System_Configuration_ConfigXmlTextReader.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationException.h"
// System.Configuration.ConfigurationLocationCollection
#include "System_Configuration_System_Configuration_ConfigurationLocat_0MethodDeclarations.h"
// System.Configuration.ConfigurationSectionGroup
#include "System_Configuration_System_Configuration_ConfigurationSecti_2MethodDeclarations.h"
// System.Configuration.InternalConfigurationSystem
#include "System_Configuration_System_Configuration_InternalConfigurat_0MethodDeclarations.h"
// System.Configuration.ConfigurationLocation
#include "System_Configuration_System_Configuration_ConfigurationLocatMethodDeclarations.h"
// System.Configuration.SectionGroupInfo
#include "System_Configuration_System_Configuration_SectionGroupInfoMethodDeclarations.h"
// System.Configuration.ConfigurationSectionCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_1MethodDeclarations.h"
// System.Configuration.ConfigurationSectionGroupCollection
#include "System_Configuration_System_Configuration_ConfigurationSecti_3MethodDeclarations.h"
// System.Configuration.SectionInfo
#include "System_Configuration_System_Configuration_SectionInfoMethodDeclarations.h"
// System.Configuration.DefaultSection
#include "System_Configuration_System_Configuration_DefaultSectionMethodDeclarations.h"
// System.Configuration.ConfigurationElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_0MethodDeclarations.h"
// System.Configuration.SectionInformation
#include "System_Configuration_System_Configuration_SectionInformationMethodDeclarations.h"
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"
// ConfigXmlTextReader
#include "System_Configuration_ConfigXmlTextReaderMethodDeclarations.h"
// System.Xml.XmlTextReader
#include "System_Xml_System_Xml_XmlTextReaderMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Xml.XmlReader
#include "System_Xml_System_Xml_XmlReaderMethodDeclarations.h"
// System.Configuration.ConfigurationException
#include "System_System_Configuration_ConfigurationExceptionMethodDeclarations.h"


// System.Void System.Configuration.Configuration::.ctor(System.Configuration.Configuration,System.String)
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern "C" void Configuration__ctor_m11682 (Configuration_t3300 * __this, Configuration_t3300 * ___parent, String_t* ___locationSubPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t714 * L_0 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_0, /*hidden argument*/NULL);
		__this->___elementData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Configuration_t3300 * L_1 = ___parent;
		__this->___parent_0 = L_1;
		Configuration_t3300 * L_2 = ___parent;
		NullCheck(L_2);
		Object_t * L_3 = (L_2->___system_6);
		__this->___system_6 = L_3;
		Configuration_t3300 * L_4 = ___parent;
		NullCheck(L_4);
		SectionGroupInfo_t3308 * L_5 = (L_4->___rootGroup_5);
		__this->___rootGroup_5 = L_5;
		String_t* L_6 = ___locationSubPath;
		__this->___locationSubPath_11 = L_6;
		Configuration_t3300 * L_7 = ___parent;
		NullCheck(L_7);
		String_t* L_8 = Configuration_get_ConfigPath_m11691(L_7, /*hidden argument*/NULL);
		__this->___configPath_9 = L_8;
		return;
	}
}
// System.Void System.Configuration.Configuration::.ctor(System.Configuration.InternalConfigurationSystem,System.String)
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t3300_il2cpp_TypeInfo_var;
extern "C" void Configuration__ctor_m11683 (Configuration_t3300 * __this, InternalConfigurationSystem_t3356 * ___system, String_t* ___locationSubPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Configuration_t3300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5797);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t3300 * V_0 = {0};
	{
		Hashtable_t714 * L_0 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_0, /*hidden argument*/NULL);
		__this->___elementData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___hasFile_7 = 1;
		InternalConfigurationSystem_t3356 * L_1 = ___system;
		__this->___system_6 = L_1;
		InternalConfigurationSystem_t3356 * L_2 = ___system;
		String_t** L_3 = &(__this->___configPath_9);
		String_t** L_4 = &(__this->___locationConfigPath_10);
		NullCheck(L_2);
		InternalConfigurationSystem_InitForConfiguration_m11954(L_2, (&___locationSubPath), L_3, L_4, /*hidden argument*/NULL);
		V_0 = (Configuration_t3300 *)NULL;
		String_t* L_5 = ___locationSubPath;
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		InternalConfigurationSystem_t3356 * L_6 = ___system;
		String_t* L_7 = ___locationSubPath;
		Configuration_t3300 * L_8 = (Configuration_t3300 *)il2cpp_codegen_object_new (Configuration_t3300_il2cpp_TypeInfo_var);
		Configuration__ctor_m11683(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = (__this->___locationConfigPath_10);
		if (!L_9)
		{
			goto IL_005c;
		}
	}
	{
		Configuration_t3300 * L_10 = V_0;
		String_t* L_11 = (__this->___locationConfigPath_10);
		Configuration_t3300 * L_12 = V_0;
		NullCheck(L_10);
		Configuration_t3300 * L_13 = Configuration_FindLocationConfiguration_m11684(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		InternalConfigurationSystem_t3356 * L_14 = ___system;
		String_t* L_15 = (__this->___configPath_9);
		Configuration_t3300 * L_16 = V_0;
		Configuration_Init_m11685(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::FindLocationConfiguration(System.String,System.Configuration.Configuration)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t3309_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * Configuration_FindLocationConfiguration_m11684 (Configuration_t3300 * __this, String_t* ___relativePath, Configuration_t3300 * ___defaultConfiguration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IConfigSystem_t3309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5798);
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t3300 * V_0 = {0};
	Configuration_t3300 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	ConfigurationLocation_t3325 * V_4 = {0};
	{
		Configuration_t3300 * L_0 = ___defaultConfiguration;
		V_0 = L_0;
		String_t* L_1 = Configuration_get_LocationConfigPath_m11690(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		Configuration_t3300 * L_3 = Configuration_GetParentWithFile_m11688(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		Configuration_t3300 * L_4 = V_1;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		Object_t * L_5 = (__this->___system_6);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t3309_il2cpp_TypeInfo_var, L_5);
		String_t* L_7 = (__this->___configPath_9);
		String_t* L_8 = ___relativePath;
		NullCheck(L_6);
		String_t* L_9 = (String_t*)InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* System.String System.Configuration.Internal.IInternalConfigHost::GetConfigPathFromLocationSubPath(System.String,System.String) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		V_2 = L_9;
		Configuration_t3300 * L_10 = V_1;
		String_t* L_11 = V_2;
		Configuration_t3300 * L_12 = ___defaultConfiguration;
		NullCheck(L_10);
		Configuration_t3300 * L_13 = Configuration_FindLocationConfiguration_m11684(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0040:
	{
		String_t* L_14 = (__this->___configPath_9);
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m4282(L_14, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m408(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = ___relativePath;
		String_t* L_18 = V_3;
		NullCheck(L_17);
		bool L_19 = String_StartsWith_m12072(L_17, L_18, 4, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_20 = ___relativePath;
		String_t* L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = String_get_Length_m410(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m4282(L_20, L_22, /*hidden argument*/NULL);
		___relativePath = L_23;
	}

IL_0072:
	{
		ConfigurationLocationCollection_t3307 * L_24 = Configuration_get_Locations_m11694(__this, /*hidden argument*/NULL);
		String_t* L_25 = ___relativePath;
		NullCheck(L_24);
		ConfigurationLocation_t3325 * L_26 = ConfigurationLocationCollection_Find_m11828(L_24, L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		ConfigurationLocation_t3325 * L_27 = V_4;
		if (L_27)
		{
			goto IL_0089;
		}
	}
	{
		Configuration_t3300 * L_28 = V_0;
		return L_28;
	}

IL_0089:
	{
		ConfigurationLocation_t3325 * L_29 = V_4;
		Configuration_t3300 * L_30 = V_0;
		NullCheck(L_29);
		ConfigurationLocation_SetParentConfiguration_m11825(L_29, L_30, /*hidden argument*/NULL);
		ConfigurationLocation_t3325 * L_31 = V_4;
		NullCheck(L_31);
		Configuration_t3300 * L_32 = ConfigurationLocation_OpenConfiguration_m11824(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Configuration.Configuration::Init(System.Configuration.Internal.IConfigSystem,System.String,System.Configuration.Configuration)
extern TypeInfo* IConfigSystem_t3309_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" void Configuration_Init_m11685 (Configuration_t3300 * __this, Object_t * ___system, String_t* ___configPath, Configuration_t3300 * ___parent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigSystem_t3309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5798);
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___system;
		__this->___system_6 = L_0;
		String_t* L_1 = ___configPath;
		__this->___configPath_9 = L_1;
		Object_t * L_2 = ___system;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t3309_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = ___configPath;
		NullCheck(L_3);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(3 /* System.String System.Configuration.Internal.IInternalConfigHost::GetStreamName(System.String) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_3, L_4);
		__this->___streamName_2 = L_5;
		Configuration_t3300 * L_6 = ___parent;
		__this->___parent_0 = L_6;
		Configuration_t3300 * L_7 = ___parent;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		Configuration_t3300 * L_8 = ___parent;
		NullCheck(L_8);
		SectionGroupInfo_t3308 * L_9 = (L_8->___rootGroup_5);
		__this->___rootGroup_5 = L_9;
		goto IL_005a;
	}

IL_003e:
	{
		SectionGroupInfo_t3308 * L_10 = (SectionGroupInfo_t3308 *)il2cpp_codegen_object_new (SectionGroupInfo_t3308_il2cpp_TypeInfo_var);
		SectionGroupInfo__ctor_m12024(L_10, /*hidden argument*/NULL);
		__this->___rootGroup_5 = L_10;
		SectionGroupInfo_t3308 * L_11 = (__this->___rootGroup_5);
		String_t* L_12 = (__this->___streamName_2);
		NullCheck(L_11);
		ConfigInfo_set_StreamName_m11680(L_11, L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		String_t* L_13 = (__this->___streamName_2);
		if (!L_13)
		{
			goto IL_006c;
		}
	}
	{
		Configuration_Load_m11703(__this, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::get_Parent()
extern "C" Configuration_t3300 * Configuration_get_Parent_m11686 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		Configuration_t3300 * L_0 = (__this->___parent_0);
		return L_0;
	}
}
// System.Void System.Configuration.Configuration::set_Parent(System.Configuration.Configuration)
extern "C" void Configuration_set_Parent_m11687 (Configuration_t3300 * __this, Configuration_t3300 * ___value, const MethodInfo* method)
{
	{
		Configuration_t3300 * L_0 = ___value;
		__this->___parent_0 = L_0;
		return;
	}
}
// System.Configuration.Configuration System.Configuration.Configuration::GetParentWithFile()
extern "C" Configuration_t3300 * Configuration_GetParentWithFile_m11688 (Configuration_t3300 * __this, const MethodInfo* method)
{
	Configuration_t3300 * V_0 = {0};
	{
		Configuration_t3300 * L_0 = Configuration_get_Parent_m11686(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0013;
	}

IL_000c:
	{
		Configuration_t3300 * L_1 = V_0;
		NullCheck(L_1);
		Configuration_t3300 * L_2 = Configuration_get_Parent_m11686(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0013:
	{
		Configuration_t3300 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		Configuration_t3300 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = Configuration_get_HasFile_m11693(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_000c;
		}
	}

IL_0024:
	{
		Configuration_t3300 * L_6 = V_0;
		return L_6;
	}
}
// System.Configuration.Internal.IInternalConfigHost System.Configuration.Configuration::get_ConfigHost()
extern TypeInfo* IConfigSystem_t3309_il2cpp_TypeInfo_var;
extern "C" Object_t * Configuration_get_ConfigHost_m11689 (Configuration_t3300 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigSystem_t3309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5798);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___system_6);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t3309_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String System.Configuration.Configuration::get_LocationConfigPath()
extern "C" String_t* Configuration_get_LocationConfigPath_m11690 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___locationConfigPath_10);
		return L_0;
	}
}
// System.String System.Configuration.Configuration::get_ConfigPath()
extern "C" String_t* Configuration_get_ConfigPath_m11691 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___configPath_9);
		return L_0;
	}
}
// System.String System.Configuration.Configuration::get_FilePath()
extern "C" String_t* Configuration_get_FilePath_m11692 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___streamName_2);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t3300 * L_1 = (__this->___parent_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t3300 * L_2 = (__this->___parent_0);
		NullCheck(L_2);
		String_t* L_3 = Configuration_get_FilePath_m11692(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0022:
	{
		String_t* L_4 = (__this->___streamName_2);
		return L_4;
	}
}
// System.Boolean System.Configuration.Configuration::get_HasFile()
extern "C" bool Configuration_get_HasFile_m11693 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___hasFile_7);
		return L_0;
	}
}
// System.Configuration.ConfigurationLocationCollection System.Configuration.Configuration::get_Locations()
extern TypeInfo* ConfigurationLocationCollection_t3307_il2cpp_TypeInfo_var;
extern "C" ConfigurationLocationCollection_t3307 * Configuration_get_Locations_m11694 (Configuration_t3300 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLocationCollection_t3307_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5800);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLocationCollection_t3307 * L_0 = (__this->___locations_4);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationLocationCollection_t3307 * L_1 = (ConfigurationLocationCollection_t3307 *)il2cpp_codegen_object_new (ConfigurationLocationCollection_t3307_il2cpp_TypeInfo_var);
		ConfigurationLocationCollection__ctor_m11826(L_1, /*hidden argument*/NULL);
		__this->___locations_4 = L_1;
	}

IL_0016:
	{
		ConfigurationLocationCollection_t3307 * L_2 = (__this->___locations_4);
		return L_2;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::get_RootSectionGroup()
extern TypeInfo* ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t3306 * Configuration_get_RootSectionGroup_m11695 (Configuration_t3300 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5801);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionGroup_t3306 * L_0 = (__this->___rootSectionGroup_3);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		ConfigurationSectionGroup_t3306 * L_1 = (ConfigurationSectionGroup_t3306 *)il2cpp_codegen_object_new (ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var);
		ConfigurationSectionGroup__ctor_m11903(L_1, /*hidden argument*/NULL);
		__this->___rootSectionGroup_3 = L_1;
		ConfigurationSectionGroup_t3306 * L_2 = (__this->___rootSectionGroup_3);
		SectionGroupInfo_t3308 * L_3 = (__this->___rootGroup_5);
		NullCheck(L_2);
		ConfigurationSectionGroup_Initialize_m11905(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_0028:
	{
		ConfigurationSectionGroup_t3306 * L_4 = (__this->___rootSectionGroup_3);
		return L_4;
	}
}
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.Configuration::get_SectionGroups()
extern "C" ConfigurationSectionGroupCollection_t3344 * Configuration_get_SectionGroups_m11696 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		ConfigurationSectionGroup_t3306 * L_0 = Configuration_get_RootSectionGroup_m11695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConfigurationSectionGroupCollection_t3344 * L_1 = ConfigurationSectionGroup_get_SectionGroups_m11906(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationSectionCollection System.Configuration.Configuration::get_Sections()
extern "C" ConfigurationSectionCollection_t3341 * Configuration_get_Sections_m11697 (Configuration_t3300 * __this, const MethodInfo* method)
{
	{
		ConfigurationSectionGroup_t3306 * L_0 = Configuration_get_RootSectionGroup_m11695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ConfigurationSectionCollection_t3341 * L_1 = ConfigurationSectionGroup_get_Sections_m11907(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSection(System.String)
extern TypeInfo* CharU5BU5D_t715_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t3340 * Configuration_GetSection_m11698 (Configuration_t3300 * __this, String_t* ___path, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t75* V_0 = {0};
	ConfigurationSectionGroup_t3306 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path;
		CharU5BU5D_t715* L_1 = ((CharU5BU5D_t715*)SZArrayNew(CharU5BU5D_t715_il2cpp_TypeInfo_var, 1));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 0)) = (uint16_t)((int32_t)47);
		NullCheck(L_0);
		StringU5BU5D_t75* L_2 = String_Split_m3872(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		StringU5BU5D_t75* L_3 = V_0;
		NullCheck(L_3);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		ConfigurationSectionCollection_t3341 * L_4 = Configuration_get_Sections_m11697(__this, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		NullCheck(L_4);
		ConfigurationSection_t3340 * L_7 = ConfigurationSectionCollection_get_Item_m11900(L_4, (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_6)), /*hidden argument*/NULL);
		return L_7;
	}

IL_002a:
	{
		ConfigurationSectionGroupCollection_t3344 * L_8 = Configuration_get_SectionGroups_m11696(__this, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_9 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		NullCheck(L_8);
		ConfigurationSectionGroup_t3306 * L_11 = ConfigurationSectionGroupCollection_get_Item_m11911(L_8, (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_10)), /*hidden argument*/NULL);
		V_1 = L_11;
		V_2 = 1;
		goto IL_0053;
	}

IL_0040:
	{
		ConfigurationSectionGroup_t3306 * L_12 = V_1;
		NullCheck(L_12);
		ConfigurationSectionGroupCollection_t3344 * L_13 = ConfigurationSectionGroup_get_SectionGroups_m11906(L_12, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck(L_13);
		ConfigurationSectionGroup_t3306 * L_17 = ConfigurationSectionGroupCollection_get_Item_m11911(L_13, (*(String_t**)(String_t**)SZArrayLdElema(L_14, L_16)), /*hidden argument*/NULL);
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0053:
	{
		ConfigurationSectionGroup_t3306 * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_20 = V_2;
		StringU5BU5D_t75* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_21)->max_length)))-(int32_t)1)))))
		{
			goto IL_0040;
		}
	}

IL_0064:
	{
		ConfigurationSectionGroup_t3306 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationSectionGroup_t3306 * L_23 = V_1;
		NullCheck(L_23);
		ConfigurationSectionCollection_t3341 * L_24 = ConfigurationSectionGroup_get_Sections_m11907(L_23, /*hidden argument*/NULL);
		StringU5BU5D_t75* L_25 = V_0;
		StringU5BU5D_t75* L_26 = V_0;
		NullCheck(L_26);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1)));
		int32_t L_27 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_26)->max_length)))-(int32_t)1));
		NullCheck(L_24);
		ConfigurationSection_t3340 * L_28 = ConfigurationSectionCollection_get_Item_m11900(L_24, (*(String_t**)(String_t**)SZArrayLdElema(L_25, L_27)), /*hidden argument*/NULL);
		return L_28;
	}

IL_007d:
	{
		return (ConfigurationSection_t3340 *)NULL;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.Configuration::GetSectionInstance(System.Configuration.SectionInfo,System.Boolean)
extern TypeInfo* ConfigurationSection_t3340_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultSection_t3349_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t3309_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2164_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t3340 * Configuration_GetSectionInstance_m11699 (Configuration_t3300 * __this, SectionInfo_t3368 * ___config, bool ___createDefaultInstance, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t3340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5802);
		DefaultSection_t3349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5803);
		IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5804);
		IConfigSystem_t3309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5798);
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5805);
		Path_t2164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ConfigurationSection_t3340 * V_1 = {0};
	Object_t * V_2 = {0};
	DefaultSection_t3349 * V_3 = {0};
	ConfigurationSection_t3340 * V_4 = {0};
	String_t* V_5 = {0};
	XmlTextReader_t3348 * V_6 = {0};
	{
		Hashtable_t714 * L_0 = (__this->___elementData_1);
		SectionInfo_t3368 * L_1 = ___config;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		V_1 = ((ConfigurationSection_t3340 *)IsInst(L_3, ConfigurationSection_t3340_il2cpp_TypeInfo_var));
		ConfigurationSection_t3340 * L_4 = V_1;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		bool L_5 = ___createDefaultInstance;
		if (L_5)
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		ConfigurationSection_t3340 * L_6 = V_1;
		return L_6;
	}

IL_0022:
	{
		SectionInfo_t3368 * L_7 = ___config;
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Configuration.SectionInfo::CreateInstance() */, L_7);
		V_2 = L_8;
		Object_t * L_9 = V_2;
		V_1 = ((ConfigurationSection_t3340 *)IsInst(L_9, ConfigurationSection_t3340_il2cpp_TypeInfo_var));
		ConfigurationSection_t3340 * L_10 = V_1;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		DefaultSection_t3349 * L_11 = (DefaultSection_t3349 *)il2cpp_codegen_object_new (DefaultSection_t3349_il2cpp_TypeInfo_var);
		DefaultSection__ctor_m11920(L_11, /*hidden argument*/NULL);
		V_3 = L_11;
		DefaultSection_t3349 * L_12 = V_3;
		Object_t * L_13 = V_2;
		NullCheck(L_12);
		ConfigurationSection_set_SectionHandler_m11879(L_12, ((Object_t *)IsInst(L_13, IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		DefaultSection_t3349 * L_14 = V_3;
		V_1 = L_14;
	}

IL_004a:
	{
		ConfigurationSection_t3340 * L_15 = V_1;
		NullCheck(L_15);
		ConfigurationElement_set_Configuration_m11714(L_15, __this, /*hidden argument*/NULL);
		V_4 = (ConfigurationSection_t3340 *)NULL;
		Configuration_t3300 * L_16 = (__this->___parent_0);
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		Configuration_t3300 * L_17 = (__this->___parent_0);
		SectionInfo_t3368 * L_18 = ___config;
		NullCheck(L_17);
		ConfigurationSection_t3340 * L_19 = Configuration_GetSectionInstance_m11699(L_17, L_18, 1, /*hidden argument*/NULL);
		V_4 = L_19;
		ConfigurationSection_t3340 * L_20 = V_1;
		NullCheck(L_20);
		SectionInformation_t3338 * L_21 = ConfigurationSection_get_SectionInformation_m11880(L_20, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_22 = V_4;
		NullCheck(L_21);
		SectionInformation_SetParentSection_m12057(L_21, L_22, /*hidden argument*/NULL);
	}

IL_007b:
	{
		ConfigurationSection_t3340 * L_23 = V_1;
		NullCheck(L_23);
		SectionInformation_t3338 * L_24 = ConfigurationSection_get_SectionInformation_m11880(L_23, /*hidden argument*/NULL);
		String_t* L_25 = Configuration_get_FilePath_m11692(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		SectionInformation_set_ConfigFilePath_m12048(L_24, L_25, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_26 = V_1;
		Object_t * L_27 = (__this->___system_6);
		NullCheck(L_27);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t3309_il2cpp_TypeInfo_var, L_27);
		String_t* L_29 = (__this->___configPath_9);
		NullCheck(L_28);
		Object_t * L_30 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(0 /* System.Object System.Configuration.Internal.IInternalConfigHost::CreateDeprecatedConfigContext(System.String) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_28, L_29);
		NullCheck(L_26);
		ConfigurationSection_set_ConfigContext_m11882(L_26, L_30, /*hidden argument*/NULL);
		Object_t * L_31 = V_0;
		V_5 = ((String_t*)IsInst(L_31, String_t_il2cpp_TypeInfo_var));
		ConfigurationSection_t3340 * L_32 = V_1;
		String_t* L_33 = V_5;
		NullCheck(L_32);
		ConfigurationElement_set_RawXml_m11718(L_32, L_33, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_34 = V_1;
		ConfigurationSection_t3340 * L_35 = V_4;
		NullCheck(L_34);
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, L_34, L_35);
		String_t* L_36 = V_5;
		if (!L_36)
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_37 = V_5;
		Object_t * L_38 = V_0;
		if ((!(((Object_t*)(String_t*)L_37) == ((Object_t*)(Object_t *)L_38))))
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_39 = V_5;
		StringReader_t259 * L_40 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
		StringReader__ctor_m3999(L_40, L_39, /*hidden argument*/NULL);
		String_t* L_41 = Configuration_get_FilePath_m11692(__this, /*hidden argument*/NULL);
		ConfigXmlTextReader_t3347 * L_42 = (ConfigXmlTextReader_t3347 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m11918(L_42, L_40, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		ConfigurationSection_t3340 * L_43 = V_1;
		XmlTextReader_t3348 * L_44 = V_6;
		NullCheck(L_43);
		VirtActionInvoker1< XmlReader_t3372 * >::Invoke(25 /* System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader) */, L_43, L_44);
		XmlTextReader_t3348 * L_45 = V_6;
		NullCheck(L_45);
		VirtActionInvoker0::Invoke(28 /* System.Void System.Xml.XmlTextReader::Close() */, L_45);
		ConfigurationSection_t3340 * L_46 = V_1;
		NullCheck(L_46);
		SectionInformation_t3338 * L_47 = ConfigurationSection_get_SectionInformation_m11880(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		String_t* L_48 = SectionInformation_get_ConfigSource_m12052(L_47, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_49 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_48, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_0128;
		}
	}
	{
		String_t* L_50 = Configuration_get_FilePath_m11692(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_51 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		if (L_51)
		{
			goto IL_0128;
		}
	}
	{
		ConfigurationSection_t3340 * L_52 = V_1;
		String_t* L_53 = Configuration_get_FilePath_m11692(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_54 = Path_GetDirectoryName_m12073(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		ConfigurationSection_DeserializeConfigSource_m11889(L_52, L_54, /*hidden argument*/NULL);
	}

IL_0128:
	{
		Hashtable_t714 * L_55 = (__this->___elementData_1);
		SectionInfo_t3368 * L_56 = ___config;
		ConfigurationSection_t3340 * L_57 = V_1;
		NullCheck(L_55);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_55, L_56, L_57);
		ConfigurationSection_t3340 * L_58 = V_1;
		return L_58;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.Configuration::GetSectionGroupInstance(System.Configuration.SectionGroupInfo)
extern TypeInfo* ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t3306 * Configuration_GetSectionGroupInstance_m11700 (Configuration_t3300 * __this, SectionGroupInfo_t3308 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5801);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSectionGroup_t3306 * V_0 = {0};
	{
		SectionGroupInfo_t3308 * L_0 = ___group;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Configuration.ConfigInfo::CreateInstance() */, L_0);
		V_0 = ((ConfigurationSectionGroup_t3306 *)IsInst(L_1, ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var));
		ConfigurationSectionGroup_t3306 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ConfigurationSectionGroup_t3306 * L_3 = V_0;
		SectionGroupInfo_t3308 * L_4 = ___group;
		NullCheck(L_3);
		ConfigurationSectionGroup_Initialize_m11905(L_3, __this, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		ConfigurationSectionGroup_t3306 * L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Configuration.Configuration::SetSectionXml(System.Configuration.SectionInfo,System.String)
extern "C" void Configuration_SetSectionXml_m11701 (Configuration_t3300 * __this, SectionInfo_t3368 * ___config, String_t* ___data, const MethodInfo* method)
{
	{
		Hashtable_t714 * L_0 = (__this->___elementData_1);
		SectionInfo_t3368 * L_1 = ___config;
		String_t* L_2 = ___data;
		NullCheck(L_0);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.String System.Configuration.Configuration::GetSectionXml(System.Configuration.SectionInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Configuration_GetSectionXml_m11702 (Configuration_t3300 * __this, SectionInfo_t3368 * ___config, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t714 * L_0 = (__this->___elementData_1);
		SectionInfo_t3368 * L_1 = ___config;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return ((String_t*)IsInst(L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Configuration.Configuration::Load()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigSystem_t3309_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool Configuration_Load_m11703 (Configuration_t3300 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IConfigSystem_t3309_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5798);
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5805);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t51 * V_0 = {0};
	XmlTextReader_t3348 * V_1 = {0};
	bool V_2 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = (__this->___streamName_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		V_0 = (Stream_t51 *)NULL;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		Object_t * L_2 = (__this->___system_6);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Configuration.Internal.IInternalConfigHost System.Configuration.Internal.IConfigSystem::get_Host() */, IConfigSystem_t3309_il2cpp_TypeInfo_var, L_2);
		String_t* L_4 = (__this->___streamName_2);
		NullCheck(L_3);
		Stream_t51 * L_5 = (Stream_t51 *)InterfaceFuncInvoker1< Stream_t51 *, String_t* >::Invoke(6 /* System.IO.Stream System.Configuration.Internal.IInternalConfigHost::OpenStreamForRead(System.String) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_3, L_4);
		Stream_t51 * L_6 = L_5;
		V_0 = L_6;
		V_0 = L_6;
		goto IL_003f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Object)
		{
			V_2 = 0;
			goto IL_006d;
		}

IL_003a:
		{
			; // IL_003a: leave IL_003f
		}
	} // end catch (depth: 1)

IL_003f:
	{
		Stream_t51 * L_7 = V_0;
		String_t* L_8 = (__this->___streamName_2);
		ConfigXmlTextReader_t3347 * L_9 = (ConfigXmlTextReader_t3347 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m11917(L_9, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_004c:
	try
	{ // begin try (depth: 1)
		XmlTextReader_t3348 * L_10 = V_1;
		String_t* L_11 = (__this->___streamName_2);
		Configuration_ReadConfigFile_m11704(__this, L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x6B, FINALLY_005e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			XmlTextReader_t3348 * L_12 = V_1;
			if (!L_12)
			{
				goto IL_006a;
			}
		}

IL_0064:
		{
			XmlTextReader_t3348 * L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
		}

IL_006a:
		{
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006b:
	{
		return 1;
	}

IL_006d:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void System.Configuration.Configuration::ReadConfigFile(System.Xml.XmlReader,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void Configuration_ReadConfigFile_m11704 (Configuration_t3300 * __this, XmlReader_t3372 * ___reader, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3372 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2389, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}

IL_0028:
	{
		XmlReader_t3372 * L_6 = ___reader;
		Configuration_ThrowException_m11706(__this, (String_t*) &_stringLiteral2390, L_6, /*hidden argument*/NULL);
	}

IL_0034:
	{
		XmlReader_t3372 * L_7 = ___reader;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_7);
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_0081;
	}

IL_0044:
	{
		XmlReader_t3372 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m456(NULL /*static, unused*/, L_10, (String_t*) &_stringLiteral2391, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		XmlReader_t3372 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_12);
		__this->___rootNamespace_8 = L_13;
		goto IL_0081;
	}

IL_006a:
	{
		XmlReader_t3372 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral2392, L_15, /*hidden argument*/NULL);
		XmlReader_t3372 * L_17 = ___reader;
		Configuration_ThrowException_m11706(__this, L_16, L_17, /*hidden argument*/NULL);
	}

IL_0081:
	{
		XmlReader_t3372 * L_18 = ___reader;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_18);
		if (L_19)
		{
			goto IL_0044;
		}
	}

IL_008c:
	{
		XmlReader_t3372 * L_20 = ___reader;
		NullCheck(L_20);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_20);
		XmlReader_t3372 * L_21 = ___reader;
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_21);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		XmlReader_t3372 * L_23 = ___reader;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_23);
		return;
	}

IL_00a5:
	{
		XmlReader_t3372 * L_24 = ___reader;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_24);
		XmlReader_t3372 * L_25 = ___reader;
		NullCheck(L_25);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_25);
		XmlReader_t3372 * L_26 = ___reader;
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m456(NULL /*static, unused*/, L_27, (String_t*) &_stringLiteral2393, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ec;
		}
	}
	{
		XmlReader_t3372 * L_29 = ___reader;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_29);
		if (!L_30)
		{
			goto IL_00de;
		}
	}
	{
		XmlReader_t3372 * L_31 = ___reader;
		Configuration_ThrowException_m11706(__this, (String_t*) &_stringLiteral2394, L_31, /*hidden argument*/NULL);
	}

IL_00de:
	{
		SectionGroupInfo_t3308 * L_32 = (__this->___rootGroup_5);
		String_t* L_33 = ___fileName;
		XmlReader_t3372 * L_34 = ___reader;
		NullCheck(L_32);
		VirtActionInvoker3< Configuration_t3300 *, String_t*, XmlReader_t3372 * >::Invoke(5 /* System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader) */, L_32, __this, L_33, L_34);
	}

IL_00ec:
	{
		SectionGroupInfo_t3308 * L_35 = (__this->___rootGroup_5);
		XmlReader_t3372 * L_36 = ___reader;
		NullCheck(L_35);
		SectionGroupInfo_ReadRootData_m12034(L_35, L_36, __this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.Configuration::ReadData(System.Xml.XmlReader,System.Boolean)
extern "C" void Configuration_ReadData_m11705 (Configuration_t3300 * __this, XmlReader_t3372 * ___reader, bool ___allowOverride, const MethodInfo* method)
{
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___rootGroup_5);
		XmlReader_t3372 * L_1 = ___reader;
		bool L_2 = ___allowOverride;
		NullCheck(L_0);
		VirtActionInvoker3< Configuration_t3300 *, XmlReader_t3372 *, bool >::Invoke(6 /* System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, L_0, __this, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.Configuration::ThrowException(System.String,System.Xml.XmlReader)
extern TypeInfo* IXmlLineInfo_t3377_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern "C" void Configuration_ThrowException_m11706 (Configuration_t3300 * __this, String_t* ___text, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IXmlLineInfo_t3377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5806);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* G_B2_0 = {0};
	String_t* G_B2_1 = {0};
	String_t* G_B1_0 = {0};
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = {0};
	String_t* G_B3_2 = {0};
	{
		XmlReader_t3372 * L_0 = ___reader;
		V_0 = ((Object_t *)IsInst(L_0, IXmlLineInfo_t3377_il2cpp_TypeInfo_var));
		String_t* L_1 = ___text;
		String_t* L_2 = (__this->___streamName_2);
		Object_t * L_3 = V_0;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (!L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_001f;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t3377_il2cpp_TypeInfo_var, L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0020:
	{
		ConfigurationException_t3323 * L_6 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12074(L_6, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationAllowDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllowMethodDeclarations.h"



// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationAllowExeDefinition
#include "System_Configuration_System_Configuration_ConfigurationAllow_0MethodDeclarations.h"



// System.Configuration.ConfigurationCollectionAttribute
#include "System_Configuration_System_Configuration_ConfigurationColle.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationCollectionAttribute
#include "System_Configuration_System_Configuration_ConfigurationColleMethodDeclarations.h"

// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationEleme.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationCollectionAttribute::.ctor(System.Type)
extern "C" void ConfigurationCollectionAttribute__ctor_m11707 (ConfigurationCollectionAttribute_t3312 * __this, Type_t * ___itemType, const MethodInfo* method)
{
	{
		__this->___addItemName_0 = (String_t*) &_stringLiteral2395;
		__this->___clearItemsName_1 = (String_t*) &_stringLiteral2396;
		__this->___removeItemName_2 = (String_t*) &_stringLiteral2397;
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___itemType;
		__this->___itemType_4 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_AddItemName()
extern "C" String_t* ConfigurationCollectionAttribute_get_AddItemName_m11708 (ConfigurationCollectionAttribute_t3312 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___addItemName_0);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_ClearItemsName()
extern "C" String_t* ConfigurationCollectionAttribute_get_ClearItemsName_m11709 (ConfigurationCollectionAttribute_t3312 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___clearItemsName_1);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationCollectionAttribute::get_RemoveItemName()
extern "C" String_t* ConfigurationCollectionAttribute_get_RemoveItemName_m11710 (ConfigurationCollectionAttribute_t3312 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___removeItemName_2);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationCollectionAttribute::set_CollectionType(System.Configuration.ConfigurationElementCollectionType)
extern "C" void ConfigurationCollectionAttribute_set_CollectionType_m11711 (ConfigurationCollectionAttribute_t3312 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___collectionType_3 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ElementInformation
#include "System_Configuration_System_Configuration_ElementInformation.h"
// System.Configuration.PropertyInformation
#include "System_Configuration_System_Configuration_PropertyInformatio.h"
// System.Configuration.ConfigurationLockCollection
#include "System_Configuration_System_Configuration_ConfigurationLockC.h"
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockT.h"
// System.Configuration.ConfigurationProperty
#include "System_Configuration_System_Configuration_ConfigurationPrope.h"
// System.Configuration.PropertyInformationCollection
#include "System_Configuration_System_Configuration_PropertyInformatio_1.h"
// System.Configuration.ConfigurationPropertyCollection
#include "System_Configuration_System_Configuration_ConfigurationPrope_2.h"
// System.Configuration.ElementMap
#include "System_Configuration_System_Configuration_ElementMap.h"
// System.Configuration.ConfigurationElementCollection
#include "System_Configuration_System_Configuration_ConfigurationEleme_2.h"
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigi.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriter.h"
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveM.h"
// System.Configuration.ConfigurationValidatorBase
#include "System_Configuration_System_Configuration_ConfigurationValid_0.h"
// System.Configuration.ElementInformation
#include "System_Configuration_System_Configuration_ElementInformationMethodDeclarations.h"
// System.Configuration.ConfigurationLockCollection
#include "System_Configuration_System_Configuration_ConfigurationLockCMethodDeclarations.h"
// System.Configuration.ConfigurationProperty
#include "System_Configuration_System_Configuration_ConfigurationPropeMethodDeclarations.h"
// System.Configuration.PropertyInformationCollection
#include "System_Configuration_System_Configuration_PropertyInformatio_1MethodDeclarations.h"
// System.Configuration.PropertyInformation
#include "System_Configuration_System_Configuration_PropertyInformatioMethodDeclarations.h"
// System.Configuration.ElementMap
#include "System_Configuration_System_Configuration_ElementMapMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
// System.Configuration.ConfigurationPropertyCollection
#include "System_Configuration_System_Configuration_ConfigurationPrope_2MethodDeclarations.h"
// System.Xml.XmlWriter
#include "System_Xml_System_Xml_XmlWriterMethodDeclarations.h"
// System.Configuration.ConfigurationValidatorBase
#include "System_Configuration_System_Configuration_ConfigurationValid_0MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationElement::.ctor()
extern "C" void ConfigurationElement__ctor_m11712 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationElement::get_Configuration()
extern "C" Configuration_t3300 * ConfigurationElement_get_Configuration_m11713 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		Configuration_t3300 * L_0 = (__this->____configuration_7);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Configuration(System.Configuration.Configuration)
extern "C" void ConfigurationElement_set_Configuration_m11714 (ConfigurationElement_t3318 * __this, Configuration_t3300 * ___value, const MethodInfo* method)
{
	{
		Configuration_t3300 * L_0 = ___value;
		__this->____configuration_7 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation)
extern TypeInfo* ElementInformation_t3316_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_InitFromProperty_m11715 (ConfigurationElement_t3318 * __this, PropertyInformation_t3351 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementInformation_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5808);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformation_t3351 * L_0 = ___propertyInfo;
		ElementInformation_t3316 * L_1 = (ElementInformation_t3316 *)il2cpp_codegen_object_new (ElementInformation_t3316_il2cpp_TypeInfo_var);
		ElementInformation__ctor_m11931(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->___elementInfo_6 = L_1;
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, __this);
		return;
	}
}
// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::get_ElementInformation()
extern TypeInfo* ElementInformation_t3316_il2cpp_TypeInfo_var;
extern "C" ElementInformation_t3316 * ConfigurationElement_get_ElementInformation_m11716 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementInformation_t3316_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5808);
		s_Il2CppMethodIntialized = true;
	}
	{
		ElementInformation_t3316 * L_0 = (__this->___elementInfo_6);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ElementInformation_t3316 * L_1 = (ElementInformation_t3316 *)il2cpp_codegen_object_new (ElementInformation_t3316_il2cpp_TypeInfo_var);
		ElementInformation__ctor_m11931(L_1, __this, (PropertyInformation_t3351 *)NULL, /*hidden argument*/NULL);
		__this->___elementInfo_6 = L_1;
	}

IL_0018:
	{
		ElementInformation_t3316 * L_2 = (__this->___elementInfo_6);
		return L_2;
	}
}
// System.String System.Configuration.ConfigurationElement::get_RawXml()
extern "C" String_t* ConfigurationElement_get_RawXml_m11717 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___rawXml_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_RawXml(System.String)
extern "C" void ConfigurationElement_set_RawXml_m11718 (ConfigurationElement_t3318 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___rawXml_0);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___value;
		if (!L_1)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		String_t* L_2 = ___value;
		__this->___rawXml_0 = L_2;
	}

IL_0018:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::Init()
extern "C" void ConfigurationElement_Init_m11719 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllAttributesExcept()
extern TypeInfo* ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t3317 * ConfigurationElement_get_LockAllAttributesExcept_m11720 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5809);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t3317 * L_0 = (__this->___lockAllAttributesExcept_8);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_1 = (ConfigurationLockCollection_t3317 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m11829(L_1, __this, ((int32_t)17), /*hidden argument*/NULL);
		__this->___lockAllAttributesExcept_8 = L_1;
	}

IL_0019:
	{
		ConfigurationLockCollection_t3317 * L_2 = (__this->___lockAllAttributesExcept_8);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAllElementsExcept()
extern TypeInfo* ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t3317 * ConfigurationElement_get_LockAllElementsExcept_m11721 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5809);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t3317 * L_0 = (__this->___lockAllElementsExcept_9);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_1 = (ConfigurationLockCollection_t3317 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m11829(L_1, __this, ((int32_t)18), /*hidden argument*/NULL);
		__this->___lockAllElementsExcept_9 = L_1;
	}

IL_0019:
	{
		ConfigurationLockCollection_t3317 * L_2 = (__this->___lockAllElementsExcept_9);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockAttributes()
extern TypeInfo* ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t3317 * ConfigurationElement_get_LockAttributes_m11722 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5809);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t3317 * L_0 = (__this->___lockAttributes_10);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_1 = (ConfigurationLockCollection_t3317 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m11829(L_1, __this, 1, /*hidden argument*/NULL);
		__this->___lockAttributes_10 = L_1;
	}

IL_0018:
	{
		ConfigurationLockCollection_t3317 * L_2 = (__this->___lockAttributes_10);
		return L_2;
	}
}
// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::get_LockElements()
extern TypeInfo* ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var;
extern "C" ConfigurationLockCollection_t3317 * ConfigurationElement_get_LockElements_m11723 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5809);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationLockCollection_t3317 * L_0 = (__this->___lockElements_11);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_1 = (ConfigurationLockCollection_t3317 *)il2cpp_codegen_object_new (ConfigurationLockCollection_t3317_il2cpp_TypeInfo_var);
		ConfigurationLockCollection__ctor_m11829(L_1, __this, 2, /*hidden argument*/NULL);
		__this->___lockElements_11 = L_1;
	}

IL_0018:
	{
		ConfigurationLockCollection_t3317 * L_2 = (__this->___lockElements_11);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_LockItem(System.Boolean)
extern "C" void ConfigurationElement_set_LockItem_m11724 (ConfigurationElement_t3318 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___lockItem_12 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::SetPropertyValue(System.Configuration.ConfigurationProperty,System.Object,System.Boolean)
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_SetPropertyValue_m11725 (ConfigurationElement_t3318 * __this, ConfigurationProperty_t3333 * ___prop, Object_t * ___value, bool ___ignoreLocks, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
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
		ConfigurationProperty_t3333 * L_0 = ___prop;
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		ConfigurationProperty_Validate_m11863(L_0, L_1, /*hidden argument*/NULL);
		goto IL_002f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t57 *)__exception_local);
		ConfigurationProperty_t3333 * L_2 = ___prop;
		NullCheck(L_2);
		String_t* L_3 = ConfigurationProperty_get_Name_m11855(L_2, /*hidden argument*/NULL);
		Exception_t57 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral2400, L_3, L_5, /*hidden argument*/NULL);
		Exception_t57 * L_7 = V_0;
		ConfigurationErrorsException_t3322 * L_8 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11805(L_8, L_6, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_002f;
	} // end catch (depth: 1)

IL_002f:
	{
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::GetKeyProperties()
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * ConfigurationElement_GetKeyProperties_m11726 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationPropertyCollection_t3314 * V_0 = {0};
	ConfigurationProperty_t3333 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	ConfigurationPropertyCollection_t3314 * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (__this->___keyProps_3);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationPropertyCollection_t3314 * L_1 = (__this->___keyProps_3);
		return L_1;
	}

IL_0012:
	{
		ConfigurationPropertyCollection_t3314 * L_2 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationPropertyCollection_t3314 * L_3 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_3);
		V_2 = L_4;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0029:
		{
			Object_t * L_5 = V_2;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_5);
			V_1 = ((ConfigurationProperty_t3333 *)Castclass(L_6, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationProperty_t3333 * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = ConfigurationProperty_get_IsKey_m11852(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			ConfigurationPropertyCollection_t3314 * L_9 = V_0;
			ConfigurationProperty_t3333 * L_10 = V_1;
			NullCheck(L_9);
			ConfigurationPropertyCollection_Add_m11875(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0047:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0029;
			}
		}

IL_0052:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_0062;
			}
		}

IL_0061:
		{
			IL2CPP_END_FINALLY(87)
		}

IL_0062:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0069:
	{
		ConfigurationPropertyCollection_t3314 * L_16 = V_0;
		ConfigurationPropertyCollection_t3314 * L_17 = L_16;
		V_4 = L_17;
		__this->___keyProps_3 = L_17;
		ConfigurationPropertyCollection_t3314 * L_18 = V_4;
		return L_18;
	}
}
// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::GetDefaultCollection()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var;
extern "C" ConfigurationElementCollection_t3315 * ConfigurationElement_GetDefaultCollection_m11727 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5812);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t3333 * V_0 = {0};
	ConfigurationProperty_t3333 * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationElementCollection_t3315 * L_0 = (__this->___defaultCollection_4);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationElementCollection_t3315 * L_1 = (__this->___defaultCollection_4);
		return L_1;
	}

IL_0012:
	{
		V_0 = (ConfigurationProperty_t3333 *)NULL;
		ConfigurationPropertyCollection_t3314 * L_2 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_0025:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_1 = ((ConfigurationProperty_t3333 *)Castclass(L_5, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationProperty_t3333 * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = ConfigurationProperty_get_IsDefaultCollection_m11854(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			ConfigurationProperty_t3333 * L_8 = V_1;
			V_0 = L_8;
			goto IL_004e;
		}

IL_0043:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0025;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_2;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
			{
				goto IL_005e;
			}
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(83)
		}

IL_005e:
		{
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0065:
	{
		ConfigurationProperty_t3333 * L_14 = V_0;
		if (!L_14)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationProperty_t3333 * L_15 = V_0;
		Object_t * L_16 = ConfigurationElement_get_Item_m11728(__this, L_15, /*hidden argument*/NULL);
		__this->___defaultCollection_4 = ((ConfigurationElementCollection_t3315 *)IsInst(L_16, ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var));
	}

IL_007d:
	{
		ConfigurationElementCollection_t3315 * L_17 = (__this->___defaultCollection_4);
		return L_17;
	}
}
// System.Object System.Configuration.ConfigurationElement::get_Item(System.Configuration.ConfigurationProperty)
extern "C" Object_t * ConfigurationElement_get_Item_m11728 (ConfigurationElement_t3318 * __this, ConfigurationProperty_t3333 * ___property, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m11855(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ConfigurationElement_get_Item_m11730(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Item(System.Configuration.ConfigurationProperty,System.Object)
extern "C" void ConfigurationElement_set_Item_m11729 (ConfigurationElement_t3318 * __this, ConfigurationProperty_t3333 * ___property, Object_t * ___value, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = ___property;
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m11855(L_0, /*hidden argument*/NULL);
		Object_t * L_2 = ___value;
		ConfigurationElement_set_Item_m11731(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigurationElement::get_Item(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1450_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationElement_get_Item_m11730 (ConfigurationElement_t3318 * __this, String_t* ___property_name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InvalidOperationException_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2518);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	{
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___property_name;
		NullCheck(L_1);
		PropertyInformation_t3351 * L_3 = PropertyInformationCollection_get_Item_m11990(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t3351 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___property_name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2398, L_5, (String_t*) &_stringLiteral2399, /*hidden argument*/NULL);
		InvalidOperationException_t1450 * L_7 = (InvalidOperationException_t1450 *)il2cpp_codegen_object_new (InvalidOperationException_t1450_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		PropertyInformation_t3351 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = PropertyInformation_get_Value_m11977(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void System.Configuration.ConfigurationElement::set_Item(System.String,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1450_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_set_Item_m11731 (ConfigurationElement_t3318 * __this, String_t* ___property_name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InvalidOperationException_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2518);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	{
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___property_name;
		NullCheck(L_1);
		PropertyInformation_t3351 * L_3 = PropertyInformationCollection_get_Item_m11990(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t3351 * L_4 = V_0;
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_5 = ___property_name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2398, L_5, (String_t*) &_stringLiteral2399, /*hidden argument*/NULL);
		InvalidOperationException_t1450 * L_7 = (InvalidOperationException_t1450 *)il2cpp_codegen_object_new (InvalidOperationException_t1450_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002e:
	{
		PropertyInformation_t3351 * L_8 = V_0;
		NullCheck(L_8);
		ConfigurationProperty_t3333 * L_9 = PropertyInformation_get_Property_m11984(L_8, /*hidden argument*/NULL);
		Object_t * L_10 = ___value;
		ConfigurationElement_SetPropertyValue_m11725(__this, L_9, L_10, 0, /*hidden argument*/NULL);
		PropertyInformation_t3351 * L_11 = V_0;
		Object_t * L_12 = ___value;
		NullCheck(L_11);
		PropertyInformation_set_Value_m11978(L_11, L_12, /*hidden argument*/NULL);
		__this->___modified_1 = 1;
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties()
extern TypeInfo* ElementMap_t3313_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * ConfigurationElement_get_Properties_m11732 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementMap_t3313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5813);
		s_Il2CppMethodIntialized = true;
	}
	{
		ElementMap_t3313 * L_0 = (__this->___map_2);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t3313_il2cpp_TypeInfo_var);
		ElementMap_t3313 * L_2 = ElementMap_GetMap_m11756(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___map_2 = L_2;
	}

IL_001c:
	{
		ElementMap_t3313 * L_3 = (__this->___map_2);
		NullCheck(L_3);
		ConfigurationPropertyCollection_t3314 * L_4 = ElementMap_get_Properties_m11757(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_Equals_m11733 (ConfigurationElement_t3318 * __this, Object_t * ___compareTo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	ConfigurationProperty_t3333 * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___compareTo;
		V_0 = ((ConfigurationElement_t3318 *)IsInst(L_0, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_1 = V_0;
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
		Type_t * L_2 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m4220(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		ConfigurationPropertyCollection_t3314 * L_5 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_5);
		V_2 = L_6;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005e;
		}

IL_0033:
		{
			Object_t * L_7 = V_2;
			NullCheck(L_7);
			Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_7);
			V_1 = ((ConfigurationProperty_t3333 *)Castclass(L_8, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationProperty_t3333 * L_9 = V_1;
			Object_t * L_10 = ConfigurationElement_get_Item_m11728(__this, L_9, /*hidden argument*/NULL);
			ConfigurationElement_t3318 * L_11 = V_0;
			ConfigurationProperty_t3333 * L_12 = V_1;
			NullCheck(L_11);
			Object_t * L_13 = ConfigurationElement_get_Item_m11728(L_11, L_12, /*hidden argument*/NULL);
			bool L_14 = Object_Equals_m7546(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
			if (L_14)
			{
				goto IL_005e;
			}
		}

IL_0057:
		{
			V_3 = 0;
			IL2CPP_LEAVE(0x85, FINALLY_006e);
		}

IL_005e:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0033;
			}
		}

IL_0069:
		{
			IL2CPP_LEAVE(0x83, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_4 = ((Object_t *)IsInst(L_17, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_4;
			if (L_18)
			{
				goto IL_007b;
			}
		}

IL_007a:
		{
			IL2CPP_END_FINALLY(110)
		}

IL_007b:
		{
			Object_t * L_19 = V_4;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(110)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0083:
	{
		return 1;
	}

IL_0085:
	{
		bool L_20 = V_3;
		return L_20;
	}
}
// System.Int32 System.Configuration.ConfigurationElement::GetHashCode()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationElement_GetHashCode_m11734 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	ConfigurationProperty_t3333 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, __this);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_0);
		V_3 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0013:
		{
			Object_t * L_2 = V_3;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_2);
			V_2 = ((ConfigurationProperty_t3333 *)Castclass(L_3, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationProperty_t3333 * L_4 = V_2;
			Object_t * L_5 = ConfigurationElement_get_Item_m11728(__this, L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			Object_t * L_6 = V_1;
			if (L_6)
			{
				goto IL_0032;
			}
		}

IL_002d:
		{
			goto IL_003b;
		}

IL_0032:
		{
			int32_t L_7 = V_0;
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
			V_0 = ((int32_t)((int32_t)L_7+(int32_t)L_9));
		}

IL_003b:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0013;
			}
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x60, FINALLY_004b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004b;
	}

FINALLY_004b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_3;
			V_4 = ((Object_t *)IsInst(L_12, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_4;
			if (L_13)
			{
				goto IL_0058;
			}
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(75)
		}

IL_0058:
		{
			Object_t * L_14 = V_4;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(75)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(75)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasValues()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_HasValues_m11735 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0016:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t3351 *)Castclass(L_4, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = PropertyInformation_get_ValueOrigin_m11981(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0034;
			}
		}

IL_002d:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x58, FINALLY_0044);
		}

IL_0034:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0016;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_3 = ((Object_t *)IsInst(L_9, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_10 = V_3;
			if (L_10)
			{
				goto IL_004f;
			}
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(68)
		}

IL_004f:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0056:
	{
		return 0;
	}

IL_0058:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_HasLocalModifications_m11736 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0016:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t3351 *)Castclass(L_4, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6 = PropertyInformation_get_ValueOrigin_m11981(L_5, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_6) == ((uint32_t)2))))
			{
				goto IL_0040;
			}
		}

IL_002e:
		{
			PropertyInformation_t3351 * L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = PropertyInformation_get_IsModified_m11972(L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			V_2 = 1;
			IL2CPP_LEAVE(0x64, FINALLY_0050);
		}

IL_0040:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0016;
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
			Object_t * L_11 = V_1;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
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
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0062:
	{
		return 0;
	}

IL_0064:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean)
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationSection_t3340_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_DeserializeElement_m11737 (ConfigurationElement_t3318 * __this, XmlReader_t3372 * ___reader, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationSection_t3340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5802);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t714 * V_0 = {0};
	PropertyInformation_t3351 * V_1 = {0};
	String_t* V_2 = {0};
	Exception_t57 * V_3 = {0};
	String_t* V_4 = {0};
	int32_t V_5 = 0;
	PropertyInformation_t3351 * V_6 = {0};
	ConfigurationElementCollection_t3315 * V_7 = {0};
	ConfigurationElement_t3318 * V_8 = {0};
	PropertyInformation_t3351 * V_9 = {0};
	Object_t * V_10 = {0};
	PropertyInformation_t3351 * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Hashtable_t714 * L_0 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_1);
		goto IL_0226;
	}

IL_0012:
	{
		ElementInformation_t3316 * L_2 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		PropertyInformationCollection_t3352 * L_3 = ElementInformation_get_Properties_m11932(L_2, /*hidden argument*/NULL);
		XmlReader_t3372 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
		NullCheck(L_3);
		PropertyInformation_t3351 * L_6 = PropertyInformationCollection_get_Item_m11990(L_3, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		PropertyInformation_t3351 * L_7 = V_1;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		bool L_8 = ___serializeCollectionKey;
		if (!L_8)
		{
			goto IL_0198;
		}
	}
	{
		PropertyInformation_t3351 * L_9 = V_1;
		NullCheck(L_9);
		bool L_10 = PropertyInformation_get_IsKey_m11971(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0198;
		}
	}

IL_0040:
	{
		XmlReader_t3372 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m456(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral2401, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_14 = ConfigurationElement_get_LockAllAttributesExcept_m11720(__this, /*hidden argument*/NULL);
		XmlReader_t3372 * L_15 = ___reader;
		NullCheck(L_15);
		String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_15);
		NullCheck(L_14);
		ConfigurationLockCollection_SetFromList_m11835(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_006b:
	{
		XmlReader_t3372 * L_17 = ___reader;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m456(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral2402, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0096;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_20 = ConfigurationElement_get_LockAllElementsExcept_m11721(__this, /*hidden argument*/NULL);
		XmlReader_t3372 * L_21 = ___reader;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_21);
		NullCheck(L_20);
		ConfigurationLockCollection_SetFromList_m11835(L_20, L_22, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_0096:
	{
		XmlReader_t3372 * L_23 = ___reader;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_25 = String_op_Equality_m456(NULL /*static, unused*/, L_24, (String_t*) &_stringLiteral2403, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c1;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_26 = ConfigurationElement_get_LockAttributes_m11722(__this, /*hidden argument*/NULL);
		XmlReader_t3372 * L_27 = ___reader;
		NullCheck(L_27);
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_27);
		NullCheck(L_26);
		ConfigurationLockCollection_SetFromList_m11835(L_26, L_28, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_00c1:
	{
		XmlReader_t3372 * L_29 = ___reader;
		NullCheck(L_29);
		String_t* L_30 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m456(NULL /*static, unused*/, L_30, (String_t*) &_stringLiteral2404, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00ec;
		}
	}
	{
		ConfigurationLockCollection_t3317 * L_32 = ConfigurationElement_get_LockElements_m11723(__this, /*hidden argument*/NULL);
		XmlReader_t3372 * L_33 = ___reader;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_33);
		NullCheck(L_32);
		ConfigurationLockCollection_SetFromList_m11835(L_32, L_34, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_00ec:
	{
		XmlReader_t3372 * L_35 = ___reader;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m456(NULL /*static, unused*/, L_36, (String_t*) &_stringLiteral2405, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0121;
		}
	}
	{
		XmlReader_t3372 * L_38 = ___reader;
		NullCheck(L_38);
		String_t* L_39 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_38);
		NullCheck(L_39);
		String_t* L_40 = String_ToLowerInvariant_m12075(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_41 = String_op_Equality_m456(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral105, /*hidden argument*/NULL);
		ConfigurationElement_set_LockItem_m11724(__this, L_41, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_0121:
	{
		XmlReader_t3372 * L_42 = ___reader;
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_op_Equality_m456(NULL /*static, unused*/, L_43, (String_t*) &_stringLiteral2391, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_013b;
		}
	}
	{
		goto IL_0193;
	}

IL_013b:
	{
		if (!((ConfigurationSection_t3340 *)IsInst(__this, ConfigurationSection_t3340_il2cpp_TypeInfo_var)))
		{
			goto IL_0160;
		}
	}
	{
		XmlReader_t3372 * L_45 = ___reader;
		NullCheck(L_45);
		String_t* L_46 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_45);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_47 = String_op_Equality_m456(NULL /*static, unused*/, L_46, (String_t*) &_stringLiteral2406, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0160;
		}
	}
	{
		goto IL_0193;
	}

IL_0160:
	{
		XmlReader_t3372 * L_48 = ___reader;
		NullCheck(L_48);
		String_t* L_49 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_48);
		XmlReader_t3372 * L_50 = ___reader;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_50);
		bool L_52 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(10 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String) */, __this, L_49, L_51);
		if (L_52)
		{
			goto IL_0193;
		}
	}
	{
		XmlReader_t3372 * L_53 = ___reader;
		NullCheck(L_53);
		String_t* L_54 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_53);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2407, L_54, (String_t*) &_stringLiteral2408, /*hidden argument*/NULL);
		XmlReader_t3372 * L_56 = ___reader;
		ConfigurationErrorsException_t3322 * L_57 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_57, L_55, L_56, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_57);
	}

IL_0193:
	{
		goto IL_0226;
	}

IL_0198:
	{
		Hashtable_t714 * L_58 = V_0;
		PropertyInformation_t3351 * L_59 = V_1;
		NullCheck(L_58);
		bool L_60 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_58, L_59);
		if (!L_60)
		{
			goto IL_01c0;
		}
	}
	{
		PropertyInformation_t3351 * L_61 = V_1;
		NullCheck(L_61);
		String_t* L_62 = PropertyInformation_get_Name_m11975(L_61, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2409, L_62, (String_t*) &_stringLiteral2410, /*hidden argument*/NULL);
		XmlReader_t3372 * L_64 = ___reader;
		ConfigurationErrorsException_t3322 * L_65 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_65, L_63, L_64, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_65);
	}

IL_01c0:
	{
		V_2 = (String_t*)NULL;
	}

IL_01c2:
	try
	{ // begin try (depth: 1)
		XmlReader_t3372 * L_66 = ___reader;
		NullCheck(L_66);
		String_t* L_67 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_66);
		V_2 = L_67;
		PropertyInformation_t3351 * L_68 = V_1;
		NullCheck(L_68);
		ConfigurationProperty_t3333 * L_69 = PropertyInformation_get_Property_m11984(L_68, /*hidden argument*/NULL);
		String_t* L_70 = V_2;
		ConfigurationElement_ValidateValue_m11753(__this, L_69, L_70, /*hidden argument*/NULL);
		PropertyInformation_t3351 * L_71 = V_1;
		String_t* L_72 = V_2;
		NullCheck(L_71);
		PropertyInformation_SetStringValue_m11983(L_71, L_72, /*hidden argument*/NULL);
		goto IL_0219;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01e2;
		if(il2cpp_codegen_class_is_assignable_from (ConfigurationException_t3323_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01ea;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_01f2;
		throw e;
	}

CATCH_01e2:
	{ // begin catch(System.Configuration.ConfigurationErrorsException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0219;
	} // end catch (depth: 1)

CATCH_01ea:
	{ // begin catch(System.Configuration.ConfigurationException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_0219;
	} // end catch (depth: 1)

CATCH_01f2:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t57 *)__exception_local);
		PropertyInformation_t3351 * L_73 = V_1;
		NullCheck(L_73);
		String_t* L_74 = PropertyInformation_get_Name_m11975(L_73, /*hidden argument*/NULL);
		Exception_t57 * L_75 = V_3;
		NullCheck(L_75);
		String_t* L_76 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_75);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_77 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral2400, L_74, L_76, /*hidden argument*/NULL);
		V_4 = L_77;
		String_t* L_78 = V_4;
		XmlReader_t3372 * L_79 = ___reader;
		ConfigurationErrorsException_t3322 * L_80 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_80, L_78, L_79, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_80);
		goto IL_0219;
	} // end catch (depth: 1)

IL_0219:
	{
		Hashtable_t714 * L_81 = V_0;
		PropertyInformation_t3351 * L_82 = V_1;
		PropertyInformation_t3351 * L_83 = V_1;
		NullCheck(L_83);
		String_t* L_84 = PropertyInformation_get_Name_m11975(L_83, /*hidden argument*/NULL);
		NullCheck(L_81);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_81, L_82, L_84);
	}

IL_0226:
	{
		XmlReader_t3372 * L_85 = ___reader;
		NullCheck(L_85);
		bool L_86 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_85);
		if (L_86)
		{
			goto IL_0012;
		}
	}
	{
		XmlReader_t3372 * L_87 = ___reader;
		NullCheck(L_87);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_87);
		XmlReader_t3372 * L_88 = ___reader;
		NullCheck(L_88);
		bool L_89 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_88);
		if (!L_89)
		{
			goto IL_024e;
		}
	}
	{
		XmlReader_t3372 * L_90 = ___reader;
		NullCheck(L_90);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_90);
		goto IL_03a5;
	}

IL_024e:
	{
		XmlReader_t3372 * L_91 = ___reader;
		NullCheck(L_91);
		int32_t L_92 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_91);
		V_5 = L_92;
		XmlReader_t3372 * L_93 = ___reader;
		NullCheck(L_93);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_93);
		XmlReader_t3372 * L_94 = ___reader;
		NullCheck(L_94);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_94);
	}

IL_0263:
	{
		XmlReader_t3372 * L_95 = ___reader;
		NullCheck(L_95);
		int32_t L_96 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_95);
		if ((((int32_t)L_96) == ((int32_t)1)))
		{
			goto IL_027a;
		}
	}
	{
		XmlReader_t3372 * L_97 = ___reader;
		NullCheck(L_97);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_97);
		goto IL_0398;
	}

IL_027a:
	{
		ElementInformation_t3316 * L_98 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_98);
		PropertyInformationCollection_t3352 * L_99 = ElementInformation_get_Properties_m11932(L_98, /*hidden argument*/NULL);
		XmlReader_t3372 * L_100 = ___reader;
		NullCheck(L_100);
		String_t* L_101 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_100);
		NullCheck(L_99);
		PropertyInformation_t3351 * L_102 = PropertyInformationCollection_get_Item_m11990(L_99, L_101, /*hidden argument*/NULL);
		V_6 = L_102;
		PropertyInformation_t3351 * L_103 = V_6;
		if (!L_103)
		{
			goto IL_02ab;
		}
	}
	{
		bool L_104 = ___serializeCollectionKey;
		if (!L_104)
		{
			goto IL_030c;
		}
	}
	{
		PropertyInformation_t3351 * L_105 = V_6;
		NullCheck(L_105);
		bool L_106 = PropertyInformation_get_IsKey_m11971(L_105, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_030c;
		}
	}

IL_02ab:
	{
		XmlReader_t3372 * L_107 = ___reader;
		NullCheck(L_107);
		String_t* L_108 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_107);
		XmlReader_t3372 * L_109 = ___reader;
		bool L_110 = (bool)VirtFuncInvoker2< bool, String_t*, XmlReader_t3372 * >::Invoke(11 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader) */, __this, L_108, L_109);
		if (L_110)
		{
			goto IL_0307;
		}
	}
	{
		PropertyInformation_t3351 * L_111 = V_6;
		if (L_111)
		{
			goto IL_02eb;
		}
	}
	{
		ConfigurationElementCollection_t3315 * L_112 = ConfigurationElement_GetDefaultCollection_m11727(__this, /*hidden argument*/NULL);
		V_7 = L_112;
		ConfigurationElementCollection_t3315 * L_113 = V_7;
		if (!L_113)
		{
			goto IL_02eb;
		}
	}
	{
		ConfigurationElementCollection_t3315 * L_114 = V_7;
		XmlReader_t3372 * L_115 = ___reader;
		NullCheck(L_115);
		String_t* L_116 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_115);
		XmlReader_t3372 * L_117 = ___reader;
		NullCheck(L_114);
		bool L_118 = (bool)VirtFuncInvoker2< bool, String_t*, XmlReader_t3372 * >::Invoke(11 /* System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader) */, L_114, L_116, L_117);
		if (!L_118)
		{
			goto IL_02eb;
		}
	}
	{
		goto IL_0398;
	}

IL_02eb:
	{
		XmlReader_t3372 * L_119 = ___reader;
		NullCheck(L_119);
		String_t* L_120 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_119);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_121 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2411, L_120, (String_t*) &_stringLiteral2408, /*hidden argument*/NULL);
		XmlReader_t3372 * L_122 = ___reader;
		ConfigurationErrorsException_t3322 * L_123 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_123, L_121, L_122, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_123);
	}

IL_0307:
	{
		goto IL_0398;
	}

IL_030c:
	{
		PropertyInformation_t3351 * L_124 = V_6;
		NullCheck(L_124);
		bool L_125 = PropertyInformation_get_IsElement_m11980(L_124, /*hidden argument*/NULL);
		if (L_125)
		{
			goto IL_0334;
		}
	}
	{
		PropertyInformation_t3351 * L_126 = V_6;
		NullCheck(L_126);
		String_t* L_127 = PropertyInformation_get_Name_m11975(L_126, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_128 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2398, L_127, (String_t*) &_stringLiteral2412, /*hidden argument*/NULL);
		ConfigurationException_t3323 * L_129 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_129, L_128, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_129);
	}

IL_0334:
	{
		Hashtable_t714 * L_130 = V_0;
		PropertyInformation_t3351 * L_131 = V_6;
		NullCheck(L_130);
		bool L_132 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_130, L_131);
		if (!L_132)
		{
			goto IL_035e;
		}
	}
	{
		PropertyInformation_t3351 * L_133 = V_6;
		NullCheck(L_133);
		String_t* L_134 = PropertyInformation_get_Name_m11975(L_133, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_135 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2413, L_134, (String_t*) &_stringLiteral2414, /*hidden argument*/NULL);
		XmlReader_t3372 * L_136 = ___reader;
		ConfigurationErrorsException_t3322 * L_137 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_137, L_135, L_136, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_137);
	}

IL_035e:
	{
		PropertyInformation_t3351 * L_138 = V_6;
		NullCheck(L_138);
		Object_t * L_139 = PropertyInformation_get_Value_m11977(L_138, /*hidden argument*/NULL);
		V_8 = ((ConfigurationElement_t3318 *)Castclass(L_139, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_140 = V_8;
		XmlReader_t3372 * L_141 = ___reader;
		bool L_142 = ___serializeCollectionKey;
		NullCheck(L_140);
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_140, L_141, L_142);
		Hashtable_t714 * L_143 = V_0;
		PropertyInformation_t3351 * L_144 = V_6;
		PropertyInformation_t3351 * L_145 = V_6;
		NullCheck(L_145);
		String_t* L_146 = PropertyInformation_get_Name_m11975(L_145, /*hidden argument*/NULL);
		NullCheck(L_143);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_143, L_144, L_146);
		int32_t L_147 = V_5;
		XmlReader_t3372 * L_148 = ___reader;
		NullCheck(L_148);
		int32_t L_149 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_148);
		if ((!(((uint32_t)L_147) == ((uint32_t)L_149))))
		{
			goto IL_0398;
		}
	}
	{
		XmlReader_t3372 * L_150 = ___reader;
		NullCheck(L_150);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_150);
	}

IL_0398:
	{
		int32_t L_151 = V_5;
		XmlReader_t3372 * L_152 = ___reader;
		NullCheck(L_152);
		int32_t L_153 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.Xml.XmlReader::get_Depth() */, L_152);
		if ((((int32_t)L_151) < ((int32_t)L_153)))
		{
			goto IL_0263;
		}
	}

IL_03a5:
	{
		__this->___modified_1 = 0;
		ElementInformation_t3316 * L_154 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_154);
		PropertyInformationCollection_t3352 * L_155 = ElementInformation_get_Properties_m11932(L_154, /*hidden argument*/NULL);
		NullCheck(L_155);
		Object_t * L_156 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_155);
		V_10 = L_156;
	}

IL_03be:
	try
	{ // begin try (depth: 1)
		{
			goto IL_044e;
		}

IL_03c3:
		{
			Object_t * L_157 = V_10;
			NullCheck(L_157);
			Object_t * L_158 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_157);
			V_9 = ((PropertyInformation_t3351 *)Castclass(L_158, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_159 = V_9;
			NullCheck(L_159);
			String_t* L_160 = PropertyInformation_get_Name_m11975(L_159, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_161 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_160, /*hidden argument*/NULL);
			if (L_161)
			{
				goto IL_044e;
			}
		}

IL_03e2:
		{
			PropertyInformation_t3351 * L_162 = V_9;
			NullCheck(L_162);
			bool L_163 = PropertyInformation_get_IsRequired_m11974(L_162, /*hidden argument*/NULL);
			if (!L_163)
			{
				goto IL_044e;
			}
		}

IL_03ee:
		{
			Hashtable_t714 * L_164 = V_0;
			PropertyInformation_t3351 * L_165 = V_9;
			NullCheck(L_164);
			bool L_166 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_164, L_165);
			if (L_166)
			{
				goto IL_044e;
			}
		}

IL_03fb:
		{
			ElementInformation_t3316 * L_167 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
			NullCheck(L_167);
			PropertyInformationCollection_t3352 * L_168 = ElementInformation_get_Properties_m11932(L_167, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_169 = V_9;
			NullCheck(L_169);
			String_t* L_170 = PropertyInformation_get_Name_m11975(L_169, /*hidden argument*/NULL);
			NullCheck(L_168);
			PropertyInformation_t3351 * L_171 = PropertyInformationCollection_get_Item_m11990(L_168, L_170, /*hidden argument*/NULL);
			V_11 = L_171;
			PropertyInformation_t3351 * L_172 = V_11;
			if (L_172)
			{
				goto IL_044e;
			}
		}

IL_041b:
		{
			PropertyInformation_t3351 * L_173 = V_9;
			NullCheck(L_173);
			String_t* L_174 = PropertyInformation_get_Name_m11975(L_173, /*hidden argument*/NULL);
			Object_t * L_175 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(12 /* System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String) */, __this, L_174);
			V_12 = L_175;
			Object_t * L_176 = V_12;
			PropertyInformation_t3351 * L_177 = V_9;
			NullCheck(L_177);
			Object_t * L_178 = PropertyInformation_get_DefaultValue_m11970(L_177, /*hidden argument*/NULL);
			bool L_179 = Object_Equals_m7546(NULL /*static, unused*/, L_176, L_178, /*hidden argument*/NULL);
			if (L_179)
			{
				goto IL_044e;
			}
		}

IL_043d:
		{
			PropertyInformation_t3351 * L_180 = V_9;
			Object_t * L_181 = V_12;
			NullCheck(L_180);
			PropertyInformation_set_Value_m11978(L_180, L_181, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_182 = V_9;
			NullCheck(L_182);
			PropertyInformation_set_IsModified_m11973(L_182, 0, /*hidden argument*/NULL);
		}

IL_044e:
		{
			Object_t * L_183 = V_10;
			NullCheck(L_183);
			bool L_184 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_183);
			if (L_184)
			{
				goto IL_03c3;
			}
		}

IL_045a:
		{
			IL2CPP_LEAVE(0x475, FINALLY_045f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_045f;
	}

FINALLY_045f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_185 = V_10;
			V_13 = ((Object_t *)IsInst(L_185, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_186 = V_13;
			if (L_186)
			{
				goto IL_046d;
			}
		}

IL_046c:
		{
			IL2CPP_END_FINALLY(1119)
		}

IL_046d:
		{
			Object_t * L_187 = V_13;
			NullCheck(L_187);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_187);
			IL2CPP_END_FINALLY(1119)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1119)
	{
		IL2CPP_JUMP_TBL(0x475, IL_0475)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0475:
	{
		VirtActionInvoker0::Invoke(14 /* System.Void System.Configuration.ConfigurationElement::PostDeserialize() */, __this);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedAttribute_m11738 (ConfigurationElement_t3318 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern "C" bool ConfigurationElement_OnDeserializeUnrecognizedElement_m11739 (ConfigurationElement_t3318 * __this, String_t* ___element, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.ConfigurationElement::OnRequiredPropertyNotFound(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationElement_OnRequiredPropertyNotFound_m11740 (ConfigurationElement_t3318 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2415, L_0, (String_t*) &_stringLiteral2416, /*hidden argument*/NULL);
		ConfigurationErrorsException_t3322 * L_2 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter)
extern "C" void ConfigurationElement_PreSerialize_m11741 (ConfigurationElement_t3318 * __this, XmlWriter_t3373 * ___writer, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::PostDeserialize()
extern "C" void ConfigurationElement_PostDeserialize_m11742 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::InitializeDefault()
extern "C" void ConfigurationElement_InitializeDefault_m11743 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::IsModified()
extern "C" bool ConfigurationElement_IsModified_m11744 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_1);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::SetReadOnly()
extern "C" void ConfigurationElement_SetReadOnly_m11745 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		__this->___readOnly_5 = 1;
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::IsReadOnly()
extern "C" bool ConfigurationElement_IsReadOnly_m11746 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___readOnly_5);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElement_Reset_m11747 (ConfigurationElement_t3318 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___parentElement;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ElementInformation_t3316 * L_1 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_2 = ___parentElement;
		NullCheck(L_2);
		ElementInformation_t3316 * L_3 = ConfigurationElement_get_ElementInformation_m11716(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ElementInformation_Reset_m11933(L_1, L_3, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		VirtActionInvoker0::Invoke(15 /* System.Void System.Configuration.ConfigurationElement::InitializeDefault() */, __this);
	}

IL_0022:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElement::ResetModified()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_ResetModified_m11748 (ConfigurationElement_t3318 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___modified_1 = 0;
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_001d:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_0 = ((PropertyInformation_t3351 *)Castclass(L_4, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_5 = V_0;
			NullCheck(L_5);
			PropertyInformation_set_IsModified_m11973(L_5, 0, /*hidden argument*/NULL);
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_001d;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_2 = ((Object_t *)IsInst(L_8, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_2;
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_10 = V_2;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0052:
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_SerializeElement_m11749 (ConfigurationElement_t3318 * __this, XmlWriter_t3373 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationPropertyCollection_t3314 * V_0 = {0};
	ConfigurationProperty_t3333 * V_1 = {0};
	Object_t * V_2 = {0};
	bool V_3 = false;
	PropertyInformation_t3351 * V_4 = {0};
	Object_t * V_5 = {0};
	PropertyInformation_t3351 * V_6 = {0};
	Object_t * V_7 = {0};
	ConfigurationElement_t3318 * V_8 = {0};
	Object_t * V_9 = {0};
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B30_0 = 0;
	{
		XmlWriter_t3373 * L_0 = ___writer;
		VirtActionInvoker1< XmlWriter_t3373 * >::Invoke(13 /* System.Void System.Configuration.ConfigurationElement::PreSerialize(System.Xml.XmlWriter) */, __this, L_0);
		bool L_1 = ___serializeCollectionKey;
		if (!L_1)
		{
			goto IL_0079;
		}
	}
	{
		ConfigurationPropertyCollection_t3314 * L_2 = ConfigurationElement_GetKeyProperties_m11726(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationPropertyCollection_t3314 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_3);
		V_2 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0020:
		{
			Object_t * L_5 = V_2;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_5);
			V_1 = ((ConfigurationProperty_t3333 *)Castclass(L_6, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			XmlWriter_t3373 * L_7 = ___writer;
			ConfigurationProperty_t3333 * L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = ConfigurationProperty_get_Name_m11855(L_8, /*hidden argument*/NULL);
			ConfigurationProperty_t3333 * L_10 = V_1;
			ConfigurationProperty_t3333 * L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = ConfigurationProperty_get_Name_m11855(L_11, /*hidden argument*/NULL);
			Object_t * L_13 = ConfigurationElement_get_Item_m11730(__this, L_12, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_14 = ConfigurationProperty_ConvertToString_m11859(L_10, L_13, /*hidden argument*/NULL);
			NullCheck(L_7);
			XmlWriter_WriteAttributeString_m12077(L_7, L_9, L_14, /*hidden argument*/NULL);
		}

IL_004a:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0020;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_9 = ((Object_t *)IsInst(L_17, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_9;
			if (L_18)
			{
				goto IL_0067;
			}
		}

IL_0066:
		{
			IL2CPP_END_FINALLY(90)
		}

IL_0067:
		{
			Object_t * L_19 = V_9;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_006f:
	{
		ConfigurationPropertyCollection_t3314 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count() */, L_20);
		return ((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
	}

IL_0079:
	{
		V_3 = 0;
		ElementInformation_t3316 * L_22 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		PropertyInformationCollection_t3352 * L_23 = ElementInformation_get_Properties_m11932(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_23);
		V_5 = L_24;
	}

IL_008d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00eb;
		}

IL_0092:
		{
			Object_t * L_25 = V_5;
			NullCheck(L_25);
			Object_t * L_26 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_25);
			V_4 = ((PropertyInformation_t3351 *)Castclass(L_26, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_27 = V_4;
			NullCheck(L_27);
			bool L_28 = PropertyInformation_get_IsElement_m11980(L_27, /*hidden argument*/NULL);
			if (L_28)
			{
				goto IL_00b8;
			}
		}

IL_00ac:
		{
			PropertyInformation_t3351 * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = PropertyInformation_get_ValueOrigin_m11981(L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00bd;
			}
		}

IL_00b8:
		{
			goto IL_00eb;
		}

IL_00bd:
		{
			PropertyInformation_t3351 * L_31 = V_4;
			NullCheck(L_31);
			Object_t * L_32 = PropertyInformation_get_Value_m11977(L_31, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_33 = V_4;
			NullCheck(L_33);
			Object_t * L_34 = PropertyInformation_get_DefaultValue_m11970(L_33, /*hidden argument*/NULL);
			bool L_35 = Object_Equals_m7546(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
			if (L_35)
			{
				goto IL_00eb;
			}
		}

IL_00d5:
		{
			XmlWriter_t3373 * L_36 = ___writer;
			PropertyInformation_t3351 * L_37 = V_4;
			NullCheck(L_37);
			String_t* L_38 = PropertyInformation_get_Name_m11975(L_37, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = PropertyInformation_GetStringValue_m11982(L_39, /*hidden argument*/NULL);
			NullCheck(L_36);
			XmlWriter_WriteAttributeString_m12077(L_36, L_38, L_40, /*hidden argument*/NULL);
			V_3 = 1;
		}

IL_00eb:
		{
			Object_t * L_41 = V_5;
			NullCheck(L_41);
			bool L_42 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0092;
			}
		}

IL_00f7:
		{
			IL2CPP_LEAVE(0x112, FINALLY_00fc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00fc;
	}

FINALLY_00fc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_43 = V_5;
			V_10 = ((Object_t *)IsInst(L_43, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_44 = V_10;
			if (L_44)
			{
				goto IL_010a;
			}
		}

IL_0109:
		{
			IL2CPP_END_FINALLY(252)
		}

IL_010a:
		{
			Object_t * L_45 = V_10;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_45);
			IL2CPP_END_FINALLY(252)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(252)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0112:
	{
		ElementInformation_t3316 * L_46 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		PropertyInformationCollection_t3352 * L_47 = ElementInformation_get_Properties_m11932(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		Object_t * L_48 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_47);
		V_7 = L_48;
	}

IL_0124:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0176;
		}

IL_0129:
		{
			Object_t * L_49 = V_7;
			NullCheck(L_49);
			Object_t * L_50 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_49);
			V_6 = ((PropertyInformation_t3351 *)Castclass(L_50, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_51 = V_6;
			NullCheck(L_51);
			bool L_52 = PropertyInformation_get_IsElement_m11980(L_51, /*hidden argument*/NULL);
			if (L_52)
			{
				goto IL_0148;
			}
		}

IL_0143:
		{
			goto IL_0176;
		}

IL_0148:
		{
			PropertyInformation_t3351 * L_53 = V_6;
			NullCheck(L_53);
			Object_t * L_54 = PropertyInformation_get_Value_m11977(L_53, /*hidden argument*/NULL);
			V_8 = ((ConfigurationElement_t3318 *)Castclass(L_54, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
			ConfigurationElement_t3318 * L_55 = V_8;
			if (!L_55)
			{
				goto IL_0176;
			}
		}

IL_015d:
		{
			ConfigurationElement_t3318 * L_56 = V_8;
			XmlWriter_t3373 * L_57 = ___writer;
			PropertyInformation_t3351 * L_58 = V_6;
			NullCheck(L_58);
			String_t* L_59 = PropertyInformation_get_Name_m11975(L_58, /*hidden argument*/NULL);
			NullCheck(L_56);
			bool L_60 = (bool)VirtFuncInvoker2< bool, XmlWriter_t3373 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_56, L_57, L_59);
			if (L_60)
			{
				goto IL_0174;
			}
		}

IL_0171:
		{
			bool L_61 = V_3;
			G_B30_0 = ((int32_t)(L_61));
			goto IL_0175;
		}

IL_0174:
		{
			G_B30_0 = 1;
		}

IL_0175:
		{
			V_3 = G_B30_0;
		}

IL_0176:
		{
			Object_t * L_62 = V_7;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_0129;
			}
		}

IL_0182:
		{
			IL2CPP_LEAVE(0x19D, FINALLY_0187);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0187;
	}

FINALLY_0187:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_7;
			V_11 = ((Object_t *)IsInst(L_64, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_11;
			if (L_65)
			{
				goto IL_0195;
			}
		}

IL_0194:
		{
			IL2CPP_END_FINALLY(391)
		}

IL_0195:
		{
			Object_t * L_66 = V_11;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(391)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(391)
	{
		IL2CPP_JUMP_TBL(0x19D, IL_019d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_019d:
	{
		bool L_67 = V_3;
		return L_67;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElement_SerializeToXmlElement_m11750 (ConfigurationElement_t3318 * __this, XmlWriter_t3373 * ___writer, String_t* ___elementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Configuration.ConfigurationElement::HasValues() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_1 = ___elementName;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_2 = ___elementName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_4 = String_op_Inequality_m415(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		XmlWriter_t3373 * L_5 = ___writer;
		String_t* L_6 = ___elementName;
		NullCheck(L_5);
		XmlWriter_WriteStartElement_m12078(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002a:
	{
		XmlWriter_t3373 * L_7 = ___writer;
		bool L_8 = (bool)VirtFuncInvoker2< bool, XmlWriter_t3373 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, __this, L_7, 0);
		V_0 = L_8;
		String_t* L_9 = ___elementName;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_10 = ___elementName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_12 = String_op_Inequality_m415(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		XmlWriter_t3373 * L_13 = ___writer;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_13);
	}

IL_004f:
	{
		bool L_14 = V_0;
		return L_14;
	}
}
// System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_Unmerge_m11751 (ConfigurationElement_t3318 * __this, ConfigurationElement_t3318 * ___source, ConfigurationElement_t3318 * ___parent, int32_t ___updateMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	Object_t * V_1 = {0};
	PropertyInformation_t3351 * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	ConfigurationElement_t3318 * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationElement_t3318 * L_0 = ___parent;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		ConfigurationElement_t3318 * L_1 = ___source;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m4220(L_1, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_3 = ___parent;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m4220(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		ConfigurationException_t3323 * L_5 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_5, (String_t*) &_stringLiteral2417, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		ConfigurationElement_t3318 * L_6 = ___source;
		NullCheck(L_6);
		ElementInformation_t3316 * L_7 = ConfigurationElement_get_ElementInformation_m11716(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PropertyInformationCollection_t3352 * L_8 = ElementInformation_get_Properties_m11932(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_8);
		V_1 = L_9;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011b;
		}

IL_0038:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
			V_0 = ((PropertyInformation_t3351 *)Castclass(L_11, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			PropertyInformation_t3351 * L_12 = V_0;
			NullCheck(L_12);
			int32_t L_13 = PropertyInformation_get_ValueOrigin_m11981(L_12, /*hidden argument*/NULL);
			if (L_13)
			{
				goto IL_0054;
			}
		}

IL_004f:
		{
			goto IL_011b;
		}

IL_0054:
		{
			ElementInformation_t3316 * L_14 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
			NullCheck(L_14);
			PropertyInformationCollection_t3352 * L_15 = ElementInformation_get_Properties_m11932(L_14, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_16 = V_0;
			NullCheck(L_16);
			String_t* L_17 = PropertyInformation_get_Name_m11975(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			PropertyInformation_t3351 * L_18 = PropertyInformationCollection_get_Item_m11990(L_15, L_17, /*hidden argument*/NULL);
			V_2 = L_18;
			PropertyInformation_t3351 * L_19 = V_0;
			NullCheck(L_19);
			Object_t * L_20 = PropertyInformation_get_Value_m11977(L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			ConfigurationElement_t3318 * L_21 = ___parent;
			if (!L_21)
			{
				goto IL_0089;
			}
		}

IL_0078:
		{
			ConfigurationElement_t3318 * L_22 = ___parent;
			PropertyInformation_t3351 * L_23 = V_0;
			NullCheck(L_23);
			String_t* L_24 = PropertyInformation_get_Name_m11975(L_23, /*hidden argument*/NULL);
			NullCheck(L_22);
			bool L_25 = ConfigurationElement_HasValue_m11752(L_22, L_24, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_0095;
			}
		}

IL_0089:
		{
			PropertyInformation_t3351 * L_26 = V_2;
			Object_t * L_27 = V_3;
			NullCheck(L_26);
			PropertyInformation_set_Value_m11978(L_26, L_27, /*hidden argument*/NULL);
			goto IL_011b;
		}

IL_0095:
		{
			Object_t * L_28 = V_3;
			if (!L_28)
			{
				goto IL_011b;
			}
		}

IL_009b:
		{
			ConfigurationElement_t3318 * L_29 = ___parent;
			PropertyInformation_t3351 * L_30 = V_0;
			NullCheck(L_30);
			String_t* L_31 = PropertyInformation_get_Name_m11975(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			Object_t * L_32 = ConfigurationElement_get_Item_m11730(L_29, L_31, /*hidden argument*/NULL);
			V_4 = L_32;
			PropertyInformation_t3351 * L_33 = V_0;
			NullCheck(L_33);
			bool L_34 = PropertyInformation_get_IsElement_m11980(L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_00ee;
			}
		}

IL_00b4:
		{
			Object_t * L_35 = V_4;
			if (!L_35)
			{
				goto IL_00e2;
			}
		}

IL_00bb:
		{
			PropertyInformation_t3351 * L_36 = V_2;
			NullCheck(L_36);
			Object_t * L_37 = PropertyInformation_get_Value_m11977(L_36, /*hidden argument*/NULL);
			V_5 = ((ConfigurationElement_t3318 *)Castclass(L_37, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
			ConfigurationElement_t3318 * L_38 = V_5;
			Object_t * L_39 = V_3;
			Object_t * L_40 = V_4;
			int32_t L_41 = ___updateMode;
			NullCheck(L_38);
			VirtActionInvoker3< ConfigurationElement_t3318 *, ConfigurationElement_t3318 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_38, ((ConfigurationElement_t3318 *)Castclass(L_39, ConfigurationElement_t3318_il2cpp_TypeInfo_var)), ((ConfigurationElement_t3318 *)Castclass(L_40, ConfigurationElement_t3318_il2cpp_TypeInfo_var)), L_41);
			goto IL_00e9;
		}

IL_00e2:
		{
			PropertyInformation_t3351 * L_42 = V_2;
			Object_t * L_43 = V_3;
			NullCheck(L_42);
			PropertyInformation_set_Value_m11978(L_42, L_43, /*hidden argument*/NULL);
		}

IL_00e9:
		{
			goto IL_011b;
		}

IL_00ee:
		{
			Object_t * L_44 = V_3;
			Object_t * L_45 = V_4;
			bool L_46 = Object_Equals_m7546(NULL /*static, unused*/, L_44, L_45, /*hidden argument*/NULL);
			if (!L_46)
			{
				goto IL_0114;
			}
		}

IL_00fb:
		{
			int32_t L_47 = ___updateMode;
			if ((((int32_t)L_47) == ((int32_t)2)))
			{
				goto IL_0114;
			}
		}

IL_0102:
		{
			int32_t L_48 = ___updateMode;
			if (L_48)
			{
				goto IL_011b;
			}
		}

IL_0108:
		{
			PropertyInformation_t3351 * L_49 = V_0;
			NullCheck(L_49);
			int32_t L_50 = PropertyInformation_get_ValueOrigin_m11981(L_49, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_50) == ((uint32_t)2))))
			{
				goto IL_011b;
			}
		}

IL_0114:
		{
			PropertyInformation_t3351 * L_51 = V_2;
			Object_t * L_52 = V_3;
			NullCheck(L_51);
			PropertyInformation_set_Value_m11978(L_51, L_52, /*hidden argument*/NULL);
		}

IL_011b:
		{
			Object_t * L_53 = V_1;
			NullCheck(L_53);
			bool L_54 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_53);
			if (L_54)
			{
				goto IL_0038;
			}
		}

IL_0126:
		{
			IL2CPP_LEAVE(0x140, FINALLY_012b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_012b;
	}

FINALLY_012b:
	{ // begin finally (depth: 1)
		{
			Object_t * L_55 = V_1;
			V_6 = ((Object_t *)IsInst(L_55, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_56 = V_6;
			if (L_56)
			{
				goto IL_0138;
			}
		}

IL_0137:
		{
			IL2CPP_END_FINALLY(299)
		}

IL_0138:
		{
			Object_t * L_57 = V_6;
			NullCheck(L_57);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_57);
			IL2CPP_END_FINALLY(299)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(299)
	{
		IL2CPP_JUMP_TBL(0x140, IL_0140)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0140:
	{
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElement::HasValue(System.String)
extern "C" bool ConfigurationElement_HasValue_m11752 (ConfigurationElement_t3318 * __this, String_t* ___propName, const MethodInfo* method)
{
	PropertyInformation_t3351 * V_0 = {0};
	int32_t G_B3_0 = 0;
	{
		ElementInformation_t3316 * L_0 = ConfigurationElement_get_ElementInformation_m11716(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		PropertyInformationCollection_t3352 * L_1 = ElementInformation_get_Properties_m11932(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___propName;
		NullCheck(L_1);
		PropertyInformation_t3351 * L_3 = PropertyInformationCollection_get_Item_m11990(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		PropertyInformation_t3351 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		PropertyInformation_t3351 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = PropertyInformation_get_ValueOrigin_m11981(L_5, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_6) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		return G_B3_0;
	}
}
// System.Void System.Configuration.ConfigurationElement::ValidateValue(System.Configuration.ConfigurationProperty,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElement_ValidateValue_m11753 (ConfigurationElement_t3318 * __this, ConfigurationProperty_t3333 * ___p, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationValidatorBase_t3332 * V_0 = {0};
	{
		ConfigurationProperty_t3333 * L_0 = ___p;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ConfigurationProperty_t3333 * L_1 = ___p;
		NullCheck(L_1);
		ConfigurationValidatorBase_t3332 * L_2 = ConfigurationProperty_get_Validator_m11857(L_1, /*hidden argument*/NULL);
		ConfigurationValidatorBase_t3332 * L_3 = L_2;
		V_0 = L_3;
		if (L_3)
		{
			goto IL_0014;
		}
	}

IL_0013:
	{
		return;
	}

IL_0014:
	{
		ConfigurationValidatorBase_t3332 * L_4 = V_0;
		ConfigurationProperty_t3333 * L_5 = ___p;
		NullCheck(L_5);
		Type_t * L_6 = ConfigurationProperty_get_Type_m11856(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean System.Configuration.ConfigurationValidatorBase::CanValidate(System.Type) */, L_4, L_6);
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		ConfigurationProperty_t3333 * L_8 = ___p;
		NullCheck(L_8);
		Type_t * L_9 = ConfigurationProperty_get_Type_m11856(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral2418, L_9, /*hidden argument*/NULL);
		ConfigurationException_t3323 * L_11 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_003b:
	{
		ConfigurationValidatorBase_t3332 * L_12 = V_0;
		ConfigurationProperty_t3333 * L_13 = ___p;
		String_t* L_14 = ___value;
		NullCheck(L_13);
		Object_t * L_15 = ConfigurationProperty_ConvertFromString_m11858(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object) */, L_12, L_15);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Configuration.ConfigurationPropertyAttribute
#include "System_Configuration_System_Configuration_ConfigurationPrope_1.h"
// System.Configuration.ConfigurationValidatorAttribute
#include "System_Configuration_System_Configuration_ConfigurationValid.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverter.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Configuration.ConfigurationPropertyAttribute
#include "System_Configuration_System_Configuration_ConfigurationPrope_1MethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Configuration.ConfigurationValidatorAttribute
#include "System_Configuration_System_Configuration_ConfigurationValidMethodDeclarations.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Void System.Configuration.ElementMap::.ctor(System.Type)
extern const Il2CppType* ConfigurationCollectionAttribute_t3312_0_0_0_var;
extern const Il2CppType* ConfigurationPropertyAttribute_t3334_0_0_0_var;
extern const Il2CppType* ConfigurationValidatorAttribute_t3346_0_0_0_var;
extern const Il2CppType* TypeConverterAttribute_t3378_0_0_0_var;
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyAttribute_t3334_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationValidatorAttribute_t3346_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverterAttribute_t3378_il2cpp_TypeInfo_var;
extern TypeInfo* TypeConverter_t3331_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern "C" void ElementMap__ctor_m11754 (ElementMap_t3313 * __this, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationCollectionAttribute_t3312_0_0_0_var = il2cpp_codegen_type_from_index(5816);
		ConfigurationPropertyAttribute_t3334_0_0_0_var = il2cpp_codegen_type_from_index(5817);
		ConfigurationValidatorAttribute_t3346_0_0_0_var = il2cpp_codegen_type_from_index(5818);
		TypeConverterAttribute_t3378_0_0_0_var = il2cpp_codegen_type_from_index(5819);
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5816);
		ConfigurationPropertyAttribute_t3334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5817);
		ConfigurationValidatorAttribute_t3346_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5818);
		TypeConverterAttribute_t3378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5819);
		TypeConverter_t3331_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5820);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInfoU5BU5D_t1476* V_0 = {0};
	PropertyInfo_t * V_1 = {0};
	PropertyInfoU5BU5D_t1476* V_2 = {0};
	int32_t V_3 = 0;
	ConfigurationPropertyAttribute_t3334 * V_4 = {0};
	String_t* V_5 = {0};
	ConfigurationValidatorAttribute_t3346 * V_6 = {0};
	ConfigurationValidatorBase_t3332 * V_7 = {0};
	TypeConverterAttribute_t3378 * V_8 = {0};
	TypeConverter_t3331 * V_9 = {0};
	ConfigurationProperty_t3333 * V_10 = {0};
	String_t* G_B6_0 = {0};
	ConfigurationValidatorBase_t3332 * G_B9_0 = {0};
	TypeConverter_t3331 * G_B12_0 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_0, /*hidden argument*/NULL);
		__this->___properties_1 = L_0;
		Type_t * L_1 = ___t;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t3312_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_3 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		__this->___collectionAttribute_2 = ((ConfigurationCollectionAttribute_t3312 *)IsInst(L_3, ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var));
		Type_t * L_4 = ___t;
		NullCheck(L_4);
		PropertyInfoU5BU5D_t1476* L_5 = (PropertyInfoU5BU5D_t1476*)VirtFuncInvoker1< PropertyInfoU5BU5D_t1476*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_4, ((int32_t)60));
		V_0 = L_5;
		PropertyInfoU5BU5D_t1476* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_013d;
	}

IL_003e:
	{
		PropertyInfoU5BU5D_t1476* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_1 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_7, L_9));
		PropertyInfo_t * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationPropertyAttribute_t3334_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_12 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		V_4 = ((ConfigurationPropertyAttribute_t3334 *)IsInst(L_12, ConfigurationPropertyAttribute_t3334_il2cpp_TypeInfo_var));
		ConfigurationPropertyAttribute_t3334 * L_13 = V_4;
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		goto IL_0139;
	}

IL_0065:
	{
		ConfigurationPropertyAttribute_t3334 * L_14 = V_4;
		NullCheck(L_14);
		String_t* L_15 = ConfigurationPropertyAttribute_get_Name_m11869(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		ConfigurationPropertyAttribute_t3334 * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = ConfigurationPropertyAttribute_get_Name_m11869(L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		goto IL_0083;
	}

IL_007d:
	{
		PropertyInfo_t * L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		G_B6_0 = L_19;
	}

IL_0083:
	{
		V_5 = G_B6_0;
		PropertyInfo_t * L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationValidatorAttribute_t3346_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_22 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_6 = ((ConfigurationValidatorAttribute_t3346 *)IsInst(L_22, ConfigurationValidatorAttribute_t3346_il2cpp_TypeInfo_var));
		ConfigurationValidatorAttribute_t3346 * L_23 = V_6;
		if (!L_23)
		{
			goto IL_00af;
		}
	}
	{
		ConfigurationValidatorAttribute_t3346 * L_24 = V_6;
		NullCheck(L_24);
		ConfigurationValidatorBase_t3332 * L_25 = (ConfigurationValidatorBase_t3332 *)VirtFuncInvoker0< ConfigurationValidatorBase_t3332 * >::Invoke(6 /* System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::get_ValidatorInstance() */, L_24);
		G_B9_0 = L_25;
		goto IL_00b0;
	}

IL_00af:
	{
		G_B9_0 = ((ConfigurationValidatorBase_t3332 *)(NULL));
	}

IL_00b0:
	{
		V_7 = G_B9_0;
		PropertyInfo_t * L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(TypeConverterAttribute_t3378_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_28 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		V_8 = ((TypeConverterAttribute_t3378 *)Castclass(L_28, TypeConverterAttribute_t3378_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t3378 * L_29 = V_8;
		if (!L_29)
		{
			goto IL_00ec;
		}
	}
	{
		TypeConverterAttribute_t3378 * L_30 = V_8;
		NullCheck(L_30);
		String_t* L_31 = TypeConverterAttribute_get_ConverterTypeName_m12080(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetType_m7632(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		Object_t * L_33 = Activator_CreateInstance_m12071(NULL /*static, unused*/, L_32, 1, /*hidden argument*/NULL);
		G_B12_0 = ((TypeConverter_t3331 *)Castclass(L_33, TypeConverter_t3331_il2cpp_TypeInfo_var));
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B12_0 = ((TypeConverter_t3331 *)(NULL));
	}

IL_00ed:
	{
		V_9 = G_B12_0;
		String_t* L_34 = V_5;
		PropertyInfo_t * L_35 = V_1;
		NullCheck(L_35);
		Type_t * L_36 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_35);
		ConfigurationPropertyAttribute_t3334 * L_37 = V_4;
		NullCheck(L_37);
		Object_t * L_38 = ConfigurationPropertyAttribute_get_DefaultValue_m11865(L_37, /*hidden argument*/NULL);
		TypeConverter_t3331 * L_39 = V_9;
		ConfigurationValidatorBase_t3332 * L_40 = V_7;
		ConfigurationPropertyAttribute_t3334 * L_41 = V_4;
		NullCheck(L_41);
		int32_t L_42 = ConfigurationPropertyAttribute_get_Options_m11867(L_41, /*hidden argument*/NULL);
		ConfigurationProperty_t3333 * L_43 = (ConfigurationProperty_t3333 *)il2cpp_codegen_object_new (ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m11848(L_43, L_34, L_36, L_38, L_39, L_40, L_42, /*hidden argument*/NULL);
		V_10 = L_43;
		ConfigurationProperty_t3333 * L_44 = V_10;
		PropertyInfo_t * L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_46 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t3312_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_47 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		ConfigurationProperty_set_CollectionAttribute_m11862(L_44, ((ConfigurationCollectionAttribute_t3312 *)IsInst(L_47, ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t3314 * L_48 = (__this->___properties_1);
		ConfigurationProperty_t3333 * L_49 = V_10;
		NullCheck(L_48);
		ConfigurationPropertyCollection_Add_m11875(L_48, L_49, /*hidden argument*/NULL);
	}

IL_0139:
	{
		int32_t L_50 = V_3;
		V_3 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_51 = V_3;
		PropertyInfoU5BU5D_t1476* L_52 = V_2;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		return;
	}
}
// System.Void System.Configuration.ElementMap::.cctor()
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern TypeInfo* ElementMap_t3313_il2cpp_TypeInfo_var;
extern "C" void ElementMap__cctor_m11755 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ElementMap_t3313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5813);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t714 * L_0 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable_t714 * L_1 = Hashtable_Synchronized_m12081(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((ElementMap_t3313_StaticFields*)ElementMap_t3313_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0 = L_1;
		return;
	}
}
// System.Configuration.ElementMap System.Configuration.ElementMap::GetMap(System.Type)
extern TypeInfo* ElementMap_t3313_il2cpp_TypeInfo_var;
extern "C" ElementMap_t3313 * ElementMap_GetMap_m11756 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ElementMap_t3313_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5813);
		s_Il2CppMethodIntialized = true;
	}
	ElementMap_t3313 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t3313_il2cpp_TypeInfo_var);
		Hashtable_t714 * L_0 = ((ElementMap_t3313_StaticFields*)ElementMap_t3313_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0;
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((ElementMap_t3313 *)IsInst(L_2, ElementMap_t3313_il2cpp_TypeInfo_var));
		ElementMap_t3313 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		ElementMap_t3313 * L_4 = V_0;
		return L_4;
	}

IL_0019:
	{
		Type_t * L_5 = ___t;
		ElementMap_t3313 * L_6 = (ElementMap_t3313 *)il2cpp_codegen_object_new (ElementMap_t3313_il2cpp_TypeInfo_var);
		ElementMap__ctor_m11754(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(ElementMap_t3313_il2cpp_TypeInfo_var);
		Hashtable_t714 * L_7 = ((ElementMap_t3313_StaticFields*)ElementMap_t3313_il2cpp_TypeInfo_var->static_fields)->___elementMaps_0;
		Type_t * L_8 = ___t;
		ElementMap_t3313 * L_9 = V_0;
		NullCheck(L_7);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_7, L_8, L_9);
		ElementMap_t3313 * L_10 = V_0;
		return L_10;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ElementMap::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * ElementMap_get_Properties_m11757 (ElementMap_t3313 * __this, const MethodInfo* method)
{
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (__this->___properties_1);
		return L_0;
	}
}
// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement
#include "System_Configuration_System_Configuration_ConfigurationEleme_1MethodDeclarations.h"

// System.Configuration.ConfigurationElementCollection
#include "System_Configuration_System_Configuration_ConfigurationEleme_2MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElementCollection)
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ConfigurationRemoveElement__ctor_m11758 (ConfigurationRemoveElement_t3319 * __this, ConfigurationElement_t3318 * ___origElement, ConfigurationElementCollection_t3315 * ___origCollection, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t3333 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_0, /*hidden argument*/NULL);
		__this->___properties_13 = L_0;
		ConfigurationElement__ctor_m11712(__this, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_1 = ___origElement;
		__this->____origElement_14 = L_1;
		ConfigurationElementCollection_t3315 * L_2 = ___origCollection;
		__this->____origCollection_15 = L_2;
		ConfigurationElement_t3318 * L_3 = ___origElement;
		NullCheck(L_3);
		ConfigurationPropertyCollection_t3314 * L_4 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
			V_0 = ((ConfigurationProperty_t3333 *)Castclass(L_7, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationProperty_t3333 * L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = ConfigurationProperty_get_IsKey_m11852(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0053;
			}
		}

IL_0047:
		{
			ConfigurationPropertyCollection_t3314 * L_10 = (__this->___properties_13);
			ConfigurationProperty_t3333 * L_11 = V_0;
			NullCheck(L_10);
			ConfigurationPropertyCollection_Add_m11875(L_10, L_11, /*hidden argument*/NULL);
		}

IL_0053:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0030;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_006e;
			}
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(99)
		}

IL_006e:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0075:
	{
		return;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_KeyValue()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationRemoveElement_get_KeyValue_m11759 (ConfigurationRemoveElement_t3319 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t3333 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_Properties() */, __this);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ConfigurationProperty_t3333 *)Castclass(L_3, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			ConfigurationElement_t3318 * L_4 = (__this->____origElement_14);
			ConfigurationProperty_t3333 * L_5 = V_0;
			ConfigurationProperty_t3333 * L_6 = V_0;
			Object_t * L_7 = ConfigurationElement_get_Item_m11728(__this, L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			ConfigurationElement_set_Item_m11729(L_4, L_5, L_7, /*hidden argument*/NULL);
		}

IL_0030:
		{
			Object_t * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_10 = V_1;
			V_2 = ((Object_t *)IsInst(L_10, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_11 = V_2;
			if (L_11)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0052:
	{
		ConfigurationElementCollection_t3315 * L_13 = (__this->____origCollection_15);
		ConfigurationElement_t3318 * L_14 = (__this->____origElement_14);
		NullCheck(L_13);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t3318 * >::Invoke(35 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_13, L_14);
		return L_15;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElementCollection/ConfigurationRemoveElement::get_Properties()
extern "C" ConfigurationPropertyCollection_t3314 * ConfigurationRemoveElement_get_Properties_m11760 (ConfigurationRemoveElement_t3319 * __this, const MethodInfo* method)
{
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (__this->___properties_13);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationElementCollection::.ctor()
extern TypeInfo* ArrayList_t716_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection__ctor_m11761 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t716 * L_0 = (ArrayList_t716 *)il2cpp_codegen_object_new (ArrayList_t716_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_0, /*hidden argument*/NULL);
		__this->___list_13 = L_0;
		__this->___addElementName_20 = (String_t*) &_stringLiteral2395;
		__this->___clearElementName_21 = (String_t*) &_stringLiteral2396;
		__this->___removeElementName_22 = (String_t*) &_stringLiteral2397;
		ConfigurationElement__ctor_m11712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationElementCollection_System_Collections_ICollection_CopyTo_m11762 (ConfigurationElementCollection_t3315 * __this, Array_t * ___arr, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		Array_t * L_1 = ___arr;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::InitFromProperty(System.Configuration.PropertyInformation)
extern const Il2CppType* ConfigurationCollectionAttribute_t3312_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_InitFromProperty_m11763 (ConfigurationElementCollection_t3315 * __this, PropertyInformation_t3351 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationCollectionAttribute_t3312_0_0_0_var = il2cpp_codegen_type_from_index(5816);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5816);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationCollectionAttribute_t3312 * V_0 = {0};
	{
		PropertyInformation_t3351 * L_0 = ___propertyInfo;
		NullCheck(L_0);
		ConfigurationProperty_t3333 * L_1 = PropertyInformation_get_Property_m11984(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ConfigurationCollectionAttribute_t3312 * L_2 = ConfigurationProperty_get_CollectionAttribute_m11861(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationCollectionAttribute_t3312 * L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		PropertyInformation_t3351 * L_4 = ___propertyInfo;
		NullCheck(L_4);
		Type_t * L_5 = PropertyInformation_get_Type_m11976(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationCollectionAttribute_t3312_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_7 = Attribute_GetCustomAttribute_m12079(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_0 = ((ConfigurationCollectionAttribute_t3312 *)IsInst(L_7, ConfigurationCollectionAttribute_t3312_il2cpp_TypeInfo_var));
	}

IL_002d:
	{
		ConfigurationCollectionAttribute_t3312 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		ConfigurationCollectionAttribute_t3312 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = ConfigurationCollectionAttribute_get_AddItemName_m11708(L_9, /*hidden argument*/NULL);
		__this->___addElementName_20 = L_10;
		ConfigurationCollectionAttribute_t3312 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = ConfigurationCollectionAttribute_get_ClearItemsName_m11709(L_11, /*hidden argument*/NULL);
		__this->___clearElementName_21 = L_12;
		ConfigurationCollectionAttribute_t3312 * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = ConfigurationCollectionAttribute_get_RemoveItemName_m11710(L_13, /*hidden argument*/NULL);
		__this->___removeElementName_22 = L_14;
	}

IL_0057:
	{
		PropertyInformation_t3351 * L_15 = ___propertyInfo;
		ConfigurationElement_InitFromProperty_m11715(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType()
extern "C" int32_t ConfigurationElementCollection_get_CollectionType_m11764 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsBasic()
extern "C" bool ConfigurationElementCollection_get_IsBasic_m11765 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsAlternate()
extern "C" bool ConfigurationElementCollection_get_IsAlternate_m11766 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Int32 System.Configuration.ConfigurationElementCollection::get_Count()
extern "C" int32_t ConfigurationElementCollection_get_Count_m11767 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_ElementName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationElementCollection_get_ElementName_m11768 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
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
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::set_EmitClear(System.Boolean)
extern "C" void ConfigurationElementCollection_set_EmitClear_m11769 (ConfigurationElementCollection_t3315 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___emitClear_16 = L_0;
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_IsSynchronized()
extern "C" bool ConfigurationElementCollection_get_IsSynchronized_m11770 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationElementCollection_get_SyncRoot_m11771 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate()
extern "C" bool ConfigurationElementCollection_get_ThrowOnDuplicate_m11772 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(29 /* System.Configuration.ConfigurationElementCollectionType System.Configuration.ConfigurationElementCollection::get_CollectionType() */, __this);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_AddElementName()
extern "C" String_t* ConfigurationElementCollection_get_AddElementName_m11773 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___addElementName_20);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_ClearElementName()
extern "C" String_t* ConfigurationElementCollection_get_ClearElementName_m11774 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___clearElementName_21);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationElementCollection::get_RemoveElementName()
extern "C" String_t* ConfigurationElementCollection_get_RemoveElementName_m11775 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___removeElementName_22);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement)
extern "C" void ConfigurationElementCollection_BaseAdd_m11776 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___element;
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(31 /* System.Boolean System.Configuration.ConfigurationElementCollection::get_ThrowOnDuplicate() */, __this);
		ConfigurationElementCollection_BaseAdd_m11777(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement,System.Boolean)
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseAdd_m11777 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___element, bool ___throwIfExists, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_1 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_1, (String_t*) &_stringLiteral2419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		bool L_2 = ConfigurationElementCollection_get_IsAlternate_m11766(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t716 * L_3 = (__this->___list_13);
		int32_t L_4 = (__this->___inheritedLimitIndex_19);
		ConfigurationElement_t3318 * L_5 = ___element;
		NullCheck(L_3);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_3, L_4, L_5);
		int32_t L_6 = (__this->___inheritedLimitIndex_19);
		__this->___inheritedLimitIndex_19 = ((int32_t)((int32_t)L_6+(int32_t)1));
		goto IL_009d;
	}

IL_0046:
	{
		ConfigurationElement_t3318 * L_7 = ___element;
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t3318 * >::Invoke(35 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, __this, L_7);
		int32_t L_9 = ConfigurationElementCollection_IndexOfKey_m11782(__this, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		ConfigurationElement_t3318 * L_11 = ___element;
		ArrayList_t716 * L_12 = (__this->___list_13);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_12, L_13);
		NullCheck(L_11);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object) */, L_11, L_14);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		return;
	}

IL_0073:
	{
		bool L_16 = ___throwIfExists;
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		ConfigurationException_t3323 * L_17 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_17, (String_t*) &_stringLiteral2420, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0084:
	{
		ArrayList_t716 * L_18 = (__this->___list_13);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_18, L_19);
	}

IL_0090:
	{
		ArrayList_t716 * L_20 = (__this->___list_13);
		ConfigurationElement_t3318 * L_21 = ___element;
		NullCheck(L_20);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
	}

IL_009d:
	{
		__this->___modified_17 = 1;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseClear()
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseClear_m11778 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_1 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_1, (String_t*) &_stringLiteral2419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ArrayList_t716 * L_2 = (__this->___list_13);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_2);
		__this->___modified_17 = 1;
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Int32)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t3318 * ConfigurationElementCollection_BaseGet_m11779 (ConfigurationElementCollection_t3315 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((ConfigurationElement_t3318 *)Castclass(L_2, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::BaseGet(System.Object)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t3318 * ConfigurationElementCollection_BaseGet_m11780 (ConfigurationElementCollection_t3315 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___key;
		int32_t L_1 = ConfigurationElementCollection_IndexOfKey_m11782(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		ArrayList_t716 * L_3 = (__this->___list_13);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((ConfigurationElement_t3318 *)Castclass(L_5, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		return (ConfigurationElement_t3318 *)NULL;
	}
}
// System.Int32 System.Configuration.ConfigurationElementCollection::BaseIndexOf(System.Configuration.ConfigurationElement)
extern "C" int32_t ConfigurationElementCollection_BaseIndexOf_m11781 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		ConfigurationElement_t3318 * L_1 = ___element;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(33 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationElementCollection::IndexOfKey(System.Object)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationElementCollection_IndexOfKey_m11782 (ConfigurationElementCollection_t3315 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t3318 * >::Invoke(35 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, __this, ((ConfigurationElement_t3318 *)Castclass(L_2, ConfigurationElement_t3318_il2cpp_TypeInfo_var)));
		Object_t * L_4 = ___key;
		bool L_5 = ConfigurationElementCollection_CompareKeys_m11785(__this, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_002c:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_8 = V_0;
		ArrayList_t716 * L_9 = (__this->___list_13);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemove(System.Object)
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseRemove_m11783 (ConfigurationElementCollection_t3315 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_1 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_1, (String_t*) &_stringLiteral2419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Object_t * L_2 = ___key;
		int32_t L_3 = ConfigurationElementCollection_IndexOfKey_m11782(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = V_0;
		ConfigurationElementCollection_BaseRemoveAt_m11784(__this, L_5, /*hidden argument*/NULL);
		__this->___modified_17 = 1;
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::BaseRemoveAt(System.Int32)
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_BaseRemoveAt_m11784 (ConfigurationElementCollection_t3315 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_1 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_1, (String_t*) &_stringLiteral2419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ArrayList_t716 * L_2 = (__this->___list_13);
		int32_t L_3 = ___index;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_0 = ((ConfigurationElement_t3318 *)Castclass(L_4, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_5 = V_0;
		bool L_6 = (bool)VirtFuncInvoker1< bool, ConfigurationElement_t3318 * >::Invoke(37 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement) */, __this, L_5);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_7 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_7, (String_t*) &_stringLiteral2421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003f:
	{
		ArrayList_t716 * L_8 = (__this->___inherited_15);
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		ArrayList_t716 * L_9 = (__this->___inherited_15);
		ConfigurationElement_t3318 * L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_9, L_10);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		ConfigurationErrorsException_t3322 * L_12 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_12, (String_t*) &_stringLiteral2422, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0066:
	{
		ArrayList_t716 * L_13 = (__this->___list_13);
		int32_t L_14 = ___index;
		NullCheck(L_13);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_13, L_14);
		__this->___modified_17 = 1;
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::CompareKeys(System.Object,System.Object)
extern TypeInfo* IComparer_t3320_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_CompareKeys_m11785 (ConfigurationElementCollection_t3315 * __this, Object_t * ___key1, Object_t * ___key2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IComparer_t3320_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5821);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___comparer_18);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_1 = (__this->___comparer_18);
		Object_t * L_2 = ___key1;
		Object_t * L_3 = ___key2;
		NullCheck(L_1);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker2< int32_t, Object_t *, Object_t * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t3320_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		return ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		Object_t * L_5 = ___key1;
		Object_t * L_6 = ___key2;
		bool L_7 = Object_Equals_m7546(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement()
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String)
extern "C" ConfigurationElement_t3318 * ConfigurationElementCollection_CreateNewElement_m11786 (ConfigurationElementCollection_t3315 * __this, String_t* ___elementName, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = (ConfigurationElement_t3318 *)VirtFuncInvoker0< ConfigurationElement_t3318 * >::Invoke(33 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement() */, __this);
		return L_0;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElementInternal(System.String)
extern "C" ConfigurationElement_t3318 * ConfigurationElementCollection_CreateNewElementInternal_m11787 (ConfigurationElementCollection_t3315 * __this, String_t* ___elementName, const MethodInfo* method)
{
	ConfigurationElement_t3318 * V_0 = {0};
	{
		String_t* L_0 = ___elementName;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ConfigurationElement_t3318 * L_1 = (ConfigurationElement_t3318 *)VirtFuncInvoker0< ConfigurationElement_t3318 * >::Invoke(33 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement() */, __this);
		V_0 = L_1;
		goto IL_001a;
	}

IL_0012:
	{
		String_t* L_2 = ___elementName;
		ConfigurationElement_t3318 * L_3 = (ConfigurationElement_t3318 *)VirtFuncInvoker1< ConfigurationElement_t3318 *, String_t* >::Invoke(34 /* System.Configuration.ConfigurationElement System.Configuration.ConfigurationElementCollection::CreateNewElement(System.String) */, __this, L_2);
		V_0 = L_3;
	}

IL_001a:
	{
		ConfigurationElement_t3318 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, L_4);
		ConfigurationElement_t3318 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::Equals(System.Object)
extern TypeInfo* ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_Equals_m11788 (ConfigurationElementCollection_t3315 * __this, Object_t * ___compareTo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5812);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElementCollection_t3315 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___compareTo;
		V_0 = ((ConfigurationElementCollection_t3315 *)IsInst(L_0, ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var));
		ConfigurationElementCollection_t3315 * L_1 = V_0;
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
		Type_t * L_2 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		ConfigurationElementCollection_t3315 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m4220(L_3, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		ConfigurationElementCollection_t3315 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_6);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}
	{
		return 0;
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_005a;
	}

IL_003c:
	{
		int32_t L_8 = V_1;
		ConfigurationElement_t3318 * L_9 = ConfigurationElementCollection_BaseGet_m11779(__this, L_8, /*hidden argument*/NULL);
		ConfigurationElementCollection_t3315 * L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		ConfigurationElement_t3318 * L_12 = ConfigurationElementCollection_BaseGet_m11779(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Configuration.ConfigurationElement::Equals(System.Object) */, L_9, L_12);
		if (L_13)
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_003c;
		}
	}
	{
		return 1;
	}
}
// System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement)
// System.Int32 System.Configuration.ConfigurationElementCollection::GetHashCode()
extern "C" int32_t ConfigurationElementCollection_GetHashCode_m11789 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001c;
	}

IL_0009:
	{
		int32_t L_0 = V_0;
		int32_t L_1 = V_1;
		ConfigurationElement_t3318 * L_2 = ConfigurationElementCollection_BaseGet_m11779(__this, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Configuration.ConfigurationElement::GetHashCode() */, L_2);
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)L_3));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator()
extern "C" Object_t * ConfigurationElementCollection_GetEnumerator_m11790 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String)
extern "C" bool ConfigurationElementCollection_IsElementName_m11791 (ConfigurationElementCollection_t3315 * __this, String_t* ___elementName, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsElementRemovable(System.Configuration.ConfigurationElement)
extern "C" bool ConfigurationElementCollection_IsElementRemovable_m11792 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly() */, __this);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsModified()
extern "C" bool ConfigurationElementCollection_IsModified_m11793 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___modified_17);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::IsReadOnly()
extern "C" bool ConfigurationElementCollection_IsReadOnly_m11794 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationElement_IsReadOnly_m11746(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::HasValues()
extern "C" bool ConfigurationElementCollection_HasValues_m11795 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___list_13);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::Reset(System.Configuration.ConfigurationElement)
extern TypeInfo* ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t716_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_Reset_m11796 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5812);
		ArrayList_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ConfigurationElementCollection_t3315 * V_1 = {0};
	int32_t V_2 = 0;
	ConfigurationElement_t3318 * V_3 = {0};
	ConfigurationElement_t3318 * V_4 = {0};
	{
		bool L_0 = ConfigurationElementCollection_get_IsBasic_m11765(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConfigurationElement_t3318 * L_1 = ___parentElement;
		V_1 = ((ConfigurationElementCollection_t3315 *)Castclass(L_1, ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0064;
	}

IL_0015:
	{
		ConfigurationElementCollection_t3315 * L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		ConfigurationElement_t3318 * L_4 = ConfigurationElementCollection_BaseGet_m11779(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		ConfigurationElement_t3318 * L_5 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_4 = L_5;
		ConfigurationElement_t3318 * L_6 = V_4;
		ConfigurationElement_t3318 * L_7 = V_3;
		NullCheck(L_6);
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, L_6, L_7);
		ConfigurationElement_t3318 * L_8 = V_4;
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(32 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_8);
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		ArrayList_t716 * L_10 = (__this->___inherited_15);
		if (L_10)
		{
			goto IL_0052;
		}
	}
	{
		ArrayList_t716 * L_11 = (ArrayList_t716 *)il2cpp_codegen_object_new (ArrayList_t716_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_11, /*hidden argument*/NULL);
		__this->___inherited_15 = L_11;
	}

IL_0052:
	{
		ArrayList_t716 * L_12 = (__this->___inherited_15);
		ConfigurationElement_t3318 * L_13 = V_4;
		NullCheck(L_12);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_13);
	}

IL_0060:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0064:
	{
		int32_t L_15 = V_2;
		ConfigurationElementCollection_t3315 * L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0015;
		}
	}
	{
		bool L_18 = ConfigurationElementCollection_get_IsAlternate_m11766(__this, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0087;
		}
	}
	{
		__this->___inheritedLimitIndex_19 = 0;
		goto IL_0095;
	}

IL_0087:
	{
		int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, __this);
		__this->___inheritedLimitIndex_19 = ((int32_t)((int32_t)L_19-(int32_t)1));
	}

IL_0095:
	{
		__this->___modified_17 = 0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::ResetModified()
extern "C" void ConfigurationElementCollection_ResetModified_m11797 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		__this->___modified_17 = 0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::SetReadOnly()
extern "C" void ConfigurationElementCollection_SetReadOnly_m11798 (ConfigurationElementCollection_t3315 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement_SetReadOnly_m11745(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::SerializeElement(System.Xml.XmlWriter,System.Boolean)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_SerializeElement_m11799 (ConfigurationElementCollection_t3315 * __this, XmlWriter_t3373 * ___writer, bool ___serializeCollectionKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ConfigurationElement_t3318 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ConfigurationElement_t3318 * V_5 = {0};
	int32_t G_B8_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B32_0 = 0;
	{
		bool L_0 = ___serializeCollectionKey;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		XmlWriter_t3373 * L_1 = ___writer;
		bool L_2 = ___serializeCollectionKey;
		bool L_3 = ConfigurationElement_SerializeElement_m11749(__this, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_000f:
	{
		V_0 = 0;
		bool L_4 = ConfigurationElementCollection_get_IsBasic_m11765(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0092;
		}
	}
	{
		V_1 = 0;
		goto IL_007c;
	}

IL_0023:
	{
		ArrayList_t716 * L_5 = (__this->___list_13);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		V_2 = ((ConfigurationElement_t3318 *)Castclass(L_7, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_10 = String_op_Inequality_m415(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		ConfigurationElement_t3318 * L_11 = V_2;
		XmlWriter_t3373 * L_12 = ___writer;
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		NullCheck(L_11);
		bool L_14 = (bool)VirtFuncInvoker2< bool, XmlWriter_t3373 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_11, L_12, L_13);
		if (L_14)
		{
			goto IL_005f;
		}
	}
	{
		bool L_15 = V_0;
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0060;
	}

IL_005f:
	{
		G_B8_0 = 1;
	}

IL_0060:
	{
		V_0 = G_B8_0;
		goto IL_0078;
	}

IL_0066:
	{
		ConfigurationElement_t3318 * L_16 = V_2;
		XmlWriter_t3373 * L_17 = ___writer;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker2< bool, XmlWriter_t3373 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, L_16, L_17, 0);
		if (L_18)
		{
			goto IL_0076;
		}
	}
	{
		bool L_19 = V_0;
		G_B12_0 = ((int32_t)(L_19));
		goto IL_0077;
	}

IL_0076:
	{
		G_B12_0 = 1;
	}

IL_0077:
	{
		V_0 = G_B12_0;
	}

IL_0078:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_21 = V_1;
		ArrayList_t716 * L_22 = (__this->___list_13);
		NullCheck(L_22);
		int32_t L_23 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_22);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0175;
	}

IL_0092:
	{
		bool L_24 = (__this->___emitClear_16);
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		XmlWriter_t3373 * L_25 = ___writer;
		String_t* L_26 = (__this->___clearElementName_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		NullCheck(L_25);
		XmlWriter_WriteElementString_m12082(L_25, L_26, L_27, /*hidden argument*/NULL);
		V_0 = 1;
	}

IL_00b0:
	{
		ArrayList_t716 * L_28 = (__this->___removed_14);
		if (!L_28)
		{
			goto IL_011a;
		}
	}
	{
		V_3 = 0;
		goto IL_00f1;
	}

IL_00c2:
	{
		XmlWriter_t3373 * L_29 = ___writer;
		String_t* L_30 = (__this->___removeElementName_22);
		NullCheck(L_29);
		XmlWriter_WriteStartElement_m12078(L_29, L_30, /*hidden argument*/NULL);
		ArrayList_t716 * L_31 = (__this->___removed_14);
		int32_t L_32 = V_3;
		NullCheck(L_31);
		Object_t * L_33 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_31, L_32);
		XmlWriter_t3373 * L_34 = ___writer;
		NullCheck(((ConfigurationElement_t3318 *)Castclass(L_33, ConfigurationElement_t3318_il2cpp_TypeInfo_var)));
		VirtFuncInvoker2< bool, XmlWriter_t3373 *, bool >::Invoke(21 /* System.Boolean System.Configuration.ConfigurationElement::SerializeElement(System.Xml.XmlWriter,System.Boolean) */, ((ConfigurationElement_t3318 *)Castclass(L_33, ConfigurationElement_t3318_il2cpp_TypeInfo_var)), L_34, 1);
		XmlWriter_t3373 * L_35 = ___writer;
		NullCheck(L_35);
		VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_35);
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_00f1:
	{
		int32_t L_37 = V_3;
		ArrayList_t716 * L_38 = (__this->___removed_14);
		NullCheck(L_38);
		int32_t L_39 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_38);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_00c2;
		}
	}
	{
		bool L_40 = V_0;
		if (L_40)
		{
			goto IL_0118;
		}
	}
	{
		ArrayList_t716 * L_41 = (__this->___removed_14);
		NullCheck(L_41);
		int32_t L_42 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_41);
		G_B25_0 = ((((int32_t)L_42) > ((int32_t)0))? 1 : 0);
		goto IL_0119;
	}

IL_0118:
	{
		G_B25_0 = 1;
	}

IL_0119:
	{
		V_0 = G_B25_0;
	}

IL_011a:
	{
		V_4 = 0;
		goto IL_014b;
	}

IL_0122:
	{
		ArrayList_t716 * L_43 = (__this->___list_13);
		int32_t L_44 = V_4;
		NullCheck(L_43);
		Object_t * L_45 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_43, L_44);
		V_5 = ((ConfigurationElement_t3318 *)Castclass(L_45, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_46 = V_5;
		XmlWriter_t3373 * L_47 = ___writer;
		String_t* L_48 = (__this->___addElementName_20);
		NullCheck(L_46);
		VirtFuncInvoker2< bool, XmlWriter_t3373 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_46, L_47, L_48);
		int32_t L_49 = V_4;
		V_4 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_014b:
	{
		int32_t L_50 = V_4;
		ArrayList_t716 * L_51 = (__this->___list_13);
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_51);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0122;
		}
	}
	{
		bool L_53 = V_0;
		if (L_53)
		{
			goto IL_0173;
		}
	}
	{
		ArrayList_t716 * L_54 = (__this->___list_13);
		NullCheck(L_54);
		int32_t L_55 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_54);
		G_B32_0 = ((((int32_t)L_55) > ((int32_t)0))? 1 : 0);
		goto IL_0174;
	}

IL_0173:
	{
		G_B32_0 = 1;
	}

IL_0174:
	{
		V_0 = G_B32_0;
	}

IL_0175:
	{
		bool L_56 = V_0;
		return L_56;
	}
}
// System.Boolean System.Configuration.ConfigurationElementCollection::OnDeserializeUnrecognizedElement(System.String,System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationRemoveElement_t3319_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationElementCollection_OnDeserializeUnrecognizedElement_m11800 (ConfigurationElementCollection_t3315 * __this, String_t* ___elementName, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		ConfigurationRemoveElement_t3319_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5822);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	ConfigurationElement_t3318 * V_1 = {0};
	ConfigurationRemoveElement_t3319 * V_2 = {0};
	ConfigurationElement_t3318 * V_3 = {0};
	{
		bool L_0 = ConfigurationElementCollection_get_IsBasic_m11765(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_005d;
		}
	}
	{
		V_0 = (ConfigurationElement_t3318 *)NULL;
		String_t* L_1 = ___elementName;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(30 /* System.String System.Configuration.ConfigurationElementCollection::get_ElementName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m456(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ConfigurationElement_t3318 * L_4 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = ___elementName;
		bool L_6 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(36 /* System.Boolean System.Configuration.ConfigurationElementCollection::IsElementName(System.String) */, __this, L_5);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_7 = ___elementName;
		ConfigurationElement_t3318 * L_8 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003a:
	{
		ConfigurationElement_t3318 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		ConfigurationElement_t3318 * L_10 = V_0;
		XmlReader_t3372 * L_11 = ___reader;
		NullCheck(L_10);
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_10, L_11, 0);
		ConfigurationElement_t3318 * L_12 = V_0;
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(32 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_12);
		__this->___modified_17 = 0;
		return 1;
	}

IL_0058:
	{
		goto IL_012d;
	}

IL_005d:
	{
		String_t* L_13 = ___elementName;
		String_t* L_14 = (__this->___clearElementName_21);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m456(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		XmlReader_t3372 * L_16 = ___reader;
		NullCheck(L_16);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_16);
		XmlReader_t3372 * L_17 = ___reader;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_17);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		XmlReader_t3372 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2407, L_20, (String_t*) &_stringLiteral2408, /*hidden argument*/NULL);
		ConfigurationErrorsException_t3322 * L_22 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_009b:
	{
		XmlReader_t3372 * L_23 = ___reader;
		NullCheck(L_23);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_23);
		XmlReader_t3372 * L_24 = ___reader;
		NullCheck(L_24);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_24);
		ConfigurationElementCollection_BaseClear_m11778(__this, /*hidden argument*/NULL);
		__this->___emitClear_16 = 1;
		__this->___modified_17 = 0;
		return 1;
	}

IL_00be:
	{
		String_t* L_25 = ___elementName;
		String_t* L_26 = (__this->___removeElementName_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m456(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fc;
		}
	}
	{
		ConfigurationElement_t3318 * L_28 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = L_28;
		ConfigurationElement_t3318 * L_29 = V_1;
		ConfigurationRemoveElement_t3319 * L_30 = (ConfigurationRemoveElement_t3319 *)il2cpp_codegen_object_new (ConfigurationRemoveElement_t3319_il2cpp_TypeInfo_var);
		ConfigurationRemoveElement__ctor_m11758(L_30, L_29, __this, /*hidden argument*/NULL);
		V_2 = L_30;
		ConfigurationRemoveElement_t3319 * L_31 = V_2;
		XmlReader_t3372 * L_32 = ___reader;
		NullCheck(L_31);
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_31, L_32, 1);
		ConfigurationRemoveElement_t3319 * L_33 = V_2;
		NullCheck(L_33);
		Object_t * L_34 = ConfigurationRemoveElement_get_KeyValue_m11759(L_33, /*hidden argument*/NULL);
		ConfigurationElementCollection_BaseRemove_m11783(__this, L_34, /*hidden argument*/NULL);
		__this->___modified_17 = 0;
		return 1;
	}

IL_00fc:
	{
		String_t* L_35 = ___elementName;
		String_t* L_36 = (__this->___addElementName_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_37 = String_op_Equality_m456(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_012d;
		}
	}
	{
		ConfigurationElement_t3318 * L_38 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_3 = L_38;
		ConfigurationElement_t3318 * L_39 = V_3;
		XmlReader_t3372 * L_40 = ___reader;
		NullCheck(L_39);
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, L_39, L_40, 0);
		ConfigurationElement_t3318 * L_41 = V_3;
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(32 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_41);
		__this->___modified_17 = 0;
		return 1;
	}

IL_012d:
	{
		return 0;
	}
}
// System.Void System.Configuration.ConfigurationElementCollection::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t716_il2cpp_TypeInfo_var;
extern "C" void ConfigurationElementCollection_Unmerge_m11801 (ConfigurationElementCollection_t3315 * __this, ConfigurationElement_t3318 * ___sourceElement, ConfigurationElement_t3318 * ___parentElement, int32_t ___updateMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5812);
		ArrayList_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElementCollection_t3315 * V_0 = {0};
	ConfigurationElementCollection_t3315 * V_1 = {0};
	int32_t V_2 = 0;
	ConfigurationElement_t3318 * V_3 = {0};
	Object_t * V_4 = {0};
	ConfigurationElement_t3318 * V_5 = {0};
	ConfigurationElement_t3318 * V_6 = {0};
	ConfigurationElement_t3318 * V_7 = {0};
	int32_t V_8 = 0;
	ConfigurationElement_t3318 * V_9 = {0};
	Object_t * V_10 = {0};
	ConfigurationElement_t3318 * G_B4_0 = {0};
	{
		ConfigurationElement_t3318 * L_0 = ___sourceElement;
		V_0 = ((ConfigurationElementCollection_t3315 *)Castclass(L_0, ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_1 = ___parentElement;
		V_1 = ((ConfigurationElementCollection_t3315 *)Castclass(L_1, ConfigurationElementCollection_t3315_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0096;
	}

IL_0015:
	{
		ConfigurationElementCollection_t3315 * L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		ConfigurationElement_t3318 * L_4 = ConfigurationElementCollection_BaseGet_m11779(L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		ConfigurationElementCollection_t3315 * L_5 = V_0;
		ConfigurationElement_t3318 * L_6 = V_3;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t3318 * >::Invoke(35 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_5, L_6);
		V_4 = L_7;
		ConfigurationElementCollection_t3315 * L_8 = V_1;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ConfigurationElementCollection_t3315 * L_9 = V_1;
		Object_t * L_10 = V_4;
		NullCheck(L_9);
		ConfigurationElement_t3318 * L_11 = ConfigurationElementCollection_BaseGet_m11780(L_9, L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
		goto IL_003a;
	}

IL_0039:
	{
		G_B4_0 = ((ConfigurationElement_t3318 *)(NULL));
	}

IL_003a:
	{
		V_5 = G_B4_0;
		ConfigurationElement_t3318 * L_12 = V_5;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_13 = ___updateMode;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0077;
		}
	}
	{
		ConfigurationElement_t3318 * L_14 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_6 = L_14;
		ConfigurationElement_t3318 * L_15 = V_6;
		ConfigurationElement_t3318 * L_16 = V_3;
		ConfigurationElement_t3318 * L_17 = V_5;
		NullCheck(L_15);
		VirtActionInvoker3< ConfigurationElement_t3318 *, ConfigurationElement_t3318 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_15, L_16, L_17, 1);
		ConfigurationElement_t3318 * L_18 = V_6;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Configuration.ConfigurationElement::HasValues() */, L_18);
		if (!L_19)
		{
			goto IL_0072;
		}
	}
	{
		ConfigurationElement_t3318 * L_20 = V_6;
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(32 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_20);
	}

IL_0072:
	{
		goto IL_0092;
	}

IL_0077:
	{
		ConfigurationElement_t3318 * L_21 = ConfigurationElementCollection_CreateNewElementInternal_m11787(__this, (String_t*)NULL, /*hidden argument*/NULL);
		V_7 = L_21;
		ConfigurationElement_t3318 * L_22 = V_7;
		ConfigurationElement_t3318 * L_23 = V_3;
		NullCheck(L_22);
		VirtActionInvoker3< ConfigurationElement_t3318 *, ConfigurationElement_t3318 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_22, L_23, (ConfigurationElement_t3318 *)NULL, 2);
		ConfigurationElement_t3318 * L_24 = V_7;
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(32 /* System.Void System.Configuration.ConfigurationElementCollection::BaseAdd(System.Configuration.ConfigurationElement) */, __this, L_24);
	}

IL_0092:
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_26 = V_2;
		ConfigurationElementCollection_t3315 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_27);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_29 = ___updateMode;
		if ((!(((uint32_t)L_29) == ((uint32_t)2))))
		{
			goto IL_00b5;
		}
	}
	{
		ConfigurationElementCollection_set_EmitClear_m11769(__this, 1, /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_00b5:
	{
		ConfigurationElementCollection_t3315 * L_30 = V_1;
		if (!L_30)
		{
			goto IL_011c;
		}
	}
	{
		V_8 = 0;
		goto IL_010f;
	}

IL_00c3:
	{
		ConfigurationElementCollection_t3315 * L_31 = V_1;
		int32_t L_32 = V_8;
		NullCheck(L_31);
		ConfigurationElement_t3318 * L_33 = ConfigurationElementCollection_BaseGet_m11779(L_31, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		ConfigurationElementCollection_t3315 * L_34 = V_1;
		ConfigurationElement_t3318 * L_35 = V_9;
		NullCheck(L_34);
		Object_t * L_36 = (Object_t *)VirtFuncInvoker1< Object_t *, ConfigurationElement_t3318 * >::Invoke(35 /* System.Object System.Configuration.ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement) */, L_34, L_35);
		V_10 = L_36;
		ConfigurationElementCollection_t3315 * L_37 = V_0;
		Object_t * L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = ConfigurationElementCollection_IndexOfKey_m11782(L_37, L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)(-1)))))
		{
			goto IL_0109;
		}
	}
	{
		ArrayList_t716 * L_40 = (__this->___removed_14);
		if (L_40)
		{
			goto IL_00fb;
		}
	}
	{
		ArrayList_t716 * L_41 = (ArrayList_t716 *)il2cpp_codegen_object_new (ArrayList_t716_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_41, /*hidden argument*/NULL);
		__this->___removed_14 = L_41;
	}

IL_00fb:
	{
		ArrayList_t716 * L_42 = (__this->___removed_14);
		ConfigurationElement_t3318 * L_43 = V_9;
		NullCheck(L_42);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_42, L_43);
	}

IL_0109:
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)((int32_t)L_44+(int32_t)1));
	}

IL_010f:
	{
		int32_t L_45 = V_8;
		ConfigurationElementCollection_t3315 * L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 System.Configuration.ConfigurationElementCollection::get_Count() */, L_46);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00c3;
		}
	}

IL_011c:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationElementCollectionType
#include "System_Configuration_System_Configuration_ConfigurationElemeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Xml.XmlNode
#include "System_Xml_System_Xml_XmlNode.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationErrorsException::.ctor()
extern "C" void ConfigurationErrorsException__ctor_m11802 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method)
{
	{
		ConfigurationException__ctor_m12083(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String)
extern "C" void ConfigurationErrorsException__ctor_m11803 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ConfigurationException__ctor_m12076(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException__ctor_m11804 (ConfigurationErrorsException_t3322 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2940 * L_0 = ___info;
		StreamingContext_t2941  L_1 = ___context;
		ConfigurationException__ctor_m12084(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2940 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m12085(L_2, (String_t*) &_stringLiteral2425, /*hidden argument*/NULL);
		__this->___filename_13 = L_3;
		SerializationInfo_t2940 * L_4 = ___info;
		NullCheck(L_4);
		int32_t L_5 = SerializationInfo_GetInt32_m12086(L_4, (String_t*) &_stringLiteral2426, /*hidden argument*/NULL);
		__this->___line_14 = L_5;
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception)
extern "C" void ConfigurationErrorsException__ctor_m11805 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t57 * L_1 = ___inner;
		ConfigurationException__ctor_m12087(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlNode)
extern "C" void ConfigurationErrorsException__ctor_m11806 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, XmlNode_t735 * ___node, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		XmlNode_t735 * L_1 = ___node;
		String_t* L_2 = ConfigurationErrorsException_GetFilename_m11813(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		XmlNode_t735 * L_3 = ___node;
		int32_t L_4 = ConfigurationErrorsException_GetLineNumber_m11814(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ConfigurationErrorsException__ctor_m11808(__this, L_0, (Exception_t57 *)NULL, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Xml.XmlReader)
extern "C" void ConfigurationErrorsException__ctor_m11807 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		XmlReader_t3372 * L_1 = ___reader;
		String_t* L_2 = ConfigurationErrorsException_GetFilename_m11811(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		XmlReader_t3372 * L_3 = ___reader;
		int32_t L_4 = ConfigurationErrorsException_GetLineNumber_m11812(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ConfigurationErrorsException__ctor_m11808(__this, L_0, (Exception_t57 *)NULL, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::.ctor(System.String,System.Exception,System.String,System.Int32)
extern "C" void ConfigurationErrorsException__ctor_m11808 (ConfigurationErrorsException_t3322 * __this, String_t* ___message, Exception_t57 * ___inner, String_t* ___filename, int32_t ___line, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t57 * L_1 = ___inner;
		ConfigurationException__ctor_m12087(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___filename;
		__this->___filename_13 = L_2;
		int32_t L_3 = ___line;
		__this->___line_14 = L_3;
		return;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::get_BareMessage()
extern "C" String_t* ConfigurationErrorsException_get_BareMessage_m11809 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = ConfigurationException_get_BareMessage_m12088(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::get_Message()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_get_Message_m11810 (ConfigurationErrorsException_t3322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = (__this->___filename_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_2 = (__this->___line_14);
		if (!L_2)
		{
			goto IL_0064;
		}
	}
	{
		ObjectU5BU5D_t700* L_3 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 6));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t700* L_5 = L_3;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral1259);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)(String_t*) &_stringLiteral1259;
		ObjectU5BU5D_t700* L_6 = L_5;
		String_t* L_7 = (__this->___filename_13);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)L_7;
		ObjectU5BU5D_t700* L_8 = L_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 3);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral2423);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 3)) = (Object_t *)(String_t*) &_stringLiteral2423;
		ObjectU5BU5D_t700* L_9 = L_8;
		int32_t L_10 = (__this->___line_14);
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 4);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, 4)) = (Object_t *)L_12;
		ObjectU5BU5D_t700* L_13 = L_9;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 5);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral1260);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 5)) = (Object_t *)(String_t*) &_stringLiteral1260;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m4034(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0080;
	}

IL_0064:
	{
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		String_t* L_16 = (__this->___filename_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m384(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral1259, L_16, (String_t*) &_stringLiteral1260, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0080:
	{
		goto IL_00cf;
	}

IL_0085:
	{
		int32_t L_18 = (__this->___line_14);
		if (!L_18)
		{
			goto IL_00c8;
		}
	}
	{
		ObjectU5BU5D_t700* L_19 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 4));
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 0)) = (Object_t *)L_20;
		ObjectU5BU5D_t700* L_21 = L_19;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral2424);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 1)) = (Object_t *)(String_t*) &_stringLiteral2424;
		ObjectU5BU5D_t700* L_22 = L_21;
		int32_t L_23 = (__this->___line_14);
		int32_t L_24 = L_23;
		Object_t * L_25 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 2);
		ArrayElementTypeCheck (L_22, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 2)) = (Object_t *)L_25;
		ObjectU5BU5D_t700* L_26 = L_22;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 3);
		ArrayElementTypeCheck (L_26, (String_t*) &_stringLiteral1260);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, 3)) = (Object_t *)(String_t*) &_stringLiteral1260;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m4034(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		goto IL_00cf;
	}

IL_00c8:
	{
		String_t* L_28 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Configuration.ConfigurationErrorsException::get_BareMessage() */, __this);
		V_0 = L_28;
	}

IL_00cf:
	{
		String_t* L_29 = V_0;
		return L_29;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlReader)
extern TypeInfo* IConfigErrorInfo_t3379_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11811 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t3379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5823);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B5_0 = {0};
	{
		XmlReader_t3372 * L_0 = ___reader;
		if (!((Object_t *)IsInst(L_0, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Configuration.Internal.IConfigErrorInfo::get_Filename() */, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		XmlReader_t3372 * L_3 = ___reader;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		XmlReader_t3372 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_4);
		G_B5_0 = L_5;
		goto IL_0029;
	}

IL_0028:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlReader)
extern TypeInfo* IConfigErrorInfo_t3379_il2cpp_TypeInfo_var;
extern TypeInfo* IXmlLineInfo_t3377_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11812 (Object_t * __this /* static, unused */, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t3379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5823);
		IXmlLineInfo_t3377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5806);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		XmlReader_t3372 * L_0 = ___reader;
		if (!((Object_t *)IsInst(L_0, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Configuration.Internal.IConfigErrorInfo::get_LineNumber() */, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		return L_2;
	}

IL_0017:
	{
		XmlReader_t3372 * L_3 = ___reader;
		V_0 = ((Object_t *)IsInst(L_3, IXmlLineInfo_t3377_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Object_t * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t3377_il2cpp_TypeInfo_var, L_5);
		G_B5_0 = L_6;
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 0;
	}

IL_0030:
	{
		return G_B5_0;
	}
}
// System.String System.Configuration.ConfigurationErrorsException::GetFilename(System.Xml.XmlNode)
extern TypeInfo* IConfigErrorInfo_t3379_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationErrorsException_GetFilename_m11813 (Object_t * __this /* static, unused */, XmlNode_t735 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t3379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5823);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t735 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000d:
	{
		XmlNode_t735 * L_1 = ___node;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Configuration.Internal.IConfigErrorInfo::get_Filename() */, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationErrorsException::GetLineNumber(System.Xml.XmlNode)
extern TypeInfo* IConfigErrorInfo_t3379_il2cpp_TypeInfo_var;
extern "C" int32_t ConfigurationErrorsException_GetLineNumber_m11814 (Object_t * __this /* static, unused */, XmlNode_t735 * ___node, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConfigErrorInfo_t3379_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5823);
		s_Il2CppMethodIntialized = true;
	}
	{
		XmlNode_t735 * L_0 = ___node;
		if (((Object_t *)IsInst(L_0, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		XmlNode_t735 * L_1 = ___node;
		NullCheck(((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Configuration.Internal.IConfigErrorInfo::get_LineNumber() */, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IConfigErrorInfo_t3379_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationErrorsException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConfigurationErrorsException_GetObjectData_m11815 (ConfigurationErrorsException_t3322 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2940 * L_0 = ___info;
		StreamingContext_t2941  L_1 = ___context;
		ConfigurationException_GetObjectData_m12089(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2940 * L_2 = ___info;
		String_t* L_3 = (__this->___filename_13);
		NullCheck(L_2);
		SerializationInfo_AddValue_m11527(L_2, (String_t*) &_stringLiteral2425, L_3, /*hidden argument*/NULL);
		SerializationInfo_t2940 * L_4 = ___info;
		int32_t L_5 = (__this->___line_14);
		NullCheck(L_4);
		SerializationInfo_AddValue_m12090(L_4, (String_t*) &_stringLiteral2426, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationFileMap
#include "System_Configuration_System_Configuration_ConfigurationFileM.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationFileMap
#include "System_Configuration_System_Configuration_ConfigurationFileMMethodDeclarations.h"

// System.Runtime.InteropServices.RuntimeEnvironment
#include "mscorlib_System_Runtime_InteropServices_RuntimeEnvironmentMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationFileMap::.ctor()
extern "C" void ConfigurationFileMap__ctor_m11816 (ConfigurationFileMap_t3324 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = RuntimeEnvironment_get_SystemConfigurationFile_m12091(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationFileMap::.ctor(System.String)
extern "C" void ConfigurationFileMap__ctor_m11817 (ConfigurationFileMap_t3324 * __this, String_t* ___machineConfigFilename, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___machineConfigFilename;
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationFileMap::get_MachineConfigFilename()
extern "C" String_t* ConfigurationFileMap_get_MachineConfigFilename_m11818 (ConfigurationFileMap_t3324 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___machineConfigFilename_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationFileMap::set_MachineConfigFilename(System.String)
extern "C" void ConfigurationFileMap_set_MachineConfigFilename_m11819 (ConfigurationFileMap_t3324 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___machineConfigFilename_0 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationFileMap::Clone()
extern TypeInfo* ConfigurationFileMap_t3324_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationFileMap_Clone_m11820 (ConfigurationFileMap_t3324 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationFileMap_t3324_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5824);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___machineConfigFilename_0);
		ConfigurationFileMap_t3324 * L_1 = (ConfigurationFileMap_t3324 *)il2cpp_codegen_object_new (ConfigurationFileMap_t3324_il2cpp_TypeInfo_var);
		ConfigurationFileMap__ctor_m11817(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationLocation::.ctor(System.String,System.String,System.Configuration.Configuration,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t3325_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLocation__ctor_m11821 (ConfigurationLocation_t3325 * __this, String_t* ___path, String_t* ___xmlContent, Configuration_t3300 * ___parent, bool ___allowOverride, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		ConfigurationLocation_t3325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5825);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0x0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m407(L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		uint16_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)47))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_003e;
		}
	}
	{
		uint16_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_003e;
		}
	}
	{
		goto IL_0049;
	}

IL_003e:
	{
		ConfigurationErrorsException_t3322 * L_8 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_8, (String_t*) &_stringLiteral2427, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0049:
	{
		String_t* L_9 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationLocation_t3325_il2cpp_TypeInfo_var);
		CharU5BU5D_t715* L_10 = ((ConfigurationLocation_t3325_StaticFields*)ConfigurationLocation_t3325_il2cpp_TypeInfo_var->static_fields)->___pathTrimChars_0;
		NullCheck(L_9);
		String_t* L_11 = String_TrimEnd_m12092(L_9, L_10, /*hidden argument*/NULL);
		___path = L_11;
	}

IL_0056:
	{
		String_t* L_12 = ___path;
		__this->___path_1 = L_12;
		String_t* L_13 = ___xmlContent;
		__this->___xmlContent_4 = L_13;
		Configuration_t3300 * L_14 = ___parent;
		__this->___parent_3 = L_14;
		bool L_15 = ___allowOverride;
		__this->___allowOverride_6 = L_15;
		return;
	}
}
// System.Void System.Configuration.ConfigurationLocation::.cctor()
extern TypeInfo* CharU5BU5D_t715_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t3325_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLocation__cctor_m11822 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		ConfigurationLocation_t3325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5825);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t715* L_0 = ((CharU5BU5D_t715*)SZArrayNew(CharU5BU5D_t715_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)47);
		((ConfigurationLocation_t3325_StaticFields*)ConfigurationLocation_t3325_il2cpp_TypeInfo_var->static_fields)->___pathTrimChars_0 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationLocation::get_Path()
extern "C" String_t* ConfigurationLocation_get_Path_m11823 (ConfigurationLocation_t3325 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___path_1);
		return L_0;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationLocation::OpenConfiguration()
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t3300_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * ConfigurationLocation_OpenConfiguration_m11824 (ConfigurationLocation_t3325 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		Configuration_t3300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5797);
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5805);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Configuration_t3300 * V_0 = {0};
	String_t* V_1 = {0};
	XmlTextReader_t3348 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Configuration_t3300 * L_0 = (__this->___configuration_2);
		if (L_0)
		{
			goto IL_00b6;
		}
	}
	{
		bool L_1 = (__this->___parentResolved_5);
		if (L_1)
		{
			goto IL_005d;
		}
	}
	{
		Configuration_t3300 * L_2 = (__this->___parent_3);
		NullCheck(L_2);
		Configuration_t3300 * L_3 = Configuration_GetParentWithFile_m11688(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Configuration_t3300 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_005d;
		}
	}
	{
		Configuration_t3300 * L_5 = (__this->___parent_3);
		NullCheck(L_5);
		Object_t * L_6 = Configuration_get_ConfigHost_m11689(L_5, /*hidden argument*/NULL);
		Configuration_t3300 * L_7 = (__this->___parent_3);
		NullCheck(L_7);
		String_t* L_8 = Configuration_get_LocationConfigPath_m11690(L_7, /*hidden argument*/NULL);
		String_t* L_9 = (__this->___path_1);
		NullCheck(L_6);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* System.String System.Configuration.Internal.IInternalConfigHost::GetConfigPathFromLocationSubPath(System.String,System.String) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_6, L_8, L_9);
		V_1 = L_10;
		Configuration_t3300 * L_11 = V_0;
		String_t* L_12 = V_1;
		Configuration_t3300 * L_13 = (__this->___parent_3);
		NullCheck(L_11);
		Configuration_t3300 * L_14 = Configuration_FindLocationConfiguration_m11684(L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->___parent_3 = L_14;
	}

IL_005d:
	{
		Configuration_t3300 * L_15 = (__this->___parent_3);
		String_t* L_16 = (__this->___path_1);
		Configuration_t3300 * L_17 = (Configuration_t3300 *)il2cpp_codegen_object_new (Configuration_t3300_il2cpp_TypeInfo_var);
		Configuration__ctor_m11682(L_17, L_15, L_16, /*hidden argument*/NULL);
		__this->___configuration_2 = L_17;
		String_t* L_18 = (__this->___xmlContent_4);
		StringReader_t259 * L_19 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
		StringReader__ctor_m3999(L_19, L_18, /*hidden argument*/NULL);
		String_t* L_20 = (__this->___path_1);
		ConfigXmlTextReader_t3347 * L_21 = (ConfigXmlTextReader_t3347 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m11918(L_21, L_19, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		Configuration_t3300 * L_22 = (__this->___configuration_2);
		XmlTextReader_t3348 * L_23 = V_2;
		bool L_24 = (__this->___allowOverride_6);
		NullCheck(L_22);
		Configuration_ReadData_m11705(L_22, L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xAF, FINALLY_00a2);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			XmlTextReader_t3348 * L_25 = V_2;
			if (!L_25)
			{
				goto IL_00ae;
			}
		}

IL_00a8:
		{
			XmlTextReader_t3348 * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_26);
		}

IL_00ae:
		{
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00af:
	{
		__this->___xmlContent_4 = (String_t*)NULL;
	}

IL_00b6:
	{
		Configuration_t3300 * L_27 = (__this->___configuration_2);
		return L_27;
	}
}
// System.Void System.Configuration.ConfigurationLocation::SetParentConfiguration(System.Configuration.Configuration)
extern "C" void ConfigurationLocation_SetParentConfiguration_m11825 (ConfigurationLocation_t3325 * __this, Configuration_t3300 * ___parent, const MethodInfo* method)
{
	{
		__this->___parentResolved_5 = 1;
		Configuration_t3300 * L_0 = ___parent;
		__this->___parent_3 = L_0;
		Configuration_t3300 * L_1 = (__this->___configuration_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		Configuration_t3300 * L_2 = (__this->___configuration_2);
		Configuration_t3300 * L_3 = ___parent;
		NullCheck(L_2);
		Configuration_set_Parent_m11687(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.ReadOnlyCollectionBase
#include "mscorlib_System_Collections_ReadOnlyCollectionBaseMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationLocationCollection::.ctor()
extern "C" void ConfigurationLocationCollection__ctor_m11826 (ConfigurationLocationCollection_t3307 * __this, const MethodInfo* method)
{
	{
		ReadOnlyCollectionBase__ctor_m12093(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationLocationCollection::Add(System.Configuration.ConfigurationLocation)
extern "C" void ConfigurationLocationCollection_Add_m11827 (ConfigurationLocationCollection_t3307 * __this, ConfigurationLocation_t3325 * ___loc, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = ReadOnlyCollectionBase_get_InnerList_m12094(__this, /*hidden argument*/NULL);
		ConfigurationLocation_t3325 * L_1 = ___loc;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Configuration.ConfigurationLocation System.Configuration.ConfigurationLocationCollection::Find(System.String)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t3325_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConfigurationLocation_t3325 * ConfigurationLocationCollection_Find_m11828 (ConfigurationLocationCollection_t3307 * __this, String_t* ___location, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationLocation_t3325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5825);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationLocation_t3325 * V_0 = {0};
	Object_t * V_1 = {0};
	ConfigurationLocation_t3325 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t716 * L_0 = ReadOnlyCollectionBase_get_InnerList_m12094(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_2);
			V_0 = ((ConfigurationLocation_t3325 *)Castclass(L_3, ConfigurationLocation_t3325_il2cpp_TypeInfo_var));
			ConfigurationLocation_t3325 * L_4 = V_0;
			NullCheck(L_4);
			String_t* L_5 = ConfigurationLocation_get_Path_m11823(L_4, /*hidden argument*/NULL);
			String_t* L_6 = ___location;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			int32_t L_7 = String_Compare_m12095(NULL /*static, unused*/, L_5, L_6, 5, /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_0036;
			}
		}

IL_002f:
		{
			ConfigurationLocation_t3325 * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x5A, FINALLY_0046);
		}

IL_0036:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_3 = ((Object_t *)IsInst(L_11, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_3;
			if (L_12)
			{
				goto IL_0051;
			}
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_0051:
		{
			Object_t * L_13 = V_3;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0058:
	{
		return (ConfigurationLocation_t3325 *)NULL;
	}

IL_005a:
	{
		ConfigurationLocation_t3325 * L_14 = V_2;
		return L_14;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationLockType
#include "System_Configuration_System_Configuration_ConfigurationLockTMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationLockCollection::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationLockType)
extern TypeInfo* ArrayList_t716_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection__ctor_m11829 (ConfigurationLockCollection_t3317 * __this, ConfigurationElement_t3318 * ___element, int32_t ___lockType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t716_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ArrayList_t716 * L_0 = (ArrayList_t716 *)il2cpp_codegen_object_new (ArrayList_t716_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_0, /*hidden argument*/NULL);
		__this->___names_0 = L_0;
		ConfigurationElement_t3318 * L_1 = ___element;
		__this->___element_1 = L_1;
		int32_t L_2 = ___lockType;
		__this->___lockType_2 = L_2;
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ConfigurationLockCollection_System_Collections_ICollection_CopyTo_m11830 (ConfigurationLockCollection_t3317 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___names_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::CheckName(System.String)
extern TypeInfo* Hashtable_t714_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* ICollection_t772_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection_CheckName_m11831 (ConfigurationLockCollection_t3317 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t714_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		ICollection_t772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ConfigurationProperty_t3333 * V_1 = {0};
	Object_t * V_2 = {0};
	ConfigurationElementCollection_t3315 * V_3 = {0};
	StringU5BU5D_t75* V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B17_0 = 0;
	ObjectU5BU5D_t700* G_B17_1 = {0};
	ObjectU5BU5D_t700* G_B17_2 = {0};
	String_t* G_B17_3 = {0};
	int32_t G_B16_0 = 0;
	ObjectU5BU5D_t700* G_B16_1 = {0};
	ObjectU5BU5D_t700* G_B16_2 = {0};
	String_t* G_B16_3 = {0};
	String_t* G_B18_0 = {0};
	int32_t G_B18_1 = 0;
	ObjectU5BU5D_t700* G_B18_2 = {0};
	ObjectU5BU5D_t700* G_B18_3 = {0};
	String_t* G_B18_4 = {0};
	int32_t G_B20_0 = 0;
	ObjectU5BU5D_t700* G_B20_1 = {0};
	ObjectU5BU5D_t700* G_B20_2 = {0};
	String_t* G_B20_3 = {0};
	int32_t G_B19_0 = 0;
	ObjectU5BU5D_t700* G_B19_1 = {0};
	ObjectU5BU5D_t700* G_B19_2 = {0};
	String_t* G_B19_3 = {0};
	String_t* G_B21_0 = {0};
	int32_t G_B21_1 = 0;
	ObjectU5BU5D_t700* G_B21_2 = {0};
	ObjectU5BU5D_t700* G_B21_3 = {0};
	String_t* G_B21_4 = {0};
	{
		int32_t L_0 = (__this->___lockType_2);
		V_0 = ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		Hashtable_t714 * L_1 = (__this->___valid_name_hash_4);
		if (L_1)
		{
			goto IL_0124;
		}
	}
	{
		Hashtable_t714 * L_2 = (Hashtable_t714 *)il2cpp_codegen_object_new (Hashtable_t714_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_2, /*hidden argument*/NULL);
		__this->___valid_name_hash_4 = L_2;
		ConfigurationElement_t3318 * L_3 = (__this->___element_1);
		NullCheck(L_3);
		ConfigurationPropertyCollection_t3314 * L_4 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_2 = L_5;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_0038:
		{
			Object_t * L_6 = V_2;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
			V_1 = ((ConfigurationProperty_t3333 *)Castclass(L_7, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			bool L_8 = V_0;
			ConfigurationProperty_t3333 * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = ConfigurationProperty_get_IsElement_m11860(L_9, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
			{
				goto IL_0055;
			}
		}

IL_0050:
		{
			goto IL_006c;
		}

IL_0055:
		{
			Hashtable_t714 * L_11 = (__this->___valid_name_hash_4);
			ConfigurationProperty_t3333 * L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13 = ConfigurationProperty_get_Name_m11855(L_12, /*hidden argument*/NULL);
			bool L_14 = 1;
			Object_t * L_15 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_14);
			NullCheck(L_11);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_11, L_13, L_15);
		}

IL_006c:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_16);
			if (L_17)
			{
				goto IL_0038;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x91, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_18 = V_2;
			V_5 = ((Object_t *)IsInst(L_18, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_19 = V_5;
			if (L_19)
			{
				goto IL_0089;
			}
		}

IL_0088:
		{
			IL2CPP_END_FINALLY(124)
		}

IL_0089:
		{
			Object_t * L_20 = V_5;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_20);
			IL2CPP_END_FINALLY(124)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0091:
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_00e8;
		}
	}
	{
		ConfigurationElement_t3318 * L_22 = (__this->___element_1);
		NullCheck(L_22);
		ConfigurationElementCollection_t3315 * L_23 = ConfigurationElement_GetDefaultCollection_m11727(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		Hashtable_t714 * L_24 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t3315 * L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26 = ConfigurationElementCollection_get_AddElementName_m11773(L_25, /*hidden argument*/NULL);
		bool L_27 = 1;
		Object_t * L_28 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_24, L_26, L_28);
		Hashtable_t714 * L_29 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t3315 * L_30 = V_3;
		NullCheck(L_30);
		String_t* L_31 = ConfigurationElementCollection_get_ClearElementName_m11774(L_30, /*hidden argument*/NULL);
		bool L_32 = 1;
		Object_t * L_33 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_29);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_29, L_31, L_33);
		Hashtable_t714 * L_34 = (__this->___valid_name_hash_4);
		ConfigurationElementCollection_t3315 * L_35 = V_3;
		NullCheck(L_35);
		String_t* L_36 = ConfigurationElementCollection_get_RemoveElementName_m11775(L_35, /*hidden argument*/NULL);
		bool L_37 = 1;
		Object_t * L_38 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_34);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_34, L_36, L_38);
	}

IL_00e8:
	{
		Hashtable_t714 * L_39 = (__this->___valid_name_hash_4);
		NullCheck(L_39);
		Object_t * L_40 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_39);
		NullCheck(L_40);
		int32_t L_41 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t772_il2cpp_TypeInfo_var, L_40);
		V_4 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_41));
		Hashtable_t714 * L_42 = (__this->___valid_name_hash_4);
		NullCheck(L_42);
		Object_t * L_43 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Collections.ICollection System.Collections.Hashtable::get_Keys() */, L_42);
		StringU5BU5D_t75* L_44 = V_4;
		NullCheck(L_43);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t772_il2cpp_TypeInfo_var, L_43, (Array_t *)(Array_t *)L_44, 0);
		StringU5BU5D_t75* L_45 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Join_m3947(NULL /*static, unused*/, (String_t*) &_stringLiteral303, L_45, /*hidden argument*/NULL);
		__this->___valid_names_5 = L_46;
	}

IL_0124:
	{
		Hashtable_t714 * L_47 = (__this->___valid_name_hash_4);
		String_t* L_48 = ___name;
		NullCheck(L_47);
		Object_t * L_49 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_47, L_48);
		if (L_49)
		{
			goto IL_0188;
		}
	}
	{
		ObjectU5BU5D_t700* L_50 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 4));
		String_t* L_51 = ___name;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 0)) = (Object_t *)L_51;
		ObjectU5BU5D_t700* L_52 = L_50;
		String_t* L_53 = (__this->___valid_names_5);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		ArrayElementTypeCheck (L_52, L_53);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 1)) = (Object_t *)L_53;
		ObjectU5BU5D_t700* L_54 = L_52;
		bool L_55 = V_0;
		G_B16_0 = 2;
		G_B16_1 = L_54;
		G_B16_2 = L_54;
		G_B16_3 = (String_t*) &_stringLiteral2428;
		if (!L_55)
		{
			G_B17_0 = 2;
			G_B17_1 = L_54;
			G_B17_2 = L_54;
			G_B17_3 = (String_t*) &_stringLiteral2428;
			goto IL_015f;
		}
	}
	{
		G_B18_0 = (String_t*) &_stringLiteral2429;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		G_B18_4 = G_B16_3;
		goto IL_0164;
	}

IL_015f:
	{
		G_B18_0 = (String_t*) &_stringLiteral2430;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
		G_B18_4 = G_B17_3;
	}

IL_0164:
	{
		NullCheck(G_B18_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B18_2, G_B18_1);
		ArrayElementTypeCheck (G_B18_2, G_B18_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B18_2, G_B18_1)) = (Object_t *)G_B18_0;
		ObjectU5BU5D_t700* L_56 = G_B18_3;
		bool L_57 = V_0;
		G_B19_0 = 3;
		G_B19_1 = L_56;
		G_B19_2 = L_56;
		G_B19_3 = G_B18_4;
		if (!L_57)
		{
			G_B20_0 = 3;
			G_B20_1 = L_56;
			G_B20_2 = L_56;
			G_B20_3 = G_B18_4;
			goto IL_0177;
		}
	}
	{
		G_B21_0 = (String_t*) &_stringLiteral2431;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		G_B21_4 = G_B19_3;
		goto IL_017c;
	}

IL_0177:
	{
		G_B21_0 = (String_t*) &_stringLiteral2432;
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
		G_B21_4 = G_B20_3;
	}

IL_017c:
	{
		NullCheck(G_B21_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B21_2, G_B21_1);
		ArrayElementTypeCheck (G_B21_2, G_B21_0);
		*((Object_t **)(Object_t **)SZArrayLdElema(G_B21_2, G_B21_1)) = (Object_t *)G_B21_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Format_m3839(NULL /*static, unused*/, G_B21_4, G_B21_3, /*hidden argument*/NULL);
		ConfigurationErrorsException_t3322 * L_59 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_59, L_58, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_59);
	}

IL_0188:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::Add(System.String)
extern "C" void ConfigurationLockCollection_Add_m11832 (ConfigurationLockCollection_t3317 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigurationLockCollection_CheckName_m11831(__this, L_0, /*hidden argument*/NULL);
		ArrayList_t716 * L_1 = (__this->___names_0);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_1, L_2);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		ArrayList_t716 * L_4 = (__this->___names_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		__this->___is_modified_3 = 1;
	}

IL_002c:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::Clear()
extern "C" void ConfigurationLockCollection_Clear_m11833 (ConfigurationLockCollection_t3317 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		__this->___is_modified_3 = 1;
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationLockCollection::GetEnumerator()
extern "C" Object_t * ConfigurationLockCollection_GetEnumerator_m11834 (ConfigurationLockCollection_t3317 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Configuration.ConfigurationLockCollection::SetFromList(System.String)
extern TypeInfo* CharU5BU5D_t715_il2cpp_TypeInfo_var;
extern "C" void ConfigurationLockCollection_SetFromList_m11835 (ConfigurationLockCollection_t3317 * __this, String_t* ___attributeList, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t715* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	String_t* V_2 = {0};
	StringU5BU5D_t75* V_3 = {0};
	int32_t V_4 = 0;
	{
		ConfigurationLockCollection_Clear_m11833(__this, /*hidden argument*/NULL);
		CharU5BU5D_t715* L_0 = ((CharU5BU5D_t715*)SZArrayNew(CharU5BU5D_t715_il2cpp_TypeInfo_var, 1));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)44);
		V_0 = L_0;
		String_t* L_1 = ___attributeList;
		CharU5BU5D_t715* L_2 = V_0;
		NullCheck(L_1);
		StringU5BU5D_t75* L_3 = String_Split_m3872(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		StringU5BU5D_t75* L_4 = V_1;
		V_3 = L_4;
		V_4 = 0;
		goto IL_003b;
	}

IL_0024:
	{
		StringU5BU5D_t75* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_5, L_7));
		String_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9 = String_Trim_m413(L_8, /*hidden argument*/NULL);
		ConfigurationLockCollection_Add_m11832(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_4;
		StringU5BU5D_t75* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Configuration.ConfigurationLockCollection::get_Count()
extern "C" int32_t ConfigurationLockCollection_get_Count_m11836 (ConfigurationLockCollection_t3317 * __this, const MethodInfo* method)
{
	{
		ArrayList_t716 * L_0 = (__this->___names_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Configuration.ConfigurationLockCollection::get_IsSynchronized()
extern "C" bool ConfigurationLockCollection_get_IsSynchronized_m11837 (ConfigurationLockCollection_t3317 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.ConfigurationLockCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationLockCollection_get_SyncRoot_m11838 (ConfigurationLockCollection_t3317 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Configuration.ConfigurationManager
#include "System_Configuration_System_Configuration_ConfigurationManag.h"
#ifndef _MSC_VER
#else
#endif

// System.Configuration.InternalConfigurationFactory
#include "System_Configuration_System_Configuration_InternalConfigurat.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.Reflection.AssemblyVersionAttribute
#include "mscorlib_System_Reflection_AssemblyVersionAttribute.h"
// System.Configuration.ExeConfigurationFileMap
#include "System_Configuration_System_Configuration_ExeConfigurationFi.h"
// System.AppDomainSetup
#include "mscorlib_System_AppDomainSetup.h"
// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"
// System.Configuration.InternalConfigurationFactory
#include "System_Configuration_System_Configuration_InternalConfiguratMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
// System.Reflection.AssemblyVersionAttribute
#include "mscorlib_System_Reflection_AssemblyVersionAttributeMethodDeclarations.h"
// System.Configuration.ExeConfigurationFileMap
#include "System_Configuration_System_Configuration_ExeConfigurationFiMethodDeclarations.h"
// System.AppDomainSetup
#include "mscorlib_System_AppDomainSetupMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationManager::.cctor()
extern TypeInfo* InternalConfigurationFactory_t3328_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern TypeInfo* ClientConfigurationSystem_t3301_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void ConfigurationManager__cctor_m11839 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalConfigurationFactory_t3328_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5826);
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		ClientConfigurationSystem_t3301_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5827);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		InternalConfigurationFactory_t3328 * L_0 = (InternalConfigurationFactory_t3328 *)il2cpp_codegen_object_new (InternalConfigurationFactory_t3328_il2cpp_TypeInfo_var);
		InternalConfigurationFactory__ctor_m11950(L_0, /*hidden argument*/NULL);
		((ConfigurationManager_t3330_StaticFields*)ConfigurationManager_t3330_il2cpp_TypeInfo_var->static_fields)->___configFactory_0 = L_0;
		ClientConfigurationSystem_t3301 * L_1 = (ClientConfigurationSystem_t3301 *)il2cpp_codegen_object_new (ClientConfigurationSystem_t3301_il2cpp_TypeInfo_var);
		ClientConfigurationSystem__ctor_m11670(L_1, /*hidden argument*/NULL);
		((ConfigurationManager_t3330_StaticFields*)ConfigurationManager_t3330_il2cpp_TypeInfo_var->static_fields)->___configSystem_1 = L_1;
		Object_t * L_2 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_2, /*hidden argument*/NULL);
		((ConfigurationManager_t3330_StaticFields*)ConfigurationManager_t3330_il2cpp_TypeInfo_var->static_fields)->___lockobj_2 = L_2;
		return;
	}
}
// System.String System.Configuration.ConfigurationManager::GetAssemblyInfo(System.Reflection.Assembly)
extern const Il2CppType* AssemblyProductAttribute_t1120_0_0_0_var;
extern const Il2CppType* AssemblyVersionAttribute_t3380_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t1120_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyVersionAttribute_t3380_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2164_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationManager_GetAssemblyInfo_m11840 (Object_t * __this /* static, unused */, Assembly_t787 * ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyProductAttribute_t1120_0_0_0_var = il2cpp_codegen_type_from_index(1998);
		AssemblyVersionAttribute_t3380_0_0_0_var = il2cpp_codegen_type_from_index(5828);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		AssemblyProductAttribute_t1120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1998);
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		AssemblyVersionAttribute_t3380_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5828);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Path_t2164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t700* V_0 = {0};
	StringBuilder_t261 * V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	{
		Assembly_t787 * L_0 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(AssemblyProductAttribute_t1120_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ObjectU5BU5D_t700* L_2 = (ObjectU5BU5D_t700*)VirtFuncInvoker2< ObjectU5BU5D_t700*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, 0);
		V_0 = L_2;
		ObjectU5BU5D_t700* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t700* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t700* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 0);
		int32_t L_6 = 0;
		NullCheck(((AssemblyProductAttribute_t1120 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), AssemblyProductAttribute_t1120_il2cpp_TypeInfo_var)));
		String_t* L_7 = AssemblyProductAttribute_get_Product_m12096(((AssemblyProductAttribute_t1120 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), AssemblyProductAttribute_t1120_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_0034:
	{
		AppDomain_t2167 * L_8 = AppDomain_get_CurrentDomain_m7957(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.AppDomain::get_FriendlyName() */, L_8);
		V_2 = L_9;
	}

IL_003f:
	{
		StringBuilder_t261 * L_10 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4000(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		StringBuilder_t261 * L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_m4007(L_11, (String_t*) &_stringLiteral2433, /*hidden argument*/NULL);
		StringBuilder_t261 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_12);
		V_3 = L_13;
		Assembly_t787 * L_14 = ___a;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(AssemblyVersionAttribute_t3380_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		ObjectU5BU5D_t700* L_16 = (ObjectU5BU5D_t700*)VirtFuncInvoker2< ObjectU5BU5D_t700*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean) */, L_14, L_15, 0);
		V_0 = L_16;
		ObjectU5BU5D_t700* L_17 = V_0;
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		ObjectU5BU5D_t700* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_18)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		ObjectU5BU5D_t700* L_19 = V_0;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		int32_t L_20 = 0;
		NullCheck(((AssemblyVersionAttribute_t3380 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), AssemblyVersionAttribute_t3380_il2cpp_TypeInfo_var)));
		String_t* L_21 = AssemblyVersionAttribute_get_Version_m12097(((AssemblyVersionAttribute_t3380 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_19, L_20)), AssemblyVersionAttribute_t3380_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_0094;
	}

IL_008d:
	{
		V_4 = (String_t*) &_stringLiteral2434;
	}

IL_0094:
	{
		String_t* L_22 = V_2;
		String_t* L_23 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral2435, L_22, L_23, /*hidden argument*/NULL);
		String_t* L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_26 = Path_Combine_m7948(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		return L_26;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationManager::OpenExeConfigurationInternal(System.Configuration.ConfigurationUserLevel,System.Reflection.Assembly,System.String)
extern const Il2CppType* ExeConfigurationHost_t3358_0_0_0_var;
extern TypeInfo* ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2164_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t729_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigConfigurationFactory_t3374_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * ConfigurationManager_OpenExeConfigurationInternal_m11841 (Object_t * __this /* static, unused */, int32_t ___userLevel, Assembly_t787 * ___calling_assembly, String_t* ___exePath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationHost_t3358_0_0_0_var = il2cpp_codegen_type_from_index(5829);
		ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		Path_t2164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		ArgumentException_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		IInternalConfigConfigurationFactory_t3374_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5832);
		s_Il2CppMethodIntialized = true;
	}
	ExeConfigurationFileMap_t3353 * V_0 = {0};
	Exception_t57 * V_1 = {0};
	int32_t V_2 = {0};
	{
		ExeConfigurationFileMap_t3353 * L_0 = (ExeConfigurationFileMap_t3353 *)il2cpp_codegen_object_new (ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var);
		ExeConfigurationFileMap__ctor_m11934(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___userLevel;
		V_2 = L_1;
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)20))))
		{
			goto IL_00d1;
		}
	}
	{
		goto IL_0104;
	}

IL_0023:
	{
		String_t* L_5 = ___exePath;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_6 = ___exePath;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}

IL_0034:
	{
		ExeConfigurationFileMap_t3353 * L_8 = V_0;
		AppDomain_t2167 * L_9 = AppDomain_get_CurrentDomain_m7957(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		AppDomainSetup_t3381 * L_10 = AppDomain_get_SetupInformation_m12098(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.AppDomainSetup::get_ConfigurationFile() */, L_10);
		NullCheck(L_8);
		ExeConfigurationFileMap_set_ExeConfigFilename_m11936(L_8, L_11, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_004e:
	{
		String_t* L_12 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		bool L_13 = Path_IsPathRooted_m12099(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_14 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_15 = Path_GetFullPath_m12100(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		___exePath = L_15;
	}

IL_0061:
	{
		String_t* L_16 = ___exePath;
		bool L_17 = File_Exists_m12101(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0088;
		}
	}
	{
		ArgumentException_t729 * L_18 = (ArgumentException_t729 *)il2cpp_codegen_object_new (ArgumentException_t729_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_18, (String_t*) &_stringLiteral2436, (String_t*) &_stringLiteral2437, /*hidden argument*/NULL);
		V_1 = L_18;
		Exception_t57 * L_19 = V_1;
		ConfigurationErrorsException_t3322 * L_20 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11805(L_20, (String_t*) &_stringLiteral2438, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0088:
	{
		ExeConfigurationFileMap_t3353 * L_21 = V_0;
		String_t* L_22 = ___exePath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m408(NULL /*static, unused*/, L_22, (String_t*) &_stringLiteral2439, /*hidden argument*/NULL);
		NullCheck(L_21);
		ExeConfigurationFileMap_set_ExeConfigFilename_m11936(L_21, L_23, /*hidden argument*/NULL);
	}

IL_0099:
	{
		goto IL_0104;
	}

IL_009e:
	{
		ExeConfigurationFileMap_t3353 * L_24 = V_0;
		String_t* L_25 = Environment_GetFolderPath_m11534(NULL /*static, unused*/, ((int32_t)26), /*hidden argument*/NULL);
		Assembly_t787 * L_26 = ___calling_assembly;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		String_t* L_27 = ConfigurationManager_GetAssemblyInfo_m11840(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_28 = Path_Combine_m7948(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ExeConfigurationFileMap_set_RoamingUserConfigFilename_m11940(L_24, L_28, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t3353 * L_29 = V_0;
		ExeConfigurationFileMap_t3353 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_30, /*hidden argument*/NULL);
		String_t* L_32 = Path_Combine_m7948(NULL /*static, unused*/, L_31, (String_t*) &_stringLiteral2440, /*hidden argument*/NULL);
		NullCheck(L_29);
		ExeConfigurationFileMap_set_RoamingUserConfigFilename_m11940(L_29, L_32, /*hidden argument*/NULL);
		goto IL_00d1;
	}

IL_00d1:
	{
		ExeConfigurationFileMap_t3353 * L_33 = V_0;
		String_t* L_34 = Environment_GetFolderPath_m11534(NULL /*static, unused*/, ((int32_t)28), /*hidden argument*/NULL);
		Assembly_t787 * L_35 = ___calling_assembly;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		String_t* L_36 = ConfigurationManager_GetAssemblyInfo_m11840(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_37 = Path_Combine_m7948(NULL /*static, unused*/, L_34, L_36, /*hidden argument*/NULL);
		NullCheck(L_33);
		ExeConfigurationFileMap_set_LocalUserConfigFilename_m11938(L_33, L_37, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t3353 * L_38 = V_0;
		ExeConfigurationFileMap_t3353 * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_39, /*hidden argument*/NULL);
		String_t* L_41 = Path_Combine_m7948(NULL /*static, unused*/, L_40, (String_t*) &_stringLiteral2440, /*hidden argument*/NULL);
		NullCheck(L_38);
		ExeConfigurationFileMap_set_LocalUserConfigFilename_m11938(L_38, L_41, /*hidden argument*/NULL);
		goto IL_0104;
	}

IL_0104:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		Object_t * L_42 = ConfigurationManager_get_ConfigurationFactory_m11842(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ExeConfigurationHost_t3358_0_0_0_var), /*hidden argument*/NULL);
		ObjectU5BU5D_t700* L_44 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 2));
		ExeConfigurationFileMap_t3353 * L_45 = V_0;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, 0);
		ArrayElementTypeCheck (L_44, L_45);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_44, 0)) = (Object_t *)L_45;
		ObjectU5BU5D_t700* L_46 = L_44;
		int32_t L_47 = ___userLevel;
		int32_t L_48 = L_47;
		Object_t * L_49 = Box(ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 1);
		ArrayElementTypeCheck (L_46, L_49);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 1)) = (Object_t *)L_49;
		NullCheck(L_42);
		Configuration_t3300 * L_50 = (Configuration_t3300 *)InterfaceFuncInvoker2< Configuration_t3300 *, Type_t *, ObjectU5BU5D_t700* >::Invoke(0 /* System.Configuration.Configuration System.Configuration.Internal.IInternalConfigConfigurationFactory::Create(System.Type,System.Object[]) */, IInternalConfigConfigurationFactory_t3374_il2cpp_TypeInfo_var, L_42, L_43, L_46);
		return L_50;
	}
}
// System.Configuration.Internal.IInternalConfigConfigurationFactory System.Configuration.ConfigurationManager::get_ConfigurationFactory()
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_get_ConfigurationFactory_m11842 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		InternalConfigurationFactory_t3328 * L_0 = ((ConfigurationManager_t3330_StaticFields*)ConfigurationManager_t3330_il2cpp_TypeInfo_var->static_fields)->___configFactory_0;
		return L_0;
	}
}
// System.Configuration.Internal.IInternalConfigSystem System.Configuration.ConfigurationManager::get_ConfigurationSystem()
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_get_ConfigurationSystem_m11843 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((ConfigurationManager_t3330_StaticFields*)ConfigurationManager_t3330_il2cpp_TypeInfo_var->static_fields)->___configSystem_1;
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationManager::GetSection(System.String)
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigSystem_t3329_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationSection_t3340_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationManager_GetSection_m11844 (Object_t * __this /* static, unused */, String_t* ___sectionName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		IInternalConfigSystem_t3329_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5833);
		ConfigurationSection_t3340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5802);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		Object_t * L_0 = ConfigurationManager_get_ConfigurationSystem_m11843(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___sectionName;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker1< Object_t *, String_t* >::Invoke(0 /* System.Object System.Configuration.Internal.IInternalConfigSystem::GetSection(System.String) */, IInternalConfigSystem_t3329_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!((ConfigurationSection_t3340 *)IsInst(L_3, ConfigurationSection_t3340_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(((ConfigurationSection_t3340 *)Castclass(L_4, ConfigurationSection_t3340_il2cpp_TypeInfo_var)));
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, ((ConfigurationSection_t3340 *)Castclass(L_4, ConfigurationSection_t3340_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0023:
	{
		Object_t * L_6 = V_0;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.DefaultValidator
#include "System_Configuration_System_Configuration_DefaultValidator.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.ComponentModel.TypeDescriptor
#include "System_System_ComponentModel_TypeDescriptorMethodDeclarations.h"
// System.Configuration.DefaultValidator
#include "System_Configuration_System_Configuration_DefaultValidatorMethodDeclarations.h"
// System.ComponentModel.TypeConverter
#include "System_System_ComponentModel_TypeConverterMethodDeclarations.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type)
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* TypeDescriptor_t3382_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t3350_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m11845 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		TypeDescriptor_t3382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		DefaultValidator_t3350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5835);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		Object_t * L_2 = ((ConfigurationProperty_t3333_StaticFields*)ConfigurationProperty_t3333_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3382_il2cpp_TypeInfo_var);
		TypeConverter_t3331 * L_4 = TypeDescriptor_GetConverter_m12102(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t3350 * L_5 = (DefaultValidator_t3350 *)il2cpp_codegen_object_new (DefaultValidator_t3350_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m11928(L_5, /*hidden argument*/NULL);
		ConfigurationProperty__ctor_m11849(__this, L_0, L_1, L_2, L_4, L_5, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object)
extern TypeInfo* TypeDescriptor_t3382_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t3350_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m11846 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t3382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		DefaultValidator_t3350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5835);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3382_il2cpp_TypeInfo_var);
		TypeConverter_t3331 * L_4 = TypeDescriptor_GetConverter_m12102(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t3350 * L_5 = (DefaultValidator_t3350 *)il2cpp_codegen_object_new (DefaultValidator_t3350_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m11928(L_5, /*hidden argument*/NULL);
		ConfigurationProperty__ctor_m11849(__this, L_0, L_1, L_2, L_4, L_5, 0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.Configuration.ConfigurationPropertyOptions)
extern TypeInfo* TypeDescriptor_t3382_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t3350_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m11847 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, int32_t ___flags, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t3382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		DefaultValidator_t3350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5835);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3382_il2cpp_TypeInfo_var);
		TypeConverter_t3331 * L_4 = TypeDescriptor_GetConverter_m12102(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		DefaultValidator_t3350 * L_5 = (DefaultValidator_t3350 *)il2cpp_codegen_object_new (DefaultValidator_t3350_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m11928(L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___flags;
		ConfigurationProperty__ctor_m11849(__this, L_0, L_1, L_2, L_4, L_5, L_6, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationProperty__ctor_m11848 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3331 * ___converter, ConfigurationValidatorBase_t3332 * ___validation, int32_t ___flags, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___type;
		Object_t * L_2 = ___default_value;
		TypeConverter_t3331 * L_3 = ___converter;
		ConfigurationValidatorBase_t3332 * L_4 = ___validation;
		int32_t L_5 = ___flags;
		ConfigurationProperty__ctor_m11849(__this, L_0, L_1, L_2, L_3, L_4, L_5, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.ctor(System.String,System.Type,System.Object,System.ComponentModel.TypeConverter,System.Configuration.ConfigurationValidatorBase,System.Configuration.ConfigurationPropertyOptions,System.String)
extern TypeInfo* TypeDescriptor_t3382_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultValidator_t3350_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__ctor_m11849 (ConfigurationProperty_t3333 * __this, String_t* ___name, Type_t * ___type, Object_t * ___default_value, TypeConverter_t3331 * ___converter, ConfigurationValidatorBase_t3332 * ___validation, int32_t ___flags, String_t* ___description, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeDescriptor_t3382_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5834);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		DefaultValidator_t3350_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5835);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	ConfigurationProperty_t3333 * G_B2_0 = {0};
	ConfigurationProperty_t3333 * G_B1_0 = {0};
	TypeConverter_t3331 * G_B3_0 = {0};
	ConfigurationProperty_t3333 * G_B3_1 = {0};
	ConfigurationProperty_t3333 * G_B18_0 = {0};
	ConfigurationProperty_t3333 * G_B17_0 = {0};
	ConfigurationValidatorBase_t3332 * G_B19_0 = {0};
	ConfigurationProperty_t3333 * G_B19_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___name_1 = L_0;
		TypeConverter_t3331 * L_1 = ___converter;
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_001c;
		}
	}
	{
		TypeConverter_t3331 * L_2 = ___converter;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_001c:
	{
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t3382_il2cpp_TypeInfo_var);
		TypeConverter_t3331 * L_4 = TypeDescriptor_GetConverter_m12102(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		NullCheck(G_B3_1);
		G_B3_1->___converter_4 = G_B3_0;
		Object_t * L_5 = ___default_value;
		if (!L_5)
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_6 = ___default_value;
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		Object_t * L_7 = ((ConfigurationProperty_t3333_StaticFields*)ConfigurationProperty_t3333_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		if ((!(((Object_t*)(Object_t *)L_6) == ((Object_t*)(Object_t *)L_7))))
		{
			goto IL_0079;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_9 = Type_GetTypeCode_m12103(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)18))))
		{
			goto IL_005b;
		}
	}
	{
		goto IL_0067;
	}

IL_0053:
	{
		___default_value = NULL;
		goto IL_0074;
	}

IL_005b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___default_value = L_12;
		goto IL_0074;
	}

IL_0067:
	{
		Type_t * L_13 = ___type;
		Object_t * L_14 = Activator_CreateInstance_m7631(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		___default_value = L_14;
		goto IL_0074;
	}

IL_0074:
	{
		goto IL_00c6;
	}

IL_0079:
	{
		Type_t * L_15 = ___type;
		Object_t * L_16 = ___default_value;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m4220(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_17);
		if (L_18)
		{
			goto IL_00c6;
		}
	}
	{
		TypeConverter_t3331 * L_19 = (__this->___converter_4);
		Object_t * L_20 = ___default_value;
		NullCheck(L_20);
		Type_t * L_21 = Object_GetType_m4220(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_22 = TypeConverter_CanConvertFrom_m12104(L_19, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = ___name;
		Type_t * L_24 = ___type;
		Object_t * L_25 = ___default_value;
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m4220(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m4353(NULL /*static, unused*/, (String_t*) &_stringLiteral2441, L_23, L_24, L_26, /*hidden argument*/NULL);
		ConfigurationErrorsException_t3322 * L_28 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_28, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_28);
	}

IL_00b8:
	{
		TypeConverter_t3331 * L_29 = (__this->___converter_4);
		Object_t * L_30 = ___default_value;
		NullCheck(L_29);
		Object_t * L_31 = TypeConverter_ConvertFrom_m12105(L_29, L_30, /*hidden argument*/NULL);
		___default_value = L_31;
	}

IL_00c6:
	{
		Object_t * L_32 = ___default_value;
		__this->___default_value_3 = L_32;
		int32_t L_33 = ___flags;
		__this->___flags_6 = L_33;
		Type_t * L_34 = ___type;
		__this->___type_2 = L_34;
		ConfigurationValidatorBase_t3332 * L_35 = ___validation;
		G_B17_0 = __this;
		if (!L_35)
		{
			G_B18_0 = __this;
			goto IL_00eb;
		}
	}
	{
		ConfigurationValidatorBase_t3332 * L_36 = ___validation;
		G_B19_0 = L_36;
		G_B19_1 = G_B17_0;
		goto IL_00f0;
	}

IL_00eb:
	{
		DefaultValidator_t3350 * L_37 = (DefaultValidator_t3350 *)il2cpp_codegen_object_new (DefaultValidator_t3350_il2cpp_TypeInfo_var);
		DefaultValidator__ctor_m11928(L_37, /*hidden argument*/NULL);
		G_B19_0 = ((ConfigurationValidatorBase_t3332 *)(L_37));
		G_B19_1 = G_B18_0;
	}

IL_00f0:
	{
		NullCheck(G_B19_1);
		G_B19_1->___validation_5 = G_B19_0;
		String_t* L_38 = ___description;
		__this->___description_7 = L_38;
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern "C" void ConfigurationProperty__cctor_m11850 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		((ConfigurationProperty_t3333_StaticFields*)ConfigurationProperty_t3333_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationProperty::get_DefaultValue()
extern "C" Object_t * ConfigurationProperty_get_DefaultValue_m11851 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___default_value_3);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsKey()
extern "C" bool ConfigurationProperty_get_IsKey_m11852 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsRequired()
extern "C" bool ConfigurationProperty_get_IsRequired_m11853 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsDefaultCollection()
extern "C" bool ConfigurationProperty_get_IsDefaultCollection_m11854 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_6);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Configuration.ConfigurationProperty::get_Name()
extern "C" String_t* ConfigurationProperty_get_Name_m11855 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Configuration.ConfigurationProperty::get_Type()
extern "C" Type_t * ConfigurationProperty_get_Type_m11856 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_2);
		return L_0;
	}
}
// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationProperty::get_Validator()
extern "C" ConfigurationValidatorBase_t3332 * ConfigurationProperty_get_Validator_m11857 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase_t3332 * L_0 = (__this->___validation_5);
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationProperty::ConvertFromString(System.String)
extern TypeInfo* NotImplementedException_t1461_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationProperty_ConvertFromString_m11858 (ConfigurationProperty_t3333 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2548);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeConverter_t3331 * L_0 = (__this->___converter_4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t3331 * L_1 = (__this->___converter_4);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		Object_t * L_3 = TypeConverter_ConvertFromInvariantString_m12106(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		NotImplementedException_t1461 * L_4 = (NotImplementedException_t1461 *)il2cpp_codegen_object_new (NotImplementedException_t1461_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.String System.Configuration.ConfigurationProperty::ConvertToString(System.Object)
extern TypeInfo* NotImplementedException_t1461_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationProperty_ConvertToString_m11859 (ConfigurationProperty_t3333 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2548);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeConverter_t3331 * L_0 = (__this->___converter_4);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		TypeConverter_t3331 * L_1 = (__this->___converter_4);
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		String_t* L_3 = TypeConverter_ConvertToInvariantString_m12107(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		NotImplementedException_t1461 * L_4 = (NotImplementedException_t1461 *)il2cpp_codegen_object_new (NotImplementedException_t1461_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Boolean System.Configuration.ConfigurationProperty::get_IsElement()
extern const Il2CppType* ConfigurationElement_t3318_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool ConfigurationProperty_get_IsElement_m11860 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_0_0_0_var = il2cpp_codegen_type_from_index(5814);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationElement_t3318_0_0_0_var), /*hidden argument*/NULL);
		Type_t * L_1 = (__this->___type_2);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationCollectionAttribute System.Configuration.ConfigurationProperty::get_CollectionAttribute()
extern "C" ConfigurationCollectionAttribute_t3312 * ConfigurationProperty_get_CollectionAttribute_m11861 (ConfigurationProperty_t3333 * __this, const MethodInfo* method)
{
	{
		ConfigurationCollectionAttribute_t3312 * L_0 = (__this->___collectionAttribute_8);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationProperty::set_CollectionAttribute(System.Configuration.ConfigurationCollectionAttribute)
extern "C" void ConfigurationProperty_set_CollectionAttribute_m11862 (ConfigurationProperty_t3333 * __this, ConfigurationCollectionAttribute_t3312 * ___value, const MethodInfo* method)
{
	{
		ConfigurationCollectionAttribute_t3312 * L_0 = ___value;
		__this->___collectionAttribute_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationProperty::Validate(System.Object)
extern "C" void ConfigurationProperty_Validate_m11863 (ConfigurationProperty_t3333 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase_t3332 * L_0 = (__this->___validation_5);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ConfigurationValidatorBase_t3332 * L_1 = (__this->___validation_5);
		Object_t * L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< Object_t * >::Invoke(5 /* System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object) */, L_1, L_2);
	}

IL_0017:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationPropertyAttribute::.ctor(System.String)
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern "C" void ConfigurationPropertyAttribute__ctor_m11864 (ConfigurationPropertyAttribute_t3334 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((ConfigurationProperty_t3333_StaticFields*)ConfigurationProperty_t3333_il2cpp_TypeInfo_var->static_fields)->___NoDefaultValue_0;
		__this->___default_value_1 = L_0;
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		__this->___name_0 = L_1;
		return;
	}
}
// System.Object System.Configuration.ConfigurationPropertyAttribute::get_DefaultValue()
extern "C" Object_t * ConfigurationPropertyAttribute_get_DefaultValue_m11865 (ConfigurationPropertyAttribute_t3334 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___default_value_1);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyAttribute::set_DefaultValue(System.Object)
extern "C" void ConfigurationPropertyAttribute_set_DefaultValue_m11866 (ConfigurationPropertyAttribute_t3334 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___default_value_1 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationPropertyOptions System.Configuration.ConfigurationPropertyAttribute::get_Options()
extern "C" int32_t ConfigurationPropertyAttribute_get_Options_m11867 (ConfigurationPropertyAttribute_t3334 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_2);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyAttribute::set_Options(System.Configuration.ConfigurationPropertyOptions)
extern "C" void ConfigurationPropertyAttribute_set_Options_m11868 (ConfigurationPropertyAttribute_t3334 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___flags_2 = L_0;
		return;
	}
}
// System.String System.Configuration.ConfigurationPropertyAttribute::get_Name()
extern "C" String_t* ConfigurationPropertyAttribute_get_Name_m11869 (ConfigurationPropertyAttribute_t3334 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_gen_62.h"
// System.Collections.Generic.List`1/Enumerator<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_14.h"
// System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>
#include "mscorlib_System_Collections_Generic_List_1_gen_62MethodDeclarations.h"


// System.Void System.Configuration.ConfigurationPropertyCollection::.ctor()
extern TypeInfo* List_1_t3335_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m12108_MethodInfo_var;
extern "C" void ConfigurationPropertyCollection__ctor_m11870 (ConfigurationPropertyCollection_t3314 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t3335_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5836);
		List_1__ctor_m12108_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485178);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		List_1_t3335 * L_0 = (List_1_t3335 *)il2cpp_codegen_object_new (List_1_t3335_il2cpp_TypeInfo_var);
		List_1__ctor_m12108(L_0, /*hidden argument*/List_1__ctor_m12108_MethodInfo_var);
		__this->___collection_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.ConfigurationPropertyCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t772_il2cpp_TypeInfo_var;
extern "C" void ConfigurationPropertyCollection_System_Collections_ICollection_CopyTo_m11871 (ConfigurationPropertyCollection_t3314 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t772_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t3335 * L_0 = (__this->___collection_0);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t772_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Configuration.ConfigurationPropertyCollection::get_Count()
extern "C" int32_t ConfigurationPropertyCollection_get_Count_m11872 (ConfigurationPropertyCollection_t3314 * __this, const MethodInfo* method)
{
	{
		List_1_t3335 * L_0 = (__this->___collection_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Configuration.ConfigurationPropertyCollection::get_IsSynchronized()
extern "C" bool ConfigurationPropertyCollection_get_IsSynchronized_m11873 (ConfigurationPropertyCollection_t3314 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Configuration.ConfigurationPropertyCollection::get_SyncRoot()
extern "C" Object_t * ConfigurationPropertyCollection_get_SyncRoot_m11874 (ConfigurationPropertyCollection_t3314 * __this, const MethodInfo* method)
{
	{
		List_1_t3335 * L_0 = (__this->___collection_0);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationPropertyCollection::Add(System.Configuration.ConfigurationProperty)
extern "C" void ConfigurationPropertyCollection_Add_m11875 (ConfigurationPropertyCollection_t3314 * __this, ConfigurationProperty_t3333 * ___property, const MethodInfo* method)
{
	{
		List_1_t3335 * L_0 = (__this->___collection_0);
		ConfigurationProperty_t3333 * L_1 = ___property;
		NullCheck(L_0);
		VirtActionInvoker1< ConfigurationProperty_t3333 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Configuration.ConfigurationProperty>::Add(!0) */, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator()
extern TypeInfo* Enumerator_t3383_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m12109_MethodInfo_var;
extern "C" Object_t * ConfigurationPropertyCollection_GetEnumerator_m11876 (ConfigurationPropertyCollection_t3314 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t3383_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5837);
		List_1_GetEnumerator_m12109_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147485179);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t3335 * L_0 = (__this->___collection_0);
		NullCheck(L_0);
		Enumerator_t3383  L_1 = List_1_GetEnumerator_m12109(L_0, /*hidden argument*/List_1_GetEnumerator_m12109_MethodInfo_var);
		Enumerator_t3383  L_2 = L_1;
		Object_t * L_3 = Box(Enumerator_t3383_il2cpp_TypeInfo_var, &L_2);
		return (Object_t *)L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationPropertyOptions
#include "System_Configuration_System_Configuration_ConfigurationPrope_0MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationSaveMode
#include "System_Configuration_System_Configuration_ConfigurationSaveMMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocument.h"
// System.Xml.XmlElement
#include "System_Xml_System_Xml_XmlElement.h"
// System.Configuration.ProtectedConfigurationProvider
#include "System_Configuration_System_Configuration_ProtectedConfigura_0.h"
// System.Xml.XmlNodeReader
#include "System_Xml_System_Xml_XmlNodeReader.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriter.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriter.h"
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.XmlDocument
#include "System_Xml_System_Xml_XmlDocumentMethodDeclarations.h"
// System.Configuration.ProtectedConfiguration
#include "System_Configuration_System_Configuration_ProtectedConfiguraMethodDeclarations.h"
// System.Configuration.ProtectedConfigurationProvider
#include "System_Configuration_System_Configuration_ProtectedConfigura_0MethodDeclarations.h"
// System.Xml.XmlNodeReader
#include "System_Xml_System_Xml_XmlNodeReaderMethodDeclarations.h"
// System.IO.StringWriter
#include "mscorlib_System_IO_StringWriterMethodDeclarations.h"
// System.Xml.XmlTextWriter
#include "System_Xml_System_Xml_XmlTextWriterMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSection::.ctor()
extern "C" void ConfigurationSection__ctor_m11877 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement__ctor_m11712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::get_SectionHandler()
extern "C" Object_t * ConfigurationSection_get_SectionHandler_m11878 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___section_handler_14);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::set_SectionHandler(System.Configuration.IConfigurationSectionHandler)
extern "C" void ConfigurationSection_set_SectionHandler_m11879 (ConfigurationSection_t3340 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___section_handler_14 = L_0;
		return;
	}
}
// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::get_SectionInformation()
extern TypeInfo* SectionInformation_t3338_il2cpp_TypeInfo_var;
extern "C" SectionInformation_t3338 * ConfigurationSection_get_SectionInformation_m11880 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionInformation_t3338_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5838);
		s_Il2CppMethodIntialized = true;
	}
	{
		SectionInformation_t3338 * L_0 = (__this->___sectionInformation_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		SectionInformation_t3338 * L_1 = (SectionInformation_t3338 *)il2cpp_codegen_object_new (SectionInformation_t3338_il2cpp_TypeInfo_var);
		SectionInformation__ctor_m12046(L_1, /*hidden argument*/NULL);
		__this->___sectionInformation_13 = L_1;
	}

IL_0016:
	{
		SectionInformation_t3338 * L_2 = (__this->___sectionInformation_13);
		return L_2;
	}
}
// System.Object System.Configuration.ConfigurationSection::get_ConfigContext()
extern "C" Object_t * ConfigurationSection_get_ConfigContext_m11881 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____configContext_16);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::set_ConfigContext(System.Object)
extern "C" void ConfigurationSection_set_ConfigContext_m11882 (ConfigurationSection_t3340 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____configContext_16 = L_0;
		return;
	}
}
// System.Object System.Configuration.ConfigurationSection::GetRuntimeObject()
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2164_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t695_il2cpp_TypeInfo_var;
extern TypeInfo* IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSection_GetRuntimeObject_m11883 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5805);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Path_t2164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		XmlDocument_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(627);
		IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5804);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSection_t3340 * V_0 = {0};
	Object_t * V_1 = {0};
	XmlReader_t3372 * V_2 = {0};
	String_t* V_3 = {0};
	String_t* V_4 = {0};
	XmlDocument_t695 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ConfigurationSection_t3340 * G_B4_0 = {0};
	Object_t * G_B7_0 = {0};
	{
		Object_t * L_0 = ConfigurationSection_get_SectionHandler_m11878(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_011f;
		}
	}
	{
		SectionInformation_t3338 * L_1 = (__this->___sectionInformation_13);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SectionInformation_t3338 * L_2 = (__this->___sectionInformation_13);
		NullCheck(L_2);
		ConfigurationSection_t3340 * L_3 = SectionInformation_GetParentSection_m12056(L_2, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0027;
	}

IL_0026:
	{
		G_B4_0 = ((ConfigurationSection_t3340 *)(NULL));
	}

IL_0027:
	{
		V_0 = G_B4_0;
		ConfigurationSection_t3340 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		ConfigurationSection_t3340 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(24 /* System.Object System.Configuration.ConfigurationSection::GetRuntimeObject() */, L_5);
		G_B7_0 = L_6;
		goto IL_003a;
	}

IL_0039:
	{
		G_B7_0 = NULL;
	}

IL_003a:
	{
		V_1 = G_B7_0;
		String_t* L_7 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_8 = V_1;
		return L_8;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_9 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
			StringReader_t259 * L_10 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
			StringReader__ctor_m3999(L_10, L_9, /*hidden argument*/NULL);
			Configuration_t3300 * L_11 = ConfigurationElement_get_Configuration_m11713(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			String_t* L_12 = Configuration_get_FilePath_m11692(L_11, /*hidden argument*/NULL);
			ConfigXmlTextReader_t3347 * L_13 = (ConfigXmlTextReader_t3347 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var);
			ConfigXmlTextReader__ctor_m11918(L_13, L_10, L_12, /*hidden argument*/NULL);
			V_2 = L_13;
			XmlReader_t3372 * L_14 = V_2;
			ConfigurationSection_DoDeserializeSection_m11887(__this, L_14, /*hidden argument*/NULL);
			SectionInformation_t3338 * L_15 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16 = SectionInformation_get_ConfigSource_m12052(L_15, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_17 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			if (L_17)
			{
				goto IL_00e6;
			}
		}

IL_0080:
		{
			SectionInformation_t3338 * L_18 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = SectionInformation_get_ConfigFilePath_m12047(L_18, /*hidden argument*/NULL);
			V_3 = L_19;
			String_t* L_20 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_21 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			if (L_21)
			{
				goto IL_00a3;
			}
		}

IL_0097:
		{
			String_t* L_22 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
			String_t* L_23 = Path_GetDirectoryName_m12073(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			V_3 = L_23;
			goto IL_00a9;
		}

IL_00a3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_24 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			V_3 = L_24;
		}

IL_00a9:
		{
			String_t* L_25 = V_3;
			SectionInformation_t3338 * L_26 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
			NullCheck(L_26);
			String_t* L_27 = SectionInformation_get_ConfigSource_m12052(L_26, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
			String_t* L_28 = Path_Combine_m7948(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
			V_4 = L_28;
			String_t* L_29 = V_4;
			bool L_30 = File_Exists_m12101(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
			if (!L_30)
			{
				goto IL_00e6;
			}
		}

IL_00c8:
		{
			String_t* L_31 = V_4;
			String_t* L_32 = File_ReadAllText_m12110(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			ConfigurationElement_set_RawXml_m11718(__this, L_32, /*hidden argument*/NULL);
			SectionInformation_t3338 * L_33 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
			String_t* L_34 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
			NullCheck(L_33);
			SectionInformation_SetRawXml_m12059(L_33, L_34, /*hidden argument*/NULL);
		}

IL_00e6:
		{
			goto IL_00f1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00eb;
		throw e;
	}

CATCH_00eb:
	{ // begin catch(System.Object)
		goto IL_00f1;
	} // end catch (depth: 1)

IL_00f1:
	{
		XmlDocument_t695 * L_35 = (XmlDocument_t695 *)il2cpp_codegen_object_new (XmlDocument_t695_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m12111(L_35, /*hidden argument*/NULL);
		V_5 = L_35;
		XmlDocument_t695 * L_36 = V_5;
		String_t* L_37 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(55 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_36, L_37);
		Object_t * L_38 = ConfigurationSection_get_SectionHandler_m11878(__this, /*hidden argument*/NULL);
		Object_t * L_39 = V_1;
		Object_t * L_40 = ConfigurationSection_get_ConfigContext_m11881(__this, /*hidden argument*/NULL);
		XmlDocument_t695 * L_41 = V_5;
		NullCheck(L_41);
		XmlElement_t696 * L_42 = XmlDocument_get_DocumentElement_m12112(L_41, /*hidden argument*/NULL);
		NullCheck(L_38);
		Object_t * L_43 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Object_t *, Object_t *, XmlNode_t735 * >::Invoke(0 /* System.Object System.Configuration.IConfigurationSectionHandler::Create(System.Object,System.Object,System.Xml.XmlNode) */, IConfigurationSectionHandler_t3339_il2cpp_TypeInfo_var, L_38, L_39, L_40, L_42);
		return L_43;
	}

IL_011f:
	{
		return __this;
	}
}
// System.Boolean System.Configuration.ConfigurationSection::IsModified()
extern "C" bool ConfigurationSection_IsModified_m11884 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationElement_IsModified_m11744(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.ConfigurationSection::ResetModified()
extern "C" void ConfigurationSection_ResetModified_m11885 (ConfigurationSection_t3340 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement_ResetModified_m11748(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ConfigurationSection::CreateElement(System.Type)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t3318 * ConfigurationSection_CreateElement_m11886 (ConfigurationSection_t3340 * __this, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	{
		Type_t * L_0 = ___t;
		Object_t * L_1 = Activator_CreateInstance_m7631(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationElement_t3318 *)Castclass(L_1, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void System.Configuration.ConfigurationElement::Init() */, L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElement::IsReadOnly() */, __this);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ConfigurationElement_t3318 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Configuration.ConfigurationElement::SetReadOnly() */, L_4);
	}

IL_0023:
	{
		ConfigurationElement_t3318 * L_5 = V_0;
		return L_5;
	}
}
// System.Void System.Configuration.ConfigurationSection::DoDeserializeSection(System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* XmlDocument_t695_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern TypeInfo* XmlNodeReader_t3384_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSection_DoDeserializeSection_m11887 (ConfigurationSection_t3340 * __this, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		XmlDocument_t695_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(627);
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		XmlNodeReader_t3384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5839);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	ProtectedConfigurationProvider_t3363 * V_3 = {0};
	XmlDocument_t695 * V_4 = {0};
	XmlNode_t735 * V_5 = {0};
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		V_0 = (String_t*)NULL;
		V_1 = (String_t*)NULL;
		goto IL_004a;
	}

IL_0010:
	{
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_1);
		V_2 = L_2;
		String_t* L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral2442, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		XmlReader_t3372 * L_5 = ___reader;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_5);
		V_0 = L_6;
		goto IL_004a;
	}

IL_0033:
	{
		String_t* L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2406, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t3372 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_9);
		V_1 = L_10;
	}

IL_004a:
	{
		XmlReader_t3372 * L_11 = ___reader;
		NullCheck(L_11);
		bool L_12 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_11);
		if (L_12)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_13 = V_0;
		if (!L_13)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_14 = V_0;
		ProtectedConfigurationProvider_t3363 * L_15 = ProtectedConfiguration_GetProvider_m11996(NULL /*static, unused*/, L_14, 1, /*hidden argument*/NULL);
		V_3 = L_15;
		XmlDocument_t695 * L_16 = (XmlDocument_t695 *)il2cpp_codegen_object_new (XmlDocument_t695_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m12111(L_16, /*hidden argument*/NULL);
		V_4 = L_16;
		XmlReader_t3372 * L_17 = ___reader;
		NullCheck(L_17);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_17);
		XmlDocument_t695 * L_18 = V_4;
		XmlReader_t3372 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(43 /* System.String System.Xml.XmlReader::ReadInnerXml() */, L_19);
		StringReader_t259 * L_21 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
		StringReader__ctor_m3999(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< TextReader_t3376 * >::Invoke(53 /* System.Void System.Xml.XmlDocument::Load(System.IO.TextReader) */, L_18, L_21);
		ProtectedConfigurationProvider_t3363 * L_22 = V_3;
		XmlDocument_t695 * L_23 = V_4;
		NullCheck(L_22);
		XmlNode_t735 * L_24 = (XmlNode_t735 *)VirtFuncInvoker1< XmlNode_t735 *, XmlNode_t735 * >::Invoke(6 /* System.Xml.XmlNode System.Configuration.ProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode) */, L_22, L_23);
		V_5 = L_24;
		XmlNode_t735 * L_25 = V_5;
		XmlNodeReader_t3384 * L_26 = (XmlNodeReader_t3384 *)il2cpp_codegen_object_new (XmlNodeReader_t3384_il2cpp_TypeInfo_var);
		XmlNodeReader__ctor_m12113(L_26, L_25, /*hidden argument*/NULL);
		___reader = L_26;
		SectionInformation_t3338 * L_27 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		String_t* L_28 = V_0;
		NullCheck(L_27);
		SectionInformation_ProtectSection_m12058(L_27, L_28, /*hidden argument*/NULL);
		XmlReader_t3372 * L_29 = ___reader;
		NullCheck(L_29);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_29);
	}

IL_00a9:
	{
		String_t* L_30 = V_1;
		if (!L_30)
		{
			goto IL_00bb;
		}
	}
	{
		SectionInformation_t3338 * L_31 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		String_t* L_32 = V_1;
		NullCheck(L_31);
		SectionInformation_set_ConfigSource_m12053(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		SectionInformation_t3338 * L_33 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		String_t* L_34 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		SectionInformation_SetRawXml_m12059(L_33, L_34, /*hidden argument*/NULL);
		XmlReader_t3372 * L_35 = ___reader;
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, __this, L_35, 0);
		return;
	}
}
// System.Void System.Configuration.ConfigurationSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void ConfigurationSection_DeserializeSection_m11888 (ConfigurationSection_t3340 * __this, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	{
		XmlReader_t3372 * L_0 = ___reader;
		ConfigurationSection_DoDeserializeSection_m11887(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigurationSection::DeserializeConfigSource(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2164_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern TypeInfo* StringReader_t259_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSection_DeserializeConfigSource_m11889 (ConfigurationSection_t3340 * __this, String_t* ___basePath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Path_t2164_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3411);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		StringReader_t259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(264);
		ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5805);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		SectionInformation_t3338 * L_0 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = SectionInformation_get_ConfigSource_m12052(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		bool L_5 = Path_IsPathRooted_m12099(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		ConfigurationException_t3323 * L_6 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_6, (String_t*) &_stringLiteral2443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002e:
	{
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Configuration.ConfigurationElement::HasLocalModifications() */, __this);
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		ConfigurationException_t3323 * L_8 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_8, (String_t*) &_stringLiteral2444, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		String_t* L_9 = ___basePath;
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2164_il2cpp_TypeInfo_var);
		String_t* L_11 = Path_Combine_m7948(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		String_t* L_12 = V_1;
		bool L_13 = File_Exists_m12101(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006b;
		}
	}
	{
		ConfigurationElement_set_RawXml_m11718(__this, (String_t*)NULL, /*hidden argument*/NULL);
		SectionInformation_t3338 * L_14 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		SectionInformation_SetRawXml_m12059(L_14, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_006b:
	{
		String_t* L_15 = V_1;
		String_t* L_16 = File_ReadAllText_m12110(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		ConfigurationElement_set_RawXml_m11718(__this, L_16, /*hidden argument*/NULL);
		SectionInformation_t3338 * L_17 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		String_t* L_18 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		SectionInformation_SetRawXml_m12059(L_17, L_18, /*hidden argument*/NULL);
		String_t* L_19 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		StringReader_t259 * L_20 = (StringReader_t259 *)il2cpp_codegen_object_new (StringReader_t259_il2cpp_TypeInfo_var);
		StringReader__ctor_m3999(L_20, L_19, /*hidden argument*/NULL);
		String_t* L_21 = V_1;
		ConfigXmlTextReader_t3347 * L_22 = (ConfigXmlTextReader_t3347 *)il2cpp_codegen_object_new (ConfigXmlTextReader_t3347_il2cpp_TypeInfo_var);
		ConfigXmlTextReader__ctor_m11918(L_22, L_20, L_21, /*hidden argument*/NULL);
		VirtActionInvoker2< XmlReader_t3372 *, bool >::Invoke(9 /* System.Void System.Configuration.ConfigurationElement::DeserializeElement(System.Xml.XmlReader,System.Boolean) */, __this, L_22, 0);
		return;
	}
}
// System.String System.Configuration.ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern TypeInfo* StringWriter_t3385_il2cpp_TypeInfo_var;
extern TypeInfo* XmlTextWriter_t3386_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConfigurationSection_SerializeSection_m11890 (ConfigurationSection_t3340 * __this, ConfigurationElement_t3318 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringWriter_t3385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5840);
		XmlTextWriter_t3386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5841);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	String_t* V_1 = {0};
	StringWriter_t3385 * V_2 = {0};
	XmlTextWriter_t3386 * V_3 = {0};
	String_t* V_4 = {0};
	StringWriter_t3385 * V_5 = {0};
	bool V_6 = false;
	XmlTextWriter_t3386 * V_7 = {0};
	String_t* V_8 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___externalDataXml_15 = (String_t*)NULL;
		ConfigurationElement_t3318 * L_0 = ___parentElement;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_2 = ConfigurationSection_CreateElement_m11886(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConfigurationElement_t3318 * L_3 = V_0;
		ConfigurationElement_t3318 * L_4 = ___parentElement;
		int32_t L_5 = ___saveMode;
		NullCheck(L_3);
		VirtActionInvoker3< ConfigurationElement_t3318 *, ConfigurationElement_t3318 *, int32_t >::Invoke(23 /* System.Void System.Configuration.ConfigurationElement::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode) */, L_3, __this, L_4, L_5);
		goto IL_002a;
	}

IL_0028:
	{
		V_0 = __this;
	}

IL_002a:
	{
		StringWriter_t3385 * L_6 = (StringWriter_t3385 *)il2cpp_codegen_object_new (StringWriter_t3385_il2cpp_TypeInfo_var);
		StringWriter__ctor_m12114(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			StringWriter_t3385 * L_7 = V_2;
			XmlTextWriter_t3386 * L_8 = (XmlTextWriter_t3386 *)il2cpp_codegen_object_new (XmlTextWriter_t3386_il2cpp_TypeInfo_var);
			XmlTextWriter__ctor_m12115(L_8, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
		}

IL_0037:
		try
		{ // begin try (depth: 2)
			XmlTextWriter_t3386 * L_9 = V_3;
			NullCheck(L_9);
			XmlTextWriter_set_Formatting_m12116(L_9, 1, /*hidden argument*/NULL);
			ConfigurationElement_t3318 * L_10 = V_0;
			XmlTextWriter_t3386 * L_11 = V_3;
			String_t* L_12 = ___name;
			NullCheck(L_10);
			VirtFuncInvoker2< bool, XmlWriter_t3373 *, String_t* >::Invoke(22 /* System.Boolean System.Configuration.ConfigurationElement::SerializeToXmlElement(System.Xml.XmlWriter,System.String) */, L_10, L_11, L_12);
			XmlTextWriter_t3386 * L_13 = V_3;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(7 /* System.Void System.Xml.XmlTextWriter::Close() */, L_13);
			IL2CPP_LEAVE(0x5F, FINALLY_0052);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0052;
		}

FINALLY_0052:
		{ // begin finally (depth: 2)
			{
				XmlTextWriter_t3386 * L_14 = V_3;
				if (!L_14)
				{
					goto IL_005e;
				}
			}

IL_0058:
			{
				XmlTextWriter_t3386 * L_15 = V_3;
				NullCheck(L_15);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			}

IL_005e:
			{
				IL2CPP_END_FINALLY(82)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(82)
		{
			IL2CPP_JUMP_TBL(0x5F, IL_005f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_005f:
		{
			StringWriter_t3385 * L_16 = V_2;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_16);
			V_1 = L_17;
			IL2CPP_LEAVE(0x78, FINALLY_006b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_006b;
	}

FINALLY_006b:
	{ // begin finally (depth: 1)
		{
			StringWriter_t3385 * L_18 = V_2;
			if (!L_18)
			{
				goto IL_0077;
			}
		}

IL_0071:
		{
			StringWriter_t3385 * L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
		}

IL_0077:
		{
			IL2CPP_END_FINALLY(107)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(107)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0078:
	{
		SectionInformation_t3338 * L_20 = ConfigurationSection_get_SectionInformation_m11880(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = SectionInformation_get_ConfigSource_m12052(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		String_t* L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0093;
		}
	}
	{
		String_t* L_24 = V_1;
		return L_24;
	}

IL_0093:
	{
		String_t* L_25 = V_1;
		__this->___externalDataXml_15 = L_25;
		StringWriter_t3385 * L_26 = (StringWriter_t3385 *)il2cpp_codegen_object_new (StringWriter_t3385_il2cpp_TypeInfo_var);
		StringWriter__ctor_m12114(L_26, /*hidden argument*/NULL);
		V_5 = L_26;
	}

IL_00a1:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_27 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_28 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			V_6 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
			StringWriter_t3385 * L_29 = V_5;
			XmlTextWriter_t3386 * L_30 = (XmlTextWriter_t3386 *)il2cpp_codegen_object_new (XmlTextWriter_t3386_il2cpp_TypeInfo_var);
			XmlTextWriter__ctor_m12115(L_30, L_29, /*hidden argument*/NULL);
			V_7 = L_30;
		}

IL_00b5:
		try
		{ // begin try (depth: 2)
			{
				bool L_31 = V_6;
				if (!L_31)
				{
					goto IL_00c4;
				}
			}

IL_00bc:
			{
				XmlTextWriter_t3386 * L_32 = V_7;
				String_t* L_33 = ___name;
				NullCheck(L_32);
				XmlWriter_WriteStartElement_m12078(L_32, L_33, /*hidden argument*/NULL);
			}

IL_00c4:
			{
				XmlTextWriter_t3386 * L_34 = V_7;
				String_t* L_35 = V_4;
				NullCheck(L_34);
				XmlWriter_WriteAttributeString_m12077(L_34, (String_t*) &_stringLiteral2406, L_35, /*hidden argument*/NULL);
				bool L_36 = V_6;
				if (!L_36)
				{
					goto IL_00e0;
				}
			}

IL_00d9:
			{
				XmlTextWriter_t3386 * L_37 = V_7;
				NullCheck(L_37);
				VirtActionInvoker0::Invoke(14 /* System.Void System.Xml.XmlTextWriter::WriteEndElement() */, L_37);
			}

IL_00e0:
			{
				IL2CPP_LEAVE(0xF4, FINALLY_00e5);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_00e5;
		}

FINALLY_00e5:
		{ // begin finally (depth: 2)
			{
				XmlTextWriter_t3386 * L_38 = V_7;
				if (!L_38)
				{
					goto IL_00f3;
				}
			}

IL_00ec:
			{
				XmlTextWriter_t3386 * L_39 = V_7;
				NullCheck(L_39);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_39);
			}

IL_00f3:
			{
				IL2CPP_END_FINALLY(229)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(229)
		{
			IL2CPP_JUMP_TBL(0xF4, IL_00f4)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_00f4:
		{
			StringWriter_t3385 * L_40 = V_5;
			NullCheck(L_40);
			String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_40);
			V_8 = L_41;
			IL2CPP_LEAVE(0x116, FINALLY_0107);
		}

IL_0102:
		{
			; // IL_0102: leave IL_0116
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0107;
	}

FINALLY_0107:
	{ // begin finally (depth: 1)
		{
			StringWriter_t3385 * L_42 = V_5;
			if (!L_42)
			{
				goto IL_0115;
			}
		}

IL_010e:
		{
			StringWriter_t3385 * L_43 = V_5;
			NullCheck(L_43);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_43);
		}

IL_0115:
		{
			IL2CPP_END_FINALLY(263)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(263)
	{
		IL2CPP_JUMP_TBL(0x116, IL_0116)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0116:
	{
		String_t* L_44 = V_8;
		return L_44;
	}
}
// System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0
#include "System_Configuration_System_Configuration_ConfigurationSecti_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0
#include "System_Configuration_System_Configuration_ConfigurationSecti_0MethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Configuration.ConfigInfoCollection
#include "System_Configuration_System_Configuration_ConfigInfoCollecti.h"
// System.Configuration.ConfigInfoCollection
#include "System_Configuration_System_Configuration_ConfigInfoCollectiMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::.ctor()
extern "C" void U3CGetEnumeratorU3Ec__Iterator0__ctor_m11891 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m11892 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Object System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m11893 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_3);
		return L_0;
	}
}
// System.Boolean System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::MoveNext()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m11894 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	Object_t * V_2 = {0};
	bool V_3 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		V_1 = 0;
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0023;
		}
		if (L_1 == 1)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_00c9;
	}

IL_0023:
	{
		ConfigurationSectionCollection_t3341 * L_2 = (__this->___U3CU3Ef__this_4);
		NullCheck(L_2);
		SectionGroupInfo_t3308 * L_3 = (L_2->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t3369 * L_4 = SectionGroupInfo_get_Sections_m12030(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Object_t * L_5 = ConfigInfoCollection_get_AllKeys_m12040(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_5);
		__this->___U3CU24s_32U3E__0_0 = L_6;
		V_0 = ((int32_t)-3);
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_7 = V_0;
			if (((int32_t)((int32_t)L_7-(int32_t)1)) == 0)
			{
				goto IL_0092;
			}
		}

IL_0052:
		{
			goto IL_0092;
		}

IL_0057:
		{
			Object_t * L_8 = (__this->___U3CU24s_32U3E__0_0);
			NullCheck(L_8);
			Object_t * L_9 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_8);
			__this->___U3CkeyU3E__1_1 = ((String_t*)Castclass(L_9, String_t_il2cpp_TypeInfo_var));
			ConfigurationSectionCollection_t3341 * L_10 = (__this->___U3CU3Ef__this_4);
			String_t* L_11 = (__this->___U3CkeyU3E__1_1);
			NullCheck(L_10);
			ConfigurationSection_t3340 * L_12 = ConfigurationSectionCollection_get_Item_m11900(L_10, L_11, /*hidden argument*/NULL);
			__this->___U24current_3 = L_12;
			__this->___U24PC_2 = 1;
			V_1 = 1;
			IL2CPP_LEAVE(0xCB, FINALLY_00a7);
		}

IL_0092:
		{
			Object_t * L_13 = (__this->___U3CU24s_32U3E__0_0);
			NullCheck(L_13);
			bool L_14 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0057;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xC2, FINALLY_00a7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00a7;
	}

FINALLY_00a7:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_1;
			if (!L_15)
			{
				goto IL_00ab;
			}
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00ab:
		{
			Object_t * L_16 = (__this->___U3CU24s_32U3E__0_0);
			V_2 = ((Object_t *)IsInst(L_16, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_17 = V_2;
			if (L_17)
			{
				goto IL_00bb;
			}
		}

IL_00ba:
		{
			IL2CPP_END_FINALLY(167)
		}

IL_00bb:
		{
			Object_t * L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(167)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(167)
	{
		IL2CPP_JUMP_TBL(0xCB, IL_00cb)
		IL2CPP_JUMP_TBL(0xC2, IL_00c2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00c2:
	{
		__this->___U24PC_2 = (-1);
	}

IL_00c9:
	{
		return 0;
	}

IL_00cb:
	{
		return 1;
	}
	// Dead block : IL_00cd: ldloc.3
}
// System.Void System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::Dispose()
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m11895 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->___U24PC_2);
		V_0 = L_0;
		__this->___U24PC_2 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_003d;
		}
		if (L_1 == 1)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_003d;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			Object_t * L_2 = (__this->___U3CU24s_32U3E__0_0);
			V_1 = ((Object_t *)IsInst(L_2, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_3 = V_1;
			if (L_3)
			{
				goto IL_0036;
			}
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_0036:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_4);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_003d:
	{
		return;
	}
}
// System.Void System.Configuration.ConfigurationSectionCollection/<GetEnumerator>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void U3CGetEnumeratorU3Ec__Iterator0_Reset_m11896 (U3CGetEnumeratorU3Ec__Iterator0_t3342 * __this, const MethodInfo* method)
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

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
#include "System_System_Collections_Specialized_NameObjectCollectionBa_0.h"


// System.Void System.Configuration.ConfigurationSectionCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* StringComparer_t2948_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionCollection__ctor_m11897 (ConfigurationSectionCollection_t3341 * __this, Configuration_t3300 * ___config, SectionGroupInfo_t3308 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2948_il2cpp_TypeInfo_var);
		StringComparer_t2948 * L_0 = StringComparer_get_Ordinal_m12117(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m12118(__this, L_0, /*hidden argument*/NULL);
		Configuration_t3300 * L_1 = ___config;
		__this->___config_11 = L_1;
		SectionGroupInfo_t3308 * L_2 = ___group;
		__this->___group_10 = L_2;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionCollection::get_Keys()
extern "C" KeysCollection_t3375 * ConfigurationSectionCollection_get_Keys_m11898 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = SectionGroupInfo_get_Sections_m12030(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeysCollection_t3375 * L_2 = (KeysCollection_t3375 *)VirtFuncInvoker0< KeysCollection_t3375 * >::Invoke(11 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationSectionCollection::get_Count()
extern "C" int32_t ConfigurationSectionCollection_get_Count_m11899 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = SectionGroupInfo_get_Sections_m12030(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.ConfigurationSectionCollection::get_Item(System.String)
extern TypeInfo* ConfigurationSection_t3340_il2cpp_TypeInfo_var;
extern TypeInfo* SectionInfo_t3368_il2cpp_TypeInfo_var;
extern "C" ConfigurationSection_t3340 * ConfigurationSectionCollection_get_Item_m11900 (ConfigurationSectionCollection_t3341 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t3340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5802);
		SectionInfo_t3368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5842);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSection_t3340 * V_0 = {0};
	SectionInfo_t3368 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m12119(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationSection_t3340 *)IsInst(L_1, ConfigurationSection_t3340_il2cpp_TypeInfo_var));
		ConfigurationSection_t3340 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		SectionGroupInfo_t3308 * L_3 = (__this->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t3369 * L_4 = SectionGroupInfo_get_Sections_m12030(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfo_t3304 * L_6 = ConfigInfoCollection_get_Item_m12041(L_4, L_5, /*hidden argument*/NULL);
		V_1 = ((SectionInfo_t3368 *)IsInst(L_6, SectionInfo_t3368_il2cpp_TypeInfo_var));
		SectionInfo_t3368 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (ConfigurationSection_t3340 *)NULL;
	}

IL_0032:
	{
		Configuration_t3300 * L_8 = (__this->___config_11);
		SectionInfo_t3368 * L_9 = V_1;
		NullCheck(L_8);
		ConfigurationSection_t3340 * L_10 = Configuration_GetSectionInstance_m11699(L_8, L_9, 1, /*hidden argument*/NULL);
		V_0 = L_10;
		ConfigurationSection_t3340 * L_11 = V_0;
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		return (ConfigurationSection_t3340 *)NULL;
	}

IL_0048:
	{
		String_t* L_12 = ___name;
		ConfigurationSection_t3340 * L_13 = V_0;
		NameObjectCollectionBase_BaseSet_m12120(__this, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0050:
	{
		ConfigurationSection_t3340 * L_14 = V_0;
		return L_14;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionCollection::GetEnumerator()
extern TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t3342_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSectionCollection_GetEnumerator_m11901 (ConfigurationSectionCollection_t3341 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CGetEnumeratorU3Ec__Iterator0_t3342_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5843);
		s_Il2CppMethodIntialized = true;
	}
	U3CGetEnumeratorU3Ec__Iterator0_t3342 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t3342 *)il2cpp_codegen_object_new (U3CGetEnumeratorU3Ec__Iterator0_t3342_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ec__Iterator0__ctor_m11891(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3Ef__this_4 = __this;
		U3CGetEnumeratorU3Ec__Iterator0_t3342 * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationSectionCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t1461_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionCollection_GetObjectData_m11902 (ConfigurationSectionCollection_t3341 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2548);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1461 * L_0 = (NotImplementedException_t1461 *)il2cpp_codegen_object_new (NotImplementedException_t1461_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Configuration.ConfigurationSectionGroup::.ctor()
extern "C" void ConfigurationSectionGroup__ctor_m11903 (ConfigurationSectionGroup_t3306 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::get_Config()
extern TypeInfo* InvalidOperationException_t1450_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * ConfigurationSectionGroup_get_Config_m11904 (ConfigurationSectionGroup_t3306 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2518);
		s_Il2CppMethodIntialized = true;
	}
	{
		Configuration_t3300 * L_0 = (__this->___config_2);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t1450 * L_1 = (InvalidOperationException_t1450 *)il2cpp_codegen_object_new (InvalidOperationException_t1450_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_1, (String_t*) &_stringLiteral2445, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		Configuration_t3300 * L_2 = (__this->___config_2);
		return L_2;
	}
}
// System.Void System.Configuration.ConfigurationSectionGroup::Initialize(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SystemException_t3387_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroup_Initialize_m11905 (ConfigurationSectionGroup_t3306 * __this, Configuration_t3300 * ___config, SectionGroupInfo_t3308 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SystemException_t3387_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5844);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___initialized_4);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral2446, L_1, /*hidden argument*/NULL);
		SystemException_t3387 * L_3 = (SystemException_t3387 *)il2cpp_codegen_object_new (SystemException_t3387_il2cpp_TypeInfo_var);
		SystemException__ctor_m12121(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		__this->___initialized_4 = 1;
		Configuration_t3300 * L_4 = ___config;
		__this->___config_2 = L_4;
		SectionGroupInfo_t3308 * L_5 = ___group;
		__this->___group_3 = L_5;
		return;
	}
}
// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::get_SectionGroups()
extern TypeInfo* ConfigurationSectionGroupCollection_t3344_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroupCollection_t3344 * ConfigurationSectionGroup_get_SectionGroups_m11906 (ConfigurationSectionGroup_t3306 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroupCollection_t3344_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5845);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionGroupCollection_t3344 * L_0 = (__this->___groups_1);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t3300 * L_1 = ConfigurationSectionGroup_get_Config_m11904(__this, /*hidden argument*/NULL);
		SectionGroupInfo_t3308 * L_2 = (__this->___group_3);
		ConfigurationSectionGroupCollection_t3344 * L_3 = (ConfigurationSectionGroupCollection_t3344 *)il2cpp_codegen_object_new (ConfigurationSectionGroupCollection_t3344_il2cpp_TypeInfo_var);
		ConfigurationSectionGroupCollection__ctor_m11908(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___groups_1 = L_3;
	}

IL_0022:
	{
		ConfigurationSectionGroupCollection_t3344 * L_4 = (__this->___groups_1);
		return L_4;
	}
}
// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::get_Sections()
extern TypeInfo* ConfigurationSectionCollection_t3341_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionCollection_t3341 * ConfigurationSectionGroup_get_Sections_m11907 (ConfigurationSectionGroup_t3306 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionCollection_t3341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5846);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationSectionCollection_t3341 * L_0 = (__this->___sections_0);
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		Configuration_t3300 * L_1 = ConfigurationSectionGroup_get_Config_m11904(__this, /*hidden argument*/NULL);
		SectionGroupInfo_t3308 * L_2 = (__this->___group_3);
		ConfigurationSectionCollection_t3341 * L_3 = (ConfigurationSectionCollection_t3341 *)il2cpp_codegen_object_new (ConfigurationSectionCollection_t3341_il2cpp_TypeInfo_var);
		ConfigurationSectionCollection__ctor_m11897(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___sections_0 = L_3;
	}

IL_0022:
	{
		ConfigurationSectionCollection_t3341 * L_4 = (__this->___sections_0);
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationSectionGroupCollection::.ctor(System.Configuration.Configuration,System.Configuration.SectionGroupInfo)
extern TypeInfo* StringComparer_t2948_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroupCollection__ctor_m11908 (ConfigurationSectionGroupCollection_t3344 * __this, Configuration_t3300 * ___config, SectionGroupInfo_t3308 * ___group, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2948_il2cpp_TypeInfo_var);
		StringComparer_t2948 * L_0 = StringComparer_get_Ordinal_m12117(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m12118(__this, L_0, /*hidden argument*/NULL);
		Configuration_t3300 * L_1 = ___config;
		__this->___config_11 = L_1;
		SectionGroupInfo_t3308 * L_2 = ___group;
		__this->___group_10 = L_2;
		return;
	}
}
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Configuration.ConfigurationSectionGroupCollection::get_Keys()
extern "C" KeysCollection_t3375 * ConfigurationSectionGroupCollection_get_Keys_m11909 (ConfigurationSectionGroupCollection_t3344 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = SectionGroupInfo_get_Groups_m12031(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		KeysCollection_t3375 * L_2 = (KeysCollection_t3375 *)VirtFuncInvoker0< KeysCollection_t3375 * >::Invoke(11 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, L_1);
		return L_2;
	}
}
// System.Int32 System.Configuration.ConfigurationSectionGroupCollection::get_Count()
extern "C" int32_t ConfigurationSectionGroupCollection_get_Count_m11910 (ConfigurationSectionGroupCollection_t3344 * __this, const MethodInfo* method)
{
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = SectionGroupInfo_get_Groups_m12031(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		return L_2;
	}
}
// System.Configuration.ConfigurationSectionGroup System.Configuration.ConfigurationSectionGroupCollection::get_Item(System.String)
extern TypeInfo* ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" ConfigurationSectionGroup_t3306 * ConfigurationSectionGroupCollection_get_Item_m11911 (ConfigurationSectionGroupCollection_t3344 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5801);
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationSectionGroup_t3306 * V_0 = {0};
	SectionGroupInfo_t3308 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m12119(__this, L_0, /*hidden argument*/NULL);
		V_0 = ((ConfigurationSectionGroup_t3306 *)IsInst(L_1, ConfigurationSectionGroup_t3306_il2cpp_TypeInfo_var));
		ConfigurationSectionGroup_t3306 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		SectionGroupInfo_t3308 * L_3 = (__this->___group_10);
		NullCheck(L_3);
		ConfigInfoCollection_t3369 * L_4 = SectionGroupInfo_get_Groups_m12031(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfo_t3304 * L_6 = ConfigInfoCollection_get_Item_m12041(L_4, L_5, /*hidden argument*/NULL);
		V_1 = ((SectionGroupInfo_t3308 *)IsInst(L_6, SectionGroupInfo_t3308_il2cpp_TypeInfo_var));
		SectionGroupInfo_t3308 * L_7 = V_1;
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		return (ConfigurationSectionGroup_t3306 *)NULL;
	}

IL_0032:
	{
		Configuration_t3300 * L_8 = (__this->___config_11);
		SectionGroupInfo_t3308 * L_9 = V_1;
		NullCheck(L_8);
		ConfigurationSectionGroup_t3306 * L_10 = Configuration_GetSectionGroupInstance_m11700(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = ___name;
		ConfigurationSectionGroup_t3306 * L_12 = V_0;
		NameObjectCollectionBase_BaseSet_m12120(__this, L_11, L_12, /*hidden argument*/NULL);
	}

IL_0047:
	{
		ConfigurationSectionGroup_t3306 * L_13 = V_0;
		return L_13;
	}
}
// System.Collections.IEnumerator System.Configuration.ConfigurationSectionGroupCollection::GetEnumerator()
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern "C" Object_t * ConfigurationSectionGroupCollection_GetEnumerator_m11912 (ConfigurationSectionGroupCollection_t3344 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		s_Il2CppMethodIntialized = true;
	}
	{
		SectionGroupInfo_t3308 * L_0 = (__this->___group_10);
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = SectionGroupInfo_get_Groups_m12031(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Object_t * L_2 = ConfigInfoCollection_get_AllKeys_m12040(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Void System.Configuration.ConfigurationSectionGroupCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t1461_il2cpp_TypeInfo_var;
extern "C" void ConfigurationSectionGroupCollection_GetObjectData_m11913 (ConfigurationSectionGroupCollection_t3344 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2548);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1461 * L_0 = (NotImplementedException_t1461 *)il2cpp_codegen_object_new (NotImplementedException_t1461_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserLMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::get_ValidatorInstance()
extern TypeInfo* ConfigurationValidatorBase_t3332_il2cpp_TypeInfo_var;
extern "C" ConfigurationValidatorBase_t3332 * ConfigurationValidatorAttribute_get_ValidatorInstance_m11914 (ConfigurationValidatorAttribute_t3346 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationValidatorBase_t3332_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5847);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationValidatorBase_t3332 * L_0 = (__this->___instance_1);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Type_t * L_1 = (__this->___validatorType_0);
		Object_t * L_2 = Activator_CreateInstance_m7631(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___instance_1 = ((ConfigurationValidatorBase_t3332 *)Castclass(L_2, ConfigurationValidatorBase_t3332_il2cpp_TypeInfo_var));
	}

IL_0021:
	{
		ConfigurationValidatorBase_t3332 * L_3 = (__this->___instance_1);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigurationValidatorBase::.ctor()
extern "C" void ConfigurationValidatorBase__ctor_m11915 (ConfigurationValidatorBase_t3332 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ConfigurationValidatorBase::CanValidate(System.Type)
extern "C" bool ConfigurationValidatorBase_CanValidate_m11916 (ConfigurationValidatorBase_t3332 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Configuration.ConfigurationValidatorBase::Validate(System.Object)
#ifndef _MSC_VER
#else
#endif



// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern TypeInfo* ArgumentNullException_t788_il2cpp_TypeInfo_var;
extern "C" void ConfigXmlTextReader__ctor_m11917 (ConfigXmlTextReader_t3347 * __this, Stream_t51 * ___s, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t51 * L_0 = ___s;
		XmlTextReader__ctor_m12122(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t788 * L_2 = (ArgumentNullException_t788 *)il2cpp_codegen_object_new (ArgumentNullException_t788_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_2, (String_t*) &_stringLiteral2447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		String_t* L_3 = ___fileName;
		__this->___fileName_7 = L_3;
		return;
	}
}
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern TypeInfo* ArgumentNullException_t788_il2cpp_TypeInfo_var;
extern "C" void ConfigXmlTextReader__ctor_m11918 (ConfigXmlTextReader_t3347 * __this, TextReader_t3376 * ___input, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t788_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		TextReader_t3376 * L_0 = ___input;
		XmlTextReader__ctor_m12123(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___fileName;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t788 * L_2 = (ArgumentNullException_t788 *)il2cpp_codegen_object_new (ArgumentNullException_t788_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_2, (String_t*) &_stringLiteral2447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		String_t* L_3 = ___fileName;
		__this->___fileName_7 = L_3;
		return;
	}
}
// System.String ConfigXmlTextReader::get_Filename()
extern "C" String_t* ConfigXmlTextReader_get_Filename_m11919 (ConfigXmlTextReader_t3347 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fileName_7);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.DefaultSection::.ctor()
extern "C" void DefaultSection__ctor_m11920 (DefaultSection_t3349 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection__ctor_m11877(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.DefaultSection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* DefaultSection_t3349_il2cpp_TypeInfo_var;
extern "C" void DefaultSection__cctor_m11921 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		DefaultSection_t3349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5803);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_0, /*hidden argument*/NULL);
		((DefaultSection_t3349_StaticFields*)DefaultSection_t3349_il2cpp_TypeInfo_var->static_fields)->___properties_17 = L_0;
		return;
	}
}
// System.Void System.Configuration.DefaultSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void DefaultSection_DeserializeSection_m11922 (DefaultSection_t3349 * __this, XmlReader_t3372 * ___xmlReader, const MethodInfo* method)
{
	{
		String_t* L_0 = ConfigurationElement_get_RawXml_m11717(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		XmlReader_t3372 * L_1 = ___xmlReader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(44 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_1);
		ConfigurationElement_set_RawXml_m11718(__this, L_2, /*hidden argument*/NULL);
		goto IL_0022;
	}

IL_001c:
	{
		XmlReader_t3372 * L_3 = ___xmlReader;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Boolean System.Configuration.DefaultSection::IsModified()
extern "C" bool DefaultSection_IsModified_m11923 (DefaultSection_t3349 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ConfigurationSection_IsModified_m11884(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.DefaultSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void DefaultSection_Reset_m11924 (DefaultSection_t3349 * __this, ConfigurationElement_t3318 * ___parentSection, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___parentSection;
		ConfigurationElement_Reset_m11747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.DefaultSection::ResetModified()
extern "C" void DefaultSection_ResetModified_m11925 (DefaultSection_t3349 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_ResetModified_m11885(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.DefaultSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* DefaultSection_SerializeSection_m11926 (DefaultSection_t3349 * __this, ConfigurationElement_t3318 * ___parentSection, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___parentSection;
		String_t* L_1 = ___name;
		int32_t L_2 = ___saveMode;
		String_t* L_3 = ConfigurationSection_SerializeSection_m11890(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.DefaultSection::get_Properties()
extern TypeInfo* DefaultSection_t3349_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * DefaultSection_get_Properties_m11927 (DefaultSection_t3349 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultSection_t3349_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5803);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DefaultSection_t3349_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t3314 * L_0 = ((DefaultSection_t3349_StaticFields*)DefaultSection_t3349_il2cpp_TypeInfo_var->static_fields)->___properties_17;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.DefaultValidator::.ctor()
extern "C" void DefaultValidator__ctor_m11928 (DefaultValidator_t3350 * __this, const MethodInfo* method)
{
	{
		ConfigurationValidatorBase__ctor_m11915(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.DefaultValidator::CanValidate(System.Type)
extern "C" bool DefaultValidator_CanValidate_m11929 (DefaultValidator_t3350 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Configuration.DefaultValidator::Validate(System.Object)
extern "C" void DefaultValidator_Validate_m11930 (DefaultValidator_t3350 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern TypeInfo* PropertyInformationCollection_t3352_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ElementInformation__ctor_m11931 (ElementInformation_t3316 * __this, ConfigurationElement_t3318 * ___owner, PropertyInformation_t3351 * ___propertyInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformationCollection_t3352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5848);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationProperty_t3333 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		PropertyInformation_t3351 * L_0 = ___propertyInfo;
		__this->___propertyInfo_0 = L_0;
		ConfigurationElement_t3318 * L_1 = ___owner;
		__this->___owner_1 = L_1;
		PropertyInformationCollection_t3352 * L_2 = (PropertyInformationCollection_t3352 *)il2cpp_codegen_object_new (PropertyInformationCollection_t3352_il2cpp_TypeInfo_var);
		PropertyInformationCollection__ctor_m11989(L_2, /*hidden argument*/NULL);
		__this->___properties_2 = L_2;
		ConfigurationElement_t3318 * L_3 = ___owner;
		NullCheck(L_3);
		ConfigurationPropertyCollection_t3314 * L_4 = (ConfigurationPropertyCollection_t3314 *)VirtFuncInvoker0< ConfigurationPropertyCollection_t3314 * >::Invoke(6 /* System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::get_Properties() */, L_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* System.Collections.IEnumerator System.Configuration.ConfigurationPropertyCollection::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
			V_0 = ((ConfigurationProperty_t3333 *)Castclass(L_7, ConfigurationProperty_t3333_il2cpp_TypeInfo_var));
			PropertyInformationCollection_t3352 * L_8 = (__this->___properties_2);
			ConfigurationElement_t3318 * L_9 = ___owner;
			ConfigurationProperty_t3333 * L_10 = V_0;
			PropertyInformation_t3351 * L_11 = (PropertyInformation_t3351 *)il2cpp_codegen_object_new (PropertyInformation_t3351_il2cpp_TypeInfo_var);
			PropertyInformation__ctor_m11969(L_11, L_9, L_10, /*hidden argument*/NULL);
			NullCheck(L_8);
			PropertyInformationCollection_Add_m11992(L_8, L_11, /*hidden argument*/NULL);
		}

IL_004e:
		{
			Object_t * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0030;
			}
		}

IL_0059:
		{
			IL2CPP_LEAVE(0x70, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_1;
			V_2 = ((Object_t *)IsInst(L_14, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_2;
			if (L_15)
			{
				goto IL_0069;
			}
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(94)
		}

IL_0069:
		{
			Object_t * L_16 = V_2;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(94)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_JUMP_TBL(0x70, IL_0070)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0070:
	{
		return;
	}
}
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C" PropertyInformationCollection_t3352 * ElementInformation_get_Properties_m11932 (ElementInformation_t3316 * __this, const MethodInfo* method)
{
	{
		PropertyInformationCollection_t3352 * L_0 = (__this->___properties_2);
		return L_0;
	}
}
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void ElementInformation_Reset_m11933 (ElementInformation_t3316 * __this, ElementInformation_t3316 * ___parentInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	PropertyInformation_t3351 * V_0 = {0};
	Object_t * V_1 = {0};
	PropertyInformation_t3351 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PropertyInformationCollection_t3352 * L_0 = ElementInformation_get_Properties_m11932(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_2);
			V_0 = ((PropertyInformation_t3351 *)Castclass(L_3, PropertyInformation_t3351_il2cpp_TypeInfo_var));
			ElementInformation_t3316 * L_4 = ___parentInfo;
			NullCheck(L_4);
			PropertyInformationCollection_t3352 * L_5 = ElementInformation_get_Properties_m11932(L_4, /*hidden argument*/NULL);
			PropertyInformation_t3351 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = PropertyInformation_get_Name_m11975(L_6, /*hidden argument*/NULL);
			NullCheck(L_5);
			PropertyInformation_t3351 * L_8 = PropertyInformationCollection_get_Item_m11990(L_5, L_7, /*hidden argument*/NULL);
			V_2 = L_8;
			PropertyInformation_t3351 * L_9 = V_0;
			PropertyInformation_t3351 * L_10 = V_2;
			NullCheck(L_9);
			PropertyInformation_Reset_m11979(L_9, L_10, /*hidden argument*/NULL);
		}

IL_0036:
		{
			Object_t * L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0011;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x58, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_1;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_0051;
			}
		}

IL_0050:
		{
			IL2CPP_END_FINALLY(70)
		}

IL_0051:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x58, IL_0058)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0058:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ExeConfigurationFileMap::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationFileMap__ctor_m11934 (ExeConfigurationFileMap_t3353 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationFileMap__ctor_m11816(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___exeConfigFilename_1 = L_0;
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___localUserConfigFilename_2 = L_1;
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___roamingUserConfigFilename_3 = L_2;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_ExeConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_ExeConfigFilename_m11935 (ExeConfigurationFileMap_t3353 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___exeConfigFilename_1);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_ExeConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_ExeConfigFilename_m11936 (ExeConfigurationFileMap_t3353 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___exeConfigFilename_1 = L_0;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_LocalUserConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937 (ExeConfigurationFileMap_t3353 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___localUserConfigFilename_2);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_LocalUserConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_LocalUserConfigFilename_m11938 (ExeConfigurationFileMap_t3353 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___localUserConfigFilename_2 = L_0;
		return;
	}
}
// System.String System.Configuration.ExeConfigurationFileMap::get_RoamingUserConfigFilename()
extern "C" String_t* ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939 (ExeConfigurationFileMap_t3353 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___roamingUserConfigFilename_3);
		return L_0;
	}
}
// System.Void System.Configuration.ExeConfigurationFileMap::set_RoamingUserConfigFilename(System.String)
extern "C" void ExeConfigurationFileMap_set_RoamingUserConfigFilename_m11940 (ExeConfigurationFileMap_t3353 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___roamingUserConfigFilename_3 = L_0;
		return;
	}
}
// System.Object System.Configuration.ExeConfigurationFileMap::Clone()
extern TypeInfo* ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var;
extern "C" Object_t * ExeConfigurationFileMap_Clone_m11941 (ExeConfigurationFileMap_t3353 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		s_Il2CppMethodIntialized = true;
	}
	ExeConfigurationFileMap_t3353 * V_0 = {0};
	{
		ExeConfigurationFileMap_t3353 * L_0 = (ExeConfigurationFileMap_t3353 *)il2cpp_codegen_object_new (ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var);
		ExeConfigurationFileMap__ctor_m11934(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ExeConfigurationFileMap_t3353 * L_1 = V_0;
		String_t* L_2 = (__this->___exeConfigFilename_1);
		NullCheck(L_1);
		L_1->___exeConfigFilename_1 = L_2;
		ExeConfigurationFileMap_t3353 * L_3 = V_0;
		String_t* L_4 = (__this->___localUserConfigFilename_2);
		NullCheck(L_3);
		L_3->___localUserConfigFilename_2 = L_4;
		ExeConfigurationFileMap_t3353 * L_5 = V_0;
		String_t* L_6 = (__this->___roamingUserConfigFilename_3);
		NullCheck(L_5);
		L_5->___roamingUserConfigFilename_3 = L_6;
		ExeConfigurationFileMap_t3353 * L_7 = V_0;
		String_t* L_8 = ConfigurationFileMap_get_MachineConfigFilename_m11818(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ConfigurationFileMap_set_MachineConfigFilename_m11819(L_7, L_8, /*hidden argument*/NULL);
		ExeConfigurationFileMap_t3353 * L_9 = V_0;
		return L_9;
	}
}
// System.Configuration.IgnoreSection
#include "System_Configuration_System_Configuration_IgnoreSection.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.IgnoreSection
#include "System_Configuration_System_Configuration_IgnoreSectionMethodDeclarations.h"



// System.Void System.Configuration.IgnoreSection::.ctor()
extern "C" void IgnoreSection__ctor_m11942 (IgnoreSection_t3354 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection__ctor_m11877(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* IgnoreSection_t3354_il2cpp_TypeInfo_var;
extern "C" void IgnoreSection__cctor_m11943 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		IgnoreSection_t3354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5849);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_0, /*hidden argument*/NULL);
		((IgnoreSection_t3354_StaticFields*)IgnoreSection_t3354_il2cpp_TypeInfo_var->static_fields)->___properties_18 = L_0;
		return;
	}
}
// System.Boolean System.Configuration.IgnoreSection::IsModified()
extern "C" bool IgnoreSection_IsModified_m11944 (IgnoreSection_t3354 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Configuration.IgnoreSection::DeserializeSection(System.Xml.XmlReader)
extern "C" void IgnoreSection_DeserializeSection_m11945 (IgnoreSection_t3354 * __this, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(44 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_0);
		__this->___xml_17 = L_1;
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::Reset(System.Configuration.ConfigurationElement)
extern "C" void IgnoreSection_Reset_m11946 (IgnoreSection_t3354 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___parentElement;
		ConfigurationElement_Reset_m11747(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.IgnoreSection::ResetModified()
extern "C" void IgnoreSection_ResetModified_m11947 (IgnoreSection_t3354 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_ResetModified_m11885(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.IgnoreSection::SerializeSection(System.Configuration.ConfigurationElement,System.String,System.Configuration.ConfigurationSaveMode)
extern "C" String_t* IgnoreSection_SerializeSection_m11948 (IgnoreSection_t3354 * __this, ConfigurationElement_t3318 * ___parentElement, String_t* ___name, int32_t ___saveMode, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___xml_17);
		return L_0;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.IgnoreSection::get_Properties()
extern TypeInfo* IgnoreSection_t3354_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * IgnoreSection_get_Properties_m11949 (IgnoreSection_t3354 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IgnoreSection_t3354_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5849);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IgnoreSection_t3354_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t3314 * L_0 = ((IgnoreSection_t3354_StaticFields*)IgnoreSection_t3354_il2cpp_TypeInfo_var->static_fields)->___properties_18;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.InternalConfigurationFactory::.ctor()
extern "C" void InternalConfigurationFactory__ctor_m11950 (InternalConfigurationFactory_t3328 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.Configuration System.Configuration.InternalConfigurationFactory::Create(System.Type,System.Object[])
extern TypeInfo* InternalConfigurationSystem_t3356_il2cpp_TypeInfo_var;
extern TypeInfo* Configuration_t3300_il2cpp_TypeInfo_var;
extern "C" Configuration_t3300 * InternalConfigurationFactory_Create_m11951 (InternalConfigurationFactory_t3328 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t700* ___hostInitConfigurationParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalConfigurationSystem_t3356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5850);
		Configuration_t3300_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5797);
		s_Il2CppMethodIntialized = true;
	}
	InternalConfigurationSystem_t3356 * V_0 = {0};
	{
		InternalConfigurationSystem_t3356 * L_0 = (InternalConfigurationSystem_t3356 *)il2cpp_codegen_object_new (InternalConfigurationSystem_t3356_il2cpp_TypeInfo_var);
		InternalConfigurationSystem__ctor_m11952(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		InternalConfigurationSystem_t3356 * L_1 = V_0;
		Type_t * L_2 = ___typeConfigHost;
		ObjectU5BU5D_t700* L_3 = ___hostInitConfigurationParams;
		NullCheck(L_1);
		VirtActionInvoker2< Type_t *, ObjectU5BU5D_t700* >::Invoke(5 /* System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[]) */, L_1, L_2, L_3);
		InternalConfigurationSystem_t3356 * L_4 = V_0;
		Configuration_t3300 * L_5 = (Configuration_t3300 *)il2cpp_codegen_object_new (Configuration_t3300_il2cpp_TypeInfo_var);
		Configuration__ctor_m11683(L_5, L_4, (String_t*)NULL, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.InternalConfigurationRoot
#include "System_Configuration_System_Configuration_InternalConfigurat_2.h"
// System.Configuration.InternalConfigurationRoot
#include "System_Configuration_System_Configuration_InternalConfigurat_2MethodDeclarations.h"


// System.Void System.Configuration.InternalConfigurationSystem::.ctor()
extern "C" void InternalConfigurationSystem__ctor_m11952 (InternalConfigurationSystem_t3356 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationSystem::Init(System.Type,System.Object[])
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* InternalConfigurationRoot_t3359_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigRoot_t3355_il2cpp_TypeInfo_var;
extern "C" void InternalConfigurationSystem_Init_m11953 (InternalConfigurationSystem_t3356 * __this, Type_t * ___typeConfigHost, ObjectU5BU5D_t700* ___hostInitParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		InternalConfigurationRoot_t3359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5851);
		IInternalConfigRoot_t3355_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5852);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ___hostInitParams;
		__this->___hostInitParams_2 = L_0;
		Type_t * L_1 = ___typeConfigHost;
		Object_t * L_2 = Activator_CreateInstance_m7631(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->___host_0 = ((Object_t *)Castclass(L_2, IInternalConfigHost_t3305_il2cpp_TypeInfo_var));
		InternalConfigurationRoot_t3359 * L_3 = (InternalConfigurationRoot_t3359 *)il2cpp_codegen_object_new (InternalConfigurationRoot_t3359_il2cpp_TypeInfo_var);
		InternalConfigurationRoot__ctor_m11967(L_3, /*hidden argument*/NULL);
		__this->___root_1 = L_3;
		Object_t * L_4 = (__this->___root_1);
		Object_t * L_5 = (__this->___host_0);
		NullCheck(L_4);
		InterfaceActionInvoker2< Object_t *, bool >::Invoke(0 /* System.Void System.Configuration.Internal.IInternalConfigRoot::Init(System.Configuration.Internal.IInternalConfigHost,System.Boolean) */, IInternalConfigRoot_t3355_il2cpp_TypeInfo_var, L_4, L_5, 0);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationSystem::InitForConfiguration(System.String&,System.String&,System.String&)
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern "C" void InternalConfigurationSystem_InitForConfiguration_m11954 (InternalConfigurationSystem_t3356 * __this, String_t** ___locationConfigPath, String_t** ___parentConfigPath, String_t** ___parentLocationConfigPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___host_0);
		String_t** L_1 = ___locationConfigPath;
		String_t** L_2 = ___parentConfigPath;
		String_t** L_3 = ___parentLocationConfigPath;
		Object_t * L_4 = (__this->___root_1);
		ObjectU5BU5D_t700* L_5 = (__this->___hostInitParams_2);
		NullCheck(L_0);
		InterfaceActionInvoker5< String_t**, String_t**, String_t**, Object_t *, ObjectU5BU5D_t700* >::Invoke(4 /* System.Void System.Configuration.Internal.IInternalConfigHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[]) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Configuration.Internal.IInternalConfigHost System.Configuration.InternalConfigurationSystem::get_Host()
extern "C" Object_t * InternalConfigurationSystem_get_Host_m11955 (InternalConfigurationSystem_t3356 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___host_0);
		return L_0;
	}
}
// System.Configuration.InternalConfigurationHost
#include "System_Configuration_System_Configuration_InternalConfigurat_1.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.InternalConfigurationHost
#include "System_Configuration_System_Configuration_InternalConfigurat_1MethodDeclarations.h"

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStream.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.IO.MemoryStream
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"


// System.Void System.Configuration.InternalConfigurationHost::.ctor()
extern "C" void InternalConfigurationHost__ctor_m11956 (InternalConfigurationHost_t3357 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.InternalConfigurationHost::CreateDeprecatedConfigContext(System.String)
extern "C" Object_t * InternalConfigurationHost_CreateDeprecatedConfigContext_m11957 (InternalConfigurationHost_t3357 * __this, String_t* ___configPath, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.String System.Configuration.InternalConfigurationHost::GetConfigPathFromLocationSubPath(System.String,System.String)
extern "C" String_t* InternalConfigurationHost_GetConfigPathFromLocationSubPath_m11958 (InternalConfigurationHost_t3357 * __this, String_t* ___configPath, String_t* ___locationSubPath, const MethodInfo* method)
{
	{
		String_t* L_0 = ___configPath;
		return L_0;
	}
}
// System.Type System.Configuration.InternalConfigurationHost::GetConfigType(System.String,System.Boolean)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern "C" Type_t * InternalConfigurationHost_GetConfigType_m11959 (InternalConfigurationHost_t3357 * __this, String_t* ___typeName, bool ___throwOnError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		String_t* L_0 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetType_m7632(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		bool L_3 = ___throwOnError;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___typeName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2448, L_4, (String_t*) &_stringLiteral2416, /*hidden argument*/NULL);
		ConfigurationErrorsException_t3322 * L_6 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11803(L_6, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Type_t * L_7 = V_0;
		return L_7;
	}
}
// System.String System.Configuration.InternalConfigurationHost::GetStreamName(System.String)
// System.Void System.Configuration.InternalConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Void System.Configuration.InternalConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
// System.Boolean System.Configuration.InternalConfigurationHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool InternalConfigurationHost_IsDefinitionAllowed_m11960 (InternalConfigurationHost_t3357 * __this, String_t* ___configPath, int32_t ___allowDefinition, int32_t ___allowExeDefinition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		int32_t L_0 = ___allowDefinition;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)200))))
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0043;
	}

IL_0018:
	{
		String_t* L_3 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral2449, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		String_t* L_5 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m456(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral2449, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_7 = ___configPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral2450, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_8));
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 1;
	}

IL_0042:
	{
		return G_B7_0;
	}

IL_0043:
	{
		return 1;
	}
}
// System.String System.Configuration.InternalConfigurationHost::get_bundled_machine_config()
extern "C" String_t* InternalConfigurationHost_get_bundled_machine_config_m11961 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef String_t* (*InternalConfigurationHost_get_bundled_machine_config_m11961_ftn) ();
	static InternalConfigurationHost_get_bundled_machine_config_m11961_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InternalConfigurationHost_get_bundled_machine_config_m11961_ftn)il2cpp_codegen_resolve_icall ("System.Configuration.InternalConfigurationHost::get_bundled_machine_config()");
	return _il2cpp_icall_func();
}
// System.IO.Stream System.Configuration.InternalConfigurationHost::OpenStreamForRead(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t757_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t65_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationException_t3323_il2cpp_TypeInfo_var;
extern TypeInfo* FileStream_t62_il2cpp_TypeInfo_var;
extern "C" Stream_t51 * InternalConfigurationHost_OpenStreamForRead_m11962 (InternalConfigurationHost_t3357 * __this, String_t* ___streamName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Encoding_t757_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(260);
		MemoryStream_t65_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		ConfigurationException_t3323_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5807);
		FileStream_t62_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2773);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___streamName;
		String_t* L_1 = RuntimeEnvironment_get_SystemConfigurationFile_m12091(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_2 = String_CompareOrdinal_m12124(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = InternalConfigurationHost_get_bundled_machine_config_m11961(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t757_il2cpp_TypeInfo_var);
		Encoding_t757 * L_5 = Encoding_get_UTF8_m3997(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_t66* L_7 = (ByteU5BU5D_t66*)VirtFuncInvoker1< ByteU5BU5D_t66*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		MemoryStream_t65 * L_8 = (MemoryStream_t65 *)il2cpp_codegen_object_new (MemoryStream_t65_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m430(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_002d:
	{
		String_t* L_9 = ___streamName;
		bool L_10 = File_Exists_m12101(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_11 = ___streamName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2451, L_11, (String_t*) &_stringLiteral2452, /*hidden argument*/NULL);
		ConfigurationException_t3323 * L_13 = (ConfigurationException_t3323 *)il2cpp_codegen_object_new (ConfigurationException_t3323_il2cpp_TypeInfo_var);
		ConfigurationException__ctor_m12076(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_004e:
	{
		String_t* L_14 = ___streamName;
		FileStream_t62 * L_15 = (FileStream_t62 *)il2cpp_codegen_object_new (FileStream_t62_il2cpp_TypeInfo_var);
		FileStream__ctor_m7903(L_15, L_14, 3, 1, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Configuration.ExeConfigurationHost
#include "System_Configuration_System_Configuration_ExeConfigurationHo.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ExeConfigurationHost
#include "System_Configuration_System_Configuration_ExeConfigurationHoMethodDeclarations.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"


// System.Void System.Configuration.ExeConfigurationHost::.ctor()
extern "C" void ExeConfigurationHost__ctor_m11963 (ExeConfigurationHost_t3358 * __this, const MethodInfo* method)
{
	{
		InternalConfigurationHost__ctor_m11956(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ExeConfigurationHost::Init(System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern TypeInfo* ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationHost_Init_m11964 (ExeConfigurationHost_t3358 * __this, Object_t * ___root, ObjectU5BU5D_t700* ___hostInitParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t700* L_0 = ___hostInitParams;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		__this->___map_0 = ((ExeConfigurationFileMap_t3353 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_1)), ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t700* L_2 = ___hostInitParams;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 1);
		int32_t L_3 = 1;
		__this->___level_1 = ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3)), Int32_t82_il2cpp_TypeInfo_var))));
		return;
	}
}
// System.String System.Configuration.ExeConfigurationHost::GetStreamName(System.String)
extern TypeInfo* ExeConfigurationHost_t3358_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4006_MethodInfo_var;
extern "C" String_t* ExeConfigurationHost_GetStreamName_m11965 (ExeConfigurationHost_t3358 * __this, String_t* ___configPath, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationHost_t3358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5829);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		Dictionary_2__ctor_m4006_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = {0};
	{
		String_t* L_0 = ___configPath;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00ac;
		}
	}
	{
		Dictionary_2_t223 * L_2 = ((ExeConfigurationHost_t3358_StaticFields*)ExeConfigurationHost_t3358_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4006(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m4006_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, (String_t*) &_stringLiteral2450, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, (String_t*) &_stringLiteral2453, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, (String_t*) &_stringLiteral2454, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, (String_t*) &_stringLiteral2449, 3);
		Dictionary_2_t223 * L_8 = V_1;
		((ExeConfigurationHost_t3358_StaticFields*)ExeConfigurationHost_t3358_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2 = L_8;
	}

IL_004f:
	{
		Dictionary_2_t223 * L_9 = ((ExeConfigurationHost_t3358_StaticFields*)ExeConfigurationHost_t3358_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map0_2;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_2));
		if (!L_11)
		{
			goto IL_00ac;
		}
	}
	{
		int32_t L_12 = V_2;
		if (L_12 == 0)
		{
			goto IL_007c;
		}
		if (L_12 == 1)
		{
			goto IL_0088;
		}
		if (L_12 == 2)
		{
			goto IL_0094;
		}
		if (L_12 == 3)
		{
			goto IL_00a0;
		}
	}
	{
		goto IL_00ac;
	}

IL_007c:
	{
		ExeConfigurationFileMap_t3353 * L_13 = (__this->___map_0);
		NullCheck(L_13);
		String_t* L_14 = ExeConfigurationFileMap_get_ExeConfigFilename_m11935(L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0088:
	{
		ExeConfigurationFileMap_t3353 * L_15 = (__this->___map_0);
		NullCheck(L_15);
		String_t* L_16 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0094:
	{
		ExeConfigurationFileMap_t3353 * L_17 = (__this->___map_0);
		NullCheck(L_17);
		String_t* L_18 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_00a0:
	{
		ExeConfigurationFileMap_t3353 * L_19 = (__this->___map_0);
		NullCheck(L_19);
		String_t* L_20 = ConfigurationFileMap_get_MachineConfigFilename_m11818(L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_00ac:
	{
		int32_t L_21 = (__this->___level_1);
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (!L_22)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_23 = V_3;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)10))))
		{
			goto IL_00da;
		}
	}
	{
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)20))))
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00f2;
	}

IL_00ce:
	{
		ExeConfigurationFileMap_t3353 * L_25 = (__this->___map_0);
		NullCheck(L_25);
		String_t* L_26 = ExeConfigurationFileMap_get_ExeConfigFilename_m11935(L_25, /*hidden argument*/NULL);
		return L_26;
	}

IL_00da:
	{
		ExeConfigurationFileMap_t3353 * L_27 = (__this->___map_0);
		NullCheck(L_27);
		String_t* L_28 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00e6:
	{
		ExeConfigurationFileMap_t3353 * L_29 = (__this->___map_0);
		NullCheck(L_29);
		String_t* L_30 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00f2:
	{
		ExeConfigurationFileMap_t3353 * L_31 = (__this->___map_0);
		NullCheck(L_31);
		String_t* L_32 = ConfigurationFileMap_get_MachineConfigFilename_m11818(L_31, /*hidden argument*/NULL);
		return L_32;
	}
}
// System.Void System.Configuration.ExeConfigurationHost::InitForConfiguration(System.String&,System.String&,System.String&,System.Configuration.Internal.IInternalConfigRoot,System.Object[])
extern TypeInfo* ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t729_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ExeConfigurationHost_InitForConfiguration_m11966 (ExeConfigurationHost_t3358 * __this, String_t** ___locationSubPath, String_t** ___configPath, String_t** ___locationConfigPath, Object_t * ___root, ObjectU5BU5D_t700* ___hostInitConfigurationParams, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5830);
		ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5831);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		ArgumentException_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		ObjectU5BU5D_t700* L_0 = ___hostInitConfigurationParams;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		__this->___map_0 = ((ExeConfigurationFileMap_t3353 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_1)), ExeConfigurationFileMap_t3353_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t700* L_2 = ___hostInitConfigurationParams;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t700* L_3 = ___hostInitConfigurationParams;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		int32_t L_4 = 1;
		if (!((Object_t *)IsInst((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_4)), ConfigurationUserLevel_t3345_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t700* L_5 = ___hostInitConfigurationParams;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		__this->___level_1 = ((*(int32_t*)((int32_t*)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6)), Int32_t82_il2cpp_TypeInfo_var))));
	}

IL_0036:
	{
		String_t** L_7 = ___locationSubPath;
		if ((*((String_t**)L_7)))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_8 = (__this->___level_1);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)10))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)20))))
		{
			goto IL_0080;
		}
	}
	{
		goto IL_00a7;
	}

IL_0059:
	{
		ExeConfigurationFileMap_t3353 * L_11 = (__this->___map_0);
		NullCheck(L_11);
		String_t* L_12 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_t729 * L_13 = (ArgumentException_t729 *)il2cpp_codegen_object_new (ArgumentException_t729_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_13, (String_t*) &_stringLiteral2455, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0074:
	{
		String_t** L_14 = ___locationSubPath;
		*((Object_t **)(L_14)) = (Object_t *)(String_t*) &_stringLiteral2454;
		goto IL_00a7;
	}

IL_0080:
	{
		ExeConfigurationFileMap_t3353 * L_15 = (__this->___map_0);
		NullCheck(L_15);
		String_t* L_16 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_009b;
		}
	}
	{
		ArgumentException_t729 * L_17 = (ArgumentException_t729 *)il2cpp_codegen_object_new (ArgumentException_t729_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_17, (String_t*) &_stringLiteral2456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_009b:
	{
		String_t** L_18 = ___locationSubPath;
		*((Object_t **)(L_18)) = (Object_t *)(String_t*) &_stringLiteral2453;
		goto IL_00a7;
	}

IL_00a7:
	{
		String_t** L_19 = ___configPath;
		*((Object_t **)(L_19)) = (Object_t *)NULL;
		V_0 = (String_t*)NULL;
		String_t** L_20 = ___locationConfigPath;
		*((Object_t **)(L_20)) = (Object_t *)NULL;
		String_t** L_21 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m456(NULL /*static, unused*/, (*((String_t**)L_21)), (String_t*) &_stringLiteral2450, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00d7;
		}
	}
	{
		String_t** L_23 = ___locationSubPath;
		if ((*((String_t**)L_23)))
		{
			goto IL_00f1;
		}
	}
	{
		ExeConfigurationFileMap_t3353 * L_24 = (__this->___map_0);
		NullCheck(L_24);
		String_t* L_25 = ExeConfigurationFileMap_get_ExeConfigFilename_m11935(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00f1;
		}
	}

IL_00d7:
	{
		String_t** L_26 = ___configPath;
		*((Object_t **)(L_26)) = (Object_t *)(String_t*) &_stringLiteral2450;
		V_0 = (String_t*) &_stringLiteral2453;
		String_t** L_27 = ___locationConfigPath;
		ExeConfigurationFileMap_t3353 * L_28 = (__this->___map_0);
		NullCheck(L_28);
		String_t* L_29 = ExeConfigurationFileMap_get_ExeConfigFilename_m11935(L_28, /*hidden argument*/NULL);
		*((Object_t **)(L_27)) = (Object_t *)L_29;
	}

IL_00f1:
	{
		String_t** L_30 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_31 = String_op_Equality_m456(NULL /*static, unused*/, (*((String_t**)L_30)), (String_t*) &_stringLiteral2453, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_012c;
		}
	}
	{
		ExeConfigurationFileMap_t3353 * L_32 = (__this->___map_0);
		NullCheck(L_32);
		String_t* L_33 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_012c;
		}
	}
	{
		String_t** L_34 = ___configPath;
		*((Object_t **)(L_34)) = (Object_t *)(String_t*) &_stringLiteral2453;
		V_0 = (String_t*) &_stringLiteral2454;
		String_t** L_35 = ___locationConfigPath;
		ExeConfigurationFileMap_t3353 * L_36 = (__this->___map_0);
		NullCheck(L_36);
		String_t* L_37 = ExeConfigurationFileMap_get_LocalUserConfigFilename_m11937(L_36, /*hidden argument*/NULL);
		*((Object_t **)(L_35)) = (Object_t *)L_37;
	}

IL_012c:
	{
		String_t** L_38 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m456(NULL /*static, unused*/, (*((String_t**)L_38)), (String_t*) &_stringLiteral2454, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0167;
		}
	}
	{
		ExeConfigurationFileMap_t3353 * L_40 = (__this->___map_0);
		NullCheck(L_40);
		String_t* L_41 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0167;
		}
	}
	{
		String_t** L_42 = ___configPath;
		*((Object_t **)(L_42)) = (Object_t *)(String_t*) &_stringLiteral2454;
		V_0 = (String_t*) &_stringLiteral2449;
		String_t** L_43 = ___locationConfigPath;
		ExeConfigurationFileMap_t3353 * L_44 = (__this->___map_0);
		NullCheck(L_44);
		String_t* L_45 = ExeConfigurationFileMap_get_RoamingUserConfigFilename_m11939(L_44, /*hidden argument*/NULL);
		*((Object_t **)(L_43)) = (Object_t *)L_45;
	}

IL_0167:
	{
		String_t** L_46 = ___locationSubPath;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_47 = String_op_Equality_m456(NULL /*static, unused*/, (*((String_t**)L_46)), (String_t*) &_stringLiteral2449, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_017f;
		}
	}
	{
		String_t** L_48 = ___configPath;
		if ((*((String_t**)L_48)))
		{
			goto IL_0198;
		}
	}

IL_017f:
	{
		ExeConfigurationFileMap_t3353 * L_49 = (__this->___map_0);
		NullCheck(L_49);
		String_t* L_50 = ConfigurationFileMap_get_MachineConfigFilename_m11818(L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		String_t** L_51 = ___configPath;
		*((Object_t **)(L_51)) = (Object_t *)(String_t*) &_stringLiteral2449;
		V_0 = (String_t*)NULL;
	}

IL_0198:
	{
		String_t** L_52 = ___locationSubPath;
		String_t* L_53 = V_0;
		*((Object_t **)(L_52)) = (Object_t *)L_53;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.InternalConfigurationRoot::.ctor()
extern "C" void InternalConfigurationRoot__ctor_m11967 (InternalConfigurationRoot_t3359 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.InternalConfigurationRoot::Init(System.Configuration.Internal.IInternalConfigHost,System.Boolean)
extern "C" void InternalConfigurationRoot_Init_m11968 (InternalConfigurationRoot_t3359 * __this, Object_t * ___host, bool ___isDesignTime, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___host;
		__this->___host_0 = L_0;
		bool L_1 = ___isDesignTime;
		__this->___isDesignTime_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.PropertyInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationProperty)
extern "C" void PropertyInformation__ctor_m11969 (PropertyInformation_t3351 * __this, ConfigurationElement_t3318 * ___owner, ConfigurationProperty_t3333 * ___property, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_0 = ___owner;
		__this->___owner_3 = L_0;
		ConfigurationProperty_t3333 * L_1 = ___property;
		__this->___property_4 = L_1;
		return;
	}
}
// System.Object System.Configuration.PropertyInformation::get_DefaultValue()
extern "C" Object_t * PropertyInformation_get_DefaultValue_m11970 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		Object_t * L_1 = ConfigurationProperty_get_DefaultValue_m11851(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsKey()
extern "C" bool PropertyInformation_get_IsKey_m11971 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsKey_m11852(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsModified()
extern "C" bool PropertyInformation_get_IsModified_m11972 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isModified_0);
		return L_0;
	}
}
// System.Void System.Configuration.PropertyInformation::set_IsModified(System.Boolean)
extern "C" void PropertyInformation_set_IsModified_m11973 (PropertyInformation_t3351 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___isModified_0 = L_0;
		return;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsRequired()
extern "C" bool PropertyInformation_get_IsRequired_m11974 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsRequired_m11853(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Configuration.PropertyInformation::get_Name()
extern "C" String_t* PropertyInformation_get_Name_m11975 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		String_t* L_1 = ConfigurationProperty_get_Name_m11855(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Configuration.PropertyInformation::get_Type()
extern "C" Type_t * PropertyInformation_get_Type_m11976 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		Type_t * L_1 = ConfigurationProperty_get_Type_m11856(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Configuration.PropertyInformation::get_Value()
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformation_get_Value_m11977 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	ConfigurationElement_t3318 * V_0 = {0};
	{
		int32_t L_0 = (__this->___origin_2);
		if (L_0)
		{
			goto IL_006f;
		}
	}
	{
		ConfigurationProperty_t3333 * L_1 = (__this->___property_4);
		NullCheck(L_1);
		bool L_2 = ConfigurationProperty_get_IsElement_m11860(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Type_t * L_3 = PropertyInformation_get_Type_m11976(__this, /*hidden argument*/NULL);
		Object_t * L_4 = Activator_CreateInstance_m12071(NULL /*static, unused*/, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ConfigurationElement_t3318 *)Castclass(L_4, ConfigurationElement_t3318_il2cpp_TypeInfo_var));
		ConfigurationElement_t3318 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< PropertyInformation_t3351 * >::Invoke(4 /* System.Void System.Configuration.ConfigurationElement::InitFromProperty(System.Configuration.PropertyInformation) */, L_5, __this);
		ConfigurationElement_t3318 * L_6 = (__this->___owner_3);
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		ConfigurationElement_t3318 * L_7 = (__this->___owner_3);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Configuration.ConfigurationElement::IsReadOnly() */, L_7);
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		ConfigurationElement_t3318 * L_9 = V_0;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Configuration.ConfigurationElement::SetReadOnly() */, L_9);
	}

IL_0055:
	{
		ConfigurationElement_t3318 * L_10 = V_0;
		__this->___val_1 = L_10;
		__this->___origin_2 = 1;
		goto IL_006f;
	}

IL_0068:
	{
		Object_t * L_11 = PropertyInformation_get_DefaultValue_m11970(__this, /*hidden argument*/NULL);
		return L_11;
	}

IL_006f:
	{
		Object_t * L_12 = (__this->___val_1);
		return L_12;
	}
}
// System.Void System.Configuration.PropertyInformation::set_Value(System.Object)
extern "C" void PropertyInformation_set_Value_m11978 (PropertyInformation_t3351 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___val_1 = L_0;
		__this->___isModified_0 = 1;
		__this->___origin_2 = 2;
		return;
	}
}
// System.Void System.Configuration.PropertyInformation::Reset(System.Configuration.PropertyInformation)
extern TypeInfo* ConfigurationElement_t3318_il2cpp_TypeInfo_var;
extern "C" void PropertyInformation_Reset_m11979 (PropertyInformation_t3351 * __this, PropertyInformation_t3351 * ___parentProperty, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationElement_t3318_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5814);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformation_t3351 * L_0 = ___parentProperty;
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		ConfigurationProperty_t3333 * L_1 = (__this->___property_4);
		NullCheck(L_1);
		bool L_2 = ConfigurationProperty_get_IsElement_m11860(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_3 = PropertyInformation_get_Value_m11977(__this, /*hidden argument*/NULL);
		PropertyInformation_t3351 * L_4 = ___parentProperty;
		NullCheck(L_4);
		Object_t * L_5 = PropertyInformation_get_Value_m11977(L_4, /*hidden argument*/NULL);
		NullCheck(((ConfigurationElement_t3318 *)Castclass(L_3, ConfigurationElement_t3318_il2cpp_TypeInfo_var)));
		VirtActionInvoker1< ConfigurationElement_t3318 * >::Invoke(19 /* System.Void System.Configuration.ConfigurationElement::Reset(System.Configuration.ConfigurationElement) */, ((ConfigurationElement_t3318 *)Castclass(L_3, ConfigurationElement_t3318_il2cpp_TypeInfo_var)), ((ConfigurationElement_t3318 *)Castclass(L_5, ConfigurationElement_t3318_il2cpp_TypeInfo_var)));
		goto IL_0049;
	}

IL_0036:
	{
		PropertyInformation_t3351 * L_6 = ___parentProperty;
		NullCheck(L_6);
		Object_t * L_7 = PropertyInformation_get_Value_m11977(L_6, /*hidden argument*/NULL);
		__this->___val_1 = L_7;
		__this->___origin_2 = 1;
	}

IL_0049:
	{
		goto IL_0055;
	}

IL_004e:
	{
		__this->___origin_2 = 0;
	}

IL_0055:
	{
		return;
	}
}
// System.Boolean System.Configuration.PropertyInformation::get_IsElement()
extern "C" bool PropertyInformation_get_IsElement_m11980 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		NullCheck(L_0);
		bool L_1 = ConfigurationProperty_get_IsElement_m11860(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.PropertyValueOrigin System.Configuration.PropertyInformation::get_ValueOrigin()
extern "C" int32_t PropertyInformation_get_ValueOrigin_m11981 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___origin_2);
		return L_0;
	}
}
// System.String System.Configuration.PropertyInformation::GetStringValue()
extern "C" String_t* PropertyInformation_GetStringValue_m11982 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		Object_t * L_1 = PropertyInformation_get_Value_m11977(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_2 = ConfigurationProperty_ConvertToString_m11859(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Configuration.PropertyInformation::SetStringValue(System.String)
extern "C" void PropertyInformation_SetStringValue_m11983 (PropertyInformation_t3351 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		String_t* L_1 = ___value;
		NullCheck(L_0);
		Object_t * L_2 = ConfigurationProperty_ConvertFromString_m11858(L_0, L_1, /*hidden argument*/NULL);
		__this->___val_1 = L_2;
		Object_t * L_3 = (__this->___val_1);
		Object_t * L_4 = PropertyInformation_get_DefaultValue_m11970(__this, /*hidden argument*/NULL);
		bool L_5 = Object_Equals_m7546(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		__this->___origin_2 = 2;
	}

IL_002f:
	{
		return;
	}
}
// System.Configuration.ConfigurationProperty System.Configuration.PropertyInformation::get_Property()
extern "C" ConfigurationProperty_t3333 * PropertyInformation_get_Property_m11984 (PropertyInformation_t3351 * __this, const MethodInfo* method)
{
	{
		ConfigurationProperty_t3333 * L_0 = (__this->___property_4);
		return L_0;
	}
}
// System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator
#include "System_Configuration_System_Configuration_PropertyInformatio_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator
#include "System_Configuration_System_Configuration_PropertyInformatio_0MethodDeclarations.h"



// System.Void System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::.ctor(System.Configuration.PropertyInformationCollection)
extern "C" void PropertyInformationEnumerator__ctor_m11985 (PropertyInformationEnumerator_t3360 * __this, PropertyInformationCollection_t3352 * ___collection, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		PropertyInformationCollection_t3352 * L_0 = ___collection;
		__this->___collection_0 = L_0;
		__this->___position_1 = (-1);
		return;
	}
}
// System.Object System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::get_Current()
extern TypeInfo* InvalidOperationException_t1450_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformationEnumerator_get_Current_m11986 (PropertyInformationEnumerator_t3360 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2518);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___position_1);
		PropertyInformationCollection_t3352 * L_1 = (__this->___collection_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = (__this->___position_1);
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		PropertyInformationCollection_t3352 * L_4 = (__this->___collection_0);
		int32_t L_5 = (__this->___position_1);
		NullCheck(L_4);
		Object_t * L_6 = NameObjectCollectionBase_BaseGet_m12125(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0034:
	{
		InvalidOperationException_t1450 * L_7 = (InvalidOperationException_t1450 *)il2cpp_codegen_object_new (InvalidOperationException_t1450_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}
}
// System.Boolean System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::MoveNext()
extern "C" bool PropertyInformationEnumerator_MoveNext_m11987 (PropertyInformationEnumerator_t3360 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = (__this->___position_1);
		int32_t L_1 = ((int32_t)((int32_t)L_0+(int32_t)1));
		V_0 = L_1;
		__this->___position_1 = L_1;
		int32_t L_2 = V_0;
		PropertyInformationCollection_t3352 * L_3 = (__this->___collection_0);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		return G_B3_0;
	}
}
// System.Void System.Configuration.PropertyInformationCollection/PropertyInformationEnumerator::Reset()
extern "C" void PropertyInformationEnumerator_Reset_m11988 (PropertyInformationEnumerator_t3360 * __this, const MethodInfo* method)
{
	{
		__this->___position_1 = (-1);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.PropertyInformationCollection::.ctor()
extern TypeInfo* StringComparer_t2948_il2cpp_TypeInfo_var;
extern "C" void PropertyInformationCollection__ctor_m11989 (PropertyInformationCollection_t3352 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2948_il2cpp_TypeInfo_var);
		StringComparer_t2948 * L_0 = StringComparer_get_Ordinal_m12117(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m12118(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.PropertyInformation System.Configuration.PropertyInformationCollection::get_Item(System.String)
extern TypeInfo* PropertyInformation_t3351_il2cpp_TypeInfo_var;
extern "C" PropertyInformation_t3351 * PropertyInformationCollection_get_Item_m11990 (PropertyInformationCollection_t3352 * __this, String_t* ___propertyName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformation_t3351_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5815);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___propertyName;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m12119(__this, L_0, /*hidden argument*/NULL);
		return ((PropertyInformation_t3351 *)Castclass(L_1, PropertyInformation_t3351_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IEnumerator System.Configuration.PropertyInformationCollection::GetEnumerator()
extern TypeInfo* PropertyInformationEnumerator_t3360_il2cpp_TypeInfo_var;
extern "C" Object_t * PropertyInformationCollection_GetEnumerator_m11991 (PropertyInformationCollection_t3352 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInformationEnumerator_t3360_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5853);
		s_Il2CppMethodIntialized = true;
	}
	{
		PropertyInformationEnumerator_t3360 * L_0 = (PropertyInformationEnumerator_t3360 *)il2cpp_codegen_object_new (PropertyInformationEnumerator_t3360_il2cpp_TypeInfo_var);
		PropertyInformationEnumerator__ctor_m11985(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Configuration.PropertyInformationCollection::Add(System.Configuration.PropertyInformation)
extern "C" void PropertyInformationCollection_Add_m11992 (PropertyInformationCollection_t3352 * __this, PropertyInformation_t3351 * ___pi, const MethodInfo* method)
{
	{
		PropertyInformation_t3351 * L_0 = ___pi;
		NullCheck(L_0);
		String_t* L_1 = PropertyInformation_get_Name_m11975(L_0, /*hidden argument*/NULL);
		PropertyInformation_t3351 * L_2 = ___pi;
		NameObjectCollectionBase_BaseAdd_m12127(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.PropertyInformationCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotImplementedException_t1461_il2cpp_TypeInfo_var;
extern "C" void PropertyInformationCollection_GetObjectData_m11993 (PropertyInformationCollection_t3352 * __this, SerializationInfo_t2940 * ___info, StreamingContext_t2941  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2548);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1461 * L_0 = (NotImplementedException_t1461 *)il2cpp_codegen_object_new (NotImplementedException_t1461_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.PropertyValueOrigin
#include "System_Configuration_System_Configuration_PropertyValueOrigiMethodDeclarations.h"



// System.Configuration.ProtectedConfiguration
#include "System_Configuration_System_Configuration_ProtectedConfigura.h"
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ProtectedConfigurationProviderCollection
#include "System_Configuration_System_Configuration_ProtectedConfigura_1.h"
// System.Configuration.ProtectedConfigurationSection
#include "System_Configuration_System_Configuration_ProtectedConfigura_2.h"
// System.Configuration.ProtectedConfigurationSection
#include "System_Configuration_System_Configuration_ProtectedConfigura_2MethodDeclarations.h"
// System.Configuration.ProtectedConfigurationProviderCollection
#include "System_Configuration_System_Configuration_ProtectedConfigura_1MethodDeclarations.h"


// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfiguration::get_Providers()
extern "C" ProtectedConfigurationProviderCollection_t3364 * ProtectedConfiguration_get_Providers_m11994 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		ProtectedConfigurationSection_t3365 * L_0 = ProtectedConfiguration_get_Section_m11995(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		ProtectedConfigurationProviderCollection_t3364 * L_1 = ProtectedConfigurationSection_GetAllProviders_m12003(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ProtectedConfigurationSection System.Configuration.ProtectedConfiguration::get_Section()
extern TypeInfo* ConfigurationManager_t3330_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationSection_t3365 * ProtectedConfiguration_get_Section_m11995 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationManager_t3330_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5794);
		ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5854);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConfigurationManager_t3330_il2cpp_TypeInfo_var);
		Object_t * L_0 = ConfigurationManager_GetSection_m11844(NULL /*static, unused*/, (String_t*) &_stringLiteral2457, /*hidden argument*/NULL);
		return ((ProtectedConfigurationSection_t3365 *)Castclass(L_0, ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t3363 * ProtectedConfiguration_GetProvider_m11996 (Object_t * __this /* static, unused */, String_t* ___name, bool ___throwOnError, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	ProtectedConfigurationProvider_t3363 * V_0 = {0};
	{
		ProtectedConfigurationProviderCollection_t3364 * L_0 = ProtectedConfiguration_get_Providers_m11994(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		ProtectedConfigurationProvider_t3363 * L_2 = ProtectedConfigurationProviderCollection_get_Item_m11998(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ProtectedConfigurationProvider_t3363 * L_3 = V_0;
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		bool L_4 = ___throwOnError;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral2458, L_5, /*hidden argument*/NULL);
		Exception_t57 * L_7 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0029:
	{
		ProtectedConfigurationProvider_t3363 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Xml.XmlNode System.Configuration.ProtectedConfigurationProvider::Decrypt(System.Xml.XmlNode)
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ProtectedConfigurationProviderCollection::.ctor()
extern "C" void ProtectedConfigurationProviderCollection__ctor_m11997 (ProtectedConfigurationProviderCollection_t3364 * __this, const MethodInfo* method)
{
	{
		ProviderCollection__ctor_m11662(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationProviderCollection::get_Item(System.String)
extern TypeInfo* ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t3363 * ProtectedConfigurationProviderCollection_get_Item_m11998 (ProtectedConfigurationProviderCollection_t3364 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5855);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		ProviderBase_t3298 * L_1 = ProviderCollection_get_Item_m11669(__this, L_0, /*hidden argument*/NULL);
		return ((ProtectedConfigurationProvider_t3363 *)Castclass(L_1, ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase)
extern "C" void ProtectedConfigurationProviderCollection_Add_m11999 (ProtectedConfigurationProviderCollection_t3364 * __this, ProviderBase_t3298 * ___provider, const MethodInfo* method)
{
	{
		ProviderBase_t3298 * L_0 = ___provider;
		ProviderCollection_Add_m11664(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Configuration.ProviderSettingsCollection
#include "System_Configuration_System_Configuration_ProviderSettingsCo.h"
// System.Configuration.ProviderSettings
#include "System_Configuration_System_Configuration_ProviderSettings.h"
// System.Configuration.ProviderSettings
#include "System_Configuration_System_Configuration_ProviderSettingsMethodDeclarations.h"


// System.Void System.Configuration.ProtectedConfigurationSection::.cctor()
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* ProviderSettingsCollection_t3367_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern "C" void ProtectedConfigurationSection__cctor_m12000 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		ProviderSettingsCollection_t3367_0_0_0_var = il2cpp_codegen_type_from_index(5856);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5854);
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t3333 * L_1 = (ConfigurationProperty_t3333 *)il2cpp_codegen_object_new (ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m11846(L_1, (String_t*) &_stringLiteral2459, L_0, (String_t*) &_stringLiteral2460, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___defaultProviderProp_17 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ProviderSettingsCollection_t3367_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t3333 * L_3 = (ConfigurationProperty_t3333 *)il2cpp_codegen_object_new (ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m11846(L_3, (String_t*) &_stringLiteral2461, L_2, NULL, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___providersProp_18 = L_3;
		ConfigurationPropertyCollection_t3314 * L_4 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_4, /*hidden argument*/NULL);
		((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___properties_19 = L_4;
		ConfigurationPropertyCollection_t3314 * L_5 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		ConfigurationProperty_t3333 * L_6 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___defaultProviderProp_17;
		NullCheck(L_5);
		ConfigurationPropertyCollection_Add_m11875(L_5, L_6, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t3314 * L_7 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		ConfigurationProperty_t3333 * L_8 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___providersProp_18;
		NullCheck(L_7);
		ConfigurationPropertyCollection_Add_m11875(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Configuration.ProviderSettingsCollection System.Configuration.ProtectedConfigurationSection::get_Providers()
extern TypeInfo* ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var;
extern "C" ProviderSettingsCollection_t3367 * ProtectedConfigurationSection_get_Providers_m12001 (ProtectedConfigurationSection_t3365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5854);
		ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5856);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var);
		ConfigurationProperty_t3333 * L_0 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___providersProp_18;
		Object_t * L_1 = ConfigurationElement_get_Item_m11728(__this, L_0, /*hidden argument*/NULL);
		return ((ProviderSettingsCollection_t3367 *)Castclass(L_1, ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProtectedConfigurationSection::get_Properties()
extern TypeInfo* ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * ProtectedConfigurationSection_get_Properties_m12002 (ProtectedConfigurationSection_t3365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5854);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t3314 * L_0 = ((ProtectedConfigurationSection_t3365_StaticFields*)ProtectedConfigurationSection_t3365_il2cpp_TypeInfo_var->static_fields)->___properties_19;
		return L_0;
	}
}
// System.Configuration.ProtectedConfigurationProviderCollection System.Configuration.ProtectedConfigurationSection::GetAllProviders()
extern TypeInfo* ProtectedConfigurationProviderCollection_t3364_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProviderCollection_t3364 * ProtectedConfigurationSection_GetAllProviders_m12003 (ProtectedConfigurationSection_t3365 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProtectedConfigurationProviderCollection_t3364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5857);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ProviderSettings_t3366 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ProtectedConfigurationProviderCollection_t3364 * L_0 = (__this->___providers_20);
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		ProtectedConfigurationProviderCollection_t3364 * L_1 = (ProtectedConfigurationProviderCollection_t3364 *)il2cpp_codegen_object_new (ProtectedConfigurationProviderCollection_t3364_il2cpp_TypeInfo_var);
		ProtectedConfigurationProviderCollection__ctor_m11997(L_1, /*hidden argument*/NULL);
		__this->___providers_20 = L_1;
		ProviderSettingsCollection_t3367 * L_2 = ProtectedConfigurationSection_get_Providers_m12001(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Collections.IEnumerator System.Configuration.ConfigurationElementCollection::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0027:
		{
			Object_t * L_4 = V_1;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_0 = ((ProviderSettings_t3366 *)Castclass(L_5, ProviderSettings_t3366_il2cpp_TypeInfo_var));
			ProtectedConfigurationProviderCollection_t3364 * L_6 = (__this->___providers_20);
			ProviderSettings_t3366 * L_7 = V_0;
			ProtectedConfigurationProvider_t3363 * L_8 = ProtectedConfigurationSection_InstantiateProvider_m12004(__this, L_7, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< ProviderBase_t3298 * >::Invoke(9 /* System.Void System.Configuration.ProtectedConfigurationProviderCollection::Add(System.Configuration.Provider.ProviderBase) */, L_6, L_8);
		}

IL_0045:
		{
			Object_t * L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0027;
			}
		}

IL_0050:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		{
			Object_t * L_11 = V_1;
			V_2 = ((Object_t *)IsInst(L_11, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_12 = V_2;
			if (L_12)
			{
				goto IL_0060;
			}
		}

IL_005f:
		{
			IL2CPP_END_FINALLY(85)
		}

IL_0060:
		{
			Object_t * L_13 = V_2;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(85)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0067:
	{
		ProtectedConfigurationProviderCollection_t3364 * L_14 = (__this->___providers_20);
		return L_14;
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfigurationSection::InstantiateProvider(System.Configuration.ProviderSettings)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" ProtectedConfigurationProvider_t3363 * ProtectedConfigurationSection_InstantiateProvider_m12004 (ProtectedConfigurationSection_t3365 * __this, ProviderSettings_t3366 * ___ps, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5855);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	ProtectedConfigurationProvider_t3363 * V_1 = {0};
	{
		ProviderSettings_t3366 * L_0 = ___ps;
		NullCheck(L_0);
		String_t* L_1 = ProviderSettings_get_Type_m12012(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m10359(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		Object_t * L_4 = Activator_CreateInstance_m7631(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = ((ProtectedConfigurationProvider_t3363 *)IsInst(L_4, ProtectedConfigurationProvider_t3363_il2cpp_TypeInfo_var));
		ProtectedConfigurationProvider_t3363 * L_5 = V_1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t57 * L_6 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_6, (String_t*) &_stringLiteral2462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002a:
	{
		ProtectedConfigurationProvider_t3363 * L_7 = V_1;
		ProviderSettings_t3366 * L_8 = ___ps;
		NullCheck(L_8);
		String_t* L_9 = ProviderSettings_get_Name_m12011(L_8, /*hidden argument*/NULL);
		ProviderSettings_t3366 * L_10 = ___ps;
		NullCheck(L_10);
		NameValueCollection_t3303 * L_11 = ProviderSettings_get_Parameters_m12014(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, NameValueCollection_t3303 * >::Invoke(4 /* System.Void System.Configuration.Provider.ProviderBase::Initialize(System.String,System.Collections.Specialized.NameValueCollection) */, L_7, L_9, L_11);
		ProtectedConfigurationProvider_t3363 * L_12 = V_1;
		return L_12;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ProviderSettings::.ctor()
extern "C" void ProviderSettings__ctor_m12005 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	{
		ConfigurationElement__ctor_m11712(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ProviderSettings::.cctor()
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationProperty_t3333_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern "C" void ProviderSettings__cctor_m12006 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ConfigurationProperty_t3333_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5811);
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t3333 * L_1 = (ConfigurationProperty_t3333 *)il2cpp_codegen_object_new (ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m11847(L_1, (String_t*) &_stringLiteral524, L_0, NULL, 6, /*hidden argument*/NULL);
		((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___nameProp_14 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ConfigurationProperty_t3333 * L_3 = (ConfigurationProperty_t3333 *)il2cpp_codegen_object_new (ConfigurationProperty_t3333_il2cpp_TypeInfo_var);
		ConfigurationProperty__ctor_m11847(L_3, (String_t*) &_stringLiteral819, L_2, NULL, 2, /*hidden argument*/NULL);
		((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___typeProp_15 = L_3;
		ConfigurationPropertyCollection_t3314 * L_4 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_4, /*hidden argument*/NULL);
		((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___properties_16 = L_4;
		ConfigurationPropertyCollection_t3314 * L_5 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		ConfigurationProperty_t3333 * L_6 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___nameProp_14;
		NullCheck(L_5);
		ConfigurationPropertyCollection_Add_m11875(L_5, L_6, /*hidden argument*/NULL);
		ConfigurationPropertyCollection_t3314 * L_7 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		ConfigurationProperty_t3333 * L_8 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___typeProp_15;
		NullCheck(L_7);
		ConfigurationPropertyCollection_Add_m11875(L_7, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Configuration.ProviderSettings::OnDeserializeUnrecognizedAttribute(System.String,System.String)
extern TypeInfo* ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var;
extern "C" bool ProviderSettings_OnDeserializeUnrecognizedAttribute_m12007 (ProviderSettings_t3366 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5859);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigNameValueCollection_t3302 * L_0 = (__this->___parameters_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigNameValueCollection_t3302 * L_1 = (ConfigNameValueCollection_t3302 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m11673(L_1, /*hidden argument*/NULL);
		__this->___parameters_13 = L_1;
	}

IL_0016:
	{
		ConfigNameValueCollection_t3302 * L_2 = (__this->___parameters_13);
		String_t* L_3 = ___name;
		String_t* L_4 = ___value;
		NullCheck(L_2);
		NameValueCollection_set_Item_m12128(L_2, L_3, L_4, /*hidden argument*/NULL);
		ConfigNameValueCollection_t3302 * L_5 = (__this->___parameters_13);
		NullCheck(L_5);
		ConfigNameValueCollection_ResetModified_m11675(L_5, /*hidden argument*/NULL);
		return 1;
	}
}
// System.Boolean System.Configuration.ProviderSettings::IsModified()
extern "C" bool ProviderSettings_IsModified_m12008 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		ConfigNameValueCollection_t3302 * L_0 = (__this->___parameters_13);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ConfigNameValueCollection_t3302 * L_1 = (__this->___parameters_13);
		NullCheck(L_1);
		bool L_2 = ConfigNameValueCollection_get_IsModified_m11676(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		bool L_3 = ConfigurationElement_IsModified_m11744(__this, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_3));
		goto IL_0024;
	}

IL_0023:
	{
		G_B4_0 = 1;
	}

IL_0024:
	{
		return G_B4_0;
	}
}
// System.Void System.Configuration.ProviderSettings::Reset(System.Configuration.ConfigurationElement)
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var;
extern "C" void ProviderSettings_Reset_m12009 (ProviderSettings_t3366 * __this, ConfigurationElement_t3318 * ___parentElement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5859);
		s_Il2CppMethodIntialized = true;
	}
	ProviderSettings_t3366 * V_0 = {0};
	{
		ConfigurationElement_t3318 * L_0 = ___parentElement;
		ConfigurationElement_Reset_m11747(__this, L_0, /*hidden argument*/NULL);
		ConfigurationElement_t3318 * L_1 = ___parentElement;
		V_0 = ((ProviderSettings_t3366 *)IsInst(L_1, ProviderSettings_t3366_il2cpp_TypeInfo_var));
		ProviderSettings_t3366 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		ProviderSettings_t3366 * L_3 = V_0;
		NullCheck(L_3);
		ConfigNameValueCollection_t3302 * L_4 = (L_3->___parameters_13);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		ProviderSettings_t3366 * L_5 = V_0;
		NullCheck(L_5);
		ConfigNameValueCollection_t3302 * L_6 = (L_5->___parameters_13);
		ConfigNameValueCollection_t3302 * L_7 = (ConfigNameValueCollection_t3302 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m11674(L_7, L_6, /*hidden argument*/NULL);
		__this->___parameters_13 = L_7;
		goto IL_003c;
	}

IL_0035:
	{
		__this->___parameters_13 = (ConfigNameValueCollection_t3302 *)NULL;
	}

IL_003c:
	{
		return;
	}
}
// System.Void System.Configuration.ProviderSettings::Unmerge(System.Configuration.ConfigurationElement,System.Configuration.ConfigurationElement,System.Configuration.ConfigurationSaveMode)
extern "C" void ProviderSettings_Unmerge_m12010 (ProviderSettings_t3366 * __this, ConfigurationElement_t3318 * ___source, ConfigurationElement_t3318 * ___parent, int32_t ___updateMode, const MethodInfo* method)
{
	{
		ConfigurationElement_t3318 * L_0 = ___source;
		ConfigurationElement_t3318 * L_1 = ___parent;
		int32_t L_2 = ___updateMode;
		ConfigurationElement_Unmerge_m11751(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.ProviderSettings::get_Name()
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ProviderSettings_get_Name_m12011 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t3366_il2cpp_TypeInfo_var);
		ConfigurationProperty_t3333 * L_0 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___nameProp_14;
		Object_t * L_1 = ConfigurationElement_get_Item_m11728(__this, L_0, /*hidden argument*/NULL);
		return ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.String System.Configuration.ProviderSettings::get_Type()
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ProviderSettings_get_Type_m12012 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t3366_il2cpp_TypeInfo_var);
		ConfigurationProperty_t3333 * L_0 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___typeProp_15;
		Object_t * L_1 = ConfigurationElement_get_Item_m11728(__this, L_0, /*hidden argument*/NULL);
		return ((String_t*)Castclass(L_1, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::get_Properties()
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * ProviderSettings_get_Properties_m12013 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettings_t3366_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t3314 * L_0 = ((ProviderSettings_t3366_StaticFields*)ProviderSettings_t3366_il2cpp_TypeInfo_var->static_fields)->___properties_16;
		return L_0;
	}
}
// System.Collections.Specialized.NameValueCollection System.Configuration.ProviderSettings::get_Parameters()
extern TypeInfo* ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var;
extern "C" NameValueCollection_t3303 * ProviderSettings_get_Parameters_m12014 (ProviderSettings_t3366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5859);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigNameValueCollection_t3302 * L_0 = (__this->___parameters_13);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigNameValueCollection_t3302 * L_1 = (ConfigNameValueCollection_t3302 *)il2cpp_codegen_object_new (ConfigNameValueCollection_t3302_il2cpp_TypeInfo_var);
		ConfigNameValueCollection__ctor_m11673(L_1, /*hidden argument*/NULL);
		__this->___parameters_13 = L_1;
	}

IL_0016:
	{
		ConfigNameValueCollection_t3302 * L_2 = (__this->___parameters_13);
		return L_2;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Configuration.ProviderSettingsCollection
#include "System_Configuration_System_Configuration_ProviderSettingsCoMethodDeclarations.h"



// System.Void System.Configuration.ProviderSettingsCollection::.cctor()
extern TypeInfo* ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var;
extern TypeInfo* ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var;
extern "C" void ProviderSettingsCollection__cctor_m12015 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5810);
		ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5856);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationPropertyCollection_t3314 * L_0 = (ConfigurationPropertyCollection_t3314 *)il2cpp_codegen_object_new (ConfigurationPropertyCollection_t3314_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection__ctor_m11870(L_0, /*hidden argument*/NULL);
		((ProviderSettingsCollection_t3367_StaticFields*)ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var->static_fields)->___props_23 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationElement System.Configuration.ProviderSettingsCollection::CreateNewElement()
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern "C" ConfigurationElement_t3318 * ProviderSettingsCollection_CreateNewElement_m12016 (ProviderSettingsCollection_t3367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		s_Il2CppMethodIntialized = true;
	}
	{
		ProviderSettings_t3366 * L_0 = (ProviderSettings_t3366 *)il2cpp_codegen_object_new (ProviderSettings_t3366_il2cpp_TypeInfo_var);
		ProviderSettings__ctor_m12005(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object System.Configuration.ProviderSettingsCollection::GetElementKey(System.Configuration.ConfigurationElement)
extern TypeInfo* ProviderSettings_t3366_il2cpp_TypeInfo_var;
extern "C" Object_t * ProviderSettingsCollection_GetElementKey_m12017 (ProviderSettingsCollection_t3367 * __this, ConfigurationElement_t3318 * ___element, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettings_t3366_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5858);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigurationElement_t3318 * L_0 = ___element;
		NullCheck(((ProviderSettings_t3366 *)Castclass(L_0, ProviderSettings_t3366_il2cpp_TypeInfo_var)));
		String_t* L_1 = ProviderSettings_get_Name_m12011(((ProviderSettings_t3366 *)Castclass(L_0, ProviderSettings_t3366_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettingsCollection::get_Properties()
extern TypeInfo* ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var;
extern "C" ConfigurationPropertyCollection_t3314 * ProviderSettingsCollection_get_Properties_m12018 (ProviderSettingsCollection_t3367 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5856);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var);
		ConfigurationPropertyCollection_t3314 * L_0 = ((ProviderSettingsCollection_t3367_StaticFields*)ProviderSettingsCollection_t3367_il2cpp_TypeInfo_var->static_fields)->___props_23;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"


// System.Void System.Configuration.SectionInfo::.ctor()
extern "C" void SectionInfo__ctor_m12019 (SectionInfo_t3368 * __this, const MethodInfo* method)
{
	{
		__this->___allowLocation_6 = 1;
		__this->___requirePermission_7 = 1;
		__this->___allowDefinition_9 = ((int32_t)300);
		__this->___allowExeDefinition_10 = ((int32_t)100);
		ConfigInfo__ctor_m11678(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.SectionInfo::CreateInstance()
extern TypeInfo* ConfigurationSection_t3340_il2cpp_TypeInfo_var;
extern "C" Object_t * SectionInfo_CreateInstance_m12020 (SectionInfo_t3368 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSection_t3340_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5802);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ConfigurationSection_t3340 * V_1 = {0};
	{
		Object_t * L_0 = ConfigInfo_CreateInstance_m11679(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		V_1 = ((ConfigurationSection_t3340 *)IsInst(L_1, ConfigurationSection_t3340_il2cpp_TypeInfo_var));
		ConfigurationSection_t3340 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		ConfigurationSection_t3340 * L_3 = V_1;
		NullCheck(L_3);
		SectionInformation_t3338 * L_4 = ConfigurationSection_get_SectionInformation_m11880(L_3, /*hidden argument*/NULL);
		bool L_5 = (__this->___allowLocation_6);
		NullCheck(L_4);
		SectionInformation_set_AllowLocation_m12051(L_4, L_5, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_6 = V_1;
		NullCheck(L_6);
		SectionInformation_t3338 * L_7 = ConfigurationSection_get_SectionInformation_m11880(L_6, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___allowDefinition_9);
		NullCheck(L_7);
		SectionInformation_set_AllowDefinition_m12049(L_7, L_8, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_9 = V_1;
		NullCheck(L_9);
		SectionInformation_t3338 * L_10 = ConfigurationSection_get_SectionInformation_m11880(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___allowExeDefinition_10);
		NullCheck(L_10);
		SectionInformation_set_AllowExeDefinition_m12050(L_10, L_11, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_12 = V_1;
		NullCheck(L_12);
		SectionInformation_t3338 * L_13 = ConfigurationSection_get_SectionInformation_m11880(L_12, /*hidden argument*/NULL);
		bool L_14 = (__this->___requirePermission_7);
		NullCheck(L_13);
		SectionInformation_set_RequirePermission_m12054(L_13, L_14, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_15 = V_1;
		NullCheck(L_15);
		SectionInformation_t3338 * L_16 = ConfigurationSection_get_SectionInformation_m11880(L_15, /*hidden argument*/NULL);
		bool L_17 = (__this->___restartOnExternalChanges_8);
		NullCheck(L_16);
		SectionInformation_set_RestartOnExternalChanges_m12055(L_16, L_17, /*hidden argument*/NULL);
		ConfigurationSection_t3340 * L_18 = V_1;
		NullCheck(L_18);
		SectionInformation_t3338 * L_19 = ConfigurationSection_get_SectionInformation_m11880(L_18, /*hidden argument*/NULL);
		String_t* L_20 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		NullCheck(L_19);
		SectionInformation_SetName_m12060(L_19, L_20, /*hidden argument*/NULL);
	}

IL_007a:
	{
		Object_t * L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Configuration.SectionInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern const Il2CppType* ConfigurationAllowDefinition_t3310_0_0_0_var;
extern const Il2CppType* ConfigurationAllowExeDefinition_t3311_0_0_0_var;
extern TypeInfo* SectionInfo_t3368_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t100_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4006_MethodInfo_var;
extern "C" void SectionInfo_ReadConfig_m12021 (SectionInfo_t3368 * __this, Configuration_t3300 * ___cfg, String_t* ___streamName, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationAllowDefinition_t3310_0_0_0_var = il2cpp_codegen_type_from_index(5860);
		ConfigurationAllowExeDefinition_t3311_0_0_0_var = il2cpp_codegen_type_from_index(5861);
		SectionInfo_t3368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5842);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Enum_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		Dictionary_2__ctor_m4006_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	bool V_4 = false;
	String_t* V_5 = {0};
	bool V_6 = false;
	String_t* V_7 = {0};
	Dictionary_2_t223 * V_8 = {0};
	int32_t V_9 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___streamName;
		ConfigInfo_set_StreamName_m11680(__this, L_0, /*hidden argument*/NULL);
		Configuration_t3300 * L_1 = ___cfg;
		NullCheck(L_1);
		Object_t * L_2 = Configuration_get_ConfigHost_m11689(L_1, /*hidden argument*/NULL);
		((ConfigInfo_t3304 *)__this)->___ConfigHost_5 = L_2;
		goto IL_0280;
	}

IL_0018:
	{
		XmlReader_t3372 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_3);
		V_7 = L_4;
		String_t* L_5 = V_7;
		if (!L_5)
		{
			goto IL_0264;
		}
	}
	{
		Dictionary_2_t223 * L_6 = ((SectionInfo_t3368_StaticFields*)SectionInfo_t3368_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11;
		if (L_6)
		{
			goto IL_009b;
		}
	}
	{
		Dictionary_2_t223 * L_7 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4006(L_7, 7, /*hidden argument*/Dictionary_2__ctor_m4006_MethodInfo_var);
		V_8 = L_7;
		Dictionary_2_t223 * L_8 = V_8;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, (String_t*) &_stringLiteral2463, 0);
		Dictionary_2_t223 * L_9 = V_8;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, (String_t*) &_stringLiteral2464, 1);
		Dictionary_2_t223 * L_10 = V_8;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, (String_t*) &_stringLiteral2465, 2);
		Dictionary_2_t223 * L_11 = V_8;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, (String_t*) &_stringLiteral819, 3);
		Dictionary_2_t223 * L_12 = V_8;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, (String_t*) &_stringLiteral524, 4);
		Dictionary_2_t223 * L_13 = V_8;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, (String_t*) &_stringLiteral2466, 5);
		Dictionary_2_t223 * L_14 = V_8;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_14, (String_t*) &_stringLiteral2467, 6);
		Dictionary_2_t223 * L_15 = V_8;
		((SectionInfo_t3368_StaticFields*)SectionInfo_t3368_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11 = L_15;
	}

IL_009b:
	{
		Dictionary_2_t223 * L_16 = ((SectionInfo_t3368_StaticFields*)SectionInfo_t3368_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1_11;
		String_t* L_17 = V_7;
		NullCheck(L_16);
		bool L_18 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_16, L_17, (&V_9));
		if (!L_18)
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_19 = V_9;
		if (L_19 == 0)
		{
			goto IL_00d6;
		}
		if (L_19 == 1)
		{
			goto IL_011a;
		}
		if (L_19 == 2)
		{
			goto IL_0158;
		}
		if (L_19 == 3)
		{
			goto IL_0196;
		}
		if (L_19 == 4)
		{
			goto IL_01a7;
		}
		if (L_19 == 5)
		{
			goto IL_01d9;
		}
		if (L_19 == 6)
		{
			goto IL_021d;
		}
	}
	{
		goto IL_0264;
	}

IL_00d6:
	{
		XmlReader_t3372 * L_20 = ___reader;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_20);
		V_0 = L_21;
		String_t* L_22 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m456(NULL /*static, unused*/, L_22, (String_t*) &_stringLiteral105, /*hidden argument*/NULL);
		__this->___allowLocation_6 = L_23;
		bool L_24 = (__this->___allowLocation_6);
		if (L_24)
		{
			goto IL_0115;
		}
	}
	{
		String_t* L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Inequality_m415(NULL /*static, unused*/, L_25, (String_t*) &_stringLiteral106, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0115;
		}
	}
	{
		XmlReader_t3372 * L_27 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2468, L_27, /*hidden argument*/NULL);
	}

IL_0115:
	{
		goto IL_0280;
	}

IL_011a:
	{
		XmlReader_t3372 * L_28 = ___reader;
		NullCheck(L_28);
		String_t* L_29 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_28);
		V_1 = L_29;
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationAllowDefinition_t3310_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_31 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t100_il2cpp_TypeInfo_var);
		Object_t * L_32 = Enum_Parse_m12129(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		__this->___allowDefinition_9 = ((*(int32_t*)((int32_t*)UnBox (L_32, Int32_t82_il2cpp_TypeInfo_var))));
		goto IL_0153;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0141;
		throw e;
	}

CATCH_0141:
	{ // begin catch(System.Object)
		XmlReader_t3372 * L_33 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2468, L_33, /*hidden argument*/NULL);
		goto IL_0153;
	} // end catch (depth: 1)

IL_0153:
	{
		goto IL_0280;
	}

IL_0158:
	{
		XmlReader_t3372 * L_34 = ___reader;
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_34);
		V_2 = L_35;
	}

IL_015f:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationAllowExeDefinition_t3311_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t100_il2cpp_TypeInfo_var);
		Object_t * L_38 = Enum_Parse_m12129(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		__this->___allowExeDefinition_10 = ((*(int32_t*)((int32_t*)UnBox (L_38, Int32_t82_il2cpp_TypeInfo_var))));
		goto IL_0191;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_017f;
		throw e;
	}

CATCH_017f:
	{ // begin catch(System.Object)
		XmlReader_t3372 * L_39 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2468, L_39, /*hidden argument*/NULL);
		goto IL_0191;
	} // end catch (depth: 1)

IL_0191:
	{
		goto IL_0280;
	}

IL_0196:
	{
		XmlReader_t3372 * L_40 = ___reader;
		NullCheck(L_40);
		String_t* L_41 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_40);
		((ConfigInfo_t3304 *)__this)->___TypeName_1 = L_41;
		goto IL_0280;
	}

IL_01a7:
	{
		XmlReader_t3372 * L_42 = ___reader;
		NullCheck(L_42);
		String_t* L_43 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_42);
		((ConfigInfo_t3304 *)__this)->___Name_0 = L_43;
		String_t* L_44 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m456(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral588, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01d4;
		}
	}
	{
		XmlReader_t3372 * L_46 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2469, L_46, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		goto IL_0280;
	}

IL_01d9:
	{
		XmlReader_t3372 * L_47 = ___reader;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_47);
		V_3 = L_48;
		String_t* L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m456(NULL /*static, unused*/, L_49, (String_t*) &_stringLiteral105, /*hidden argument*/NULL);
		V_4 = L_50;
		bool L_51 = V_4;
		if (L_51)
		{
			goto IL_0210;
		}
	}
	{
		String_t* L_52 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_53 = String_op_Inequality_m415(NULL /*static, unused*/, L_52, (String_t*) &_stringLiteral106, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0210;
		}
	}
	{
		XmlReader_t3372 * L_54 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2468, L_54, /*hidden argument*/NULL);
	}

IL_0210:
	{
		bool L_55 = V_4;
		__this->___requirePermission_7 = L_55;
		goto IL_0280;
	}

IL_021d:
	{
		XmlReader_t3372 * L_56 = ___reader;
		NullCheck(L_56);
		String_t* L_57 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_56);
		V_5 = L_57;
		String_t* L_58 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_59 = String_op_Equality_m456(NULL /*static, unused*/, L_58, (String_t*) &_stringLiteral105, /*hidden argument*/NULL);
		V_6 = L_59;
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0257;
		}
	}
	{
		String_t* L_61 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_62 = String_op_Inequality_m415(NULL /*static, unused*/, L_61, (String_t*) &_stringLiteral106, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0257;
		}
	}
	{
		XmlReader_t3372 * L_63 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2468, L_63, /*hidden argument*/NULL);
	}

IL_0257:
	{
		bool L_64 = V_6;
		__this->___restartOnExternalChanges_8 = L_64;
		goto IL_0280;
	}

IL_0264:
	{
		XmlReader_t3372 * L_65 = ___reader;
		NullCheck(L_65);
		String_t* L_66 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_67 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral2470, L_66, /*hidden argument*/NULL);
		XmlReader_t3372 * L_68 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_67, L_68, /*hidden argument*/NULL);
		goto IL_0280;
	}

IL_0280:
	{
		XmlReader_t3372 * L_69 = ___reader;
		NullCheck(L_69);
		bool L_70 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_69);
		if (L_70)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_71 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		if (!L_71)
		{
			goto IL_02a1;
		}
	}
	{
		String_t* L_72 = (((ConfigInfo_t3304 *)__this)->___TypeName_1);
		if (L_72)
		{
			goto IL_02ad;
		}
	}

IL_02a1:
	{
		XmlReader_t3372 * L_73 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2471, L_73, /*hidden argument*/NULL);
	}

IL_02ad:
	{
		XmlReader_t3372 * L_74 = ___reader;
		NullCheck(L_74);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_74);
		XmlReader_t3372 * L_75 = ___reader;
		NullCheck(L_75);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_75);
		return;
	}
}
// System.Void System.Configuration.SectionInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalConfigHost_t3305_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationAllowExeDefinition_t3311_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationAllowDefinition_t3310_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t700_il2cpp_TypeInfo_var;
extern "C" void SectionInfo_ReadData_m12022 (SectionInfo_t3368 * __this, Configuration_t3300 * ___config, XmlReader_t3372 * ___reader, bool ___overrideAllowed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5795);
		IInternalConfigHost_t3305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5796);
		ConfigurationAllowExeDefinition_t3311_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5861);
		ConfigurationAllowDefinition_t3310_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5860);
		ObjectU5BU5D_t700_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * G_B7_0 = {0};
	{
		Configuration_t3300 * L_0 = ___config;
		NullCheck(L_0);
		bool L_1 = Configuration_get_HasFile_m11693(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		bool L_2 = (__this->___allowLocation_6);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2472, L_3, (String_t*) &_stringLiteral2473, /*hidden argument*/NULL);
		XmlReader_t3372 * L_5 = ___reader;
		ConfigurationErrorsException_t3322 * L_6 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_6, L_4, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0032:
	{
		Configuration_t3300 * L_7 = ___config;
		NullCheck(L_7);
		Object_t * L_8 = Configuration_get_ConfigHost_m11689(L_7, /*hidden argument*/NULL);
		Configuration_t3300 * L_9 = ___config;
		NullCheck(L_9);
		String_t* L_10 = Configuration_get_ConfigPath_m11691(L_9, /*hidden argument*/NULL);
		int32_t L_11 = (__this->___allowDefinition_9);
		int32_t L_12 = (__this->___allowExeDefinition_10);
		NullCheck(L_8);
		bool L_13 = (bool)InterfaceFuncInvoker3< bool, String_t*, int32_t, int32_t >::Invoke(5 /* System.Boolean System.Configuration.Internal.IInternalConfigHost::IsDefinitionAllowed(System.String,System.Configuration.ConfigurationAllowDefinition,System.Configuration.ConfigurationAllowExeDefinition) */, IInternalConfigHost_t3305_il2cpp_TypeInfo_var, L_8, L_10, L_11, L_12);
		if (L_13)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_14 = (__this->___allowExeDefinition_10);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)100))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_15 = (__this->___allowExeDefinition_10);
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(ConfigurationAllowExeDefinition_t3311_il2cpp_TypeInfo_var, &L_16);
		G_B7_0 = L_17;
		goto IL_007c;
	}

IL_0071:
	{
		int32_t L_18 = (__this->___allowDefinition_9);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(ConfigurationAllowDefinition_t3310_il2cpp_TypeInfo_var, &L_19);
		G_B7_0 = L_20;
	}

IL_007c:
	{
		V_0 = G_B7_0;
		ObjectU5BU5D_t700* L_21 = ((ObjectU5BU5D_t700*)SZArrayNew(ObjectU5BU5D_t700_il2cpp_TypeInfo_var, 5));
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 0);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral2474);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 0)) = (Object_t *)(String_t*) &_stringLiteral2474;
		ObjectU5BU5D_t700* L_22 = L_21;
		String_t* L_23 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		ArrayElementTypeCheck (L_22, L_23);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_22, 1)) = (Object_t *)L_23;
		ObjectU5BU5D_t700* L_24 = L_22;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 2);
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral2475);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_24, 2)) = (Object_t *)(String_t*) &_stringLiteral2475;
		ObjectU5BU5D_t700* L_25 = L_24;
		Object_t * L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 3);
		ArrayElementTypeCheck (L_25, L_26);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, 3)) = (Object_t *)L_26;
		ObjectU5BU5D_t700* L_27 = L_25;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 4);
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral2476);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 4)) = (Object_t *)(String_t*) &_stringLiteral2476;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m4034(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		XmlReader_t3372 * L_29 = ___reader;
		ConfigurationErrorsException_t3322 * L_30 = (ConfigurationErrorsException_t3322 *)il2cpp_codegen_object_new (ConfigurationErrorsException_t3322_il2cpp_TypeInfo_var);
		ConfigurationErrorsException__ctor_m11807(L_30, L_28, L_29, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_00b4:
	{
		Configuration_t3300 * L_31 = ___config;
		NullCheck(L_31);
		String_t* L_32 = Configuration_GetSectionXml_m11702(L_31, __this, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_33 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2474, L_33, (String_t*) &_stringLiteral2477, /*hidden argument*/NULL);
		XmlReader_t3372 * L_35 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_34, L_35, /*hidden argument*/NULL);
	}

IL_00dc:
	{
		Configuration_t3300 * L_36 = ___config;
		XmlReader_t3372 * L_37 = ___reader;
		NullCheck(L_37);
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(44 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_37);
		NullCheck(L_36);
		Configuration_SetSectionXml_m11701(L_36, __this, L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.SectionInfo::Merge(System.Configuration.ConfigInfo)
extern "C" void SectionInfo_Merge_m12023 (SectionInfo_t3368 * __this, ConfigInfo_t3304 * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Boolean
#include "mscorlib_System_BooleanMethodDeclarations.h"


// System.Void System.Configuration.SectionGroupInfo::.ctor()
extern const Il2CppType* ConfigurationSectionGroup_t3306_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo__ctor_m12024 (SectionGroupInfo_t3308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigurationSectionGroup_t3306_0_0_0_var = il2cpp_codegen_type_from_index(5801);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfo__ctor_m11678(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ConfigurationSectionGroup_t3306_0_0_0_var), /*hidden argument*/NULL);
		((ConfigInfo_t3304 *)__this)->___Type_2 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::.cctor()
extern TypeInfo* ConfigInfoCollection_t3369_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo__cctor_m12025 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigInfoCollection_t3369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5862);
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t3369 * L_0 = (ConfigInfoCollection_t3369 *)il2cpp_codegen_object_new (ConfigInfoCollection_t3369_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m12039(L_0, /*hidden argument*/NULL);
		((SectionGroupInfo_t3308_StaticFields*)SectionGroupInfo_t3308_il2cpp_TypeInfo_var->static_fields)->___emptyList_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::AddChild(System.Configuration.ConfigInfo)
extern TypeInfo* SectionInfo_t3368_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigInfoCollection_t3369_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_AddChild_m12026 (SectionGroupInfo_t3308 * __this, ConfigInfo_t3304 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionInfo_t3368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5842);
		ConfigInfoCollection_t3369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5862);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfo_t3304 * L_0 = ___data;
		NullCheck(L_0);
		L_0->___Parent_4 = __this;
		ConfigInfo_t3304 * L_1 = ___data;
		if (!((SectionInfo_t3368 *)IsInst(L_1, SectionInfo_t3368_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_2 = (__this->___sections_6);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_3 = (ConfigInfoCollection_t3369 *)il2cpp_codegen_object_new (ConfigInfoCollection_t3369_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m12039(L_3, /*hidden argument*/NULL);
		__this->___sections_6 = L_3;
	}

IL_0028:
	{
		ConfigInfoCollection_t3369 * L_4 = (__this->___sections_6);
		ConfigInfo_t3304 * L_5 = ___data;
		NullCheck(L_5);
		String_t* L_6 = (L_5->___Name_0);
		ConfigInfo_t3304 * L_7 = ___data;
		NullCheck(L_4);
		ConfigInfoCollection_set_Item_m12042(L_4, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0067;
	}

IL_003f:
	{
		ConfigInfoCollection_t3369 * L_8 = (__this->___groups_7);
		if (L_8)
		{
			goto IL_0055;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_9 = (ConfigInfoCollection_t3369 *)il2cpp_codegen_object_new (ConfigInfoCollection_t3369_il2cpp_TypeInfo_var);
		ConfigInfoCollection__ctor_m12039(L_9, /*hidden argument*/NULL);
		__this->___groups_7 = L_9;
	}

IL_0055:
	{
		ConfigInfoCollection_t3369 * L_10 = (__this->___groups_7);
		ConfigInfo_t3304 * L_11 = ___data;
		NullCheck(L_11);
		String_t* L_12 = (L_11->___Name_0);
		ConfigInfo_t3304 * L_13 = ___data;
		NullCheck(L_10);
		ConfigInfoCollection_set_Item_m12042(L_10, L_12, L_13, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::Clear()
extern "C" void SectionGroupInfo_Clear_m12027 (SectionGroupInfo_t3308 * __this, const MethodInfo* method)
{
	{
		ConfigInfoCollection_t3369 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_1 = (__this->___sections_6);
		NullCheck(L_1);
		ConfigInfoCollection_Clear_m12044(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		ConfigInfoCollection_t3369 * L_2 = (__this->___groups_7);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_3 = (__this->___groups_7);
		NullCheck(L_3);
		ConfigInfoCollection_Clear_m12044(L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Boolean System.Configuration.SectionGroupInfo::HasChild(System.String)
extern "C" bool SectionGroupInfo_HasChild_m12028 (SectionGroupInfo_t3308 * __this, String_t* ___name, const MethodInfo* method)
{
	int32_t G_B6_0 = 0;
	{
		ConfigInfoCollection_t3369 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_1 = (__this->___sections_6);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		ConfigInfo_t3304 * L_3 = ConfigInfoCollection_get_Item_m12041(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return 1;
	}

IL_001e:
	{
		ConfigInfoCollection_t3369 * L_4 = (__this->___groups_7);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_5 = (__this->___groups_7);
		String_t* L_6 = ___name;
		NullCheck(L_5);
		ConfigInfo_t3304 * L_7 = ConfigInfoCollection_get_Item_m12041(L_5, L_6, /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)((((Object_t*)(ConfigInfo_t3304 *)L_7) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
	}

IL_003e:
	{
		return G_B6_0;
	}
}
// System.Void System.Configuration.SectionGroupInfo::RemoveChild(System.String)
extern "C" void SectionGroupInfo_RemoveChild_m12029 (SectionGroupInfo_t3308 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		ConfigInfoCollection_t3369 * L_0 = (__this->___sections_6);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_1 = (__this->___sections_6);
		String_t* L_2 = ___name;
		NullCheck(L_1);
		ConfigInfoCollection_Remove_m12045(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ConfigInfoCollection_t3369 * L_3 = (__this->___groups_7);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_4 = (__this->___groups_7);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		ConfigInfoCollection_Remove_m12045(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Sections()
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" ConfigInfoCollection_t3369 * SectionGroupInfo_get_Sections_m12030 (SectionGroupInfo_t3308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t3369 * L_0 = (__this->___sections_6);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SectionGroupInfo_t3308_il2cpp_TypeInfo_var);
		ConfigInfoCollection_t3369 * L_1 = ((SectionGroupInfo_t3308_StaticFields*)SectionGroupInfo_t3308_il2cpp_TypeInfo_var->static_fields)->___emptyList_8;
		return L_1;
	}

IL_0011:
	{
		ConfigInfoCollection_t3369 * L_2 = (__this->___sections_6);
		return L_2;
	}
}
// System.Configuration.ConfigInfoCollection System.Configuration.SectionGroupInfo::get_Groups()
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" ConfigInfoCollection_t3369 * SectionGroupInfo_get_Groups_m12031 (SectionGroupInfo_t3308 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	{
		ConfigInfoCollection_t3369 * L_0 = (__this->___groups_7);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SectionGroupInfo_t3308_il2cpp_TypeInfo_var);
		ConfigInfoCollection_t3369 * L_1 = ((SectionGroupInfo_t3308_StaticFields*)SectionGroupInfo_t3308_il2cpp_TypeInfo_var->static_fields)->___emptyList_8;
		return L_1;
	}

IL_0011:
	{
		ConfigInfoCollection_t3369 * L_2 = (__this->___groups_7);
		return L_2;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SectionInfo_t3368_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadConfig_m12032 (SectionGroupInfo_t3308 * __this, Configuration_t3300 * ___cfg, String_t* ___streamName, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SectionInfo_t3368_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5842);
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	ConfigInfo_t3304 * V_1 = {0};
	ConfigInfo_t3304 * V_2 = {0};
	{
		String_t* L_0 = ___streamName;
		ConfigInfo_set_StreamName_m11680(__this, L_0, /*hidden argument*/NULL);
		Configuration_t3300 * L_1 = ___cfg;
		NullCheck(L_1);
		Object_t * L_2 = Configuration_get_ConfigHost_m11689(L_1, /*hidden argument*/NULL);
		((ConfigInfo_t3304 *)__this)->___ConfigHost_5 = L_2;
		XmlReader_t3372 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2393, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_008c;
	}

IL_002d:
	{
		XmlReader_t3372 * L_6 = ___reader;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_7, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		XmlReader_t3372 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_9);
		((ConfigInfo_t3304 *)__this)->___Name_0 = L_10;
		goto IL_008c;
	}

IL_0053:
	{
		XmlReader_t3372 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m456(NULL /*static, unused*/, L_12, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		XmlReader_t3372 * L_14 = ___reader;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_14);
		((ConfigInfo_t3304 *)__this)->___TypeName_1 = L_15;
		((ConfigInfo_t3304 *)__this)->___Type_2 = (Type_t *)NULL;
		goto IL_008c;
	}

IL_0080:
	{
		XmlReader_t3372 * L_16 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2478, L_16, /*hidden argument*/NULL);
	}

IL_008c:
	{
		XmlReader_t3372 * L_17 = ___reader;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_17);
		if (L_18)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_19 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		XmlReader_t3372 * L_20 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2479, L_20, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		String_t* L_21 = (((ConfigInfo_t3304 *)__this)->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m456(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral588, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cf;
		}
	}
	{
		XmlReader_t3372 * L_23 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2469, L_23, /*hidden argument*/NULL);
	}

IL_00cf:
	{
		String_t* L_24 = (((ConfigInfo_t3304 *)__this)->___TypeName_1);
		if (L_24)
		{
			goto IL_00e5;
		}
	}
	{
		((ConfigInfo_t3304 *)__this)->___TypeName_1 = (String_t*) &_stringLiteral2480;
	}

IL_00e5:
	{
		XmlReader_t3372 * L_25 = ___reader;
		NullCheck(L_25);
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_25);
		if (!L_26)
		{
			goto IL_00f7;
		}
	}
	{
		XmlReader_t3372 * L_27 = ___reader;
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_27);
		return;
	}

IL_00f7:
	{
		XmlReader_t3372 * L_28 = ___reader;
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_28);
		XmlReader_t3372 * L_29 = ___reader;
		NullCheck(L_29);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_29);
		goto IL_024a;
	}

IL_0109:
	{
		XmlReader_t3372 * L_30 = ___reader;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_30);
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_0120;
		}
	}
	{
		XmlReader_t3372 * L_32 = ___reader;
		NullCheck(L_32);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_32);
		goto IL_024a;
	}

IL_0120:
	{
		XmlReader_t3372 * L_33 = ___reader;
		NullCheck(L_33);
		String_t* L_34 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_33);
		V_0 = L_34;
		V_1 = (ConfigInfo_t3304 *)NULL;
		String_t* L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_36 = String_op_Equality_m456(NULL /*static, unused*/, L_35, (String_t*) &_stringLiteral2397, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0145;
		}
	}
	{
		XmlReader_t3372 * L_37 = ___reader;
		SectionGroupInfo_ReadRemoveSection_m12033(__this, L_37, /*hidden argument*/NULL);
		goto IL_024a;
	}

IL_0145:
	{
		String_t* L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_39 = String_op_Equality_m456(NULL /*static, unused*/, L_38, (String_t*) &_stringLiteral2396, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_017d;
		}
	}
	{
		XmlReader_t3372 * L_40 = ___reader;
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Xml.XmlReader::get_HasAttributes() */, L_40);
		if (!L_41)
		{
			goto IL_016c;
		}
	}
	{
		XmlReader_t3372 * L_42 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2481, L_42, /*hidden argument*/NULL);
	}

IL_016c:
	{
		SectionGroupInfo_Clear_m12027(__this, /*hidden argument*/NULL);
		XmlReader_t3372 * L_43 = ___reader;
		NullCheck(L_43);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_43);
		goto IL_024a;
	}

IL_017d:
	{
		String_t* L_44 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_45 = String_op_Equality_m456(NULL /*static, unused*/, L_44, (String_t*) &_stringLiteral2482, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0198;
		}
	}
	{
		SectionInfo_t3368 * L_46 = (SectionInfo_t3368 *)il2cpp_codegen_object_new (SectionInfo_t3368_il2cpp_TypeInfo_var);
		SectionInfo__ctor_m12019(L_46, /*hidden argument*/NULL);
		V_1 = L_46;
		goto IL_01ca;
	}

IL_0198:
	{
		String_t* L_47 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m456(NULL /*static, unused*/, L_47, (String_t*) &_stringLiteral2483, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01b3;
		}
	}
	{
		SectionGroupInfo_t3308 * L_49 = (SectionGroupInfo_t3308 *)il2cpp_codegen_object_new (SectionGroupInfo_t3308_il2cpp_TypeInfo_var);
		SectionGroupInfo__ctor_m12024(L_49, /*hidden argument*/NULL);
		V_1 = L_49;
		goto IL_01ca;
	}

IL_01b3:
	{
		XmlReader_t3372 * L_50 = ___reader;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_50);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral2484, L_51, /*hidden argument*/NULL);
		XmlReader_t3372 * L_53 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_52, L_53, /*hidden argument*/NULL);
	}

IL_01ca:
	{
		ConfigInfo_t3304 * L_54 = V_1;
		Configuration_t3300 * L_55 = ___cfg;
		String_t* L_56 = ___streamName;
		XmlReader_t3372 * L_57 = ___reader;
		NullCheck(L_54);
		VirtActionInvoker3< Configuration_t3300 *, String_t*, XmlReader_t3372 * >::Invoke(5 /* System.Void System.Configuration.ConfigInfo::ReadConfig(System.Configuration.Configuration,System.String,System.Xml.XmlReader) */, L_54, L_55, L_56, L_57);
		ConfigInfoCollection_t3369 * L_58 = SectionGroupInfo_get_Groups_m12031(__this, /*hidden argument*/NULL);
		ConfigInfo_t3304 * L_59 = V_1;
		NullCheck(L_59);
		String_t* L_60 = (L_59->___Name_0);
		NullCheck(L_58);
		ConfigInfo_t3304 * L_61 = ConfigInfoCollection_get_Item_m12041(L_58, L_60, /*hidden argument*/NULL);
		V_2 = L_61;
		ConfigInfo_t3304 * L_62 = V_2;
		if (L_62)
		{
			goto IL_01fd;
		}
	}
	{
		ConfigInfoCollection_t3369 * L_63 = SectionGroupInfo_get_Sections_m12030(__this, /*hidden argument*/NULL);
		ConfigInfo_t3304 * L_64 = V_1;
		NullCheck(L_64);
		String_t* L_65 = (L_64->___Name_0);
		NullCheck(L_63);
		ConfigInfo_t3304 * L_66 = ConfigInfoCollection_get_Item_m12041(L_63, L_65, /*hidden argument*/NULL);
		V_2 = L_66;
	}

IL_01fd:
	{
		ConfigInfo_t3304 * L_67 = V_2;
		if (!L_67)
		{
			goto IL_0243;
		}
	}
	{
		ConfigInfo_t3304 * L_68 = V_2;
		NullCheck(L_68);
		Type_t * L_69 = Object_GetType_m4220(L_68, /*hidden argument*/NULL);
		ConfigInfo_t3304 * L_70 = V_1;
		NullCheck(L_70);
		Type_t * L_71 = Object_GetType_m4220(L_70, /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_69) == ((Object_t*)(Type_t *)L_71)))
		{
			goto IL_0230;
		}
	}
	{
		ConfigInfo_t3304 * L_72 = V_1;
		NullCheck(L_72);
		String_t* L_73 = (L_72->___Name_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2485, L_73, (String_t*) &_stringLiteral2486, /*hidden argument*/NULL);
		XmlReader_t3372 * L_75 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_74, L_75, /*hidden argument*/NULL);
	}

IL_0230:
	{
		ConfigInfo_t3304 * L_76 = V_2;
		ConfigInfo_t3304 * L_77 = V_1;
		NullCheck(L_76);
		VirtActionInvoker1< ConfigInfo_t3304 * >::Invoke(7 /* System.Void System.Configuration.ConfigInfo::Merge(System.Configuration.ConfigInfo) */, L_76, L_77);
		ConfigInfo_t3304 * L_78 = V_2;
		String_t* L_79 = ___streamName;
		NullCheck(L_78);
		ConfigInfo_set_StreamName_m11680(L_78, L_79, /*hidden argument*/NULL);
		goto IL_024a;
	}

IL_0243:
	{
		ConfigInfo_t3304 * L_80 = V_1;
		SectionGroupInfo_AddChild_m12026(__this, L_80, /*hidden argument*/NULL);
	}

IL_024a:
	{
		XmlReader_t3372 * L_81 = ___reader;
		NullCheck(L_81);
		int32_t L_82 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_81);
		if ((!(((uint32_t)L_82) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0109;
		}
	}
	{
		XmlReader_t3372 * L_83 = ___reader;
		NullCheck(L_83);
		VirtActionInvoker0::Invoke(42 /* System.Void System.Xml.XmlReader::ReadEndElement() */, L_83);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadRemoveSection(System.Xml.XmlReader)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadRemoveSection_m12033 (SectionGroupInfo_t3308 * __this, XmlReader_t3372 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		XmlReader_t3372 * L_2 = ___reader;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_Name() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m415(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}

IL_0020:
	{
		XmlReader_t3372 * L_5 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2481, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		XmlReader_t3372 * L_6 = ___reader;
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Xml.XmlReader::get_Value() */, L_6);
		V_0 = L_7;
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_IsNullOrEmpty_m387(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t3372 * L_10 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2487, L_10, /*hidden argument*/NULL);
	}

IL_004a:
	{
		XmlReader_t3372 * L_11 = ___reader;
		NullCheck(L_11);
		VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_11);
		String_t* L_12 = V_0;
		bool L_13 = SectionGroupInfo_HasChild_m12028(__this, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_006f;
		}
	}
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral2488, L_14, /*hidden argument*/NULL);
		XmlReader_t3372 * L_16 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_15, L_16, /*hidden argument*/NULL);
	}

IL_006f:
	{
		String_t* L_17 = V_0;
		SectionGroupInfo_RemoveChild_m12029(__this, L_17, /*hidden argument*/NULL);
		XmlReader_t3372 * L_18 = ___reader;
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_18);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadRootData(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean)
extern "C" void SectionGroupInfo_ReadRootData_m12034 (SectionGroupInfo_t3308 * __this, XmlReader_t3372 * ___reader, Configuration_t3300 * ___config, bool ___overrideAllowed, const MethodInfo* method)
{
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t3372 * L_1 = ___reader;
		Configuration_t3300 * L_2 = ___config;
		bool L_3 = ___overrideAllowed;
		SectionGroupInfo_ReadContent_m12036(__this, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean)
extern "C" void SectionGroupInfo_ReadData_m12035 (SectionGroupInfo_t3308 * __this, Configuration_t3300 * ___config, XmlReader_t3372 * ___reader, bool ___overrideAllowed, const MethodInfo* method)
{
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t3372 * L_1 = ___reader;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_1);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		XmlReader_t3372 * L_3 = ___reader;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(45 /* System.Void System.Xml.XmlReader::ReadStartElement() */, L_3);
		XmlReader_t3372 * L_4 = ___reader;
		Configuration_t3300 * L_5 = ___config;
		bool L_6 = ___overrideAllowed;
		SectionGroupInfo_ReadContent_m12036(__this, L_4, L_5, L_6, 0, /*hidden argument*/NULL);
		XmlReader_t3372 * L_7 = ___reader;
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(36 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_7);
		XmlReader_t3372 * L_8 = ___reader;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(42 /* System.Void System.Xml.XmlReader::ReadEndElement() */, L_8);
		goto IL_003b;
	}

IL_0034:
	{
		XmlReader_t3372 * L_9 = ___reader;
		NullCheck(L_9);
		VirtFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Xml.XmlReader::Read() */, L_9);
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Configuration.SectionGroupInfo::ReadContent(System.Xml.XmlReader,System.Configuration.Configuration,System.Boolean,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t715_il2cpp_TypeInfo_var;
extern TypeInfo* ConfigurationLocation_t3325_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_ReadContent_m12036 (SectionGroupInfo_t3308 * __this, XmlReader_t3372 * ___reader, Configuration_t3300 * ___config, bool ___overrideAllowed, bool ___root, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		CharU5BU5D_t715_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		ConfigurationLocation_t3325_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5825);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	StringU5BU5D_t75* V_4 = {0};
	String_t* V_5 = {0};
	String_t* V_6 = {0};
	StringU5BU5D_t75* V_7 = {0};
	int32_t V_8 = 0;
	ConfigurationLocation_t3325 * V_9 = {0};
	ConfigInfo_t3304 * V_10 = {0};
	int32_t G_B12_0 = 0;
	{
		goto IL_0176;
	}

IL_0005:
	{
		XmlReader_t3372 * L_0 = ___reader;
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		XmlReader_t3372 * L_2 = ___reader;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_2);
		goto IL_0176;
	}

IL_001c:
	{
		XmlReader_t3372 * L_3 = ___reader;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral2489, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		XmlReader_t3372 * L_6 = ___reader;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(47 /* System.Void System.Xml.XmlReader::Skip() */, L_6);
		goto IL_0176;
	}

IL_003c:
	{
		XmlReader_t3372 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m456(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral588, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_013a;
		}
	}
	{
		bool L_10 = ___root;
		if (L_10)
		{
			goto IL_0064;
		}
	}
	{
		XmlReader_t3372 * L_11 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2490, L_11, /*hidden argument*/NULL);
	}

IL_0064:
	{
		XmlReader_t3372 * L_12 = ___reader;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_12, (String_t*) &_stringLiteral2491);
		V_0 = L_13;
		String_t* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m410(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_t59_il2cpp_TypeInfo_var);
		bool L_18 = Boolean_Parse_m4294(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		G_B12_0 = ((int32_t)(L_18));
		goto IL_008a;
	}

IL_0089:
	{
		G_B12_0 = 1;
	}

IL_008a:
	{
		V_1 = G_B12_0;
		XmlReader_t3372 * L_19 = ___reader;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_19, (String_t*) &_stringLiteral1430);
		V_2 = L_20;
		String_t* L_21 = V_2;
		if (!L_21)
		{
			goto IL_012c;
		}
	}
	{
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m410(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		XmlReader_t3372 * L_24 = ___reader;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(44 /* System.String System.Xml.XmlReader::ReadOuterXml() */, L_24);
		V_3 = L_25;
		String_t* L_26 = V_2;
		CharU5BU5D_t715* L_27 = ((CharU5BU5D_t715*)SZArrayNew(CharU5BU5D_t715_il2cpp_TypeInfo_var, 1));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_27, 0)) = (uint16_t)((int32_t)44);
		NullCheck(L_26);
		StringU5BU5D_t75* L_28 = String_Split_m3872(L_26, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		StringU5BU5D_t75* L_29 = V_4;
		V_7 = L_29;
		V_8 = 0;
		goto IL_011c;
	}

IL_00cf:
	{
		StringU5BU5D_t75* L_30 = V_7;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_6 = (*(String_t**)(String_t**)SZArrayLdElema(L_30, L_32));
		String_t* L_33 = V_6;
		NullCheck(L_33);
		String_t* L_34 = String_Trim_m413(L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		Configuration_t3300 * L_35 = ___config;
		NullCheck(L_35);
		ConfigurationLocationCollection_t3307 * L_36 = Configuration_get_Locations_m11694(L_35, /*hidden argument*/NULL);
		String_t* L_37 = V_5;
		NullCheck(L_36);
		ConfigurationLocation_t3325 * L_38 = ConfigurationLocationCollection_Find_m11828(L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00fd;
		}
	}
	{
		XmlReader_t3372 * L_39 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, (String_t*) &_stringLiteral2492, L_39, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		String_t* L_40 = V_5;
		String_t* L_41 = V_3;
		Configuration_t3300 * L_42 = ___config;
		bool L_43 = V_1;
		ConfigurationLocation_t3325 * L_44 = (ConfigurationLocation_t3325 *)il2cpp_codegen_object_new (ConfigurationLocation_t3325_il2cpp_TypeInfo_var);
		ConfigurationLocation__ctor_m11821(L_44, L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		V_9 = L_44;
		Configuration_t3300 * L_45 = ___config;
		NullCheck(L_45);
		ConfigurationLocationCollection_t3307 * L_46 = Configuration_get_Locations_m11694(L_45, /*hidden argument*/NULL);
		ConfigurationLocation_t3325 * L_47 = V_9;
		NullCheck(L_46);
		ConfigurationLocationCollection_Add_m11827(L_46, L_47, /*hidden argument*/NULL);
		int32_t L_48 = V_8;
		V_8 = ((int32_t)((int32_t)L_48+(int32_t)1));
	}

IL_011c:
	{
		int32_t L_49 = V_8;
		StringU5BU5D_t75* L_50 = V_7;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)(((int32_t)(((Array_t *)L_50)->max_length))))))
		{
			goto IL_00cf;
		}
	}
	{
		goto IL_0135;
	}

IL_012c:
	{
		Configuration_t3300 * L_51 = ___config;
		XmlReader_t3372 * L_52 = ___reader;
		bool L_53 = V_1;
		VirtActionInvoker3< Configuration_t3300 *, XmlReader_t3372 *, bool >::Invoke(6 /* System.Void System.Configuration.SectionGroupInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, __this, L_51, L_52, L_53);
	}

IL_0135:
	{
		goto IL_0176;
	}

IL_013a:
	{
		XmlReader_t3372 * L_54 = ___reader;
		ConfigInfo_t3304 * L_55 = SectionGroupInfo_GetConfigInfo_m12037(__this, L_54, __this, /*hidden argument*/NULL);
		V_10 = L_55;
		ConfigInfo_t3304 * L_56 = V_10;
		if (!L_56)
		{
			goto IL_015a;
		}
	}
	{
		ConfigInfo_t3304 * L_57 = V_10;
		Configuration_t3300 * L_58 = ___config;
		XmlReader_t3372 * L_59 = ___reader;
		bool L_60 = ___overrideAllowed;
		NullCheck(L_57);
		VirtActionInvoker3< Configuration_t3300 *, XmlReader_t3372 *, bool >::Invoke(6 /* System.Void System.Configuration.ConfigInfo::ReadData(System.Configuration.Configuration,System.Xml.XmlReader,System.Boolean) */, L_57, L_58, L_59, L_60);
		goto IL_0176;
	}

IL_015a:
	{
		XmlReader_t3372 * L_61 = ___reader;
		NullCheck(L_61);
		String_t* L_62 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_61);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_63 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2493, L_62, (String_t*) &_stringLiteral1203, /*hidden argument*/NULL);
		XmlReader_t3372 * L_64 = ___reader;
		ConfigInfo_ThrowException_m11681(__this, L_63, L_64, /*hidden argument*/NULL);
	}

IL_0176:
	{
		XmlReader_t3372 * L_65 = ___reader;
		NullCheck(L_65);
		int32_t L_66 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_65);
		if ((((int32_t)L_66) == ((int32_t)((int32_t)15))))
		{
			goto IL_018e;
		}
	}
	{
		XmlReader_t3372 * L_67 = ___reader;
		NullCheck(L_67);
		int32_t L_68 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_67);
		if (L_68)
		{
			goto IL_0005;
		}
	}

IL_018e:
	{
		return;
	}
}
// System.Configuration.ConfigInfo System.Configuration.SectionGroupInfo::GetConfigInfo(System.Xml.XmlReader,System.Configuration.SectionGroupInfo)
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConfigInfo_t3304 * SectionGroupInfo_GetConfigInfo_m12037 (SectionGroupInfo_t3308 * __this, XmlReader_t3372 * ___reader, SectionGroupInfo_t3308 * ___current, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConfigInfo_t3304 * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	ConfigInfo_t3304 * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ConfigInfo_t3304 *)NULL;
		SectionGroupInfo_t3308 * L_0 = ___current;
		NullCheck(L_0);
		ConfigInfoCollection_t3369 * L_1 = (L_0->___sections_6);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		SectionGroupInfo_t3308 * L_2 = ___current;
		NullCheck(L_2);
		ConfigInfoCollection_t3369 * L_3 = (L_2->___sections_6);
		XmlReader_t3372 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
		NullCheck(L_3);
		ConfigInfo_t3304 * L_6 = ConfigInfoCollection_get_Item_m12041(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_001f:
	{
		ConfigInfo_t3304 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0027;
		}
	}
	{
		ConfigInfo_t3304 * L_8 = V_0;
		return L_8;
	}

IL_0027:
	{
		SectionGroupInfo_t3308 * L_9 = ___current;
		NullCheck(L_9);
		ConfigInfoCollection_t3369 * L_10 = (L_9->___groups_7);
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		SectionGroupInfo_t3308 * L_11 = ___current;
		NullCheck(L_11);
		ConfigInfoCollection_t3369 * L_12 = (L_11->___groups_7);
		XmlReader_t3372 * L_13 = ___reader;
		NullCheck(L_13);
		String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_LocalName() */, L_13);
		NullCheck(L_12);
		ConfigInfo_t3304 * L_15 = ConfigInfoCollection_get_Item_m12041(L_12, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_0044:
	{
		ConfigInfo_t3304 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_004c;
		}
	}
	{
		ConfigInfo_t3304 * L_17 = V_0;
		return L_17;
	}

IL_004c:
	{
		SectionGroupInfo_t3308 * L_18 = ___current;
		NullCheck(L_18);
		ConfigInfoCollection_t3369 * L_19 = (L_18->___groups_7);
		if (L_19)
		{
			goto IL_0059;
		}
	}
	{
		return (ConfigInfo_t3304 *)NULL;
	}

IL_0059:
	{
		SectionGroupInfo_t3308 * L_20 = ___current;
		NullCheck(L_20);
		ConfigInfoCollection_t3369 * L_21 = (L_20->___groups_7);
		NullCheck(L_21);
		Object_t * L_22 = ConfigInfoCollection_get_AllKeys_m12040(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_22);
		V_2 = L_23;
	}

IL_006a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a1;
		}

IL_006f:
		{
			Object_t * L_24 = V_2;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_24);
			V_1 = ((String_t*)Castclass(L_25, String_t_il2cpp_TypeInfo_var));
			XmlReader_t3372 * L_26 = ___reader;
			SectionGroupInfo_t3308 * L_27 = ___current;
			NullCheck(L_27);
			ConfigInfoCollection_t3369 * L_28 = (L_27->___groups_7);
			String_t* L_29 = V_1;
			NullCheck(L_28);
			ConfigInfo_t3304 * L_30 = ConfigInfoCollection_get_Item_m12041(L_28, L_29, /*hidden argument*/NULL);
			ConfigInfo_t3304 * L_31 = SectionGroupInfo_GetConfigInfo_m12037(__this, L_26, ((SectionGroupInfo_t3308 *)Castclass(L_30, SectionGroupInfo_t3308_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_0 = L_31;
			ConfigInfo_t3304 * L_32 = V_0;
			if (!L_32)
			{
				goto IL_00a1;
			}
		}

IL_009a:
		{
			ConfigInfo_t3304 * L_33 = V_0;
			V_3 = L_33;
			IL2CPP_LEAVE(0xC8, FINALLY_00b1);
		}

IL_00a1:
		{
			Object_t * L_34 = V_2;
			NullCheck(L_34);
			bool L_35 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_006f;
			}
		}

IL_00ac:
		{
			IL2CPP_LEAVE(0xC6, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		{
			Object_t * L_36 = V_2;
			V_4 = ((Object_t *)IsInst(L_36, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_37 = V_4;
			if (L_37)
			{
				goto IL_00be;
			}
		}

IL_00bd:
		{
			IL2CPP_END_FINALLY(177)
		}

IL_00be:
		{
			Object_t * L_38 = V_4;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_38);
			IL2CPP_END_FINALLY(177)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_JUMP_TBL(0xC8, IL_00c8)
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00c6:
	{
		return (ConfigInfo_t3304 *)NULL;
	}

IL_00c8:
	{
		ConfigInfo_t3304 * L_39 = V_3;
		return L_39;
	}
}
// System.Void System.Configuration.SectionGroupInfo::Merge(System.Configuration.ConfigInfo)
extern TypeInfo* SectionGroupInfo_t3308_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void SectionGroupInfo_Merge_m12038 (SectionGroupInfo_t3308 * __this, ConfigInfo_t3304 * ___newData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SectionGroupInfo_t3308_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5799);
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	SectionGroupInfo_t3308 * V_0 = {0};
	ConfigInfo_t3304 * V_1 = {0};
	String_t* V_2 = {0};
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Object_t * V_7 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ConfigInfo_t3304 * L_0 = ___newData;
		V_0 = ((SectionGroupInfo_t3308 *)IsInst(L_0, SectionGroupInfo_t3308_il2cpp_TypeInfo_var));
		SectionGroupInfo_t3308 * L_1 = V_0;
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
		SectionGroupInfo_t3308 * L_2 = V_0;
		NullCheck(L_2);
		ConfigInfoCollection_t3369 * L_3 = (L_2->___sections_6);
		if (!L_3)
		{
			goto IL_00a1;
		}
	}
	{
		SectionGroupInfo_t3308 * L_4 = V_0;
		NullCheck(L_4);
		ConfigInfoCollection_t3369 * L_5 = (L_4->___sections_6);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		SectionGroupInfo_t3308 * L_7 = V_0;
		NullCheck(L_7);
		ConfigInfoCollection_t3369 * L_8 = (L_7->___sections_6);
		NullCheck(L_8);
		Object_t * L_9 = ConfigInfoCollection_get_AllKeys_m12040(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_9);
		V_3 = L_10;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0040:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_11);
			V_2 = ((String_t*)Castclass(L_12, String_t_il2cpp_TypeInfo_var));
			ConfigInfoCollection_t3369 * L_13 = (__this->___sections_6);
			String_t* L_14 = V_2;
			NullCheck(L_13);
			ConfigInfo_t3304 * L_15 = ConfigInfoCollection_get_Item_m12041(L_13, L_14, /*hidden argument*/NULL);
			V_1 = L_15;
			ConfigInfo_t3304 * L_16 = V_1;
			if (!L_16)
			{
				goto IL_0064;
			}
		}

IL_005f:
		{
			goto IL_007c;
		}

IL_0064:
		{
			ConfigInfoCollection_t3369 * L_17 = (__this->___sections_6);
			String_t* L_18 = V_2;
			SectionGroupInfo_t3308 * L_19 = V_0;
			NullCheck(L_19);
			ConfigInfoCollection_t3369 * L_20 = (L_19->___sections_6);
			String_t* L_21 = V_2;
			NullCheck(L_20);
			ConfigInfo_t3304 * L_22 = ConfigInfoCollection_get_Item_m12041(L_20, L_21, /*hidden argument*/NULL);
			NullCheck(L_17);
			ConfigInfoCollection_Add_m12043(L_17, L_18, L_22, /*hidden argument*/NULL);
		}

IL_007c:
		{
			Object_t * L_23 = V_3;
			NullCheck(L_23);
			bool L_24 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_0040;
			}
		}

IL_0087:
		{
			IL2CPP_LEAVE(0xA1, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_25 = V_3;
			V_6 = ((Object_t *)IsInst(L_25, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_6;
			if (L_26)
			{
				goto IL_0099;
			}
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}

IL_0099:
		{
			Object_t * L_27 = V_6;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_27);
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a1:
	{
		SectionGroupInfo_t3308 * L_28 = V_0;
		NullCheck(L_28);
		ConfigInfoCollection_t3369 * L_29 = (L_28->___groups_7);
		if (!L_29)
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t3308 * L_30 = V_0;
		NullCheck(L_30);
		ConfigInfoCollection_t3369 * L_31 = (L_30->___sections_6);
		if (!L_31)
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t3308 * L_32 = V_0;
		NullCheck(L_32);
		ConfigInfoCollection_t3369 * L_33 = (L_32->___sections_6);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count() */, L_33);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0147;
		}
	}
	{
		SectionGroupInfo_t3308 * L_35 = V_0;
		NullCheck(L_35);
		ConfigInfoCollection_t3369 * L_36 = (L_35->___groups_7);
		NullCheck(L_36);
		Object_t * L_37 = ConfigInfoCollection_get_AllKeys_m12040(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Object_t * L_38 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_37);
		V_5 = L_38;
	}

IL_00da:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0120;
		}

IL_00df:
		{
			Object_t * L_39 = V_5;
			NullCheck(L_39);
			Object_t * L_40 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_39);
			V_4 = ((String_t*)Castclass(L_40, String_t_il2cpp_TypeInfo_var));
			ConfigInfoCollection_t3369 * L_41 = (__this->___groups_7);
			String_t* L_42 = V_4;
			NullCheck(L_41);
			ConfigInfo_t3304 * L_43 = ConfigInfoCollection_get_Item_m12041(L_41, L_42, /*hidden argument*/NULL);
			V_1 = L_43;
			ConfigInfo_t3304 * L_44 = V_1;
			if (!L_44)
			{
				goto IL_0106;
			}
		}

IL_0101:
		{
			goto IL_0120;
		}

IL_0106:
		{
			ConfigInfoCollection_t3369 * L_45 = (__this->___groups_7);
			String_t* L_46 = V_4;
			SectionGroupInfo_t3308 * L_47 = V_0;
			NullCheck(L_47);
			ConfigInfoCollection_t3369 * L_48 = (L_47->___groups_7);
			String_t* L_49 = V_4;
			NullCheck(L_48);
			ConfigInfo_t3304 * L_50 = ConfigInfoCollection_get_Item_m12041(L_48, L_49, /*hidden argument*/NULL);
			NullCheck(L_45);
			ConfigInfoCollection_Add_m12043(L_45, L_46, L_50, /*hidden argument*/NULL);
		}

IL_0120:
		{
			Object_t * L_51 = V_5;
			NullCheck(L_51);
			bool L_52 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_00df;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x147, FINALLY_0131);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0131;
	}

FINALLY_0131:
	{ // begin finally (depth: 1)
		{
			Object_t * L_53 = V_5;
			V_7 = ((Object_t *)IsInst(L_53, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_54 = V_7;
			if (L_54)
			{
				goto IL_013f;
			}
		}

IL_013e:
		{
			IL2CPP_END_FINALLY(305)
		}

IL_013f:
		{
			Object_t * L_55 = V_7;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_55);
			IL2CPP_END_FINALLY(305)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(305)
	{
		IL2CPP_JUMP_TBL(0x147, IL_0147)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0147:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.ConfigInfoCollection::.ctor()
extern TypeInfo* StringComparer_t2948_il2cpp_TypeInfo_var;
extern "C" void ConfigInfoCollection__ctor_m12039 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringComparer_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4507);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t2948_il2cpp_TypeInfo_var);
		StringComparer_t2948 * L_0 = StringComparer_get_Ordinal_m12117(NULL /*static, unused*/, /*hidden argument*/NULL);
		NameObjectCollectionBase__ctor_m12118(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.ICollection System.Configuration.ConfigInfoCollection::get_AllKeys()
extern "C" Object_t * ConfigInfoCollection_get_AllKeys_m12040 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method)
{
	{
		KeysCollection_t3375 * L_0 = (KeysCollection_t3375 *)VirtFuncInvoker0< KeysCollection_t3375 * >::Invoke(11 /* System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys() */, __this);
		return L_0;
	}
}
// System.Configuration.ConfigInfo System.Configuration.ConfigInfoCollection::get_Item(System.String)
extern TypeInfo* ConfigInfo_t3304_il2cpp_TypeInfo_var;
extern "C" ConfigInfo_t3304 * ConfigInfoCollection_get_Item_m12041 (ConfigInfoCollection_t3369 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfigInfo_t3304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5863);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		Object_t * L_1 = NameObjectCollectionBase_BaseGet_m12119(__this, L_0, /*hidden argument*/NULL);
		return ((ConfigInfo_t3304 *)Castclass(L_1, ConfigInfo_t3304_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Configuration.ConfigInfoCollection::set_Item(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_set_Item_m12042 (ConfigInfoCollection_t3369 * __this, String_t* ___name, ConfigInfo_t3304 * ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigInfo_t3304 * L_1 = ___value;
		NameObjectCollectionBase_BaseSet_m12120(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Add(System.String,System.Configuration.ConfigInfo)
extern "C" void ConfigInfoCollection_Add_m12043 (ConfigInfoCollection_t3369 * __this, String_t* ___name, ConfigInfo_t3304 * ___config, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		ConfigInfo_t3304 * L_1 = ___config;
		NameObjectCollectionBase_BaseAdd_m12127(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Clear()
extern "C" void ConfigInfoCollection_Clear_m12044 (ConfigInfoCollection_t3369 * __this, const MethodInfo* method)
{
	{
		NameObjectCollectionBase_BaseClear_m12130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.ConfigInfoCollection::Remove(System.String)
extern "C" void ConfigInfoCollection_Remove_m12045 (ConfigInfoCollection_t3369 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		NameObjectCollectionBase_BaseRemove_m12131(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Configuration.SectionInformation::.ctor()
extern "C" void SectionInformation__ctor_m12046 (SectionInformation_t3338 * __this, const MethodInfo* method)
{
	{
		__this->___allow_definition_1 = ((int32_t)300);
		__this->___allow_exe_definition_2 = ((int32_t)100);
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		__this->___allow_definition_1 = ((int32_t)300);
		__this->___allow_location_3 = 1;
		__this->___allow_override_4 = 1;
		__this->___inherit_on_child_apps_5 = 1;
		__this->___restart_on_external_changes_6 = 1;
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C" String_t* SectionInformation_get_ConfigFilePath_m12047 (SectionInformation_t3338 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CConfigFilePathU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C" void SectionInformation_set_ConfigFilePath_m12048 (SectionInformation_t3338 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CConfigFilePathU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C" void SectionInformation_set_AllowDefinition_m12049 (SectionInformation_t3338 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___allow_definition_1 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C" void SectionInformation_set_AllowExeDefinition_m12050 (SectionInformation_t3338 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___allow_exe_definition_2 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C" void SectionInformation_set_AllowLocation_m12051 (SectionInformation_t3338 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___allow_location_3 = L_0;
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C" String_t* SectionInformation_get_ConfigSource_m12052 (SectionInformation_t3338 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___config_source_8);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C" void SectionInformation_set_ConfigSource_m12053 (SectionInformation_t3338 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___config_source_8 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C" void SectionInformation_set_RequirePermission_m12054 (SectionInformation_t3338 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___require_permission_7 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C" void SectionInformation_set_RestartOnExternalChanges_m12055 (SectionInformation_t3338 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___restart_on_external_changes_6 = L_0;
		return;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C" ConfigurationSection_t3340 * SectionInformation_GetParentSection_m12056 (SectionInformation_t3338 * __this, const MethodInfo* method)
{
	{
		ConfigurationSection_t3340 * L_0 = (__this->___parent_0);
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C" void SectionInformation_SetParentSection_m12057 (SectionInformation_t3338 * __this, ConfigurationSection_t3340 * ___parent, const MethodInfo* method)
{
	{
		ConfigurationSection_t3340 * L_0 = ___parent;
		__this->___parent_0 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C" void SectionInformation_ProtectSection_m12058 (SectionInformation_t3338 * __this, String_t* ___provider, const MethodInfo* method)
{
	{
		String_t* L_0 = ___provider;
		ProtectedConfigurationProvider_t3363 * L_1 = ProtectedConfiguration_GetProvider_m11996(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		__this->___protection_provider_11 = L_1;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C" void SectionInformation_SetRawXml_m12059 (SectionInformation_t3338 * __this, String_t* ___xml, const MethodInfo* method)
{
	{
		String_t* L_0 = ___xml;
		__this->___raw_xml_10 = L_0;
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C" void SectionInformation_SetName_m12060 (SectionInformation_t3338 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___name_9 = L_0;
		return;
	}
}
// System.MonoTODOAttribute
#include "System_Configuration_System_MonoTODOAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoTODOAttribute
#include "System_Configuration_System_MonoTODOAttributeMethodDeclarations.h"



// System.Void System.MonoTODOAttribute::.ctor()
extern "C" void MonoTODOAttribute__ctor_m12061 (MonoTODOAttribute_t3370 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C" void MonoTODOAttribute__ctor_m12062 (MonoTODOAttribute_t3370 * __this, String_t* ___comment, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment;
		__this->___comment_0 = L_0;
		return;
	}
}
// System.MonoInternalNoteAttribute
#include "System_Configuration_System_MonoInternalNoteAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.MonoInternalNoteAttribute
#include "System_Configuration_System_MonoInternalNoteAttributeMethodDeclarations.h"



// System.Void System.MonoInternalNoteAttribute::.ctor(System.String)
extern "C" void MonoInternalNoteAttribute__ctor_m12063 (MonoInternalNoteAttribute_t3371 * __this, String_t* ___comment, const MethodInfo* method)
{
	{
		String_t* L_0 = ___comment;
		MonoTODOAttribute__ctor_m12062(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
