#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
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
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfoMethodDeclarations.h"

// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Type
#include "mscorlib_System_Type.h"
#include "mscorlib_ArrayTypes.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.EventInfo::.ctor()
extern "C" void EventInfo__ctor_m21871 (EventInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m19263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern "C" Type_t * EventInfo_get_EventHandlerType_m21872 (EventInfo_t * __this, const MethodInfo* method)
{
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Type_t * V_2 = {0};
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(16 /* System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean) */, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1476* L_2 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1476* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_4, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		Type_t * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern "C" int32_t EventInfo_get_MemberType_m21873 (EventInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributesMethodDeclarations.h"



// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"

// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandleMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttributeMethodDeclarations.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"


// System.Void System.Reflection.FieldInfo::.ctor()
extern "C" void FieldInfo__ctor_m21874 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m19263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern "C" int32_t FieldInfo_get_MemberType_m21875 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C" bool FieldInfo_get_IsLiteral_m21876 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" bool FieldInfo_get_IsStatic_m21877 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
extern "C" bool FieldInfo_get_IsInitOnly_m21878 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
extern "C" bool FieldInfo_get_IsPublic_m21879 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m21880 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" void FieldInfo_SetValue_m21881 (FieldInfo_t * __this, Object_t * ___obj, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		VirtActionInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, CultureInfo_t783 * >::Invoke(23 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo) */, __this, L_0, L_1, 0, (Binder_t2971 *)NULL, (CultureInfo_t783 *)NULL);
		return;
	}
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t * FieldInfo_internal_from_handle_type_m21882 (Object_t * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, const MethodInfo* method)
{
	typedef FieldInfo_t * (*FieldInfo_internal_from_handle_type_m21882_ftn) (IntPtr_t, IntPtr_t);
	static FieldInfo_internal_from_handle_type_m21882_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_internal_from_handle_type_m21882_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___field_handle, ___type_handle);
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" FieldInfo_t * FieldInfo_GetFieldFromHandle_m7850 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t4731  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = RuntimeFieldHandle_get_Value_m19268((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m10351(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t726 * L_3 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_3, (String_t*) &_stringLiteral5550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		IntPtr_t L_4 = RuntimeFieldHandle_get_Value_m19268((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		FieldInfo_t * L_6 = FieldInfo_internal_from_handle_type_m21882(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern TypeInfo* SystemException_t3384_il2cpp_TypeInfo_var;
extern "C" int32_t FieldInfo_GetFieldOffset_m21883 (FieldInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SystemException_t3384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5839);
		s_Il2CppMethodIntialized = true;
	}
	{
		SystemException_t3384 * L_0 = (SystemException_t3384 *)il2cpp_codegen_object_new (SystemException_t3384_il2cpp_TypeInfo_var);
		SystemException__ctor_m12121(L_0, (String_t*) &_stringLiteral5551, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t5033 * FieldInfo_GetUnmanagedMarshal_m21884 (FieldInfo_t * __this, const MethodInfo* method)
{
	typedef UnmanagedMarshal_t5033 * (*FieldInfo_GetUnmanagedMarshal_m21884_ftn) (FieldInfo_t *);
	static FieldInfo_GetUnmanagedMarshal_m21884_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_GetUnmanagedMarshal_m21884_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t5033 * FieldInfo_get_UMarshal_m21885 (FieldInfo_t * __this, const MethodInfo* method)
{
	{
		UnmanagedMarshal_t5033 * L_0 = FieldInfo_GetUnmanagedMarshal_m21884(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* NonSerializedAttribute_t4900_il2cpp_TypeInfo_var;
extern TypeInfo* FieldOffsetAttribute_t4741_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* FieldInfo_GetPseudoCustomAttributes_m21886 (FieldInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		NonSerializedAttribute_t4900_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9067);
		FieldOffsetAttribute_t4741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9068);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	UnmanagedMarshal_t5033 * V_1 = {0};
	ObjectU5BU5D_t697* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, __this);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Type::get_IsExplicitLayout() */, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		UnmanagedMarshal_t5033 * L_5 = (UnmanagedMarshal_t5033 *)VirtFuncInvoker0< UnmanagedMarshal_t5033 * >::Invoke(26 /* System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal() */, __this);
		V_1 = L_5;
		UnmanagedMarshal_t5033 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return (ObjectU5BU5D_t697*)NULL;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_2 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, __this);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		ObjectU5BU5D_t697* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		NonSerializedAttribute_t4900 * L_14 = (NonSerializedAttribute_t4900 *)il2cpp_codegen_object_new (NonSerializedAttribute_t4900_il2cpp_TypeInfo_var);
		NonSerializedAttribute__ctor_m20577(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_004f:
	{
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, __this);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Type::get_IsExplicitLayout() */, L_15);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_t697* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(25 /* System.Int32 System.Reflection.FieldInfo::GetFieldOffset() */, __this);
		FieldOffsetAttribute_t4741 * L_21 = (FieldOffsetAttribute_t4741 *)il2cpp_codegen_object_new (FieldOffsetAttribute_t4741_il2cpp_TypeInfo_var);
		FieldOffsetAttribute__ctor_m19287(L_21, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_19);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)) = (Object_t *)L_21;
	}

IL_006e:
	{
		UnmanagedMarshal_t5033 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		ObjectU5BU5D_t697* L_23 = V_2;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		UnmanagedMarshal_t5033 * L_26 = V_1;
		NullCheck(L_26);
		MarshalAsAttribute_t4734 * L_27 = UnmanagedMarshal_ToMarshalAsAttribute_m22542(L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)) = (Object_t *)L_27;
	}

IL_007e:
	{
		ObjectU5BU5D_t697* L_28 = V_2;
		return L_28;
	}
}
// System.Reflection.LocalVariableInfo
#include "mscorlib_System_Reflection_LocalVariableInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.LocalVariableInfo
#include "mscorlib_System_Reflection_LocalVariableInfoMethodDeclarations.h"

// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.Void System.Reflection.LocalVariableInfo::.ctor()
extern "C" void LocalVariableInfo__ctor_m21887 (LocalVariableInfo_t5017 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Reflection.LocalVariableInfo::ToString()
extern TypeInfo* UInt16_t758_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* LocalVariableInfo_ToString_m21888 (LocalVariableInfo_t5017 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt16_t758_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___is_pinned_1);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		Type_t * L_1 = (__this->___type_0);
		uint16_t L_2 = (__this->___position_2);
		uint16_t L_3 = L_2;
		Object_t * L_4 = Box(UInt16_t758_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5552, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0024:
	{
		Type_t * L_6 = (__this->___type_0);
		uint16_t L_7 = (__this->___position_2);
		uint16_t L_8 = L_7;
		Object_t * L_9 = Box(UInt16_t758_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5553, L_6, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationException_t4558_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder__ctor_m21889 (MemberInfoSerializationHolder_t5018 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___ctx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t4558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7652);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t784 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m12085(L_0, (String_t*) &_stringLiteral5186, /*hidden argument*/NULL);
		V_0 = L_1;
		SerializationInfo_t2937 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m12085(L_2, (String_t*) &_stringLiteral1395, /*hidden argument*/NULL);
		V_1 = L_3;
		SerializationInfo_t2937 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m12085(L_4, (String_t*) &_stringLiteral1723, /*hidden argument*/NULL);
		__this->____memberName_0 = L_5;
		SerializationInfo_t2937 * L_6 = ___info;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m12085(L_6, (String_t*) &_stringLiteral4332, /*hidden argument*/NULL);
		__this->____memberSignature_1 = L_7;
		SerializationInfo_t2937 * L_8 = ___info;
		NullCheck(L_8);
		int32_t L_9 = SerializationInfo_GetInt32_m12086(L_8, (String_t*) &_stringLiteral5554, /*hidden argument*/NULL);
		__this->____memberType_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->____genericArguments_4 = (TypeU5BU5D_t1221*)NULL;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_t4558_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		String_t* L_10 = V_0;
		Assembly_t784 * L_11 = Assembly_Load_m21807(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		Assembly_t784 * L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(16 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_12, L_13, 1, 1);
		__this->____reflectedType_3 = L_14;
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern "C" void MemberInfoSerializationHolder_Serialize_m21890 (Object_t * __this /* static, unused */, SerializationInfo_t2937 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		String_t* L_1 = ___name;
		Type_t * L_2 = ___klass;
		String_t* L_3 = ___signature;
		int32_t L_4 = ___type;
		MemberInfoSerializationHolder_Serialize_m21891(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (TypeU5BU5D_t1221*)(TypeU5BU5D_t1221*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern const Il2CppType* MemberInfoSerializationHolder_t5018_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* TypeU5BU5D_t1221_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder_Serialize_m21891 (Object_t * __this /* static, unused */, SerializationInfo_t2937 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t1221* ___genericArguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemberInfoSerializationHolder_t5018_0_0_0_var = il2cpp_codegen_type_from_index(9069);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		TypeU5BU5D_t1221_0_0_0_var = il2cpp_codegen_type_from_index(2726);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2937 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(MemberInfoSerializationHolder_t5018_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m23002(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_2 = ___info;
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Module_t5024 * L_4 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_3);
		NullCheck(L_4);
		Assembly_t784 * L_5 = Module_get_Assembly_m21923(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		Type_t * L_7 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m18033(L_2, (String_t*) &_stringLiteral5186, L_6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_8 = ___info;
		Type_t * L_9 = ___klass;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_9);
		Type_t * L_11 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_m18033(L_8, (String_t*) &_stringLiteral1395, L_10, L_11, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_12 = ___info;
		String_t* L_13 = ___name;
		Type_t * L_14 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_m18033(L_12, (String_t*) &_stringLiteral1723, L_13, L_14, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_15 = ___info;
		String_t* L_16 = ___signature;
		Type_t * L_17 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		SerializationInfo_AddValue_m18033(L_15, (String_t*) &_stringLiteral4332, L_16, L_17, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_18 = ___info;
		int32_t L_19 = ___type;
		NullCheck(L_18);
		SerializationInfo_AddValue_m12090(L_18, (String_t*) &_stringLiteral5554, L_19, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_20 = ___info;
		TypeU5BU5D_t1221* L_21 = ___genericArguments;
		Type_t * L_22 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(TypeU5BU5D_t1221_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		SerializationInfo_AddValue_m18033(L_20, (String_t*) &_stringLiteral5555, (Object_t *)(Object_t *)L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void MemberInfoSerializationHolder_GetObjectData_m21892 (MemberInfoSerializationHolder_t5018 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
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
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4558_il2cpp_TypeInfo_var;
extern TypeInfo* MemberTypes_t5019_il2cpp_TypeInfo_var;
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m21893 (MemberInfoSerializationHolder_t5018 * __this, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4558_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7652);
		MemberTypes_t5019_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9070);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorInfoU5BU5D_t1474* V_0 = {0};
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t2160* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	FieldInfo_t * V_5 = {0};
	PropertyInfo_t * V_6 = {0};
	EventInfo_t * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->____memberType_2);
		V_8 = L_0;
		int32_t L_1 = V_8;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		int32_t L_2 = V_8;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		Type_t * L_3 = (__this->____reflectedType_3);
		NullCheck(L_3);
		ConstructorInfoU5BU5D_t1474* L_4 = (ConstructorInfoU5BU5D_t1474*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1474*, int32_t >::Invoke(79 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		ConstructorInfoU5BU5D_t1474* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ConstructorInfo_t1399 **)(ConstructorInfo_t1399 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(ConstructorInfo_t1399 **)(ConstructorInfo_t1399 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_9 = (__this->____memberSignature_1);
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(24 /* System.Boolean System.String::Equals(System.String) */, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		ConstructorInfoU5BU5D_t1474* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		return (*(ConstructorInfo_t1399 **)(ConstructorInfo_t1399 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		ConstructorInfoU5BU5D_t1474* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_17 = (__this->____memberSignature_1);
		Type_t * L_18 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5556, L_17, L_18, /*hidden argument*/NULL);
		SerializationException_t4558 * L_20 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		Type_t * L_21 = (__this->____reflectedType_3);
		NullCheck(L_21);
		MethodInfoU5BU5D_t2160* L_22 = (MethodInfoU5BU5D_t2160*)VirtFuncInvoker1< MethodInfoU5BU5D_t2160*, int32_t >::Invoke(56 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		MethodInfoU5BU5D_t2160* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_27 = (__this->____memberSignature_1);
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(24 /* System.Boolean System.String::Equals(System.String) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		return (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_29, L_31));
	}

IL_00bb:
	{
		TypeU5BU5D_t1221* L_32 = (__this->____genericArguments_4);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		TypeU5BU5D_t1221* L_40 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(26 /* System.Type[] System.Reflection.MethodInfo::GetGenericArguments() */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		NullCheck(L_40);
		TypeU5BU5D_t1221* L_41 = (__this->____genericArguments_4);
		NullCheck(L_41);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((Array_t *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		TypeU5BU5D_t1221* L_45 = (__this->____genericArguments_4);
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)));
		MethodInfo_t * L_46 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t1221* >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		MethodInfo_t * L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		String_t* L_49 = (__this->____memberSignature_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_50 = String_op_Equality_m456(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfo_t * L_51 = V_4;
		return L_51;
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_53 = V_3;
		MethodInfoU5BU5D_t2160* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((Array_t *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_55 = (__this->____memberSignature_1);
		Type_t * L_56 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_57 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5557, L_55, L_56, /*hidden argument*/NULL);
		SerializationException_t4558 * L_58 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_58, L_57, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		Type_t * L_59 = (__this->____reflectedType_3);
		String_t* L_60 = (__this->____memberName_0);
		NullCheck(L_59);
		FieldInfo_t * L_61 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		FieldInfo_t * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		FieldInfo_t * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		String_t* L_64 = (__this->____memberName_0);
		Type_t * L_65 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_66 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5558, L_64, L_65, /*hidden argument*/NULL);
		SerializationException_t4558 * L_67 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_67, L_66, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		Type_t * L_68 = (__this->____reflectedType_3);
		String_t* L_69 = (__this->____memberName_0);
		NullCheck(L_68);
		PropertyInfo_t * L_70 = (PropertyInfo_t *)VirtFuncInvoker2< PropertyInfo_t *, String_t*, int32_t >::Invoke(60 /* System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags) */, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		PropertyInfo_t * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		PropertyInfo_t * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		String_t* L_73 = (__this->____memberName_0);
		Type_t * L_74 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_75 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5559, L_73, L_74, /*hidden argument*/NULL);
		SerializationException_t4558 * L_76 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_76, L_75, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		Type_t * L_77 = (__this->____reflectedType_3);
		String_t* L_78 = (__this->____memberName_0);
		NullCheck(L_77);
		EventInfo_t * L_79 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		EventInfo_t * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		EventInfo_t * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		String_t* L_82 = (__this->____memberName_0);
		Type_t * L_83 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_84 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5560, L_82, L_83, /*hidden argument*/NULL);
		SerializationException_t4558 * L_85 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_85, L_84, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->____memberType_2);
		int32_t L_87 = L_86;
		Object_t * L_88 = Box(MemberTypes_t5019_il2cpp_TypeInfo_var, &L_87);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_89 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral5561, L_88, /*hidden argument*/NULL);
		SerializationException_t4558 * L_90 = (SerializationException_t4558 *)il2cpp_codegen_object_new (SerializationException_t4558_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18034(L_90, L_89, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypesMethodDeclarations.h"



// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"


// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m21894 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m19263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1543 * MethodBase_GetMethodFromHandleNoGenericCheck_m21895 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t4908  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m20705((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		MethodBase_t1543 * L_2 = MethodBase_GetMethodFromIntPtr_m21896(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1543 * MethodBase_GetMethodFromIntPtr_m21896 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1543 * V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m10351(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t726 * L_3 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_3, (String_t*) &_stringLiteral5550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___handle;
		IntPtr_t L_5 = ___declaringType;
		MethodBase_t1543 * L_6 = MethodBase_GetMethodFromHandleInternalType_m21897(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		MethodBase_t1543 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t726 * L_8 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_8, (String_t*) &_stringLiteral5550, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		MethodBase_t1543 * L_9 = V_0;
		return L_9;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1543 * MethodBase_GetMethodFromHandle_m7848 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t4908  ___handle, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1543 * V_0 = {0};
	Type_t * V_1 = {0};
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m20705((&___handle), /*hidden argument*/NULL);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		MethodBase_t1543 * L_2 = MethodBase_GetMethodFromIntPtr_m21896(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MethodBase_t1543 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(85 /* System.Boolean System.Type::get_IsGenericType() */, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t726 * L_9 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_9, (String_t*) &_stringLiteral5562, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		MethodBase_t1543 * L_10 = V_0;
		return L_10;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t1543 * MethodBase_GetMethodFromHandleInternalType_m21897 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method)
{
	typedef MethodBase_t1543 * (*MethodBase_GetMethodFromHandleInternalType_m21897_ftn) (IntPtr_t, IntPtr_t);
	static MethodBase_GetMethodFromHandleInternalType_m21897_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBase_GetMethodFromHandleInternalType_m21897_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___method_handle, ___type_handle);
}
// System.Reflection.MethodImplAttributes System.Reflection.MethodBase::GetMethodImplementationFlags()
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C" int32_t MethodBase_GetParameterCount_m21898 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	{
		ParameterInfoU5BU5D_t1476* L_0 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, __this);
		V_0 = L_0;
		ParameterInfoU5BU5D_t1476* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return 0;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t1476* L_2 = V_0;
		NullCheck(L_2);
		return (((int32_t)(((Array_t *)L_2)->max_length)));
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" Object_t * MethodBase_Invoke_m21899 (MethodBase_t1543 * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___parameters, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t697* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(18 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, 0, (Binder_t2971 *)NULL, L_1, (CultureInfo_t783 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m21900 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C" bool MethodBase_get_IsPublic_m21901 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m21902 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C" bool MethodBase_get_IsVirtual_m21903 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern TypeInfo* MethodBuilder_t5062_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorBuilder_t5055_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern "C" int32_t MethodBase_get_next_table_index_m21904 (MethodBase_t1543 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBuilder_t5062_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9071);
		ConstructorBuilder_t5055_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9072);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	MethodBuilder_t5062 * V_0 = {0};
	ConstructorBuilder_t5055 * V_1 = {0};
	{
		if (!((MethodBuilder_t5062 *)IsInst(__this, MethodBuilder_t5062_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		V_0 = ((MethodBuilder_t5062 *)Castclass(__this, MethodBuilder_t5062_il2cpp_TypeInfo_var));
		MethodBuilder_t5062 * L_0 = V_0;
		Object_t * L_1 = ___obj;
		int32_t L_2 = ___table;
		bool L_3 = ___inc;
		NullCheck(L_0);
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, Object_t *, int32_t, bool >::Invoke(25 /* System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean) */, L_0, L_1, L_2, L_3);
		return L_4;
	}

IL_0019:
	{
		if (!((ConstructorBuilder_t5055 *)IsInst(__this, ConstructorBuilder_t5055_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		V_1 = ((ConstructorBuilder_t5055 *)Castclass(__this, ConstructorBuilder_t5055_il2cpp_TypeInfo_var));
		ConstructorBuilder_t5055 * L_5 = V_1;
		Object_t * L_6 = ___obj;
		int32_t L_7 = ___table;
		bool L_8 = ___inc;
		NullCheck(L_5);
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, Object_t *, int32_t, bool >::Invoke(25 /* System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean) */, L_5, L_6, L_7, L_8);
		return L_9;
	}

IL_0032:
	{
		Exception_t57 * L_10 = (Exception_t57 *)il2cpp_codegen_object_new (Exception_t57_il2cpp_TypeInfo_var);
		Exception__ctor_m416(L_10, (String_t*) &_stringLiteral5563, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}
}
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* MethodBase_GetGenericArguments_m21905 (MethodBase_t1543 * __this, const MethodInfo* method)
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
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C" bool MethodBase_get_ContainsGenericParameters_m21906 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m21907 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C" bool MethodBase_get_IsGenericMethod_m21908 (MethodBase_t1543 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.MethodInfo::.ctor()
extern "C" void MethodInfo__ctor_m21909 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		MethodBase__ctor_m21894(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern "C" int32_t MethodInfo_get_MemberType_m21910 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern "C" Type_t * MethodInfo_get_ReturnType_m21911 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MethodInfo_GetGenericMethodDefinition_m21912 (MethodInfo_t * __this, const MethodInfo* method)
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
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m21913 (MethodInfo_t * __this, TypeU5BU5D_t1221* ___typeArguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = Object_GetType_m4220(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		NotSupportedException_t56 * L_2 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* MethodInfo_GetGenericArguments_m21914 (MethodInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m21915 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m21916 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern "C" bool MethodInfo_get_ContainsGenericParameters_m21917 (MethodInfo_t * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"



// System.Void System.Reflection.Missing::.ctor()
extern "C" void Missing__ctor_m21918 (Missing_t5022 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Missing::.cctor()
extern TypeInfo* Missing_t5022_il2cpp_TypeInfo_var;
extern "C" void Missing__cctor_m21919 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Missing_t5022_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8870);
		s_Il2CppMethodIntialized = true;
	}
	{
		Missing_t5022 * L_0 = (Missing_t5022 *)il2cpp_codegen_object_new (Missing_t5022_il2cpp_TypeInfo_var);
		Missing__ctor_m21918(L_0, /*hidden argument*/NULL);
		((Missing_t5022_StaticFields*)Missing_t5022_il2cpp_TypeInfo_var->static_fields)->___Value_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Missing::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m21920 (Missing_t5022 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"


// System.Void System.Reflection.Module::.ctor()
extern "C" void Module__ctor_m21921 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Module::.cctor()
extern TypeInfo* TypeFilter_t5023_il2cpp_TypeInfo_var;
extern TypeInfo* Module_t5024_il2cpp_TypeInfo_var;
extern const MethodInfo* Module_filter_by_type_name_m21933_MethodInfo_var;
extern const MethodInfo* Module_filter_by_type_name_ignore_case_m21934_MethodInfo_var;
extern "C" void Module__cctor_m21922 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeFilter_t5023_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9073);
		Module_t5024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9055);
		Module_filter_by_type_name_m21933_MethodInfo_var = il2cpp_codegen_method_info_from_index(1630);
		Module_filter_by_type_name_ignore_case_m21934_MethodInfo_var = il2cpp_codegen_method_info_from_index(1631);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)Module_filter_by_type_name_m21933_MethodInfo_var };
		TypeFilter_t5023 * L_1 = (TypeFilter_t5023 *)il2cpp_codegen_object_new (TypeFilter_t5023_il2cpp_TypeInfo_var);
		TypeFilter__ctor_m24451(L_1, NULL, L_0, /*hidden argument*/NULL);
		((Module_t5024_StaticFields*)Module_t5024_il2cpp_TypeInfo_var->static_fields)->___FilterTypeName_1 = L_1;
		IntPtr_t L_2 = { (void*)Module_filter_by_type_name_ignore_case_m21934_MethodInfo_var };
		TypeFilter_t5023 * L_3 = (TypeFilter_t5023 *)il2cpp_codegen_object_new (TypeFilter_t5023_il2cpp_TypeInfo_var);
		TypeFilter__ctor_m24451(L_3, NULL, L_2, /*hidden argument*/NULL);
		((Module_t5024_StaticFields*)Module_t5024_il2cpp_TypeInfo_var->static_fields)->___FilterTypeNameIgnoreCase_2 = L_3;
		return;
	}
}
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t784 * Module_get_Assembly_m21923 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		Assembly_t784 * L_0 = (__this->___assembly_4);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_Name()
extern "C" String_t* Module_get_Name_m21924 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m21925 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___scopename_7);
		return L_0;
	}
}
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* Module_GetCustomAttributes_m21926 (Module_t5024 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern "C" void Module_GetObjectData_m21927 (Module_t5024 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2937 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral3791, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t2937 * L_2 = ___info;
		StreamingContext_t2938  L_3 = ___context;
		UnitySerializationHolder_GetModuleData_m20839(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Type System.Reflection.Module::GetType(System.String)
extern "C" Type_t * Module_GetType_m21928 (Module_t5024 * __this, String_t* ___className, const MethodInfo* method)
{
	{
		String_t* L_0 = ___className;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(10 /* System.Type System.Reflection.Module::GetType(System.String,System.Boolean,System.Boolean) */, __this, L_0, 0, 0);
		return L_1;
	}
}
// System.Type System.Reflection.Module::GetType(System.String,System.Boolean,System.Boolean)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" Type_t * Module_GetType_m21929 (Module_t5024 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___className;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral1361, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___className;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t726 * L_5 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_5, (String_t*) &_stringLiteral5564, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0026:
	{
		Assembly_t784 * L_6 = (__this->___assembly_4);
		String_t* L_7 = ___className;
		bool L_8 = ___throwOnError;
		bool L_9 = ___ignoreCase;
		NullCheck(L_6);
		Type_t * L_10 = Assembly_InternalGetType_m21802(L_6, __this, L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool Module_IsDefined_m21930 (Module_t5024 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m21931 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_resource_8);
		return L_0;
	}
}
// System.String System.Reflection.Module::ToString()
extern "C" String_t* Module_ToString_m21932 (Module_t5024 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Module_filter_by_type_name_m21933 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m10345(L_1, (String_t*) &_stringLiteral1321, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_8 = String_Substring_m418(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_9 = String_StartsWith_m4214(L_4, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		Type_t * L_10 = ___m;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m456(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool Module_filter_by_type_name_ignore_case_m21934 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m10345(L_1, (String_t*) &_stringLiteral1321, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m4008(L_4, /*hidden argument*/NULL);
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m410(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_9 = String_Substring_m418(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_ToLower_m4008(L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_11 = String_StartsWith_m4214(L_5, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0039:
	{
		Type_t * L_12 = ___m;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_15 = String_Compare_m18038(NULL /*static, unused*/, L_13, L_14, 1, /*hidden argument*/NULL);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" void MonoGenericMethod__ctor_m21935 (MonoGenericMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod__ctor_m21981(__this, /*hidden argument*/NULL);
		InvalidOperationException_t1447 * L_0 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m21936 (MonoGenericMethod_t * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m21936_ftn) (MonoGenericMethod_t *);
	static MonoGenericMethod_get_ReflectedType_m21936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m21936_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" void MonoGenericCMethod__ctor_m21937 (MonoGenericCMethod_t5025 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoCMethod__ctor_m22013(__this, /*hidden argument*/NULL);
		InvalidOperationException_t1447 * L_0 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m21938 (MonoGenericCMethod_t5025 * __this, const MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m21938_ftn) (MonoGenericCMethod_t5025 *);
	static MonoGenericCMethod_get_ReflectedType_m21938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m21938_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfoMethodDeclarations.h"

// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEvent.h"


// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m21939 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t5027 * ___info, const MethodInfo* method)
{
	typedef void (*MonoEventInfo_get_event_info_m21939_ftn) (MonoEvent_t *, MonoEventInfo_t5027 *);
	static MonoEventInfo_get_event_info_m21939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEventInfo_get_event_info_m21939_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(___ev, ___info);
}
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern "C" MonoEventInfo_t5027  MonoEventInfo_GetEventInfo_m21940 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEvent_t * L_0 = ___ev;
		MonoEventInfo_get_event_info_m21939(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		MonoEventInfo_t5027  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEventMethodDeclarations.h"



// System.Void System.Reflection.MonoEvent::.ctor()
extern "C" void MonoEvent__ctor_m21941 (MonoEvent_t * __this, const MethodInfo* method)
{
	{
		EventInfo__ctor_m21871(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern "C" int32_t MonoEvent_get_Attributes_m21942 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEventInfo_t5027  L_0 = MonoEventInfo_GetEventInfo_m21940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->___attrs_6);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m21943 (MonoEvent_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEventInfo_t5027  L_0 = MonoEventInfo_GetEventInfo_m21940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___nonPublic;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodInfo_t * L_2 = ((&V_0)->___add_method_3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		MethodInfo_t * L_3 = ((&V_0)->___add_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		MethodInfo_t * L_5 = ((&V_0)->___add_method_3);
		return L_5;
	}

IL_0029:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern "C" Type_t * MonoEvent_get_DeclaringType_m21944 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEventInfo_t5027  L_0 = MonoEventInfo_GetEventInfo_m21940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___declaring_type_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m21945 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEventInfo_t5027  L_0 = MonoEventInfo_GetEventInfo_m21940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___reflected_type_1);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m21946 (MonoEvent_t * __this, const MethodInfo* method)
{
	MonoEventInfo_t5027  V_0 = {0};
	{
		MonoEventInfo_t5027  L_0 = MonoEventInfo_GetEventInfo_m21940(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = ((&V_0)->___name_2);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoEvent_ToString_m21947 (MonoEvent_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(15 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoEvent::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m4033(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral944, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool MonoEvent_IsDefined_m21948 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoEvent_GetCustomAttributes_m21949 (MonoEvent_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_1 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoEvent_GetCustomAttributes_m21950 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoEvent_GetObjectData_m21951 (MonoEvent_t * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoEvent::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoEvent::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoEvent::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m21890(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"

// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"


// System.Void System.Reflection.MonoField::.ctor()
extern "C" void MonoField__ctor_m21952 (MonoField_t * __this, const MethodInfo* method)
{
	{
		FieldInfo__ctor_m21874(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern "C" int32_t MonoField_get_Attributes_m21953 (MonoField_t * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern "C" RuntimeFieldHandle_t4731  MonoField_get_FieldHandle_m21954 (MonoField_t * __this, const MethodInfo* method)
{
	{
		RuntimeFieldHandle_t4731  L_0 = (__this->___fhandle_1);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_FieldType()
extern "C" Type_t * MonoField_get_FieldType_m21955 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m21956 (MonoField_t * __this, bool ___declaring, const MethodInfo* method)
{
	typedef Type_t * (*MonoField_GetParentType_m21956_ftn) (MonoField_t *, bool);
	static MonoField_GetParentType_m21956_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetParentType_m21956_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, ___declaring);
}
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m21957 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m21956(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m21958 (MonoField_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m21956(__this, 1, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m21959 (MonoField_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool MonoField_IsDefined_m21960 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoField_GetCustomAttributes_m21961 (MonoField_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_1 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoField_GetCustomAttributes_m21962 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern "C" int32_t MonoField_GetFieldOffset_m21963 (MonoField_t * __this, const MethodInfo* method)
{
	typedef int32_t (*MonoField_GetFieldOffset_m21963_ftn) (MonoField_t *);
	static MonoField_GetFieldOffset_m21963_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetFieldOffset_m21963_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m21964 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method)
{
	typedef Object_t * (*MonoField_GetValueInternal_m21964_ftn) (MonoField_t *, Object_t *);
	static MonoField_GetValueInternal_m21964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetValueInternal_m21964_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, ___obj);
}
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern TypeInfo* TargetException_t5039_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoField_GetValue_m21965 (MonoField_t * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TargetException_t5039_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9074);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t5039 * L_2 = (TargetException_t5039 *)il2cpp_codegen_object_new (TargetException_t5039_il2cpp_TypeInfo_var);
		TargetException__ctor_m22091(L_2, (String_t*) &_stringLiteral5565, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.FieldInfo::get_IsLiteral() */, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		MonoField_CheckGeneric_m21971(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		Object_t * L_4 = ___obj;
		Object_t * L_5 = MonoField_GetValueInternal_m21964(__this, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String System.Reflection.MonoField::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoField_ToString_m21966 (MonoField_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___type_3);
		String_t* L_1 = (__this->___name_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5566, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m21967 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, const MethodInfo* method)
{
	typedef void (*MonoField_SetValueInternal_m21967_ftn) (FieldInfo_t *, Object_t *, Object_t *);
	static MonoField_SetValueInternal_m21967_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_SetValueInternal_m21967_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(___fi, ___obj, ___value);
}
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern TypeInfo* TargetException_t5039_il2cpp_TypeInfo_var;
extern TypeInfo* FieldAccessException_t4884_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2971_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" void MonoField_SetValue_m21968 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2971 * ___binder, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TargetException_t5039_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9074);
		FieldAccessException_t4884_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9075);
		Binder_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8947);
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.FieldInfo::get_IsStatic() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t5039 * L_2 = (TargetException_t5039 *)il2cpp_codegen_object_new (TargetException_t5039_il2cpp_TypeInfo_var);
		TargetException__ctor_m22091(L_2, (String_t*) &_stringLiteral5565, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.FieldInfo::get_IsLiteral() */, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		FieldAccessException_t4884 * L_4 = (FieldAccessException_t4884 *)il2cpp_codegen_object_new (FieldAccessException_t4884_il2cpp_TypeInfo_var);
		FieldAccessException__ctor_m20429(L_4, (String_t*) &_stringLiteral5567, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Binder_t2971 * L_5 = ___binder;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		Binder_t2971 * L_6 = Binder_get_DefaultBinder_m21860(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_6;
	}

IL_0036:
	{
		MonoField_CheckGeneric_m21971(__this, /*hidden argument*/NULL);
		Object_t * L_7 = ___val;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		Binder_t2971 * L_8 = ___binder;
		Object_t * L_9 = ___val;
		Type_t * L_10 = (__this->___type_3);
		CultureInfo_t783 * L_11 = ___culture;
		NullCheck(L_8);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t783 * >::Invoke(5 /* System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo) */, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Object_t * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t697* L_14 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 4));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral5568);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral5568;
		ObjectU5BU5D_t697* L_15 = L_14;
		Object_t * L_16 = ___val;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m4220(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_17;
		ObjectU5BU5D_t697* L_18 = L_15;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral5569);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 2)) = (Object_t *)(String_t*) &_stringLiteral5569;
		ObjectU5BU5D_t697* L_19 = L_18;
		Type_t * L_20 = (__this->___type_3);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 3)) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m4034(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		ArgumentException_t726 * L_22 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_22, L_21, (String_t*) &_stringLiteral5570, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		Object_t * L_23 = V_0;
		___val = L_23;
	}

IL_0090:
	{
		Object_t * L_24 = ___obj;
		Object_t * L_25 = ___val;
		MonoField_SetValueInternal_m21967(NULL /*static, unused*/, __this, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MonoField System.Reflection.MonoField::Clone(System.String)
extern TypeInfo* MonoField_t_il2cpp_TypeInfo_var;
extern "C" MonoField_t * MonoField_Clone_m21969 (MonoField_t * __this, String_t* ___newName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoField_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8880);
		s_Il2CppMethodIntialized = true;
	}
	MonoField_t * V_0 = {0};
	{
		MonoField_t * L_0 = (MonoField_t *)il2cpp_codegen_object_new (MonoField_t_il2cpp_TypeInfo_var);
		MonoField__ctor_m21952(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MonoField_t * L_1 = V_0;
		String_t* L_2 = ___newName;
		NullCheck(L_1);
		L_1->___name_2 = L_2;
		MonoField_t * L_3 = V_0;
		Type_t * L_4 = (__this->___type_3);
		NullCheck(L_3);
		L_3->___type_3 = L_4;
		MonoField_t * L_5 = V_0;
		int32_t L_6 = (__this->___attrs_4);
		NullCheck(L_5);
		L_5->___attrs_4 = L_6;
		MonoField_t * L_7 = V_0;
		IntPtr_t L_8 = (__this->___klass_0);
		NullCheck(L_7);
		L_7->___klass_0 = L_8;
		MonoField_t * L_9 = V_0;
		RuntimeFieldHandle_t4731  L_10 = (__this->___fhandle_1);
		NullCheck(L_9);
		L_9->___fhandle_1 = L_10;
		MonoField_t * L_11 = V_0;
		return L_11;
	}
}
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoField_GetObjectData_m21970 (MonoField_t * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoField::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoField::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoField::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m21890(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoField::CheckGeneric()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" void MonoField_CheckGeneric_m21971 (MonoField_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoField::get_DeclaringType() */, __this);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1447 * L_2 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_2, (String_t*) &_stringLiteral5571, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"



// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m21972 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t5028 * ___info, const MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m21972_ftn) (IntPtr_t, MonoMethodInfo_t5028 *);
	static MonoMethodInfo_get_method_info_m21972_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m21972_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t5028  MonoMethodInfo_GetMethodInfo_m21973 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_get_method_info_m21972(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/NULL);
		MonoMethodInfo_t5028  L_1 = V_0;
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m21974 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___parent_0);
		return L_2;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetReturnType_m21975 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___ret_1);
		return L_2;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetAttributes_m21976 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___attrs_2);
		return L_2;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m21977 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___callconv_4);
		return L_2;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::GetMethodImplementationFlags(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetMethodImplementationFlags_m21978 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method)
{
	MonoMethodInfo_t5028  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___iattrs_3);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t1476* MonoMethodInfo_get_parameter_info_m21979 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t1476* (*MonoMethodInfo_get_parameter_info_m21979_ftn) (IntPtr_t, MemberInfo_t *);
	static MonoMethodInfo_get_parameter_info_m21979_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m21979_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t1476* MonoMethodInfo_GetParametersInfo_m21980 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		MemberInfo_t * L_1 = ___member;
		ParameterInfoU5BU5D_t1476* L_2 = MonoMethodInfo_get_parameter_info_m21979(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
// System.Security.SecurityManager
#include "mscorlib_System_Security_SecurityManagerMethodDeclarations.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m21981 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		MethodInfo__ctor_m21909(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoMethod::.ctor(System.RuntimeMethodHandle)
extern "C" void MonoMethod__ctor_m21982 (MonoMethod_t * __this, RuntimeMethodHandle_t4908  ___mhandle, const MethodInfo* method)
{
	{
		MethodInfo__ctor_m21909(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m20705((&___mhandle), /*hidden argument*/NULL);
		__this->___mhandle_0 = L_0;
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m21983 (Object_t * __this /* static, unused */, MethodBase_t1543 * ___method, const MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m21983_ftn) (MethodBase_t1543 *);
	static MonoMethod_get_name_m21983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m21983_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m21984 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, const MethodInfo* method)
{
	typedef MonoMethod_t * (*MonoMethod_get_base_definition_m21984_ftn) (MonoMethod_t *);
	static MonoMethod_get_base_definition_m21984_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m21984_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m21985 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = MonoMethod_get_base_definition_m21984(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m21986 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m21975(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.MonoMethod::GetMethodImplementationFlags()
extern "C" int32_t MonoMethod_GetMethodImplementationFlags_m21987 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetMethodImplementationFlags_m21978(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1476* MonoMethod_GetParameters_m21988 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	ParameterInfoU5BU5D_t1476* V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t1476* L_1 = MonoMethodInfo_GetParametersInfo_m21980(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		V_0 = L_1;
		ParameterInfoU5BU5D_t1476* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t1476* L_3 = V_0;
		ParameterInfoU5BU5D_t1476* L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (Array_t *)(Array_t *)L_4, 0);
		ParameterInfoU5BU5D_t1476* L_5 = V_1;
		return L_5;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m21989 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___parameters, Exception_t57 ** ___exc, const MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m21989_ftn) (MonoMethod_t *, Object_t *, ObjectU5BU5D_t697*, Exception_t57 **);
	static MonoMethod_InternalInvoke_m21989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m21989_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* Binder_t2971_il2cpp_TypeInfo_var;
extern TypeInfo* TargetParameterCountException_t5041_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityManager_t5244_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ThreadAbortException_t4580_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t5040_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethod_Invoke_m21990 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8947);
		TargetParameterCountException_t5041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9066);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		SecurityManager_t5244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8984);
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		ThreadAbortException_t4580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7844);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		TargetInvocationException_t5040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9076);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t57 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Binder_t2971 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		Binder_t2971 * L_1 = Binder_get_DefaultBinder_m21860(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_1;
	}

IL_000c:
	{
		IntPtr_t L_2 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t1476* L_3 = MonoMethodInfo_GetParametersInfo_m21980(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		ObjectU5BU5D_t697* L_4 = ___parameters;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		ObjectU5BU5D_t697* L_6 = ___parameters;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t697* L_7 = ___parameters;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1476* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t5041 * L_9 = (TargetParameterCountException_t5041 *)il2cpp_codegen_object_new (TargetParameterCountException_t5041_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m22097(L_9, (String_t*) &_stringLiteral5572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = ___invokeAttr;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		Binder_t2971 * L_11 = ___binder;
		ObjectU5BU5D_t697* L_12 = ___parameters;
		ParameterInfoU5BU5D_t1476* L_13 = V_0;
		CultureInfo_t783 * L_14 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		bool L_15 = Binder_ConvertArgs_m21861(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t726 * L_16 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_16, (String_t*) &_stringLiteral5573, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		ObjectU5BU5D_t697* L_17 = ___parameters;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)));
		Type_t * L_20 = Object_GetType_m4220((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t1476* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_21, L_23)));
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_21, L_23)));
		if ((((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t726 * L_25 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_25, (String_t*) &_stringLiteral5572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		ParameterInfoU5BU5D_t1476* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5244_il2cpp_TypeInfo_var);
		bool L_29 = SecurityManager_get_SecurityEnabled_m23253(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0096;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5244_il2cpp_TypeInfo_var);
		SecurityManager_ReflectedLinkDemandInvoke_m23267(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters() */, __this);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		InvalidOperationException_t1447 * L_31 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_31, (String_t*) &_stringLiteral5574, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_00a9:
	{
		V_3 = NULL;
	}

IL_00ab:
	try
	{ // begin try (depth: 1)
		Object_t * L_32 = ___obj;
		ObjectU5BU5D_t697* L_33 = ___parameters;
		Object_t * L_34 = MonoMethod_InternalInvoke_m21989(__this, L_32, L_33, (&V_2), /*hidden argument*/NULL);
		V_3 = L_34;
		goto IL_00ca;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ThreadAbortException_t4580_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00b9;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00be;
		throw e;
	}

CATCH_00b9:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00ca;
	} // end catch (depth: 1)

CATCH_00be:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_35 = V_4;
		TargetInvocationException_t5040 * L_36 = (TargetInvocationException_t5040 *)il2cpp_codegen_object_new (TargetInvocationException_t5040_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m22093(L_36, L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
		goto IL_00ca;
	} // end catch (depth: 1)

IL_00ca:
	{
		Exception_t57 * L_37 = V_2;
		if (!L_37)
		{
			goto IL_00cf;
		}
	}
	{
		Exception_t57 * L_38 = V_2;
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00cf:
	{
		Object_t * L_39 = V_3;
		return L_39;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4908  MonoMethod_get_MethodHandle_m21991 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t4908  L_1 = {0};
		RuntimeMethodHandle__ctor_m20703(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern "C" int32_t MonoMethod_get_Attributes_m21992 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m21976(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m21993 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m21977(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m21994 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m21995 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m21974(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m21996 (MonoMethod_t * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m21983(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool MonoMethod_IsDefined_m21997 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoMethod_GetCustomAttributes_m21998 (MonoMethod_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_1 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoMethod_GetCustomAttributes_m21999 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t4733 * MonoMethod_GetDllImportAttribute_m22000 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, const MethodInfo* method)
{
	typedef DllImportAttribute_t4733 * (*MonoMethod_GetDllImportAttribute_m22000_ftn) (IntPtr_t);
	static MonoMethod_GetDllImportAttribute_m22000_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m22000_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* PreserveSigAttribute_t5105_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoMethod_GetPseudoCustomAttributes_m22001 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		PreserveSigAttribute_t5105_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9077);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t5028  V_1 = {0};
	ObjectU5BU5D_t697* V_2 = {0};
	DllImportAttribute_t4733 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t5028  L_1 = MonoMethodInfo_GetMethodInfo_m21973(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t697*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t697* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		PreserveSigAttribute_t5105 * L_12 = (PreserveSigAttribute_t5105 *)il2cpp_codegen_object_new (PreserveSigAttribute_t5105_il2cpp_TypeInfo_var);
		PreserveSigAttribute__ctor_m22569(L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t L_14 = (__this->___mhandle_0);
		DllImportAttribute_t4733 * L_15 = MonoMethod_GetDllImportAttribute_m22000(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		DllImportAttribute_t4733 * L_17 = V_3;
		NullCheck(L_17);
		L_17->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		ObjectU5BU5D_t697* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		DllImportAttribute_t4733 * L_21 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)L_21;
	}

IL_0096:
	{
		ObjectU5BU5D_t697* L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m22002 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Type::get_IsClass() */, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_IsPointer() */, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_7);
		NullCheck(L_8);
		bool L_9 = Type_get_IsNested_m19258(L_8, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethod_ToString_m22003 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t1221* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t1476* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4000(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MonoMethod::get_ReturnType() */, __this);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		bool L_3 = MonoMethod_ShouldPrintFullName_m22002(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringBuilder_t261 * L_4 = V_0;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_5);
		NullCheck(L_4);
		StringBuilder_Append_m4007(L_4, L_6, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0024:
	{
		StringBuilder_t261 * L_7 = V_0;
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		NullCheck(L_7);
		StringBuilder_Append_m4007(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0031:
	{
		StringBuilder_t261 * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m4007(L_10, (String_t*) &_stringLiteral944, /*hidden argument*/NULL);
		StringBuilder_t261 * L_11 = V_0;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, __this);
		NullCheck(L_11);
		StringBuilder_Append_m4007(L_11, L_12, /*hidden argument*/NULL);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t1221* L_14 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(26 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		V_2 = L_14;
		StringBuilder_t261 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m4007(L_15, (String_t*) &_stringLiteral950, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t261 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m4007(L_17, (String_t*) &_stringLiteral303, /*hidden argument*/NULL);
	}

IL_0079:
	{
		StringBuilder_t261 * L_18 = V_0;
		TypeU5BU5D_t1221* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		NullCheck(L_18);
		StringBuilder_Append_m4007(L_18, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t1221* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t261 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m4007(L_26, (String_t*) &_stringLiteral123, /*hidden argument*/NULL);
	}

IL_009e:
	{
		StringBuilder_t261 * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m4007(L_27, (String_t*) &_stringLiteral2045, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t1476* L_28 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		StringBuilder_t261 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m4007(L_30, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		ParameterInfoU5BU5D_t1476* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		Type_t * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_38 = V_6;
		NullCheck(L_38);
		Type_t * L_39 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		Type_t * L_40 = V_6;
		bool L_41 = MonoMethod_ShouldPrintFullName_m22002(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t261 * L_42 = V_0;
		Type_t * L_43 = V_6;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_43);
		NullCheck(L_42);
		StringBuilder_Append_m4007(L_42, L_44, /*hidden argument*/NULL);
		goto IL_0111;
	}

IL_0103:
	{
		StringBuilder_t261 * L_45 = V_0;
		Type_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		NullCheck(L_45);
		StringBuilder_Append_m4007(L_45, L_47, /*hidden argument*/NULL);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t261 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m4007(L_49, (String_t*) &_stringLiteral5275, /*hidden argument*/NULL);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		ParameterInfoU5BU5D_t1476* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention() */, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_54 = V_4;
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t261 * L_55 = V_0;
		NullCheck(L_55);
		StringBuilder_Append_m4007(L_55, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_014c:
	{
		StringBuilder_t261 * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_Append_m4007(L_56, (String_t*) &_stringLiteral5575, /*hidden argument*/NULL);
	}

IL_0158:
	{
		StringBuilder_t261 * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_Append_m4007(L_57, (String_t*) &_stringLiteral1259, /*hidden argument*/NULL);
		StringBuilder_t261 * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_58);
		return L_59;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoMethod_GetObjectData_m22004 (MonoMethod_t * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	TypeU5BU5D_t1221* V_0 = {0};
	TypeU5BU5D_t1221* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition() */, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t1221* L_2 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(26 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t1221*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		SerializationInfo_t2937 * L_3 = ___info;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, __this);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoMethod::get_ReflectedType() */, __this);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoMethod::ToString() */, __this);
		TypeU5BU5D_t1221* L_7 = V_0;
		MemberInfoSerializationHolder_Serialize_m21891(NULL /*static, unused*/, L_3, L_4, L_5, L_6, 8, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m22005 (MonoMethod_t * __this, TypeU5BU5D_t1221* ___methodInstantiation, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t1221* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	{
		TypeU5BU5D_t1221* L_0 = ___methodInstantiation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5576, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TypeU5BU5D_t1221* L_2 = ___methodInstantiation;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		TypeU5BU5D_t1221* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t785 * L_7 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7522(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t1221* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t1221* L_11 = ___methodInstantiation;
		MethodInfo_t * L_12 = MonoMethod_MakeGenericMethod_impl_m22006(__this, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t1221* L_14 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(26 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		NullCheck(L_14);
		int32_t L_15 = (((int32_t)(((Array_t *)L_14)->max_length)));
		Object_t * L_16 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_15);
		TypeU5BU5D_t1221* L_17 = ___methodInstantiation;
		NullCheck(L_17);
		int32_t L_18 = (((int32_t)(((Array_t *)L_17)->max_length)));
		Object_t * L_19 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m4219(NULL /*static, unused*/, (String_t*) &_stringLiteral5577, L_16, L_19, /*hidden argument*/NULL);
		ArgumentException_t726 * L_21 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		MethodInfo_t * L_22 = V_3;
		return L_22;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m22006 (MonoMethod_t * __this, TypeU5BU5D_t1221* ___types, const MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_MakeGenericMethod_impl_m22006_ftn) (MonoMethod_t *, TypeU5BU5D_t1221*);
	static MonoMethod_MakeGenericMethod_impl_m22006_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m22006_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t1221* MonoMethod_GetGenericArguments_m22007 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef TypeU5BU5D_t1221* (*MonoMethod_GetGenericArguments_m22007_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericArguments_m22007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m22007_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition_impl()
extern "C" MethodInfo_t * MonoMethod_GetGenericMethodDefinition_impl_m22008 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_GetGenericMethodDefinition_impl_m22008_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericMethodDefinition_impl_m22008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericMethodDefinition_impl_m22008_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericMethodDefinition_impl()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetGenericMethodDefinition()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MonoMethod_GetGenericMethodDefinition_m22009 (MonoMethod_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	{
		MethodInfo_t * L_0 = MonoMethod_GetGenericMethodDefinition_impl_m22008(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t1447 * L_2 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		MethodInfo_t * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m22010 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m22010_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethodDefinition_m22010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m22010_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m22011 (MonoMethod_t * __this, const MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m22011_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethod_m22011_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m22011_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m22012 (MonoMethod_t * __this, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t1221* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod() */, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t1221* L_1 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(26 /* System.Type[] System.Reflection.MonoMethod::GetGenericArguments() */, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		TypeU5BU5D_t1221* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		TypeU5BU5D_t1221* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_10);
		return L_11;
	}
}
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#ifndef _MSC_VER
#else
#endif

// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"


// System.Void System.Reflection.MonoCMethod::.ctor()
extern TypeInfo* ConstructorInfo_t1399_il2cpp_TypeInfo_var;
extern "C" void MonoCMethod__ctor_m22013 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t1399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t1399_il2cpp_TypeInfo_var);
		ConstructorInfo__ctor_m21864(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.MonoCMethod::GetMethodImplementationFlags()
extern "C" int32_t MonoCMethod_GetMethodImplementationFlags_m22014 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetMethodImplementationFlags_m21978(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t1476* MonoCMethod_GetParameters_m22015 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t1476* L_1 = MonoMethodInfo_GetParametersInfo_m21980(NULL /*static, unused*/, L_0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m22016 (MonoCMethod_t5026 * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___parameters, Exception_t57 ** ___exc, const MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m22016_ftn) (MonoCMethod_t5026 *, Object_t *, ObjectU5BU5D_t697*, Exception_t57 **);
	static MonoCMethod_InternalInvoke_m22016_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m22016_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* Binder_t2971_il2cpp_TypeInfo_var;
extern TypeInfo* TargetParameterCountException_t5041_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityManager_t5244_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* MemberAccessException_t4885_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t5040_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoCMethod_Invoke_m22017 (MonoCMethod_t5026 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Binder_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8947);
		TargetParameterCountException_t5041_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9066);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		SecurityManager_t5244_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8984);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		MemberAccessException_t4885_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8956);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		TargetInvocationException_t5040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9076);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t57 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Object_t * G_B32_0 = {0};
	{
		Binder_t2971 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		Binder_t2971 * L_1 = Binder_get_DefaultBinder_m21860(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_1;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t1476* L_2 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters() */, __this);
		V_0 = L_2;
		ObjectU5BU5D_t697* L_3 = ___parameters;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		ObjectU5BU5D_t697* L_5 = ___parameters;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t697* L_6 = ___parameters;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t1476* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t5041 * L_8 = (TargetParameterCountException_t5041 *)il2cpp_codegen_object_new (TargetParameterCountException_t5041_il2cpp_TypeInfo_var);
		TargetParameterCountException__ctor_m22097(L_8, (String_t*) &_stringLiteral5572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = ___invokeAttr;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		Binder_t2971 * L_10 = ___binder;
		ObjectU5BU5D_t697* L_11 = ___parameters;
		ParameterInfoU5BU5D_t1476* L_12 = V_0;
		CultureInfo_t783 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		bool L_14 = Binder_ConvertArgs_m21861(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t726 * L_15 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_15, (String_t*) &_stringLiteral5573, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		ObjectU5BU5D_t697* L_16 = ___parameters;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m4220((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t1476* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_20, L_22)));
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_20, L_22)));
		if ((((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t726 * L_24 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_24, (String_t*) &_stringLiteral5572, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		ParameterInfoU5BU5D_t1476* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5244_il2cpp_TypeInfo_var);
		bool L_28 = SecurityManager_get_SecurityEnabled_m23253(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5244_il2cpp_TypeInfo_var);
		SecurityManager_ReflectedLinkDemandInvoke_m23267(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0090:
	{
		Object_t * L_29 = ___obj;
		if (L_29)
		{
			goto IL_00bb;
		}
	}
	{
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		NullCheck(L_30);
		bool L_31 = (bool)VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_30);
		if (!L_31)
		{
			goto IL_00bb;
		}
	}
	{
		Type_t * L_32 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m4033(NULL /*static, unused*/, (String_t*) &_stringLiteral5578, L_32, (String_t*) &_stringLiteral5579, /*hidden argument*/NULL);
		MemberAccessException_t4885 * L_34 = (MemberAccessException_t4885 *)il2cpp_codegen_object_new (MemberAccessException_t4885_il2cpp_TypeInfo_var);
		MemberAccessException__ctor_m20486(L_34, L_33, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_34);
	}

IL_00bb:
	{
		int32_t L_35 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_35&(int32_t)((int32_t)512))))
		{
			goto IL_00e7;
		}
	}
	{
		Type_t * L_36 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		NullCheck(L_36);
		bool L_37 = (bool)VirtFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Type::get_IsAbstract() */, L_36);
		if (!L_37)
		{
			goto IL_00e7;
		}
	}
	{
		Type_t * L_38 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoCMethod::get_DeclaringType() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Format_m4270(NULL /*static, unused*/, (String_t*) &_stringLiteral5580, L_38, /*hidden argument*/NULL);
		MemberAccessException_t4885 * L_40 = (MemberAccessException_t4885 *)il2cpp_codegen_object_new (MemberAccessException_t4885_il2cpp_TypeInfo_var);
		MemberAccessException__ctor_m20486(L_40, L_39, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	}

IL_00e7:
	{
		V_2 = (Exception_t57 *)NULL;
		V_3 = NULL;
	}

IL_00eb:
	try
	{ // begin try (depth: 1)
		Object_t * L_41 = ___obj;
		ObjectU5BU5D_t697* L_42 = ___parameters;
		Object_t * L_43 = MonoCMethod_InternalInvoke_m22016(__this, L_41, L_42, (&V_2), /*hidden argument*/NULL);
		V_3 = L_43;
		goto IL_0105;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t57_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00f9;
		throw e;
	}

CATCH_00f9:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t57 *)__exception_local);
		Exception_t57 * L_44 = V_4;
		TargetInvocationException_t5040 * L_45 = (TargetInvocationException_t5040 *)il2cpp_codegen_object_new (TargetInvocationException_t5040_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m22093(L_45, L_44, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_45);
		goto IL_0105;
	} // end catch (depth: 1)

IL_0105:
	{
		Exception_t57 * L_46 = V_2;
		if (!L_46)
		{
			goto IL_010a;
		}
	}
	{
		Exception_t57 * L_47 = V_2;
		il2cpp_codegen_raise_exception(L_47);
	}

IL_010a:
	{
		Object_t * L_48 = ___obj;
		if (L_48)
		{
			goto IL_0110;
		}
	}
	{
		Object_t * L_49 = V_3;
		G_B32_0 = L_49;
		goto IL_0111;
	}

IL_0110:
	{
		G_B32_0 = NULL;
	}

IL_0111:
	{
		return G_B32_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m22018 (MonoCMethod_t5026 * __this, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		int32_t L_0 = ___invokeAttr;
		Binder_t2971 * L_1 = ___binder;
		ObjectU5BU5D_t697* L_2 = ___parameters;
		CultureInfo_t783 * L_3 = ___culture;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(18 /* System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4908  MonoCMethod_get_MethodHandle_m22019 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t4908  L_1 = {0};
		RuntimeMethodHandle__ctor_m20703(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m22020 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m21976(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m22021 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m21977(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m22022 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m22023 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m21974(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m22024 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m21983(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool MonoCMethod_IsDefined_m22025 (MonoCMethod_t5026 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoCMethod_GetCustomAttributes_m22026 (MonoCMethod_t5026 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_1 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoCMethod_GetCustomAttributes_m22027 (MonoCMethod_t5026 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern TypeInfo* StringBuilder_t261_il2cpp_TypeInfo_var;
extern "C" String_t* MonoCMethod_ToString_m22028 (MonoCMethod_t5026 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringBuilder_t261_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(266);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t261 * V_0 = {0};
	ParameterInfoU5BU5D_t1476* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t261 * L_0 = (StringBuilder_t261 *)il2cpp_codegen_object_new (StringBuilder_t261_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m4000(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t261 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m4007(L_1, (String_t*) &_stringLiteral5581, /*hidden argument*/NULL);
		StringBuilder_t261 * L_2 = V_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoCMethod::get_Name() */, __this);
		NullCheck(L_2);
		StringBuilder_Append_m4007(L_2, L_3, /*hidden argument*/NULL);
		StringBuilder_t261 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m4007(L_4, (String_t*) &_stringLiteral2045, /*hidden argument*/NULL);
		ParameterInfoU5BU5D_t1476* L_5 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters() */, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t261 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m4007(L_7, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
	}

IL_0046:
	{
		StringBuilder_t261 * L_8 = V_0;
		ParameterInfoU5BU5D_t1476* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_9, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_9, L_11)));
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		NullCheck(L_8);
		StringBuilder_Append_m4007(L_8, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		ParameterInfoU5BU5D_t1476* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention() */, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t261 * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_Append_m4007(L_18, (String_t*) &_stringLiteral5582, /*hidden argument*/NULL);
	}

IL_0079:
	{
		StringBuilder_t261 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m4007(L_19, (String_t*) &_stringLiteral1259, /*hidden argument*/NULL);
		StringBuilder_t261 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Text.StringBuilder::ToString() */, L_20);
		return L_21;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m22029 (MonoCMethod_t5026 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoCMethod::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoCMethod::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoCMethod::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m21890(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C" void MonoPropertyInfo_get_property_info_m22030 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t5029 * ___info, int32_t ___req_info, const MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m22030_ftn) (MonoProperty_t *, MonoPropertyInfo_t5029 *, int32_t);
	static MonoPropertyInfo_get_property_info_m22030_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m22030_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C" TypeU5BU5D_t1221* MonoPropertyInfo_GetTypeModifiers_m22031 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, const MethodInfo* method)
{
	typedef TypeU5BU5D_t1221* (*MonoPropertyInfo_GetTypeModifiers_m22031_ftn) (MonoProperty_t *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m22031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m22031_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern "C" void GetterAdapter__ctor_m22032 (GetterAdapter_t5031 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern "C" Object_t * GetterAdapter_Invoke_m22033 (GetterAdapter_t5031 * __this, Object_t * ____this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m22033((GetterAdapter_t5031 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t5031(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C" Object_t * GetterAdapter_BeginInvoke_m22034 (GetterAdapter_t5031 * __this, Object_t * ____this, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern "C" Object_t * GetterAdapter_EndInvoke_m22035 (GetterAdapter_t5031 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void System.Reflection.MonoProperty::.ctor()
extern "C" void MonoProperty__ctor_m22036 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		PropertyInfo__ctor_m22078(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m22037 (MonoProperty_t * __this, int32_t ___flags, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		int32_t L_1 = ___flags;
		int32_t L_2 = ___flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_3 = &(__this->___info_2);
		int32_t L_4 = ___flags;
		MonoPropertyInfo_get_property_info_m22030(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		int32_t L_5 = (__this->___cached_3);
		int32_t L_6 = ___flags;
		__this->___cached_3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C" int32_t MonoProperty_get_Attributes_m22038 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 1, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C" bool MonoProperty_get_CanRead_m22039 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 2, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C" bool MonoProperty_get_CanWrite_m22040 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 4, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m22041 (MonoProperty_t * __this, const MethodInfo* method)
{
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t5029 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t1476* L_7 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_0 = L_7;
		ParameterInfoU5BU5D_t1476* L_8 = V_0;
		ParameterInfoU5BU5D_t1476* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_8, L_10)));
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m22042 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 8, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C" Type_t * MonoProperty_get_DeclaringType_m22043 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, ((int32_t)16), /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m22044 (MonoProperty_t * __this, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, ((int32_t)32), /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern TypeInfo* MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t2160* MonoProperty_GetAccessors_m22045 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9078);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t2160* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m22037(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t5029 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = ___nonPublic;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_9 = &(__this->___info_2);
		MethodInfo_t * L_10 = (L_9->___get_method_2);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((MethodInfoU5BU5D_t2160*)SZArrayNew(MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		MonoPropertyInfo_t5029 * L_18 = &(__this->___info_2);
		MethodInfo_t * L_19 = (L_18->___set_method_3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
		ArrayElementTypeCheck (L_15, L_19);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_15, L_17)) = (MethodInfo_t *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfoU5BU5D_t2160* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		MonoPropertyInfo_t5029 * L_24 = &(__this->___info_2);
		MethodInfo_t * L_25 = (L_24->___get_method_2);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_25);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_21, L_23)) = (MethodInfo_t *)L_25;
	}

IL_0088:
	{
		MethodInfoU5BU5D_t2160* L_26 = V_2;
		return L_26;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m22046 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 2, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___get_method_2);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t5029 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern TypeInfo* ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t1401_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1476* MonoProperty_GetIndexParameters_m22047 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ParameterInfo_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	ParameterInfoU5BU5D_t1476* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t1401 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 6, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t1476* L_4 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t5029 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_7 = &(__this->___info_2);
		MethodInfo_t * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t1476* L_9 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_8);
		V_1 = L_9;
		ParameterInfoU5BU5D_t1476* L_10 = V_1;
		NullCheck(L_10);
		V_0 = ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))));
		ParameterInfoU5BU5D_t1476* L_11 = V_1;
		ParameterInfoU5BU5D_t1476* L_12 = V_0;
		ParameterInfoU5BU5D_t1476* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/NULL);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		ParameterInfoU5BU5D_t1476* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_3 = (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_14, L_16));
		ParameterInfoU5BU5D_t1476* L_17 = V_0;
		int32_t L_18 = V_2;
		ParameterInfo_t1401 * L_19 = V_3;
		ParameterInfo_t1401 * L_20 = (ParameterInfo_t1401 *)il2cpp_codegen_object_new (ParameterInfo_t1401_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m22062(L_20, L_19, __this, /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_20);
		*((ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_17, L_18)) = (ParameterInfo_t1401 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		ParameterInfoU5BU5D_t1476* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_24 = V_0;
		return L_24;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m22048 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m22037(__this, 4, /*hidden argument*/NULL);
		MonoPropertyInfo_t5029 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t5029 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsPublic() */, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t5029 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___set_method_3);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool MonoProperty_IsDefined_m22049 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_1 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoProperty_GetCustomAttributes_m22050 (MonoProperty_t * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_0 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MonoProperty_GetCustomAttributes_m22051 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_1 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern const Il2CppType* StaticGetter_1_t5435_0_0_0_var;
extern const Il2CppType* Getter_2_t5436_0_0_0_var;
extern const Il2CppType* MonoProperty_t_0_0_0_var;
extern const Il2CppType* GetterAdapter_t5031_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* GetterAdapter_t5031_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t5031 * MonoProperty_CreateGetterDelegate_m22052 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StaticGetter_1_t5435_0_0_0_var = il2cpp_codegen_type_from_index(9079);
		Getter_2_t5436_0_0_0_var = il2cpp_codegen_type_from_index(9080);
		MonoProperty_t_0_0_0_var = il2cpp_codegen_type_from_index(8993);
		GetterAdapter_t5031_0_0_0_var = il2cpp_codegen_type_from_index(9081);
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		GetterAdapter_t5031_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9081);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		MethodInfo_t * L_0 = ___method;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t1221* L_2 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, 1));
		MethodInfo_t * L_3 = ___method;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(StaticGetter_1_t5435_0_0_0_var), /*hidden argument*/NULL);
		V_4 = L_5;
		V_5 = (String_t*) &_stringLiteral5583;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t1221* L_6 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, 2));
		MethodInfo_t * L_7 = ___method;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_8;
		TypeU5BU5D_t1221* L_9 = L_6;
		MethodInfo_t * L_10 = ___method;
		NullCheck(L_10);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 1)) = (Type_t *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Getter_2_t5436_0_0_0_var), /*hidden argument*/NULL);
		V_4 = L_12;
		V_5 = (String_t*) &_stringLiteral5584;
	}

IL_0059:
	{
		Type_t * L_13 = V_4;
		TypeU5BU5D_t1221* L_14 = V_0;
		NullCheck(L_13);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1221* >::Invoke(86 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_13, L_14);
		V_1 = L_15;
		Type_t * L_16 = V_1;
		MethodInfo_t * L_17 = ___method;
		Delegate_t739 * L_18 = Delegate_CreateDelegate_m19052(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(MonoProperty_t_0_0_0_var), /*hidden argument*/NULL);
		String_t* L_20 = V_5;
		NullCheck(L_19);
		MethodInfo_t * L_21 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_19, L_20, ((int32_t)40));
		V_3 = L_21;
		MethodInfo_t * L_22 = V_3;
		TypeU5BU5D_t1221* L_23 = V_0;
		NullCheck(L_22);
		MethodInfo_t * L_24 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t1221* >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_22, L_23);
		V_3 = L_24;
		Type_t * L_25 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(GetterAdapter_t5031_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_26 = V_2;
		MethodInfo_t * L_27 = V_3;
		Delegate_t739 * L_28 = Delegate_CreateDelegate_m19050(NULL /*static, unused*/, L_25, L_26, L_27, 1, /*hidden argument*/NULL);
		return ((GetterAdapter_t5031 *)Castclass(L_28, GetterAdapter_t5031_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoProperty_GetValue_m22053 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	{
		ObjectU5BU5D_t697* L_0 = ___index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t697* L_1 = ___index;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_006b;
		}
	}

IL_0008:
	{
		GetterAdapter_t5031 * L_2 = (__this->___cached_getter_4);
		if (L_2)
		{
			goto IL_005e;
		}
	}
	{
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoProperty::get_DeclaringType() */, __this);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_3);
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean) */, __this, 1);
		V_0 = L_5;
		MethodInfo_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5585, L_7, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_9 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0043:
	{
		MethodInfo_t * L_10 = V_0;
		GetterAdapter_t5031 * L_11 = MonoProperty_CreateGetterDelegate_m22052(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->___cached_getter_4 = L_11;
		GetterAdapter_t5031 * L_12 = (__this->___cached_getter_4);
		Object_t * L_13 = ___obj;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(12 /* System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object) */, L_12, L_13);
		return L_14;
	}

IL_005c:
	{
		goto IL_006b;
	}

IL_005e:
	{
		GetterAdapter_t5031 * L_15 = (__this->___cached_getter_4);
		Object_t * L_16 = ___obj;
		NullCheck(L_15);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(12 /* System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object) */, L_15, L_16);
		return L_17;
	}

IL_006b:
	{
		Object_t * L_18 = ___obj;
		ObjectU5BU5D_t697* L_19 = ___index;
		Object_t * L_20 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(24 /* System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_18, 0, (Binder_t2971 *)NULL, L_19, (CultureInfo_t783 *)NULL);
		return L_20;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* SecurityException_t4581_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t5040_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoProperty_GetValue_m22054 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___index, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		SecurityException_t4581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7845);
		TargetInvocationException_t5040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9076);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	SecurityException_t4581 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean) */, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5585, L_2, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_4 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t697* L_5 = ___index;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			ObjectU5BU5D_t697* L_6 = ___index;
			NullCheck(L_6);
			if ((((int32_t)(((Array_t *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			MethodInfo_t * L_7 = V_1;
			Object_t * L_8 = ___obj;
			int32_t L_9 = ___invokeAttr;
			Binder_t2971 * L_10 = ___binder;
			CultureInfo_t783 * L_11 = ___culture;
			NullCheck(L_7);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(18 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_7, L_8, L_9, L_10, (ObjectU5BU5D_t697*)(ObjectU5BU5D_t697*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			MethodInfo_t * L_13 = V_1;
			Object_t * L_14 = ___obj;
			int32_t L_15 = ___invokeAttr;
			Binder_t2971 * L_16 = ___binder;
			ObjectU5BU5D_t697* L_17 = ___index;
			CultureInfo_t783 * L_18 = ___culture;
			NullCheck(L_13);
			Object_t * L_19 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(18 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SecurityException_t4581_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t4581 *)__exception_local);
		SecurityException_t4581 * L_20 = V_2;
		TargetInvocationException_t5040 * L_21 = (TargetInvocationException_t5040 *)il2cpp_codegen_object_new (TargetInvocationException_t5040_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m22093(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		Object_t * L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m22055 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___index, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	ObjectU5BU5D_t697* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean) */, __this, 1);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5586, L_2, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_4 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_4, L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		ObjectU5BU5D_t697* L_5 = ___index;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t697* L_6 = ___index;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t697* L_7 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 1));
		Object_t * L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		ObjectU5BU5D_t697* L_9 = ___index;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		ObjectU5BU5D_t697* L_11 = ___index;
		ObjectU5BU5D_t697* L_12 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_11, (Array_t *)(Array_t *)L_12, 0);
		ObjectU5BU5D_t697* L_13 = V_1;
		int32_t L_14 = V_2;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_15;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_0;
		Object_t * L_17 = ___obj;
		int32_t L_18 = ___invokeAttr;
		Binder_t2971 * L_19 = ___binder;
		ObjectU5BU5D_t697* L_20 = V_1;
		CultureInfo_t783 * L_21 = ___culture;
		NullCheck(L_16);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(18 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoProperty_ToString_m22056 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.MonoProperty::get_PropertyType() */, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral944, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* MonoProperty_GetOptionalCustomModifiers_m22057 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	{
		TypeU5BU5D_t1221* L_0 = MonoPropertyInfo_GetTypeModifiers_m22031(NULL /*static, unused*/, __this, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		TypeU5BU5D_t1221* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_2 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t1221* L_3 = V_0;
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* MonoProperty_GetRequiredCustomModifiers_m22058 (MonoProperty_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	{
		TypeU5BU5D_t1221* L_0 = MonoPropertyInfo_GetTypeModifiers_m22031(NULL /*static, unused*/, __this, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		TypeU5BU5D_t1221* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_2 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t1221* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoProperty_GetObjectData_m22059 (MonoProperty_t * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoProperty::get_Name() */, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MonoProperty::get_ReflectedType() */, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Reflection.MonoProperty::ToString() */, __this);
		MemberInfoSerializationHolder_Serialize_m21890(NULL /*static, unused*/, L_0, L_1, L_2, L_3, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"


// System.Void System.Reflection.ParameterInfo::.ctor()
extern "C" void ParameterInfo__ctor_m22060 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C" void ParameterInfo__ctor_m22061 (ParameterInfo_t1401 * __this, ParameterBuilder_t5080 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->___ClassImpl_0 = L_0;
		MemberInfo_t * L_1 = ___member;
		__this->___MemberImpl_2 = L_1;
		ParameterBuilder_t5080 * L_2 = ___pb;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		ParameterBuilder_t5080 * L_3 = ___pb;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Reflection.Emit.ParameterBuilder::get_Name() */, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterBuilder_t5080 * L_5 = ___pb;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position() */, L_5);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		ParameterBuilder_t5080 * L_7 = ___pb;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes() */, L_7);
		__this->___AttrsImpl_5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		int32_t L_9 = ___position;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m22062 (ParameterInfo_t1401 * __this, ParameterInfo_t1401 * ___pinfo, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ParameterInfo_t1401 * L_0 = ___pinfo;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		__this->___ClassImpl_0 = L_1;
		MemberInfo_t * L_2 = ___member;
		__this->___MemberImpl_2 = L_2;
		ParameterInfo_t1401 * L_3 = ___pinfo;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.ParameterInfo::get_Name() */, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterInfo_t1401 * L_5 = ___pinfo;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Reflection.ParameterInfo::get_Position() */, L_5);
		__this->___PositionImpl_4 = L_6;
		ParameterInfo_t1401 * L_7 = ___pinfo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, L_7);
		__this->___AttrsImpl_5 = L_8;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern const Il2CppType* Void_t85_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern "C" String_t* ParameterInfo_ToString_m22063 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Void_t85_0_0_0_var = il2cpp_codegen_type_from_index(62);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_7 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Void_t85_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_9 = (__this->___ClassImpl_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_9);
		MemberInfo_t * L_11 = (__this->___MemberImpl_2);
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m456(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = (__this->___ClassImpl_0);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_18 = (__this->___ClassImpl_0);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = ParameterInfo_get_IsRetval_m22069(__this, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		Object_t * L_23 = Box(Char_t60_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m409(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		String_t* L_25 = V_2;
		String_t* L_26 = (__this->___NameImpl_3);
		String_t* L_27 = String_Concat_m408(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_0095:
	{
		String_t* L_28 = V_2;
		return L_28;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m22064 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m22065 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m22066 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m22067 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m22068 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m22069 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes() */, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern "C" MemberInfo_t * ParameterInfo_get_Member_m22070 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m22071 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m22072 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* ParameterInfo_GetCustomAttributes_m22073 (ParameterInfo_t1401 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_2 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool ParameterInfo_IsDefined_m22074 (ParameterInfo_t1401 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_2 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* InAttribute_t4735_il2cpp_TypeInfo_var;
extern TypeInfo* OptionalAttribute_t4739_il2cpp_TypeInfo_var;
extern TypeInfo* OutAttribute_t4732_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* ParameterInfo_GetPseudoCustomAttributes_m22075 (ParameterInfo_t1401 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		InAttribute_t4735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9082);
		OptionalAttribute_t4739_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9083);
		OutAttribute_t4732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9084);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t697* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m22066(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ParameterInfo_get_IsOut_m22068(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = ParameterInfo_get_IsOptional_m22067(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t5033 * L_6 = (__this->___marshalAs_6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t697*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = ParameterInfo_get_IsIn_m22066(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t697* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		InAttribute_t4735 * L_14 = (InAttribute_t4735 *)il2cpp_codegen_object_new (InAttribute_t4735_il2cpp_TypeInfo_var);
		InAttribute__ctor_m19281(L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_0054:
	{
		bool L_15 = ParameterInfo_get_IsOptional_m22067(__this, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ObjectU5BU5D_t697* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		OptionalAttribute_t4739 * L_19 = (OptionalAttribute_t4739 *)il2cpp_codegen_object_new (OptionalAttribute_t4739_il2cpp_TypeInfo_var);
		OptionalAttribute__ctor_m19284(L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)) = (Object_t *)L_19;
	}

IL_0068:
	{
		bool L_20 = ParameterInfo_get_IsOut_m22068(__this, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t697* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		OutAttribute_t4732 * L_24 = (OutAttribute_t4732 *)il2cpp_codegen_object_new (OutAttribute_t4732_il2cpp_TypeInfo_var);
		OutAttribute__ctor_m19277(L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23)) = (Object_t *)L_24;
	}

IL_007c:
	{
		UnmanagedMarshal_t5033 * L_25 = (__this->___marshalAs_6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_t697* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		UnmanagedMarshal_t5033 * L_29 = (__this->___marshalAs_6);
		NullCheck(L_29);
		MarshalAsAttribute_t4734 * L_30 = UnmanagedMarshal_ToMarshalAsAttribute_m22542(L_29, /*hidden argument*/NULL);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		ArrayElementTypeCheck (L_26, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)) = (Object_t *)L_30;
	}

IL_0096:
	{
		ObjectU5BU5D_t697* L_31 = V_1;
		return L_31;
	}
}
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t5034_marshal(const ParameterModifier_t5034& unmarshaled, ParameterModifier_t5034_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
void ParameterModifier_t5034_marshal_back(const ParameterModifier_t5034_marshaled& marshaled, ParameterModifier_t5034& unmarshaled)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		s_Il2CppMethodIntialized = true;
	}
	unmarshaled.____byref_0 = (BooleanU5BU5D_t487*)il2cpp_codegen_marshal_array_result(Boolean_t59_il2cpp_TypeInfo_var, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t5034_marshal_cleanup(ParameterModifier_t5034_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"



// System.Void System.Reflection.Pointer::.ctor()
extern "C" void Pointer__ctor_m22076 (Pointer_t5035 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m22077 (Pointer_t5035 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5587, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m22078 (PropertyInfo_t * __this, const MethodInfo* method)
{
	{
		MemberInfo__ctor_m19263(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern "C" int32_t PropertyInfo_get_MemberType_m22079 (PropertyInfo_t * __this, const MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C" MethodInfo_t * PropertyInfo_GetGetMethod_m22080 (PropertyInfo_t * __this, const MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, __this, 0);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyInfo_GetValue_m22081 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___index, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t697* L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, 0, (Binder_t2971 *)NULL, L_1, (CultureInfo_t783 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyInfo_SetValue_m22082 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t697* ___index, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		ObjectU5BU5D_t697* L_2 = ___index;
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t2971 *, ObjectU5BU5D_t697*, CultureInfo_t783 * >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, __this, L_0, L_1, 0, (Binder_t2971 *)NULL, L_2, (CultureInfo_t783 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* PropertyInfo_GetOptionalCustomModifiers_m22083 (PropertyInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* PropertyInfo_GetRequiredCustomModifiers_m22084 (PropertyInfo_t * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_0 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Reflection.ResourceAttributes
#include "mscorlib_System_Reflection_ResourceAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ResourceAttributes
#include "mscorlib_System_Reflection_ResourceAttributesMethodDeclarations.h"



// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"

// System.Byte
#include "mscorlib_System_Byte.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Security.Cryptography.CspParameters
#include "mscorlib_System_Security_Cryptography_CspParameters.h"
// System.Security.Cryptography.RSACryptoServiceProvider
#include "mscorlib_System_Security_Cryptography_RSACryptoServiceProvid.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// System.Security.Cryptography.CspParameters
#include "mscorlib_System_Security_Cryptography_CspParametersMethodDeclarations.h"
// System.Security.Cryptography.RSACryptoServiceProvider
#include "mscorlib_System_Security_Cryptography_RSACryptoServiceProvidMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"


// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ByteU5BU5D_t66_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m22085 (StrongNameKeyPair_t5009 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_0_0_0_var = il2cpp_codegen_type_from_index(254);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t66_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m14773(L_0, (String_t*) &_stringLiteral5588, L_1, /*hidden argument*/NULL);
		__this->____publicKey_0 = ((ByteU5BU5D_t66*)Castclass(L_2, ByteU5BU5D_t66_il2cpp_TypeInfo_var));
		SerializationInfo_t2937 * L_3 = ___info;
		NullCheck(L_3);
		String_t* L_4 = SerializationInfo_GetString_m12085(L_3, (String_t*) &_stringLiteral5589, /*hidden argument*/NULL);
		__this->____keyPairContainer_1 = L_4;
		SerializationInfo_t2937 * L_5 = ___info;
		NullCheck(L_5);
		bool L_6 = SerializationInfo_GetBoolean_m14832(L_5, (String_t*) &_stringLiteral5590, /*hidden argument*/NULL);
		__this->____keyPairExported_2 = L_6;
		SerializationInfo_t2937 * L_7 = ___info;
		Type_t * L_8 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t66_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m14773(L_7, (String_t*) &_stringLiteral5591, L_8, /*hidden argument*/NULL);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t66*)Castclass(L_9, ByteU5BU5D_t66_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* ByteU5BU5D_t66_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m22086 (StrongNameKeyPair_t5009 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_0_0_0_var = il2cpp_codegen_type_from_index(254);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2937 * L_0 = ___info;
		ByteU5BU5D_t66* L_1 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t66_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m18033(L_0, (String_t*) &_stringLiteral5588, (Object_t *)(Object_t *)L_1, L_2, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_3 = ___info;
		String_t* L_4 = (__this->____keyPairContainer_1);
		NullCheck(L_3);
		SerializationInfo_AddValue_m11527(L_3, (String_t*) &_stringLiteral5589, L_4, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_5 = ___info;
		bool L_6 = (__this->____keyPairExported_2);
		NullCheck(L_5);
		SerializationInfo_AddValue_m14833(L_5, (String_t*) &_stringLiteral5590, L_6, /*hidden argument*/NULL);
		SerializationInfo_t2937 * L_7 = ___info;
		ByteU5BU5D_t66* L_8 = (__this->____keyPairArray_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ByteU5BU5D_t66_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m18033(L_7, (String_t*) &_stringLiteral5591, (Object_t *)(Object_t *)L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m22087 (StrongNameKeyPair_t5009 * __this, Object_t * ___sender, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CspParameters_t3258_il2cpp_TypeInfo_var;
extern TypeInfo* RSACryptoServiceProvider_t3259_il2cpp_TypeInfo_var;
extern "C" RSA_t3144 * StrongNameKeyPair_GetRSA_m22088 (StrongNameKeyPair_t5009 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CspParameters_t3258_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5416);
		RSACryptoServiceProvider_t3259_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5417);
		s_Il2CppMethodIntialized = true;
	}
	CspParameters_t3258 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RSA_t3144 * L_0 = (__this->____rsa_4);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		RSA_t3144 * L_1 = (__this->____rsa_4);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t66* L_2 = (__this->____keyPairArray_3);
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t66* L_3 = (__this->____keyPairArray_3);
		RSA_t3144 * L_4 = CryptoConvert_FromCapiKeyBlob_m19633(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->____rsa_4 = L_4;
		goto IL_0034;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		__this->____keyPairArray_3 = (ByteU5BU5D_t66*)NULL;
		goto IL_0034;
	} // end catch (depth: 1)

IL_0034:
	{
		goto IL_005c;
	}

IL_0036:
	{
		String_t* L_5 = (__this->____keyPairContainer_1);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		CspParameters_t3258 * L_6 = (CspParameters_t3258 *)il2cpp_codegen_object_new (CspParameters_t3258_il2cpp_TypeInfo_var);
		CspParameters__ctor_m11497(L_6, /*hidden argument*/NULL);
		V_0 = L_6;
		CspParameters_t3258 * L_7 = V_0;
		String_t* L_8 = (__this->____keyPairContainer_1);
		NullCheck(L_7);
		L_7->___KeyContainerName_1 = L_8;
		CspParameters_t3258 * L_9 = V_0;
		RSACryptoServiceProvider_t3259 * L_10 = (RSACryptoServiceProvider_t3259 *)il2cpp_codegen_object_new (RSACryptoServiceProvider_t3259_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m11499(L_10, L_9, /*hidden argument*/NULL);
		__this->____rsa_4 = L_10;
	}

IL_005c:
	{
		RSA_t3144 * L_11 = (__this->____rsa_4);
		return L_11;
	}
}
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern TypeInfo* StrongName_t4789_il2cpp_TypeInfo_var;
extern "C" StrongName_t4789 * StrongNameKeyPair_StrongName_m22089 (StrongNameKeyPair_t5009 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StrongName_t4789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8914);
		s_Il2CppMethodIntialized = true;
	}
	RSA_t3144 * V_0 = {0};
	{
		RSA_t3144 * L_0 = StrongNameKeyPair_GetRSA_m22088(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		RSA_t3144 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RSA_t3144 * L_2 = V_0;
		StrongName_t4789 * L_3 = (StrongName_t4789 *)il2cpp_codegen_object_new (StrongName_t4789_il2cpp_TypeInfo_var);
		StrongName__ctor_m19566(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0011:
	{
		ByteU5BU5D_t66* L_4 = (__this->____publicKey_0);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_t66* L_5 = (__this->____publicKey_0);
		StrongName_t4789 * L_6 = (StrongName_t4789 *)il2cpp_codegen_object_new (StrongName_t4789_il2cpp_TypeInfo_var);
		StrongName__ctor_m19565(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0025:
	{
		return (StrongName_t4789 *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.ApplicationException
#include "mscorlib_System_ApplicationExceptionMethodDeclarations.h"


// System.Void System.Reflection.TargetException::.ctor()
extern "C" void TargetException__ctor_m22090 (TargetException_t5039 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m19300(NULL /*static, unused*/, (String_t*) &_stringLiteral5592, /*hidden argument*/NULL);
		ApplicationException__ctor_m15195(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern "C" void TargetException__ctor_m22091 (TargetException_t5039 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ApplicationException__ctor_m15195(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetException__ctor_m22092 (TargetException_t5039 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		StreamingContext_t2938  L_1 = ___context;
		ApplicationException__ctor_m19979(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m22093 (TargetInvocationException_t5040 * __this, Exception_t57 * ___inner, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ___inner;
		ApplicationException__ctor_m19978(__this, (String_t*) &_stringLiteral5593, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.String,System.Exception)
extern "C" void TargetInvocationException__ctor_m22094 (TargetInvocationException_t5040 * __this, String_t* ___message, Exception_t57 * ___inner, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception_t57 * L_1 = ___inner;
		ApplicationException__ctor_m19978(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m22095 (TargetInvocationException_t5040 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		StreamingContext_t2938  L_1 = ___sc;
		ApplicationException__ctor_m19979(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m22096 (TargetParameterCountException_t5041 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m19300(NULL /*static, unused*/, (String_t*) &_stringLiteral5594, /*hidden argument*/NULL);
		ApplicationException__ctor_m15195(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m22097 (TargetParameterCountException_t5041 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		ApplicationException__ctor_m15195(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetParameterCountException__ctor_m22098 (TargetParameterCountException_t5041 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		StreamingContext_t2938  L_1 = ___context;
		ApplicationException__ctor_m19979(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Reflection.TypeDelegator
#include "mscorlib_System_Reflection_TypeDelegator.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TypeDelegator
#include "mscorlib_System_Reflection_TypeDelegatorMethodDeclarations.h"



// System.Void System.Reflection.TypeDelegator::.ctor()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void TypeDelegator__ctor_m22099 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type__ctor_m19185(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C" Assembly_t784 * TypeDelegator_get_Assembly_m22100 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Assembly_t784 * L_1 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C" String_t* TypeDelegator_get_AssemblyQualifiedName_m22101 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C" Type_t * TypeDelegator_get_BaseType_m22102 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C" String_t* TypeDelegator_get_FullName_m22103 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C" Module_t5024 * TypeDelegator_get_Module_m22104 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C" String_t* TypeDelegator_get_Name_m22105 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C" String_t* TypeDelegator_get_Namespace_m22106 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4730  TypeDelegator_get_TypeHandle_m22107 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t4730  L_1 = (RuntimeTypeHandle_t4730 )VirtFuncInvoker0< RuntimeTypeHandle_t4730  >::Invoke(35 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C" Type_t * TypeDelegator_get_UnderlyingSystemType_m22108 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(36 /* System.Type System.Type::get_UnderlyingSystemType() */, L_0);
		return L_1;
	}
}
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C" int32_t TypeDelegator_GetAttributeFlagsImpl_m22109 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.TypeAttributes System.Type::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1399 * TypeDelegator_GetConstructorImpl_m22110 (TypeDelegator_t5043 * __this, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t2971 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t1221* L_4 = ___types;
		ParameterModifierU5BU5D_t2972* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t1399 * L_6 = (ConstructorInfo_t1399 *)VirtFuncInvoker5< ConstructorInfo_t1399 *, int32_t, Binder_t2971 *, int32_t, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(77 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1474* TypeDelegator_GetConstructors_m22111 (TypeDelegator_t5043 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1474* L_2 = (ConstructorInfoU5BU5D_t1474*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1474*, int32_t >::Invoke(79 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t697* TypeDelegator_GetCustomAttributes_m22112 (TypeDelegator_t5043 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_2 = (ObjectU5BU5D_t697*)VirtFuncInvoker1< ObjectU5BU5D_t697*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t697* TypeDelegator_GetCustomAttributes_m22113 (TypeDelegator_t5043 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_3 = (ObjectU5BU5D_t697*)VirtFuncInvoker2< ObjectU5BU5D_t697*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C" Type_t * TypeDelegator_GetElementType_m22114 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Type::GetElementType() */, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeDelegator_GetEvent_m22115 (TypeDelegator_t5043 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeDelegator_GetField_m22116 (TypeDelegator_t5043 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2968* TypeDelegator_GetFields_m22117 (TypeDelegator_t5043 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfoU5BU5D_t2968* L_2 = (FieldInfoU5BU5D_t2968*)VirtFuncInvoker1< FieldInfoU5BU5D_t2968*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C" TypeU5BU5D_t1221* TypeDelegator_GetInterfaces_m22118 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		TypeU5BU5D_t1221* L_1 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeDelegator_GetMethodImpl_m22119 (TypeDelegator_t5043 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		Binder_t2971 * L_3 = ___binder;
		int32_t L_4 = ___callConvention;
		TypeU5BU5D_t1221* L_5 = ___types;
		ParameterModifierU5BU5D_t2972* L_6 = ___modifiers;
		NullCheck(L_0);
		MethodInfo_t * L_7 = Type_GetMethodImplInternal_m19231(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2160* TypeDelegator_GetMethods_m22120 (TypeDelegator_t5043 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t2160* L_2 = (MethodInfoU5BU5D_t2160*)VirtFuncInvoker1< MethodInfoU5BU5D_t2160*, int32_t >::Invoke(56 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.TypeDelegator::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1473* TypeDelegator_GetProperties_m22121 (TypeDelegator_t5043 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1473* L_2 = (PropertyInfoU5BU5D_t1473*)VirtFuncInvoker1< PropertyInfoU5BU5D_t1473*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeDelegator_GetPropertyImpl_m22122 (TypeDelegator_t5043 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		Binder_t2971 * L_3 = ___binder;
		Type_t * L_4 = ___returnType;
		TypeU5BU5D_t1221* L_5 = ___types;
		ParameterModifierU5BU5D_t2972* L_6 = ___modifiers;
		NullCheck(L_0);
		PropertyInfo_t * L_7 = Type_GetPropertyImplInternal_m19238(L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C" bool TypeDelegator_HasElementTypeImpl_m22123 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeDelegator_InvokeMember_m22124 (TypeDelegator_t5043 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2971 * ___binder, Object_t * ___target, ObjectU5BU5D_t697* ___args, ParameterModifierU5BU5D_t2972* ___modifiers, CultureInfo_t783 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t2971 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t697* L_5 = ___args;
		ParameterModifierU5BU5D_t2972* L_6 = ___modifiers;
		CultureInfo_t783 * L_7 = ___culture;
		StringU5BU5D_t75* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t2971 *, Object_t *, ObjectU5BU5D_t697*, ParameterModifierU5BU5D_t2972*, CultureInfo_t783 *, StringU5BU5D_t75* >::Invoke(80 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C" bool TypeDelegator_IsArrayImpl_m22125 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Type::get_IsArray() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C" bool TypeDelegator_IsByRefImpl_m22126 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeDelegator_IsDefined_m22127 (TypeDelegator_t5043 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C" bool TypeDelegator_IsPointerImpl_m22128 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Type::get_IsPointer() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C" bool TypeDelegator_IsPrimitiveImpl_m22129 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C" bool TypeDelegator_IsValueTypeImpl_m22130 (TypeDelegator_t5043 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___typeImpl_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_0);
		return L_1;
	}
}
// System.Reflection.Emit.RefEmitPermissionSet
#include "mscorlib_System_Reflection_Emit_RefEmitPermissionSet.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.RefEmitPermissionSet
#include "mscorlib_System_Reflection_Emit_RefEmitPermissionSetMethodDeclarations.h"

// System.Security.Permissions.SecurityAction
#include "mscorlib_System_Security_Permissions_SecurityAction.h"


// System.Void System.Reflection.Emit.RefEmitPermissionSet::.ctor(System.Security.Permissions.SecurityAction,System.String)
extern "C" void RefEmitPermissionSet__ctor_m22131 (RefEmitPermissionSet_t5044 * __this, int32_t ___action, String_t* ___pset, const MethodInfo* method)
{
	{
		int32_t L_0 = ___action;
		__this->___action_0 = L_0;
		String_t* L_1 = ___pset;
		__this->___pset_1 = L_1;
		return;
	}
}
// Conversion methods for marshalling of: System.Reflection.Emit.RefEmitPermissionSet
void RefEmitPermissionSet_t5044_marshal(const RefEmitPermissionSet_t5044& unmarshaled, RefEmitPermissionSet_t5044_marshaled& marshaled)
{
	marshaled.___action_0 = unmarshaled.___action_0;
	marshaled.___pset_1 = il2cpp_codegen_marshal_string(unmarshaled.___pset_1);
}
void RefEmitPermissionSet_t5044_marshal_back(const RefEmitPermissionSet_t5044_marshaled& marshaled, RefEmitPermissionSet_t5044& unmarshaled)
{
	unmarshaled.___action_0 = marshaled.___action_0;
	unmarshaled.___pset_1 = il2cpp_codegen_marshal_string_result(marshaled.___pset_1);
}
// Conversion method for clean up from marshalling of: System.Reflection.Emit.RefEmitPermissionSet
void RefEmitPermissionSet_t5044_marshal_cleanup(RefEmitPermissionSet_t5044_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___pset_1);
	marshaled.___pset_1 = NULL;
}
// System.Reflection.Emit.MonoResource
#include "mscorlib_System_Reflection_Emit_MonoResource.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.MonoResource
#include "mscorlib_System_Reflection_Emit_MonoResourceMethodDeclarations.h"



// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"

// System.UInt32
#include "mscorlib_System_UInt32.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Reflection.Emit.PEFileKinds
#include "mscorlib_System_Reflection_Emit_PEFileKinds.h"
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Security.PermissionSet
#include "mscorlib_System_Security_PermissionSet.h"
// System.Security.SecurityElement
#include "mscorlib_System_Security_SecurityElement.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.IO.FileNotFoundException
#include "mscorlib_System_IO_FileNotFoundException.h"
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"
// System.Security.PermissionSet
#include "mscorlib_System_Security_PermissionSetMethodDeclarations.h"
// Replacements.SecurityElement
#include "replacements_Replacements_SecurityElementMethodDeclarations.h"
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.IO.FileNotFoundException
#include "mscorlib_System_IO_FileNotFoundExceptionMethodDeclarations.h"


// System.Void System.Reflection.Emit.AssemblyBuilder::.ctor(System.Reflection.AssemblyName,System.String,System.Reflection.Emit.AssemblyBuilderAccess,System.Boolean)
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* ValueType_t843_0_0_0_var;
extern const Il2CppType* Enum_t100_0_0_0_var;
extern const Il2CppType* Void_t85_0_0_0_var;
extern const Il2CppType* AssemblyBuilderAccess_t5051_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyBuilderAccess_t5051_il2cpp_TypeInfo_var;
extern TypeInfo* Enum_t100_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t783_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* StrongName_t4789_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void AssemblyBuilder__ctor_m22132 (AssemblyBuilder_t5050 * __this, AssemblyName_t1483 * ___n, String_t* ___directory, int32_t ___access, bool ___corlib_internal, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ValueType_t843_0_0_0_var = il2cpp_codegen_type_from_index(1367);
		Enum_t100_0_0_0_var = il2cpp_codegen_type_from_index(95);
		Void_t85_0_0_0_var = il2cpp_codegen_type_from_index(62);
		AssemblyBuilderAccess_t5051_0_0_0_var = il2cpp_codegen_type_from_index(9085);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		AssemblyBuilderAccess_t5051_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9085);
		Enum_t100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(95);
		CultureInfo_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		StrongName_t4789_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8914);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	Version_t1402 * V_0 = {0};
	ByteU5BU5D_t66* V_1 = {0};
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_t66* V_4 = {0};
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	{
		__this->___pekind_17 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		__this->___corlib_object_type_24 = L_0;
		Type_t * L_1 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ValueType_t843_0_0_0_var), /*hidden argument*/NULL);
		__this->___corlib_value_type_25 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Enum_t100_0_0_0_var), /*hidden argument*/NULL);
		__this->___corlib_enum_type_26 = L_2;
		Type_t * L_3 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Void_t85_0_0_0_var), /*hidden argument*/NULL);
		__this->___corlib_void_type_27 = L_3;
		Assembly__ctor_m21785(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___access;
		__this->___is_compiler_context_31 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)2048)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_5 = ___access;
		___access = ((int32_t)((int32_t)L_5&(int32_t)((int32_t)-2049)));
		Type_t * L_6 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(AssemblyBuilderAccess_t5051_0_0_0_var), /*hidden argument*/NULL);
		int32_t L_7 = ___access;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(AssemblyBuilderAccess_t5051_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t100_il2cpp_TypeInfo_var);
		bool L_10 = Enum_IsDefined_m11564(NULL /*static, unused*/, L_6, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00ab;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t783_il2cpp_TypeInfo_var);
		CultureInfo_t783 * L_11 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t697* L_12 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 1));
		int32_t L_13 = ___access;
		int32_t L_14 = L_13;
		Object_t * L_15 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 0)) = (Object_t *)L_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m11546(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral5595, L_12, /*hidden argument*/NULL);
		ArgumentException_t726 * L_17 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_17, L_16, (String_t*) &_stringLiteral5439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		AssemblyName_t1483 * L_18 = ___n;
		NullCheck(L_18);
		String_t* L_19 = AssemblyName_get_Name_m21826(L_18, /*hidden argument*/NULL);
		__this->___name_11 = L_19;
		int32_t L_20 = ___access;
		__this->___access_18 = L_20;
		AssemblyName_t1483 * L_21 = ___n;
		NullCheck(L_21);
		int32_t L_22 = AssemblyName_get_Flags_m21829(L_21, /*hidden argument*/NULL);
		__this->___flags_16 = L_22;
		bool L_23 = AssemblyBuilder_get_IsSave_m22141(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_24 = ___directory;
		if (!L_24)
		{
			goto IL_00dd;
		}
	}
	{
		String_t* L_25 = ___directory;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m410(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00ea;
		}
	}

IL_00dd:
	{
		String_t* L_27 = Directory_GetCurrentDirectory_m21467(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___dir_12 = L_27;
		goto IL_00f1;
	}

IL_00ea:
	{
		String_t* L_28 = ___directory;
		__this->___dir_12 = L_28;
	}

IL_00f1:
	{
		AssemblyName_t1483 * L_29 = ___n;
		NullCheck(L_29);
		CultureInfo_t783 * L_30 = AssemblyName_get_CultureInfo_m21828(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_011b;
		}
	}
	{
		AssemblyName_t1483 * L_31 = ___n;
		NullCheck(L_31);
		CultureInfo_t783 * L_32 = AssemblyName_get_CultureInfo_m21828(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.CultureInfo::get_Name() */, L_32);
		__this->___culture_15 = L_33;
		AssemblyName_t1483 * L_34 = ___n;
		NullCheck(L_34);
		CultureInfo_t783 * L_35 = AssemblyName_get_CultureInfo_m21828(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Globalization.CultureInfo::get_Name() */, L_35);
		__this->___versioninfo_culture_32 = L_36;
	}

IL_011b:
	{
		AssemblyName_t1483 * L_37 = ___n;
		NullCheck(L_37);
		Version_t1402 * L_38 = AssemblyName_get_Version_m7634(L_37, /*hidden argument*/NULL);
		V_0 = L_38;
		Version_t1402 * L_39 = V_0;
		bool L_40 = Version_op_Inequality_m18118(NULL /*static, unused*/, L_39, (Version_t1402 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0137;
		}
	}
	{
		Version_t1402 * L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Version::ToString() */, L_41);
		__this->___version_14 = L_42;
	}

IL_0137:
	{
		AssemblyName_t1483 * L_43 = ___n;
		NullCheck(L_43);
		StrongNameKeyPair_t5009 * L_44 = AssemblyName_get_KeyPair_m21831(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0152;
		}
	}
	{
		AssemblyName_t1483 * L_45 = ___n;
		NullCheck(L_45);
		StrongNameKeyPair_t5009 * L_46 = AssemblyName_get_KeyPair_m21831(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		StrongName_t4789 * L_47 = StrongNameKeyPair_StrongName_m22089(L_46, /*hidden argument*/NULL);
		__this->___sn_30 = L_47;
		goto IL_016e;
	}

IL_0152:
	{
		AssemblyName_t1483 * L_48 = ___n;
		NullCheck(L_48);
		ByteU5BU5D_t66* L_49 = AssemblyName_GetPublicKey_m21834(L_48, /*hidden argument*/NULL);
		V_1 = L_49;
		ByteU5BU5D_t66* L_50 = V_1;
		if (!L_50)
		{
			goto IL_016e;
		}
	}
	{
		ByteU5BU5D_t66* L_51 = V_1;
		NullCheck(L_51);
		if ((((int32_t)(((int32_t)(((Array_t *)L_51)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}
	{
		ByteU5BU5D_t66* L_52 = V_1;
		StrongName_t4789 * L_53 = (StrongName_t4789 *)il2cpp_codegen_object_new (StrongName_t4789_il2cpp_TypeInfo_var);
		StrongName__ctor_m19565(L_53, L_52, /*hidden argument*/NULL);
		__this->___sn_30 = L_53;
	}

IL_016e:
	{
		StrongName_t4789 * L_54 = (__this->___sn_30);
		if (!L_54)
		{
			goto IL_0184;
		}
	}
	{
		uint32_t L_55 = (__this->___flags_16);
		__this->___flags_16 = ((int32_t)((int32_t)L_55|(int32_t)1));
	}

IL_0184:
	{
		bool L_56 = ___corlib_internal;
		__this->___corlib_internal_22 = L_56;
		StrongName_t4789 * L_57 = (__this->___sn_30);
		if (!L_57)
		{
			goto IL_0211;
		}
	}
	{
		StrongName_t4789 * L_58 = (__this->___sn_30);
		NullCheck(L_58);
		ByteU5BU5D_t66* L_59 = StrongName_get_PublicKeyToken_m19571(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		__this->___pktoken_23 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_59)->max_length)))*(int32_t)2))));
		V_2 = 0;
		StrongName_t4789 * L_60 = (__this->___sn_30);
		NullCheck(L_60);
		ByteU5BU5D_t66* L_61 = StrongName_get_PublicKeyToken_m19571(L_60, /*hidden argument*/NULL);
		V_4 = L_61;
		V_5 = 0;
		goto IL_0209;
	}

IL_01c5:
	{
		ByteU5BU5D_t66* L_62 = V_4;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		V_3 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_62, L_64));
		String_t* L_65 = Byte_ToString_m7825((&V_3), (String_t*) &_stringLiteral1463, /*hidden argument*/NULL);
		V_6 = L_65;
		ByteU5BU5D_t66* L_66 = (__this->___pktoken_23);
		int32_t L_67 = V_2;
		int32_t L_68 = L_67;
		V_2 = ((int32_t)((int32_t)L_68+(int32_t)1));
		String_t* L_69 = V_6;
		NullCheck(L_69);
		uint16_t L_70 = String_get_Chars_m407(L_69, 0, /*hidden argument*/NULL);
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_68);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_66, L_68)) = (uint8_t)(((uint8_t)L_70));
		ByteU5BU5D_t66* L_71 = (__this->___pktoken_23);
		int32_t L_72 = V_2;
		int32_t L_73 = L_72;
		V_2 = ((int32_t)((int32_t)L_73+(int32_t)1));
		String_t* L_74 = V_6;
		NullCheck(L_74);
		uint16_t L_75 = String_get_Chars_m407(L_74, 1, /*hidden argument*/NULL);
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_71, L_73)) = (uint8_t)(((uint8_t)L_75));
		int32_t L_76 = V_5;
		V_5 = ((int32_t)((int32_t)L_76+(int32_t)1));
	}

IL_0209:
	{
		int32_t L_77 = V_5;
		ByteU5BU5D_t66* L_78 = V_4;
		NullCheck(L_78);
		if ((((int32_t)L_77) < ((int32_t)(((int32_t)(((Array_t *)L_78)->max_length))))))
		{
			goto IL_01c5;
		}
	}

IL_0211:
	{
		AssemblyBuilder_basic_init_m22133(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)
extern "C" void AssemblyBuilder_basic_init_m22133 (Object_t * __this /* static, unused */, AssemblyBuilder_t5050 * ___ab, const MethodInfo* method)
{
	typedef void (*AssemblyBuilder_basic_init_m22133_ftn) (AssemblyBuilder_t5050 *);
	static AssemblyBuilder_basic_init_m22133_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AssemblyBuilder_basic_init_m22133_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.AssemblyBuilder::basic_init(System.Reflection.Emit.AssemblyBuilder)");
	_il2cpp_icall_func(___ab);
}
// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern "C" String_t* AssemblyBuilder_get_Location_m22134 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = AssemblyBuilder_not_supported_m22145(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Reflection.Emit.AssemblyBuilder::AddPermissionRequests(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet)
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* RefEmitPermissionSetU5BU5D_t5048_il2cpp_TypeInfo_var;
extern "C" void AssemblyBuilder_AddPermissionRequests_m22135 (AssemblyBuilder_t5050 * __this, PermissionSet_t4834 * ___required, PermissionSet_t4834 * ___optional, PermissionSet_t4834 * ___refused, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		RefEmitPermissionSetU5BU5D_t5048_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9086);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___created_28);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1447 * L_1 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_1, (String_t*) &_stringLiteral5596, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		PermissionSet_t4834 * L_2 = ___required;
		((Assembly_t784 *)__this)->____minimum_3 = L_2;
		PermissionSet_t4834 * L_3 = ___optional;
		((Assembly_t784 *)__this)->____optional_4 = L_3;
		PermissionSet_t4834 * L_4 = ___refused;
		((Assembly_t784 *)__this)->____refuse_5 = L_4;
		PermissionSet_t4834 * L_5 = ___required;
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		__this->___permissions_minimum_19 = ((RefEmitPermissionSetU5BU5D_t5048*)SZArrayNew(RefEmitPermissionSetU5BU5D_t5048_il2cpp_TypeInfo_var, 1));
		RefEmitPermissionSetU5BU5D_t5048* L_6 = (__this->___permissions_minimum_19);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		PermissionSet_t4834 * L_7 = ___required;
		NullCheck(L_7);
		SecurityElement_t4828 * L_8 = (SecurityElement_t4828 *)VirtFuncInvoker0< SecurityElement_t4828 * >::Invoke(16 /* System.Security.SecurityElement System.Security.PermissionSet::ToXml() */, L_7);
		String_t* L_9 = SecurityElement_ToString_m12232(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		RefEmitPermissionSet_t5044  L_10 = {0};
		RefEmitPermissionSet__ctor_m22131(&L_10, 8, L_9, /*hidden argument*/NULL);
		*((RefEmitPermissionSet_t5044 *)(RefEmitPermissionSet_t5044 *)SZArrayLdElema(L_6, 0)) = L_10;
	}

IL_0059:
	{
		PermissionSet_t4834 * L_11 = ___optional;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		__this->___permissions_optional_20 = ((RefEmitPermissionSetU5BU5D_t5048*)SZArrayNew(RefEmitPermissionSetU5BU5D_t5048_il2cpp_TypeInfo_var, 1));
		RefEmitPermissionSetU5BU5D_t5048* L_12 = (__this->___permissions_optional_20);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		PermissionSet_t4834 * L_13 = ___optional;
		NullCheck(L_13);
		SecurityElement_t4828 * L_14 = (SecurityElement_t4828 *)VirtFuncInvoker0< SecurityElement_t4828 * >::Invoke(16 /* System.Security.SecurityElement System.Security.PermissionSet::ToXml() */, L_13);
		String_t* L_15 = SecurityElement_ToString_m12232(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		RefEmitPermissionSet_t5044  L_16 = {0};
		RefEmitPermissionSet__ctor_m22131(&L_16, ((int32_t)9), L_15, /*hidden argument*/NULL);
		*((RefEmitPermissionSet_t5044 *)(RefEmitPermissionSet_t5044 *)SZArrayLdElema(L_12, 0)) = L_16;
	}

IL_008b:
	{
		PermissionSet_t4834 * L_17 = ___refused;
		if (!L_17)
		{
			goto IL_00bd;
		}
	}
	{
		__this->___permissions_refused_21 = ((RefEmitPermissionSetU5BU5D_t5048*)SZArrayNew(RefEmitPermissionSetU5BU5D_t5048_il2cpp_TypeInfo_var, 1));
		RefEmitPermissionSetU5BU5D_t5048* L_18 = (__this->___permissions_refused_21);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		PermissionSet_t4834 * L_19 = ___refused;
		NullCheck(L_19);
		SecurityElement_t4828 * L_20 = (SecurityElement_t4828 *)VirtFuncInvoker0< SecurityElement_t4828 * >::Invoke(16 /* System.Security.SecurityElement System.Security.PermissionSet::ToXml() */, L_19);
		String_t* L_21 = SecurityElement_ToString_m12232(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		RefEmitPermissionSet_t5044  L_22 = {0};
		RefEmitPermissionSet__ctor_m22131(&L_22, ((int32_t)10), L_21, /*hidden argument*/NULL);
		*((RefEmitPermissionSet_t5044 *)(RefEmitPermissionSet_t5044 *)SZArrayLdElema(L_18, 0)) = L_22;
	}

IL_00bd:
	{
		return;
	}
}
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String)
extern "C" ModuleBuilder_t5049 * AssemblyBuilder_DefineDynamicModule_m22136 (AssemblyBuilder_t5050 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___name;
		ModuleBuilder_t5049 * L_2 = AssemblyBuilder_DefineDynamicModule_m22138(__this, L_0, L_1, 0, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.Boolean)
extern "C" ModuleBuilder_t5049 * AssemblyBuilder_DefineDynamicModule_m22137 (AssemblyBuilder_t5050 * __this, String_t* ___name, bool ___emitSymbolInfo, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___name;
		bool L_2 = ___emitSymbolInfo;
		ModuleBuilder_t5049 * L_3 = AssemblyBuilder_DefineDynamicModule_m22138(__this, L_0, L_1, L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::DefineDynamicModule(System.String,System.String,System.Boolean,System.Boolean)
extern TypeInfo* Path_t2161_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilderU5BU5D_t5046_il2cpp_TypeInfo_var;
extern "C" ModuleBuilder_t5049 * AssemblyBuilder_DefineDynamicModule_m22138 (AssemblyBuilder_t5050 * __this, String_t* ___name, String_t* ___fileName, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t2161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		ModuleBuilderU5BU5D_t5046_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9089);
		s_Il2CppMethodIntialized = true;
	}
	ModuleBuilder_t5049 * V_0 = {0};
	ModuleBuilderU5BU5D_t5046* V_1 = {0};
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ___fileName;
		AssemblyBuilder_check_name_and_filename_m22146(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		bool L_2 = ___transient;
		if (L_2)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_3 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2161_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_GetExtension_m21599(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		bool L_6 = String_op_Equality_m456(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_7 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5597, L_7, (String_t*) &_stringLiteral5598, /*hidden argument*/NULL);
		ArgumentException_t726 * L_9 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0035:
	{
		bool L_10 = AssemblyBuilder_get_IsSave_m22141(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		NotSupportedException_t56 * L_11 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_11, (String_t*) &_stringLiteral5599, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0048:
	{
		bool L_12 = (__this->___created_28);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		InvalidOperationException_t1447 * L_13 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_13, (String_t*) &_stringLiteral5596, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_005b:
	{
		String_t* L_14 = ___name;
		String_t* L_15 = ___fileName;
		bool L_16 = ___emitSymbolInfo;
		bool L_17 = ___transient;
		ModuleBuilder_t5049 * L_18 = (ModuleBuilder_t5049 *)il2cpp_codegen_object_new (ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		ModuleBuilder__ctor_m22411(L_18, __this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ModuleBuilderU5BU5D_t5046* L_19 = (__this->___modules_10);
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		bool L_20 = (__this->___is_module_only_29);
		if (!L_20)
		{
			goto IL_0082;
		}
	}
	{
		InvalidOperationException_t1447 * L_21 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_21, (String_t*) &_stringLiteral5600, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0082:
	{
		ModuleBuilderU5BU5D_t5046* L_22 = (__this->___modules_10);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		ModuleBuilderU5BU5D_t5046* L_23 = (__this->___modules_10);
		NullCheck(L_23);
		V_1 = ((ModuleBuilderU5BU5D_t5046*)SZArrayNew(ModuleBuilderU5BU5D_t5046_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_23)->max_length)))+(int32_t)1))));
		ModuleBuilderU5BU5D_t5046* L_24 = (__this->___modules_10);
		ModuleBuilderU5BU5D_t5046* L_25 = V_1;
		ModuleBuilderU5BU5D_t5046* L_26 = (__this->___modules_10);
		NullCheck(L_26);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_24, (Array_t *)(Array_t *)L_25, (((int32_t)(((Array_t *)L_26)->max_length))), /*hidden argument*/NULL);
		ModuleBuilderU5BU5D_t5046* L_27 = V_1;
		__this->___modules_10 = L_27;
		goto IL_00c3;
	}

IL_00b7:
	{
		__this->___modules_10 = ((ModuleBuilderU5BU5D_t5046*)SZArrayNew(ModuleBuilderU5BU5D_t5046_il2cpp_TypeInfo_var, 1));
	}

IL_00c3:
	{
		ModuleBuilderU5BU5D_t5046* L_28 = (__this->___modules_10);
		ModuleBuilderU5BU5D_t5046* L_29 = (__this->___modules_10);
		NullCheck(L_29);
		ModuleBuilder_t5049 * L_30 = V_0;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))-(int32_t)1)));
		ArrayElementTypeCheck (L_28, L_30);
		*((ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_28, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_29)->max_length)))-(int32_t)1)))) = (ModuleBuilder_t5049 *)L_30;
		ModuleBuilder_t5049 * L_31 = V_0;
		return L_31;
	}
}
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern TypeInfo* ModuleU5BU5D_t5421_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t5421* AssemblyBuilder_GetModulesInternal_m22139 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleU5BU5D_t5421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9056);
		s_Il2CppMethodIntialized = true;
	}
	{
		ModuleBuilderU5BU5D_t5046* L_0 = (__this->___modules_10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ModuleU5BU5D_t5421*)SZArrayNew(ModuleU5BU5D_t5421_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ModuleBuilderU5BU5D_t5046* L_1 = (__this->___modules_10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Array::Clone() */, L_1);
		return ((ModuleU5BU5D_t5421*)Castclass(L_2, ModuleU5BU5D_t5421_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m22140 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_compiler_context_31);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsSave()
extern "C" bool AssemblyBuilder_get_IsSave_m22141 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = (__this->___access_18);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsRun()
extern "C" bool AssemblyBuilder_get_IsRun_m22142 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint32_t L_0 = (__this->___access_18);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		uint32_t L_1 = (__this->___access_18);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.String System.Reflection.Emit.AssemblyBuilder::get_AssemblyDir()
extern "C" String_t* AssemblyBuilder_get_AssemblyDir_m22143 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___dir_12);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule()
extern "C" Module_t5024 * AssemblyBuilder_GetManifestModule_m22144 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___manifest_module_33);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		ModuleBuilder_t5049 * L_1 = AssemblyBuilder_DefineDynamicModule_m22136(__this, (String_t*) &_stringLiteral5601, /*hidden argument*/NULL);
		__this->___manifest_module_33 = L_1;
	}

IL_0019:
	{
		ModuleBuilder_t5049 * L_2 = (__this->___manifest_module_33);
		return L_2;
	}
}
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * AssemblyBuilder_not_supported_m22145 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.AssemblyBuilder::check_name_and_filename(System.String,System.String,System.Boolean)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2161_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* FileNotFoundException_t4986_il2cpp_TypeInfo_var;
extern "C" void AssemblyBuilder_check_name_and_filename_m22146 (AssemblyBuilder_t5050 * __this, String_t* ___name, String_t* ___fileName, bool ___fileNeedsToExists, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Path_t2161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		FileNotFoundException_t4986_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8954);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___fileName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t785 * L_3 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_3, (String_t*) &_stringLiteral2446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		String_t* L_4 = ___name;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m410(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t726 * L_6 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_6, (String_t*) &_stringLiteral5603, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		String_t* L_7 = ___fileName;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m410(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		ArgumentException_t726 * L_9 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_9, (String_t*) &_stringLiteral5604, (String_t*) &_stringLiteral2446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004c:
	{
		String_t* L_10 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2161_il2cpp_TypeInfo_var);
		String_t* L_11 = Path_GetFileName_m21600(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		String_t* L_12 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Inequality_m415(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_14 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5605, L_14, (String_t*) &_stringLiteral5606, /*hidden argument*/NULL);
		ArgumentException_t726 * L_16 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_16, L_15, (String_t*) &_stringLiteral2446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_0075:
	{
		String_t* L_17 = ___fileName;
		V_0 = L_17;
		String_t* L_18 = (__this->___dir_12);
		if (!L_18)
		{
			goto IL_008c;
		}
	}
	{
		String_t* L_19 = (__this->___dir_12);
		String_t* L_20 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2161_il2cpp_TypeInfo_var);
		String_t* L_21 = Path_Combine_m7948(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
	}

IL_008c:
	{
		bool L_22 = ___fileNeedsToExists;
		if (!L_22)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_23 = V_0;
		bool L_24 = File_Exists_m12101(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_25 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5607, L_25, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		FileNotFoundException_t4986 * L_27 = (FileNotFoundException_t4986 *)il2cpp_codegen_object_new (FileNotFoundException_t4986_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m21504(L_27, L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_00ad:
	{
		MonoResourceU5BU5D_t5047* L_28 = (__this->___resources_13);
		if (!L_28)
		{
			goto IL_0126;
		}
	}
	{
		V_1 = 0;
		goto IL_011b;
	}

IL_00b9:
	{
		MonoResourceU5BU5D_t5047* L_29 = (__this->___resources_13);
		int32_t L_30 = V_1;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		String_t* L_31 = (((MonoResource_t5045 *)(MonoResource_t5045 *)SZArrayLdElema(L_29, L_30))->___filename_2);
		String_t* L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_33 = String_op_Equality_m456(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00e8;
		}
	}
	{
		String_t* L_34 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5608, L_34, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_36 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_36, L_35, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_00e8:
	{
		MonoResourceU5BU5D_t5047* L_37 = (__this->___resources_13);
		int32_t L_38 = V_1;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		String_t* L_39 = (((MonoResource_t5045 *)(MonoResource_t5045 *)SZArrayLdElema(L_37, L_38))->___name_1);
		String_t* L_40 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_41 = String_op_Equality_m456(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0117;
		}
	}
	{
		String_t* L_42 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_43 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5609, L_42, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_44 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_44, L_43, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_0117:
	{
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)1));
	}

IL_011b:
	{
		int32_t L_46 = V_1;
		MonoResourceU5BU5D_t5047* L_47 = (__this->___resources_13);
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)(((Array_t *)L_47)->max_length))))))
		{
			goto IL_00b9;
		}
	}

IL_0126:
	{
		ModuleBuilderU5BU5D_t5046* L_48 = (__this->___modules_10);
		if (!L_48)
		{
			goto IL_01a9;
		}
	}
	{
		V_2 = 0;
		goto IL_019e;
	}

IL_0135:
	{
		ModuleBuilderU5BU5D_t5046* L_49 = (__this->___modules_10);
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_49, L_51)));
		bool L_52 = ModuleBuilder_IsTransient_m22415((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_49, L_51)), /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_016f;
		}
	}
	{
		ModuleBuilderU5BU5D_t5046* L_53 = (__this->___modules_10);
		int32_t L_54 = V_2;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, L_54);
		int32_t L_55 = L_54;
		NullCheck((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_53, L_55)));
		String_t* L_56 = ModuleBuilder_get_FileName_m22435((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_53, L_55)), /*hidden argument*/NULL);
		String_t* L_57 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_58 = String_op_Equality_m456(NULL /*static, unused*/, L_56, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_016f;
		}
	}
	{
		String_t* L_59 = ___fileName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_60 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5608, L_59, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_61 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_61, L_60, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_61);
	}

IL_016f:
	{
		ModuleBuilderU5BU5D_t5046* L_62 = (__this->___modules_10);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, L_63);
		int32_t L_64 = L_63;
		NullCheck((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_62, L_64)));
		String_t* L_65 = Module_get_Name_m21924((*(ModuleBuilder_t5049 **)(ModuleBuilder_t5049 **)SZArrayLdElema(L_62, L_64)), /*hidden argument*/NULL);
		String_t* L_66 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_67 = String_op_Equality_m456(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_019a;
		}
	}
	{
		String_t* L_68 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_69 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5609, L_68, (String_t*) &_stringLiteral1252, /*hidden argument*/NULL);
		ArgumentException_t726 * L_70 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_70, L_69, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_70);
	}

IL_019a:
	{
		int32_t L_71 = V_2;
		V_2 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_019e:
	{
		int32_t L_72 = V_2;
		ModuleBuilderU5BU5D_t5046* L_73 = (__this->___modules_10);
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)(((int32_t)(((Array_t *)L_73)->max_length))))))
		{
			goto IL_0135;
		}
	}

IL_01a9:
	{
		return;
	}
}
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern "C" AssemblyName_t1483 * AssemblyBuilder_UnprotectedGetName_m22147 (AssemblyBuilder_t5050 * __this, const MethodInfo* method)
{
	AssemblyName_t1483 * V_0 = {0};
	{
		AssemblyName_t1483 * L_0 = Assembly_UnprotectedGetName_m21805(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		StrongName_t4789 * L_1 = (__this->___sn_30);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AssemblyName_t1483 * L_2 = V_0;
		StrongName_t4789 * L_3 = (__this->___sn_30);
		NullCheck(L_3);
		ByteU5BU5D_t66* L_4 = StrongName_get_PublicKey_m19570(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		AssemblyName_SetPublicKey_m21838(L_2, L_4, /*hidden argument*/NULL);
		AssemblyName_t1483 * L_5 = V_0;
		StrongName_t4789 * L_6 = (__this->___sn_30);
		NullCheck(L_6);
		ByteU5BU5D_t66* L_7 = StrongName_get_PublicKeyToken_m19571(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		AssemblyName_SetPublicKeyToken_m21839(L_5, L_7, /*hidden argument*/NULL);
	}

IL_0031:
	{
		AssemblyName_t1483 * L_8 = V_0;
		return L_8;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccessMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodToken.h"
// System.Reflection.Emit.ILGenerator
#include "mscorlib_System_Reflection_Emit_ILGenerator.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Emit.MethodToken
#include "mscorlib_System_Reflection_Emit_MethodTokenMethodDeclarations.h"
// System.Reflection.Emit.ILGenerator
#include "mscorlib_System_Reflection_Emit_ILGeneratorMethodDeclarations.h"


// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern TypeInfo* ConstructorInfo_t1399_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" void ConstructorBuilder__ctor_m22148 (ConstructorBuilder_t5055 * __this, TypeBuilder_t5052 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1221* ___parameterTypes, TypeU5BU5DU5BU5D_t5054* ___paramModReq, TypeU5BU5DU5BU5D_t5054* ___paramModOpt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t1399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	MethodToken_t5073  V_1 = {0};
	{
		__this->___init_locals_10 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t1399_il2cpp_TypeInfo_var);
		ConstructorInfo__ctor_m21864(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___attributes;
		__this->___attrs_4 = ((int32_t)((int32_t)((int32_t)((int32_t)L_0|(int32_t)((int32_t)2048)))|(int32_t)((int32_t)4096)));
		int32_t L_1 = ___callingConvention;
		__this->___call_conv_7 = L_1;
		TypeU5BU5D_t1221* L_2 = ___parameterTypes;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		V_0 = 0;
		goto IL_0049;
	}

IL_002f:
	{
		TypeU5BU5D_t1221* L_3 = ___parameterTypes;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		if ((*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t726 * L_6 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_6, (String_t*) &_stringLiteral5610, (String_t*) &_stringLiteral5611, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0045:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_8 = V_0;
		TypeU5BU5D_t1221* L_9 = ___parameterTypes;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		TypeU5BU5D_t1221* L_10 = ___parameterTypes;
		NullCheck(L_10);
		__this->___parameters_3 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_10)->max_length)))));
		TypeU5BU5D_t1221* L_11 = ___parameterTypes;
		TypeU5BU5D_t1221* L_12 = (__this->___parameters_3);
		TypeU5BU5D_t1221* L_13 = ___parameterTypes;
		NullCheck(L_13);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/NULL);
	}

IL_0070:
	{
		TypeBuilder_t5052 * L_14 = ___tb;
		__this->___type_8 = L_14;
		TypeU5BU5DU5BU5D_t5054* L_15 = ___paramModReq;
		__this->___paramModReq_11 = L_15;
		TypeU5BU5DU5BU5D_t5054* L_16 = ___paramModOpt;
		__this->___paramModOpt_12 = L_16;
		int32_t L_17 = (int32_t)VirtFuncInvoker3< int32_t, Object_t *, int32_t, bool >::Invoke(25 /* System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean) */, __this, __this, 6, 1);
		__this->___table_idx_6 = L_17;
		TypeBuilder_t5052 * L_18 = ___tb;
		NullCheck(L_18);
		Module_t5024 * L_19 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_18);
		MethodToken_t5073  L_20 = ConstructorBuilder_GetToken_m22167(__this, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = MethodToken_get_Token_m22410((&V_1), /*hidden argument*/NULL);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_19, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		ModuleBuilder_RegisterToken_m22433(((ModuleBuilder_t5049 *)Castclass(L_19, ModuleBuilder_t5049_il2cpp_TypeInfo_var)), __this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m22149 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_7);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t5052 * ConstructorBuilder_get_TypeBuilder_m22150 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		return L_0;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::GetMethodImplementationFlags()
extern "C" int32_t ConstructorBuilder_GetMethodImplementationFlags_m22151 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___iattrs_5);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t1476* ConstructorBuilder_GetParameters_m22152 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m22171(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t57 * L_3 = ConstructorBuilder_not_created_m22173(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ParameterInfoU5BU5D_t1476* L_4 = ConstructorBuilder_GetParametersInternal_m22153(__this, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern TypeInfo* ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t1401_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1476* ConstructorBuilder_GetParametersInternal_m22153 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ParameterInfo_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B4_1 = {0};
	ParameterBuilder_t5080 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t1476* G_B6_2 = {0};
	{
		TypeU5BU5D_t1221* L_0 = (__this->___parameters_3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t1221* L_1 = (__this->___parameters_3);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterInfoU5BU5D_t1476* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterBuilderU5BU5D_t5053* L_4 = (__this->___pinfo_9);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t5080 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t5053* L_5 = (__this->___pinfo_9);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t5080 **)(ParameterBuilder_t5080 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t1221* L_8 = (__this->___parameters_3);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		ParameterInfo_t1401 * L_12 = (ParameterInfo_t1401 *)il2cpp_codegen_object_new (ParameterInfo_t1401_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m22061(L_12, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t1401 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t1221* L_15 = (__this->___parameters_3);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_16 = V_0;
		return L_16;
	}
}
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m22154 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		TypeU5BU5D_t1221* L_0 = (__this->___parameters_3);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TypeU5BU5D_t1221* L_1 = (__this->___parameters_3);
		NullCheck(L_1);
		return (((int32_t)(((Array_t *)L_1)->max_length)));
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m22155 (ConstructorBuilder_t5055 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m22156 (ConstructorBuilder_t5055 * __this, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4908  ConstructorBuilder_get_MethodHandle_m22157 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m22158 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m22159 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m22160 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern TypeInfo* ConstructorInfo_t1399_il2cpp_TypeInfo_var;
extern "C" String_t* ConstructorBuilder_get_Name_m22161 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfo_t1399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___attrs_4);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t1399_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ConstructorInfo_t1399_StaticFields*)ConstructorInfo_t1399_il2cpp_TypeInfo_var->static_fields)->___TypeConstructorName_1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t1399_il2cpp_TypeInfo_var);
		String_t* L_2 = ((ConstructorInfo_t1399_StaticFields*)ConstructorInfo_t1399_il2cpp_TypeInfo_var->static_fields)->___ConstructorName_0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m22162 (ConstructorBuilder_t5055 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* ConstructorBuilder_GetCustomAttributes_m22163 (ConstructorBuilder_t5055 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m22171(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_4 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001d:
	{
		Exception_t57 * L_5 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* ConstructorBuilder_GetCustomAttributes_m22164 (ConstructorBuilder_t5055 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m22171(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_5 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001e:
	{
		Exception_t57 * L_6 = ConstructorBuilder_not_supported_m22172(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t4553 * ConstructorBuilder_GetILGenerator_m22165 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		ILGenerator_t4553 * L_0 = ConstructorBuilder_GetILGenerator_m22166(__this, ((int32_t)64), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" ILGenerator_t4553 * ConstructorBuilder_GetILGenerator_m22166 (ConstructorBuilder_t5055 * __this, int32_t ___streamSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	{
		ILGenerator_t4553 * L_0 = (__this->___ilgen_2);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ILGenerator_t4553 * L_1 = (__this->___ilgen_2);
		return L_1;
	}

IL_000f:
	{
		TypeBuilder_t5052 * L_2 = (__this->___type_8);
		NullCheck(L_2);
		Module_t5024 * L_3 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_2);
		TypeBuilder_t5052 * L_4 = (__this->___type_8);
		NullCheck(L_4);
		Module_t5024 * L_5 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_4);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_5, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		Object_t * L_6 = ModuleBuilder_GetTokenGenerator_m22434(((ModuleBuilder_t5049 *)Castclass(L_5, ModuleBuilder_t5049_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_7 = ___streamSize;
		ILGenerator_t4553 * L_8 = (ILGenerator_t4553 *)il2cpp_codegen_object_new (ILGenerator_t4553_il2cpp_TypeInfo_var);
		ILGenerator__ctor_m22344(L_8, L_3, L_6, L_7, /*hidden argument*/NULL);
		__this->___ilgen_2 = L_8;
		ILGenerator_t4553 * L_9 = (__this->___ilgen_2);
		return L_9;
	}
}
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t5073  ConstructorBuilder_GetToken_m22167 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___table_idx_6);
		MethodToken_t5073  L_1 = {0};
		MethodToken__ctor_m22406(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t5024 * ConstructorBuilder_get_Module_m22168 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	{
		Module_t5024 * L_0 = MemberInfo_get_Module_m19264(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ConstructorBuilder_ToString_m22169 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5612, L_1, (String_t*) &_stringLiteral5613, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m22170 (ConstructorBuilder_t5055 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_8);
		Object_t * L_1 = ___obj;
		int32_t L_2 = ___table;
		bool L_3 = ___inc;
		NullCheck(L_0);
		int32_t L_4 = TypeBuilder_get_next_table_index_m22525(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyBuilder_t5050_il2cpp_TypeInfo_var;
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m22171 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		AssemblyBuilder_t5050_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8953);
		s_Il2CppMethodIntialized = true;
	}
	ModuleBuilder_t5049 * V_0 = {0};
	AssemblyBuilder_t5050 * V_1 = {0};
	{
		TypeBuilder_t5052 * L_0 = ConstructorBuilder_get_TypeBuilder_m22150(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		V_0 = ((ModuleBuilder_t5049 *)Castclass(L_1, ModuleBuilder_t5049_il2cpp_TypeInfo_var));
		ModuleBuilder_t5049 * L_2 = V_0;
		NullCheck(L_2);
		Assembly_t784 * L_3 = Module_get_Assembly_m21923(L_2, /*hidden argument*/NULL);
		V_1 = ((AssemblyBuilder_t5050 *)Castclass(L_3, AssemblyBuilder_t5050_il2cpp_TypeInfo_var));
		AssemblyBuilder_t5050 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = AssemblyBuilder_get_IsCompilerContext_m22140(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * ConstructorBuilder_not_supported_m22172 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * ConstructorBuilder_not_created_m22173 (ConstructorBuilder_t5055 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5614, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.DerivedType
#include "mscorlib_System_Reflection_Emit_DerivedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.DerivedType
#include "mscorlib_System_Reflection_Emit_DerivedTypeMethodDeclarations.h"

// System.Reflection.Emit.ByRefType
#include "mscorlib_System_Reflection_Emit_ByRefType.h"
// System.Reflection.Emit.ByRefType
#include "mscorlib_System_Reflection_Emit_ByRefTypeMethodDeclarations.h"


// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void DerivedType__ctor_m22174 (DerivedType_t5056 * __this, Type_t * ___elementType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type__ctor_m19185(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___elementType;
		__this->___elementType_8 = L_0;
		return;
	}
}
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C" void DerivedType_create_unmanaged_type_m22175 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef void (*DerivedType_create_unmanaged_type_m22175_ftn) (Type_t *);
	static DerivedType_create_unmanaged_type_m22175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DerivedType_create_unmanaged_type_m22175_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)");
	_il2cpp_icall_func(___type);
}
// System.String System.Reflection.Emit.DerivedType::FormatName(System.String)
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* DerivedType_GetInterfaces_m22176 (DerivedType_t5056 * __this, const MethodInfo* method)
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
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C" Type_t * DerivedType_GetElementType_m22177 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		return L_0;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" EventInfo_t * DerivedType_GetEvent_m22178 (DerivedType_t5056 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" FieldInfo_t * DerivedType_GetField_m22179 (DerivedType_t5056 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" FieldInfoU5BU5D_t2968* DerivedType_GetFields_m22180 (DerivedType_t5056 * __this, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * DerivedType_GetMethodImpl_m22181 (DerivedType_t5056 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
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
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t2160* DerivedType_GetMethods_m22182 (DerivedType_t5056 * __this, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" PropertyInfoU5BU5D_t1473* DerivedType_GetProperties_m22183 (DerivedType_t5056 * __this, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" PropertyInfo_t * DerivedType_GetPropertyImpl_m22184 (DerivedType_t5056 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
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
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1399 * DerivedType_GetConstructorImpl_m22185 (DerivedType_t5056 * __this, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
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
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C" int32_t DerivedType_GetAttributeFlagsImpl_m22186 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Reflection.TypeAttributes System.Type::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C" bool DerivedType_HasElementTypeImpl_m22187 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C" bool DerivedType_IsArrayImpl_m22188 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C" bool DerivedType_IsByRefImpl_m22189 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C" bool DerivedType_IsPointerImpl_m22190 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C" bool DerivedType_IsPrimitiveImpl_m22191 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t1474* DerivedType_GetConstructors_m22192 (DerivedType_t5056 * __this, int32_t ___bindingAttr, const MethodInfo* method)
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
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * DerivedType_InvokeMember_m22193 (DerivedType_t5056 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2971 * ___binder, Object_t * ___target, ObjectU5BU5D_t697* ___args, ParameterModifierU5BU5D_t2972* ___modifiers, CultureInfo_t783 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method)
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
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C" bool DerivedType_IsInstanceOfType_m22194 (DerivedType_t5056 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C" bool DerivedType_IsAssignableFrom_m22195 (DerivedType_t5056 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C" bool DerivedType_get_ContainsGenericParameters_m22196 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Type_t * DerivedType_MakeGenericType_m22197 (DerivedType_t5056 * __this, TypeU5BU5D_t1221* ___typeArguments, const MethodInfo* method)
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
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern TypeInfo* ByRefType_t5057_il2cpp_TypeInfo_var;
extern "C" Type_t * DerivedType_MakeByRefType_m22198 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByRefType_t5057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9090);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByRefType_t5057 * L_0 = (ByRefType_t5057 *)il2cpp_codegen_object_new (ByRefType_t5057_il2cpp_TypeInfo_var);
		ByRefType__ctor_m22211(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C" String_t* DerivedType_ToString_m22199 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(89 /* System.String System.Reflection.Emit.DerivedType::FormatName(System.String) */, __this, L_1);
		return L_2;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C" Assembly_t784 * DerivedType_get_Assembly_m22200 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		Assembly_t784 * L_1 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* DerivedType_get_AssemblyQualifiedName_m22201 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(89 /* System.String System.Reflection.Emit.DerivedType::FormatName(System.String) */, __this, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0017:
	{
		String_t* L_4 = V_0;
		Type_t * L_5 = (__this->___elementType_8);
		NullCheck(L_5);
		Assembly_t784 * L_6 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, L_4, (String_t*) &_stringLiteral120, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C" String_t* DerivedType_get_FullName_m22202 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(89 /* System.String System.Reflection.Emit.DerivedType::FormatName(System.String) */, __this, L_1);
		return L_2;
	}
}
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C" String_t* DerivedType_get_Name_m22203 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker1< String_t*, String_t* >::Invoke(89 /* System.String System.Reflection.Emit.DerivedType::FormatName(System.String) */, __this, L_1);
		return L_2;
	}
}
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C" Module_t5024 * DerivedType_get_Module_m22204 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C" String_t* DerivedType_get_Namespace_m22205 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___elementType_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_Namespace() */, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" RuntimeTypeHandle_t4730  DerivedType_get_TypeHandle_m22206 (DerivedType_t5056 * __this, const MethodInfo* method)
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
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C" Type_t * DerivedType_get_UnderlyingSystemType_m22207 (DerivedType_t5056 * __this, const MethodInfo* method)
{
	{
		DerivedType_create_unmanaged_type_m22175(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool DerivedType_IsDefined_m22208 (DerivedType_t5056 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
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
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* DerivedType_GetCustomAttributes_m22209 (DerivedType_t5056 * __this, bool ___inherit, const MethodInfo* method)
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
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* DerivedType_GetCustomAttributes_m22210 (DerivedType_t5056 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
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



// System.Void System.Reflection.Emit.ByRefType::.ctor(System.Type)
extern "C" void ByRefType__ctor_m22211 (ByRefType_t5057 * __this, Type_t * ___elementType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___elementType;
		DerivedType__ctor_m22174(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Reflection.Emit.ByRefType::IsByRefImpl()
extern "C" bool ByRefType_IsByRefImpl_m22212 (ByRefType_t5057 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Type System.Reflection.Emit.ByRefType::get_BaseType()
extern const Il2CppType* Array_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ByRefType_get_BaseType_m22213 (ByRefType_t5057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_0_0_0_var = il2cpp_codegen_type_from_index(2773);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Array_t_0_0_0_var), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ByRefType::FormatName(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ByRefType_FormatName_m22214 (ByRefType_t5057 * __this, String_t* ___elementName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___elementName;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___elementName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m408(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral599, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Type System.Reflection.Emit.ByRefType::MakeByRefType()
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" Type_t * ByRefType_MakeByRefType_m22215 (ByRefType_t5057 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentException_t726 * L_0 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_0, (String_t*) &_stringLiteral5615, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.DynamicMethod/AnonHostModuleHolder
#include "mscorlib_System_Reflection_Emit_DynamicMethod_AnonHostModule.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.DynamicMethod/AnonHostModuleHolder
#include "mscorlib_System_Reflection_Emit_DynamicMethod_AnonHostModuleMethodDeclarations.h"

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"


// System.Void System.Reflection.Emit.DynamicMethod/AnonHostModuleHolder::.cctor()
extern TypeInfo* AssemblyName_t1483_il2cpp_TypeInfo_var;
extern TypeInfo* AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var;
extern "C" void AnonHostModuleHolder__cctor_m22216 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyName_t1483_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2594);
		AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9091);
		s_Il2CppMethodIntialized = true;
	}
	AssemblyName_t1483 * V_0 = {0};
	AssemblyBuilder_t5050 * V_1 = {0};
	{
		AssemblyName_t1483 * L_0 = (AssemblyName_t1483 *)il2cpp_codegen_object_new (AssemblyName_t1483_il2cpp_TypeInfo_var);
		AssemblyName__ctor_m21823(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		AssemblyName_t1483 * L_1 = V_0;
		NullCheck(L_1);
		AssemblyName_set_Name_m21827(L_1, (String_t*) &_stringLiteral5624, /*hidden argument*/NULL);
		AppDomain_t2164 * L_2 = AppDomain_get_CurrentDomain_m7957(NULL /*static, unused*/, /*hidden argument*/NULL);
		AssemblyName_t1483 * L_3 = V_0;
		NullCheck(L_2);
		AssemblyBuilder_t5050 * L_4 = (AssemblyBuilder_t5050 *)VirtFuncInvoker2< AssemblyBuilder_t5050 *, AssemblyName_t1483 *, int32_t >::Invoke(7 /* System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess) */, L_2, L_3, 1);
		V_1 = L_4;
		AssemblyBuilder_t5050 * L_5 = V_1;
		NullCheck(L_5);
		Module_t5024 * L_6 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(21 /* System.Reflection.Module System.Reflection.Emit.AssemblyBuilder::GetManifestModule() */, L_5);
		((AnonHostModuleHolder_t5058_StaticFields*)AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var->static_fields)->___anon_host_module_0 = L_6;
		return;
	}
}
// System.Reflection.Emit.DynamicMethod
#include "mscorlib_System_Reflection_Emit_DynamicMethod.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.DynamicMethod
#include "mscorlib_System_Reflection_Emit_DynamicMethodMethodDeclarations.h"

// System.NotImplementedException
#include "mscorlib_System_NotImplementedException.h"
// System.Reflection.Emit.DynamicMethodTokenGenerator
#include "mscorlib_System_Reflection_Emit_DynamicMethodTokenGenerator.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.NotImplementedException
#include "mscorlib_System_NotImplementedExceptionMethodDeclarations.h"
// System.Reflection.Emit.DynamicMethodTokenGenerator
#include "mscorlib_System_Reflection_Emit_DynamicMethodTokenGeneratorMethodDeclarations.h"


// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m18168 (DynamicMethod_t4554 * __this, String_t* ___name, Type_t * ___returnType, TypeU5BU5D_t1221* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = ___returnType;
		TypeU5BU5D_t1221* L_2 = ___parameterTypes;
		Type_t * L_3 = ___owner;
		bool L_4 = ___skipVisibility;
		DynamicMethod__ctor_m22217(__this, L_0, ((int32_t)22), 1, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Boolean)
extern "C" void DynamicMethod__ctor_m22217 (DynamicMethod_t4554 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1221* ___parameterTypes, Type_t * ___owner, bool ___skipVisibility, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___attributes;
		int32_t L_2 = ___callingConvention;
		Type_t * L_3 = ___returnType;
		TypeU5BU5D_t1221* L_4 = ___parameterTypes;
		Type_t * L_5 = ___owner;
		Type_t * L_6 = ___owner;
		NullCheck(L_6);
		Module_t5024 * L_7 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_6);
		bool L_8 = ___skipVisibility;
		DynamicMethod__ctor_m22218(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_7, L_8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.DynamicMethod::.ctor(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type,System.Reflection.Module,System.Boolean,System.Boolean)
extern const Il2CppType* Void_t85_0_0_0_var;
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var;
extern "C" void DynamicMethod__ctor_m22218 (DynamicMethod_t4554 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1221* ___parameterTypes, Type_t * ___owner, Module_t5024 * ___m, bool ___skipVisibility, bool ___anonHosted, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Void_t85_0_0_0_var = il2cpp_codegen_type_from_index(62);
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9091);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___init_locals_8 = 1;
		MethodInfo__ctor_m21909(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_001b:
	{
		Type_t * L_2 = ___returnType;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Void_t85_0_0_0_var), /*hidden argument*/NULL);
		___returnType = L_3;
	}

IL_002d:
	{
		Module_t5024 * L_4 = ___m;
		if (L_4)
		{
			goto IL_0040;
		}
	}
	{
		bool L_5 = ___anonHosted;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentNullException_t785 * L_6 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_6, (String_t*) &_stringLiteral1717, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0040:
	{
		Type_t * L_7 = ___returnType;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_7);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		ArgumentException_t726 * L_9 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_9, (String_t*) &_stringLiteral5616, (String_t*) &_stringLiteral5617, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0059:
	{
		TypeU5BU5D_t1221* L_10 = ___parameterTypes;
		if (!L_10)
		{
			goto IL_0092;
		}
	}
	{
		V_0 = 0;
		goto IL_008b;
	}

IL_0061:
	{
		TypeU5BU5D_t1221* L_11 = ___parameterTypes;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		if ((*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		Object_t * L_16 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m4033(NULL /*static, unused*/, (String_t*) &_stringLiteral5618, L_16, (String_t*) &_stringLiteral5619, /*hidden argument*/NULL);
		ArgumentException_t726 * L_18 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_18, L_17, (String_t*) &_stringLiteral5611, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_0087:
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_008b:
	{
		int32_t L_20 = V_0;
		TypeU5BU5D_t1221* L_21 = ___parameterTypes;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0092:
	{
		Module_t5024 * L_22 = ___m;
		if (L_22)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var);
		Module_t5024 * L_23 = ((AnonHostModuleHolder_t5058_StaticFields*)AnonHostModuleHolder_t5058_il2cpp_TypeInfo_var->static_fields)->___anon_host_module_0;
		___m = L_23;
	}

IL_009f:
	{
		String_t* L_24 = ___name;
		__this->___name_1 = L_24;
		int32_t L_25 = ___attributes;
		__this->___attributes_4 = ((int32_t)((int32_t)L_25|(int32_t)((int32_t)16)));
		int32_t L_26 = ___callingConvention;
		__this->___callingConvention_5 = L_26;
		Type_t * L_27 = ___returnType;
		__this->___returnType_2 = L_27;
		TypeU5BU5D_t1221* L_28 = ___parameterTypes;
		__this->___parameters_3 = L_28;
		Type_t * L_29 = ___owner;
		__this->___owner_12 = L_29;
		Module_t5024 * L_30 = ___m;
		__this->___module_6 = L_30;
		bool L_31 = ___skipVisibility;
		__this->___skipVisibility_7 = L_31;
		return;
	}
}
// System.Void System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_create_dynamic_method_m22219 (DynamicMethod_t4554 * __this, DynamicMethod_t4554 * ___m, const MethodInfo* method)
{
	typedef void (*DynamicMethod_create_dynamic_method_m22219_ftn) (DynamicMethod_t4554 *, DynamicMethod_t4554 *);
	static DynamicMethod_create_dynamic_method_m22219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DynamicMethod_create_dynamic_method_m22219_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::create_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, ___m);
}
// System.Void System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethod_destroy_dynamic_method_m22220 (DynamicMethod_t4554 * __this, DynamicMethod_t4554 * ___m, const MethodInfo* method)
{
	typedef void (*DynamicMethod_destroy_dynamic_method_m22220_ftn) (DynamicMethod_t4554 *, DynamicMethod_t4554 *);
	static DynamicMethod_destroy_dynamic_method_m22220_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DynamicMethod_destroy_dynamic_method_m22220_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.DynamicMethod::destroy_dynamic_method(System.Reflection.Emit.DynamicMethod)");
	_il2cpp_icall_func(__this, ___m);
}
// System.Void System.Reflection.Emit.DynamicMethod::CreateDynMethod()
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicMethod_t4554_il2cpp_TypeInfo_var;
extern "C" void DynamicMethod_CreateDynMethod_m22221 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		DynamicMethod_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7892);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	DynamicMethod_t4554 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeMethodHandle_t4908 * L_0 = &(__this->___mhandle_0);
		IntPtr_t L_1 = RuntimeMethodHandle_get_Value_m20705(L_0, /*hidden argument*/NULL);
		IntPtr_t L_2 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_3 = IntPtr_op_Equality_m10351(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00b3;
		}
	}
	{
		ILGenerator_t4553 * L_4 = (__this->___ilgen_9);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		ILGenerator_t4553 * L_5 = (__this->___ilgen_9);
		IL2CPP_RUNTIME_CLASS_INIT(ILGenerator_t4553_il2cpp_TypeInfo_var);
		int32_t L_6 = ILGenerator_Mono_GetCurrentOffset_m22369(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004a;
		}
	}

IL_002f:
	{
		String_t* L_7 = (__this->___name_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5620, L_7, (String_t*) &_stringLiteral5621, /*hidden argument*/NULL);
		InvalidOperationException_t1447 * L_9 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_004a:
	{
		ILGenerator_t4553 * L_10 = (__this->___ilgen_9);
		NullCheck(L_10);
		ILGenerator_label_fixup_m22368(L_10, /*hidden argument*/NULL);
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			__this->___creating_16 = 1;
			ObjectU5BU5D_t697* L_11 = (__this->___refs_11);
			if (!L_11)
			{
				goto IL_00a2;
			}
		}

IL_0064:
		{
			V_0 = 0;
			goto IL_0097;
		}

IL_0068:
		{
			ObjectU5BU5D_t697* L_12 = (__this->___refs_11);
			int32_t L_13 = V_0;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
			int32_t L_14 = L_13;
			if (!((DynamicMethod_t4554 *)IsInst((*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)), DynamicMethod_t4554_il2cpp_TypeInfo_var)))
			{
				goto IL_0093;
			}
		}

IL_0077:
		{
			ObjectU5BU5D_t697* L_15 = (__this->___refs_11);
			int32_t L_16 = V_0;
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
			int32_t L_17 = L_16;
			V_1 = ((DynamicMethod_t4554 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_15, L_17)), DynamicMethod_t4554_il2cpp_TypeInfo_var));
			DynamicMethod_t4554 * L_18 = V_1;
			NullCheck(L_18);
			bool L_19 = (L_18->___creating_16);
			if (L_19)
			{
				goto IL_0093;
			}
		}

IL_008d:
		{
			DynamicMethod_t4554 * L_20 = V_1;
			NullCheck(L_20);
			DynamicMethod_CreateDynMethod_m22221(L_20, /*hidden argument*/NULL);
		}

IL_0093:
		{
			int32_t L_21 = V_0;
			V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
		}

IL_0097:
		{
			int32_t L_22 = V_0;
			ObjectU5BU5D_t697* L_23 = (__this->___refs_11);
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
			{
				goto IL_0068;
			}
		}

IL_00a2:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_00a4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00a4;
	}

FINALLY_00a4:
	{ // begin finally (depth: 1)
		__this->___creating_16 = 0;
		IL2CPP_END_FINALLY(164)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(164)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ac:
	{
		DynamicMethod_create_dynamic_method_m22219(__this, __this, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.DynamicMethod::Finalize()
extern "C" void DynamicMethod_Finalize_m22222 (DynamicMethod_t4554 * __this, const MethodInfo* method)
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
		DynamicMethod_destroy_dynamic_method_m22220(__this, __this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m490(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0010:
	{
		return;
	}
}
// System.Delegate System.Reflection.Emit.DynamicMethod::CreateDelegate(System.Type)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern "C" Delegate_t739 * DynamicMethod_CreateDelegate_m18167 (DynamicMethod_t4554 * __this, Type_t * ___delegateType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___delegateType;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral3681, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Delegate_t739 * L_2 = (__this->___deleg_13);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		Delegate_t739 * L_3 = (__this->___deleg_13);
		return L_3;
	}

IL_001d:
	{
		DynamicMethod_CreateDynMethod_m22221(__this, /*hidden argument*/NULL);
		Type_t * L_4 = ___delegateType;
		Delegate_t739 * L_5 = Delegate_CreateDelegate_m19052(NULL /*static, unused*/, L_4, __this, /*hidden argument*/NULL);
		__this->___deleg_13 = L_5;
		Delegate_t739 * L_6 = (__this->___deleg_13);
		return L_6;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.DynamicMethod::GetBaseDefinition()
extern "C" MethodInfo_t * DynamicMethod_GetBaseDefinition_m22223 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Boolean)
extern TypeInfo* NotImplementedException_t1458_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* DynamicMethod_GetCustomAttributes_m22224 (DynamicMethod_t4554 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1458 * L_0 = (NotImplementedException_t1458 *)il2cpp_codegen_object_new (NotImplementedException_t1458_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.DynamicMethod::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* NotImplementedException_t1458_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* DynamicMethod_GetCustomAttributes_m22225 (DynamicMethod_t4554 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1458 * L_0 = (NotImplementedException_t1458 *)il2cpp_codegen_object_new (NotImplementedException_t1458_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator()
extern "C" ILGenerator_t4553 * DynamicMethod_GetILGenerator_m18169 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		ILGenerator_t4553 * L_0 = DynamicMethod_GetILGenerator_m22226(__this, ((int32_t)64), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::GetILGenerator(System.Int32)
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicMethodTokenGenerator_t5059_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" ILGenerator_t4553 * DynamicMethod_GetILGenerator_m22226 (DynamicMethod_t4554 * __this, int32_t ___streamSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		DynamicMethodTokenGenerator_t5059_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9092);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags() */, __this);
		if (((int32_t)((int32_t)L_0&(int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags() */, __this);
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		InvalidOperationException_t1447 * L_2 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_2, (String_t*) &_stringLiteral5622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001f:
	{
		ILGenerator_t4553 * L_3 = (__this->___ilgen_9);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ILGenerator_t4553 * L_4 = (__this->___ilgen_9);
		return L_4;
	}

IL_002e:
	{
		Module_t5024 * L_5 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module() */, __this);
		DynamicMethodTokenGenerator_t5059 * L_6 = (DynamicMethodTokenGenerator_t5059 *)il2cpp_codegen_object_new (DynamicMethodTokenGenerator_t5059_il2cpp_TypeInfo_var);
		DynamicMethodTokenGenerator__ctor_m22241(L_6, __this, /*hidden argument*/NULL);
		int32_t L_7 = ___streamSize;
		ILGenerator_t4553 * L_8 = (ILGenerator_t4553 *)il2cpp_codegen_object_new (ILGenerator_t4553_il2cpp_TypeInfo_var);
		ILGenerator__ctor_m22344(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		__this->___ilgen_9 = L_8;
		ILGenerator_t4553 * L_9 = (__this->___ilgen_9);
		return L_9;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.Emit.DynamicMethod::GetMethodImplementationFlags()
extern "C" int32_t DynamicMethod_GetMethodImplementationFlags_m22227 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		return (int32_t)(0);
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t1401_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1476* DynamicMethod_GetParameters_m22228 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ParameterInfo_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B4_1 = {0};
	ParameterBuilder_t5080 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t1476* G_B6_2 = {0};
	{
		TypeU5BU5D_t1221* L_0 = (__this->___parameters_3);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t1221* L_1 = (__this->___parameters_3);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterInfoU5BU5D_t1476* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterBuilderU5BU5D_t5053* L_4 = (__this->___pinfo_15);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t5080 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t5053* L_5 = (__this->___pinfo_15);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t5080 **)(ParameterBuilder_t5080 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t1221* L_8 = (__this->___parameters_3);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		ParameterInfo_t1401 * L_12 = (ParameterInfo_t1401 *)il2cpp_codegen_object_new (ParameterInfo_t1401_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m22061(L_12, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t1401 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t1221* L_15 = (__this->___parameters_3);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_16 = V_0;
		return L_16;
	}
}
// System.Object System.Reflection.Emit.DynamicMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern TypeInfo* MonoMethod_t_il2cpp_TypeInfo_var;
extern TypeInfo* MethodAccessException_t4891_il2cpp_TypeInfo_var;
extern TypeInfo* TargetInvocationException_t5040_il2cpp_TypeInfo_var;
extern "C" Object_t * DynamicMethod_Invoke_m22229 (DynamicMethod_t4554 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoMethod_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8989);
		MethodAccessException_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9093);
		TargetInvocationException_t5040_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9076);
		s_Il2CppMethodIntialized = true;
	}
	MethodAccessException_t4891 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			DynamicMethod_CreateDynMethod_m22221(__this, /*hidden argument*/NULL);
			MonoMethod_t * L_0 = (__this->___method_14);
			if (L_0)
			{
				goto IL_001f;
			}
		}

IL_000e:
		{
			RuntimeMethodHandle_t4908  L_1 = (__this->___mhandle_0);
			MonoMethod_t * L_2 = (MonoMethod_t *)il2cpp_codegen_object_new (MonoMethod_t_il2cpp_TypeInfo_var);
			MonoMethod__ctor_m21982(L_2, L_1, /*hidden argument*/NULL);
			__this->___method_14 = L_2;
		}

IL_001f:
		{
			MonoMethod_t * L_3 = (__this->___method_14);
			Object_t * L_4 = ___obj;
			ObjectU5BU5D_t697* L_5 = ___parameters;
			NullCheck(L_3);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t697* >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_3, L_4, L_5);
			V_1 = L_6;
			goto IL_0041;
		}

IL_0030:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MethodAccessException_t4891_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.MethodAccessException)
		V_0 = ((MethodAccessException_t4891 *)__exception_local);
		MethodAccessException_t4891 * L_7 = V_0;
		TargetInvocationException_t5040 * L_8 = (TargetInvocationException_t5040 *)il2cpp_codegen_object_new (TargetInvocationException_t5040_il2cpp_TypeInfo_var);
		TargetInvocationException__ctor_m22094(L_8, (String_t*) &_stringLiteral5623, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		Object_t * L_9 = V_1;
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.DynamicMethod::IsDefined(System.Type,System.Boolean)
extern TypeInfo* NotImplementedException_t1458_il2cpp_TypeInfo_var;
extern "C" bool DynamicMethod_IsDefined_m22230 (DynamicMethod_t4554 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotImplementedException_t1458_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2543);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotImplementedException_t1458 * L_0 = (NotImplementedException_t1458 *)il2cpp_codegen_object_new (NotImplementedException_t1458_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m7547(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.DynamicMethod::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" String_t* DynamicMethod_ToString_m22231 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	ParameterInfoU5BU5D_t1476* V_1 = {0};
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_0 = L_0;
		ParameterInfoU5BU5D_t1476* L_1 = (ParameterInfoU5BU5D_t1476*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1476* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.Emit.DynamicMethod::GetParameters() */, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0039;
	}

IL_0011:
	{
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m408(NULL /*static, unused*/, L_3, (String_t*) &_stringLiteral120, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0021:
	{
		String_t* L_5 = V_0;
		ParameterInfoU5BU5D_t1476* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m408(NULL /*static, unused*/, L_5, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_13 = V_2;
		ParameterInfoU5BU5D_t1476* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		StringU5BU5D_t75* L_15 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 6));
		Type_t * L_16 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType() */, __this);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_17);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, 0)) = (String_t*)L_17;
		StringU5BU5D_t75* L_18 = L_15;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 1);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral944);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, 1)) = (String_t*)(String_t*) &_stringLiteral944;
		StringU5BU5D_t75* L_19 = L_18;
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.DynamicMethod::get_Name() */, __this);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, L_20);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)L_20;
		StringU5BU5D_t75* L_21 = L_19;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral2045);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, 3)) = (String_t*)(String_t*) &_stringLiteral2045;
		StringU5BU5D_t75* L_22 = L_21;
		String_t* L_23 = V_0;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 4);
		ArrayElementTypeCheck (L_22, L_23);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, 4)) = (String_t*)L_23;
		StringU5BU5D_t75* L_24 = L_22;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 5);
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral1259);
		*((String_t**)(String_t**)SZArrayLdElema(L_24, 5)) = (String_t*)(String_t*) &_stringLiteral1259;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m450(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::get_Attributes()
extern "C" int32_t DynamicMethod_get_Attributes_m22232 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attributes_4);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::get_CallingConvention()
extern "C" int32_t DynamicMethod_get_CallingConvention_m22233 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___callingConvention_5);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.DynamicMethod::get_DeclaringType()
extern "C" Type_t * DynamicMethod_get_DeclaringType_m22234 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4908  DynamicMethod_get_MethodHandle_m22235 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		RuntimeMethodHandle_t4908  L_0 = (__this->___mhandle_0);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.DynamicMethod::get_Module()
extern "C" Module_t5024 * DynamicMethod_get_Module_m22236 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		Module_t5024 * L_0 = (__this->___module_6);
		return L_0;
	}
}
// System.String System.Reflection.Emit.DynamicMethod::get_Name()
extern "C" String_t* DynamicMethod_get_Name_m22237 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.DynamicMethod::get_ReflectedType()
extern "C" Type_t * DynamicMethod_get_ReflectedType_m22238 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Type System.Reflection.Emit.DynamicMethod::get_ReturnType()
extern "C" Type_t * DynamicMethod_get_ReturnType_m22239 (DynamicMethod_t4554 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___returnType_2);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.DynamicMethod::AddRef(System.Object)
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern "C" int32_t DynamicMethod_AddRef_m22240 (DynamicMethod_t4554 * __this, Object_t * ___reference, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t697* V_0 = {0};
	{
		ObjectU5BU5D_t697* L_0 = (__this->___refs_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		__this->___refs_11 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 4));
	}

IL_0014:
	{
		int32_t L_1 = (__this->___nrefs_10);
		ObjectU5BU5D_t697* L_2 = (__this->___refs_11);
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)1)))))
		{
			goto IL_0051;
		}
	}
	{
		ObjectU5BU5D_t697* L_3 = (__this->___refs_11);
		NullCheck(L_3);
		V_0 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		ObjectU5BU5D_t697* L_4 = (__this->___refs_11);
		ObjectU5BU5D_t697* L_5 = V_0;
		ObjectU5BU5D_t697* L_6 = (__this->___refs_11);
		NullCheck(L_6);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (Array_t *)(Array_t *)L_5, (((int32_t)(((Array_t *)L_6)->max_length))), /*hidden argument*/NULL);
		ObjectU5BU5D_t697* L_7 = V_0;
		__this->___refs_11 = L_7;
	}

IL_0051:
	{
		ObjectU5BU5D_t697* L_8 = (__this->___refs_11);
		int32_t L_9 = (__this->___nrefs_10);
		Object_t * L_10 = ___reference;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, L_9)) = (Object_t *)L_10;
		ObjectU5BU5D_t697* L_11 = (__this->___refs_11);
		int32_t L_12 = (__this->___nrefs_10);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)((int32_t)L_12+(int32_t)1)));
		ArrayElementTypeCheck (L_11, NULL);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, ((int32_t)((int32_t)L_12+(int32_t)1)))) = (Object_t *)NULL;
		int32_t L_13 = (__this->___nrefs_10);
		__this->___nrefs_10 = ((int32_t)((int32_t)L_13+(int32_t)2));
		int32_t L_14 = (__this->___nrefs_10);
		return ((int32_t)((int32_t)L_14-(int32_t)1));
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.DynamicMethodTokenGenerator::.ctor(System.Reflection.Emit.DynamicMethod)
extern "C" void DynamicMethodTokenGenerator__ctor_m22241 (DynamicMethodTokenGenerator_t5059 * __this, DynamicMethod_t4554 * ___m, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		DynamicMethod_t4554 * L_0 = ___m;
		__this->___m_0 = L_0;
		return;
	}
}
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.String)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22242 (DynamicMethodTokenGenerator_t5059 * __this, String_t* ___str, const MethodInfo* method)
{
	{
		DynamicMethod_t4554 * L_0 = (__this->___m_0);
		String_t* L_1 = ___str;
		NullCheck(L_0);
		int32_t L_2 = DynamicMethod_AddRef_m22240(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22243 (DynamicMethodTokenGenerator_t5059 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1221* ___opt_param_types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1447 * L_0 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.DynamicMethodTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t DynamicMethodTokenGenerator_GetToken_m22244 (DynamicMethodTokenGenerator_t5059 * __this, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		DynamicMethod_t4554 * L_0 = (__this->___m_0);
		MemberInfo_t * L_1 = ___member;
		NullCheck(L_0);
		int32_t L_2 = DynamicMethod_AddRef_m22240(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilderMethodDeclarations.h"



// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t784 * EnumBuilder_get_Assembly_m22245 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Assembly_t784 * L_1 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m22246 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m22247 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.TypeBuilder::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m22248 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m22249 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Reflection.Emit.TypeBuilder::get_FullName() */, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t5024 * EnumBuilder_get_Module_m22250 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m22251 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m22252 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Reflection.Emit.TypeBuilder::get_Namespace() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m22253 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4730  EnumBuilder_get_TypeHandle_m22254 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t4730  L_1 = (RuntimeTypeHandle_t4730 )VirtFuncInvoker0< RuntimeTypeHandle_t4730  >::Invoke(35 /* System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m22255 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____underlyingType_9);
		return L_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m22256 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_19);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1399 * EnumBuilder_GetConstructorImpl_m22257 (EnumBuilder_t5060 * __this, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t2971 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t1221* L_4 = ___types;
		ParameterModifierU5BU5D_t2972* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t1399 * L_6 = (ConstructorInfo_t1399 *)VirtFuncInvoker5< ConstructorInfo_t1399 *, int32_t, Binder_t2971 *, int32_t, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(77 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1474* EnumBuilder_GetConstructors_m22258 (EnumBuilder_t5060 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1474* L_2 = (ConstructorInfoU5BU5D_t1474*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1474*, int32_t >::Invoke(79 /* System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t697* EnumBuilder_GetCustomAttributes_m22259 (EnumBuilder_t5060 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_2 = (ObjectU5BU5D_t697*)VirtFuncInvoker1< ObjectU5BU5D_t697*, bool >::Invoke(12 /* System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t697* EnumBuilder_GetCustomAttributes_m22260 (EnumBuilder_t5060 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_3 = (ObjectU5BU5D_t697*)VirtFuncInvoker2< ObjectU5BU5D_t697*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m22261 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(44 /* System.Type System.Reflection.Emit.TypeBuilder::GetElementType() */, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m22262 (EnumBuilder_t5060 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m22263 (EnumBuilder_t5060 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2968* EnumBuilder_GetFields_m22264 (EnumBuilder_t5060 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfoU5BU5D_t2968* L_2 = (FieldInfoU5BU5D_t2968*)VirtFuncInvoker1< FieldInfoU5BU5D_t2968*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t1221* EnumBuilder_GetInterfaces_m22265 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		TypeU5BU5D_t1221* L_1 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(40 /* System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m22266 (EnumBuilder_t5060 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		TypeU5BU5D_t1221* L_0 = ___types;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeBuilder_t5052 * L_1 = (__this->____tb_8);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		TypeBuilder_t5052 * L_5 = (__this->____tb_8);
		String_t* L_6 = ___name;
		int32_t L_7 = ___bindingAttr;
		Binder_t2971 * L_8 = ___binder;
		int32_t L_9 = ___callConvention;
		TypeU5BU5D_t1221* L_10 = ___types;
		ParameterModifierU5BU5D_t2972* L_11 = ___modifiers;
		NullCheck(L_5);
		MethodInfo_t * L_12 = (MethodInfo_t *)VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t2971 *, int32_t, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(53 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2160* EnumBuilder_GetMethods_m22267 (EnumBuilder_t5060 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t2160* L_2 = (MethodInfoU5BU5D_t2160*)VirtFuncInvoker1< MethodInfoU5BU5D_t2160*, int32_t >::Invoke(56 /* System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.EnumBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1473* EnumBuilder_GetProperties_m22268 (EnumBuilder_t5060 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		PropertyInfoU5BU5D_t1473* L_2 = (PropertyInfoU5BU5D_t1473*)VirtFuncInvoker1< PropertyInfoU5BU5D_t1473*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m22269 (EnumBuilder_t5060 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = EnumBuilder_CreateNotSupportedException_m22279(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m22270 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m22271 (EnumBuilder_t5060 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2971 * ___binder, Object_t * ___target, ObjectU5BU5D_t697* ___args, ParameterModifierU5BU5D_t2972* ___modifiers, CultureInfo_t783 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t2971 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t697* L_5 = ___args;
		ParameterModifierU5BU5D_t2972* L_6 = ___modifiers;
		CultureInfo_t783 * L_7 = ___culture;
		StringU5BU5D_t75* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t2971 *, Object_t *, ObjectU5BU5D_t697*, ParameterModifierU5BU5D_t2972*, CultureInfo_t783 *, StringU5BU5D_t75* >::Invoke(80 /* System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m22272 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m22273 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m22274 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m22275 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m22276 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m22277 (EnumBuilder_t5060 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::MakeByRefType()
extern TypeInfo* ByRefType_t5057_il2cpp_TypeInfo_var;
extern "C" Type_t * EnumBuilder_MakeByRefType_m22278 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByRefType_t5057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9090);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByRefType_t5057 * L_0 = (ByRefType_t5057 *)il2cpp_codegen_object_new (ByRefType_t5057_il2cpp_TypeInfo_var);
		ByRefType__ctor_m22211(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * EnumBuilder_CreateNotSupportedException_m22279 (EnumBuilder_t5060 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilderMethodDeclarations.h"



// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C" int32_t FieldBuilder_get_Attributes_m22280 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C" Type_t * FieldBuilder_get_DeclaringType_m22281 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C" RuntimeFieldHandle_t4731  FieldBuilder_get_FieldHandle_m22282 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C" Type_t * FieldBuilder_get_FieldType_m22283 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C" String_t* FieldBuilder_get_Name_m22284 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C" Type_t * FieldBuilder_get_ReflectedType_m22285 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* FieldBuilder_GetCustomAttributes_m22286 (FieldBuilder_t5061 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_3 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Exception_t57 * L_4 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* FieldBuilder_GetCustomAttributes_m22287 (FieldBuilder_t5061 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_4 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		Exception_t57 * L_5 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C" Object_t * FieldBuilder_GetValue_m22288 (FieldBuilder_t5061 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool FieldBuilder_IsDefined_m22289 (FieldBuilder_t5061 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C" int32_t FieldBuilder_GetFieldOffset_m22290 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C" void FieldBuilder_SetValue_m22291 (FieldBuilder_t5061 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t2971 * ___binder, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = FieldBuilder_CreateNotSupportedException_m22293(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C" UnmanagedMarshal_t5033 * FieldBuilder_get_UMarshal_m22292 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		UnmanagedMarshal_t5033 * L_0 = (__this->___marshal_info_4);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * FieldBuilder_CreateNotSupportedException_m22293 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C" Module_t5024 * FieldBuilder_get_Module_m22294 (FieldBuilder_t5061 * __this, const MethodInfo* method)
{
	{
		Module_t5024 * L_0 = MemberInfo_get_Module_m19264(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilderMethodDeclarations.h"



// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m22295 (GenericTypeParameterBuilder_t5063 * __this, Type_t * ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		TypeBuilder_t5052 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_1, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		AssemblyBuilder_t5050 * L_2 = (((ModuleBuilder_t5049 *)Castclass(L_1, ModuleBuilder_t5049_il2cpp_TypeInfo_var))->___assemblyb_14);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m22140(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t57 * L_4 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		Type_t * L_7 = ___c;
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType() */, __this);
		Type_t * L_9 = ___c;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(39 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_8, L_9);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m22296 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_1, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		AssemblyBuilder_t5050 * L_2 = (((ModuleBuilder_t5049 *)Castclass(L_1, ModuleBuilder_t5049_il2cpp_TypeInfo_var))->___assemblyb_14);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m22140(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Exception_t57 * L_4 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1399 * GenericTypeParameterBuilder_GetConstructorImpl_m22297 (GenericTypeParameterBuilder_t5063 * __this, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1474* GenericTypeParameterBuilder_GetConstructors_m22298 (GenericTypeParameterBuilder_t5063 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m22299 (GenericTypeParameterBuilder_t5063 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m22300 (GenericTypeParameterBuilder_t5063 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t2968* GenericTypeParameterBuilder_GetFields_m22301 (GenericTypeParameterBuilder_t5063 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t1221* GenericTypeParameterBuilder_GetInterfaces_m22302 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2160* GenericTypeParameterBuilder_GetMethods_m22303 (GenericTypeParameterBuilder_t5063 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m22304 (GenericTypeParameterBuilder_t5063 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1473* GenericTypeParameterBuilder_GetProperties_m22305 (GenericTypeParameterBuilder_t5063 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m22306 (GenericTypeParameterBuilder_t5063 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m22307 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m22308 (GenericTypeParameterBuilder_t5063 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m22309 (GenericTypeParameterBuilder_t5063 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m22310 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m22311 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m22312 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m22313 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m22314 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = (__this->___base_type_11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___base_type_11);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m22315 (GenericTypeParameterBuilder_t5063 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2971 * ___binder, Object_t * ___target, ObjectU5BU5D_t697* ___args, ParameterModifierU5BU5D_t2972* ___modifiers, CultureInfo_t783 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m22316 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m22317 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern "C" Assembly_t784 * GenericTypeParameterBuilder_get_Assembly_m22318 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Assembly_t784 * L_1 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m22319 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m22320 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___base_type_11);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m22321 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool GenericTypeParameterBuilder_IsDefined_m22322 (GenericTypeParameterBuilder_t5063 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t697* GenericTypeParameterBuilder_GetCustomAttributes_m22323 (GenericTypeParameterBuilder_t5063 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t697* GenericTypeParameterBuilder_GetCustomAttributes_m22324 (GenericTypeParameterBuilder_t5063 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m22325 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m22326 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern "C" Module_t5024 * GenericTypeParameterBuilder_get_Module_m22327 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t5024 * L_1 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m22328 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	Type_t * G_B3_0 = {0};
	{
		MethodBuilder_t5062 * L_0 = (__this->___mbuilder_9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MethodBuilder_t5062 * L_1 = (__this->___mbuilder_9);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType() */, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		TypeBuilder_t5052 * L_3 = (__this->___tbuilder_8);
		G_B3_0 = ((Type_t *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m22329 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType() */, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4730  GenericTypeParameterBuilder_get_TypeHandle_m22330 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = GenericTypeParameterBuilder_not_supported_m22337(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* GenericTypeParameterBuilder_GetGenericArguments_m22331 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1447 * L_0 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m22332 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t1447 * L_0 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m22333 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m22334 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m22335 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m22336 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * GenericTypeParameterBuilder_not_supported_m22337 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
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
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern "C" String_t* GenericTypeParameterBuilder_ToString_m22338 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern "C" bool GenericTypeParameterBuilder_Equals_m22339 (GenericTypeParameterBuilder_t5063 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Type_Equals_m19210(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m22340 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Type_GetHashCode_m19225(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeByRefType()
extern TypeInfo* ByRefType_t5057_il2cpp_TypeInfo_var;
extern "C" Type_t * GenericTypeParameterBuilder_MakeByRefType_m22341 (GenericTypeParameterBuilder_t5063 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByRefType_t5057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9090);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByRefType_t5057 * L_0 = (ByRefType_t5057 *)il2cpp_codegen_object_new (ByRefType_t5057_il2cpp_TypeInfo_var);
		ByRefType__ctor_m22211(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m22342 (GenericTypeParameterBuilder_t5063 * __this, TypeU5BU5D_t1221* ___typeArguments, const MethodInfo* method)
{
	{
		TypeU5BU5D_t1221* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m19256(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ILTokenInfo
#include "mscorlib_System_Reflection_Emit_ILTokenInfoMethodDeclarations.h"



// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixup.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ILGenerator/LabelFixup
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelFixupMethodDeclarations.h"



// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelDataMethodDeclarations.h"



// System.Void System.Reflection.Emit.ILGenerator/LabelData::.ctor(System.Int32,System.Int32)
extern "C" void LabelData__ctor_m22343 (LabelData_t5066 * __this, int32_t ___addr, int32_t ___maxStack, const MethodInfo* method)
{
	{
		int32_t L_0 = ___addr;
		__this->___addr_0 = L_0;
		int32_t L_1 = ___maxStack;
		__this->___maxStack_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCode.h"
// System.Reflection.Emit.StackBehaviour
#include "mscorlib_System_Reflection_Emit_StackBehaviour.h"
// System.Reflection.Emit.OperandType
#include "mscorlib_System_Reflection_Emit_OperandType.h"
// System.Reflection.Emit.LocalBuilder
#include "mscorlib_System_Reflection_Emit_LocalBuilder.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Reflection.Emit.OpCodes
#include "mscorlib_System_Reflection_Emit_OpCodes.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Reflection.Emit.OpCode
#include "mscorlib_System_Reflection_Emit_OpCodeMethodDeclarations.h"
// System.Reflection.Emit.LocalBuilder
#include "mscorlib_System_Reflection_Emit_LocalBuilderMethodDeclarations.h"
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_LabelMethodDeclarations.h"
// System.Reflection.Emit.OpCodes
#include "mscorlib_System_Reflection_Emit_OpCodesMethodDeclarations.h"


// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var;
extern "C" void ILGenerator__ctor_m22344 (ILGenerator_t4553 * __this, Module_t5024 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9094);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		___size = ((int32_t)128);
	}

IL_0013:
	{
		int32_t L_1 = ___size;
		__this->___code_1 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_1));
		__this->___token_fixups_7 = ((ILTokenInfoU5BU5D_t5068*)SZArrayNew(ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var, 8));
		Module_t5024 * L_2 = ___m;
		__this->___module_12 = L_2;
		Object_t * L_3 = ___token_gen;
		__this->___token_gen_13 = L_3;
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern const Il2CppType* Void_t85_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" void ILGenerator__cctor_m22345 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Void_t85_0_0_0_var = il2cpp_codegen_type_from_index(62);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Void_t85_0_0_0_var), /*hidden argument*/NULL);
		((ILGenerator_t4553_StaticFields*)ILGenerator_t4553_il2cpp_TypeInfo_var->static_fields)->___void_type_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern TypeInfo* ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_add_token_fixup_m22346 (ILGenerator_t4553 * __this, MemberInfo_t * ___mi, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9094);
		s_Il2CppMethodIntialized = true;
	}
	ILTokenInfoU5BU5D_t5068* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___num_token_fixups_6);
		ILTokenInfoU5BU5D_t5068* L_1 = (__this->___token_fixups_7);
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = (__this->___num_token_fixups_6);
		V_0 = ((ILTokenInfoU5BU5D_t5068*)SZArrayNew(ILTokenInfoU5BU5D_t5068_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_2*(int32_t)2))));
		ILTokenInfoU5BU5D_t5068* L_3 = (__this->___token_fixups_7);
		ILTokenInfoU5BU5D_t5068* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_3, (Array_t *)(Array_t *)L_4, 0);
		ILTokenInfoU5BU5D_t5068* L_5 = V_0;
		__this->___token_fixups_7 = L_5;
	}

IL_0032:
	{
		ILTokenInfoU5BU5D_t5068* L_6 = (__this->___token_fixups_7);
		int32_t L_7 = (__this->___num_token_fixups_6);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		MemberInfo_t * L_8 = ___mi;
		((ILTokenInfo_t5064 *)(ILTokenInfo_t5064 *)SZArrayLdElema(L_6, L_7))->___member_0 = L_8;
		ILTokenInfoU5BU5D_t5068* L_9 = (__this->___token_fixups_7);
		int32_t L_10 = (__this->___num_token_fixups_6);
		int32_t L_11 = L_10;
		V_1 = L_11;
		__this->___num_token_fixups_6 = ((int32_t)((int32_t)L_11+(int32_t)1));
		int32_t L_12 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_12);
		int32_t L_13 = (__this->___code_len_2);
		((ILTokenInfo_t5064 *)(ILTokenInfo_t5064 *)SZArrayLdElema(L_9, L_12))->___code_pos_1 = L_13;
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_make_room_m22347 (ILGenerator_t4553 * __this, int32_t ___nbytes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t66* V_0 = {0};
	{
		int32_t L_0 = (__this->___code_len_2);
		int32_t L_1 = ___nbytes;
		ByteU5BU5D_t66* L_2 = (__this->___code_1);
		NullCheck(L_2);
		if ((((int32_t)((int32_t)((int32_t)L_0+(int32_t)L_1))) >= ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_3 = (__this->___code_len_2);
		int32_t L_4 = ___nbytes;
		V_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3+(int32_t)L_4))*(int32_t)2))+(int32_t)((int32_t)128)))));
		ByteU5BU5D_t66* L_5 = (__this->___code_1);
		ByteU5BU5D_t66* L_6 = V_0;
		ByteU5BU5D_t66* L_7 = (__this->___code_1);
		NullCheck(L_7);
		Array_Copy_m14792(NULL /*static, unused*/, (Array_t *)(Array_t *)L_5, 0, (Array_t *)(Array_t *)L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))), /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_8 = V_0;
		__this->___code_1 = L_8;
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C" void ILGenerator_emit_int_m22348 (ILGenerator_t4553 * __this, int32_t ___val, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t66* L_0 = (__this->___code_1);
		int32_t L_1 = (__this->___code_len_2);
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___code_len_2 = ((int32_t)((int32_t)L_2+(int32_t)1));
		int32_t L_3 = V_0;
		int32_t L_4 = ___val;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_3)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_5 = (__this->___code_1);
		int32_t L_6 = (__this->___code_len_2);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___code_len_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		int32_t L_9 = ___val;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_8)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)8))&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_10 = (__this->___code_1);
		int32_t L_11 = (__this->___code_len_2);
		int32_t L_12 = L_11;
		V_0 = L_12;
		__this->___code_len_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_0;
		int32_t L_14 = ___val;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, L_13)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_15 = (__this->___code_1);
		int32_t L_16 = (__this->___code_len_2);
		int32_t L_17 = L_16;
		V_0 = L_17;
		__this->___code_len_2 = ((int32_t)((int32_t)L_17+(int32_t)1));
		int32_t L_18 = V_0;
		int32_t L_19 = ___val;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_18);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_18)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_19>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_ll_emit_m22349 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = {0};
	{
		int32_t L_0 = OpCode_get_Size_m22447((&___opcode), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_t66* L_1 = (__this->___code_1);
		int32_t L_2 = (__this->___code_len_2);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___code_len_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		uint8_t L_5 = ((&___opcode)->___op1_0);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_4)) = (uint8_t)L_5;
	}

IL_0029:
	{
		ByteU5BU5D_t66* L_6 = (__this->___code_1);
		int32_t L_7 = (__this->___code_len_2);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___code_len_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ((&___opcode)->___op2_1);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_9);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)L_10;
		int32_t L_11 = OpCode_get_StackBehaviourPush_m22450((&___opcode), /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 0)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 1)
		{
			goto IL_008f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 2)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 3)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 4)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 5)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 6)
		{
			goto IL_007f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 7)
		{
			goto IL_009f;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)((int32_t)19))) == 8)
		{
			goto IL_007f;
		}
	}
	{
		goto IL_009f;
	}

IL_007f:
	{
		int32_t L_13 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
		goto IL_009f;
	}

IL_008f:
	{
		int32_t L_14 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_14+(int32_t)2));
		goto IL_009f;
	}

IL_009f:
	{
		int32_t L_15 = (__this->___max_stack_3);
		int32_t L_16 = (__this->___cur_stack_4);
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_17 = (__this->___cur_stack_4);
		__this->___max_stack_3 = L_17;
	}

IL_00b9:
	{
		int32_t L_18 = OpCode_get_StackBehaviourPop_m22449((&___opcode), /*hidden argument*/NULL);
		V_1 = L_18;
		int32_t L_19 = V_1;
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 0)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 1)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 2)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 3)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 4)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 5)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 6)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 7)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 8)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 9)
		{
			goto IL_0135;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 10)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 11)
		{
			goto IL_0145;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 12)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 13)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 14)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 15)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 16)
		{
			goto IL_0155;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 17)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 18)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 19)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 20)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 21)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 22)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 23)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 24)
		{
			goto IL_0165;
		}
		if (((int32_t)((int32_t)L_19-(int32_t)1)) == 25)
		{
			goto IL_0133;
		}
	}
	{
		goto IL_0165;
	}

IL_0133:
	{
		goto IL_0165;
	}

IL_0135:
	{
		int32_t L_20 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_20-(int32_t)1));
		goto IL_0165;
	}

IL_0145:
	{
		int32_t L_21 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_21-(int32_t)2));
		goto IL_0165;
	}

IL_0155:
	{
		int32_t L_22 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_22-(int32_t)3));
		goto IL_0165;
	}

IL_0165:
	{
		return;
	}
}
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C" int32_t ILGenerator_target_len_m22350 (Object_t * __this /* static, unused */, OpCode_t4584  ___opcode, const MethodInfo* method)
{
	{
		int32_t L_0 = OpCode_get_OperandType_m22448((&___opcode), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 4;
	}

IL_000b:
	{
		return 1;
	}
}
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C" LocalBuilder_t4479 * ILGenerator_DeclareLocal_m22351 (ILGenerator_t4553 * __this, Type_t * ___localType, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___localType;
		LocalBuilder_t4479 * L_1 = (LocalBuilder_t4479 *)VirtFuncInvoker2< LocalBuilder_t4479 *, Type_t *, bool >::Invoke(5 /* System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean) */, __this, L_0, 0);
		return L_1;
	}
}
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* LocalBuilder_t4479_il2cpp_TypeInfo_var;
extern TypeInfo* LocalBuilderU5BU5D_t5067_il2cpp_TypeInfo_var;
extern "C" LocalBuilder_t4479 * ILGenerator_DeclareLocal_m22352 (ILGenerator_t4553 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		LocalBuilder_t4479_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9096);
		LocalBuilderU5BU5D_t5067_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9097);
		s_Il2CppMethodIntialized = true;
	}
	LocalBuilder_t4479 * V_0 = {0};
	LocalBuilderU5BU5D_t5067* V_1 = {0};
	{
		Type_t * L_0 = ___localType;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5625, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___localType;
		NullCheck(L_2);
		bool L_3 = Type_get_IsUserType_m19262(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_t56 * L_4 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_4, (String_t*) &_stringLiteral5626, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		Type_t * L_5 = ___localType;
		LocalBuilder_t4479 * L_6 = (LocalBuilder_t4479 *)il2cpp_codegen_object_new (LocalBuilder_t4479_il2cpp_TypeInfo_var);
		LocalBuilder__ctor_m22373(L_6, L_5, __this, /*hidden argument*/NULL);
		V_0 = L_6;
		LocalBuilder_t4479 * L_7 = V_0;
		bool L_8 = ___pinned;
		NullCheck(L_7);
		((LocalVariableInfo_t5017 *)L_7)->___is_pinned_1 = L_8;
		LocalBuilderU5BU5D_t5067* L_9 = (__this->___locals_5);
		if (!L_9)
		{
			goto IL_0070;
		}
	}
	{
		LocalBuilderU5BU5D_t5067* L_10 = (__this->___locals_5);
		NullCheck(L_10);
		V_1 = ((LocalBuilderU5BU5D_t5067*)SZArrayNew(LocalBuilderU5BU5D_t5067_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))+(int32_t)1))));
		LocalBuilderU5BU5D_t5067* L_11 = (__this->___locals_5);
		LocalBuilderU5BU5D_t5067* L_12 = V_1;
		LocalBuilderU5BU5D_t5067* L_13 = (__this->___locals_5);
		NullCheck(L_13);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/NULL);
		LocalBuilderU5BU5D_t5067* L_14 = V_1;
		LocalBuilderU5BU5D_t5067* L_15 = (__this->___locals_5);
		NullCheck(L_15);
		LocalBuilder_t4479 * L_16 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, (((int32_t)(((Array_t *)L_15)->max_length))));
		ArrayElementTypeCheck (L_14, L_16);
		*((LocalBuilder_t4479 **)(LocalBuilder_t4479 **)SZArrayLdElema(L_14, (((int32_t)(((Array_t *)L_15)->max_length))))) = (LocalBuilder_t4479 *)L_16;
		LocalBuilderU5BU5D_t5067* L_17 = V_1;
		__this->___locals_5 = L_17;
		goto IL_0085;
	}

IL_0070:
	{
		__this->___locals_5 = ((LocalBuilderU5BU5D_t5067*)SZArrayNew(LocalBuilderU5BU5D_t5067_il2cpp_TypeInfo_var, 1));
		LocalBuilderU5BU5D_t5067* L_18 = (__this->___locals_5);
		LocalBuilder_t4479 * L_19 = V_0;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		ArrayElementTypeCheck (L_18, L_19);
		*((LocalBuilder_t4479 **)(LocalBuilder_t4479 **)SZArrayLdElema(L_18, 0)) = (LocalBuilder_t4479 *)L_19;
	}

IL_0085:
	{
		LocalBuilder_t4479 * L_20 = V_0;
		LocalBuilderU5BU5D_t5067* L_21 = (__this->___locals_5);
		NullCheck(L_21);
		NullCheck(L_20);
		((LocalVariableInfo_t5017 *)L_20)->___position_2 = (((uint16_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_21)->max_length)))-(int32_t)1))));
		LocalBuilder_t4479 * L_22 = V_0;
		return L_22;
	}
}
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern TypeInfo* LabelDataU5BU5D_t5069_il2cpp_TypeInfo_var;
extern "C" Label_t4475  ILGenerator_DefineLabel_m22353 (ILGenerator_t4553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LabelDataU5BU5D_t5069_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9098);
		s_Il2CppMethodIntialized = true;
	}
	LabelDataU5BU5D_t5069* V_0 = {0};
	int32_t V_1 = 0;
	{
		LabelDataU5BU5D_t5069* L_0 = (__this->___labels_8);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		__this->___labels_8 = ((LabelDataU5BU5D_t5069*)SZArrayNew(LabelDataU5BU5D_t5069_il2cpp_TypeInfo_var, 4));
		goto IL_0051;
	}

IL_0016:
	{
		int32_t L_1 = (__this->___num_labels_9);
		LabelDataU5BU5D_t5069* L_2 = (__this->___labels_8);
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)(((Array_t *)L_2)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		LabelDataU5BU5D_t5069* L_3 = (__this->___labels_8);
		NullCheck(L_3);
		V_0 = ((LabelDataU5BU5D_t5069*)SZArrayNew(LabelDataU5BU5D_t5069_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		LabelDataU5BU5D_t5069* L_4 = (__this->___labels_8);
		LabelDataU5BU5D_t5069* L_5 = V_0;
		LabelDataU5BU5D_t5069* L_6 = (__this->___labels_8);
		NullCheck(L_6);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (Array_t *)(Array_t *)L_5, (((int32_t)(((Array_t *)L_6)->max_length))), /*hidden argument*/NULL);
		LabelDataU5BU5D_t5069* L_7 = V_0;
		__this->___labels_8 = L_7;
	}

IL_0051:
	{
		LabelDataU5BU5D_t5069* L_8 = (__this->___labels_8);
		int32_t L_9 = (__this->___num_labels_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		LabelData_t5066  L_10 = {0};
		LabelData__ctor_m22343(&L_10, (-1), 0, /*hidden argument*/NULL);
		*((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_8, L_9)) = L_10;
		int32_t L_11 = (__this->___num_labels_9);
		int32_t L_12 = L_11;
		V_1 = L_12;
		__this->___num_labels_9 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_1;
		Label_t4475  L_14 = {0};
		Label__ctor_m22370(&L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_Emit_m22354 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, const MethodInfo* method)
{
	{
		ILGenerator_make_room_m22347(__this, 2, /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C" void ILGenerator_Emit_m22355 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, uint8_t ___arg, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ILGenerator_make_room_m22347(__this, 3, /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_1 = (__this->___code_1);
		int32_t L_2 = (__this->___code_len_2);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___code_len_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		uint8_t L_5 = ___arg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_4)) = (uint8_t)L_5;
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22356 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, ConstructorInfo_t1399 * ___con, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (__this->___token_gen_13);
		ConstructorInfo_t1399 * L_1 = ___con;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, MemberInfo_t * >::Invoke(1 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.Reflection.MemberInfo) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_3 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_3, /*hidden argument*/NULL);
		ConstructorInfo_t1399 * L_4 = ___con;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		NullCheck(L_5);
		Module_t5024 * L_6 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_5);
		Module_t5024 * L_7 = (__this->___module_12);
		if ((!(((Object_t*)(Module_t5024 *)L_6) == ((Object_t*)(Module_t5024 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ConstructorInfo_t1399 * L_8 = ___con;
		ILGenerator_add_token_fixup_m22346(__this, L_8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		ILGenerator_emit_int_m22348(__this, L_9, /*hidden argument*/NULL);
		int32_t L_10 = OpCode_get_StackBehaviourPop_m22449((&___opcode), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_11 = (__this->___cur_stack_4);
		ConstructorInfo_t1399 * L_12 = ___con;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Reflection.MethodBase::GetParameterCount() */, L_12);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_11-(int32_t)L_13));
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22357 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, FieldInfo_t * ___field, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (__this->___token_gen_13);
		FieldInfo_t * L_1 = ___field;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, MemberInfo_t * >::Invoke(1 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.Reflection.MemberInfo) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_3 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_3, /*hidden argument*/NULL);
		FieldInfo_t * L_4 = ___field;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		NullCheck(L_5);
		Module_t5024 * L_6 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_5);
		Module_t5024 * L_7 = (__this->___module_12);
		if ((!(((Object_t*)(Module_t5024 *)L_6) == ((Object_t*)(Module_t5024 *)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		FieldInfo_t * L_8 = ___field;
		ILGenerator_add_token_fixup_m22346(__this, L_8, /*hidden argument*/NULL);
	}

IL_0035:
	{
		int32_t L_9 = V_0;
		ILGenerator_emit_int_m22348(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C" void ILGenerator_Emit_m22358 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, int32_t ___arg, const MethodInfo* method)
{
	{
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___arg;
		ILGenerator_emit_int_m22348(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int64)
extern "C" void ILGenerator_Emit_m22359 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, int64_t ___arg, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ILGenerator_make_room_m22347(__this, ((int32_t)10), /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t66* L_1 = (__this->___code_1);
		int32_t L_2 = (__this->___code_len_2);
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->___code_len_2 = ((int32_t)((int32_t)L_3+(int32_t)1));
		int32_t L_4 = V_0;
		int64_t L_5 = ___arg;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_4)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)L_5&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_6 = (__this->___code_1);
		int32_t L_7 = (__this->___code_len_2);
		int32_t L_8 = L_7;
		V_0 = L_8;
		__this->___code_len_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
		int32_t L_9 = V_0;
		int64_t L_10 = ___arg;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_9);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_9)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_10>>(int32_t)8))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_11 = (__this->___code_1);
		int32_t L_12 = (__this->___code_len_2);
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->___code_len_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
		int32_t L_14 = V_0;
		int64_t L_15 = ___arg;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_14);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_11, L_14)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_15>>(int32_t)((int32_t)16)))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_16 = (__this->___code_1);
		int32_t L_17 = (__this->___code_len_2);
		int32_t L_18 = L_17;
		V_0 = L_18;
		__this->___code_len_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_0;
		int64_t L_20 = ___arg;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_19)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_20>>(int32_t)((int32_t)24)))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_21 = (__this->___code_1);
		int32_t L_22 = (__this->___code_len_2);
		int32_t L_23 = L_22;
		V_0 = L_23;
		__this->___code_len_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_0;
		int64_t L_25 = ___arg;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_24);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, L_24)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_25>>(int32_t)((int32_t)32)))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_26 = (__this->___code_1);
		int32_t L_27 = (__this->___code_len_2);
		int32_t L_28 = L_27;
		V_0 = L_28;
		__this->___code_len_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
		int32_t L_29 = V_0;
		int64_t L_30 = ___arg;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_29);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_29)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_30>>(int32_t)((int32_t)40)))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_31 = (__this->___code_1);
		int32_t L_32 = (__this->___code_len_2);
		int32_t L_33 = L_32;
		V_0 = L_33;
		__this->___code_len_2 = ((int32_t)((int32_t)L_33+(int32_t)1));
		int32_t L_34 = V_0;
		int64_t L_35 = ___arg;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_34);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, L_34)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_35>>(int32_t)((int32_t)48)))&(int64_t)(((int64_t)((int32_t)255)))))));
		ByteU5BU5D_t66* L_36 = (__this->___code_1);
		int32_t L_37 = (__this->___code_len_2);
		int32_t L_38 = L_37;
		V_0 = L_38;
		__this->___code_len_2 = ((int32_t)((int32_t)L_38+(int32_t)1));
		int32_t L_39 = V_0;
		int64_t L_40 = ___arg;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_39);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_39)) = (uint8_t)(((uint8_t)((int64_t)((int64_t)((int64_t)((int64_t)L_40>>(int32_t)((int32_t)56)))&(int64_t)(((int64_t)((int32_t)255)))))));
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern TypeInfo* LabelFixupU5BU5D_t5070_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22360 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, Label_t4475  ___label, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		LabelFixupU5BU5D_t5070_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9101);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	LabelFixupU5BU5D_t5070* V_1 = {0};
	{
		OpCode_t4584  L_0 = ___opcode;
		IL2CPP_RUNTIME_CLASS_INIT(ILGenerator_t4553_il2cpp_TypeInfo_var);
		int32_t L_1 = ILGenerator_target_len_m22350(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_2 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_2, /*hidden argument*/NULL);
		int32_t L_3 = (__this->___cur_stack_4);
		LabelDataU5BU5D_t5069* L_4 = (__this->___labels_8);
		int32_t L_5 = ((&___label)->___label_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_4, L_5))->___maxStack_1);
		if ((((int32_t)L_3) <= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}
	{
		LabelDataU5BU5D_t5069* L_7 = (__this->___labels_8);
		int32_t L_8 = ((&___label)->___label_0);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = (__this->___cur_stack_4);
		((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_7, L_8))->___maxStack_1 = L_9;
	}

IL_0051:
	{
		LabelFixupU5BU5D_t5070* L_10 = (__this->___fixups_10);
		if (L_10)
		{
			goto IL_0067;
		}
	}
	{
		__this->___fixups_10 = ((LabelFixupU5BU5D_t5070*)SZArrayNew(LabelFixupU5BU5D_t5070_il2cpp_TypeInfo_var, 4));
		goto IL_00a2;
	}

IL_0067:
	{
		int32_t L_11 = (__this->___num_fixups_11);
		LabelFixupU5BU5D_t5070* L_12 = (__this->___fixups_10);
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		LabelFixupU5BU5D_t5070* L_13 = (__this->___fixups_10);
		NullCheck(L_13);
		V_1 = ((LabelFixupU5BU5D_t5070*)SZArrayNew(LabelFixupU5BU5D_t5070_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_13)->max_length)))*(int32_t)2))));
		LabelFixupU5BU5D_t5070* L_14 = (__this->___fixups_10);
		LabelFixupU5BU5D_t5070* L_15 = V_1;
		LabelFixupU5BU5D_t5070* L_16 = (__this->___fixups_10);
		NullCheck(L_16);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_14, (Array_t *)(Array_t *)L_15, (((int32_t)(((Array_t *)L_16)->max_length))), /*hidden argument*/NULL);
		LabelFixupU5BU5D_t5070* L_17 = V_1;
		__this->___fixups_10 = L_17;
	}

IL_00a2:
	{
		LabelFixupU5BU5D_t5070* L_18 = (__this->___fixups_10);
		int32_t L_19 = (__this->___num_fixups_11);
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = V_0;
		((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_18, L_19))->___offset_0 = L_20;
		LabelFixupU5BU5D_t5070* L_21 = (__this->___fixups_10);
		int32_t L_22 = (__this->___num_fixups_11);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (__this->___code_len_2);
		((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_21, L_22))->___pos_1 = L_23;
		LabelFixupU5BU5D_t5070* L_24 = (__this->___fixups_10);
		int32_t L_25 = (__this->___num_fixups_11);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, L_25);
		int32_t L_26 = ((&___label)->___label_0);
		((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_24, L_25))->___label_idx_2 = L_26;
		int32_t L_27 = (__this->___num_fixups_11);
		__this->___num_fixups_11 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = (__this->___code_len_2);
		int32_t L_29 = V_0;
		__this->___code_len_2 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22361 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, LocalBuilder_t4479 * ___local, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		LocalBuilder_t4479 * L_0 = ___local;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral2452, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		LocalBuilder_t4479 * L_2 = ___local;
		NullCheck(L_2);
		uint16_t L_3 = (((LocalVariableInfo_t5017 *)L_2)->___position_2);
		V_0 = L_3;
		V_1 = 0;
		V_2 = 0;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		LocalBuilder_t4479 * L_4 = ___local;
		NullCheck(L_4);
		ILGenerator_t4553 * L_5 = (L_4->___ilgen_3);
		if ((((Object_t*)(ILGenerator_t4553 *)L_5) == ((Object_t*)(ILGenerator_t4553 *)__this)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t726 * L_6 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_6, (String_t*) &_stringLiteral5627, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0034:
	{
		int32_t L_7 = OpCode_get_StackBehaviourPop_m22449((&___opcode), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_8 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_8-(int32_t)1));
		V_2 = 1;
		goto IL_0084;
	}

IL_0050:
	{
		int32_t L_9 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_9+(int32_t)1));
		int32_t L_10 = (__this->___cur_stack_4);
		int32_t L_11 = (__this->___max_stack_3);
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_12 = (__this->___cur_stack_4);
		__this->___max_stack_3 = L_12;
	}

IL_0078:
	{
		int32_t L_13 = OpCode_get_StackBehaviourPush_m22450((&___opcode), /*hidden argument*/NULL);
		V_1 = ((((int32_t)L_13) == ((int32_t)((int32_t)21)))? 1 : 0);
	}

IL_0084:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0146;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_00c8;
		}
	}
	{
		ByteU5BU5D_t66* L_16 = (__this->___code_1);
		int32_t L_17 = (__this->___code_len_2);
		int32_t L_18 = L_17;
		V_3 = L_18;
		__this->___code_len_2 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_19);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_19)) = (uint8_t)((int32_t)18);
		ByteU5BU5D_t66* L_20 = (__this->___code_1);
		int32_t L_21 = (__this->___code_len_2);
		int32_t L_22 = L_21;
		V_3 = L_22;
		__this->___code_len_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
		int32_t L_23 = V_3;
		uint32_t L_24 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_23);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)L_24));
		goto IL_0141;
	}

IL_00c8:
	{
		ByteU5BU5D_t66* L_25 = (__this->___code_1);
		int32_t L_26 = (__this->___code_len_2);
		int32_t L_27 = L_26;
		V_3 = L_27;
		__this->___code_len_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
		int32_t L_28 = V_3;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_28);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_25, L_28)) = (uint8_t)((int32_t)254);
		ByteU5BU5D_t66* L_29 = (__this->___code_1);
		int32_t L_30 = (__this->___code_len_2);
		int32_t L_31 = L_30;
		V_3 = L_31;
		__this->___code_len_2 = ((int32_t)((int32_t)L_31+(int32_t)1));
		int32_t L_32 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_32);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_29, L_32)) = (uint8_t)((int32_t)13);
		ByteU5BU5D_t66* L_33 = (__this->___code_1);
		int32_t L_34 = (__this->___code_len_2);
		int32_t L_35 = L_34;
		V_3 = L_35;
		__this->___code_len_2 = ((int32_t)((int32_t)L_35+(int32_t)1));
		int32_t L_36 = V_3;
		uint32_t L_37 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_36);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_33, L_36)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_38 = (__this->___code_1);
		int32_t L_39 = (__this->___code_len_2);
		int32_t L_40 = L_39;
		V_3 = L_40;
		__this->___code_len_2 = ((int32_t)((int32_t)L_40+(int32_t)1));
		int32_t L_41 = V_3;
		uint32_t L_42 = V_0;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_41);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_41)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_42>>8))&(int32_t)((int32_t)255)))));
	}

IL_0141:
	{
		goto IL_030a;
	}

IL_0146:
	{
		bool L_43 = V_2;
		if (!L_43)
		{
			goto IL_022e;
		}
	}
	{
		uint32_t L_44 = V_0;
		if ((!(((uint32_t)L_44) < ((uint32_t)4))))
		{
			goto IL_0172;
		}
	}
	{
		ByteU5BU5D_t66* L_45 = (__this->___code_1);
		int32_t L_46 = (__this->___code_len_2);
		int32_t L_47 = L_46;
		V_3 = L_47;
		__this->___code_len_2 = ((int32_t)((int32_t)L_47+(int32_t)1));
		int32_t L_48 = V_3;
		uint32_t L_49 = V_0;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_48);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_48)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)10)+(int32_t)L_49))));
		goto IL_0229;
	}

IL_0172:
	{
		uint32_t L_50 = V_0;
		if ((!(((uint32_t)L_50) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_01b0;
		}
	}
	{
		ByteU5BU5D_t66* L_51 = (__this->___code_1);
		int32_t L_52 = (__this->___code_len_2);
		int32_t L_53 = L_52;
		V_3 = L_53;
		__this->___code_len_2 = ((int32_t)((int32_t)L_53+(int32_t)1));
		int32_t L_54 = V_3;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, L_54);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_51, L_54)) = (uint8_t)((int32_t)19);
		ByteU5BU5D_t66* L_55 = (__this->___code_1);
		int32_t L_56 = (__this->___code_len_2);
		int32_t L_57 = L_56;
		V_3 = L_57;
		__this->___code_len_2 = ((int32_t)((int32_t)L_57+(int32_t)1));
		int32_t L_58 = V_3;
		uint32_t L_59 = V_0;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_58);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_55, L_58)) = (uint8_t)(((uint8_t)L_59));
		goto IL_0229;
	}

IL_01b0:
	{
		ByteU5BU5D_t66* L_60 = (__this->___code_1);
		int32_t L_61 = (__this->___code_len_2);
		int32_t L_62 = L_61;
		V_3 = L_62;
		__this->___code_len_2 = ((int32_t)((int32_t)L_62+(int32_t)1));
		int32_t L_63 = V_3;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_63);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_63)) = (uint8_t)((int32_t)254);
		ByteU5BU5D_t66* L_64 = (__this->___code_1);
		int32_t L_65 = (__this->___code_len_2);
		int32_t L_66 = L_65;
		V_3 = L_66;
		__this->___code_len_2 = ((int32_t)((int32_t)L_66+(int32_t)1));
		int32_t L_67 = V_3;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, L_67);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_64, L_67)) = (uint8_t)((int32_t)14);
		ByteU5BU5D_t66* L_68 = (__this->___code_1);
		int32_t L_69 = (__this->___code_len_2);
		int32_t L_70 = L_69;
		V_3 = L_70;
		__this->___code_len_2 = ((int32_t)((int32_t)L_70+(int32_t)1));
		int32_t L_71 = V_3;
		uint32_t L_72 = V_0;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, L_71);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, L_71)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_73 = (__this->___code_1);
		int32_t L_74 = (__this->___code_len_2);
		int32_t L_75 = L_74;
		V_3 = L_75;
		__this->___code_len_2 = ((int32_t)((int32_t)L_75+(int32_t)1));
		int32_t L_76 = V_3;
		uint32_t L_77 = V_0;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, L_76);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_73, L_76)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_77>>8))&(int32_t)((int32_t)255)))));
	}

IL_0229:
	{
		goto IL_030a;
	}

IL_022e:
	{
		uint32_t L_78 = V_0;
		if ((!(((uint32_t)L_78) < ((uint32_t)4))))
		{
			goto IL_0253;
		}
	}
	{
		ByteU5BU5D_t66* L_79 = (__this->___code_1);
		int32_t L_80 = (__this->___code_len_2);
		int32_t L_81 = L_80;
		V_3 = L_81;
		__this->___code_len_2 = ((int32_t)((int32_t)L_81+(int32_t)1));
		int32_t L_82 = V_3;
		uint32_t L_83 = V_0;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, L_82);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_79, L_82)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)6+(int32_t)L_83))));
		goto IL_030a;
	}

IL_0253:
	{
		uint32_t L_84 = V_0;
		if ((!(((uint32_t)L_84) < ((uint32_t)((int32_t)256)))))
		{
			goto IL_0291;
		}
	}
	{
		ByteU5BU5D_t66* L_85 = (__this->___code_1);
		int32_t L_86 = (__this->___code_len_2);
		int32_t L_87 = L_86;
		V_3 = L_87;
		__this->___code_len_2 = ((int32_t)((int32_t)L_87+(int32_t)1));
		int32_t L_88 = V_3;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, L_88);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_85, L_88)) = (uint8_t)((int32_t)17);
		ByteU5BU5D_t66* L_89 = (__this->___code_1);
		int32_t L_90 = (__this->___code_len_2);
		int32_t L_91 = L_90;
		V_3 = L_91;
		__this->___code_len_2 = ((int32_t)((int32_t)L_91+(int32_t)1));
		int32_t L_92 = V_3;
		uint32_t L_93 = V_0;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, L_92);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_89, L_92)) = (uint8_t)(((uint8_t)L_93));
		goto IL_030a;
	}

IL_0291:
	{
		ByteU5BU5D_t66* L_94 = (__this->___code_1);
		int32_t L_95 = (__this->___code_len_2);
		int32_t L_96 = L_95;
		V_3 = L_96;
		__this->___code_len_2 = ((int32_t)((int32_t)L_96+(int32_t)1));
		int32_t L_97 = V_3;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, L_97);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_94, L_97)) = (uint8_t)((int32_t)254);
		ByteU5BU5D_t66* L_98 = (__this->___code_1);
		int32_t L_99 = (__this->___code_len_2);
		int32_t L_100 = L_99;
		V_3 = L_100;
		__this->___code_len_2 = ((int32_t)((int32_t)L_100+(int32_t)1));
		int32_t L_101 = V_3;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, L_101);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_98, L_101)) = (uint8_t)((int32_t)12);
		ByteU5BU5D_t66* L_102 = (__this->___code_1);
		int32_t L_103 = (__this->___code_len_2);
		int32_t L_104 = L_103;
		V_3 = L_104;
		__this->___code_len_2 = ((int32_t)((int32_t)L_104+(int32_t)1));
		int32_t L_105 = V_3;
		uint32_t L_106 = V_0;
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, L_105);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_102, L_105)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)L_106&(int32_t)((int32_t)255)))));
		ByteU5BU5D_t66* L_107 = (__this->___code_1);
		int32_t L_108 = (__this->___code_len_2);
		int32_t L_109 = L_108;
		V_3 = L_109;
		__this->___code_len_2 = ((int32_t)((int32_t)L_109+(int32_t)1));
		int32_t L_110 = V_3;
		uint32_t L_111 = V_0;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, L_110);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_107, L_110)) = (uint8_t)(((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_111>>8))&(int32_t)((int32_t)255)))));
	}

IL_030a:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicMethod_t4554_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t4583_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22362 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		DynamicMethod_t4554_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7892);
		OpCodes_t4583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7896);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	{
		MethodInfo_t * L_0 = ___meth;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5628, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		MethodInfo_t * L_2 = ___meth;
		if (!((DynamicMethod_t4554 *)IsInst(L_2, DynamicMethod_t4554_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		OpCode_t4584  L_3 = ___opcode;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t4583_il2cpp_TypeInfo_var);
		OpCode_t4584  L_4 = ((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldftn_205;
		bool L_5 = OpCode_op_Equality_m22452(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_003d;
		}
	}
	{
		OpCode_t4584  L_6 = ___opcode;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t4583_il2cpp_TypeInfo_var);
		OpCode_t4584  L_7 = ((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldvirtftn_206;
		bool L_8 = OpCode_op_Equality_m22452(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		OpCode_t4584  L_9 = ___opcode;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t4583_il2cpp_TypeInfo_var);
		OpCode_t4584  L_10 = ((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldtoken_174;
		bool L_11 = OpCode_op_Equality_m22452(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}

IL_003d:
	{
		ArgumentException_t726 * L_12 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_12, (String_t*) &_stringLiteral5629, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0048:
	{
		Object_t * L_13 = (__this->___token_gen_13);
		MethodInfo_t * L_14 = ___meth;
		NullCheck(L_13);
		int32_t L_15 = (int32_t)InterfaceFuncInvoker1< int32_t, MemberInfo_t * >::Invoke(1 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.Reflection.MemberInfo) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_13, L_14);
		V_0 = L_15;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_16 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_16, /*hidden argument*/NULL);
		MethodInfo_t * L_17 = ___meth;
		NullCheck(L_17);
		Type_t * L_18 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_17);
		V_1 = L_18;
		Type_t * L_19 = V_1;
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		Type_t * L_20 = V_1;
		NullCheck(L_20);
		Module_t5024 * L_21 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_20);
		Module_t5024 * L_22 = (__this->___module_12);
		if ((!(((Object_t*)(Module_t5024 *)L_21) == ((Object_t*)(Module_t5024 *)L_22))))
		{
			goto IL_0082;
		}
	}
	{
		MethodInfo_t * L_23 = ___meth;
		ILGenerator_add_token_fixup_m22346(__this, L_23, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int32_t L_24 = V_0;
		ILGenerator_emit_int_m22348(__this, L_24, /*hidden argument*/NULL);
		MethodInfo_t * L_25 = ___meth;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_25);
		IL2CPP_RUNTIME_CLASS_INIT(ILGenerator_t4553_il2cpp_TypeInfo_var);
		Type_t * L_27 = ((ILGenerator_t4553_StaticFields*)ILGenerator_t4553_il2cpp_TypeInfo_var->static_fields)->___void_type_0;
		if ((((Object_t*)(Type_t *)L_26) == ((Object_t*)(Type_t *)L_27)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00a4:
	{
		int32_t L_29 = OpCode_get_StackBehaviourPop_m22449((&___opcode), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_30 = (__this->___cur_stack_4);
		MethodInfo_t * L_31 = ___meth;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Reflection.MethodBase::GetParameterCount() */, L_31);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_30-(int32_t)L_32));
	}

IL_00c2:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22363 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		MethodInfo_t * L_1 = ___method;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		Module_t5024 * L_5 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Type::get_Module() */, L_4);
		Module_t5024 * L_6 = (__this->___module_12);
		if ((!(((Object_t*)(Module_t5024 *)L_5) == ((Object_t*)(Module_t5024 *)L_6))))
		{
			goto IL_002d;
		}
	}
	{
		MethodInfo_t * L_7 = ___method;
		ILGenerator_add_token_fixup_m22346(__this, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		int32_t L_8 = ___token;
		ILGenerator_emit_int_m22348(__this, L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = ___method;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(31 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_9);
		IL2CPP_RUNTIME_CLASS_INIT(ILGenerator_t4553_il2cpp_TypeInfo_var);
		Type_t * L_11 = ((ILGenerator_t4553_StaticFields*)ILGenerator_t4553_il2cpp_TypeInfo_var->static_fields)->___void_type_0;
		if ((((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_12 = (__this->___cur_stack_4);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = OpCode_get_StackBehaviourPop_m22449((&___opcode), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_14 = (__this->___cur_stack_4);
		MethodInfo_t * L_15 = ___method;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Reflection.MethodBase::GetParameterCount() */, L_15);
		__this->___cur_stack_4 = ((int32_t)((int32_t)L_14-(int32_t)L_16));
	}

IL_006d:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22364 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = (__this->___token_gen_13);
		String_t* L_1 = ___str;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(0 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.String) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_3 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		ILGenerator_emit_int_m22348(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_Emit_m22365 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, Type_t * ___cls, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		s_Il2CppMethodIntialized = true;
	}
	{
		ILGenerator_make_room_m22347(__this, 6, /*hidden argument*/NULL);
		OpCode_t4584  L_0 = ___opcode;
		ILGenerator_ll_emit_m22349(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = (__this->___token_gen_13);
		Type_t * L_2 = ___cls;
		NullCheck(L_1);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker1< int32_t, MemberInfo_t * >::Invoke(1 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.Reflection.MemberInfo) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_1, L_2);
		ILGenerator_emit_int_m22348(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodes_t4583_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* TokenGenerator_t5071_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_EmitCall_m22366 (ILGenerator_t4553 * __this, OpCode_t4584  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t1221* ___optionalParameterTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		OpCodes_t4583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7896);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		TokenGenerator_t5071_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9100);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	OpCode_t4584  V_2 = {0};
	OpCode_t4584  V_3 = {0};
	{
		MethodInfo_t * L_0 = ___methodInfo;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5630, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int16_t L_2 = OpCode_get_Value_m22451((&___opcode), /*hidden argument*/NULL);
		V_0 = L_2;
		int16_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t4583_il2cpp_TypeInfo_var);
		OpCode_t4584  L_4 = ((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Call_39;
		V_2 = L_4;
		int16_t L_5 = OpCode_get_Value_m22451((&V_2), /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0041;
		}
	}
	{
		int16_t L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(OpCodes_t4583_il2cpp_TypeInfo_var);
		OpCode_t4584  L_7 = ((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110;
		V_3 = L_7;
		int16_t L_8 = OpCode_get_Value_m22451((&V_3), /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0041;
		}
	}
	{
		NotSupportedException_t56 * L_9 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_9, (String_t*) &_stringLiteral5631, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0041:
	{
		MethodInfo_t * L_10 = ___methodInfo;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_10);
		if (((int32_t)((int32_t)L_11&(int32_t)2)))
		{
			goto IL_0050;
		}
	}
	{
		___optionalParameterTypes = (TypeU5BU5D_t1221*)NULL;
	}

IL_0050:
	{
		TypeU5BU5D_t1221* L_12 = ___optionalParameterTypes;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		MethodInfo_t * L_13 = ___methodInfo;
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_13);
		if (((int32_t)((int32_t)L_14&(int32_t)2)))
		{
			goto IL_0068;
		}
	}
	{
		InvalidOperationException_t1447 * L_15 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_15, (String_t*) &_stringLiteral5632, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0068:
	{
		Object_t * L_16 = (__this->___token_gen_13);
		MethodInfo_t * L_17 = ___methodInfo;
		TypeU5BU5D_t1221* L_18 = ___optionalParameterTypes;
		NullCheck(L_16);
		int32_t L_19 = (int32_t)InterfaceFuncInvoker2< int32_t, MethodInfo_t *, TypeU5BU5D_t1221* >::Invoke(2 /* System.Int32 System.Reflection.Emit.TokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[]) */, TokenGenerator_t5071_il2cpp_TypeInfo_var, L_16, L_17, L_18);
		V_1 = L_19;
		OpCode_t4584  L_20 = ___opcode;
		MethodInfo_t * L_21 = ___methodInfo;
		int32_t L_22 = V_1;
		ILGenerator_Emit_m22363(__this, L_20, L_21, L_22, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		OpCode_t4584  L_23 = ___opcode;
		MethodInfo_t * L_24 = ___methodInfo;
		VirtActionInvoker2< OpCode_t4584 , MethodInfo_t * >::Invoke(15 /* System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo) */, __this, L_23, L_24);
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_MarkLabel_m22367 (ILGenerator_t4553 * __this, Label_t4475  ___loc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ((&___loc)->___label_0);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ((&___loc)->___label_0);
		int32_t L_2 = (__this->___num_labels_9);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ArgumentException_t726 * L_3 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_3, (String_t*) &_stringLiteral5633, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0024:
	{
		LabelDataU5BU5D_t5069* L_4 = (__this->___labels_8);
		int32_t L_5 = ((&___loc)->___label_0);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_4, L_5))->___addr_0);
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t726 * L_7 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_7, (String_t*) &_stringLiteral5634, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		LabelDataU5BU5D_t5069* L_8 = (__this->___labels_8);
		int32_t L_9 = ((&___loc)->___label_0);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = (__this->___code_len_2);
		((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_8, L_9))->___addr_0 = L_10;
		LabelDataU5BU5D_t5069* L_11 = (__this->___labels_8);
		int32_t L_12 = ((&___loc)->___label_0);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_11, L_12))->___maxStack_1);
		int32_t L_14 = (__this->___cur_stack_4);
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_00a2;
		}
	}
	{
		LabelDataU5BU5D_t5069* L_15 = (__this->___labels_8);
		int32_t L_16 = ((&___loc)->___label_0);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		int32_t L_17 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_15, L_16))->___maxStack_1);
		__this->___cur_stack_4 = L_17;
	}

IL_00a2:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" void ILGenerator_label_fixup_m22368 (ILGenerator_t4553 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_00dd;
	}

IL_0007:
	{
		LabelDataU5BU5D_t5069* L_0 = (__this->___labels_8);
		LabelFixupU5BU5D_t5070* L_1 = (__this->___fixups_10);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_1, L_2))->___label_idx_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_3);
		int32_t L_4 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_0, L_3))->___addr_0);
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_t726 * L_5 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_5, (String_t*) &_stringLiteral5635, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		LabelDataU5BU5D_t5069* L_6 = (__this->___labels_8);
		LabelFixupU5BU5D_t5070* L_7 = (__this->___fixups_10);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_7, L_8))->___label_idx_2);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_9);
		int32_t L_10 = (((LabelData_t5066 *)(LabelData_t5066 *)SZArrayLdElema(L_6, L_9))->___addr_0);
		LabelFixupU5BU5D_t5070* L_11 = (__this->___fixups_10);
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_11, L_12))->___pos_1);
		LabelFixupU5BU5D_t5070* L_14 = (__this->___fixups_10);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_14, L_15))->___offset_0);
		V_1 = ((int32_t)((int32_t)L_10-(int32_t)((int32_t)((int32_t)L_13+(int32_t)L_16))));
		LabelFixupU5BU5D_t5070* L_17 = (__this->___fixups_10);
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_17, L_18))->___offset_0);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00ad;
		}
	}
	{
		ByteU5BU5D_t66* L_20 = (__this->___code_1);
		LabelFixupU5BU5D_t5070* L_21 = (__this->___fixups_10);
		int32_t L_22 = V_0;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_21, L_22))->___pos_1);
		int32_t L_24 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_23);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_23)) = (uint8_t)(((uint8_t)(((int8_t)L_24))));
		goto IL_00d9;
	}

IL_00ad:
	{
		int32_t L_25 = (__this->___code_len_2);
		V_2 = L_25;
		LabelFixupU5BU5D_t5070* L_26 = (__this->___fixups_10);
		int32_t L_27 = V_0;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = (((LabelFixup_t5065 *)(LabelFixup_t5065 *)SZArrayLdElema(L_26, L_27))->___pos_1);
		__this->___code_len_2 = L_28;
		int32_t L_29 = V_1;
		ILGenerator_emit_int_m22348(__this, L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_2;
		__this->___code_len_2 = L_30;
	}

IL_00d9:
	{
		int32_t L_31 = V_0;
		V_0 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00dd:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = (__this->___num_fixups_11);
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t ILGenerator_Mono_GetCurrentOffset_m22369 (Object_t * __this /* static, unused */, ILGenerator_t4553 * ___ig, const MethodInfo* method)
{
	{
		ILGenerator_t4553 * L_0 = ___ig;
		NullCheck(L_0);
		int32_t L_1 = (L_0->___code_len_2);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"


// System.Void System.Reflection.Emit.Label::.ctor(System.Int32)
extern "C" void Label__ctor_m22370 (Label_t4475 * __this, int32_t ___val, const MethodInfo* method)
{
	{
		int32_t L_0 = ___val;
		__this->___label_0 = L_0;
		return;
	}
}
// System.Boolean System.Reflection.Emit.Label::Equals(System.Object)
extern TypeInfo* Label_t4475_il2cpp_TypeInfo_var;
extern "C" bool Label_Equals_m22371 (Label_t4475 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Label_t4475_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7897);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Label_t4475  V_1 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((!(((Object_t*)(Object_t *)((Object_t *)IsInst(L_0, Label_t4475_il2cpp_TypeInfo_var))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Object_t * L_2 = ___obj;
		V_1 = ((*(Label_t4475 *)((Label_t4475 *)UnBox (L_2, Label_t4475_il2cpp_TypeInfo_var))));
		int32_t L_3 = (__this->___label_0);
		int32_t L_4 = ((&V_1)->___label_0);
		V_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Reflection.Emit.Label::GetHashCode()
extern "C" int32_t Label_GetHashCode_m22372 (Label_t4475 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___label_0);
		int32_t L_1 = Int32_GetHashCode_m10252(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.LocalBuilder::.ctor(System.Type,System.Reflection.Emit.ILGenerator)
extern "C" void LocalBuilder__ctor_m22373 (LocalBuilder_t4479 * __this, Type_t * ___t, ILGenerator_t4553 * ___ilgen, const MethodInfo* method)
{
	{
		LocalVariableInfo__ctor_m21887(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t;
		((LocalVariableInfo_t5017 *)__this)->___type_0 = L_0;
		ILGenerator_t4553 * L_1 = ___ilgen;
		__this->___ilgen_3 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.MethodBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" void MethodBuilder__ctor_m22374 (MethodBuilder_t5062 * __this, TypeBuilder_t5052 * ___tb, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1221* ___returnModReq, TypeU5BU5D_t1221* ___returnModOpt, TypeU5BU5D_t1221* ___parameterTypes, TypeU5BU5DU5BU5D_t5054* ___paramModReq, TypeU5BU5DU5BU5D_t5054* ___paramModOpt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	MethodToken_t5073  V_1 = {0};
	{
		__this->___init_locals_11 = 1;
		MethodInfo__ctor_m21909(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___name_4 = L_0;
		int32_t L_1 = ___attributes;
		__this->___attrs_2 = L_1;
		int32_t L_2 = ___callingConvention;
		__this->___call_conv_10 = L_2;
		Type_t * L_3 = ___returnType;
		__this->___rtype_0 = L_3;
		TypeU5BU5D_t1221* L_4 = ___returnModReq;
		__this->___returnModReq_13 = L_4;
		TypeU5BU5D_t1221* L_5 = ___returnModOpt;
		__this->___returnModOpt_14 = L_5;
		TypeU5BU5DU5BU5D_t5054* L_6 = ___paramModReq;
		__this->___paramModReq_15 = L_6;
		TypeU5BU5DU5BU5D_t5054* L_7 = ___paramModOpt;
		__this->___paramModOpt_16 = L_7;
		int32_t L_8 = ___attributes;
		if (((int32_t)((int32_t)L_8&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_9 = (__this->___call_conv_10);
		__this->___call_conv_10 = ((int32_t)((int32_t)L_9|(int32_t)((int32_t)32)));
	}

IL_0060:
	{
		TypeU5BU5D_t1221* L_10 = ___parameterTypes;
		if (!L_10)
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 0;
		goto IL_0082;
	}

IL_0068:
	{
		TypeU5BU5D_t1221* L_11 = ___parameterTypes;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		if ((*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_t726 * L_14 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_14, (String_t*) &_stringLiteral5610, (String_t*) &_stringLiteral5611, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_007e:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0082:
	{
		int32_t L_16 = V_0;
		TypeU5BU5D_t1221* L_17 = ___parameterTypes;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		TypeU5BU5D_t1221* L_18 = ___parameterTypes;
		NullCheck(L_18);
		__this->___parameters_1 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_18)->max_length)))));
		TypeU5BU5D_t1221* L_19 = ___parameterTypes;
		TypeU5BU5D_t1221* L_20 = (__this->___parameters_1);
		TypeU5BU5D_t1221* L_21 = ___parameterTypes;
		NullCheck(L_21);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_19, (Array_t *)(Array_t *)L_20, (((int32_t)(((Array_t *)L_21)->max_length))), /*hidden argument*/NULL);
	}

IL_00a9:
	{
		TypeBuilder_t5052 * L_22 = ___tb;
		__this->___type_7 = L_22;
		int32_t L_23 = (int32_t)VirtFuncInvoker3< int32_t, Object_t *, int32_t, bool >::Invoke(25 /* System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean) */, __this, __this, 6, 1);
		__this->___table_idx_5 = L_23;
		TypeBuilder_t5052 * L_24 = ___tb;
		NullCheck(L_24);
		Module_t5024 * L_25 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_24);
		MethodToken_t5073  L_26 = MethodBuilder_GetToken_m22383(__this, /*hidden argument*/NULL);
		V_1 = L_26;
		int32_t L_27 = MethodToken_get_Token_m22410((&V_1), /*hidden argument*/NULL);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_25, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		ModuleBuilder_RegisterToken_m22433(((ModuleBuilder_t5049 *)Castclass(L_25, ModuleBuilder_t5049_il2cpp_TypeInfo_var)), __this, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m22375 (MethodBuilder_t5062 * __this, const MethodInfo* method)
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
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t4908  MethodBuilder_get_MethodHandle_m22376 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern "C" Type_t * MethodBuilder_get_ReturnType_m22377 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___rtype_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern "C" Type_t * MethodBuilder_get_ReflectedType_m22378 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m22379 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		return L_0;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern "C" String_t* MethodBuilder_get_Name_m22380 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_4);
		return L_0;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern "C" int32_t MethodBuilder_get_Attributes_m22381 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_2);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern "C" int32_t MethodBuilder_get_CallingConvention_m22382 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_10);
		return L_0;
	}
}
// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodBuilder::GetToken()
extern "C" MethodToken_t5073  MethodBuilder_GetToken_m22383 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___table_idx_5);
		MethodToken_t5073  L_1 = {0};
		MethodToken__ctor_m22406(&L_1, ((int32_t)((int32_t)((int32_t)100663296)|(int32_t)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m22384 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.MethodImplAttributes System.Reflection.Emit.MethodBuilder::GetMethodImplementationFlags()
extern "C" int32_t MethodBuilder_GetMethodImplementationFlags_m22385 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___iattrs_3);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var;
extern TypeInfo* ParameterInfo_t1401_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1476* MethodBuilder_GetParameters_m22386 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2567);
		ParameterInfo_t1401_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2568);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1476* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	ParameterInfoU5BU5D_t1476* G_B6_1 = {0};
	ParameterBuilder_t5080 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	ParameterInfoU5BU5D_t1476* G_B8_2 = {0};
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t57 * L_2 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		TypeU5BU5D_t1221* L_3 = (__this->___parameters_1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (ParameterInfoU5BU5D_t1476*)NULL;
	}

IL_001e:
	{
		TypeU5BU5D_t1221* L_4 = (__this->___parameters_1);
		NullCheck(L_4);
		V_0 = ((ParameterInfoU5BU5D_t1476*)SZArrayNew(ParameterInfoU5BU5D_t1476_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		ParameterInfoU5BU5D_t1476* L_5 = V_0;
		int32_t L_6 = V_1;
		ParameterBuilderU5BU5D_t5053* L_7 = (__this->___pinfo_8);
		G_B6_0 = L_6;
		G_B6_1 = L_5;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((ParameterBuilder_t5080 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		ParameterBuilderU5BU5D_t5053* L_8 = (__this->___pinfo_8);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(ParameterBuilder_t5080 **)(ParameterBuilder_t5080 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		TypeU5BU5D_t1221* L_11 = (__this->___parameters_1);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		ParameterInfo_t1401 * L_15 = (ParameterInfo_t1401 *)il2cpp_codegen_object_new (ParameterInfo_t1401_il2cpp_TypeInfo_var);
		ParameterInfo__ctor_m22061(L_15, G_B8_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		NullCheck(G_B8_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_2, G_B8_1);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((ParameterInfo_t1401 **)(ParameterInfo_t1401 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (ParameterInfo_t1401 *)L_15;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_1;
		TypeU5BU5D_t1221* L_18 = (__this->___parameters_1);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		ParameterInfoU5BU5D_t1476* L_19 = V_0;
		return L_19;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetParameterCount()
extern "C" int32_t MethodBuilder_GetParameterCount_m22387 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		TypeU5BU5D_t1221* L_0 = (__this->___parameters_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TypeU5BU5D_t1221* L_1 = (__this->___parameters_1);
		NullCheck(L_1);
		return (((int32_t)(((Array_t *)L_1)->max_length)));
	}
}
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MethodBuilder_Invoke_m22388 (MethodBuilder_t5062 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___parameters, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool MethodBuilder_IsDefined_m22389 (MethodBuilder_t5062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MethodBuilder_GetCustomAttributes_m22390 (MethodBuilder_t5062 * __this, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_3 = MonoCustomAttrs_GetCustomAttributes_m20516(NULL /*static, unused*/, __this, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		Exception_t57 * L_4 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t697* MethodBuilder_GetCustomAttributes_m22391 (MethodBuilder_t5062 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m22527(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t697* L_4 = MonoCustomAttrs_GetCustomAttributes_m20515(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0016:
	{
		Exception_t57 * L_5 = MethodBuilder_NotSupported_m22399(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator()
extern "C" ILGenerator_t4553 * MethodBuilder_GetILGenerator_m22392 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		ILGenerator_t4553 * L_0 = MethodBuilder_GetILGenerator_m22393(__this, ((int32_t)64), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.MethodBuilder::GetILGenerator(System.Int32)
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* ILGenerator_t4553_il2cpp_TypeInfo_var;
extern "C" ILGenerator_t4553 * MethodBuilder_GetILGenerator_m22393 (MethodBuilder_t5062 * __this, int32_t ___size, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		ILGenerator_t4553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7899);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___iattrs_3);
		if (((int32_t)((int32_t)L_0&(int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = (__this->___iattrs_3);
		if (!((int32_t)((int32_t)L_1&(int32_t)4)))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		InvalidOperationException_t1447 * L_2 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_2, (String_t*) &_stringLiteral5622, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001f:
	{
		ILGenerator_t4553 * L_3 = (__this->___ilgen_6);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		ILGenerator_t4553 * L_4 = (__this->___ilgen_6);
		return L_4;
	}

IL_002e:
	{
		TypeBuilder_t5052 * L_5 = (__this->___type_7);
		NullCheck(L_5);
		Module_t5024 * L_6 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_5);
		TypeBuilder_t5052 * L_7 = (__this->___type_7);
		NullCheck(L_7);
		Module_t5024 * L_8 = (Module_t5024 *)VirtFuncInvoker0< Module_t5024 * >::Invoke(10 /* System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module() */, L_7);
		NullCheck(((ModuleBuilder_t5049 *)Castclass(L_8, ModuleBuilder_t5049_il2cpp_TypeInfo_var)));
		Object_t * L_9 = ModuleBuilder_GetTokenGenerator_m22434(((ModuleBuilder_t5049 *)Castclass(L_8, ModuleBuilder_t5049_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		int32_t L_10 = ___size;
		ILGenerator_t4553 * L_11 = (ILGenerator_t4553 *)il2cpp_codegen_object_new (ILGenerator_t4553_il2cpp_TypeInfo_var);
		ILGenerator__ctor_m22344(L_11, L_6, L_9, L_10, /*hidden argument*/NULL);
		__this->___ilgen_6 = L_11;
		ILGenerator_t4553 * L_12 = (__this->___ilgen_6);
		return L_12;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MethodBuilder_ToString_m22394 (MethodBuilder_t5062 * __this, const MethodInfo* method)
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
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5636);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5636;
		StringU5BU5D_t75* L_1 = L_0;
		TypeBuilder_t5052 * L_2 = (__this->___type_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t75* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4147);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral4147;
		StringU5BU5D_t75* L_5 = L_4;
		String_t* L_6 = (__this->___name_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t75* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral123);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral123;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m450(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern "C" bool MethodBuilder_Equals_m22395 (MethodBuilder_t5062 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_Equals_m495(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern "C" int32_t MethodBuilder_GetHashCode_m22396 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_4);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t MethodBuilder_get_next_table_index_m22397 (MethodBuilder_t5062 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___type_7);
		Object_t * L_1 = ___obj;
		int32_t L_2 = ___table;
		bool L_3 = ___inc;
		NullCheck(L_0);
		int32_t L_4 = TypeBuilder_get_next_table_index_m22525(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Reflection.Emit.MethodBuilder::set_override(System.Reflection.MethodInfo)
extern "C" void MethodBuilder_set_override_m22398 (MethodBuilder_t5062 * __this, MethodInfo_t * ___mdecl, const MethodInfo* method)
{
	{
		MethodInfo_t * L_0 = ___mdecl;
		__this->___override_method_9 = L_0;
		return;
	}
}
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * MethodBuilder_NotSupported_m22399 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m22400 (MethodBuilder_t5062 * __this, TypeU5BU5D_t1221* ___typeArguments, const MethodInfo* method)
{
	typedef MethodInfo_t * (*MethodBuilder_MakeGenericMethod_m22400_ftn) (MethodBuilder_t5062 *, TypeU5BU5D_t1221*);
	static MethodBuilder_MakeGenericMethod_m22400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBuilder_MakeGenericMethod_m22400_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, ___typeArguments);
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m22401 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_12);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t5072*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern "C" bool MethodBuilder_get_IsGenericMethod_m22402 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_12);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t5072*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetGenericMethodDefinition()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * MethodBuilder_GetGenericMethodDefinition_m22403 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t1447 * L_1 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m12126(L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		return __this;
	}
}
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* MethodBuilder_GetGenericArguments_m22404 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	int32_t V_1 = 0;
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_12);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_1 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_1;
	}

IL_000e:
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_2 = (__this->___generic_params_12);
		NullCheck(L_2);
		V_0 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		TypeU5BU5D_t1221* L_3 = V_0;
		int32_t L_4 = V_1;
		GenericTypeParameterBuilderU5BU5D_t5072* L_5 = (__this->___generic_params_12);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, (*(GenericTypeParameterBuilder_t5063 **)(GenericTypeParameterBuilder_t5063 **)SZArrayLdElema(L_5, L_7)));
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, L_4)) = (Type_t *)(*(GenericTypeParameterBuilder_t5063 **)(GenericTypeParameterBuilder_t5063 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		GenericTypeParameterBuilderU5BU5D_t5072* L_10 = (__this->___generic_params_12);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		TypeU5BU5D_t1221* L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern "C" Module_t5024 * MethodBuilder_get_Module_m22405 (MethodBuilder_t5062 * __this, const MethodInfo* method)
{
	{
		Module_t5024 * L_0 = MemberInfo_get_Module_m19264(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.MethodToken::.ctor(System.Int32)
extern "C" void MethodToken__ctor_m22406 (MethodToken_t5073 * __this, int32_t ___val, const MethodInfo* method)
{
	{
		int32_t L_0 = ___val;
		__this->___tokValue_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Emit.MethodToken::.cctor()
extern TypeInfo* MethodToken_t5073_il2cpp_TypeInfo_var;
extern "C" void MethodToken__cctor_m22407 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodToken_t5073_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9103);
		s_Il2CppMethodIntialized = true;
	}
	MethodToken_t5073  V_0 = {0};
	{
		Initobj (MethodToken_t5073_il2cpp_TypeInfo_var, (&V_0));
		MethodToken_t5073  L_0 = V_0;
		((MethodToken_t5073_StaticFields*)MethodToken_t5073_il2cpp_TypeInfo_var->static_fields)->___Empty_1 = L_0;
		return;
	}
}
// System.Boolean System.Reflection.Emit.MethodToken::Equals(System.Object)
extern TypeInfo* MethodToken_t5073_il2cpp_TypeInfo_var;
extern "C" bool MethodToken_Equals_m22408 (MethodToken_t5073 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodToken_t5073_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9103);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	MethodToken_t5073  V_1 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((!(((Object_t*)(Object_t *)((Object_t *)IsInst(L_0, MethodToken_t5073_il2cpp_TypeInfo_var))) <= ((Object_t*)(Object_t *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Object_t * L_2 = ___obj;
		V_1 = ((*(MethodToken_t5073 *)((MethodToken_t5073 *)UnBox (L_2, MethodToken_t5073_il2cpp_TypeInfo_var))));
		int32_t L_3 = (__this->___tokValue_0);
		int32_t L_4 = ((&V_1)->___tokValue_0);
		V_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.Reflection.Emit.MethodToken::GetHashCode()
extern "C" int32_t MethodToken_GetHashCode_m22409 (MethodToken_t5073 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___tokValue_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.MethodToken::get_Token()
extern "C" int32_t MethodToken_get_Token_m22410 (MethodToken_t5073 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___tokValue_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineException.h"
// System.Reflection.Emit.PackingSize
#include "mscorlib_System_Reflection_Emit_PackingSize.h"
// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
// System.Reflection.Emit.ModuleBuilderTokenGenerator
#include "mscorlib_System_Reflection_Emit_ModuleBuilderTokenGenerator.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// Replacements.TypeBuilder
#include "replacements_Replacements_TypeBuilderMethodDeclarations.h"
// System.ExecutionEngineException
#include "mscorlib_System_ExecutionEngineExceptionMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"
// System.Reflection.Emit.ModuleBuilderTokenGenerator
#include "mscorlib_System_Reflection_Emit_ModuleBuilderTokenGeneratorMethodDeclarations.h"


// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern TypeInfo* Hashtable_t711_il2cpp_TypeInfo_var;
extern TypeInfo* Module_t5024_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t74_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* TypeBuilder_t5052_il2cpp_TypeInfo_var;
extern TypeInfo* ExecutionEngineException_t4883_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* ISymbolWriter_t5076_il2cpp_TypeInfo_var;
extern TypeInfo* Path_t2161_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__ctor_m22411 (ModuleBuilder_t5049 * __this, AssemblyBuilder_t5050 * ___assb, String_t* ___name, String_t* ___fullyqname, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Module_t5024_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9055);
		Guid_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		TypeBuilder_t5052_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8874);
		ExecutionEngineException_t4883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9104);
		ObjectU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ISymbolWriter_t5076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9105);
		Path_t2161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3406);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	TypeBuilder_t5052 * V_0 = {0};
	Type_t * V_1 = {0};
	Assembly_t784 * V_2 = {0};
	Type_t * V_3 = {0};
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	AssemblyBuilder_t5050 * V_6 = {0};
	{
		Hashtable_t711 * L_0 = (Hashtable_t711 *)il2cpp_codegen_object_new (Hashtable_t711_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_0, /*hidden argument*/NULL);
		__this->___us_string_cache_17 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Module_t5024_il2cpp_TypeInfo_var);
		Module__ctor_m21921(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		String_t* L_2 = L_1;
		V_5 = L_2;
		((Module_t5024 *)__this)->___scopename_7 = L_2;
		String_t* L_3 = V_5;
		((Module_t5024 *)__this)->___name_6 = L_3;
		String_t* L_4 = ___fullyqname;
		((Module_t5024 *)__this)->___fqname_5 = L_4;
		AssemblyBuilder_t5050 * L_5 = ___assb;
		AssemblyBuilder_t5050 * L_6 = L_5;
		V_6 = L_6;
		__this->___assemblyb_14 = L_6;
		AssemblyBuilder_t5050 * L_7 = V_6;
		((Module_t5024 *)__this)->___assembly_4 = L_7;
		bool L_8 = ___transient;
		__this->___transient_19 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t74_il2cpp_TypeInfo_var);
		ByteU5BU5D_t66* L_9 = Guid_FastNewGuidArray_m20456(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___guid_12 = L_9;
		int32_t L_10 = ModuleBuilder_get_next_table_index_m22426(__this, __this, 0, 1, /*hidden argument*/NULL);
		__this->___table_idx_13 = L_10;
		Hashtable_t711 * L_11 = (Hashtable_t711 *)il2cpp_codegen_object_new (Hashtable_t711_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4292(L_11, /*hidden argument*/NULL);
		__this->___name_cache_16 = L_11;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		ModuleBuilder_basic_init_m22413(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		ModuleBuilder_CreateGlobalType_m22436(__this, /*hidden argument*/NULL);
		AssemblyBuilder_t5050 * L_12 = ___assb;
		NullCheck(L_12);
		bool L_13 = AssemblyBuilder_get_IsRun_m22142(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009c;
		}
	}
	{
		TypeBuilder_t5052 * L_14 = (TypeBuilder_t5052 *)il2cpp_codegen_object_new (TypeBuilder_t5052_il2cpp_TypeInfo_var);
		TypeBuilder__ctor_m22477(L_14, __this, ((int32_t)128), ((int32_t)16777215), /*hidden argument*/NULL);
		V_0 = L_14;
		TypeBuilder_t5052 * L_15 = V_0;
		Type_t * L_16 = TypeBuilder_CreateType_m12231(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		Type_t * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		ModuleBuilder_set_wrappers_type_m22414(NULL /*static, unused*/, __this, L_17, /*hidden argument*/NULL);
	}

IL_009c:
	{
		bool L_18 = ___emitSymbolInfo;
		if (!L_18)
		{
			goto IL_012d;
		}
	}
	{
		Assembly_t784 * L_19 = Assembly_LoadWithPartialName_m21808(NULL /*static, unused*/, (String_t*) &_stringLiteral5637, /*hidden argument*/NULL);
		V_2 = L_19;
		Assembly_t784 * L_20 = V_2;
		if (L_20)
		{
			goto IL_00bc;
		}
	}
	{
		ExecutionEngineException_t4883 * L_21 = (ExecutionEngineException_t4883 *)il2cpp_codegen_object_new (ExecutionEngineException_t4883_il2cpp_TypeInfo_var);
		ExecutionEngineException__ctor_m20426(L_21, (String_t*) &_stringLiteral5638, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_00bc:
	{
		Assembly_t784 * L_22 = V_2;
		NullCheck(L_22);
		Type_t * L_23 = (Type_t *)VirtFuncInvoker1< Type_t *, String_t* >::Invoke(15 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_22, (String_t*) &_stringLiteral5639);
		V_3 = L_23;
		Type_t * L_24 = V_3;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		ExecutionEngineException_t4883 * L_25 = (ExecutionEngineException_t4883 *)il2cpp_codegen_object_new (ExecutionEngineException_t4883_il2cpp_TypeInfo_var);
		ExecutionEngineException__ctor_m20426(L_25, (String_t*) &_stringLiteral5640, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00d6:
	{
		Type_t * L_26 = V_3;
		ObjectU5BU5D_t697* L_27 = ((ObjectU5BU5D_t697*)SZArrayNew(ObjectU5BU5D_t697_il2cpp_TypeInfo_var, 1));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, __this);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, 0)) = (Object_t *)__this;
		Object_t * L_28 = Activator_CreateInstance_m7950(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		__this->___symbolWriter_21 = ((Object_t *)Castclass(L_28, ISymbolWriter_t5076_il2cpp_TypeInfo_var));
		String_t* L_29 = (((Module_t5024 *)__this)->___fqname_5);
		V_4 = L_29;
		AssemblyBuilder_t5050 * L_30 = (__this->___assemblyb_14);
		NullCheck(L_30);
		String_t* L_31 = AssemblyBuilder_get_AssemblyDir_m22143(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_011a;
		}
	}
	{
		AssemblyBuilder_t5050 * L_32 = (__this->___assemblyb_14);
		NullCheck(L_32);
		String_t* L_33 = AssemblyBuilder_get_AssemblyDir_m22143(L_32, /*hidden argument*/NULL);
		String_t* L_34 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2161_il2cpp_TypeInfo_var);
		String_t* L_35 = Path_Combine_m7948(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
	}

IL_011a:
	{
		Object_t * L_36 = (__this->___symbolWriter_21);
		IntPtr_t L_37 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		String_t* L_38 = V_4;
		NullCheck(L_36);
		InterfaceActionInvoker3< IntPtr_t, String_t*, bool >::Invoke(0 /* System.Void System.Diagnostics.SymbolStore.ISymbolWriter::Initialize(System.IntPtr,System.String,System.Boolean) */, ISymbolWriter_t5076_il2cpp_TypeInfo_var, L_36, L_37, L_38, 1);
	}

IL_012d:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern TypeInfo* CharU5BU5D_t712_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__cctor_m22412 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CharU5BU5D_t712_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	{
		CharU5BU5D_t712* L_0 = ((CharU5BU5D_t712*)SZArrayNew(CharU5BU5D_t712_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t712* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		CharU5BU5D_t712* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((ModuleBuilder_t5049_StaticFields*)ModuleBuilder_t5049_il2cpp_TypeInfo_var->static_fields)->___type_modifiers_22 = L_2;
		return;
	}
}
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilder_basic_init_m22413 (Object_t * __this /* static, unused */, ModuleBuilder_t5049 * ___ab, const MethodInfo* method)
{
	typedef void (*ModuleBuilder_basic_init_m22413_ftn) (ModuleBuilder_t5049 *);
	static ModuleBuilder_basic_init_m22413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_basic_init_m22413_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)");
	_il2cpp_icall_func(___ab);
}
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C" void ModuleBuilder_set_wrappers_type_m22414 (Object_t * __this /* static, unused */, ModuleBuilder_t5049 * ___mb, Type_t * ___ab, const MethodInfo* method)
{
	typedef void (*ModuleBuilder_set_wrappers_type_m22414_ftn) (ModuleBuilder_t5049 *, Type_t *);
	static ModuleBuilder_set_wrappers_type_m22414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_set_wrappers_type_m22414_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)");
	_il2cpp_icall_func(___mb, ___ab);
}
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C" bool ModuleBuilder_IsTransient_m22415 (ModuleBuilder_t5049 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___transient_19);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C" TypeBuilder_t5052 * ModuleBuilder_DefineType_m22416 (ModuleBuilder_t5049 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___attr;
		Type_t * L_2 = ___parent;
		TypeBuilder_t5052 * L_3 = ModuleBuilder_DefineType_m22419(__this, L_0, L_1, L_2, (TypeU5BU5D_t1221*)(TypeU5BU5D_t1221*)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern TypeInfo* TypeBuilderU5BU5D_t5074_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder_AddType_m22417 (ModuleBuilder_t5049 * __this, TypeBuilder_t5052 * ___tb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeBuilderU5BU5D_t5074_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9106);
		s_Il2CppMethodIntialized = true;
	}
	TypeBuilderU5BU5D_t5074* V_0 = {0};
	{
		TypeBuilderU5BU5D_t5074* L_0 = (__this->___types_11);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_1 = (__this->___types_11);
		NullCheck(L_1);
		int32_t L_2 = (__this->___num_types_10);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_3 = (__this->___types_11);
		NullCheck(L_3);
		V_0 = ((TypeBuilderU5BU5D_t5074*)SZArrayNew(TypeBuilderU5BU5D_t5074_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		TypeBuilderU5BU5D_t5074* L_4 = (__this->___types_11);
		TypeBuilderU5BU5D_t5074* L_5 = V_0;
		int32_t L_6 = (__this->___num_types_10);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (Array_t *)(Array_t *)L_5, L_6, /*hidden argument*/NULL);
		TypeBuilderU5BU5D_t5074* L_7 = V_0;
		__this->___types_11 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->___types_11 = ((TypeBuilderU5BU5D_t5074*)SZArrayNew(TypeBuilderU5BU5D_t5074_il2cpp_TypeInfo_var, 1));
	}

IL_004f:
	{
		TypeBuilderU5BU5D_t5074* L_8 = (__this->___types_11);
		int32_t L_9 = (__this->___num_types_10);
		TypeBuilder_t5052 * L_10 = ___tb;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_10);
		*((TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_8, L_9)) = (TypeBuilder_t5052 *)L_10;
		int32_t L_11 = (__this->___num_types_10);
		__this->___num_types_10 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* TypeBuilder_t5052_il2cpp_TypeInfo_var;
extern "C" TypeBuilder_t5052 * ModuleBuilder_DefineType_m22418 (ModuleBuilder_t5049 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t1221* ___interfaces, int32_t ___packingSize, int32_t ___typesize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TypeBuilder_t5052_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8874);
		s_Il2CppMethodIntialized = true;
	}
	TypeBuilder_t5052 * V_0 = {0};
	{
		Hashtable_t711 * L_0 = (__this->___name_cache_16);
		String_t* L_1 = ___name;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_t726 * L_3 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_3, (String_t*) &_stringLiteral5641, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		String_t* L_4 = ___name;
		int32_t L_5 = ___attr;
		Type_t * L_6 = ___parent;
		TypeU5BU5D_t1221* L_7 = ___interfaces;
		int32_t L_8 = ___packingSize;
		int32_t L_9 = ___typesize;
		TypeBuilder_t5052 * L_10 = (TypeBuilder_t5052 *)il2cpp_codegen_object_new (TypeBuilder_t5052_il2cpp_TypeInfo_var);
		TypeBuilder__ctor_m22478(L_10, __this, L_4, L_5, L_6, L_7, L_8, L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_10;
		TypeBuilder_t5052 * L_11 = V_0;
		ModuleBuilder_AddType_m22417(__this, L_11, /*hidden argument*/NULL);
		Hashtable_t711 * L_12 = (__this->___name_cache_16);
		String_t* L_13 = ___name;
		TypeBuilder_t5052 * L_14 = V_0;
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_12, L_13, L_14);
		TypeBuilder_t5052 * L_15 = V_0;
		return L_15;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C" TypeBuilder_t5052 * ModuleBuilder_DefineType_m22419 (ModuleBuilder_t5049 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t1221* ___interfaces, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___attr;
		Type_t * L_2 = ___parent;
		TypeU5BU5D_t1221* L_3 = ___interfaces;
		TypeBuilder_t5052 * L_4 = ModuleBuilder_DefineType_m22418(__this, L_0, L_1, L_2, L_3, 0, 0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C" Type_t * ModuleBuilder_GetType_m22420 (ModuleBuilder_t5049 * __this, String_t* ___className, const MethodInfo* method)
{
	{
		String_t* L_0 = ___className;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(10 /* System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean) */, __this, L_0, 0, 0);
		return L_1;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern TypeInfo* CultureInfo_t783_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TypeBuilder_t5052 * ModuleBuilder_search_in_array_m22421 (ModuleBuilder_t5049 * __this, TypeBuilderU5BU5D_t5074* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		String_t* L_0 = ___className;
		TypeBuilderU5BU5D_t5074* L_1 = ___arr;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Reflection.Emit.TypeBuilder::get_FullName() */, (*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t783_il2cpp_TypeInfo_var);
		CultureInfo_t783 * L_5 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m11580(NULL /*static, unused*/, L_0, L_4, 1, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_7 = ___arr;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		return (*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_7, L_9));
	}

IL_001e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___validElementsInArray;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (TypeBuilder_t5052 *)NULL;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern TypeInfo* CultureInfo_t783_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TypeBuilder_t5052 * ModuleBuilder_search_nested_in_array_m22422 (ModuleBuilder_t5049 * __this, TypeBuilderU5BU5D_t5074* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t783_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0022;
	}

IL_0004:
	{
		String_t* L_0 = ___className;
		TypeBuilderU5BU5D_t5074* L_1 = ___arr;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		NullCheck((*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_1, L_3)));
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Emit.TypeBuilder::get_Name() */, (*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_1, L_3)));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t783_il2cpp_TypeInfo_var);
		CultureInfo_t783 * L_5 = CultureInfo_get_InvariantCulture_m4222(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m11580(NULL /*static, unused*/, L_0, L_4, 1, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_7 = ___arr;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		return (*(TypeBuilder_t5052 **)(TypeBuilder_t5052 **)SZArrayLdElema(L_7, L_9));
	}

IL_001e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0022:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___validElementsInArray;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (TypeBuilder_t5052 *)NULL;
	}
}
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" Type_t * ModuleBuilder_create_modified_type_m22423 (Object_t * __this /* static, unused */, TypeBuilder_t5052 * ___tb, String_t* ___modifiers, const MethodInfo* method)
{
	typedef Type_t * (*ModuleBuilder_create_modified_type_m22423_ftn) (TypeBuilder_t5052 *, String_t*);
	static ModuleBuilder_create_modified_type_m22423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_create_modified_type_m22423_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)");
	return _il2cpp_icall_func(___tb, ___modifiers);
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" TypeBuilder_t5052 * ModuleBuilder_GetMaybeNested_m22424 (ModuleBuilder_t5049 * __this, TypeBuilder_t5052 * ___t, String_t* ___className, const MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	TypeBuilder_t5052 * V_3 = {0};
	{
		String_t* L_0 = ___className;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m4003(L_0, ((int32_t)43), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		TypeBuilder_t5052 * L_3 = ___t;
		NullCheck(L_3);
		TypeBuilderU5BU5D_t5074* L_4 = (L_3->___subtypes_18);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		TypeBuilder_t5052 * L_5 = ___t;
		NullCheck(L_5);
		TypeBuilderU5BU5D_t5074* L_6 = (L_5->___subtypes_18);
		TypeBuilder_t5052 * L_7 = ___t;
		NullCheck(L_7);
		TypeBuilderU5BU5D_t5074* L_8 = (L_7->___subtypes_18);
		NullCheck(L_8);
		String_t* L_9 = ___className;
		TypeBuilder_t5052 * L_10 = ModuleBuilder_search_nested_in_array_m22422(__this, L_6, (((int32_t)(((Array_t *)L_8)->max_length))), L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002b:
	{
		return (TypeBuilder_t5052 *)NULL;
	}

IL_002d:
	{
		TypeBuilder_t5052 * L_11 = ___t;
		NullCheck(L_11);
		TypeBuilderU5BU5D_t5074* L_12 = (L_11->___subtypes_18);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_13 = ___className;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m418(L_13, 0, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = ___className;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = String_Substring_m4282(L_16, ((int32_t)((int32_t)L_17+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_18;
		TypeBuilder_t5052 * L_19 = ___t;
		NullCheck(L_19);
		TypeBuilderU5BU5D_t5074* L_20 = (L_19->___subtypes_18);
		TypeBuilder_t5052 * L_21 = ___t;
		NullCheck(L_21);
		TypeBuilderU5BU5D_t5074* L_22 = (L_21->___subtypes_18);
		NullCheck(L_22);
		String_t* L_23 = V_1;
		TypeBuilder_t5052 * L_24 = ModuleBuilder_search_nested_in_array_m22422(__this, L_20, (((int32_t)(((Array_t *)L_22)->max_length))), L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		TypeBuilder_t5052 * L_25 = V_3;
		if (!L_25)
		{
			goto IL_006a;
		}
	}
	{
		TypeBuilder_t5052 * L_26 = V_3;
		String_t* L_27 = V_2;
		TypeBuilder_t5052 * L_28 = ModuleBuilder_GetMaybeNested_m22424(__this, L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_006a:
	{
		return (TypeBuilder_t5052 *)NULL;
	}
}
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* TypeLoadException_t4873_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern TypeInfo* TypeBuilder_t5052_il2cpp_TypeInfo_var;
extern "C" Type_t * ModuleBuilder_GetType_m22425 (ModuleBuilder_t5049 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		TypeLoadException_t4873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8865);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		TypeBuilder_t5052_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8874);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	TypeBuilder_t5052 * V_3 = {0};
	String_t* V_4 = {0};
	String_t* V_5 = {0};
	Type_t * V_6 = {0};
	{
		String_t* L_0 = ___className;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral1361, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___className;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m410(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t726 * L_4 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_4, (String_t*) &_stringLiteral1361, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		String_t* L_5 = ___className;
		V_1 = L_5;
		V_3 = (TypeBuilder_t5052 *)NULL;
		TypeBuilderU5BU5D_t5074* L_6 = (__this->___types_11);
		if (L_6)
		{
			goto IL_0037;
		}
	}
	{
		bool L_7 = ___throwOnError;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_8 = ___className;
		TypeLoadException_t4873 * L_9 = (TypeLoadException_t4873 *)il2cpp_codegen_object_new (TypeLoadException_t4873_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m20825(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0037:
	{
		String_t* L_10 = ___className;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		CharU5BU5D_t712* L_11 = ((ModuleBuilder_t5049_StaticFields*)ModuleBuilder_t5049_il2cpp_TypeInfo_var->static_fields)->___type_modifiers_22;
		NullCheck(L_10);
		int32_t L_12 = String_IndexOfAny_m14813(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_14 = ___className;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		String_t* L_16 = String_Substring_m4282(L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		String_t* L_17 = ___className;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m418(L_17, 0, L_18, /*hidden argument*/NULL);
		___className = L_19;
		goto IL_005f;
	}

IL_005d:
	{
		V_2 = (String_t*)NULL;
	}

IL_005f:
	{
		bool L_20 = ___ignoreCase;
		if (L_20)
		{
			goto IL_0076;
		}
	}
	{
		Hashtable_t711 * L_21 = (__this->___name_cache_16);
		String_t* L_22 = ___className;
		NullCheck(L_21);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_21, L_22);
		V_3 = ((TypeBuilder_t5052 *)IsInst(L_23, TypeBuilder_t5052_il2cpp_TypeInfo_var));
		goto IL_00d8;
	}

IL_0076:
	{
		String_t* L_24 = ___className;
		NullCheck(L_24);
		int32_t L_25 = String_IndexOf_m4003(L_24, ((int32_t)43), /*hidden argument*/NULL);
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_00a1;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_27 = (__this->___types_11);
		if (!L_27)
		{
			goto IL_009f;
		}
	}
	{
		TypeBuilderU5BU5D_t5074* L_28 = (__this->___types_11);
		int32_t L_29 = (__this->___num_types_10);
		String_t* L_30 = ___className;
		TypeBuilder_t5052 * L_31 = ModuleBuilder_search_in_array_m22421(__this, L_28, L_29, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
	}

IL_009f:
	{
		goto IL_00d8;
	}

IL_00a1:
	{
		String_t* L_32 = ___className;
		int32_t L_33 = V_0;
		NullCheck(L_32);
		String_t* L_34 = String_Substring_m418(L_32, 0, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		String_t* L_35 = ___className;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		String_t* L_37 = String_Substring_m4282(L_35, ((int32_t)((int32_t)L_36+(int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_37;
		TypeBuilderU5BU5D_t5074* L_38 = (__this->___types_11);
		int32_t L_39 = (__this->___num_types_10);
		String_t* L_40 = V_4;
		TypeBuilder_t5052 * L_41 = ModuleBuilder_search_in_array_m22421(__this, L_38, L_39, L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		TypeBuilder_t5052 * L_42 = V_3;
		if (!L_42)
		{
			goto IL_00d8;
		}
	}
	{
		TypeBuilder_t5052 * L_43 = V_3;
		String_t* L_44 = V_5;
		TypeBuilder_t5052 * L_45 = ModuleBuilder_GetMaybeNested_m22424(__this, L_43, L_44, /*hidden argument*/NULL);
		V_3 = L_45;
	}

IL_00d8:
	{
		TypeBuilder_t5052 * L_46 = V_3;
		if (L_46)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_47 = ___throwOnError;
		if (!L_47)
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_48 = V_1;
		TypeLoadException_t4873 * L_49 = (TypeLoadException_t4873 *)il2cpp_codegen_object_new (TypeLoadException_t4873_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m20825(L_49, L_48, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_49);
	}

IL_00e5:
	{
		TypeBuilder_t5052 * L_50 = V_3;
		if (!L_50)
		{
			goto IL_0102;
		}
	}
	{
		String_t* L_51 = V_2;
		if (!L_51)
		{
			goto IL_0102;
		}
	}
	{
		TypeBuilder_t5052 * L_52 = V_3;
		String_t* L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		Type_t * L_54 = ModuleBuilder_create_modified_type_m22423(NULL /*static, unused*/, L_52, L_53, /*hidden argument*/NULL);
		V_6 = L_54;
		Type_t * L_55 = V_6;
		V_3 = ((TypeBuilder_t5052 *)IsInst(L_55, TypeBuilder_t5052_il2cpp_TypeInfo_var));
		TypeBuilder_t5052 * L_56 = V_3;
		if (L_56)
		{
			goto IL_0102;
		}
	}
	{
		Type_t * L_57 = V_6;
		return L_57;
	}

IL_0102:
	{
		TypeBuilder_t5052 * L_58 = V_3;
		if (!L_58)
		{
			goto IL_0114;
		}
	}
	{
		TypeBuilder_t5052 * L_59 = V_3;
		NullCheck(L_59);
		bool L_60 = TypeBuilder_get_is_created_m22527(L_59, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0114;
		}
	}
	{
		TypeBuilder_t5052 * L_61 = V_3;
		Type_t * L_62 = TypeBuilder_CreateType_m12231(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		return L_62;
	}

IL_0114:
	{
		TypeBuilder_t5052 * L_63 = V_3;
		return L_63;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" int32_t ModuleBuilder_get_next_table_index_m22426 (ModuleBuilder_t5049 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method)
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
		Int32U5BU5D_t484* L_0 = (__this->___table_indexes_18);
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		__this->___table_indexes_18 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, ((int32_t)64)));
		V_0 = 0;
		goto IL_0026;
	}

IL_0019:
	{
		Int32U5BU5D_t484* L_1 = (__this->___table_indexes_18);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, L_2)) = (int32_t)1;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0026:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)64))))
		{
			goto IL_0019;
		}
	}
	{
		Int32U5BU5D_t484* L_5 = (__this->___table_indexes_18);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_5, 2)) = (int32_t)2;
	}

IL_0034:
	{
		bool L_6 = ___inc;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		Int32U5BU5D_t484* L_7 = (__this->___table_indexes_18);
		int32_t L_8 = ___table;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t* L_9 = ((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8));
		int32_t L_10 = (*((int32_t*)L_9));
		V_1 = L_10;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)L_10+(int32_t)1));
		int32_t L_11 = V_1;
		return L_11;
	}

IL_004c:
	{
		Int32U5BU5D_t484* L_12 = (__this->___table_indexes_18);
		int32_t L_13 = ___table;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		return (*(int32_t*)(int32_t*)SZArrayLdElema(L_12, L_14));
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C" int32_t ModuleBuilder_getUSIndex_m22427 (Object_t * __this /* static, unused */, ModuleBuilder_t5049 * ___mb, String_t* ___str, const MethodInfo* method)
{
	typedef int32_t (*ModuleBuilder_getUSIndex_m22427_ftn) (ModuleBuilder_t5049 *, String_t*);
	static ModuleBuilder_getUSIndex_m22427_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_getUSIndex_m22427_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)");
	return _il2cpp_icall_func(___mb, ___str);
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C" int32_t ModuleBuilder_getToken_m22428 (Object_t * __this /* static, unused */, ModuleBuilder_t5049 * ___mb, Object_t * ___obj, const MethodInfo* method)
{
	typedef int32_t (*ModuleBuilder_getToken_m22428_ftn) (ModuleBuilder_t5049 *, Object_t *);
	static ModuleBuilder_getToken_m22428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_getToken_m22428_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)");
	return _il2cpp_icall_func(___mb, ___obj);
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilder_getMethodToken_m22429 (Object_t * __this /* static, unused */, ModuleBuilder_t5049 * ___mb, MethodInfo_t * ___method, TypeU5BU5D_t1221* ___opt_param_types, const MethodInfo* method)
{
	typedef int32_t (*ModuleBuilder_getMethodToken_m22429_ftn) (ModuleBuilder_t5049 *, MethodInfo_t *, TypeU5BU5D_t1221*);
	static ModuleBuilder_getMethodToken_m22429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_getMethodToken_m22429_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])");
	return _il2cpp_icall_func(___mb, ___method, ___opt_param_types);
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" int32_t ModuleBuilder_GetToken_m22430 (ModuleBuilder_t5049 * __this, String_t* ___str, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Hashtable_t711 * L_0 = (__this->___us_string_cache_17);
		String_t* L_1 = ___str;
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		Hashtable_t711 * L_3 = (__this->___us_string_cache_17);
		String_t* L_4 = ___str;
		NullCheck(L_3);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_3, L_4);
		return ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t82_il2cpp_TypeInfo_var))));
	}

IL_0020:
	{
		String_t* L_6 = ___str;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		int32_t L_7 = ModuleBuilder_getUSIndex_m22427(NULL /*static, unused*/, __this, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Hashtable_t711 * L_8 = (__this->___us_string_cache_17);
		String_t* L_9 = ___str;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_8, L_9, L_12);
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" int32_t ModuleBuilder_GetToken_m22431 (ModuleBuilder_t5049 * __this, MemberInfo_t * ___member, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	{
		MemberInfo_t * L_0 = ___member;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		int32_t L_1 = ModuleBuilder_getToken_m22428(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern TypeInfo* ModuleBuilder_t5049_il2cpp_TypeInfo_var;
extern "C" int32_t ModuleBuilder_GetToken_m22432 (ModuleBuilder_t5049 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1221* ___opt_param_types, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilder_t5049_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9088);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodInfo_t * L_0 = ___method;
		TypeU5BU5D_t1221* L_1 = ___opt_param_types;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleBuilder_t5049_il2cpp_TypeInfo_var);
		int32_t L_2 = ModuleBuilder_getMethodToken_m22429(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C" void ModuleBuilder_RegisterToken_m22433 (ModuleBuilder_t5049 * __this, Object_t * ___obj, int32_t ___token, const MethodInfo* method)
{
	typedef void (*ModuleBuilder_RegisterToken_m22433_ftn) (ModuleBuilder_t5049 *, Object_t *, int32_t);
	static ModuleBuilder_RegisterToken_m22433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ModuleBuilder_RegisterToken_m22433_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)");
	_il2cpp_icall_func(__this, ___obj, ___token);
}
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern TypeInfo* ModuleBuilderTokenGenerator_t5075_il2cpp_TypeInfo_var;
extern "C" Object_t * ModuleBuilder_GetTokenGenerator_m22434 (ModuleBuilder_t5049 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ModuleBuilderTokenGenerator_t5075_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9107);
		s_Il2CppMethodIntialized = true;
	}
	{
		ModuleBuilderTokenGenerator_t5075 * L_0 = (__this->___token_gen_20);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ModuleBuilderTokenGenerator_t5075 * L_1 = (ModuleBuilderTokenGenerator_t5075 *)il2cpp_codegen_object_new (ModuleBuilderTokenGenerator_t5075_il2cpp_TypeInfo_var);
		ModuleBuilderTokenGenerator__ctor_m22437(L_1, __this, /*hidden argument*/NULL);
		__this->___token_gen_20 = L_1;
	}

IL_0014:
	{
		ModuleBuilderTokenGenerator_t5075 * L_2 = (__this->___token_gen_20);
		return L_2;
	}
}
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C" String_t* ModuleBuilder_get_FileName_m22435 (ModuleBuilder_t5049 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (((Module_t5024 *)__this)->___fqname_5);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern TypeInfo* TypeBuilder_t5052_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder_CreateGlobalType_m22436 (ModuleBuilder_t5049 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeBuilder_t5052_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8874);
		s_Il2CppMethodIntialized = true;
	}
	{
		TypeBuilder_t5052 * L_0 = (__this->___global_type_15);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		TypeBuilder_t5052 * L_1 = (TypeBuilder_t5052 *)il2cpp_codegen_object_new (TypeBuilder_t5052_il2cpp_TypeInfo_var);
		TypeBuilder__ctor_m22477(L_1, __this, 0, 1, /*hidden argument*/NULL);
		__this->___global_type_15 = L_1;
	}

IL_0016:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.ModuleBuilderTokenGenerator::.ctor(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilderTokenGenerator__ctor_m22437 (ModuleBuilderTokenGenerator_t5075 * __this, ModuleBuilder_t5049 * ___mb, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ModuleBuilder_t5049 * L_0 = ___mb;
		__this->___mb_0 = L_0;
		return;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.String)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22438 (ModuleBuilderTokenGenerator_t5075 * __this, String_t* ___str, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___mb_0);
		String_t* L_1 = ___str;
		NullCheck(L_0);
		int32_t L_2 = ModuleBuilder_GetToken_m22430(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22439 (ModuleBuilderTokenGenerator_t5075 * __this, MemberInfo_t * ___member, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___mb_0);
		MemberInfo_t * L_1 = ___member;
		NullCheck(L_0);
		int32_t L_2 = ModuleBuilder_GetToken_m22431(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Reflection.Emit.ModuleBuilderTokenGenerator::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilderTokenGenerator_GetToken_m22440 (ModuleBuilderTokenGenerator_t5075 * __this, MethodInfo_t * ___method, TypeU5BU5D_t1221* ___opt_param_types, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___mb_0);
		MethodInfo_t * L_1 = ___method;
		TypeU5BU5D_t1221* L_2 = ___opt_param_types;
		NullCheck(L_0);
		int32_t L_3 = ModuleBuilder_GetToken_m22432(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.Emit.OpCodeNames
#include "mscorlib_System_Reflection_Emit_OpCodeNames.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.OpCodeNames
#include "mscorlib_System_Reflection_Emit_OpCodeNamesMethodDeclarations.h"



// System.Void System.Reflection.Emit.OpCodeNames::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* OpCodeNames_t5077_il2cpp_TypeInfo_var;
extern "C" void OpCodeNames__cctor_m22441 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		OpCodeNames_t5077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9108);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)304)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5642);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5642;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral3615);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral3615;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5643);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5643;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5644);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5644;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5645);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5645;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5646);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5646;
		StringU5BU5D_t75* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral5647);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral5647;
		StringU5BU5D_t75* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral5648);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral5648;
		StringU5BU5D_t75* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral5649);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral5649;
		StringU5BU5D_t75* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral5650);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral5650;
		StringU5BU5D_t75* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral5651);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral5651;
		StringU5BU5D_t75* L_11 = L_10;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, ((int32_t)11));
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral5652);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, ((int32_t)11))) = (String_t*)(String_t*) &_stringLiteral5652;
		StringU5BU5D_t75* L_12 = L_11;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)12));
		ArrayElementTypeCheck (L_12, (String_t*) &_stringLiteral5653);
		*((String_t**)(String_t**)SZArrayLdElema(L_12, ((int32_t)12))) = (String_t*)(String_t*) &_stringLiteral5653;
		StringU5BU5D_t75* L_13 = L_12;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)13));
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral5654);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, ((int32_t)13))) = (String_t*)(String_t*) &_stringLiteral5654;
		StringU5BU5D_t75* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, ((int32_t)14));
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral5655);
		*((String_t**)(String_t**)SZArrayLdElema(L_14, ((int32_t)14))) = (String_t*)(String_t*) &_stringLiteral5655;
		StringU5BU5D_t75* L_15 = L_14;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)15));
		ArrayElementTypeCheck (L_15, (String_t*) &_stringLiteral5656);
		*((String_t**)(String_t**)SZArrayLdElema(L_15, ((int32_t)15))) = (String_t*)(String_t*) &_stringLiteral5656;
		StringU5BU5D_t75* L_16 = L_15;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, ((int32_t)16));
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral5657);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, ((int32_t)16))) = (String_t*)(String_t*) &_stringLiteral5657;
		StringU5BU5D_t75* L_17 = L_16;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)17));
		ArrayElementTypeCheck (L_17, (String_t*) &_stringLiteral5658);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, ((int32_t)17))) = (String_t*)(String_t*) &_stringLiteral5658;
		StringU5BU5D_t75* L_18 = L_17;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, ((int32_t)18));
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral5659);
		*((String_t**)(String_t**)SZArrayLdElema(L_18, ((int32_t)18))) = (String_t*)(String_t*) &_stringLiteral5659;
		StringU5BU5D_t75* L_19 = L_18;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)19));
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral5660);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, ((int32_t)19))) = (String_t*)(String_t*) &_stringLiteral5660;
		StringU5BU5D_t75* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)20));
		ArrayElementTypeCheck (L_20, (String_t*) &_stringLiteral5661);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, ((int32_t)20))) = (String_t*)(String_t*) &_stringLiteral5661;
		StringU5BU5D_t75* L_21 = L_20;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)21));
		ArrayElementTypeCheck (L_21, (String_t*) &_stringLiteral5662);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, ((int32_t)21))) = (String_t*)(String_t*) &_stringLiteral5662;
		StringU5BU5D_t75* L_22 = L_21;
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, ((int32_t)22));
		ArrayElementTypeCheck (L_22, (String_t*) &_stringLiteral5663);
		*((String_t**)(String_t**)SZArrayLdElema(L_22, ((int32_t)22))) = (String_t*)(String_t*) &_stringLiteral5663;
		StringU5BU5D_t75* L_23 = L_22;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)23));
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral5664);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, ((int32_t)23))) = (String_t*)(String_t*) &_stringLiteral5664;
		StringU5BU5D_t75* L_24 = L_23;
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, ((int32_t)24));
		ArrayElementTypeCheck (L_24, (String_t*) &_stringLiteral5665);
		*((String_t**)(String_t**)SZArrayLdElema(L_24, ((int32_t)24))) = (String_t*)(String_t*) &_stringLiteral5665;
		StringU5BU5D_t75* L_25 = L_24;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)25));
		ArrayElementTypeCheck (L_25, (String_t*) &_stringLiteral5666);
		*((String_t**)(String_t**)SZArrayLdElema(L_25, ((int32_t)25))) = (String_t*)(String_t*) &_stringLiteral5666;
		StringU5BU5D_t75* L_26 = L_25;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)26));
		ArrayElementTypeCheck (L_26, (String_t*) &_stringLiteral5667);
		*((String_t**)(String_t**)SZArrayLdElema(L_26, ((int32_t)26))) = (String_t*)(String_t*) &_stringLiteral5667;
		StringU5BU5D_t75* L_27 = L_26;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)27));
		ArrayElementTypeCheck (L_27, (String_t*) &_stringLiteral5668);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, ((int32_t)27))) = (String_t*)(String_t*) &_stringLiteral5668;
		StringU5BU5D_t75* L_28 = L_27;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)28));
		ArrayElementTypeCheck (L_28, (String_t*) &_stringLiteral5669);
		*((String_t**)(String_t**)SZArrayLdElema(L_28, ((int32_t)28))) = (String_t*)(String_t*) &_stringLiteral5669;
		StringU5BU5D_t75* L_29 = L_28;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)29));
		ArrayElementTypeCheck (L_29, (String_t*) &_stringLiteral5670);
		*((String_t**)(String_t**)SZArrayLdElema(L_29, ((int32_t)29))) = (String_t*)(String_t*) &_stringLiteral5670;
		StringU5BU5D_t75* L_30 = L_29;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, ((int32_t)30));
		ArrayElementTypeCheck (L_30, (String_t*) &_stringLiteral5671);
		*((String_t**)(String_t**)SZArrayLdElema(L_30, ((int32_t)30))) = (String_t*)(String_t*) &_stringLiteral5671;
		StringU5BU5D_t75* L_31 = L_30;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)31));
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral5672);
		*((String_t**)(String_t**)SZArrayLdElema(L_31, ((int32_t)31))) = (String_t*)(String_t*) &_stringLiteral5672;
		StringU5BU5D_t75* L_32 = L_31;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)32));
		ArrayElementTypeCheck (L_32, (String_t*) &_stringLiteral5673);
		*((String_t**)(String_t**)SZArrayLdElema(L_32, ((int32_t)32))) = (String_t*)(String_t*) &_stringLiteral5673;
		StringU5BU5D_t75* L_33 = L_32;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)33));
		ArrayElementTypeCheck (L_33, (String_t*) &_stringLiteral5674);
		*((String_t**)(String_t**)SZArrayLdElema(L_33, ((int32_t)33))) = (String_t*)(String_t*) &_stringLiteral5674;
		StringU5BU5D_t75* L_34 = L_33;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)34));
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral5675);
		*((String_t**)(String_t**)SZArrayLdElema(L_34, ((int32_t)34))) = (String_t*)(String_t*) &_stringLiteral5675;
		StringU5BU5D_t75* L_35 = L_34;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, ((int32_t)35));
		ArrayElementTypeCheck (L_35, (String_t*) &_stringLiteral5676);
		*((String_t**)(String_t**)SZArrayLdElema(L_35, ((int32_t)35))) = (String_t*)(String_t*) &_stringLiteral5676;
		StringU5BU5D_t75* L_36 = L_35;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, ((int32_t)37));
		ArrayElementTypeCheck (L_36, (String_t*) &_stringLiteral5677);
		*((String_t**)(String_t**)SZArrayLdElema(L_36, ((int32_t)37))) = (String_t*)(String_t*) &_stringLiteral5677;
		StringU5BU5D_t75* L_37 = L_36;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)38));
		ArrayElementTypeCheck (L_37, (String_t*) &_stringLiteral5678);
		*((String_t**)(String_t**)SZArrayLdElema(L_37, ((int32_t)38))) = (String_t*)(String_t*) &_stringLiteral5678;
		StringU5BU5D_t75* L_38 = L_37;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)39));
		ArrayElementTypeCheck (L_38, (String_t*) &_stringLiteral5679);
		*((String_t**)(String_t**)SZArrayLdElema(L_38, ((int32_t)39))) = (String_t*)(String_t*) &_stringLiteral5679;
		StringU5BU5D_t75* L_39 = L_38;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)40));
		ArrayElementTypeCheck (L_39, (String_t*) &_stringLiteral5680);
		*((String_t**)(String_t**)SZArrayLdElema(L_39, ((int32_t)40))) = (String_t*)(String_t*) &_stringLiteral5680;
		StringU5BU5D_t75* L_40 = L_39;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, ((int32_t)41));
		ArrayElementTypeCheck (L_40, (String_t*) &_stringLiteral5681);
		*((String_t**)(String_t**)SZArrayLdElema(L_40, ((int32_t)41))) = (String_t*)(String_t*) &_stringLiteral5681;
		StringU5BU5D_t75* L_41 = L_40;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)42));
		ArrayElementTypeCheck (L_41, (String_t*) &_stringLiteral5682);
		*((String_t**)(String_t**)SZArrayLdElema(L_41, ((int32_t)42))) = (String_t*)(String_t*) &_stringLiteral5682;
		StringU5BU5D_t75* L_42 = L_41;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)43));
		ArrayElementTypeCheck (L_42, (String_t*) &_stringLiteral5683);
		*((String_t**)(String_t**)SZArrayLdElema(L_42, ((int32_t)43))) = (String_t*)(String_t*) &_stringLiteral5683;
		StringU5BU5D_t75* L_43 = L_42;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, ((int32_t)44));
		ArrayElementTypeCheck (L_43, (String_t*) &_stringLiteral5684);
		*((String_t**)(String_t**)SZArrayLdElema(L_43, ((int32_t)44))) = (String_t*)(String_t*) &_stringLiteral5684;
		StringU5BU5D_t75* L_44 = L_43;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)45));
		ArrayElementTypeCheck (L_44, (String_t*) &_stringLiteral5685);
		*((String_t**)(String_t**)SZArrayLdElema(L_44, ((int32_t)45))) = (String_t*)(String_t*) &_stringLiteral5685;
		StringU5BU5D_t75* L_45 = L_44;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, ((int32_t)46));
		ArrayElementTypeCheck (L_45, (String_t*) &_stringLiteral5686);
		*((String_t**)(String_t**)SZArrayLdElema(L_45, ((int32_t)46))) = (String_t*)(String_t*) &_stringLiteral5686;
		StringU5BU5D_t75* L_46 = L_45;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)47));
		ArrayElementTypeCheck (L_46, (String_t*) &_stringLiteral5687);
		*((String_t**)(String_t**)SZArrayLdElema(L_46, ((int32_t)47))) = (String_t*)(String_t*) &_stringLiteral5687;
		StringU5BU5D_t75* L_47 = L_46;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)48));
		ArrayElementTypeCheck (L_47, (String_t*) &_stringLiteral5688);
		*((String_t**)(String_t**)SZArrayLdElema(L_47, ((int32_t)48))) = (String_t*)(String_t*) &_stringLiteral5688;
		StringU5BU5D_t75* L_48 = L_47;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)49));
		ArrayElementTypeCheck (L_48, (String_t*) &_stringLiteral5689);
		*((String_t**)(String_t**)SZArrayLdElema(L_48, ((int32_t)49))) = (String_t*)(String_t*) &_stringLiteral5689;
		StringU5BU5D_t75* L_49 = L_48;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, ((int32_t)50));
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral5690);
		*((String_t**)(String_t**)SZArrayLdElema(L_49, ((int32_t)50))) = (String_t*)(String_t*) &_stringLiteral5690;
		StringU5BU5D_t75* L_50 = L_49;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, ((int32_t)51));
		ArrayElementTypeCheck (L_50, (String_t*) &_stringLiteral5691);
		*((String_t**)(String_t**)SZArrayLdElema(L_50, ((int32_t)51))) = (String_t*)(String_t*) &_stringLiteral5691;
		StringU5BU5D_t75* L_51 = L_50;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, ((int32_t)52));
		ArrayElementTypeCheck (L_51, (String_t*) &_stringLiteral5692);
		*((String_t**)(String_t**)SZArrayLdElema(L_51, ((int32_t)52))) = (String_t*)(String_t*) &_stringLiteral5692;
		StringU5BU5D_t75* L_52 = L_51;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, ((int32_t)53));
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral5693);
		*((String_t**)(String_t**)SZArrayLdElema(L_52, ((int32_t)53))) = (String_t*)(String_t*) &_stringLiteral5693;
		StringU5BU5D_t75* L_53 = L_52;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, ((int32_t)54));
		ArrayElementTypeCheck (L_53, (String_t*) &_stringLiteral5694);
		*((String_t**)(String_t**)SZArrayLdElema(L_53, ((int32_t)54))) = (String_t*)(String_t*) &_stringLiteral5694;
		StringU5BU5D_t75* L_54 = L_53;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)55));
		ArrayElementTypeCheck (L_54, (String_t*) &_stringLiteral5695);
		*((String_t**)(String_t**)SZArrayLdElema(L_54, ((int32_t)55))) = (String_t*)(String_t*) &_stringLiteral5695;
		StringU5BU5D_t75* L_55 = L_54;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, ((int32_t)56));
		ArrayElementTypeCheck (L_55, (String_t*) &_stringLiteral5696);
		*((String_t**)(String_t**)SZArrayLdElema(L_55, ((int32_t)56))) = (String_t*)(String_t*) &_stringLiteral5696;
		StringU5BU5D_t75* L_56 = L_55;
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, ((int32_t)57));
		ArrayElementTypeCheck (L_56, (String_t*) &_stringLiteral5697);
		*((String_t**)(String_t**)SZArrayLdElema(L_56, ((int32_t)57))) = (String_t*)(String_t*) &_stringLiteral5697;
		StringU5BU5D_t75* L_57 = L_56;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)58));
		ArrayElementTypeCheck (L_57, (String_t*) &_stringLiteral5698);
		*((String_t**)(String_t**)SZArrayLdElema(L_57, ((int32_t)58))) = (String_t*)(String_t*) &_stringLiteral5698;
		StringU5BU5D_t75* L_58 = L_57;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, ((int32_t)59));
		ArrayElementTypeCheck (L_58, (String_t*) &_stringLiteral5699);
		*((String_t**)(String_t**)SZArrayLdElema(L_58, ((int32_t)59))) = (String_t*)(String_t*) &_stringLiteral5699;
		StringU5BU5D_t75* L_59 = L_58;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, ((int32_t)60));
		ArrayElementTypeCheck (L_59, (String_t*) &_stringLiteral5700);
		*((String_t**)(String_t**)SZArrayLdElema(L_59, ((int32_t)60))) = (String_t*)(String_t*) &_stringLiteral5700;
		StringU5BU5D_t75* L_60 = L_59;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)61));
		ArrayElementTypeCheck (L_60, (String_t*) &_stringLiteral5701);
		*((String_t**)(String_t**)SZArrayLdElema(L_60, ((int32_t)61))) = (String_t*)(String_t*) &_stringLiteral5701;
		StringU5BU5D_t75* L_61 = L_60;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)62));
		ArrayElementTypeCheck (L_61, (String_t*) &_stringLiteral5702);
		*((String_t**)(String_t**)SZArrayLdElema(L_61, ((int32_t)62))) = (String_t*)(String_t*) &_stringLiteral5702;
		StringU5BU5D_t75* L_62 = L_61;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, ((int32_t)63));
		ArrayElementTypeCheck (L_62, (String_t*) &_stringLiteral5703);
		*((String_t**)(String_t**)SZArrayLdElema(L_62, ((int32_t)63))) = (String_t*)(String_t*) &_stringLiteral5703;
		StringU5BU5D_t75* L_63 = L_62;
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)64));
		ArrayElementTypeCheck (L_63, (String_t*) &_stringLiteral5704);
		*((String_t**)(String_t**)SZArrayLdElema(L_63, ((int32_t)64))) = (String_t*)(String_t*) &_stringLiteral5704;
		StringU5BU5D_t75* L_64 = L_63;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, ((int32_t)65));
		ArrayElementTypeCheck (L_64, (String_t*) &_stringLiteral5705);
		*((String_t**)(String_t**)SZArrayLdElema(L_64, ((int32_t)65))) = (String_t*)(String_t*) &_stringLiteral5705;
		StringU5BU5D_t75* L_65 = L_64;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)66));
		ArrayElementTypeCheck (L_65, (String_t*) &_stringLiteral5706);
		*((String_t**)(String_t**)SZArrayLdElema(L_65, ((int32_t)66))) = (String_t*)(String_t*) &_stringLiteral5706;
		StringU5BU5D_t75* L_66 = L_65;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, ((int32_t)67));
		ArrayElementTypeCheck (L_66, (String_t*) &_stringLiteral5707);
		*((String_t**)(String_t**)SZArrayLdElema(L_66, ((int32_t)67))) = (String_t*)(String_t*) &_stringLiteral5707;
		StringU5BU5D_t75* L_67 = L_66;
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)68));
		ArrayElementTypeCheck (L_67, (String_t*) &_stringLiteral5708);
		*((String_t**)(String_t**)SZArrayLdElema(L_67, ((int32_t)68))) = (String_t*)(String_t*) &_stringLiteral5708;
		StringU5BU5D_t75* L_68 = L_67;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, ((int32_t)69));
		ArrayElementTypeCheck (L_68, (String_t*) &_stringLiteral3610);
		*((String_t**)(String_t**)SZArrayLdElema(L_68, ((int32_t)69))) = (String_t*)(String_t*) &_stringLiteral3610;
		StringU5BU5D_t75* L_69 = L_68;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, ((int32_t)70));
		ArrayElementTypeCheck (L_69, (String_t*) &_stringLiteral5709);
		*((String_t**)(String_t**)SZArrayLdElema(L_69, ((int32_t)70))) = (String_t*)(String_t*) &_stringLiteral5709;
		StringU5BU5D_t75* L_70 = L_69;
		NullCheck(L_70);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_70, ((int32_t)71));
		ArrayElementTypeCheck (L_70, (String_t*) &_stringLiteral5710);
		*((String_t**)(String_t**)SZArrayLdElema(L_70, ((int32_t)71))) = (String_t*)(String_t*) &_stringLiteral5710;
		StringU5BU5D_t75* L_71 = L_70;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, ((int32_t)72));
		ArrayElementTypeCheck (L_71, (String_t*) &_stringLiteral5711);
		*((String_t**)(String_t**)SZArrayLdElema(L_71, ((int32_t)72))) = (String_t*)(String_t*) &_stringLiteral5711;
		StringU5BU5D_t75* L_72 = L_71;
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, ((int32_t)73));
		ArrayElementTypeCheck (L_72, (String_t*) &_stringLiteral5712);
		*((String_t**)(String_t**)SZArrayLdElema(L_72, ((int32_t)73))) = (String_t*)(String_t*) &_stringLiteral5712;
		StringU5BU5D_t75* L_73 = L_72;
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, ((int32_t)74));
		ArrayElementTypeCheck (L_73, (String_t*) &_stringLiteral5713);
		*((String_t**)(String_t**)SZArrayLdElema(L_73, ((int32_t)74))) = (String_t*)(String_t*) &_stringLiteral5713;
		StringU5BU5D_t75* L_74 = L_73;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, ((int32_t)75));
		ArrayElementTypeCheck (L_74, (String_t*) &_stringLiteral5714);
		*((String_t**)(String_t**)SZArrayLdElema(L_74, ((int32_t)75))) = (String_t*)(String_t*) &_stringLiteral5714;
		StringU5BU5D_t75* L_75 = L_74;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, ((int32_t)76));
		ArrayElementTypeCheck (L_75, (String_t*) &_stringLiteral5715);
		*((String_t**)(String_t**)SZArrayLdElema(L_75, ((int32_t)76))) = (String_t*)(String_t*) &_stringLiteral5715;
		StringU5BU5D_t75* L_76 = L_75;
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, ((int32_t)77));
		ArrayElementTypeCheck (L_76, (String_t*) &_stringLiteral5716);
		*((String_t**)(String_t**)SZArrayLdElema(L_76, ((int32_t)77))) = (String_t*)(String_t*) &_stringLiteral5716;
		StringU5BU5D_t75* L_77 = L_76;
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, ((int32_t)78));
		ArrayElementTypeCheck (L_77, (String_t*) &_stringLiteral5717);
		*((String_t**)(String_t**)SZArrayLdElema(L_77, ((int32_t)78))) = (String_t*)(String_t*) &_stringLiteral5717;
		StringU5BU5D_t75* L_78 = L_77;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, ((int32_t)79));
		ArrayElementTypeCheck (L_78, (String_t*) &_stringLiteral5718);
		*((String_t**)(String_t**)SZArrayLdElema(L_78, ((int32_t)79))) = (String_t*)(String_t*) &_stringLiteral5718;
		StringU5BU5D_t75* L_79 = L_78;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)80));
		ArrayElementTypeCheck (L_79, (String_t*) &_stringLiteral5719);
		*((String_t**)(String_t**)SZArrayLdElema(L_79, ((int32_t)80))) = (String_t*)(String_t*) &_stringLiteral5719;
		StringU5BU5D_t75* L_80 = L_79;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)81));
		ArrayElementTypeCheck (L_80, (String_t*) &_stringLiteral5720);
		*((String_t**)(String_t**)SZArrayLdElema(L_80, ((int32_t)81))) = (String_t*)(String_t*) &_stringLiteral5720;
		StringU5BU5D_t75* L_81 = L_80;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, ((int32_t)82));
		ArrayElementTypeCheck (L_81, (String_t*) &_stringLiteral5721);
		*((String_t**)(String_t**)SZArrayLdElema(L_81, ((int32_t)82))) = (String_t*)(String_t*) &_stringLiteral5721;
		StringU5BU5D_t75* L_82 = L_81;
		NullCheck(L_82);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_82, ((int32_t)83));
		ArrayElementTypeCheck (L_82, (String_t*) &_stringLiteral5722);
		*((String_t**)(String_t**)SZArrayLdElema(L_82, ((int32_t)83))) = (String_t*)(String_t*) &_stringLiteral5722;
		StringU5BU5D_t75* L_83 = L_82;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, ((int32_t)84));
		ArrayElementTypeCheck (L_83, (String_t*) &_stringLiteral5723);
		*((String_t**)(String_t**)SZArrayLdElema(L_83, ((int32_t)84))) = (String_t*)(String_t*) &_stringLiteral5723;
		StringU5BU5D_t75* L_84 = L_83;
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, ((int32_t)85));
		ArrayElementTypeCheck (L_84, (String_t*) &_stringLiteral5724);
		*((String_t**)(String_t**)SZArrayLdElema(L_84, ((int32_t)85))) = (String_t*)(String_t*) &_stringLiteral5724;
		StringU5BU5D_t75* L_85 = L_84;
		NullCheck(L_85);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_85, ((int32_t)86));
		ArrayElementTypeCheck (L_85, (String_t*) &_stringLiteral5725);
		*((String_t**)(String_t**)SZArrayLdElema(L_85, ((int32_t)86))) = (String_t*)(String_t*) &_stringLiteral5725;
		StringU5BU5D_t75* L_86 = L_85;
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, ((int32_t)87));
		ArrayElementTypeCheck (L_86, (String_t*) &_stringLiteral5726);
		*((String_t**)(String_t**)SZArrayLdElema(L_86, ((int32_t)87))) = (String_t*)(String_t*) &_stringLiteral5726;
		StringU5BU5D_t75* L_87 = L_86;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, ((int32_t)88));
		ArrayElementTypeCheck (L_87, (String_t*) &_stringLiteral2394);
		*((String_t**)(String_t**)SZArrayLdElema(L_87, ((int32_t)88))) = (String_t*)(String_t*) &_stringLiteral2394;
		StringU5BU5D_t75* L_88 = L_87;
		NullCheck(L_88);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_88, ((int32_t)89));
		ArrayElementTypeCheck (L_88, (String_t*) &_stringLiteral5727);
		*((String_t**)(String_t**)SZArrayLdElema(L_88, ((int32_t)89))) = (String_t*)(String_t*) &_stringLiteral5727;
		StringU5BU5D_t75* L_89 = L_88;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, ((int32_t)90));
		ArrayElementTypeCheck (L_89, (String_t*) &_stringLiteral5728);
		*((String_t**)(String_t**)SZArrayLdElema(L_89, ((int32_t)90))) = (String_t*)(String_t*) &_stringLiteral5728;
		StringU5BU5D_t75* L_90 = L_89;
		NullCheck(L_90);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_90, ((int32_t)91));
		ArrayElementTypeCheck (L_90, (String_t*) &_stringLiteral5729);
		*((String_t**)(String_t**)SZArrayLdElema(L_90, ((int32_t)91))) = (String_t*)(String_t*) &_stringLiteral5729;
		StringU5BU5D_t75* L_91 = L_90;
		NullCheck(L_91);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_91, ((int32_t)92));
		ArrayElementTypeCheck (L_91, (String_t*) &_stringLiteral5730);
		*((String_t**)(String_t**)SZArrayLdElema(L_91, ((int32_t)92))) = (String_t*)(String_t*) &_stringLiteral5730;
		StringU5BU5D_t75* L_92 = L_91;
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, ((int32_t)93));
		ArrayElementTypeCheck (L_92, (String_t*) &_stringLiteral5731);
		*((String_t**)(String_t**)SZArrayLdElema(L_92, ((int32_t)93))) = (String_t*)(String_t*) &_stringLiteral5731;
		StringU5BU5D_t75* L_93 = L_92;
		NullCheck(L_93);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_93, ((int32_t)94));
		ArrayElementTypeCheck (L_93, (String_t*) &_stringLiteral5732);
		*((String_t**)(String_t**)SZArrayLdElema(L_93, ((int32_t)94))) = (String_t*)(String_t*) &_stringLiteral5732;
		StringU5BU5D_t75* L_94 = L_93;
		NullCheck(L_94);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_94, ((int32_t)95));
		ArrayElementTypeCheck (L_94, (String_t*) &_stringLiteral5733);
		*((String_t**)(String_t**)SZArrayLdElema(L_94, ((int32_t)95))) = (String_t*)(String_t*) &_stringLiteral5733;
		StringU5BU5D_t75* L_95 = L_94;
		NullCheck(L_95);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_95, ((int32_t)96));
		ArrayElementTypeCheck (L_95, (String_t*) &_stringLiteral5734);
		*((String_t**)(String_t**)SZArrayLdElema(L_95, ((int32_t)96))) = (String_t*)(String_t*) &_stringLiteral5734;
		StringU5BU5D_t75* L_96 = L_95;
		NullCheck(L_96);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_96, ((int32_t)97));
		ArrayElementTypeCheck (L_96, (String_t*) &_stringLiteral5735);
		*((String_t**)(String_t**)SZArrayLdElema(L_96, ((int32_t)97))) = (String_t*)(String_t*) &_stringLiteral5735;
		StringU5BU5D_t75* L_97 = L_96;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, ((int32_t)98));
		ArrayElementTypeCheck (L_97, (String_t*) &_stringLiteral5736);
		*((String_t**)(String_t**)SZArrayLdElema(L_97, ((int32_t)98))) = (String_t*)(String_t*) &_stringLiteral5736;
		StringU5BU5D_t75* L_98 = L_97;
		NullCheck(L_98);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_98, ((int32_t)99));
		ArrayElementTypeCheck (L_98, (String_t*) &_stringLiteral5737);
		*((String_t**)(String_t**)SZArrayLdElema(L_98, ((int32_t)99))) = (String_t*)(String_t*) &_stringLiteral5737;
		StringU5BU5D_t75* L_99 = L_98;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, ((int32_t)100));
		ArrayElementTypeCheck (L_99, (String_t*) &_stringLiteral5738);
		*((String_t**)(String_t**)SZArrayLdElema(L_99, ((int32_t)100))) = (String_t*)(String_t*) &_stringLiteral5738;
		StringU5BU5D_t75* L_100 = L_99;
		NullCheck(L_100);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_100, ((int32_t)101));
		ArrayElementTypeCheck (L_100, (String_t*) &_stringLiteral5739);
		*((String_t**)(String_t**)SZArrayLdElema(L_100, ((int32_t)101))) = (String_t*)(String_t*) &_stringLiteral5739;
		StringU5BU5D_t75* L_101 = L_100;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, ((int32_t)102));
		ArrayElementTypeCheck (L_101, (String_t*) &_stringLiteral5740);
		*((String_t**)(String_t**)SZArrayLdElema(L_101, ((int32_t)102))) = (String_t*)(String_t*) &_stringLiteral5740;
		StringU5BU5D_t75* L_102 = L_101;
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, ((int32_t)103));
		ArrayElementTypeCheck (L_102, (String_t*) &_stringLiteral5741);
		*((String_t**)(String_t**)SZArrayLdElema(L_102, ((int32_t)103))) = (String_t*)(String_t*) &_stringLiteral5741;
		StringU5BU5D_t75* L_103 = L_102;
		NullCheck(L_103);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_103, ((int32_t)104));
		ArrayElementTypeCheck (L_103, (String_t*) &_stringLiteral5742);
		*((String_t**)(String_t**)SZArrayLdElema(L_103, ((int32_t)104))) = (String_t*)(String_t*) &_stringLiteral5742;
		StringU5BU5D_t75* L_104 = L_103;
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, ((int32_t)105));
		ArrayElementTypeCheck (L_104, (String_t*) &_stringLiteral5743);
		*((String_t**)(String_t**)SZArrayLdElema(L_104, ((int32_t)105))) = (String_t*)(String_t*) &_stringLiteral5743;
		StringU5BU5D_t75* L_105 = L_104;
		NullCheck(L_105);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_105, ((int32_t)106));
		ArrayElementTypeCheck (L_105, (String_t*) &_stringLiteral5744);
		*((String_t**)(String_t**)SZArrayLdElema(L_105, ((int32_t)106))) = (String_t*)(String_t*) &_stringLiteral5744;
		StringU5BU5D_t75* L_106 = L_105;
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, ((int32_t)107));
		ArrayElementTypeCheck (L_106, (String_t*) &_stringLiteral5745);
		*((String_t**)(String_t**)SZArrayLdElema(L_106, ((int32_t)107))) = (String_t*)(String_t*) &_stringLiteral5745;
		StringU5BU5D_t75* L_107 = L_106;
		NullCheck(L_107);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_107, ((int32_t)108));
		ArrayElementTypeCheck (L_107, (String_t*) &_stringLiteral5746);
		*((String_t**)(String_t**)SZArrayLdElema(L_107, ((int32_t)108))) = (String_t*)(String_t*) &_stringLiteral5746;
		StringU5BU5D_t75* L_108 = L_107;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, ((int32_t)109));
		ArrayElementTypeCheck (L_108, (String_t*) &_stringLiteral5747);
		*((String_t**)(String_t**)SZArrayLdElema(L_108, ((int32_t)109))) = (String_t*)(String_t*) &_stringLiteral5747;
		StringU5BU5D_t75* L_109 = L_108;
		NullCheck(L_109);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_109, ((int32_t)110));
		ArrayElementTypeCheck (L_109, (String_t*) &_stringLiteral5748);
		*((String_t**)(String_t**)SZArrayLdElema(L_109, ((int32_t)110))) = (String_t*)(String_t*) &_stringLiteral5748;
		StringU5BU5D_t75* L_110 = L_109;
		NullCheck(L_110);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_110, ((int32_t)111));
		ArrayElementTypeCheck (L_110, (String_t*) &_stringLiteral5749);
		*((String_t**)(String_t**)SZArrayLdElema(L_110, ((int32_t)111))) = (String_t*)(String_t*) &_stringLiteral5749;
		StringU5BU5D_t75* L_111 = L_110;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, ((int32_t)112));
		ArrayElementTypeCheck (L_111, (String_t*) &_stringLiteral5750);
		*((String_t**)(String_t**)SZArrayLdElema(L_111, ((int32_t)112))) = (String_t*)(String_t*) &_stringLiteral5750;
		StringU5BU5D_t75* L_112 = L_111;
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, ((int32_t)113));
		ArrayElementTypeCheck (L_112, (String_t*) &_stringLiteral5751);
		*((String_t**)(String_t**)SZArrayLdElema(L_112, ((int32_t)113))) = (String_t*)(String_t*) &_stringLiteral5751;
		StringU5BU5D_t75* L_113 = L_112;
		NullCheck(L_113);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_113, ((int32_t)114));
		ArrayElementTypeCheck (L_113, (String_t*) &_stringLiteral5752);
		*((String_t**)(String_t**)SZArrayLdElema(L_113, ((int32_t)114))) = (String_t*)(String_t*) &_stringLiteral5752;
		StringU5BU5D_t75* L_114 = L_113;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, ((int32_t)115));
		ArrayElementTypeCheck (L_114, (String_t*) &_stringLiteral5753);
		*((String_t**)(String_t**)SZArrayLdElema(L_114, ((int32_t)115))) = (String_t*)(String_t*) &_stringLiteral5753;
		StringU5BU5D_t75* L_115 = L_114;
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, ((int32_t)116));
		ArrayElementTypeCheck (L_115, (String_t*) &_stringLiteral5754);
		*((String_t**)(String_t**)SZArrayLdElema(L_115, ((int32_t)116))) = (String_t*)(String_t*) &_stringLiteral5754;
		StringU5BU5D_t75* L_116 = L_115;
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, ((int32_t)117));
		ArrayElementTypeCheck (L_116, (String_t*) &_stringLiteral5755);
		*((String_t**)(String_t**)SZArrayLdElema(L_116, ((int32_t)117))) = (String_t*)(String_t*) &_stringLiteral5755;
		StringU5BU5D_t75* L_117 = L_116;
		NullCheck(L_117);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_117, ((int32_t)118));
		ArrayElementTypeCheck (L_117, (String_t*) &_stringLiteral5756);
		*((String_t**)(String_t**)SZArrayLdElema(L_117, ((int32_t)118))) = (String_t*)(String_t*) &_stringLiteral5756;
		StringU5BU5D_t75* L_118 = L_117;
		NullCheck(L_118);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_118, ((int32_t)121));
		ArrayElementTypeCheck (L_118, (String_t*) &_stringLiteral5757);
		*((String_t**)(String_t**)SZArrayLdElema(L_118, ((int32_t)121))) = (String_t*)(String_t*) &_stringLiteral5757;
		StringU5BU5D_t75* L_119 = L_118;
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, ((int32_t)122));
		ArrayElementTypeCheck (L_119, (String_t*) &_stringLiteral3614);
		*((String_t**)(String_t**)SZArrayLdElema(L_119, ((int32_t)122))) = (String_t*)(String_t*) &_stringLiteral3614;
		StringU5BU5D_t75* L_120 = L_119;
		NullCheck(L_120);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_120, ((int32_t)123));
		ArrayElementTypeCheck (L_120, (String_t*) &_stringLiteral5758);
		*((String_t**)(String_t**)SZArrayLdElema(L_120, ((int32_t)123))) = (String_t*)(String_t*) &_stringLiteral5758;
		StringU5BU5D_t75* L_121 = L_120;
		NullCheck(L_121);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_121, ((int32_t)124));
		ArrayElementTypeCheck (L_121, (String_t*) &_stringLiteral5759);
		*((String_t**)(String_t**)SZArrayLdElema(L_121, ((int32_t)124))) = (String_t*)(String_t*) &_stringLiteral5759;
		StringU5BU5D_t75* L_122 = L_121;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, ((int32_t)125));
		ArrayElementTypeCheck (L_122, (String_t*) &_stringLiteral5760);
		*((String_t**)(String_t**)SZArrayLdElema(L_122, ((int32_t)125))) = (String_t*)(String_t*) &_stringLiteral5760;
		StringU5BU5D_t75* L_123 = L_122;
		NullCheck(L_123);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_123, ((int32_t)126));
		ArrayElementTypeCheck (L_123, (String_t*) &_stringLiteral5761);
		*((String_t**)(String_t**)SZArrayLdElema(L_123, ((int32_t)126))) = (String_t*)(String_t*) &_stringLiteral5761;
		StringU5BU5D_t75* L_124 = L_123;
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, ((int32_t)127));
		ArrayElementTypeCheck (L_124, (String_t*) &_stringLiteral5762);
		*((String_t**)(String_t**)SZArrayLdElema(L_124, ((int32_t)127))) = (String_t*)(String_t*) &_stringLiteral5762;
		StringU5BU5D_t75* L_125 = L_124;
		NullCheck(L_125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_125, ((int32_t)128));
		ArrayElementTypeCheck (L_125, (String_t*) &_stringLiteral5763);
		*((String_t**)(String_t**)SZArrayLdElema(L_125, ((int32_t)128))) = (String_t*)(String_t*) &_stringLiteral5763;
		StringU5BU5D_t75* L_126 = L_125;
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, ((int32_t)129));
		ArrayElementTypeCheck (L_126, (String_t*) &_stringLiteral5764);
		*((String_t**)(String_t**)SZArrayLdElema(L_126, ((int32_t)129))) = (String_t*)(String_t*) &_stringLiteral5764;
		StringU5BU5D_t75* L_127 = L_126;
		NullCheck(L_127);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_127, ((int32_t)130));
		ArrayElementTypeCheck (L_127, (String_t*) &_stringLiteral5765);
		*((String_t**)(String_t**)SZArrayLdElema(L_127, ((int32_t)130))) = (String_t*)(String_t*) &_stringLiteral5765;
		StringU5BU5D_t75* L_128 = L_127;
		NullCheck(L_128);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_128, ((int32_t)131));
		ArrayElementTypeCheck (L_128, (String_t*) &_stringLiteral5766);
		*((String_t**)(String_t**)SZArrayLdElema(L_128, ((int32_t)131))) = (String_t*)(String_t*) &_stringLiteral5766;
		StringU5BU5D_t75* L_129 = L_128;
		NullCheck(L_129);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_129, ((int32_t)132));
		ArrayElementTypeCheck (L_129, (String_t*) &_stringLiteral5767);
		*((String_t**)(String_t**)SZArrayLdElema(L_129, ((int32_t)132))) = (String_t*)(String_t*) &_stringLiteral5767;
		StringU5BU5D_t75* L_130 = L_129;
		NullCheck(L_130);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_130, ((int32_t)133));
		ArrayElementTypeCheck (L_130, (String_t*) &_stringLiteral5768);
		*((String_t**)(String_t**)SZArrayLdElema(L_130, ((int32_t)133))) = (String_t*)(String_t*) &_stringLiteral5768;
		StringU5BU5D_t75* L_131 = L_130;
		NullCheck(L_131);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_131, ((int32_t)134));
		ArrayElementTypeCheck (L_131, (String_t*) &_stringLiteral5769);
		*((String_t**)(String_t**)SZArrayLdElema(L_131, ((int32_t)134))) = (String_t*)(String_t*) &_stringLiteral5769;
		StringU5BU5D_t75* L_132 = L_131;
		NullCheck(L_132);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_132, ((int32_t)135));
		ArrayElementTypeCheck (L_132, (String_t*) &_stringLiteral5770);
		*((String_t**)(String_t**)SZArrayLdElema(L_132, ((int32_t)135))) = (String_t*)(String_t*) &_stringLiteral5770;
		StringU5BU5D_t75* L_133 = L_132;
		NullCheck(L_133);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_133, ((int32_t)136));
		ArrayElementTypeCheck (L_133, (String_t*) &_stringLiteral5771);
		*((String_t**)(String_t**)SZArrayLdElema(L_133, ((int32_t)136))) = (String_t*)(String_t*) &_stringLiteral5771;
		StringU5BU5D_t75* L_134 = L_133;
		NullCheck(L_134);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_134, ((int32_t)137));
		ArrayElementTypeCheck (L_134, (String_t*) &_stringLiteral5772);
		*((String_t**)(String_t**)SZArrayLdElema(L_134, ((int32_t)137))) = (String_t*)(String_t*) &_stringLiteral5772;
		StringU5BU5D_t75* L_135 = L_134;
		NullCheck(L_135);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_135, ((int32_t)138));
		ArrayElementTypeCheck (L_135, (String_t*) &_stringLiteral5773);
		*((String_t**)(String_t**)SZArrayLdElema(L_135, ((int32_t)138))) = (String_t*)(String_t*) &_stringLiteral5773;
		StringU5BU5D_t75* L_136 = L_135;
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, ((int32_t)139));
		ArrayElementTypeCheck (L_136, (String_t*) &_stringLiteral5774);
		*((String_t**)(String_t**)SZArrayLdElema(L_136, ((int32_t)139))) = (String_t*)(String_t*) &_stringLiteral5774;
		StringU5BU5D_t75* L_137 = L_136;
		NullCheck(L_137);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_137, ((int32_t)140));
		ArrayElementTypeCheck (L_137, (String_t*) &_stringLiteral787);
		*((String_t**)(String_t**)SZArrayLdElema(L_137, ((int32_t)140))) = (String_t*)(String_t*) &_stringLiteral787;
		StringU5BU5D_t75* L_138 = L_137;
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, ((int32_t)141));
		ArrayElementTypeCheck (L_138, (String_t*) &_stringLiteral5775);
		*((String_t**)(String_t**)SZArrayLdElema(L_138, ((int32_t)141))) = (String_t*)(String_t*) &_stringLiteral5775;
		StringU5BU5D_t75* L_139 = L_138;
		NullCheck(L_139);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_139, ((int32_t)142));
		ArrayElementTypeCheck (L_139, (String_t*) &_stringLiteral5776);
		*((String_t**)(String_t**)SZArrayLdElema(L_139, ((int32_t)142))) = (String_t*)(String_t*) &_stringLiteral5776;
		StringU5BU5D_t75* L_140 = L_139;
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, ((int32_t)143));
		ArrayElementTypeCheck (L_140, (String_t*) &_stringLiteral5777);
		*((String_t**)(String_t**)SZArrayLdElema(L_140, ((int32_t)143))) = (String_t*)(String_t*) &_stringLiteral5777;
		StringU5BU5D_t75* L_141 = L_140;
		NullCheck(L_141);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_141, ((int32_t)144));
		ArrayElementTypeCheck (L_141, (String_t*) &_stringLiteral5778);
		*((String_t**)(String_t**)SZArrayLdElema(L_141, ((int32_t)144))) = (String_t*)(String_t*) &_stringLiteral5778;
		StringU5BU5D_t75* L_142 = L_141;
		NullCheck(L_142);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_142, ((int32_t)145));
		ArrayElementTypeCheck (L_142, (String_t*) &_stringLiteral5779);
		*((String_t**)(String_t**)SZArrayLdElema(L_142, ((int32_t)145))) = (String_t*)(String_t*) &_stringLiteral5779;
		StringU5BU5D_t75* L_143 = L_142;
		NullCheck(L_143);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_143, ((int32_t)146));
		ArrayElementTypeCheck (L_143, (String_t*) &_stringLiteral5780);
		*((String_t**)(String_t**)SZArrayLdElema(L_143, ((int32_t)146))) = (String_t*)(String_t*) &_stringLiteral5780;
		StringU5BU5D_t75* L_144 = L_143;
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, ((int32_t)147));
		ArrayElementTypeCheck (L_144, (String_t*) &_stringLiteral5781);
		*((String_t**)(String_t**)SZArrayLdElema(L_144, ((int32_t)147))) = (String_t*)(String_t*) &_stringLiteral5781;
		StringU5BU5D_t75* L_145 = L_144;
		NullCheck(L_145);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_145, ((int32_t)148));
		ArrayElementTypeCheck (L_145, (String_t*) &_stringLiteral5782);
		*((String_t**)(String_t**)SZArrayLdElema(L_145, ((int32_t)148))) = (String_t*)(String_t*) &_stringLiteral5782;
		StringU5BU5D_t75* L_146 = L_145;
		NullCheck(L_146);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_146, ((int32_t)149));
		ArrayElementTypeCheck (L_146, (String_t*) &_stringLiteral5783);
		*((String_t**)(String_t**)SZArrayLdElema(L_146, ((int32_t)149))) = (String_t*)(String_t*) &_stringLiteral5783;
		StringU5BU5D_t75* L_147 = L_146;
		NullCheck(L_147);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_147, ((int32_t)150));
		ArrayElementTypeCheck (L_147, (String_t*) &_stringLiteral5784);
		*((String_t**)(String_t**)SZArrayLdElema(L_147, ((int32_t)150))) = (String_t*)(String_t*) &_stringLiteral5784;
		StringU5BU5D_t75* L_148 = L_147;
		NullCheck(L_148);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_148, ((int32_t)151));
		ArrayElementTypeCheck (L_148, (String_t*) &_stringLiteral5785);
		*((String_t**)(String_t**)SZArrayLdElema(L_148, ((int32_t)151))) = (String_t*)(String_t*) &_stringLiteral5785;
		StringU5BU5D_t75* L_149 = L_148;
		NullCheck(L_149);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_149, ((int32_t)152));
		ArrayElementTypeCheck (L_149, (String_t*) &_stringLiteral5786);
		*((String_t**)(String_t**)SZArrayLdElema(L_149, ((int32_t)152))) = (String_t*)(String_t*) &_stringLiteral5786;
		StringU5BU5D_t75* L_150 = L_149;
		NullCheck(L_150);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_150, ((int32_t)153));
		ArrayElementTypeCheck (L_150, (String_t*) &_stringLiteral5787);
		*((String_t**)(String_t**)SZArrayLdElema(L_150, ((int32_t)153))) = (String_t*)(String_t*) &_stringLiteral5787;
		StringU5BU5D_t75* L_151 = L_150;
		NullCheck(L_151);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_151, ((int32_t)154));
		ArrayElementTypeCheck (L_151, (String_t*) &_stringLiteral5788);
		*((String_t**)(String_t**)SZArrayLdElema(L_151, ((int32_t)154))) = (String_t*)(String_t*) &_stringLiteral5788;
		StringU5BU5D_t75* L_152 = L_151;
		NullCheck(L_152);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_152, ((int32_t)155));
		ArrayElementTypeCheck (L_152, (String_t*) &_stringLiteral5789);
		*((String_t**)(String_t**)SZArrayLdElema(L_152, ((int32_t)155))) = (String_t*)(String_t*) &_stringLiteral5789;
		StringU5BU5D_t75* L_153 = L_152;
		NullCheck(L_153);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_153, ((int32_t)156));
		ArrayElementTypeCheck (L_153, (String_t*) &_stringLiteral5790);
		*((String_t**)(String_t**)SZArrayLdElema(L_153, ((int32_t)156))) = (String_t*)(String_t*) &_stringLiteral5790;
		StringU5BU5D_t75* L_154 = L_153;
		NullCheck(L_154);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_154, ((int32_t)157));
		ArrayElementTypeCheck (L_154, (String_t*) &_stringLiteral5791);
		*((String_t**)(String_t**)SZArrayLdElema(L_154, ((int32_t)157))) = (String_t*)(String_t*) &_stringLiteral5791;
		StringU5BU5D_t75* L_155 = L_154;
		NullCheck(L_155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_155, ((int32_t)158));
		ArrayElementTypeCheck (L_155, (String_t*) &_stringLiteral5792);
		*((String_t**)(String_t**)SZArrayLdElema(L_155, ((int32_t)158))) = (String_t*)(String_t*) &_stringLiteral5792;
		StringU5BU5D_t75* L_156 = L_155;
		NullCheck(L_156);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_156, ((int32_t)159));
		ArrayElementTypeCheck (L_156, (String_t*) &_stringLiteral5793);
		*((String_t**)(String_t**)SZArrayLdElema(L_156, ((int32_t)159))) = (String_t*)(String_t*) &_stringLiteral5793;
		StringU5BU5D_t75* L_157 = L_156;
		NullCheck(L_157);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_157, ((int32_t)160));
		ArrayElementTypeCheck (L_157, (String_t*) &_stringLiteral5794);
		*((String_t**)(String_t**)SZArrayLdElema(L_157, ((int32_t)160))) = (String_t*)(String_t*) &_stringLiteral5794;
		StringU5BU5D_t75* L_158 = L_157;
		NullCheck(L_158);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_158, ((int32_t)161));
		ArrayElementTypeCheck (L_158, (String_t*) &_stringLiteral5795);
		*((String_t**)(String_t**)SZArrayLdElema(L_158, ((int32_t)161))) = (String_t*)(String_t*) &_stringLiteral5795;
		StringU5BU5D_t75* L_159 = L_158;
		NullCheck(L_159);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_159, ((int32_t)162));
		ArrayElementTypeCheck (L_159, (String_t*) &_stringLiteral5796);
		*((String_t**)(String_t**)SZArrayLdElema(L_159, ((int32_t)162))) = (String_t*)(String_t*) &_stringLiteral5796;
		StringU5BU5D_t75* L_160 = L_159;
		NullCheck(L_160);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_160, ((int32_t)163));
		ArrayElementTypeCheck (L_160, (String_t*) &_stringLiteral5797);
		*((String_t**)(String_t**)SZArrayLdElema(L_160, ((int32_t)163))) = (String_t*)(String_t*) &_stringLiteral5797;
		StringU5BU5D_t75* L_161 = L_160;
		NullCheck(L_161);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_161, ((int32_t)164));
		ArrayElementTypeCheck (L_161, (String_t*) &_stringLiteral5798);
		*((String_t**)(String_t**)SZArrayLdElema(L_161, ((int32_t)164))) = (String_t*)(String_t*) &_stringLiteral5798;
		StringU5BU5D_t75* L_162 = L_161;
		NullCheck(L_162);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_162, ((int32_t)165));
		ArrayElementTypeCheck (L_162, (String_t*) &_stringLiteral5799);
		*((String_t**)(String_t**)SZArrayLdElema(L_162, ((int32_t)165))) = (String_t*)(String_t*) &_stringLiteral5799;
		StringU5BU5D_t75* L_163 = L_162;
		NullCheck(L_163);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_163, ((int32_t)179));
		ArrayElementTypeCheck (L_163, (String_t*) &_stringLiteral5800);
		*((String_t**)(String_t**)SZArrayLdElema(L_163, ((int32_t)179))) = (String_t*)(String_t*) &_stringLiteral5800;
		StringU5BU5D_t75* L_164 = L_163;
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, ((int32_t)180));
		ArrayElementTypeCheck (L_164, (String_t*) &_stringLiteral5801);
		*((String_t**)(String_t**)SZArrayLdElema(L_164, ((int32_t)180))) = (String_t*)(String_t*) &_stringLiteral5801;
		StringU5BU5D_t75* L_165 = L_164;
		NullCheck(L_165);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_165, ((int32_t)181));
		ArrayElementTypeCheck (L_165, (String_t*) &_stringLiteral5802);
		*((String_t**)(String_t**)SZArrayLdElema(L_165, ((int32_t)181))) = (String_t*)(String_t*) &_stringLiteral5802;
		StringU5BU5D_t75* L_166 = L_165;
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, ((int32_t)182));
		ArrayElementTypeCheck (L_166, (String_t*) &_stringLiteral5803);
		*((String_t**)(String_t**)SZArrayLdElema(L_166, ((int32_t)182))) = (String_t*)(String_t*) &_stringLiteral5803;
		StringU5BU5D_t75* L_167 = L_166;
		NullCheck(L_167);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_167, ((int32_t)183));
		ArrayElementTypeCheck (L_167, (String_t*) &_stringLiteral5804);
		*((String_t**)(String_t**)SZArrayLdElema(L_167, ((int32_t)183))) = (String_t*)(String_t*) &_stringLiteral5804;
		StringU5BU5D_t75* L_168 = L_167;
		NullCheck(L_168);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_168, ((int32_t)184));
		ArrayElementTypeCheck (L_168, (String_t*) &_stringLiteral5805);
		*((String_t**)(String_t**)SZArrayLdElema(L_168, ((int32_t)184))) = (String_t*)(String_t*) &_stringLiteral5805;
		StringU5BU5D_t75* L_169 = L_168;
		NullCheck(L_169);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_169, ((int32_t)185));
		ArrayElementTypeCheck (L_169, (String_t*) &_stringLiteral5806);
		*((String_t**)(String_t**)SZArrayLdElema(L_169, ((int32_t)185))) = (String_t*)(String_t*) &_stringLiteral5806;
		StringU5BU5D_t75* L_170 = L_169;
		NullCheck(L_170);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_170, ((int32_t)186));
		ArrayElementTypeCheck (L_170, (String_t*) &_stringLiteral5807);
		*((String_t**)(String_t**)SZArrayLdElema(L_170, ((int32_t)186))) = (String_t*)(String_t*) &_stringLiteral5807;
		StringU5BU5D_t75* L_171 = L_170;
		NullCheck(L_171);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_171, ((int32_t)194));
		ArrayElementTypeCheck (L_171, (String_t*) &_stringLiteral5808);
		*((String_t**)(String_t**)SZArrayLdElema(L_171, ((int32_t)194))) = (String_t*)(String_t*) &_stringLiteral5808;
		StringU5BU5D_t75* L_172 = L_171;
		NullCheck(L_172);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_172, ((int32_t)195));
		ArrayElementTypeCheck (L_172, (String_t*) &_stringLiteral5809);
		*((String_t**)(String_t**)SZArrayLdElema(L_172, ((int32_t)195))) = (String_t*)(String_t*) &_stringLiteral5809;
		StringU5BU5D_t75* L_173 = L_172;
		NullCheck(L_173);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_173, ((int32_t)198));
		ArrayElementTypeCheck (L_173, (String_t*) &_stringLiteral5810);
		*((String_t**)(String_t**)SZArrayLdElema(L_173, ((int32_t)198))) = (String_t*)(String_t*) &_stringLiteral5810;
		StringU5BU5D_t75* L_174 = L_173;
		NullCheck(L_174);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_174, ((int32_t)208));
		ArrayElementTypeCheck (L_174, (String_t*) &_stringLiteral5811);
		*((String_t**)(String_t**)SZArrayLdElema(L_174, ((int32_t)208))) = (String_t*)(String_t*) &_stringLiteral5811;
		StringU5BU5D_t75* L_175 = L_174;
		NullCheck(L_175);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_175, ((int32_t)209));
		ArrayElementTypeCheck (L_175, (String_t*) &_stringLiteral5812);
		*((String_t**)(String_t**)SZArrayLdElema(L_175, ((int32_t)209))) = (String_t*)(String_t*) &_stringLiteral5812;
		StringU5BU5D_t75* L_176 = L_175;
		NullCheck(L_176);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_176, ((int32_t)210));
		ArrayElementTypeCheck (L_176, (String_t*) &_stringLiteral5813);
		*((String_t**)(String_t**)SZArrayLdElema(L_176, ((int32_t)210))) = (String_t*)(String_t*) &_stringLiteral5813;
		StringU5BU5D_t75* L_177 = L_176;
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, ((int32_t)211));
		ArrayElementTypeCheck (L_177, (String_t*) &_stringLiteral5814);
		*((String_t**)(String_t**)SZArrayLdElema(L_177, ((int32_t)211))) = (String_t*)(String_t*) &_stringLiteral5814;
		StringU5BU5D_t75* L_178 = L_177;
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, ((int32_t)212));
		ArrayElementTypeCheck (L_178, (String_t*) &_stringLiteral5815);
		*((String_t**)(String_t**)SZArrayLdElema(L_178, ((int32_t)212))) = (String_t*)(String_t*) &_stringLiteral5815;
		StringU5BU5D_t75* L_179 = L_178;
		NullCheck(L_179);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_179, ((int32_t)213));
		ArrayElementTypeCheck (L_179, (String_t*) &_stringLiteral5816);
		*((String_t**)(String_t**)SZArrayLdElema(L_179, ((int32_t)213))) = (String_t*)(String_t*) &_stringLiteral5816;
		StringU5BU5D_t75* L_180 = L_179;
		NullCheck(L_180);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_180, ((int32_t)214));
		ArrayElementTypeCheck (L_180, (String_t*) &_stringLiteral5817);
		*((String_t**)(String_t**)SZArrayLdElema(L_180, ((int32_t)214))) = (String_t*)(String_t*) &_stringLiteral5817;
		StringU5BU5D_t75* L_181 = L_180;
		NullCheck(L_181);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_181, ((int32_t)215));
		ArrayElementTypeCheck (L_181, (String_t*) &_stringLiteral5818);
		*((String_t**)(String_t**)SZArrayLdElema(L_181, ((int32_t)215))) = (String_t*)(String_t*) &_stringLiteral5818;
		StringU5BU5D_t75* L_182 = L_181;
		NullCheck(L_182);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_182, ((int32_t)216));
		ArrayElementTypeCheck (L_182, (String_t*) &_stringLiteral5819);
		*((String_t**)(String_t**)SZArrayLdElema(L_182, ((int32_t)216))) = (String_t*)(String_t*) &_stringLiteral5819;
		StringU5BU5D_t75* L_183 = L_182;
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, ((int32_t)217));
		ArrayElementTypeCheck (L_183, (String_t*) &_stringLiteral5820);
		*((String_t**)(String_t**)SZArrayLdElema(L_183, ((int32_t)217))) = (String_t*)(String_t*) &_stringLiteral5820;
		StringU5BU5D_t75* L_184 = L_183;
		NullCheck(L_184);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_184, ((int32_t)218));
		ArrayElementTypeCheck (L_184, (String_t*) &_stringLiteral5821);
		*((String_t**)(String_t**)SZArrayLdElema(L_184, ((int32_t)218))) = (String_t*)(String_t*) &_stringLiteral5821;
		StringU5BU5D_t75* L_185 = L_184;
		NullCheck(L_185);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_185, ((int32_t)219));
		ArrayElementTypeCheck (L_185, (String_t*) &_stringLiteral5822);
		*((String_t**)(String_t**)SZArrayLdElema(L_185, ((int32_t)219))) = (String_t*)(String_t*) &_stringLiteral5822;
		StringU5BU5D_t75* L_186 = L_185;
		NullCheck(L_186);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_186, ((int32_t)220));
		ArrayElementTypeCheck (L_186, (String_t*) &_stringLiteral5823);
		*((String_t**)(String_t**)SZArrayLdElema(L_186, ((int32_t)220))) = (String_t*)(String_t*) &_stringLiteral5823;
		StringU5BU5D_t75* L_187 = L_186;
		NullCheck(L_187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_187, ((int32_t)221));
		ArrayElementTypeCheck (L_187, (String_t*) &_stringLiteral5824);
		*((String_t**)(String_t**)SZArrayLdElema(L_187, ((int32_t)221))) = (String_t*)(String_t*) &_stringLiteral5824;
		StringU5BU5D_t75* L_188 = L_187;
		NullCheck(L_188);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_188, ((int32_t)222));
		ArrayElementTypeCheck (L_188, (String_t*) &_stringLiteral5825);
		*((String_t**)(String_t**)SZArrayLdElema(L_188, ((int32_t)222))) = (String_t*)(String_t*) &_stringLiteral5825;
		StringU5BU5D_t75* L_189 = L_188;
		NullCheck(L_189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_189, ((int32_t)223));
		ArrayElementTypeCheck (L_189, (String_t*) &_stringLiteral5826);
		*((String_t**)(String_t**)SZArrayLdElema(L_189, ((int32_t)223))) = (String_t*)(String_t*) &_stringLiteral5826;
		StringU5BU5D_t75* L_190 = L_189;
		NullCheck(L_190);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_190, ((int32_t)224));
		ArrayElementTypeCheck (L_190, (String_t*) &_stringLiteral5827);
		*((String_t**)(String_t**)SZArrayLdElema(L_190, ((int32_t)224))) = (String_t*)(String_t*) &_stringLiteral5827;
		StringU5BU5D_t75* L_191 = L_190;
		NullCheck(L_191);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_191, ((int32_t)248));
		ArrayElementTypeCheck (L_191, (String_t*) &_stringLiteral5828);
		*((String_t**)(String_t**)SZArrayLdElema(L_191, ((int32_t)248))) = (String_t*)(String_t*) &_stringLiteral5828;
		StringU5BU5D_t75* L_192 = L_191;
		NullCheck(L_192);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_192, ((int32_t)249));
		ArrayElementTypeCheck (L_192, (String_t*) &_stringLiteral5829);
		*((String_t**)(String_t**)SZArrayLdElema(L_192, ((int32_t)249))) = (String_t*)(String_t*) &_stringLiteral5829;
		StringU5BU5D_t75* L_193 = L_192;
		NullCheck(L_193);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_193, ((int32_t)250));
		ArrayElementTypeCheck (L_193, (String_t*) &_stringLiteral5830);
		*((String_t**)(String_t**)SZArrayLdElema(L_193, ((int32_t)250))) = (String_t*)(String_t*) &_stringLiteral5830;
		StringU5BU5D_t75* L_194 = L_193;
		NullCheck(L_194);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_194, ((int32_t)251));
		ArrayElementTypeCheck (L_194, (String_t*) &_stringLiteral5831);
		*((String_t**)(String_t**)SZArrayLdElema(L_194, ((int32_t)251))) = (String_t*)(String_t*) &_stringLiteral5831;
		StringU5BU5D_t75* L_195 = L_194;
		NullCheck(L_195);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_195, ((int32_t)252));
		ArrayElementTypeCheck (L_195, (String_t*) &_stringLiteral5832);
		*((String_t**)(String_t**)SZArrayLdElema(L_195, ((int32_t)252))) = (String_t*)(String_t*) &_stringLiteral5832;
		StringU5BU5D_t75* L_196 = L_195;
		NullCheck(L_196);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_196, ((int32_t)253));
		ArrayElementTypeCheck (L_196, (String_t*) &_stringLiteral5833);
		*((String_t**)(String_t**)SZArrayLdElema(L_196, ((int32_t)253))) = (String_t*)(String_t*) &_stringLiteral5833;
		StringU5BU5D_t75* L_197 = L_196;
		NullCheck(L_197);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_197, ((int32_t)254));
		ArrayElementTypeCheck (L_197, (String_t*) &_stringLiteral5834);
		*((String_t**)(String_t**)SZArrayLdElema(L_197, ((int32_t)254))) = (String_t*)(String_t*) &_stringLiteral5834;
		StringU5BU5D_t75* L_198 = L_197;
		NullCheck(L_198);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_198, ((int32_t)255));
		ArrayElementTypeCheck (L_198, (String_t*) &_stringLiteral5835);
		*((String_t**)(String_t**)SZArrayLdElema(L_198, ((int32_t)255))) = (String_t*)(String_t*) &_stringLiteral5835;
		StringU5BU5D_t75* L_199 = L_198;
		NullCheck(L_199);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_199, ((int32_t)256));
		ArrayElementTypeCheck (L_199, (String_t*) &_stringLiteral5836);
		*((String_t**)(String_t**)SZArrayLdElema(L_199, ((int32_t)256))) = (String_t*)(String_t*) &_stringLiteral5836;
		StringU5BU5D_t75* L_200 = L_199;
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, ((int32_t)257));
		ArrayElementTypeCheck (L_200, (String_t*) &_stringLiteral5837);
		*((String_t**)(String_t**)SZArrayLdElema(L_200, ((int32_t)257))) = (String_t*)(String_t*) &_stringLiteral5837;
		StringU5BU5D_t75* L_201 = L_200;
		NullCheck(L_201);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_201, ((int32_t)258));
		ArrayElementTypeCheck (L_201, (String_t*) &_stringLiteral5838);
		*((String_t**)(String_t**)SZArrayLdElema(L_201, ((int32_t)258))) = (String_t*)(String_t*) &_stringLiteral5838;
		StringU5BU5D_t75* L_202 = L_201;
		NullCheck(L_202);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_202, ((int32_t)259));
		ArrayElementTypeCheck (L_202, (String_t*) &_stringLiteral5839);
		*((String_t**)(String_t**)SZArrayLdElema(L_202, ((int32_t)259))) = (String_t*)(String_t*) &_stringLiteral5839;
		StringU5BU5D_t75* L_203 = L_202;
		NullCheck(L_203);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_203, ((int32_t)260));
		ArrayElementTypeCheck (L_203, (String_t*) &_stringLiteral5840);
		*((String_t**)(String_t**)SZArrayLdElema(L_203, ((int32_t)260))) = (String_t*)(String_t*) &_stringLiteral5840;
		StringU5BU5D_t75* L_204 = L_203;
		NullCheck(L_204);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_204, ((int32_t)261));
		ArrayElementTypeCheck (L_204, (String_t*) &_stringLiteral5841);
		*((String_t**)(String_t**)SZArrayLdElema(L_204, ((int32_t)261))) = (String_t*)(String_t*) &_stringLiteral5841;
		StringU5BU5D_t75* L_205 = L_204;
		NullCheck(L_205);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_205, ((int32_t)262));
		ArrayElementTypeCheck (L_205, (String_t*) &_stringLiteral5842);
		*((String_t**)(String_t**)SZArrayLdElema(L_205, ((int32_t)262))) = (String_t*)(String_t*) &_stringLiteral5842;
		StringU5BU5D_t75* L_206 = L_205;
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, ((int32_t)263));
		ArrayElementTypeCheck (L_206, (String_t*) &_stringLiteral5843);
		*((String_t**)(String_t**)SZArrayLdElema(L_206, ((int32_t)263))) = (String_t*)(String_t*) &_stringLiteral5843;
		StringU5BU5D_t75* L_207 = L_206;
		NullCheck(L_207);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_207, ((int32_t)265));
		ArrayElementTypeCheck (L_207, (String_t*) &_stringLiteral5844);
		*((String_t**)(String_t**)SZArrayLdElema(L_207, ((int32_t)265))) = (String_t*)(String_t*) &_stringLiteral5844;
		StringU5BU5D_t75* L_208 = L_207;
		NullCheck(L_208);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_208, ((int32_t)266));
		ArrayElementTypeCheck (L_208, (String_t*) &_stringLiteral5845);
		*((String_t**)(String_t**)SZArrayLdElema(L_208, ((int32_t)266))) = (String_t*)(String_t*) &_stringLiteral5845;
		StringU5BU5D_t75* L_209 = L_208;
		NullCheck(L_209);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_209, ((int32_t)267));
		ArrayElementTypeCheck (L_209, (String_t*) &_stringLiteral5846);
		*((String_t**)(String_t**)SZArrayLdElema(L_209, ((int32_t)267))) = (String_t*)(String_t*) &_stringLiteral5846;
		StringU5BU5D_t75* L_210 = L_209;
		NullCheck(L_210);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_210, ((int32_t)268));
		ArrayElementTypeCheck (L_210, (String_t*) &_stringLiteral5847);
		*((String_t**)(String_t**)SZArrayLdElema(L_210, ((int32_t)268))) = (String_t*)(String_t*) &_stringLiteral5847;
		StringU5BU5D_t75* L_211 = L_210;
		NullCheck(L_211);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_211, ((int32_t)269));
		ArrayElementTypeCheck (L_211, (String_t*) &_stringLiteral5848);
		*((String_t**)(String_t**)SZArrayLdElema(L_211, ((int32_t)269))) = (String_t*)(String_t*) &_stringLiteral5848;
		StringU5BU5D_t75* L_212 = L_211;
		NullCheck(L_212);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_212, ((int32_t)270));
		ArrayElementTypeCheck (L_212, (String_t*) &_stringLiteral5849);
		*((String_t**)(String_t**)SZArrayLdElema(L_212, ((int32_t)270))) = (String_t*)(String_t*) &_stringLiteral5849;
		StringU5BU5D_t75* L_213 = L_212;
		NullCheck(L_213);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_213, ((int32_t)271));
		ArrayElementTypeCheck (L_213, (String_t*) &_stringLiteral5850);
		*((String_t**)(String_t**)SZArrayLdElema(L_213, ((int32_t)271))) = (String_t*)(String_t*) &_stringLiteral5850;
		StringU5BU5D_t75* L_214 = L_213;
		NullCheck(L_214);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_214, ((int32_t)273));
		ArrayElementTypeCheck (L_214, (String_t*) &_stringLiteral5851);
		*((String_t**)(String_t**)SZArrayLdElema(L_214, ((int32_t)273))) = (String_t*)(String_t*) &_stringLiteral5851;
		StringU5BU5D_t75* L_215 = L_214;
		NullCheck(L_215);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_215, ((int32_t)274));
		ArrayElementTypeCheck (L_215, (String_t*) &_stringLiteral5852);
		*((String_t**)(String_t**)SZArrayLdElema(L_215, ((int32_t)274))) = (String_t*)(String_t*) &_stringLiteral5852;
		StringU5BU5D_t75* L_216 = L_215;
		NullCheck(L_216);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_216, ((int32_t)275));
		ArrayElementTypeCheck (L_216, (String_t*) &_stringLiteral5853);
		*((String_t**)(String_t**)SZArrayLdElema(L_216, ((int32_t)275))) = (String_t*)(String_t*) &_stringLiteral5853;
		StringU5BU5D_t75* L_217 = L_216;
		NullCheck(L_217);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_217, ((int32_t)276));
		ArrayElementTypeCheck (L_217, (String_t*) &_stringLiteral5854);
		*((String_t**)(String_t**)SZArrayLdElema(L_217, ((int32_t)276))) = (String_t*)(String_t*) &_stringLiteral5854;
		StringU5BU5D_t75* L_218 = L_217;
		NullCheck(L_218);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_218, ((int32_t)277));
		ArrayElementTypeCheck (L_218, (String_t*) &_stringLiteral5855);
		*((String_t**)(String_t**)SZArrayLdElema(L_218, ((int32_t)277))) = (String_t*)(String_t*) &_stringLiteral5855;
		StringU5BU5D_t75* L_219 = L_218;
		NullCheck(L_219);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_219, ((int32_t)278));
		ArrayElementTypeCheck (L_219, (String_t*) &_stringLiteral5856);
		*((String_t**)(String_t**)SZArrayLdElema(L_219, ((int32_t)278))) = (String_t*)(String_t*) &_stringLiteral5856;
		StringU5BU5D_t75* L_220 = L_219;
		NullCheck(L_220);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_220, ((int32_t)279));
		ArrayElementTypeCheck (L_220, (String_t*) &_stringLiteral5857);
		*((String_t**)(String_t**)SZArrayLdElema(L_220, ((int32_t)279))) = (String_t*)(String_t*) &_stringLiteral5857;
		StringU5BU5D_t75* L_221 = L_220;
		NullCheck(L_221);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_221, ((int32_t)280));
		ArrayElementTypeCheck (L_221, (String_t*) &_stringLiteral5858);
		*((String_t**)(String_t**)SZArrayLdElema(L_221, ((int32_t)280))) = (String_t*)(String_t*) &_stringLiteral5858;
		StringU5BU5D_t75* L_222 = L_221;
		NullCheck(L_222);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_222, ((int32_t)282));
		ArrayElementTypeCheck (L_222, (String_t*) &_stringLiteral5859);
		*((String_t**)(String_t**)SZArrayLdElema(L_222, ((int32_t)282))) = (String_t*)(String_t*) &_stringLiteral5859;
		StringU5BU5D_t75* L_223 = L_222;
		NullCheck(L_223);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_223, ((int32_t)284));
		ArrayElementTypeCheck (L_223, (String_t*) &_stringLiteral3648);
		*((String_t**)(String_t**)SZArrayLdElema(L_223, ((int32_t)284))) = (String_t*)(String_t*) &_stringLiteral3648;
		StringU5BU5D_t75* L_224 = L_223;
		NullCheck(L_224);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_224, ((int32_t)285));
		ArrayElementTypeCheck (L_224, (String_t*) &_stringLiteral5860);
		*((String_t**)(String_t**)SZArrayLdElema(L_224, ((int32_t)285))) = (String_t*)(String_t*) &_stringLiteral5860;
		StringU5BU5D_t75* L_225 = L_224;
		NullCheck(L_225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_225, ((int32_t)286));
		ArrayElementTypeCheck (L_225, (String_t*) &_stringLiteral5861);
		*((String_t**)(String_t**)SZArrayLdElema(L_225, ((int32_t)286))) = (String_t*)(String_t*) &_stringLiteral5861;
		((OpCodeNames_t5077_StaticFields*)OpCodeNames_t5077_il2cpp_TypeInfo_var->static_fields)->___names_0 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C" void OpCode__ctor_m22442 (OpCode_t4584 * __this, int32_t ___p, int32_t ___q, const MethodInfo* method)
{
	{
		int32_t L_0 = ___p;
		__this->___op1_0 = (((uint8_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)255)))));
		int32_t L_1 = ___p;
		__this->___op2_1 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1>>(int32_t)8))&(int32_t)((int32_t)255)))));
		int32_t L_2 = ___p;
		__this->___push_2 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		int32_t L_3 = ___p;
		__this->___pop_3 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		int32_t L_4 = ___q;
		__this->___size_4 = (((uint8_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)255)))));
		int32_t L_5 = ___q;
		__this->___type_5 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_5>>(int32_t)8))&(int32_t)((int32_t)255)))));
		int32_t L_6 = ___q;
		__this->___args_6 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)((int32_t)16)))&(int32_t)((int32_t)255)))));
		int32_t L_7 = ___q;
		__this->___flow_7 = (((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))));
		return;
	}
}
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C" int32_t OpCode_GetHashCode_m22443 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = OpCode_get_Name_m22446(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern TypeInfo* OpCode_t4584_il2cpp_TypeInfo_var;
extern "C" bool OpCode_Equals_m22444 (OpCode_t4584 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OpCode_t4584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9109);
		s_Il2CppMethodIntialized = true;
	}
	OpCode_t4584  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (((Object_t *)IsInst(L_1, OpCode_t4584_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		Object_t * L_2 = ___obj;
		V_0 = ((*(OpCode_t4584 *)((OpCode_t4584 *)UnBox (L_2, OpCode_t4584_il2cpp_TypeInfo_var))));
		uint8_t L_3 = ((&V_0)->___op1_0);
		uint8_t L_4 = (__this->___op1_0);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0034;
		}
	}
	{
		uint8_t L_5 = ((&V_0)->___op2_1);
		uint8_t L_6 = (__this->___op2_1);
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B6_0 = 0;
	}

IL_0035:
	{
		return G_B6_0;
	}
}
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C" String_t* OpCode_ToString_m22445 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = OpCode_get_Name_m22446(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Reflection.Emit.OpCode::get_Name()
extern TypeInfo* OpCodeNames_t5077_il2cpp_TypeInfo_var;
extern "C" String_t* OpCode_get_Name_m22446 (OpCode_t4584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OpCodeNames_t5077_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9108);
		s_Il2CppMethodIntialized = true;
	}
	{
		uint8_t L_0 = (__this->___op1_0);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(OpCodeNames_t5077_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = ((OpCodeNames_t5077_StaticFields*)OpCodeNames_t5077_il2cpp_TypeInfo_var->static_fields)->___names_0;
		uint8_t L_2 = (__this->___op2_1);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		uint8_t L_3 = L_2;
		return (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(OpCodeNames_t5077_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_4 = ((OpCodeNames_t5077_StaticFields*)OpCodeNames_t5077_il2cpp_TypeInfo_var->static_fields)->___names_0;
		uint8_t L_5 = (__this->___op2_1);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, ((int32_t)((int32_t)((int32_t)256)+(int32_t)L_5)));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)256)+(int32_t)L_5));
		return (*(String_t**)(String_t**)SZArrayLdElema(L_4, L_6));
	}
}
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C" int32_t OpCode_get_Size_m22447 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___size_4);
		return L_0;
	}
}
// System.Reflection.Emit.OperandType System.Reflection.Emit.OpCode::get_OperandType()
extern "C" int32_t OpCode_get_OperandType_m22448 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___args_6);
		return (int32_t)(L_0);
	}
}
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C" int32_t OpCode_get_StackBehaviourPop_m22449 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___pop_3);
		return (int32_t)(L_0);
	}
}
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C" int32_t OpCode_get_StackBehaviourPush_m22450 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___push_2);
		return (int32_t)(L_0);
	}
}
// System.Int16 System.Reflection.Emit.OpCode::get_Value()
extern "C" int16_t OpCode_get_Value_m22451 (OpCode_t4584 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___size_4);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		uint8_t L_1 = (__this->___op2_1);
		return L_1;
	}

IL_0010:
	{
		uint8_t L_2 = (__this->___op1_0);
		uint8_t L_3 = (__this->___op2_1);
		return (((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))|(int32_t)L_3))));
	}
}
// System.Boolean System.Reflection.Emit.OpCode::op_Equality(System.Reflection.Emit.OpCode,System.Reflection.Emit.OpCode)
extern "C" bool OpCode_op_Equality_m22452 (Object_t * __this /* static, unused */, OpCode_t4584  ___a, OpCode_t4584  ___b, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint8_t L_0 = ((&___a)->___op1_0);
		uint8_t L_1 = ((&___b)->___op1_0);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0022;
		}
	}
	{
		uint8_t L_2 = ((&___a)->___op2_1);
		uint8_t L_3 = ((&___b)->___op2_1);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		return G_B3_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.Emit.OpCodes::.cctor()
extern TypeInfo* OpCodes_t4583_il2cpp_TypeInfo_var;
extern "C" void OpCodes__cctor_m22453 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OpCodes_t4583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7896);
		s_Il2CppMethodIntialized = true;
	}
	{
		OpCode_t4584  L_0 = {0};
		OpCode__ctor_m22442(&L_0, ((int32_t)1179903), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Nop_0 = L_0;
		OpCode_t4584  L_1 = {0};
		OpCode__ctor_m22442(&L_1, ((int32_t)1180159), ((int32_t)17106177), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Break_1 = L_1;
		OpCode_t4584  L_2 = {0};
		OpCode__ctor_m22442(&L_2, ((int32_t)1245951), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_0_2 = L_2;
		OpCode_t4584  L_3 = {0};
		OpCode__ctor_m22442(&L_3, ((int32_t)1246207), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_1_3 = L_3;
		OpCode_t4584  L_4 = {0};
		OpCode__ctor_m22442(&L_4, ((int32_t)1246463), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_2_4 = L_4;
		OpCode_t4584  L_5 = {0};
		OpCode__ctor_m22442(&L_5, ((int32_t)1246719), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_3_5 = L_5;
		OpCode_t4584  L_6 = {0};
		OpCode__ctor_m22442(&L_6, ((int32_t)1246975), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_0_6 = L_6;
		OpCode_t4584  L_7 = {0};
		OpCode__ctor_m22442(&L_7, ((int32_t)1247231), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_1_7 = L_7;
		OpCode_t4584  L_8 = {0};
		OpCode__ctor_m22442(&L_8, ((int32_t)1247487), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_2_8 = L_8;
		OpCode_t4584  L_9 = {0};
		OpCode__ctor_m22442(&L_9, ((int32_t)1247743), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_3_9 = L_9;
		OpCode_t4584  L_10 = {0};
		OpCode__ctor_m22442(&L_10, ((int32_t)17959679), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_0_10 = L_10;
		OpCode_t4584  L_11 = {0};
		OpCode__ctor_m22442(&L_11, ((int32_t)17959935), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_1_11 = L_11;
		OpCode_t4584  L_12 = {0};
		OpCode__ctor_m22442(&L_12, ((int32_t)17960191), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_2_12 = L_12;
		OpCode_t4584  L_13 = {0};
		OpCode__ctor_m22442(&L_13, ((int32_t)17960447), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_3_13 = L_13;
		OpCode_t4584  L_14 = {0};
		OpCode__ctor_m22442(&L_14, ((int32_t)1249023), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_S_14 = L_14;
		OpCode_t4584  L_15 = {0};
		OpCode__ctor_m22442(&L_15, ((int32_t)1380351), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarga_S_15 = L_15;
		OpCode_t4584  L_16 = {0};
		OpCode__ctor_m22442(&L_16, ((int32_t)17961215), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Starg_S_16 = L_16;
		OpCode_t4584  L_17 = {0};
		OpCode__ctor_m22442(&L_17, ((int32_t)1249791), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_S_17 = L_17;
		OpCode_t4584  L_18 = {0};
		OpCode__ctor_m22442(&L_18, ((int32_t)1381119), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloca_S_18 = L_18;
		OpCode_t4584  L_19 = {0};
		OpCode__ctor_m22442(&L_19, ((int32_t)17961983), ((int32_t)85065985), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_S_19 = L_19;
		OpCode_t4584  L_20 = {0};
		OpCode__ctor_m22442(&L_20, ((int32_t)1643775), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldnull_20 = L_20;
		OpCode_t4584  L_21 = {0};
		OpCode__ctor_m22442(&L_21, ((int32_t)1381887), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_M1_21 = L_21;
		OpCode_t4584  L_22 = {0};
		OpCode__ctor_m22442(&L_22, ((int32_t)1382143), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_0_22 = L_22;
		OpCode_t4584  L_23 = {0};
		OpCode__ctor_m22442(&L_23, ((int32_t)1382399), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_1_23 = L_23;
		OpCode_t4584  L_24 = {0};
		OpCode__ctor_m22442(&L_24, ((int32_t)1382655), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_2_24 = L_24;
		OpCode_t4584  L_25 = {0};
		OpCode__ctor_m22442(&L_25, ((int32_t)1382911), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_3_25 = L_25;
		OpCode_t4584  L_26 = {0};
		OpCode__ctor_m22442(&L_26, ((int32_t)1383167), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_4_26 = L_26;
		OpCode_t4584  L_27 = {0};
		OpCode__ctor_m22442(&L_27, ((int32_t)1383423), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_5_27 = L_27;
		OpCode_t4584  L_28 = {0};
		OpCode__ctor_m22442(&L_28, ((int32_t)1383679), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_6_28 = L_28;
		OpCode_t4584  L_29 = {0};
		OpCode__ctor_m22442(&L_29, ((int32_t)1383935), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_7_29 = L_29;
		OpCode_t4584  L_30 = {0};
		OpCode__ctor_m22442(&L_30, ((int32_t)1384191), ((int32_t)84214017), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_8_30 = L_30;
		OpCode_t4584  L_31 = {0};
		OpCode__ctor_m22442(&L_31, ((int32_t)1384447), ((int32_t)84934913), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_S_31 = L_31;
		OpCode_t4584  L_32 = {0};
		OpCode__ctor_m22442(&L_32, ((int32_t)1384703), ((int32_t)84018433), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I4_32 = L_32;
		OpCode_t4584  L_33 = {0};
		OpCode__ctor_m22442(&L_33, ((int32_t)1450495), ((int32_t)84083969), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_I8_33 = L_33;
		OpCode_t4584  L_34 = {0};
		OpCode__ctor_m22442(&L_34, ((int32_t)1516287), ((int32_t)85001473), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_R4_34 = L_34;
		OpCode_t4584  L_35 = {0};
		OpCode__ctor_m22442(&L_35, ((int32_t)1582079), ((int32_t)84346113), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldc_R8_35 = L_35;
		OpCode_t4584  L_36 = {0};
		OpCode__ctor_m22442(&L_36, ((int32_t)18097663), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Dup_36 = L_36;
		OpCode_t4584  L_37 = {0};
		OpCode__ctor_m22442(&L_37, ((int32_t)17966847), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Pop_37 = L_37;
		OpCode_t4584  L_38 = {0};
		OpCode__ctor_m22442(&L_38, ((int32_t)1189887), ((int32_t)33817857), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Jmp_38 = L_38;
		OpCode_t4584  L_39 = {0};
		OpCode__ctor_m22442(&L_39, ((int32_t)437987583), ((int32_t)33817857), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Call_39 = L_39;
		OpCode_t4584  L_40 = {0};
		OpCode__ctor_m22442(&L_40, ((int32_t)437987839), ((int32_t)34145537), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Calli_40 = L_40;
		OpCode_t4584  L_41 = {0};
		OpCode__ctor_m22442(&L_41, ((int32_t)437398271), ((int32_t)117769473), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ret_41 = L_41;
		OpCode_t4584  L_42 = {0};
		OpCode__ctor_m22442(&L_42, ((int32_t)1190911), ((int32_t)983297), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Br_S_42 = L_42;
		OpCode_t4584  L_43 = {0};
		OpCode__ctor_m22442(&L_43, ((int32_t)51522815), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Brfalse_S_43 = L_43;
		OpCode_t4584  L_44 = {0};
		OpCode__ctor_m22442(&L_44, ((int32_t)51523071), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Brtrue_S_44 = L_44;
		OpCode_t4584  L_45 = {0};
		OpCode__ctor_m22442(&L_45, ((int32_t)34746111), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Beq_S_45 = L_45;
		OpCode_t4584  L_46 = {0};
		OpCode__ctor_m22442(&L_46, ((int32_t)34746367), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bge_S_46 = L_46;
		OpCode_t4584  L_47 = {0};
		OpCode__ctor_m22442(&L_47, ((int32_t)34746623), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bgt_S_47 = L_47;
		OpCode_t4584  L_48 = {0};
		OpCode__ctor_m22442(&L_48, ((int32_t)34746879), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ble_S_48 = L_48;
		OpCode_t4584  L_49 = {0};
		OpCode__ctor_m22442(&L_49, ((int32_t)34747135), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Blt_S_49 = L_49;
		OpCode_t4584  L_50 = {0};
		OpCode__ctor_m22442(&L_50, ((int32_t)34747391), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bne_Un_S_50 = L_50;
		OpCode_t4584  L_51 = {0};
		OpCode__ctor_m22442(&L_51, ((int32_t)34747647), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bge_Un_S_51 = L_51;
		OpCode_t4584  L_52 = {0};
		OpCode__ctor_m22442(&L_52, ((int32_t)34747903), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bgt_Un_S_52 = L_52;
		OpCode_t4584  L_53 = {0};
		OpCode__ctor_m22442(&L_53, ((int32_t)34748159), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ble_Un_S_53 = L_53;
		OpCode_t4584  L_54 = {0};
		OpCode__ctor_m22442(&L_54, ((int32_t)34748415), ((int32_t)51314945), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Blt_Un_S_54 = L_54;
		OpCode_t4584  L_55 = {0};
		OpCode__ctor_m22442(&L_55, ((int32_t)1194239), ((int32_t)1281), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Br_55 = L_55;
		OpCode_t4584  L_56 = {0};
		OpCode__ctor_m22442(&L_56, ((int32_t)51526143), ((int32_t)50332929), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Brfalse_56 = L_56;
		OpCode_t4584  L_57 = {0};
		OpCode__ctor_m22442(&L_57, ((int32_t)51526399), ((int32_t)50332929), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Brtrue_57 = L_57;
		OpCode_t4584  L_58 = {0};
		OpCode__ctor_m22442(&L_58, ((int32_t)34749439), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Beq_58 = L_58;
		OpCode_t4584  L_59 = {0};
		OpCode__ctor_m22442(&L_59, ((int32_t)34749695), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bge_59 = L_59;
		OpCode_t4584  L_60 = {0};
		OpCode__ctor_m22442(&L_60, ((int32_t)34749951), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bgt_60 = L_60;
		OpCode_t4584  L_61 = {0};
		OpCode__ctor_m22442(&L_61, ((int32_t)34750207), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ble_61 = L_61;
		OpCode_t4584  L_62 = {0};
		OpCode__ctor_m22442(&L_62, ((int32_t)34750463), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Blt_62 = L_62;
		OpCode_t4584  L_63 = {0};
		OpCode__ctor_m22442(&L_63, ((int32_t)34750719), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bne_Un_63 = L_63;
		OpCode_t4584  L_64 = {0};
		OpCode__ctor_m22442(&L_64, ((int32_t)34750975), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bge_Un_64 = L_64;
		OpCode_t4584  L_65 = {0};
		OpCode__ctor_m22442(&L_65, ((int32_t)34751231), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Bgt_Un_65 = L_65;
		OpCode_t4584  L_66 = {0};
		OpCode__ctor_m22442(&L_66, ((int32_t)34751487), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ble_Un_66 = L_66;
		OpCode_t4584  L_67 = {0};
		OpCode__ctor_m22442(&L_67, ((int32_t)34751743), ((int32_t)50331905), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Blt_Un_67 = L_67;
		OpCode_t4584  L_68 = {0};
		OpCode__ctor_m22442(&L_68, ((int32_t)51529215), ((int32_t)51053825), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Switch_68 = L_68;
		OpCode_t4584  L_69 = {0};
		OpCode__ctor_m22442(&L_69, ((int32_t)51726079), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_I1_69 = L_69;
		OpCode_t4584  L_70 = {0};
		OpCode__ctor_m22442(&L_70, ((int32_t)51726335), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_U1_70 = L_70;
		OpCode_t4584  L_71 = {0};
		OpCode__ctor_m22442(&L_71, ((int32_t)51726591), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_I2_71 = L_71;
		OpCode_t4584  L_72 = {0};
		OpCode__ctor_m22442(&L_72, ((int32_t)51726847), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_U2_72 = L_72;
		OpCode_t4584  L_73 = {0};
		OpCode__ctor_m22442(&L_73, ((int32_t)51727103), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_I4_73 = L_73;
		OpCode_t4584  L_74 = {0};
		OpCode__ctor_m22442(&L_74, ((int32_t)51727359), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_U4_74 = L_74;
		OpCode_t4584  L_75 = {0};
		OpCode__ctor_m22442(&L_75, ((int32_t)51793151), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_I8_75 = L_75;
		OpCode_t4584  L_76 = {0};
		OpCode__ctor_m22442(&L_76, ((int32_t)51727871), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_I_76 = L_76;
		OpCode_t4584  L_77 = {0};
		OpCode__ctor_m22442(&L_77, ((int32_t)51859199), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_R4_77 = L_77;
		OpCode_t4584  L_78 = {0};
		OpCode__ctor_m22442(&L_78, ((int32_t)51924991), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_R8_78 = L_78;
		OpCode_t4584  L_79 = {0};
		OpCode__ctor_m22442(&L_79, ((int32_t)51990783), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldind_Ref_79 = L_79;
		OpCode_t4584  L_80 = {0};
		OpCode__ctor_m22442(&L_80, ((int32_t)85086719), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_Ref_80 = L_80;
		OpCode_t4584  L_81 = {0};
		OpCode__ctor_m22442(&L_81, ((int32_t)85086975), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_I1_81 = L_81;
		OpCode_t4584  L_82 = {0};
		OpCode__ctor_m22442(&L_82, ((int32_t)85087231), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_I2_82 = L_82;
		OpCode_t4584  L_83 = {0};
		OpCode__ctor_m22442(&L_83, ((int32_t)85087487), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_I4_83 = L_83;
		OpCode_t4584  L_84 = {0};
		OpCode__ctor_m22442(&L_84, ((int32_t)101864959), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_I8_84 = L_84;
		OpCode_t4584  L_85 = {0};
		OpCode__ctor_m22442(&L_85, ((int32_t)135419647), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_R4_85 = L_85;
		OpCode_t4584  L_86 = {0};
		OpCode__ctor_m22442(&L_86, ((int32_t)152197119), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_R8_86 = L_86;
		OpCode_t4584  L_87 = {0};
		OpCode__ctor_m22442(&L_87, ((int32_t)34822399), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Add_87 = L_87;
		OpCode_t4584  L_88 = {0};
		OpCode__ctor_m22442(&L_88, ((int32_t)34822655), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Sub_88 = L_88;
		OpCode_t4584  L_89 = {0};
		OpCode__ctor_m22442(&L_89, ((int32_t)34822911), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Mul_89 = L_89;
		OpCode_t4584  L_90 = {0};
		OpCode__ctor_m22442(&L_90, ((int32_t)34823167), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Div_90 = L_90;
		OpCode_t4584  L_91 = {0};
		OpCode__ctor_m22442(&L_91, ((int32_t)34823423), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Div_Un_91 = L_91;
		OpCode_t4584  L_92 = {0};
		OpCode__ctor_m22442(&L_92, ((int32_t)34823679), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Rem_92 = L_92;
		OpCode_t4584  L_93 = {0};
		OpCode__ctor_m22442(&L_93, ((int32_t)34823935), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Rem_Un_93 = L_93;
		OpCode_t4584  L_94 = {0};
		OpCode__ctor_m22442(&L_94, ((int32_t)34824191), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___And_94 = L_94;
		OpCode_t4584  L_95 = {0};
		OpCode__ctor_m22442(&L_95, ((int32_t)34824447), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Or_95 = L_95;
		OpCode_t4584  L_96 = {0};
		OpCode__ctor_m22442(&L_96, ((int32_t)34824703), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Xor_96 = L_96;
		OpCode_t4584  L_97 = {0};
		OpCode__ctor_m22442(&L_97, ((int32_t)34824959), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Shl_97 = L_97;
		OpCode_t4584  L_98 = {0};
		OpCode__ctor_m22442(&L_98, ((int32_t)34825215), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Shr_98 = L_98;
		OpCode_t4584  L_99 = {0};
		OpCode__ctor_m22442(&L_99, ((int32_t)34825471), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Shr_Un_99 = L_99;
		OpCode_t4584  L_100 = {0};
		OpCode__ctor_m22442(&L_100, ((int32_t)18048511), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Neg_100 = L_100;
		OpCode_t4584  L_101 = {0};
		OpCode__ctor_m22442(&L_101, ((int32_t)18048767), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Not_101 = L_101;
		OpCode_t4584  L_102 = {0};
		OpCode__ctor_m22442(&L_102, ((int32_t)18180095), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_I1_102 = L_102;
		OpCode_t4584  L_103 = {0};
		OpCode__ctor_m22442(&L_103, ((int32_t)18180351), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_I2_103 = L_103;
		OpCode_t4584  L_104 = {0};
		OpCode__ctor_m22442(&L_104, ((int32_t)18180607), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_I4_104 = L_104;
		OpCode_t4584  L_105 = {0};
		OpCode__ctor_m22442(&L_105, ((int32_t)18246399), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_I8_105 = L_105;
		OpCode_t4584  L_106 = {0};
		OpCode__ctor_m22442(&L_106, ((int32_t)18312191), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_R4_106 = L_106;
		OpCode_t4584  L_107 = {0};
		OpCode__ctor_m22442(&L_107, ((int32_t)18377983), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_R8_107 = L_107;
		OpCode_t4584  L_108 = {0};
		OpCode__ctor_m22442(&L_108, ((int32_t)18181631), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_U4_108 = L_108;
		OpCode_t4584  L_109 = {0};
		OpCode__ctor_m22442(&L_109, ((int32_t)18247423), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_U8_109 = L_109;
		OpCode_t4584  L_110 = {0};
		OpCode__ctor_m22442(&L_110, ((int32_t)438005759), ((int32_t)33817345), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Callvirt_110 = L_110;
		OpCode_t4584  L_111 = {0};
		OpCode__ctor_m22442(&L_111, ((int32_t)85094655), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Cpobj_111 = L_111;
		OpCode_t4584  L_112 = {0};
		OpCode__ctor_m22442(&L_112, ((int32_t)51606015), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldobj_112 = L_112;
		OpCode_t4584  L_113 = {0};
		OpCode__ctor_m22442(&L_113, ((int32_t)1667839), ((int32_t)84542209), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldstr_113 = L_113;
		OpCode_t4584  L_114 = {0};
		OpCode__ctor_m22442(&L_114, ((int32_t)437875711), ((int32_t)33817345), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Newobj_114 = L_114;
		OpCode_t4584  L_115 = {0};
		OpCode__ctor_m22442(&L_115, ((int32_t)169440511), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Castclass_115 = L_115;
		OpCode_t4584  L_116 = {0};
		OpCode__ctor_m22442(&L_116, ((int32_t)169178623), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Isinst_116 = L_116;
		OpCode_t4584  L_117 = {0};
		OpCode__ctor_m22442(&L_117, ((int32_t)18380543), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_R_Un_117 = L_117;
		OpCode_t4584  L_118 = {0};
		OpCode__ctor_m22442(&L_118, ((int32_t)169179647), ((int32_t)84739329), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Unbox_118 = L_118;
		OpCode_t4584  L_119 = {0};
		OpCode__ctor_m22442(&L_119, ((int32_t)168983295), ((int32_t)134546177), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Throw_119 = L_119;
		OpCode_t4584  L_120 = {0};
		OpCode__ctor_m22442(&L_120, ((int32_t)169049087), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldfld_120 = L_120;
		OpCode_t4584  L_121 = {0};
		OpCode__ctor_m22442(&L_121, ((int32_t)169180415), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldflda_121 = L_121;
		OpCode_t4584  L_122 = {0};
		OpCode__ctor_m22442(&L_122, ((int32_t)185761279), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stfld_122 = L_122;
		OpCode_t4584  L_123 = {0};
		OpCode__ctor_m22442(&L_123, ((int32_t)1277695), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldsfld_123 = L_123;
		OpCode_t4584  L_124 = {0};
		OpCode__ctor_m22442(&L_124, ((int32_t)1409023), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldsflda_124 = L_124;
		OpCode_t4584  L_125 = {0};
		OpCode__ctor_m22442(&L_125, ((int32_t)17989887), ((int32_t)83952385), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stsfld_125 = L_125;
		OpCode_t4584  L_126 = {0};
		OpCode__ctor_m22442(&L_126, ((int32_t)68321791), ((int32_t)84739329), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stobj_126 = L_126;
		OpCode_t4584  L_127 = {0};
		OpCode__ctor_m22442(&L_127, ((int32_t)18187007), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I1_Un_127 = L_127;
		OpCode_t4584  L_128 = {0};
		OpCode__ctor_m22442(&L_128, ((int32_t)18187263), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I2_Un_128 = L_128;
		OpCode_t4584  L_129 = {0};
		OpCode__ctor_m22442(&L_129, ((int32_t)18187519), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I4_Un_129 = L_129;
		OpCode_t4584  L_130 = {0};
		OpCode__ctor_m22442(&L_130, ((int32_t)18253311), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I8_Un_130 = L_130;
		OpCode_t4584  L_131 = {0};
		OpCode__ctor_m22442(&L_131, ((int32_t)18188031), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U1_Un_131 = L_131;
		OpCode_t4584  L_132 = {0};
		OpCode__ctor_m22442(&L_132, ((int32_t)18188287), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U2_Un_132 = L_132;
		OpCode_t4584  L_133 = {0};
		OpCode__ctor_m22442(&L_133, ((int32_t)18188543), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U4_Un_133 = L_133;
		OpCode_t4584  L_134 = {0};
		OpCode__ctor_m22442(&L_134, ((int32_t)18254335), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U8_Un_134 = L_134;
		OpCode_t4584  L_135 = {0};
		OpCode__ctor_m22442(&L_135, ((int32_t)18189055), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I_Un_135 = L_135;
		OpCode_t4584  L_136 = {0};
		OpCode__ctor_m22442(&L_136, ((int32_t)18189311), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U_Un_136 = L_136;
		OpCode_t4584  L_137 = {0};
		OpCode__ctor_m22442(&L_137, ((int32_t)18451711), ((int32_t)84739329), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Box_137 = L_137;
		OpCode_t4584  L_138 = {0};
		OpCode__ctor_m22442(&L_138, ((int32_t)52006399), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Newarr_138 = L_138;
		OpCode_t4584  L_139 = {0};
		OpCode__ctor_m22442(&L_139, ((int32_t)169185023), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldlen_139 = L_139;
		OpCode_t4584  L_140 = {0};
		OpCode__ctor_m22442(&L_140, ((int32_t)202739711), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelema_140 = L_140;
		OpCode_t4584  L_141 = {0};
		OpCode__ctor_m22442(&L_141, ((int32_t)202739967), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_I1_141 = L_141;
		OpCode_t4584  L_142 = {0};
		OpCode__ctor_m22442(&L_142, ((int32_t)202740223), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_U1_142 = L_142;
		OpCode_t4584  L_143 = {0};
		OpCode__ctor_m22442(&L_143, ((int32_t)202740479), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_I2_143 = L_143;
		OpCode_t4584  L_144 = {0};
		OpCode__ctor_m22442(&L_144, ((int32_t)202740735), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_U2_144 = L_144;
		OpCode_t4584  L_145 = {0};
		OpCode__ctor_m22442(&L_145, ((int32_t)202740991), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_I4_145 = L_145;
		OpCode_t4584  L_146 = {0};
		OpCode__ctor_m22442(&L_146, ((int32_t)202741247), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_U4_146 = L_146;
		OpCode_t4584  L_147 = {0};
		OpCode__ctor_m22442(&L_147, ((int32_t)202807039), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_I8_147 = L_147;
		OpCode_t4584  L_148 = {0};
		OpCode__ctor_m22442(&L_148, ((int32_t)202741759), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_I_148 = L_148;
		OpCode_t4584  L_149 = {0};
		OpCode__ctor_m22442(&L_149, ((int32_t)202873087), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_R4_149 = L_149;
		OpCode_t4584  L_150 = {0};
		OpCode__ctor_m22442(&L_150, ((int32_t)202938879), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_R8_150 = L_150;
		OpCode_t4584  L_151 = {0};
		OpCode__ctor_m22442(&L_151, ((int32_t)203004671), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_Ref_151 = L_151;
		OpCode_t4584  L_152 = {0};
		OpCode__ctor_m22442(&L_152, ((int32_t)219323391), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_I_152 = L_152;
		OpCode_t4584  L_153 = {0};
		OpCode__ctor_m22442(&L_153, ((int32_t)219323647), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_I1_153 = L_153;
		OpCode_t4584  L_154 = {0};
		OpCode__ctor_m22442(&L_154, ((int32_t)219323903), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_I2_154 = L_154;
		OpCode_t4584  L_155 = {0};
		OpCode__ctor_m22442(&L_155, ((int32_t)219324159), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_I4_155 = L_155;
		OpCode_t4584  L_156 = {0};
		OpCode__ctor_m22442(&L_156, ((int32_t)236101631), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_I8_156 = L_156;
		OpCode_t4584  L_157 = {0};
		OpCode__ctor_m22442(&L_157, ((int32_t)252879103), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_R4_157 = L_157;
		OpCode_t4584  L_158 = {0};
		OpCode__ctor_m22442(&L_158, ((int32_t)269656575), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_R8_158 = L_158;
		OpCode_t4584  L_159 = {0};
		OpCode__ctor_m22442(&L_159, ((int32_t)286434047), ((int32_t)84214529), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_Ref_159 = L_159;
		OpCode_t4584  L_160 = {0};
		OpCode__ctor_m22442(&L_160, ((int32_t)202613759), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldelem_160 = L_160;
		OpCode_t4584  L_161 = {0};
		OpCode__ctor_m22442(&L_161, ((int32_t)470983935), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stelem_161 = L_161;
		OpCode_t4584  L_162 = {0};
		OpCode__ctor_m22442(&L_162, ((int32_t)169059839), ((int32_t)84738817), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Unbox_Any_162 = L_162;
		OpCode_t4584  L_163 = {0};
		OpCode__ctor_m22442(&L_163, ((int32_t)18199551), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I1_163 = L_163;
		OpCode_t4584  L_164 = {0};
		OpCode__ctor_m22442(&L_164, ((int32_t)18199807), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U1_164 = L_164;
		OpCode_t4584  L_165 = {0};
		OpCode__ctor_m22442(&L_165, ((int32_t)18200063), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I2_165 = L_165;
		OpCode_t4584  L_166 = {0};
		OpCode__ctor_m22442(&L_166, ((int32_t)18200319), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U2_166 = L_166;
		OpCode_t4584  L_167 = {0};
		OpCode__ctor_m22442(&L_167, ((int32_t)18200575), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I4_167 = L_167;
		OpCode_t4584  L_168 = {0};
		OpCode__ctor_m22442(&L_168, ((int32_t)18200831), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U4_168 = L_168;
		OpCode_t4584  L_169 = {0};
		OpCode__ctor_m22442(&L_169, ((int32_t)18266623), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I8_169 = L_169;
		OpCode_t4584  L_170 = {0};
		OpCode__ctor_m22442(&L_170, ((int32_t)18266879), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U8_170 = L_170;
		OpCode_t4584  L_171 = {0};
		OpCode__ctor_m22442(&L_171, ((int32_t)18203391), ((int32_t)84739329), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Refanyval_171 = L_171;
		OpCode_t4584  L_172 = {0};
		OpCode__ctor_m22442(&L_172, ((int32_t)18400255), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ckfinite_172 = L_172;
		OpCode_t4584  L_173 = {0};
		OpCode__ctor_m22442(&L_173, ((int32_t)51627775), ((int32_t)84739329), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Mkrefany_173 = L_173;
		OpCode_t4584  L_174 = {0};
		OpCode__ctor_m22442(&L_174, ((int32_t)1429759), ((int32_t)84673793), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldtoken_174 = L_174;
		OpCode_t4584  L_175 = {0};
		OpCode__ctor_m22442(&L_175, ((int32_t)18207231), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_U2_175 = L_175;
		OpCode_t4584  L_176 = {0};
		OpCode__ctor_m22442(&L_176, ((int32_t)18207487), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_U1_176 = L_176;
		OpCode_t4584  L_177 = {0};
		OpCode__ctor_m22442(&L_177, ((int32_t)18207743), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_I_177 = L_177;
		OpCode_t4584  L_178 = {0};
		OpCode__ctor_m22442(&L_178, ((int32_t)18207999), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_I_178 = L_178;
		OpCode_t4584  L_179 = {0};
		OpCode__ctor_m22442(&L_179, ((int32_t)18208255), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_Ovf_U_179 = L_179;
		OpCode_t4584  L_180 = {0};
		OpCode__ctor_m22442(&L_180, ((int32_t)34854655), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Add_Ovf_180 = L_180;
		OpCode_t4584  L_181 = {0};
		OpCode__ctor_m22442(&L_181, ((int32_t)34854911), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Add_Ovf_Un_181 = L_181;
		OpCode_t4584  L_182 = {0};
		OpCode__ctor_m22442(&L_182, ((int32_t)34855167), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Mul_Ovf_182 = L_182;
		OpCode_t4584  L_183 = {0};
		OpCode__ctor_m22442(&L_183, ((int32_t)34855423), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Mul_Ovf_Un_183 = L_183;
		OpCode_t4584  L_184 = {0};
		OpCode__ctor_m22442(&L_184, ((int32_t)34855679), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Sub_Ovf_184 = L_184;
		OpCode_t4584  L_185 = {0};
		OpCode__ctor_m22442(&L_185, ((int32_t)34855935), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Sub_Ovf_Un_185 = L_185;
		OpCode_t4584  L_186 = {0};
		OpCode__ctor_m22442(&L_186, ((int32_t)1236223), ((int32_t)117769473), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Endfinally_186 = L_186;
		OpCode_t4584  L_187 = {0};
		OpCode__ctor_m22442(&L_187, ((int32_t)1236479), ((int32_t)1281), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Leave_187 = L_187;
		OpCode_t4584  L_188 = {0};
		OpCode__ctor_m22442(&L_188, ((int32_t)1236735), ((int32_t)984321), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Leave_S_188 = L_188;
		OpCode_t4584  L_189 = {0};
		OpCode__ctor_m22442(&L_189, ((int32_t)85123071), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stind_I_189 = L_189;
		OpCode_t4584  L_190 = {0};
		OpCode__ctor_m22442(&L_190, ((int32_t)18211071), ((int32_t)84215041), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Conv_U_190 = L_190;
		OpCode_t4584  L_191 = {0};
		OpCode__ctor_m22442(&L_191, ((int32_t)1243391), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix7_191 = L_191;
		OpCode_t4584  L_192 = {0};
		OpCode__ctor_m22442(&L_192, ((int32_t)1243647), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix6_192 = L_192;
		OpCode_t4584  L_193 = {0};
		OpCode__ctor_m22442(&L_193, ((int32_t)1243903), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix5_193 = L_193;
		OpCode_t4584  L_194 = {0};
		OpCode__ctor_m22442(&L_194, ((int32_t)1244159), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix4_194 = L_194;
		OpCode_t4584  L_195 = {0};
		OpCode__ctor_m22442(&L_195, ((int32_t)1244415), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix3_195 = L_195;
		OpCode_t4584  L_196 = {0};
		OpCode__ctor_m22442(&L_196, ((int32_t)1244671), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix2_196 = L_196;
		OpCode_t4584  L_197 = {0};
		OpCode__ctor_m22442(&L_197, ((int32_t)1244927), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefix1_197 = L_197;
		OpCode_t4584  L_198 = {0};
		OpCode__ctor_m22442(&L_198, ((int32_t)1245183), ((int32_t)67437057), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Prefixref_198 = L_198;
		OpCode_t4584  L_199 = {0};
		OpCode__ctor_m22442(&L_199, ((int32_t)1376510), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Arglist_199 = L_199;
		OpCode_t4584  L_200 = {0};
		OpCode__ctor_m22442(&L_200, ((int32_t)34931198), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ceq_200 = L_200;
		OpCode_t4584  L_201 = {0};
		OpCode__ctor_m22442(&L_201, ((int32_t)34931454), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Cgt_201 = L_201;
		OpCode_t4584  L_202 = {0};
		OpCode__ctor_m22442(&L_202, ((int32_t)34931710), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Cgt_Un_202 = L_202;
		OpCode_t4584  L_203 = {0};
		OpCode__ctor_m22442(&L_203, ((int32_t)34931966), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Clt_203 = L_203;
		OpCode_t4584  L_204 = {0};
		OpCode__ctor_m22442(&L_204, ((int32_t)34932222), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Clt_Un_204 = L_204;
		OpCode_t4584  L_205 = {0};
		OpCode__ctor_m22442(&L_205, ((int32_t)1378046), ((int32_t)84149506), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldftn_205 = L_205;
		OpCode_t4584  L_206 = {0};
		OpCode__ctor_m22442(&L_206, ((int32_t)169150462), ((int32_t)84149506), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldvirtftn_206 = L_206;
		OpCode_t4584  L_207 = {0};
		OpCode__ctor_m22442(&L_207, ((int32_t)1247742), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarg_207 = L_207;
		OpCode_t4584  L_208 = {0};
		OpCode__ctor_m22442(&L_208, ((int32_t)1379070), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldarga_208 = L_208;
		OpCode_t4584  L_209 = {0};
		OpCode__ctor_m22442(&L_209, ((int32_t)17959934), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Starg_209 = L_209;
		OpCode_t4584  L_210 = {0};
		OpCode__ctor_m22442(&L_210, ((int32_t)1248510), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloc_210 = L_210;
		OpCode_t4584  L_211 = {0};
		OpCode__ctor_m22442(&L_211, ((int32_t)1379838), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Ldloca_211 = L_211;
		OpCode_t4584  L_212 = {0};
		OpCode__ctor_m22442(&L_212, ((int32_t)17960702), ((int32_t)84804866), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Stloc_212 = L_212;
		OpCode_t4584  L_213 = {0};
		OpCode__ctor_m22442(&L_213, ((int32_t)51711998), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Localloc_213 = L_213;
		OpCode_t4584  L_214 = {0};
		OpCode__ctor_m22442(&L_214, ((int32_t)51515902), ((int32_t)117769474), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Endfilter_214 = L_214;
		OpCode_t4584  L_215 = {0};
		OpCode__ctor_m22442(&L_215, ((int32_t)1184510), ((int32_t)68158466), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Unaligned_215 = L_215;
		OpCode_t4584  L_216 = {0};
		OpCode__ctor_m22442(&L_216, ((int32_t)1184766), ((int32_t)67437570), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Volatile_216 = L_216;
		OpCode_t4584  L_217 = {0};
		OpCode__ctor_m22442(&L_217, ((int32_t)1185022), ((int32_t)67437570), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Tailcall_217 = L_217;
		OpCode_t4584  L_218 = {0};
		OpCode__ctor_m22442(&L_218, ((int32_t)51516926), ((int32_t)84738818), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Initobj_218 = L_218;
		OpCode_t4584  L_219 = {0};
		OpCode__ctor_m22442(&L_219, ((int32_t)1185534), ((int32_t)67961858), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Constrained_219 = L_219;
		OpCode_t4584  L_220 = {0};
		OpCode__ctor_m22442(&L_220, ((int32_t)118626302), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Cpblk_220 = L_220;
		OpCode_t4584  L_221 = {0};
		OpCode__ctor_m22442(&L_221, ((int32_t)118626558), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Initblk_221 = L_221;
		OpCode_t4584  L_222 = {0};
		OpCode__ctor_m22442(&L_222, ((int32_t)1186558), ((int32_t)134546178), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Rethrow_222 = L_222;
		OpCode_t4584  L_223 = {0};
		OpCode__ctor_m22442(&L_223, ((int32_t)1383678), ((int32_t)84739330), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Sizeof_223 = L_223;
		OpCode_t4584  L_224 = {0};
		OpCode__ctor_m22442(&L_224, ((int32_t)18161150), ((int32_t)84215042), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Refanytype_224 = L_224;
		OpCode_t4584  L_225 = {0};
		OpCode__ctor_m22442(&L_225, ((int32_t)1187582), ((int32_t)67437570), /*hidden argument*/NULL);
		((OpCodes_t4583_StaticFields*)OpCodes_t4583_il2cpp_TypeInfo_var->static_fields)->___Readonly_225 = L_225;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.OperandType
#include "mscorlib_System_Reflection_Emit_OperandTypeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.PackingSize
#include "mscorlib_System_Reflection_Emit_PackingSizeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern "C" int32_t ParameterBuilder_get_Attributes_m22454 (ParameterBuilder_t5080 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern "C" String_t* ParameterBuilder_get_Name_m22455 (ParameterBuilder_t5080 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern "C" int32_t ParameterBuilder_get_Position_m22456 (ParameterBuilder_t5080 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___position_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.PEFileKinds
#include "mscorlib_System_Reflection_Emit_PEFileKindsMethodDeclarations.h"



// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilder.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.PropertyBuilder
#include "mscorlib_System_Reflection_Emit_PropertyBuilderMethodDeclarations.h"



// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::get_Attributes()
extern "C" int32_t PropertyBuilder_get_Attributes_m22457 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanRead()
extern "C" bool PropertyBuilder_get_CanRead_m22458 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		MethodBuilder_t5062 * L_0 = (__this->___get_method_4);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t5062 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::get_CanWrite()
extern "C" bool PropertyBuilder_get_CanWrite_m22459 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		MethodBuilder_t5062 * L_0 = (__this->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodBuilder_t5062 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_DeclaringType()
extern "C" Type_t * PropertyBuilder_get_DeclaringType_m22460 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.PropertyBuilder::get_Name()
extern "C" String_t* PropertyBuilder_get_Name_m22461 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_PropertyType()
extern "C" Type_t * PropertyBuilder_get_PropertyType_m22462 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.PropertyBuilder::get_ReflectedType()
extern "C" Type_t * PropertyBuilder_get_ReflectedType_m22463 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_t5052 * L_0 = (__this->___typeb_5);
		return L_0;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.PropertyBuilder::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t2160* PropertyBuilder_GetAccessors_m22464 (PropertyBuilder_t5082 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		return (MethodInfoU5BU5D_t2160*)NULL;
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t697* PropertyBuilder_GetCustomAttributes_m22465 (PropertyBuilder_t5082 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = PropertyBuilder_not_supported_m22476(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.PropertyBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t697* PropertyBuilder_GetCustomAttributes_m22466 (PropertyBuilder_t5082 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = PropertyBuilder_not_supported_m22476(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetGetMethod_m22467 (PropertyBuilder_t5082 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MethodBuilder_t5062 * L_0 = (__this->___get_method_4);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.PropertyBuilder::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t1476* PropertyBuilder_GetIndexParameters_m22468 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = PropertyBuilder_not_supported_m22476(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.PropertyBuilder::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * PropertyBuilder_GetSetMethod_m22469 (PropertyBuilder_t5082 * __this, bool ___nonPublic, const MethodInfo* method)
{
	{
		MethodBuilder_t5062 * L_0 = (__this->___set_method_3);
		return L_0;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyBuilder_GetValue_m22470 (PropertyBuilder_t5082 * __this, Object_t * ___obj, ObjectU5BU5D_t697* ___index, const MethodInfo* method)
{
	{
		return NULL;
	}
}
// System.Object System.Reflection.Emit.PropertyBuilder::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * PropertyBuilder_GetValue_m22471 (PropertyBuilder_t5082 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___index, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = PropertyBuilder_not_supported_m22476(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.PropertyBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool PropertyBuilder_IsDefined_m22472 (PropertyBuilder_t5082 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = PropertyBuilder_not_supported_m22476(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyBuilder_SetValue_m22473 (PropertyBuilder_t5082 * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t697* ___index, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Reflection.Emit.PropertyBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void PropertyBuilder_SetValue_m22474 (PropertyBuilder_t5082 * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t2971 * ___binder, ObjectU5BU5D_t697* ___index, CultureInfo_t783 * ___culture, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Reflection.Module System.Reflection.Emit.PropertyBuilder::get_Module()
extern "C" Module_t5024 * PropertyBuilder_get_Module_m22475 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	{
		Module_t5024 * L_0 = MemberInfo_get_Module_m19264(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.PropertyBuilder::not_supported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * PropertyBuilder_not_supported_m22476 (PropertyBuilder_t5082 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.StackBehaviour
#include "mscorlib_System_Reflection_Emit_StackBehaviourMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"


// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.Reflection.TypeAttributes,System.Int32)
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder__ctor_m22477 (TypeBuilder_t5052 * __this, ModuleBuilder_t5049 * ___mb, int32_t ___attr, int32_t ___table_idx, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	TypeBuilder_t5052 * G_B2_0 = {0};
	TypeBuilder_t5052 * G_B2_1 = {0};
	TypeBuilder_t5052 * G_B1_0 = {0};
	TypeBuilder_t5052 * G_B1_1 = {0};
	String_t* G_B3_0 = {0};
	TypeBuilder_t5052 * G_B3_1 = {0};
	TypeBuilder_t5052 * G_B3_2 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type__ctor_m19185(__this, /*hidden argument*/NULL);
		__this->___parent_10 = (Type_t *)NULL;
		int32_t L_0 = ___attr;
		__this->___attrs_19 = L_0;
		__this->___class_size_22 = 0;
		int32_t L_1 = ___table_idx;
		__this->___table_idx_20 = L_1;
		int32_t L_2 = ___table_idx;
		G_B1_0 = __this;
		G_B1_1 = __this;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			G_B2_0 = __this;
			G_B2_1 = __this;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = (String_t*) &_stringLiteral5863;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003f;
	}

IL_002f:
	{
		int32_t L_3 = ___table_idx;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral5864, L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003f:
	{
		String_t* L_7 = G_B3_0;
		V_0 = L_7;
		NullCheck(G_B3_1);
		G_B3_1->___tname_8 = L_7;
		String_t* L_8 = V_0;
		NullCheck(G_B3_2);
		G_B3_2->___fullname_26 = L_8;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___nspace_9 = L_9;
		ModuleBuilder_t5049 * L_10 = ___mb;
		__this->___pmodule_21 = L_10;
		TypeBuilder_setup_internal_class_m22480(__this, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32,System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder__ctor_m22478 (TypeBuilder_t5052 * __this, ModuleBuilder_t5049 * ___mb, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t1221* ___interfaces, int32_t ___packing_size, int32_t ___type_size, Type_t * ___nesting_type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type__ctor_m19185(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___parent;
		__this->___parent_10 = L_0;
		int32_t L_1 = ___attr;
		__this->___attrs_19 = L_1;
		int32_t L_2 = ___type_size;
		__this->___class_size_22 = L_2;
		int32_t L_3 = ___packing_size;
		__this->___packing_size_23 = L_3;
		Type_t * L_4 = ___nesting_type;
		__this->___nesting_type_11 = L_4;
		String_t* L_5 = ___name;
		TypeBuilder_check_name_m22531(__this, (String_t*) &_stringLiteral5865, L_5, /*hidden argument*/NULL);
		Type_t * L_6 = ___parent;
		if (L_6)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = ___attr;
		if (!((int32_t)((int32_t)L_7&(int32_t)((int32_t)32))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_8 = ___attr;
		if (((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_0057;
		}
	}
	{
		InvalidOperationException_t1447 * L_9 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_9, (String_t*) &_stringLiteral5866, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0057:
	{
		String_t* L_10 = ___name;
		NullCheck(L_10);
		int32_t L_11 = String_LastIndexOf_m18112(L_10, ((int32_t)46), /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_13 = ___name;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m4282(L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		__this->___tname_8 = L_15;
		String_t* L_16 = ___name;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		String_t* L_18 = String_Substring_m418(L_16, 0, L_17, /*hidden argument*/NULL);
		__this->___nspace_9 = L_18;
		goto IL_0095;
	}

IL_0083:
	{
		String_t* L_19 = ___name;
		__this->___tname_8 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___nspace_9 = L_20;
	}

IL_0095:
	{
		TypeU5BU5D_t1221* L_21 = ___interfaces;
		if (!L_21)
		{
			goto IL_00b9;
		}
	}
	{
		TypeU5BU5D_t1221* L_22 = ___interfaces;
		NullCheck(L_22);
		__this->___interfaces_12 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_22)->max_length)))));
		TypeU5BU5D_t1221* L_23 = ___interfaces;
		TypeU5BU5D_t1221* L_24 = (__this->___interfaces_12);
		TypeU5BU5D_t1221* L_25 = ___interfaces;
		NullCheck(L_25);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_23, (Array_t *)(Array_t *)L_24, (((int32_t)(((Array_t *)L_25)->max_length))), /*hidden argument*/NULL);
	}

IL_00b9:
	{
		ModuleBuilder_t5049 * L_26 = ___mb;
		__this->___pmodule_21 = L_26;
		int32_t L_27 = ___attr;
		if (((int32_t)((int32_t)L_27&(int32_t)((int32_t)32))))
		{
			goto IL_00e2;
		}
	}
	{
		Type_t * L_28 = ___parent;
		if (L_28)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_29 = TypeBuilder_get_IsCompilerContext_m22526(__this, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00e2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		__this->___parent_10 = L_30;
	}

IL_00e2:
	{
		ModuleBuilder_t5049 * L_31 = ___mb;
		NullCheck(L_31);
		int32_t L_32 = ModuleBuilder_get_next_table_index_m22426(L_31, __this, 2, 1, /*hidden argument*/NULL);
		__this->___table_idx_20 = L_32;
		TypeBuilder_setup_internal_class_m22480(__this, __this, /*hidden argument*/NULL);
		String_t* L_33 = TypeBuilder_GetFullName_m22486(__this, /*hidden argument*/NULL);
		__this->___fullname_26 = L_33;
		return;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m22479 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_19);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C" void TypeBuilder_setup_internal_class_m22480 (TypeBuilder_t5052 * __this, TypeBuilder_t5052 * ___tb, const MethodInfo* method)
{
	typedef void (*TypeBuilder_setup_internal_class_m22480_ftn) (TypeBuilder_t5052 *, TypeBuilder_t5052 *);
	static TypeBuilder_setup_internal_class_m22480_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_setup_internal_class_m22480_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)");
	_il2cpp_icall_func(__this, ___tb);
}
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t784 * TypeBuilder_get_Assembly_m22481 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___pmodule_21);
		NullCheck(L_0);
		Assembly_t784 * L_1 = Module_get_Assembly_m21923(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m22482 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___fullname_26);
		Assembly_t784 * L_1 = (Assembly_t784 *)VirtFuncInvoker0< Assembly_t784 * >::Invoke(14 /* System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly() */, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral120, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m22483 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___parent_10);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m22484 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m22485 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(36 /* System.Type System.Type::get_UnderlyingSystemType() */, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Type::get_IsEnum() */, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m22526(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_5 = (__this->___underlying_type_27);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = (__this->___underlying_type_27);
		return L_6;
	}

IL_0033:
	{
		InvalidOperationException_t1447 * L_7 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_7, (String_t*) &_stringLiteral5862, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::GetFullName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* TypeBuilder_GetFullName_m22486 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		Type_t * L_1 = (__this->___nesting_type_11);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = (__this->___tname_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m455(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral1190, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		String_t* L_5 = (__this->___nspace_9);
		if (!L_5)
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_6 = (__this->___nspace_9);
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m410(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_8 = (__this->___nspace_9);
		String_t* L_9 = (__this->___tname_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m455(NULL /*static, unused*/, L_8, (String_t*) &_stringLiteral993, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0051:
	{
		String_t* L_11 = (__this->___tname_8);
		return L_11;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m22487 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_26);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t5024 * TypeBuilder_get_Module_m22488 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___pmodule_21);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m22489 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___tname_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m22490 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___nspace_9);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m22491 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* AmbiguousMatchException_t5007_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2971_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorInfo_t1399_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1399 * TypeBuilder_GetConstructorImpl_m22492 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		AmbiguousMatchException_t5007_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8991);
		MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8995);
		Binder_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8947);
		ConstructorInfo_t1399_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2566);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorBuilder_t5055 * V_0 = {0};
	int32_t V_1 = 0;
	ConstructorBuilder_t5055 * V_2 = {0};
	ConstructorBuilderU5BU5D_t5085* V_3 = {0};
	int32_t V_4 = 0;
	MethodBaseU5BU5D_t5422* V_5 = {0};
	ConstructorInfo_t1399 * V_6 = {0};
	ConstructorBuilderU5BU5D_t5085* V_7 = {0};
	int32_t V_8 = 0;
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		ConstructorBuilderU5BU5D_t5085* L_2 = (__this->___ctors_15);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ConstructorInfo_t1399 *)NULL;
	}

IL_0025:
	{
		V_0 = (ConstructorBuilder_t5055 *)NULL;
		V_1 = 0;
		ConstructorBuilderU5BU5D_t5085* L_3 = (__this->___ctors_15);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		ConstructorBuilderU5BU5D_t5085* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (*(ConstructorBuilder_t5055 **)(ConstructorBuilder_t5055 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = ___callConvention;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		ConstructorBuilder_t5055 * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention() */, L_8);
		int32_t L_10 = ___callConvention;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		ConstructorBuilder_t5055 * L_11 = V_2;
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_4;
		ConstructorBuilderU5BU5D_t5085* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		return (ConstructorInfo_t1399 *)NULL;
	}

IL_0061:
	{
		TypeU5BU5D_t1221* L_17 = ___types;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		AmbiguousMatchException_t5007 * L_19 = (AmbiguousMatchException_t5007 *)il2cpp_codegen_object_new (AmbiguousMatchException_t5007_il2cpp_TypeInfo_var);
		AmbiguousMatchException__ctor_m21781(L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		ConstructorBuilder_t5055 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((MethodBaseU5BU5D_t5422*)SZArrayNew(MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		MethodBaseU5BU5D_t5422* L_23 = V_5;
		ConstructorBuilder_t5055 * L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		ArrayElementTypeCheck (L_23, L_24);
		*((MethodBase_t1543 **)(MethodBase_t1543 **)SZArrayLdElema(L_23, 0)) = (MethodBase_t1543 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		ConstructorBuilderU5BU5D_t5085* L_25 = (__this->___ctors_15);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		ConstructorBuilderU5BU5D_t5085* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		V_6 = (*(ConstructorBuilder_t5055 **)(ConstructorBuilder_t5055 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = ___callConvention;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		ConstructorInfo_t1399 * L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_30);
		int32_t L_32 = ___callConvention;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		MethodBaseU5BU5D_t5422* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		ConstructorInfo_t1399 * L_36 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_35);
		ArrayElementTypeCheck (L_33, L_36);
		*((MethodBase_t1543 **)(MethodBase_t1543 **)SZArrayLdElema(L_33, L_35)) = (MethodBase_t1543 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		ConstructorBuilderU5BU5D_t5085* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		Binder_t2971 * L_40 = ___binder;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		Binder_t2971 * L_41 = Binder_get_DefaultBinder_m21860(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_41;
	}

IL_00ce:
	{
		Binder_t2971 * L_42 = ___binder;
		int32_t L_43 = ___bindingAttr;
		MethodBaseU5BU5D_t5422* L_44 = V_5;
		TypeU5BU5D_t1221* L_45 = ___types;
		ParameterModifierU5BU5D_t2972* L_46 = ___modifiers;
		NullCheck(L_42);
		MethodBase_t1543 * L_47 = (MethodBase_t1543 *)VirtFuncInvoker4< MethodBase_t1543 *, int32_t, MethodBaseU5BU5D_t5422*, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_42, L_43, L_44, L_45, L_46);
		return ((ConstructorInfo_t1399 *)Castclass(L_47, ConstructorInfo_t1399_il2cpp_TypeInfo_var));
	}

IL_00e1:
	{
		Type_t * L_48 = (__this->___created_25);
		int32_t L_49 = ___bindingAttr;
		Binder_t2971 * L_50 = ___binder;
		int32_t L_51 = ___callConvention;
		TypeU5BU5D_t1221* L_52 = ___types;
		ParameterModifierU5BU5D_t2972* L_53 = ___modifiers;
		NullCheck(L_48);
		ConstructorInfo_t1399 * L_54 = (ConstructorInfo_t1399 *)VirtFuncInvoker5< ConstructorInfo_t1399 *, int32_t, Binder_t2971 *, int32_t, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(77 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern TypeInfo* MonoCustomAttrs_t4897_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsDefined_m22493 (TypeBuilder_t5052 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		MonoCustomAttrs_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8846);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = TypeBuilder_get_IsCompilerContext_m22526(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t56 * L_2 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(MonoCustomAttrs_t4897_il2cpp_TypeInfo_var);
		bool L_5 = MonoCustomAttrs_IsDefined_m20517(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t697* TypeBuilder_GetCustomAttributes_m22494 (TypeBuilder_t5052 * __this, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_2 = (ObjectU5BU5D_t697*)VirtFuncInvoker1< ObjectU5BU5D_t697*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t697* TypeBuilder_GetCustomAttributes_m22495 (TypeBuilder_t5052 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t697* L_3 = (ObjectU5BU5D_t697*)VirtFuncInvoker2< ObjectU5BU5D_t697*, Type_t *, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C" ConstructorBuilder_t5055 * TypeBuilder_DefineConstructor_m22496 (TypeBuilder_t5052 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1221* ___parameterTypes, const MethodInfo* method)
{
	{
		int32_t L_0 = ___attributes;
		int32_t L_1 = ___callingConvention;
		TypeU5BU5D_t1221* L_2 = ___parameterTypes;
		ConstructorBuilder_t5055 * L_3 = TypeBuilder_DefineConstructor_m22497(__this, L_0, L_1, L_2, (TypeU5BU5DU5BU5D_t5054*)(TypeU5BU5DU5BU5D_t5054*)NULL, (TypeU5BU5DU5BU5D_t5054*)(TypeU5BU5DU5BU5D_t5054*)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern TypeInfo* ConstructorBuilder_t5055_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructorBuilderU5BU5D_t5085_il2cpp_TypeInfo_var;
extern "C" ConstructorBuilder_t5055 * TypeBuilder_DefineConstructor_m22497 (TypeBuilder_t5052 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1221* ___parameterTypes, TypeU5BU5DU5BU5D_t5054* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t5054* ___optionalCustomModifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorBuilder_t5055_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9072);
		ConstructorBuilderU5BU5D_t5085_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9110);
		s_Il2CppMethodIntialized = true;
	}
	ConstructorBuilder_t5055 * V_0 = {0};
	ConstructorBuilderU5BU5D_t5085* V_1 = {0};
	{
		TypeBuilder_check_not_created_m22529(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___attributes;
		int32_t L_1 = ___callingConvention;
		TypeU5BU5D_t1221* L_2 = ___parameterTypes;
		TypeU5BU5DU5BU5D_t5054* L_3 = ___requiredCustomModifiers;
		TypeU5BU5DU5BU5D_t5054* L_4 = ___optionalCustomModifiers;
		ConstructorBuilder_t5055 * L_5 = (ConstructorBuilder_t5055 *)il2cpp_codegen_object_new (ConstructorBuilder_t5055_il2cpp_TypeInfo_var);
		ConstructorBuilder__ctor_m22148(L_5, __this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ConstructorBuilderU5BU5D_t5085* L_6 = (__this->___ctors_15);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		ConstructorBuilderU5BU5D_t5085* L_7 = (__this->___ctors_15);
		NullCheck(L_7);
		V_1 = ((ConstructorBuilderU5BU5D_t5085*)SZArrayNew(ConstructorBuilderU5BU5D_t5085_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))+(int32_t)1))));
		ConstructorBuilderU5BU5D_t5085* L_8 = (__this->___ctors_15);
		ConstructorBuilderU5BU5D_t5085* L_9 = V_1;
		ConstructorBuilderU5BU5D_t5085* L_10 = (__this->___ctors_15);
		NullCheck(L_10);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_8, (Array_t *)(Array_t *)L_9, (((int32_t)(((Array_t *)L_10)->max_length))), /*hidden argument*/NULL);
		ConstructorBuilderU5BU5D_t5085* L_11 = V_1;
		ConstructorBuilderU5BU5D_t5085* L_12 = (__this->___ctors_15);
		NullCheck(L_12);
		ConstructorBuilder_t5055 * L_13 = V_0;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, (((int32_t)(((Array_t *)L_12)->max_length))));
		ArrayElementTypeCheck (L_11, L_13);
		*((ConstructorBuilder_t5055 **)(ConstructorBuilder_t5055 **)SZArrayLdElema(L_11, (((int32_t)(((Array_t *)L_12)->max_length))))) = (ConstructorBuilder_t5055 *)L_13;
		ConstructorBuilderU5BU5D_t5085* L_14 = V_1;
		__this->___ctors_15 = L_14;
		goto IL_0069;
	}

IL_0054:
	{
		__this->___ctors_15 = ((ConstructorBuilderU5BU5D_t5085*)SZArrayNew(ConstructorBuilderU5BU5D_t5085_il2cpp_TypeInfo_var, 1));
		ConstructorBuilderU5BU5D_t5085* L_15 = (__this->___ctors_15);
		ConstructorBuilder_t5055 * L_16 = V_0;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, L_16);
		*((ConstructorBuilder_t5055 **)(ConstructorBuilder_t5055 **)SZArrayLdElema(L_15, 0)) = (ConstructorBuilder_t5055 *)L_16;
	}

IL_0069:
	{
		ConstructorBuilder_t5055 * L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::append_method(System.Reflection.Emit.MethodBuilder)
extern TypeInfo* MethodBuilderU5BU5D_t5084_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder_append_method_m22498 (TypeBuilder_t5052 * __this, MethodBuilder_t5062 * ___mb, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBuilderU5BU5D_t5084_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9111);
		s_Il2CppMethodIntialized = true;
	}
	MethodBuilderU5BU5D_t5084* V_0 = {0};
	{
		MethodBuilderU5BU5D_t5084* L_0 = (__this->___methods_14);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		MethodBuilderU5BU5D_t5084* L_1 = (__this->___methods_14);
		NullCheck(L_1);
		int32_t L_2 = (__this->___num_methods_13);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_1)->max_length)))) == ((uint32_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		MethodBuilderU5BU5D_t5084* L_3 = (__this->___methods_14);
		NullCheck(L_3);
		V_0 = ((MethodBuilderU5BU5D_t5084*)SZArrayNew(MethodBuilderU5BU5D_t5084_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))*(int32_t)2))));
		MethodBuilderU5BU5D_t5084* L_4 = (__this->___methods_14);
		MethodBuilderU5BU5D_t5084* L_5 = V_0;
		int32_t L_6 = (__this->___num_methods_13);
		Array_Copy_m14766(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, (Array_t *)(Array_t *)L_5, L_6, /*hidden argument*/NULL);
		MethodBuilderU5BU5D_t5084* L_7 = V_0;
		__this->___methods_14 = L_7;
	}

IL_0041:
	{
		goto IL_004f;
	}

IL_0043:
	{
		__this->___methods_14 = ((MethodBuilderU5BU5D_t5084*)SZArrayNew(MethodBuilderU5BU5D_t5084_il2cpp_TypeInfo_var, 1));
	}

IL_004f:
	{
		MethodBuilderU5BU5D_t5084* L_8 = (__this->___methods_14);
		int32_t L_9 = (__this->___num_methods_13);
		MethodBuilder_t5062 * L_10 = ___mb;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		ArrayElementTypeCheck (L_8, L_10);
		*((MethodBuilder_t5062 **)(MethodBuilder_t5062 **)SZArrayLdElema(L_8, L_9)) = (MethodBuilder_t5062 *)L_10;
		int32_t L_11 = (__this->___num_methods_13);
		__this->___num_methods_13 = ((int32_t)((int32_t)L_11+(int32_t)1));
		return;
	}
}
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C" MethodBuilder_t5062 * TypeBuilder_DefineMethod_m22499 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t1221* ___parameterTypes, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___attributes;
		Type_t * L_2 = ___returnType;
		TypeU5BU5D_t1221* L_3 = ___parameterTypes;
		MethodBuilder_t5062 * L_4 = TypeBuilder_DefineMethod_m22500(__this, L_0, L_1, 1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[])
extern "C" MethodBuilder_t5062 * TypeBuilder_DefineMethod_m22500 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1221* ___parameterTypes, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___attributes;
		int32_t L_2 = ___callingConvention;
		Type_t * L_3 = ___returnType;
		TypeU5BU5D_t1221* L_4 = ___parameterTypes;
		MethodBuilder_t5062 * L_5 = TypeBuilder_DefineMethod_m22501(__this, L_0, L_1, L_2, L_3, (TypeU5BU5D_t1221*)(TypeU5BU5D_t1221*)NULL, (TypeU5BU5D_t1221*)(TypeU5BU5D_t1221*)NULL, L_4, (TypeU5BU5DU5BU5D_t5054*)(TypeU5BU5DU5BU5D_t5054*)NULL, (TypeU5BU5DU5BU5D_t5054*)(TypeU5BU5DU5BU5D_t5054*)NULL, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBuilder_t5062_il2cpp_TypeInfo_var;
extern "C" MethodBuilder_t5062 * TypeBuilder_DefineMethod_m22501 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t1221* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t1221* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t1221* ___parameterTypes, TypeU5BU5DU5BU5D_t5054* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t5054* ___parameterTypeOptionalCustomModifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		MethodBuilder_t5062_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9071);
		s_Il2CppMethodIntialized = true;
	}
	MethodBuilder_t5062 * V_0 = {0};
	{
		String_t* L_0 = ___name;
		TypeBuilder_check_name_m22531(__this, (String_t*) &_stringLiteral524, L_0, /*hidden argument*/NULL);
		TypeBuilder_check_not_created_m22529(__this, /*hidden argument*/NULL);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, __this);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = ___attributes;
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)1024))))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___attributes;
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_003a;
		}
	}

IL_0029:
	{
		int32_t L_4 = ___attributes;
		if (((int32_t)((int32_t)L_4&(int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_t726 * L_5 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_5, (String_t*) &_stringLiteral5867, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		Type_t * L_6 = ___returnType;
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		ModuleBuilder_t5049 * L_7 = (__this->___pmodule_21);
		NullCheck(L_7);
		AssemblyBuilder_t5050 * L_8 = (L_7->___assemblyb_14);
		NullCheck(L_8);
		Type_t * L_9 = (L_8->___corlib_void_type_27);
		___returnType = L_9;
	}

IL_0052:
	{
		String_t* L_10 = ___name;
		int32_t L_11 = ___attributes;
		int32_t L_12 = ___callingConvention;
		Type_t * L_13 = ___returnType;
		TypeU5BU5D_t1221* L_14 = ___returnTypeRequiredCustomModifiers;
		TypeU5BU5D_t1221* L_15 = ___returnTypeOptionalCustomModifiers;
		TypeU5BU5D_t1221* L_16 = ___parameterTypes;
		TypeU5BU5DU5BU5D_t5054* L_17 = ___parameterTypeRequiredCustomModifiers;
		TypeU5BU5DU5BU5D_t5054* L_18 = ___parameterTypeOptionalCustomModifiers;
		MethodBuilder_t5062 * L_19 = (MethodBuilder_t5062 *)il2cpp_codegen_object_new (MethodBuilder_t5062_il2cpp_TypeInfo_var);
		MethodBuilder__ctor_m22374(L_19, __this, L_10, L_11, L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		MethodBuilder_t5062 * L_20 = V_0;
		TypeBuilder_append_method_m22498(__this, L_20, /*hidden argument*/NULL);
		MethodBuilder_t5062 * L_21 = V_0;
		return L_21;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::DefineMethodOverride(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern TypeInfo* MethodBuilder_t5062_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder_DefineMethodOverride_m22502 (TypeBuilder_t5052 * __this, MethodInfo_t * ___methodInfoBody, MethodInfo_t * ___methodInfoDeclaration, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		MethodBuilder_t5062_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9071);
		s_Il2CppMethodIntialized = true;
	}
	MethodBuilder_t5062 * V_0 = {0};
	{
		MethodInfo_t * L_0 = ___methodInfoBody;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5868, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		MethodInfo_t * L_2 = ___methodInfoDeclaration;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t785 * L_3 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_3, (String_t*) &_stringLiteral5869, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		TypeBuilder_check_not_created_m22529(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_4 = ___methodInfoBody;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		if ((((Object_t*)(Type_t *)L_5) == ((Object_t*)(TypeBuilder_t5052 *)__this)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_t726 * L_6 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_6, (String_t*) &_stringLiteral5870, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0036:
	{
		MethodInfo_t * L_7 = ___methodInfoBody;
		if (!((MethodBuilder_t5062 *)IsInst(L_7, MethodBuilder_t5062_il2cpp_TypeInfo_var)))
		{
			goto IL_004c;
		}
	}
	{
		MethodInfo_t * L_8 = ___methodInfoBody;
		V_0 = ((MethodBuilder_t5062 *)Castclass(L_8, MethodBuilder_t5062_il2cpp_TypeInfo_var));
		MethodBuilder_t5062 * L_9 = V_0;
		MethodInfo_t * L_10 = ___methodInfoDeclaration;
		NullCheck(L_9);
		MethodBuilder_set_override_m22398(L_9, L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t1474* TypeBuilder_GetConstructors_m22503 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t1474* L_3 = (ConstructorInfoU5BU5D_t1474*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1474*, int32_t >::Invoke(79 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m22526(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t56 * L_5 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___bindingAttr;
		ConstructorInfoU5BU5D_t1474* L_7 = TypeBuilder_GetConstructorsInternal_m22504(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern TypeInfo* ConstructorInfoU5BU5D_t1474_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t713_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t1474* TypeBuilder_GetConstructorsInternal_m22504 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructorInfoU5BU5D_t1474_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9112);
		ArrayList_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t713 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	ConstructorBuilder_t5055 * V_3 = {0};
	ConstructorBuilderU5BU5D_t5085* V_4 = {0};
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t1474* V_6 = {0};
	{
		ConstructorBuilderU5BU5D_t5085* L_0 = (__this->___ctors_15);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ConstructorInfoU5BU5D_t1474*)SZArrayNew(ConstructorInfoU5BU5D_t1474_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ArrayList_t713 * L_1 = (ArrayList_t713 *)il2cpp_codegen_object_new (ArrayList_t713_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		ConstructorBuilderU5BU5D_t5085* L_2 = (__this->___ctors_15);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		ConstructorBuilderU5BU5D_t5085* L_3 = V_4;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = (*(ConstructorBuilder_t5055 **)(ConstructorBuilder_t5055 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		ConstructorBuilder_t5055 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes() */, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		int32_t L_10 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_13&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		ArrayList_t713 * L_16 = V_0;
		ConstructorBuilder_t5055 * L_17 = V_3;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		ConstructorBuilderU5BU5D_t5085* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t713 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_21);
		V_6 = ((ConstructorInfoU5BU5D_t1474*)SZArrayNew(ConstructorInfoU5BU5D_t1474_il2cpp_TypeInfo_var, L_22));
		ArrayList_t713 * L_23 = V_0;
		ConstructorInfoU5BU5D_t1474* L_24 = V_6;
		NullCheck(L_23);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_23, (Array_t *)(Array_t *)L_24);
		ConstructorInfoU5BU5D_t1474* L_25 = V_6;
		return L_25;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_GetElementType_m22505 (TypeBuilder_t5052 * __this, const MethodInfo* method)
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
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m22506 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" FieldInfo_t * TypeBuilder_GetField_m22507 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = {0};
	FieldInfo_t * V_2 = {0};
	FieldBuilderU5BU5D_t5087* V_3 = {0};
	int32_t V_4 = 0;
	{
		Type_t * L_0 = (__this->___created_25);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfo_t * L_4 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		FieldBuilderU5BU5D_t5087* L_5 = (__this->___fields_17);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}

IL_0020:
	{
		FieldBuilderU5BU5D_t5087* L_6 = (__this->___fields_17);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		FieldBuilderU5BU5D_t5087* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (*(FieldBuilder_t5061 **)(FieldBuilder_t5061 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_2;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		FieldInfo_t * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Inequality_m415(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		FieldInfo_t * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_15);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		int32_t L_21 = V_1;
		if (!((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		FieldInfo_t * L_25 = V_2;
		return L_25;
	}

IL_008e:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_27 = V_4;
		FieldBuilderU5BU5D_t5087* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}
}
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern TypeInfo* FieldInfoU5BU5D_t2968_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t713_il2cpp_TypeInfo_var;
extern "C" FieldInfoU5BU5D_t2968* TypeBuilder_GetFields_m22508 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfoU5BU5D_t2968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9113);
		ArrayList_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t713 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	FieldInfo_t * V_3 = {0};
	FieldBuilderU5BU5D_t5087* V_4 = {0};
	int32_t V_5 = 0;
	FieldInfoU5BU5D_t2968* V_6 = {0};
	{
		Type_t * L_0 = (__this->___created_25);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfoU5BU5D_t2968* L_3 = (FieldInfoU5BU5D_t2968*)VirtFuncInvoker1< FieldInfoU5BU5D_t2968*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		FieldBuilderU5BU5D_t5087* L_4 = (__this->___fields_17);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((FieldInfoU5BU5D_t2968*)SZArrayNew(FieldInfoU5BU5D_t2968_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		ArrayList_t713 * L_5 = (ArrayList_t713 *)il2cpp_codegen_object_new (ArrayList_t713_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		FieldBuilderU5BU5D_t5087* L_6 = (__this->___fields_17);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0096;
	}

IL_003a:
	{
		FieldBuilderU5BU5D_t5087* L_7 = V_4;
		int32_t L_8 = V_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_3 = (*(FieldBuilder_t5061 **)(FieldBuilder_t5061 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_3;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		goto IL_0090;
	}

IL_0045:
	{
		V_1 = 0;
		FieldInfo_t * L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_11);
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_13&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)((int32_t)16))))
		{
			goto IL_005c;
		}
	}
	{
		V_1 = 1;
	}

IL_005c:
	{
		goto IL_0066;
	}

IL_005e:
	{
		int32_t L_15 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_15&(int32_t)((int32_t)32))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_16 = V_1;
		if (L_16)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0090;
	}

IL_006b:
	{
		V_1 = 0;
		int32_t L_17 = V_2;
		if (!((int32_t)((int32_t)L_17&(int32_t)((int32_t)16))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)8)))
		{
			goto IL_007a;
		}
	}
	{
		V_1 = 1;
	}

IL_007a:
	{
		goto IL_0083;
	}

IL_007c:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)4)))
		{
			goto IL_0083;
		}
	}
	{
		V_1 = 1;
	}

IL_0083:
	{
		bool L_20 = V_1;
		if (L_20)
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0090;
	}

IL_0088:
	{
		ArrayList_t713 * L_21 = V_0;
		FieldInfo_t * L_22 = V_3;
		NullCheck(L_21);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_21, L_22);
	}

IL_0090:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0096:
	{
		int32_t L_24 = V_5;
		FieldBuilderU5BU5D_t5087* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t713 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		V_6 = ((FieldInfoU5BU5D_t2968*)SZArrayNew(FieldInfoU5BU5D_t2968_il2cpp_TypeInfo_var, L_27));
		ArrayList_t713 * L_28 = V_0;
		FieldInfoU5BU5D_t2968* L_29 = V_6;
		NullCheck(L_28);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_28, (Array_t *)(Array_t *)L_29);
		FieldInfoU5BU5D_t2968* L_30 = V_6;
		return L_30;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* TypeBuilder_GetInterfaces_m22509 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		NullCheck(L_1);
		TypeU5BU5D_t1221* L_2 = (TypeU5BU5D_t1221*)VirtFuncInvoker0< TypeU5BU5D_t1221* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		return L_2;
	}

IL_0014:
	{
		TypeU5BU5D_t1221* L_3 = (__this->___interfaces_12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		TypeU5BU5D_t1221* L_4 = (__this->___interfaces_12);
		NullCheck(L_4);
		V_0 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		TypeU5BU5D_t1221* L_5 = (__this->___interfaces_12);
		TypeU5BU5D_t1221* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_5, (Array_t *)(Array_t *)L_6, 0);
		TypeU5BU5D_t1221* L_7 = V_0;
		return L_7;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1221* L_8 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		return L_8;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern TypeInfo* ArrayList_t713_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t2160* TypeBuilder_GetMethodsByName_m22510 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9078);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfoU5BU5D_t2160* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfoU5BU5D_t2160* V_3 = {0};
	ArrayList_t713 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	MethodInfo_t * V_7 = {0};
	ArrayList_t713 * V_8 = {0};
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t2160* V_10 = {0};
	int32_t V_11 = 0;
	MethodInfoU5BU5D_t2160* V_12 = {0};
	int32_t V_13 = {0};
	{
		int32_t L_0 = ___bindingAttr;
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_2 = (__this->___parent_10);
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_2);
		MethodInfoU5BU5D_t2160* L_4 = (MethodInfoU5BU5D_t2160*)VirtFuncInvoker1< MethodInfoU5BU5D_t2160*, int32_t >::Invoke(56 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_2, L_3);
		V_3 = L_4;
		MethodInfoU5BU5D_t2160* L_5 = V_3;
		NullCheck(L_5);
		ArrayList_t713 * L_6 = (ArrayList_t713 *)il2cpp_codegen_object_new (ArrayList_t713_il2cpp_TypeInfo_var);
		ArrayList__ctor_m18087(L_6, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/NULL);
		V_4 = L_6;
		int32_t L_7 = ___bindingAttr;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		MethodInfoU5BU5D_t2160* L_8 = V_3;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_7 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		MethodInfo_t * L_11 = V_7;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_11);
		V_2 = L_12;
		MethodInfo_t * L_13 = V_7;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(23 /* System.Boolean System.Reflection.MethodBase::get_IsStatic() */, L_13);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		int32_t L_16 = V_2;
		V_13 = ((int32_t)((int32_t)L_16&(int32_t)7));
		int32_t L_17 = V_13;
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		int32_t L_18 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		int32_t L_19 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		int32_t L_20 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		ArrayList_t713 * L_22 = V_4;
		MethodInfo_t * L_23 = V_7;
		NullCheck(L_22);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		MethodInfoU5BU5D_t2160* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		MethodBuilderU5BU5D_t5084* L_27 = (__this->___methods_14);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		ArrayList_t713 * L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_28);
		V_0 = ((MethodInfoU5BU5D_t2160*)SZArrayNew(MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var, L_29));
		ArrayList_t713 * L_30 = V_4;
		MethodInfoU5BU5D_t2160* L_31 = V_0;
		NullCheck(L_30);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_30, (Array_t *)(Array_t *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		MethodBuilderU5BU5D_t5084* L_32 = (__this->___methods_14);
		NullCheck(L_32);
		ArrayList_t713 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_33);
		V_0 = ((MethodInfoU5BU5D_t2160*)SZArrayNew(MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))+(int32_t)L_34))));
		ArrayList_t713 * L_35 = V_4;
		MethodInfoU5BU5D_t2160* L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_35, (Array_t *)(Array_t *)L_36, 0);
		MethodBuilderU5BU5D_t5084* L_37 = (__this->___methods_14);
		MethodInfoU5BU5D_t2160* L_38 = V_0;
		ArrayList_t713 * L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_37, (Array_t *)(Array_t *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		MethodBuilderU5BU5D_t5084* L_41 = (__this->___methods_14);
		V_0 = (MethodInfoU5BU5D_t2160*)L_41;
	}

IL_0125:
	{
		MethodInfoU5BU5D_t2160* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((MethodInfoU5BU5D_t2160*)SZArrayNew(MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var, 0));
	}

IL_012f:
	{
		ArrayList_t713 * L_43 = (ArrayList_t713 *)il2cpp_codegen_object_new (ArrayList_t713_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_43, /*hidden argument*/NULL);
		V_8 = L_43;
		MethodInfoU5BU5D_t2160* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		MethodInfoU5BU5D_t2160* L_45 = V_10;
		int32_t L_46 = V_11;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_45, L_47));
		MethodInfo_t * L_48 = V_9;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		String_t* L_49 = ___name;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		MethodInfo_t * L_50 = V_9;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		String_t* L_52 = ___name;
		bool L_53 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_54 = String_Compare_m18038(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		MethodInfo_t * L_55 = V_9;
		NullCheck(L_55);
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_58 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_58&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		int32_t L_59 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_59&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		int32_t L_61 = V_2;
		if (!((int32_t)((int32_t)L_61&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_62 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_62&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		int32_t L_63 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		ArrayList_t713 * L_65 = V_8;
		MethodInfo_t * L_66 = V_9;
		NullCheck(L_65);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		MethodInfoU5BU5D_t2160* L_69 = V_10;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((Array_t *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		ArrayList_t713 * L_70 = V_8;
		NullCheck(L_70);
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_70);
		V_12 = ((MethodInfoU5BU5D_t2160*)SZArrayNew(MethodInfoU5BU5D_t2160_il2cpp_TypeInfo_var, L_71));
		ArrayList_t713 * L_72 = V_8;
		MethodInfoU5BU5D_t2160* L_73 = V_12;
		NullCheck(L_72);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_72, (Array_t *)(Array_t *)L_73);
		MethodInfoU5BU5D_t2160* L_74 = V_12;
		return L_74;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2160* TypeBuilder_GetMethods_m22511 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodInfoU5BU5D_t2160* L_1 = TypeBuilder_GetMethodsByName_m22510(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern TypeInfo* MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var;
extern TypeInfo* Binder_t2971_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m22512 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, int32_t ___callConvention, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8995);
		Binder_t2971_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8947);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2720);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t2160* V_1 = {0};
	MethodInfo_t * V_2 = {0};
	MethodBaseU5BU5D_t5422* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = {0};
	MethodInfoU5BU5D_t2160* V_7 = {0};
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t2160* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		MethodInfoU5BU5D_t2160* L_4 = TypeBuilder_GetMethodsByName_m22510(__this, L_1, L_2, L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		V_2 = (MethodInfo_t *)NULL;
		TypeU5BU5D_t1221* L_5 = ___types;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		TypeU5BU5D_t1221* L_6 = ___types;
		NullCheck(L_6);
		G_B3_0 = (((int32_t)(((Array_t *)L_6)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		MethodInfoU5BU5D_t2160* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		MethodInfoU5BU5D_t2160* L_8 = V_7;
		int32_t L_9 = V_8;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_6 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = ___callConvention;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_12);
		int32_t L_14 = ___callConvention;
		int32_t L_15 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) == ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		MethodInfo_t * L_16 = V_6;
		V_2 = L_16;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = V_8;
		V_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_19 = V_8;
		MethodInfoU5BU5D_t2160* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		return (MethodInfo_t *)NULL;
	}

IL_006e:
	{
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		MethodInfo_t * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((MethodBaseU5BU5D_t5422*)SZArrayNew(MethodBaseU5BU5D_t5422_il2cpp_TypeInfo_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		MethodBaseU5BU5D_t5422* L_27 = V_3;
		MethodInfo_t * L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, L_28);
		*((MethodBase_t1543 **)(MethodBase_t1543 **)SZArrayLdElema(L_27, 0)) = (MethodBase_t1543 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		MethodInfoU5BU5D_t2160* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		MethodInfoU5BU5D_t2160* L_30 = V_10;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = ___callConvention;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		MethodInfo_t * L_34 = V_9;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention() */, L_34);
		int32_t L_36 = ___callConvention;
		int32_t L_37 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)L_36))) == ((int32_t)L_37)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		MethodBaseU5BU5D_t5422* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		MethodInfo_t * L_41 = V_9;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((MethodBase_t1543 **)(MethodBase_t1543 **)SZArrayLdElema(L_38, L_40)) = (MethodBase_t1543 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		MethodInfoU5BU5D_t2160* L_44 = V_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		TypeU5BU5D_t1221* L_45 = ___types;
		if (L_45)
		{
			goto IL_00dc;
		}
	}
	{
		MethodBaseU5BU5D_t5422* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		MethodBase_t1543 * L_47 = Binder_FindMostDerivedMatch_m21863(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		return ((MethodInfo_t *)Castclass(L_47, MethodInfo_t_il2cpp_TypeInfo_var));
	}

IL_00dc:
	{
		Binder_t2971 * L_48 = ___binder;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Binder_t2971_il2cpp_TypeInfo_var);
		Binder_t2971 * L_49 = Binder_get_DefaultBinder_m21860(NULL /*static, unused*/, /*hidden argument*/NULL);
		___binder = L_49;
	}

IL_00e8:
	{
		Binder_t2971 * L_50 = ___binder;
		int32_t L_51 = ___bindingAttr;
		MethodBaseU5BU5D_t5422* L_52 = V_3;
		TypeU5BU5D_t1221* L_53 = ___types;
		ParameterModifierU5BU5D_t2972* L_54 = ___modifiers;
		NullCheck(L_50);
		MethodBase_t1543 * L_55 = (MethodBase_t1543 *)VirtFuncInvoker4< MethodBase_t1543 *, int32_t, MethodBaseU5BU5D_t5422*, TypeU5BU5D_t1221*, ParameterModifierU5BU5D_t2972* >::Invoke(7 /* System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[]) */, L_50, L_51, L_52, L_53, L_54);
		return ((MethodInfo_t *)Castclass(L_55, MethodInfo_t_il2cpp_TypeInfo_var));
	}
}
// System.Reflection.PropertyInfo[] System.Reflection.Emit.TypeBuilder::GetProperties(System.Reflection.BindingFlags)
extern TypeInfo* PropertyInfoU5BU5D_t1473_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t713_il2cpp_TypeInfo_var;
extern "C" PropertyInfoU5BU5D_t1473* TypeBuilder_GetProperties_m22513 (TypeBuilder_t5052 * __this, int32_t ___bindingAttr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PropertyInfoU5BU5D_t1473_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9114);
		ArrayList_t713_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t713 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfo_t * V_3 = {0};
	PropertyInfo_t * V_4 = {0};
	PropertyBuilderU5BU5D_t5086* V_5 = {0};
	int32_t V_6 = 0;
	PropertyInfoU5BU5D_t1473* V_7 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_25);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		PropertyInfoU5BU5D_t1473* L_3 = (PropertyInfoU5BU5D_t1473*)VirtFuncInvoker1< PropertyInfoU5BU5D_t1473*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		PropertyBuilderU5BU5D_t5086* L_4 = (__this->___properties_16);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		return ((PropertyInfoU5BU5D_t1473*)SZArrayNew(PropertyInfoU5BU5D_t1473_il2cpp_TypeInfo_var, 0));
	}

IL_0024:
	{
		ArrayList_t713 * L_5 = (ArrayList_t713 *)il2cpp_codegen_object_new (ArrayList_t713_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4293(L_5, /*hidden argument*/NULL);
		V_0 = L_5;
		PropertyBuilderU5BU5D_t5086* L_6 = (__this->___properties_16);
		V_5 = L_6;
		V_6 = 0;
		goto IL_00ad;
	}

IL_003a:
	{
		PropertyBuilderU5BU5D_t5086* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_4 = (*(PropertyBuilder_t5082 **)(PropertyBuilder_t5082 **)SZArrayLdElema(L_7, L_9));
		V_1 = 0;
		PropertyInfo_t * L_10 = V_4;
		NullCheck(L_10);
		MethodInfo_t * L_11 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(20 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_10, 1);
		V_3 = L_11;
		MethodInfo_t * L_12 = V_3;
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		PropertyInfo_t * L_13 = V_4;
		NullCheck(L_13);
		MethodInfo_t * L_14 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_13, 1);
		V_3 = L_14;
	}

IL_0058:
	{
		MethodInfo_t * L_15 = V_3;
		if (L_15)
		{
			goto IL_005d;
		}
	}
	{
		goto IL_00a7;
	}

IL_005d:
	{
		MethodInfo_t * L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_16);
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0074;
		}
	}
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		V_1 = 1;
	}

IL_0072:
	{
		goto IL_007c;
	}

IL_0074:
	{
		int32_t L_20 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_20&(int32_t)((int32_t)32))))
		{
			goto IL_007c;
		}
	}
	{
		V_1 = 1;
	}

IL_007c:
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		goto IL_00a7;
	}

IL_0081:
	{
		V_1 = 0;
		int32_t L_22 = V_2;
		if (!((int32_t)((int32_t)L_22&(int32_t)((int32_t)16))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)8)))
		{
			goto IL_0090;
		}
	}
	{
		V_1 = 1;
	}

IL_0090:
	{
		goto IL_0099;
	}

IL_0092:
	{
		int32_t L_24 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_24&(int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		V_1 = 1;
	}

IL_0099:
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_009e;
		}
	}
	{
		goto IL_00a7;
	}

IL_009e:
	{
		ArrayList_t713 * L_26 = V_0;
		PropertyInfo_t * L_27 = V_4;
		NullCheck(L_26);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_26, L_27);
	}

IL_00a7:
	{
		int32_t L_28 = V_6;
		V_6 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00ad:
	{
		int32_t L_29 = V_6;
		PropertyBuilderU5BU5D_t5086* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		ArrayList_t713 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_31);
		V_7 = ((PropertyInfoU5BU5D_t1473*)SZArrayNew(PropertyInfoU5BU5D_t1473_il2cpp_TypeInfo_var, L_32));
		ArrayList_t713 * L_33 = V_0;
		PropertyInfoU5BU5D_t1473* L_34 = V_7;
		NullCheck(L_33);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_33, (Array_t *)(Array_t *)L_34);
		PropertyInfoU5BU5D_t1473* L_35 = V_7;
		return L_35;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m22514 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t2971 * ___binder, Type_t * ___returnType, TypeU5BU5D_t1221* ___types, ParameterModifierU5BU5D_t2972* ___modifiers, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = TypeBuilder_not_supported_m22528(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m22515 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Type_t * L_1 = (__this->___created_25);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Type::get_HasElementType() */, L_1);
		return L_2;
	}
}
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m22516 (TypeBuilder_t5052 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t2971 * ___binder, Object_t * ___target, ObjectU5BU5D_t697* ___args, ParameterModifierU5BU5D_t2972* ___modifiers, CultureInfo_t783 * ___culture, StringU5BU5D_t75* ___namedParameters, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t2971 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t697* L_5 = ___args;
		ParameterModifierU5BU5D_t2972* L_6 = ___modifiers;
		CultureInfo_t783 * L_7 = ___culture;
		StringU5BU5D_t75* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t2971 *, Object_t *, ObjectU5BU5D_t697*, ParameterModifierU5BU5D_t2972*, CultureInfo_t783 *, StringU5BU5D_t75* >::Invoke(80 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m22517 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m22518 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m22519 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m22520 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern const Il2CppType* ValueType_t843_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsValueTypeImpl_m22521 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ValueType_t843_0_0_0_var = il2cpp_codegen_type_from_index(1367);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B5_0 = 0;
	{
		ModuleBuilder_t5049 * L_0 = (__this->___pmodule_21);
		NullCheck(L_0);
		AssemblyBuilder_t5050 * L_1 = (L_0->___assemblyb_14);
		NullCheck(L_1);
		Type_t * L_2 = (L_1->___corlib_value_type_25);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_3 = Type_type_is_subtype_of_m19217(NULL /*static, unused*/, __this, L_2, 0, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(ValueType_t843_0_0_0_var), /*hidden argument*/NULL);
		bool L_5 = Type_type_is_subtype_of_m19217(NULL /*static, unused*/, __this, L_4, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		ModuleBuilder_t5049 * L_6 = (__this->___pmodule_21);
		NullCheck(L_6);
		AssemblyBuilder_t5050 * L_7 = (L_6->___assemblyb_14);
		NullCheck(L_7);
		Type_t * L_8 = (L_7->___corlib_value_type_25);
		if ((((Object_t*)(TypeBuilder_t5052 *)__this) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		ModuleBuilder_t5049 * L_9 = (__this->___pmodule_21);
		NullCheck(L_9);
		AssemblyBuilder_t5050 * L_10 = (L_9->___assemblyb_14);
		NullCheck(L_10);
		Type_t * L_11 = (L_10->___corlib_enum_type_26);
		G_B5_0 = ((((int32_t)((((Object_t*)(TypeBuilder_t5052 *)__this) == ((Object_t*)(Type_t *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeByRefType()
extern TypeInfo* ByRefType_t5057_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_MakeByRefType_m22522 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByRefType_t5057_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9090);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByRefType_t5057 * L_0 = (ByRefType_t5057 *)il2cpp_codegen_object_new (ByRefType_t5057_il2cpp_TypeInfo_var);
		ByRefType__ctor_m22211(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m22523 (TypeBuilder_t5052 * __this, TypeU5BU5D_t1221* ___typeArguments, const MethodInfo* method)
{
	{
		TypeU5BU5D_t1221* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m19256(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t4730  TypeBuilder_get_TypeHandle_m22524 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		TypeBuilder_check_created_m22530(__this, /*hidden argument*/NULL);
		Type_t * L_0 = (__this->___created_25);
		NullCheck(L_0);
		RuntimeTypeHandle_t4730  L_1 = (RuntimeTypeHandle_t4730 )VirtFuncInvoker0< RuntimeTypeHandle_t4730  >::Invoke(35 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t TypeBuilder_get_next_table_index_m22525 (TypeBuilder_t5052 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___pmodule_21);
		Object_t * L_1 = ___obj;
		int32_t L_2 = ___table;
		bool L_3 = ___inc;
		NullCheck(L_0);
		int32_t L_4 = ModuleBuilder_get_next_table_index_m22426(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m22526 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		ModuleBuilder_t5049 * L_0 = (__this->___pmodule_21);
		NullCheck(L_0);
		AssemblyBuilder_t5050 * L_1 = (L_0->___assemblyb_14);
		NullCheck(L_1);
		bool L_2 = AssemblyBuilder_get_IsCompilerContext_m22140(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m22527 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___created_25);
		return ((((int32_t)((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Exception_t57 * TypeBuilder_not_supported_m22528 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11477(L_0, (String_t*) &_stringLiteral5602, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder_check_not_created_m22529 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1447 * L_1 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_1, (String_t*) &_stringLiteral5871, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m22530 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t57 * L_1 = TypeBuilder_not_supported_m22528(__this, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_name(System.String,System.String)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" void TypeBuilder_check_name_m22531 (TypeBuilder_t5052 * __this, String_t* ___argName, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___argName;
		ArgumentNullException_t785 * L_2 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___name;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m410(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_5 = ___argName;
		ArgumentException_t726 * L_6 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_6, (String_t*) &_stringLiteral5872, L_5, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_001e:
	{
		String_t* L_7 = ___name;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m407(L_7, 0, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_9 = ___argName;
		ArgumentException_t726 * L_10 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3874(L_10, (String_t*) &_stringLiteral5873, L_9, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0033:
	{
		return;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m22532 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Reflection.Emit.TypeBuilder::get_FullName() */, __this);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m22533 (TypeBuilder_t5052 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsAssignableFrom_m19221(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m22534 (TypeBuilder_t5052 * __this, Type_t * ___c, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsSubclassOf_m19220(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool TypeBuilder_IsAssignableTo_m22535 (TypeBuilder_t5052 * __this, Type_t * ___c, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t1221* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___c;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(TypeBuilder_t5052 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_1 = ___c;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_3 = (__this->___parent_10);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_5 = ___c;
		Type_t * L_6 = (__this->___parent_10);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		TypeU5BU5D_t1221* L_8 = (__this->___interfaces_12);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		TypeU5BU5D_t1221* L_9 = (__this->___interfaces_12);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		TypeU5BU5D_t1221* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_10, L_12));
		Type_t * L_13 = ___c;
		Type_t * L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_13, L_14);
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t1221* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_19 = TypeBuilder_get_is_created_m22527(__this, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		Type_t * L_20 = (__this->___parent_10);
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_21 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m4218(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		return ((((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))? 1 : 0);
	}

IL_007c:
	{
		Type_t * L_23 = ___c;
		Type_t * L_24 = (__this->___parent_10);
		NullCheck(L_23);
		bool L_25 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_23, L_24);
		return L_25;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern TypeInfo* TypeU5BU5D_t1221_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t1221* TypeBuilder_GetGenericArguments_m22536 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	TypeU5BU5D_t1221* V_0 = {0};
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_24);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (TypeU5BU5D_t1221*)NULL;
	}

IL_000a:
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_1 = (__this->___generic_params_24);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t1221*)SZArrayNew(TypeU5BU5D_t1221_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		GenericTypeParameterBuilderU5BU5D_t5072* L_2 = (__this->___generic_params_24);
		TypeU5BU5D_t1221* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(9 /* System.Void System.Array::CopyTo(System.Array,System.Int32) */, L_2, (Array_t *)(Array_t *)L_3, 0);
		TypeU5BU5D_t1221* L_4 = V_0;
		return L_4;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m22537 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_24);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1447 * L_1 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_1, (String_t*) &_stringLiteral5874, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m22538 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_24);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t5072*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m22539 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	typedef bool (*TypeBuilder_get_IsGenericParameter_m22539_ftn) (TypeBuilder_t5052 *);
	static TypeBuilder_get_IsGenericParameter_m22539_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_get_IsGenericParameter_m22539_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m22540 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t5072* L_0 = (__this->___generic_params_24);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t5072*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m22541 (TypeBuilder_t5052 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(83 /* System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition() */, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttributeMethodDeclarations.h"


// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern TypeInfo* MarshalAsAttribute_t4734_il2cpp_TypeInfo_var;
extern "C" MarshalAsAttribute_t4734 * UnmanagedMarshal_ToMarshalAsAttribute_m22542 (UnmanagedMarshal_t5033 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalAsAttribute_t4734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9115);
		s_Il2CppMethodIntialized = true;
	}
	MarshalAsAttribute_t4734 * V_0 = {0};
	{
		int32_t L_0 = (__this->___t_1);
		MarshalAsAttribute_t4734 * L_1 = (MarshalAsAttribute_t4734 *)il2cpp_codegen_object_new (MarshalAsAttribute_t4734_il2cpp_TypeInfo_var);
		MarshalAsAttribute__ctor_m19280(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MarshalAsAttribute_t4734 * L_2 = V_0;
		int32_t L_3 = (__this->___tbase_2);
		NullCheck(L_2);
		L_2->___ArraySubType_1 = L_3;
		MarshalAsAttribute_t4734 * L_4 = V_0;
		String_t* L_5 = (__this->___mcookie_4);
		NullCheck(L_4);
		L_4->___MarshalCookie_2 = L_5;
		MarshalAsAttribute_t4734 * L_6 = V_0;
		String_t* L_7 = (__this->___marshaltype_5);
		NullCheck(L_6);
		L_6->___MarshalType_3 = L_7;
		MarshalAsAttribute_t4734 * L_8 = V_0;
		Type_t * L_9 = (__this->___marshaltyperef_6);
		NullCheck(L_8);
		L_8->___MarshalTypeRef_4 = L_9;
		int32_t L_10 = (__this->___count_0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		MarshalAsAttribute_t4734 * L_11 = V_0;
		NullCheck(L_11);
		L_11->___SizeConst_5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		MarshalAsAttribute_t4734 * L_12 = V_0;
		int32_t L_13 = (__this->___count_0);
		NullCheck(L_12);
		L_12->___SizeConst_5 = L_13;
	}

IL_005a:
	{
		int32_t L_14 = (__this->___param_num_7);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		MarshalAsAttribute_t4734 * L_15 = V_0;
		NullCheck(L_15);
		L_15->___SizeParamIndex_6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		MarshalAsAttribute_t4734 * L_16 = V_0;
		int32_t L_17 = (__this->___param_num_7);
		NullCheck(L_16);
		L_16->___SizeParamIndex_6 = (((int16_t)L_17));
	}

IL_0079:
	{
		MarshalAsAttribute_t4734 * L_18 = V_0;
		return L_18;
	}
}
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t785_il2cpp_TypeInfo_var;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m11582 (NeutralResourcesLanguageAttribute_t3288 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t785_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t785 * L_1 = (ArgumentNullException_t785 *)il2cpp_codegen_object_new (ArgumentNullException_t785_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4224(L_1, (String_t*) &_stringLiteral5875, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"



// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern TypeInfo* Version_t1402_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m12133 (SatelliteContractVersionAttribute_t3386 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1402_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2705);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t1402 * L_1 = (Version_t1402 *)il2cpp_codegen_object_new (Version_t1402_il2cpp_TypeInfo_var);
		Version__ctor_m7820(L_1, L_0, /*hidden argument*/NULL);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
extern "C" void CompilationRelaxationsAttribute__ctor_m8015 (CompilationRelaxationsAttribute_t2182 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern "C" void CompilationRelaxationsAttribute__ctor_m12136 (CompilationRelaxationsAttribute_t2182 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern "C" void DefaultDependencyAttribute__ctor_m15199 (DefaultDependencyAttribute_t3806 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttriMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.StringFreezingAttribute::.ctor()
extern "C" void StringFreezingAttribute__ctor_m15200 (StringFreezingAttribute_t3807 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern "C" void CriticalFinalizerObject__ctor_m22543 (CriticalFinalizerObject_t5091 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m22544 (CriticalFinalizerObject_t5091 * __this, const MethodInfo* method)
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
		IL2CPP_LEAVE(0x9, FINALLY_0002);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0002;
	}

FINALLY_0002:
	{ // begin finally (depth: 1)
		Object_Finalize_m490(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(2)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(2)
	{
		IL2CPP_JUMP_TBL(0x9, IL_0009)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0009:
	{
		return;
	}
}
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_CerMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_ConsistencyMethodDeclarations.h"



// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern "C" void ReliabilityContractAttribute__ctor_m22545 (ReliabilityContractAttribute_t5094 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___consistencyGuarantee;
		__this->___consistency_0 = L_0;
		int32_t L_1 = ___cer;
		__this->___cer_1 = L_1;
		return;
	}
}
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArguments.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Hosting.ActivationArguments
#include "mscorlib_System_Runtime_Hosting_ActivationArgumentsMethodDeclarations.h"



// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConventionMethodDeclarations.h"



// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSetMethodDeclarations.h"



// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttribMethodDeclarations.h"

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// System.Void System.Runtime.InteropServices.ClassInterfaceAttribute::.ctor(System.Runtime.InteropServices.ClassInterfaceType)
extern "C" void ClassInterfaceAttribute__ctor_m22546 (ClassInterfaceAttribute_t5097 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___classInterfaceType;
		__this->___ciType_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.ComCompatibleVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_ComCompatibleVersion.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComCompatibleVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_ComCompatibleVersionMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.ComCompatibleVersionAttribute::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void ComCompatibleVersionAttribute__ctor_m12135 (ComCompatibleVersionAttribute_t3388 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		int32_t L_2 = ___build;
		__this->___build_2 = L_2;
		int32_t L_3 = ___revision;
		__this->___revision_3 = L_3;
		return;
	}
}
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern "C" void ComDefaultInterfaceAttribute__ctor_m22547 (ComDefaultInterfaceAttribute_t5099 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___defaultInterface;
		__this->____type_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceTypeMethodDeclarations.h"



// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.DispIdAttribute::.ctor(System.Int32)
extern "C" void DispIdAttribute__ctor_m22548 (DispIdAttribute_t5101 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___dispId;
		__this->___id_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.ExternalException
#include "mscorlib_System_Runtime_InteropServices_ExternalException.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ExternalException
#include "mscorlib_System_Runtime_InteropServices_ExternalExceptionMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.ExternalException::.ctor()
extern "C" void ExternalException__ctor_m22549 (ExternalException_t4273 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m19300(NULL /*static, unused*/, (String_t*) &_stringLiteral5876, /*hidden argument*/NULL);
		SystemException__ctor_m12121(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10348(__this, ((int32_t)-2147467259), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
extern "C" void ExternalException__ctor_m18080 (ExternalException_t4273 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m12121(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10348(__this, ((int32_t)-2147467259), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExternalException__ctor_m18081 (ExternalException_t4273 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		StreamingContext_t2938  L_1 = ___context;
		SystemException__ctor_m14772(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandleMethodDeclarations.h"

// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.IntPtr)
extern "C" void GCHandle__ctor_m22550 (GCHandle_t4298 * __this, IntPtr_t ___h, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___h;
		int32_t L_1 = IntPtr_op_Explicit_m10350(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object)
extern "C" void GCHandle__ctor_m22551 (GCHandle_t4298 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		GCHandle__ctor_m22552(__this, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m22552 (GCHandle_t4298 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		int32_t L_0 = ___type;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___type;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_000d;
		}
	}

IL_0008:
	{
		___type = 2;
	}

IL_000d:
	{
		Object_t * L_2 = ___value;
		int32_t L_3 = ___type;
		int32_t L_4 = GCHandle_GetTargetHandle_m22556(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m18092 (GCHandle_t4298 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern TypeInfo* InvalidOperationException_t1447_il2cpp_TypeInfo_var;
extern "C" Object_t * GCHandle_get_Target_m18095 (GCHandle_t4298 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2513);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m18092(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m19300(NULL /*static, unused*/, (String_t*) &_stringLiteral5877, /*hidden argument*/NULL);
		InvalidOperationException_t1447 * L_2 = (InvalidOperationException_t1447 *)il2cpp_codegen_object_new (InvalidOperationException_t1447_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7495(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m22555(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" GCHandle_t4298  GCHandle_Alloc_m18090 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		GCHandle_t4298  L_1 = {0};
		GCHandle__ctor_m22551(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t4298  GCHandle_Alloc_m22553 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t4298  L_2 = {0};
		GCHandle__ctor_m22552(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m18093 (GCHandle_t4298 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m22557(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)
extern "C" bool GCHandle_CheckCurrentDomain_m22554 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef bool (*GCHandle_CheckCurrentDomain_m22554_ftn) (int32_t);
	static GCHandle_CheckCurrentDomain_m22554_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_CheckCurrentDomain_m22554_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m22555 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef Object_t * (*GCHandle_GetTarget_m22555_ftn) (int32_t);
	static GCHandle_GetTarget_m22555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTarget_m22555_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m22556 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	typedef int32_t (*GCHandle_GetTargetHandle_m22556_ftn) (Object_t *, int32_t, int32_t);
	static GCHandle_GetTargetHandle_m22556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTargetHandle_m22556_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m22557 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef void (*GCHandle_FreeHandle_m22557_ftn) (int32_t);
	static GCHandle_FreeHandle_m22557_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_FreeHandle_m22557_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t4298_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m22558 (GCHandle_t4298 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t4298_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7738);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t4298  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, GCHandle_t4298_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_2 = (__this->___handle_0);
		Object_t * L_3 = ___o;
		V_0 = ((*(GCHandle_t4298 *)((GCHandle_t4298 *)UnBox (L_3, GCHandle_t4298_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C" int32_t GCHandle_GetHashCode_m22559 (GCHandle_t4298 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m10252(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C" GCHandle_t4298  GCHandle_FromIntPtr_m18094 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___value;
		GCHandle_t4298  L_1 = GCHandle_op_Explicit_m22561(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_ToIntPtr_m18091 (Object_t * __this /* static, unused */, GCHandle_t4298  ___value, const MethodInfo* method)
{
	{
		GCHandle_t4298  L_0 = ___value;
		IntPtr_t L_1 = GCHandle_op_Explicit_m22560(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_op_Explicit_m22560 (Object_t * __this /* static, unused */, GCHandle_t4298  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___value)->___handle_0);
		IntPtr_t L_1 = IntPtr_op_Explicit_m18132(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t726_il2cpp_TypeInfo_var;
extern "C" GCHandle_t4298  GCHandle_op_Explicit_m22561 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ArgumentException_t726_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___value;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m10351(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t726 * L_3 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_3, (String_t*) &_stringLiteral5878, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___value;
		int32_t L_5 = IntPtr_op_Explicit_m10350(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_6 = GCHandle_CheckCurrentDomain_m22554(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_t726 * L_7 = (ArgumentException_t726 *)il2cpp_codegen_object_new (ArgumentException_t726_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4229(L_7, (String_t*) &_stringLiteral5879, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		IntPtr_t L_8 = ___value;
		GCHandle_t4298  L_9 = {0};
		GCHandle__ctor_m22550(&L_9, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleTypeMethodDeclarations.h"



// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribuMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.InterfaceTypeAttribute::.ctor(System.Runtime.InteropServices.ComInterfaceType)
extern "C" void InterfaceTypeAttribute__ctor_m22562 (InterfaceTypeAttribute_t5103 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___interfaceType;
		__this->___intType_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_Marshal.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.Marshal
#include "mscorlib_System_Runtime_InteropServices_MarshalMethodDeclarations.h"

// System.OperatingSystem
#include "mscorlib_System_OperatingSystem.h"
// System.PlatformID
#include "mscorlib_System_PlatformID.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern TypeInfo* Marshal_t4571_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m22563 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7719);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t4571_StaticFields*)Marshal_t4571_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t4881 * L_0 = Environment_get_OSVersion_m20415(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m20685(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		((Marshal_t4571_StaticFields*)Marshal_t4571_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_copy_to_unmanaged_m22564 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method)
{
	typedef void (*Marshal_copy_to_unmanaged_m22564_ftn) (Array_t *, int32_t, IntPtr_t, int32_t);
	static Marshal_copy_to_unmanaged_m22564_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_to_unmanaged_m22564_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m22565 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	typedef void (*Marshal_copy_from_unmanaged_m22565_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	static Marshal_copy_from_unmanaged_m22565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_from_unmanaged_m22565_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern TypeInfo* Marshal_t4571_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m18096 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7719);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = ___source;
		int32_t L_1 = ___startIndex;
		IntPtr_t L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4571_il2cpp_TypeInfo_var);
		Marshal_copy_to_unmanaged_m22564(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t4571_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m18099 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t66* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t66* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4571_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m22565(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t4571_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m22566 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t712* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4571_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7719);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t712* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4571_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m22565(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" int32_t Marshal_GetLastWin32Error_m18079 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Marshal_GetLastWin32Error_m18079_ftn) ();
	static Marshal_GetLastWin32Error_m18079_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_GetLastWin32Error_m18079_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::GetLastWin32Error()");
	return _il2cpp_icall_func();
}
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExce.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.MarshalDirectiveException
#include "mscorlib_System_Runtime_InteropServices_MarshalDirectiveExceMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor()
extern "C" void MarshalDirectiveException__ctor_m22567 (MarshalDirectiveException_t5104 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m19300(NULL /*static, unused*/, (String_t*) &_stringLiteral5880, /*hidden argument*/NULL);
		SystemException__ctor_m12121(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10348(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MarshalDirectiveException__ctor_m22568 (MarshalDirectiveException_t5104 * __this, SerializationInfo_t2937 * ___info, StreamingContext_t2938  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2937 * L_0 = ___info;
		StreamingContext_t2938  L_1 = ___context;
		SystemException__ctor_m14772(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern "C" void PreserveSigAttribute__ctor_m22569 (PreserveSigAttribute_t5105 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4221(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
