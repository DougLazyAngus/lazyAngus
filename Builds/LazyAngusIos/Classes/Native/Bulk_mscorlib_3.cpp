#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
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
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.String
#include "mscorlib_System_String.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m18127 (TargetInvocationException_t4556 * __this, Exception_t57 * ___inner, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = ___inner;
		Exception__ctor_m7495(__this, (String_t*) &_stringLiteral4203, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetInvocationException__ctor_m18128 (TargetInvocationException_t4556 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___sc, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___sc;
		Exception__ctor_m10180(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
#ifndef _MSC_VER
#else
#endif
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"

// Locale
#include "mscorlib_LocaleMethodDeclarations.h"


// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m18129 (TargetParameterCountException_t4557 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m16293(NULL /*static, unused*/, (String_t*) &_stringLiteral4204, /*hidden argument*/NULL);
		Exception__ctor_m416(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m18130 (TargetParameterCountException_t4557 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m416(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetParameterCountException__ctor_m18131 (TargetParameterCountException_t4557 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		Exception__ctor_m10180(__this, L_0, L_1, /*hidden argument*/NULL);
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



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m11500 (NeutralResourcesLanguageAttribute_t3303 * __this, String_t* ___cultureName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*) &_stringLiteral4205, /*hidden argument*/NULL);
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

// System.Version
#include "mscorlib_System_Version.h"
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern TypeInfo* Version_t1384_il2cpp_TypeInfo_var;
extern "C" void SatelliteContractVersionAttribute__ctor_m11502 (SatelliteContractVersionAttribute_t3305 * __this, String_t* ___version, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Version_t1384_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2663);
		s_Il2CppMethodIntialized = true;
	}
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version;
		Version_t1384 * L_1 = (Version_t1384 *)il2cpp_codegen_object_new (Version_t1384_il2cpp_TypeInfo_var);
		Version__ctor_m7650(L_1, L_0, /*hidden argument*/NULL);
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

// System.Int32
#include "mscorlib_System_Int32.h"


// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
extern "C" void CompilationRelaxationsAttribute__ctor_m7845 (CompilationRelaxationsAttribute_t2164 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern "C" void CompilationRelaxationsAttribute__ctor_m11505 (CompilationRelaxationsAttribute_t2164 * __this, int32_t ___relaxations, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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
extern "C" void DefaultDependencyAttribute__ctor_m18132 (DefaultDependencyAttribute_t4560 * __this, int32_t ___loadHintArgument, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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
extern "C" void StringFreezingAttribute__ctor_m18133 (StringFreezingAttribute_t4563 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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



// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::.ctor()
extern "C" void CriticalFinalizerObject__ctor_m18134 (CriticalFinalizerObject_t4566 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.ConstrainedExecution.CriticalFinalizerObject::Finalize()
extern "C" void CriticalFinalizerObject_Finalize_m18135 (CriticalFinalizerObject_t4566 * __this, const MethodInfo* method)
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
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityContMethodDeclarations.h"



// System.Void System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::.ctor(System.Runtime.ConstrainedExecution.Consistency,System.Runtime.ConstrainedExecution.Cer)
extern "C" void ReliabilityContractAttribute__ctor_m18136 (ReliabilityContractAttribute_t4567 * __this, int32_t ___consistencyGuarantee, int32_t ___cer, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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
extern "C" void ClassInterfaceAttribute__ctor_m18137 (ClassInterfaceAttribute_t4571 * __this, int32_t ___classInterfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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



// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceAMethodDeclarations.h"

// System.Type
#include "mscorlib_System_Type.h"


// System.Void System.Runtime.InteropServices.ComDefaultInterfaceAttribute::.ctor(System.Type)
extern "C" void ComDefaultInterfaceAttribute__ctor_m18138 (ComDefaultInterfaceAttribute_t4573 * __this, Type_t * ___defaultInterface, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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
extern "C" void DispIdAttribute__ctor_m18139 (DispIdAttribute_t4575 * __this, int32_t ___dispId, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.ExternalException::.ctor()
extern "C" void ExternalException__ctor_m18140 (ExternalException_t3973 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m16293(NULL /*static, unused*/, (String_t*) &_stringLiteral4206, /*hidden argument*/NULL);
		SystemException__ctor_m11462(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10179(__this, ((int32_t)-2147467259), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
extern "C" void ExternalException__ctor_m15076 (ExternalException_t3973 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11462(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10179(__this, ((int32_t)-2147467259), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExternalException__ctor_m15077 (ExternalException_t3973 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		SystemException__ctor_m11458(__this, L_0, L_1, /*hidden argument*/NULL);
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

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.IntPtr)
extern "C" void GCHandle__ctor_m18141 (GCHandle_t3979 * __this, IntPtr_t ___h, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___h;
		int32_t L_1 = IntPtr_op_Explicit_m10181(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object)
extern "C" void GCHandle__ctor_m18142 (GCHandle_t3979 * __this, Object_t * ___obj, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		GCHandle__ctor_m18143(__this, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" void GCHandle__ctor_m18143 (GCHandle_t3979 * __this, Object_t * ___value, int32_t ___type, const MethodInfo* method)
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
		int32_t L_4 = GCHandle_GetTargetHandle_m18147(NULL /*static, unused*/, L_2, 0, L_3, /*hidden argument*/NULL);
		__this->___handle_0 = L_4;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C" bool GCHandle_get_IsAllocated_m15080 (GCHandle_t3979 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern "C" Object_t * GCHandle_get_Target_m15083 (GCHandle_t3979 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = GCHandle_get_IsAllocated_m15080(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m16293(NULL /*static, unused*/, (String_t*) &_stringLiteral4207, /*hidden argument*/NULL);
		InvalidOperationException_t1429 * L_2 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7325(L_2, L_1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		int32_t L_3 = (__this->___handle_0);
		Object_t * L_4 = GCHandle_GetTarget_m18146(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
extern "C" GCHandle_t3979  GCHandle_Alloc_m15078 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		GCHandle_t3979  L_1 = {0};
		GCHandle__ctor_m18142(&L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C" GCHandle_t3979  GCHandle_Alloc_m18144 (Object_t * __this /* static, unused */, Object_t * ___value, int32_t ___type, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		int32_t L_1 = ___type;
		GCHandle_t3979  L_2 = {0};
		GCHandle__ctor_m18143(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C" void GCHandle_Free_m15081 (GCHandle_t3979 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___handle_0);
		GCHandle_FreeHandle_m18148(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->___handle_0 = 0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)
extern "C" bool GCHandle_CheckCurrentDomain_m18145 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef bool (*GCHandle_CheckCurrentDomain_m18145_ftn) (int32_t);
	static GCHandle_CheckCurrentDomain_m18145_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_CheckCurrentDomain_m18145_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::CheckCurrentDomain(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C" Object_t * GCHandle_GetTarget_m18146 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef Object_t * (*GCHandle_GetTarget_m18146_ftn) (int32_t);
	static GCHandle_GetTarget_m18146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTarget_m18146_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)");
	return _il2cpp_icall_func(___handle);
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C" int32_t GCHandle_GetTargetHandle_m18147 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___handle, int32_t ___type, const MethodInfo* method)
{
	typedef int32_t (*GCHandle_GetTargetHandle_m18147_ftn) (Object_t *, int32_t, int32_t);
	static GCHandle_GetTargetHandle_m18147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_GetTargetHandle_m18147_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)");
	return _il2cpp_icall_func(___obj, ___handle, ___type);
}
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C" void GCHandle_FreeHandle_m18148 (Object_t * __this /* static, unused */, int32_t ___handle, const MethodInfo* method)
{
	typedef void (*GCHandle_FreeHandle_m18148_ftn) (int32_t);
	static GCHandle_FreeHandle_m18148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GCHandle_FreeHandle_m18148_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)");
	_il2cpp_icall_func(___handle);
}
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern TypeInfo* GCHandle_t3979_il2cpp_TypeInfo_var;
extern "C" bool GCHandle_Equals_m18149 (GCHandle_t3979 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GCHandle_t3979_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7020);
		s_Il2CppMethodIntialized = true;
	}
	GCHandle_t3979  V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_1 = ___o;
		if (((Object_t *)IsInst(L_1, GCHandle_t3979_il2cpp_TypeInfo_var)))
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
		V_0 = ((*(GCHandle_t3979 *)((GCHandle_t3979 *)UnBox (L_3, GCHandle_t3979_il2cpp_TypeInfo_var))));
		int32_t L_4 = ((&V_0)->___handle_0);
		return ((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C" int32_t GCHandle_GetHashCode_m18150 (GCHandle_t3979 * __this, const MethodInfo* method)
{
	{
		int32_t* L_0 = &(__this->___handle_0);
		int32_t L_1 = Int32_GetHashCode_m10083(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
extern "C" GCHandle_t3979  GCHandle_FromIntPtr_m15082 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___value;
		GCHandle_t3979  L_1 = GCHandle_op_Explicit_m18152(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_ToIntPtr_m15079 (Object_t * __this /* static, unused */, GCHandle_t3979  ___value, const MethodInfo* method)
{
	{
		GCHandle_t3979  L_0 = ___value;
		IntPtr_t L_1 = GCHandle_op_Explicit_m18151(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
extern "C" IntPtr_t GCHandle_op_Explicit_m18151 (Object_t * __this /* static, unused */, GCHandle_t3979  ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ((&___value)->___handle_0);
		IntPtr_t L_1 = IntPtr_op_Explicit_m15091(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" GCHandle_t3979  GCHandle_op_Explicit_m18152 (Object_t * __this /* static, unused */, IntPtr_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___value;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m10182(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t711 * L_3 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_3, (String_t*) &_stringLiteral4208, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___value;
		int32_t L_5 = IntPtr_op_Explicit_m10181(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_6 = GCHandle_CheckCurrentDomain_m18145(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_t711 * L_7 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_7, (String_t*) &_stringLiteral4209, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0030:
	{
		IntPtr_t L_8 = ___value;
		GCHandle_t3979  L_9 = {0};
		GCHandle__ctor_m18141(&L_9, L_8, /*hidden argument*/NULL);
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
extern "C" void InterfaceTypeAttribute__ctor_m18153 (InterfaceTypeAttribute_t4577 * __this, int32_t ___interfaceType, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
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
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.OperatingSystem
#include "mscorlib_System_OperatingSystemMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern TypeInfo* Marshal_t4193_il2cpp_TypeInfo_var;
extern "C" void Marshal__cctor_m18154 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7018);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		((Marshal_t4193_StaticFields*)Marshal_t4193_il2cpp_TypeInfo_var->static_fields)->___SystemMaxDBCSCharSize_0 = 2;
		OperatingSystem_t4809 * L_0 = Environment_get_OSVersion_m19740(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = OperatingSystem_get_Platform_m20002(L_0, /*hidden argument*/NULL);
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
		((Marshal_t4193_StaticFields*)Marshal_t4193_il2cpp_TypeInfo_var->static_fields)->___SystemDefaultCharSize_1 = G_B3_0;
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_copy_to_unmanaged_m18155 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method)
{
	typedef void (*Marshal_copy_to_unmanaged_m18155_ftn) (Array_t *, int32_t, IntPtr_t, int32_t);
	static Marshal_copy_to_unmanaged_m18155_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_to_unmanaged_m18155_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m18156 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, const MethodInfo* method)
{
	typedef void (*Marshal_copy_from_unmanaged_m18156_ftn) (IntPtr_t, int32_t, Array_t *, int32_t);
	static Marshal_copy_from_unmanaged_m18156_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_copy_from_unmanaged_m18156_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)");
	_il2cpp_icall_func(___source, ___startIndex, ___destination, ___length);
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern TypeInfo* Marshal_t4193_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m15084 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7018);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t66* L_0 = ___source;
		int32_t L_1 = ___startIndex;
		IntPtr_t L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4193_il2cpp_TypeInfo_var);
		Marshal_copy_to_unmanaged_m18155(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t4193_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m15087 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t66* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7018);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		ByteU5BU5D_t66* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4193_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m18156(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern TypeInfo* Marshal_t4193_il2cpp_TypeInfo_var;
extern "C" void Marshal_Copy_m18157 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t697* ___destination, int32_t ___startIndex, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Marshal_t4193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7018);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = ___source;
		int32_t L_1 = ___startIndex;
		CharU5BU5D_t697* L_2 = ___destination;
		int32_t L_3 = ___length;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t4193_il2cpp_TypeInfo_var);
		Marshal_copy_from_unmanaged_m18156(NULL /*static, unused*/, L_0, L_1, (Array_t *)(Array_t *)L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C" int32_t Marshal_GetLastWin32Error_m15075 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (*Marshal_GetLastWin32Error_m15075_ftn) ();
	static Marshal_GetLastWin32Error_m15075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Marshal_GetLastWin32Error_m15075_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.InteropServices.Marshal::GetLastWin32Error()");
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
extern "C" void MarshalDirectiveException__ctor_m18158 (MarshalDirectiveException_t4578 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m16293(NULL /*static, unused*/, (String_t*) &_stringLiteral4210, /*hidden argument*/NULL);
		SystemException__ctor_m11462(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m10179(__this, ((int32_t)-2146233035), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.MarshalDirectiveException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MarshalDirectiveException__ctor_m18159 (MarshalDirectiveException_t4578 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		SystemException__ctor_m11458(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.PreserveSigAttribute::.ctor()
extern "C" void PreserveSigAttribute__ctor_m18160 (PreserveSigAttribute_t4579 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m18161 (SafeHandle_t4362 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m18134(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m18162 (SafeHandle_t4362 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3296 * L_3 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11823(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0019:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_0061;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_0061;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
		__this->___refcount_2 = (-1);
	}

IL_0061:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m18163 (SafeHandle_t4362 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3296 * L_3 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11823(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Type_t * L_7 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t3296 * L_9 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11823(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t* L_10 = &(__this->___refcount_2);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_001a;
		}
	}
	{
		bool* L_15 = ___success;
		*((int8_t*)(L_15)) = (int8_t)1;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m18164 (SafeHandle_t4362 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3296 * L_3 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11823(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t3296_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m18165 (SafeHandle_t4362 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3296_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5488);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->___refcount_2);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_1 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3296 * L_3 = (ObjectDisposedException_t3296 *)il2cpp_codegen_object_new (ObjectDisposedException_t3296_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11823(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		int32_t L_4 = (__this->___refcount_2);
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = ((int32_t)((int32_t)L_5-(int32_t)1));
		int32_t* L_6 = &(__this->___refcount_2);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = Interlocked_CompareExchange_m396(NULL /*static, unused*/, L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_11 = V_0;
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		bool L_12 = (__this->___owns_handle_3);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		IntPtr_t L_14 = (__this->___invalid_handle_value_1);
		__this->___handle_0 = L_14;
	}

IL_005b:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C" void SafeHandle_Dispose_m18166 (SafeHandle_t4362 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m13135(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m18167 (SafeHandle_t4362 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SafeHandle_Close_m18162(__this, /*hidden argument*/NULL);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m18168 (SafeHandle_t4362 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m18169 (SafeHandle_t4362 * __this, const MethodInfo* method)
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
		{
			bool L_0 = (__this->___owns_handle_3);
			if (!L_0)
			{
				goto IL_0023;
			}
		}

IL_0008:
		{
			bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, __this);
			if (L_1)
			{
				goto IL_0023;
			}
		}

IL_0010:
		{
			VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
			IntPtr_t L_2 = (__this->___invalid_handle_value_1);
			__this->___handle_0 = L_2;
		}

IL_0023:
		{
			IL2CPP_LEAVE(0x2C, FINALLY_0025);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0025;
	}

FINALLY_0025:
	{ // begin finally (depth: 1)
		CriticalFinalizerObject_Finalize_m18135(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(37)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(37)
	{
		IL2CPP_JUMP_TBL(0x2C, IL_002c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_002c:
	{
		return;
	}
}
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAtMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern "C" void TypeLibImportClassAttribute__ctor_m18170 (TypeLibImportClassAttribute_t4580 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___importClass;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_0);
		__this->____importClass_0 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttribMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.TypeLibVersionAttribute::.ctor(System.Int32,System.Int32)
extern "C" void TypeLibVersionAttribute__ctor_m18171 (TypeLibVersionAttribute_t4581 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major;
		__this->___major_0 = L_0;
		int32_t L_1 = ___minor;
		__this->___minor_1 = L_1;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
#include "mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPoi.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
#include "mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPoiMethodDeclarations.h"



// System.Void System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::.ctor(System.Runtime.InteropServices.CallingConvention)
extern "C" void UnmanagedFunctionPointerAttribute__ctor_m15360 (UnmanagedFunctionPointerAttribute_t4220 * __this, int32_t ___callingConvention, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___callingConvention;
		__this->___call_conv_0 = L_0;
		return;
	}
}
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedTypeMethodDeclarations.h"



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern TypeInfo* ActivationServices_t4584_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t4586_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m18172 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t4584_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8081);
		ConstructionLevelActivator_t4586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8082);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t4584_StaticFields*)ActivationServices_t4584_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t4586 * L_1 = (ConstructionLevelActivator_t4586 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t4586_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m18177(L_1, /*hidden argument*/NULL);
		((ActivationServices_t4584_StaticFields*)ActivationServices_t4584_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0011:
	{
		Object_t * L_2 = ((ActivationServices_t4584_StaticFields*)ActivationServices_t4584_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern TypeInfo* IContextAttribute_t4889_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t4589_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m18173 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8083);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		UrlAttribute_t4589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8085);
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t682* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t4629 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t682* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		ObjectU5BU5D_t682* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t4889_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t4638 * L_5 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_5, (String_t*) &_stringLiteral4211, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t4589 *)IsInst(L_6, UrlAttribute_t4589_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t4589 *)Castclass(L_7, UrlAttribute_t4589_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m18179(((UrlAttribute_t4589 *)Castclass(L_7, UrlAttribute_t4589_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0033:
	{
		int32_t L_9 = V_3;
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_3;
		ObjectU5BU5D_t682* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)(((Array_t *)L_11)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		Type_t * L_13 = ___type;
		String_t* L_14 = V_0;
		ObjectU5BU5D_t682* L_15 = ___activationAttributes;
		Object_t * L_16 = RemotingServices_CreateClientProxy_m10415(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0049:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t4629 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m18408(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t4629 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		ActivatedClientTypeEntry_t4629 * L_20 = V_4;
		ObjectU5BU5D_t682* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m18422(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		return L_22;
	}

IL_005e:
	{
		Type_t * L_23 = ___type;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_23);
		if (!L_24)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_25 = ___type;
		ObjectU5BU5D_t682* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m18423(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern TypeInfo* ConstructionCall_t4606_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t4585_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t4587_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t4889_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t4606 * ActivationServices_CreateConstructionCall_m18174 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t4606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8088);
		AppDomainLevelActivator_t4585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8089);
		ContextLevelActivator_t4587_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8090);
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IContextAttribute_t4889_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8083);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t4606 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t698 * V_2 = {0};
	bool V_3 = false;
	Context_t4597 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t682* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t682* V_9 = {0};
	int32_t V_10 = 0;
	Object_t * V_11 = {0};
	Object_t * V_12 = {0};
	Object_t * V_13 = {0};
	Object_t * V_14 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B19_0 = 0;
	{
		Type_t * L_0 = ___type;
		ConstructionCall_t4606 * L_1 = (ConstructionCall_t4606 *)il2cpp_codegen_object_new (ConstructionCall_t4606_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m18240(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_2);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		ConstructionCall_t4606 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m18172(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t4585 * L_7 = (AppDomainLevelActivator_t4585 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t4585_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m18176(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t4606 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m18243(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t4606 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m18172(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t4587 * L_12 = (ContextLevelActivator_t4587 *)il2cpp_codegen_object_new (ContextLevelActivator_t4587_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m18178(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t698 * L_13 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t682* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t698 * L_15 = V_2;
		ObjectU5BU5D_t682* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_0046:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m456(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Context_t4597 * L_20 = Thread_get_CurrentContext_m19265(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ArrayList_t698 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
		V_6 = L_23;
	}

IL_0064:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0084;
		}

IL_0066:
		{
			Object_t * L_24 = V_6;
			NullCheck(L_24);
			Object_t * L_25 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_24);
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t4889_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t4597 * L_27 = V_4;
			ConstructionCall_t4606 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t4597 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t4889_il2cpp_TypeInfo_var, L_26, L_27, L_28);
			if (L_29)
			{
				goto IL_0084;
			}
		}

IL_0080:
		{
			V_3 = 0;
			goto IL_008d;
		}

IL_0084:
		{
			Object_t * L_30 = V_6;
			NullCheck(L_30);
			bool L_31 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_0066;
			}
		}

IL_008d:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_008f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008f;
	}

FINALLY_008f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_32 = V_6;
			V_13 = ((Object_t *)IsInst(L_32, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_33 = V_13;
			if (L_33)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(143)
		}

IL_009d:
		{
			Object_t * L_34 = V_13;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(143)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(143)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00a5:
	{
		Type_t * L_35 = ___type;
		NullCheck(L_35);
		ObjectU5BU5D_t682* L_36 = (ObjectU5BU5D_t682*)VirtFuncInvoker1< ObjectU5BU5D_t682*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t682* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		ObjectU5BU5D_t682* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t4889_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}
	{
		bool L_42 = V_3;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		Object_t * L_43 = V_8;
		Context_t4597 * L_44 = V_4;
		ConstructionCall_t4606 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t4889_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t4597 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t4889_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t4889_il2cpp_TypeInfo_var)), L_44, L_45);
		G_B19_0 = ((int32_t)(L_46));
		goto IL_00dc;
	}

IL_00db:
	{
		G_B19_0 = 0;
	}

IL_00dc:
	{
		V_3 = G_B19_0;
		ArrayList_t698 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t682* L_51 = V_9;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)(((Array_t *)L_51)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0144;
		}
	}
	{
		ConstructionCall_t4606 * L_53 = V_0;
		ArrayList_t698 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t682* L_55 = (ObjectU5BU5D_t682*)VirtFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m18249(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t698 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
		V_12 = L_57;
	}

IL_010b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0123;
		}

IL_010d:
		{
			Object_t * L_58 = V_12;
			NullCheck(L_58);
			Object_t * L_59 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_58);
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t4889_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t4606 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t4889_il2cpp_TypeInfo_var, L_60, L_61);
		}

IL_0123:
		{
			Object_t * L_62 = V_12;
			NullCheck(L_62);
			bool L_63 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_62);
			if (L_63)
			{
				goto IL_010d;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x144, FINALLY_012e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_012e;
	}

FINALLY_012e:
	{ // begin finally (depth: 1)
		{
			Object_t * L_64 = V_12;
			V_14 = ((Object_t *)IsInst(L_64, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_65 = V_14;
			if (L_65)
			{
				goto IL_013c;
			}
		}

IL_013b:
		{
			IL2CPP_END_FINALLY(302)
		}

IL_013c:
		{
			Object_t * L_66 = V_14;
			NullCheck(L_66);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_66);
			IL2CPP_END_FINALLY(302)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(302)
	{
		IL2CPP_JUMP_TBL(0x144, IL_0144)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0144:
	{
		String_t* L_67 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Inequality_m415(NULL /*static, unused*/, L_67, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_70 = ___activationUrl;
		Object_t * L_71 = V_1;
		AppDomainLevelActivator_t4585 * L_72 = (AppDomainLevelActivator_t4585 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t4585_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m18176(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_0159:
	{
		ConstructionCall_t4606 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t4606 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m18243(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t4606 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m18175 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m18175_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m18175_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m18175_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m18176 (AppDomainLevelActivator_t4585 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___activationUrl;
		__this->____activationUrl_0 = L_0;
		Object_t * L_1 = ___next;
		__this->____next_1 = L_1;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ConstructionLevelActivator::.ctor()
extern "C" void ConstructionLevelActivator__ctor_m18177 (ConstructionLevelActivator_t4586 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.ContextLevelActivator::.ctor(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ContextLevelActivator__ctor_m18178 (ContextLevelActivator_t4587 * __this, Object_t * ___next, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___next;
		__this->___m_NextActivator_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.RemoteActivator
#include "mscorlib_System_Runtime_Remoting_Activation_RemoteActivatorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m18179 (UrlAttribute_t4589 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern TypeInfo* UrlAttribute_t4589_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m18180 (UrlAttribute_t4589 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t4589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8085);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t4589 *)IsInst(L_0, UrlAttribute_t4589_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___o;
		NullCheck(((UrlAttribute_t4589 *)Castclass(L_1, UrlAttribute_t4589_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m18179(((UrlAttribute_t4589 *)Castclass(L_1, UrlAttribute_t4589_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m18181 (UrlAttribute_t4589 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m18182 (UrlAttribute_t4589 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool UrlAttribute_IsContextOK_m18183 (UrlAttribute_t4589 * __this, Context_t4597 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m18184 (ChannelInfo_t4591 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t682* L_0 = ChannelServices_GetCurrentChannelInfo_m18189(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t682* ChannelInfo_get_ChannelData_m18185 (ChannelInfo_t4591 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (__this->___channelData_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanne.h"
// System.Runtime.Remoting.Contexts.CrossContextChannel
#include "mscorlib_System_Runtime_Remoting_Contexts_CrossContextChanneMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t4592_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m18186 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		CrossContextChannel_t4592_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8092);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_0, /*hidden argument*/NULL);
		((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t698 * L_1 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_1, /*hidden argument*/NULL);
		((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t4592 * L_2 = (CrossContextChannel_t4592 *)il2cpp_codegen_object_new (CrossContextChannel_t4592_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m18212(L_2, /*hidden argument*/NULL);
		((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral4212;
		StringU5BU5D_t75* L_3 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4213);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral4213;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4214);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral4214;
		((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m18187 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m18188(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t4890_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t4879_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t4891_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m18188 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ISecurableChannel_t4890_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8093);
		IChannel_t4879_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8094);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		IChannelReceiver_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8095);
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___chnl;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*) &_stringLiteral4215, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		bool L_2 = ___ensureSecurity;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		Object_t * L_3 = ___chnl;
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t4890_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t4879_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m4110(NULL /*static, unused*/, (String_t*) &_stringLiteral4216, L_6, /*hidden argument*/NULL);
		RemotingException_t4638 * L_8 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t4890_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		ArrayList_t698 * L_10 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			V_2 = (-1);
			V_3 = 0;
			goto IL_00bc;
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_13 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(20 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t4879_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t4879_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t4879_il2cpp_TypeInfo_var, L_18);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m456(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00a3;
			}
		}

IL_0075:
		{
			Object_t * L_21 = ___chnl;
			NullCheck(L_21);
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t4879_il2cpp_TypeInfo_var, L_21);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_23 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
			bool L_24 = String_op_Inequality_m415(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
			if (!L_24)
			{
				goto IL_00a3;
			}
		}

IL_0087:
		{
			Object_t * L_25 = V_4;
			NullCheck(L_25);
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t4879_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral4217, L_26, (String_t*) &_stringLiteral4218, /*hidden argument*/NULL);
			RemotingException_t4638 * L_28 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
			RemotingException__ctor_m18410(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t4879_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t4879_il2cpp_TypeInfo_var, L_31);
			if ((((int32_t)L_30) >= ((int32_t)L_32)))
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			int32_t L_33 = V_2;
			if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
			{
				goto IL_00b8;
			}
		}

IL_00b6:
		{
			int32_t L_34 = V_3;
			V_2 = L_34;
		}

IL_00b8:
		{
			int32_t L_35 = V_3;
			V_3 = ((int32_t)((int32_t)L_35+(int32_t)1));
		}

IL_00bc:
		{
			int32_t L_36 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_37 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
			if ((((int32_t)L_36) < ((int32_t)L_38)))
			{
				goto IL_004f;
			}
		}

IL_00c9:
		{
			int32_t L_39 = V_2;
			if ((((int32_t)L_39) == ((int32_t)(-1))))
			{
				goto IL_00db;
			}
		}

IL_00cd:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_40 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(35 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_43 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_00e7:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t4891_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m4060(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t686_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t4891_il2cpp_TypeInfo_var, L_52, NULL);
		}

IL_0112:
		{
			IL2CPP_LEAVE(0x11B, FINALLY_0114);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0114;
	}

FINALLY_0114:
	{ // begin finally (depth: 1)
		Object_t * L_53 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(276)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(276)
	{
		IL2CPP_JUMP_TBL(0x11B, IL_011b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_011b:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Channels.ChannelServices::GetCurrentChannelInfo()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t4891_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t682* ChannelServices_GetCurrentChannelInfo_m18189 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IChannelReceiver_t4891_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8095);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t698 * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		ArrayList_t698 * L_1 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_4 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
			V_3 = L_5;
		}

IL_0022:
		try
		{ // begin try (depth: 2)
			{
				goto IL_004d;
			}

IL_0024:
			{
				Object_t * L_6 = V_3;
				NullCheck(L_6);
				Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				Object_t * L_8 = V_2;
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t4891_il2cpp_TypeInfo_var));
				Object_t * L_9 = V_4;
				if (!L_9)
				{
					goto IL_004d;
				}
			}

IL_0037:
			{
				Object_t * L_10 = V_4;
				NullCheck(L_10);
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t4891_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				ArrayList_t698 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
			}

IL_004d:
			{
				Object_t * L_15 = V_3;
				NullCheck(L_15);
				bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0024;
				}
			}

IL_0055:
			{
				IL2CPP_LEAVE(0x6C, FINALLY_0057);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t57 *)e.ex;
			goto FINALLY_0057;
		}

FINALLY_0057:
		{ // begin finally (depth: 2)
			{
				Object_t * L_17 = V_3;
				V_6 = ((Object_t *)IsInst(L_17, IDisposable_t58_il2cpp_TypeInfo_var));
				Object_t * L_18 = V_6;
				if (L_18)
				{
					goto IL_0064;
				}
			}

IL_0063:
			{
				IL2CPP_END_FINALLY(87)
			}

IL_0064:
			{
				Object_t * L_19 = V_6;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
				IL2CPP_END_FINALLY(87)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(87)
		{
			IL2CPP_JUMP_TBL(0x6C, IL_006c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x75, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0075:
	{
		ArrayList_t698 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t682* L_22 = (ObjectU5BU5D_t682*)VirtFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
		return L_22;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainData.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainData
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainDataMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainData::.ctor(System.Int32)
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m18190 (CrossAppDomainData_t4594 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m18407(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m18191 (CrossAppDomainChannel_t4595 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m18192 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8096);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t4595_StaticFields*)CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern TypeInfo* CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m18193 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8096);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t4595 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t4595_StaticFields*)CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t4595 * L_2 = (CrossAppDomainChannel_t4595 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m18191(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t4595 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m18187(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x21, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		Object_t * L_4 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(26)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x21, IL_0021)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0021:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelName()
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m18194 (CrossAppDomainChannel_t4595 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral4219;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m18195 (CrossAppDomainChannel_t4595 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t4594_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m18196 (CrossAppDomainChannel_t4595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		CrossAppDomainData_t4594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8097);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m19267(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t4594 * L_1 = (CrossAppDomainData_t4594 *)il2cpp_codegen_object_new (CrossAppDomainData_t4594_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m18190(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C" void CrossAppDomainChannel_StartListening_m18197 (CrossAppDomainChannel_t4595 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const Il2CppType* CrossAppDomainSink_t4596_0_0_0_var;
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t4596_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainSink__cctor_m18198 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t4596_0_0_0_var = il2cpp_codegen_type_from_index(8098);
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		CrossAppDomainSink_t4596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8098);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t4596_StaticFields*)CrossAppDomainSink_t4596_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t4596_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, (String_t*) &_stringLiteral4220, ((int32_t)40));
		((CrossAppDomainSink_t4596_StaticFields*)CrossAppDomainSink_t4596_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m18199 (CrossAppDomainSink_t4596 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"

// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t4597_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m18200 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Context_t4597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8099);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		((Context_t4597_StaticFields*)Context_t4597_il2cpp_TypeInfo_var->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m18201 (Context_t4597 * __this, const MethodInfo* method)
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
// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Contexts.Context::get_DefaultContext()
extern "C" Context_t4597 * Context_get_DefaultContext_m18202 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t4597 * L_0 = AppDomain_InternalGetDefaultContext_m19343(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m18203 (Context_t4597 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t4880_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m18204 (Context_t4597 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IContextProperty_t4880_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8100);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
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
		ArrayList_t698 * L_0 = (__this->___context_properties_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (Object_t *)NULL;
	}

IL_000a:
	{
		ArrayList_t698 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(42 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_1 = L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			Object_t * L_3 = V_1;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t4880_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t4880_il2cpp_TypeInfo_var, L_5);
			String_t* L_7 = ___name;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0036;
			}
		}

IL_0032:
		{
			Object_t * L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0036:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0018;
			}
		}

IL_003e:
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
			Object_t * L_12 = V_1;
			V_3 = ((Object_t *)IsInst(L_12, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_3;
			if (L_13)
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
			Object_t * L_14 = V_3;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0052:
	{
		return (Object_t *)NULL;
	}

IL_0054:
	{
		Object_t * L_15 = V_2;
		return L_15;
	}
}
// System.String System.Runtime.Remoting.Contexts.Context::ToString()
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* Context_ToString_m18205 (Context_t4597 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___context_id_0);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral4221, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttributeMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C" void ContextAttribute__ctor_m18206 (ContextAttribute_t4590 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m4061(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m18207 (ContextAttribute_t4590 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern TypeInfo* ContextAttribute_t4590_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m18208 (ContextAttribute_t4590 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t4590_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8101);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t4590 * V_0 = {0};
	{
		Object_t * L_0 = ___o;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		Object_t * L_1 = ___o;
		if (((ContextAttribute_t4590 *)IsInst(L_1, ContextAttribute_t4590_il2cpp_TypeInfo_var)))
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = ___o;
		V_0 = ((ContextAttribute_t4590 *)Castclass(L_2, ContextAttribute_t4590_il2cpp_TypeInfo_var));
		ContextAttribute_t4590 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = (L_3->___AttributeName_0);
		String_t* L_5 = (__this->___AttributeName_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Inequality_m415(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 0;
	}

IL_002b:
	{
		return 1;
	}
}
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m18209 (ContextAttribute_t4590 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
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
		String_t* L_1 = (__this->___AttributeName_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t4878_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m18210 (ContextAttribute_t4590 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IConstructionCallMessage_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8102);
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*) &_stringLiteral4222, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t686_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t4878_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_IsContextOK_m18211 (ContextAttribute_t4590 * __this, Context_t4597 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IConstructionCallMessage_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8102);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = ___ctorMsg;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*) &_stringLiteral4222, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Context_t4597 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t770 * L_3 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_3, (String_t*) &_stringLiteral4223, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_5);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		return 1;
	}

IL_002b:
	{
		Context_t4597 * L_7 = ___ctx;
		String_t* L_8 = (__this->___AttributeName_0);
		NullCheck(L_7);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_7, L_8);
		V_0 = L_9;
		Object_t * L_10 = V_0;
		if (L_10)
		{
			goto IL_003d;
		}
	}
	{
		return 0;
	}

IL_003d:
	{
		Object_t * L_11 = V_0;
		if ((((Object_t*)(ContextAttribute_t4590 *)__this) == ((Object_t*)(Object_t *)L_11)))
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}

IL_0043:
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Contexts.CrossContextChannel::.ctor()
extern "C" void CrossContextChannel__ctor_m18212 (CrossContextChannel_t4592 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttMethodDeclarations.h"

// System.Threading.Mutex
#include "mscorlib_System_Threading_Mutex.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m18213 (SynchronizationAttribute_t4599 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m18214(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern TypeInfo* Mutex_t4598_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute__ctor_m18214 (SynchronizationAttribute_t4599 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t4598_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8103);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t4598 * L_0 = (Mutex_t4598 *)il2cpp_codegen_object_new (Mutex_t4598_il2cpp_TypeInfo_var);
		Mutex__ctor_m19253(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m18206(__this, (String_t*) &_stringLiteral4224, /*hidden argument*/NULL);
		int32_t L_1 = ___flag;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___flag;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_3 = ___flag;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_4 = ___flag;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_t711 * L_5 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_5, (String_t*) &_stringLiteral3347, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0032:
	{
		bool L_6 = ___reEntrant;
		__this->____bReEntrant_1 = L_6;
		int32_t L_7 = ___flag;
		__this->____flavor_2 = L_7;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean)
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m18215 (SynchronizationAttribute_t4599 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t4599 * V_0 = {0};
	SynchronizationAttribute_t4599 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___value;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		Mutex_t4598 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t4599 * L_2 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_3+(int32_t)1));
			int32_t L_4 = (__this->____lockCount_3);
			if ((((int32_t)L_4) <= ((int32_t)1)))
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SynchronizationAttribute_ReleaseLock_m18216(__this, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
			Thread_t1461 * L_5 = Thread_get_CurrentThread_m7448(NULL /*static, unused*/, /*hidden argument*/NULL);
			__this->____ownerThread_5 = L_5;
			IL2CPP_LEAVE(0x48, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t4599 * L_6 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0048:
	{
		goto IL_0093;
	}

IL_004a:
	{
		V_1 = __this;
		SynchronizationAttribute_t4599 * L_7 = V_1;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0052:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0074;
		}

IL_0054:
		{
			int32_t L_8 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_8-(int32_t)1));
			Mutex_t4598 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m19256(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1461 *)NULL;
		}

IL_0074:
		{
			int32_t L_10 = (__this->____lockCount_3);
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_008a;
			}
		}

IL_007d:
		{
			Thread_t1461 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
			Thread_t1461 * L_12 = Thread_get_CurrentThread_m7448(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1461 *)L_11) == ((Object_t*)(Thread_t1461 *)L_12)))
			{
				goto IL_0054;
			}
		}

IL_008a:
		{
			IL2CPP_LEAVE(0x93, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t4599 * L_13 = V_1;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(140)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x93, IL_0093)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0093:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ReleaseLock()
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m18216 (SynchronizationAttribute_t4599 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t4599 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t4599 * L_0 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = (__this->____lockCount_3);
			if ((((int32_t)L_1) <= ((int32_t)0)))
			{
				goto IL_003e;
			}
		}

IL_0011:
		{
			Thread_t1461 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
			Thread_t1461 * L_3 = Thread_get_CurrentThread_m7448(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1461 *)L_2) == ((Object_t*)(Thread_t1461 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t4598 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m19256(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1461 *)NULL;
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		SynchronizationAttribute_t4599 * L_6 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0047:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* IConstructionCallMessage_t4878_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m18217 (SynchronizationAttribute_t4599 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8102);
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____flavor_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___ctorMsg;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t686_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* SynchronizationAttribute_t4599_il2cpp_TypeInfo_var;
extern "C" bool SynchronizationAttribute_IsContextOK_m18218 (SynchronizationAttribute_t4599 * __this, Context_t4597 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t4599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8104);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t4599 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t4597 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, (String_t*) &_stringLiteral4224);
		V_0 = ((SynchronizationAttribute_t4599 *)IsInst(L_1, SynchronizationAttribute_t4599_il2cpp_TypeInfo_var));
		int32_t L_2 = (__this->____flavor_2);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 0)
		{
			goto IL_0042;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 2)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 3)
		{
			goto IL_0047;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 4)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 5)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 6)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)1)) == 7)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_0053;
	}

IL_0042:
	{
		SynchronizationAttribute_t4599 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t4599 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		SynchronizationAttribute_t4599 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t4599 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return 0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::ExitContext()
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t4599_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ExitContext_m18219 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		SynchronizationAttribute_t4599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8104);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t4599 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Context_t4597 * L_0 = Thread_get_CurrentContext_m19265(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m18203(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Context_t4597 * L_2 = Thread_get_CurrentContext_m19265(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral4224);
		V_0 = ((SynchronizationAttribute_t4599 *)IsInst(L_3, SynchronizationAttribute_t4599_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t4599 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t4599 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1461_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t4599_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_EnterContext_m18220 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1461_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2546);
		SynchronizationAttribute_t4599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8104);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t4599 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Context_t4597 * L_0 = Thread_get_CurrentContext_m19265(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m18203(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1461_il2cpp_TypeInfo_var);
		Context_t4597 * L_2 = Thread_get_CurrentContext_m19265(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral4224);
		V_0 = ((SynchronizationAttribute_t4599 *)IsInst(L_3, SynchronizationAttribute_t4599_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t4599 * L_4 = V_0;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		SynchronizationAttribute_t4599 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(10 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ArgInfo
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoMethodDeclarations.h"

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m18221 (ArgInfo_t4601 * __this, MethodBase_t1525 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1458* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		MethodBase_t1525 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t1525 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1458* L_2 = (ParameterInfoU5BU5D_t1458*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1458* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1458* L_3 = V_0;
		NullCheck(L_3);
		__this->____paramMap_0 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		__this->____inoutArgCount_1 = 0;
		uint8_t L_4 = ___type;
		if (L_4)
		{
			goto IL_0069;
		}
	}
	{
		V_1 = 0;
		goto IL_0061;
	}

IL_0035:
	{
		ParameterInfoU5BU5D_t1458* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_5, L_7)));
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_8);
		if (L_9)
		{
			goto IL_005d;
		}
	}
	{
		Int32U5BU5D_t484* L_10 = (__this->____paramMap_0);
		int32_t L_11 = (__this->____inoutArgCount_1);
		int32_t L_12 = L_11;
		V_3 = L_12;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_13);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_10, L_13)) = (int32_t)L_14;
	}

IL_005d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0061:
	{
		int32_t L_16 = V_1;
		ParameterInfoU5BU5D_t1458* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_00a9;
	}

IL_0069:
	{
		V_2 = 0;
		goto IL_00a3;
	}

IL_006d:
	{
		ParameterInfoU5BU5D_t1458* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		ParameterInfoU5BU5D_t1458* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m18105((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_009f;
		}
	}

IL_0086:
	{
		Int32U5BU5D_t484* L_27 = (__this->____paramMap_0);
		int32_t L_28 = (__this->____inoutArgCount_1);
		int32_t L_29 = L_28;
		V_3 = L_29;
		__this->____inoutArgCount_1 = ((int32_t)((int32_t)L_29+(int32_t)1));
		int32_t L_30 = V_3;
		int32_t L_31 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_30);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_27, L_30)) = (int32_t)L_31;
	}

IL_009f:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a3:
	{
		int32_t L_33 = V_2;
		ParameterInfoU5BU5D_t1458* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)(((Array_t *)L_34)->max_length))))))
		{
			goto IL_006d;
		}
	}

IL_00a9:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t682* ArgInfo_GetInOutArgs_m18222 (ArgInfo_t4601 * __this, ObjectU5BU5D_t682* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t682* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ObjectU5BU5D_t682* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t682* L_3 = ___args;
		Int32U5BU5D_t484* L_4 = (__this->____paramMap_0);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6)));
		int32_t L_7 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_4, L_6));
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		ArrayElementTypeCheck (L_1, (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, L_2)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = (__this->____inoutArgCount_1);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0010;
		}
	}
	{
		ObjectU5BU5D_t682* L_11 = V_0;
		return L_11;
	}
}
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResult.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.AsyncResult
#include "mscorlib_System_Runtime_Remoting_Messaging_AsyncResultMethodDeclarations.h"

// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessage.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m18223 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m18224 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t3377_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t3913 * AsyncResult_get_AsyncWaitHandle_m18225 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t3377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6001);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t4194 * V_0 = {0};
	WaitHandle_t3913 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t4194 * L_0 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t3913 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t3377 * L_3 = (ManualResetEvent_t3377 *)il2cpp_codegen_object_new (ManualResetEvent_t3377_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m11830(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0021:
		{
			WaitHandle_t3913 * L_4 = (__this->___handle_1);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		AsyncResult_t4194 * L_5 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0033:
	{
		WaitHandle_t3913 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m18226 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m18227 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m18228 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m18229 (AsyncResult_t4194 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m18230 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m18231 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m18232 (AsyncResult_t4194 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
extern "C" Object_t * AsyncResult_GetReplyMessage_m18233 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m18234 (AsyncResult_t4194 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m18235 (AsyncResult_t4194 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m18236 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	AsyncResult_t4194 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t4194 * L_0 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			bool L_1 = (__this->___completed_6);
			if (!L_1)
			{
				goto IL_0019;
			}
		}

IL_0010:
		{
			Object_t * L_2 = (__this->___reply_message_14);
			V_1 = L_2;
			IL2CPP_LEAVE(0x35, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		AsyncResult_t4194 * L_3 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0022:
	{
		WaitHandle_t3913 * L_4 = (WaitHandle_t3913 *)VirtFuncInvoker0< WaitHandle_t3913 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		Object_t * L_5 = (__this->___reply_message_14);
		return L_5;
	}

IL_0035:
	{
		Object_t * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
extern TypeInfo* ManualResetEvent_t3377_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t386_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m18237 (AsyncResult_t4194 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t3377_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6001);
		AsyncCallback_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1138);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t4194 * V_0 = {0};
	AsyncCallback_t386 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___msg;
		__this->___reply_message_14 = L_0;
		V_0 = __this;
		AsyncResult_t4194 * L_1 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t3913 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t3913 * L_3 = (WaitHandle_t3913 *)VirtFuncInvoker0< WaitHandle_t3913 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t3377 *)Castclass(L_3, ManualResetEvent_t3377_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m11828(((ManualResetEvent_t3377 *)Castclass(L_3, ManualResetEvent_t3377_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0031);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		AsyncResult_t4194 * L_4 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(49)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_JUMP_TBL(0x38, IL_0038)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0038:
	{
		Object_t * L_5 = (__this->___async_callback_8);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		Object_t * L_6 = (__this->___async_callback_8);
		V_1 = ((AsyncCallback_t386 *)Castclass(L_6, AsyncCallback_t386_il2cpp_TypeInfo_var));
		AsyncCallback_t386 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(11 /* System.Void System.AsyncCallback::Invoke(System.IAsyncResult) */, L_7, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t4603 * AsyncResult_get_CallMessage_m18238 (AsyncResult_t4194 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t4603 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m18239 (AsyncResult_t4194 * __this, MonoMethodMessage_t4603 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t4603 * L_0 = ___value;
		__this->___call_message_12 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallD.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m18240 (ConstructionCall_t4606 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m18270(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		__this->____activationType_14 = L_0;
		Type_t * L_1 = ___type;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_1);
		__this->____activationTypeName_15 = L_2;
		__this->____isContextOk_16 = 1;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstructionCall__ctor_m18241 (ConstructionCall_t4606 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		MethodCall__ctor_m18269(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern TypeInfo* ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m18242 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8105);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t4608 * V_0 = {0};
	{
		ConstructionCallDictionary_t4608 * L_0 = (ConstructionCallDictionary_t4608 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m18254(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t4608 * L_1 = V_0;
		((MethodCall_t4607 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t4608 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m18302(L_2, /*hidden argument*/NULL);
		((MethodCall_t4607 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m18243 (ConstructionCall_t4606 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m18244 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____activationType_14);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = (__this->____activationTypeName_15);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m7462(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m18245 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m18246 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m18247 (ConstructionCall_t4606 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t682* ConstructionCall_get_CallSiteActivationAttributes_m18248 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m18249 (ConstructionCall_t4606 * __this, ObjectU5BU5D_t682* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m18250 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____contextProperties_13);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArrayList_t698 * L_1 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCall_t4606_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t4583_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t686_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m18251 (ConstructionCall_t4606 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t4606_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8088);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IActivator_t4583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8106);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IList_t686_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c4;
		}
	}
	{
		Dictionary_2_t223 * L_2 = ((ConstructionCall_t4606_StaticFields*)ConstructionCall_t4606_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4225, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4226, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4227, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4228, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4229, 4);
		Dictionary_2_t223 * L_9 = V_1;
		((ConstructionCall_t4606_StaticFields*)ConstructionCall_t4606_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17 = L_9;
	}

IL_0058:
	{
		Dictionary_2_t223 * L_10 = ((ConstructionCall_t4606_StaticFields*)ConstructionCall_t4606_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map20_17;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0090;
		}
		if (L_13 == 2)
		{
			goto IL_009d;
		}
		if (L_13 == 3)
		{
			goto IL_00aa;
		}
		if (L_13 == 4)
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00c4;
	}

IL_0083:
	{
		Object_t * L_14 = ___value;
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t4583_il2cpp_TypeInfo_var));
		return;
	}

IL_0090:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t682*)Castclass(L_15, ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		return;
	}

IL_009d:
	{
		Object_t * L_16 = ___value;
		__this->____activationType_14 = ((Type_t *)Castclass(L_16, Type_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00aa:
	{
		Object_t * L_17 = ___value;
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t686_il2cpp_TypeInfo_var));
		return;
	}

IL_00b7:
	{
		Object_t * L_18 = ___value;
		__this->____activationTypeName_15 = ((String_t*)Castclass(L_18, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c4:
	{
		String_t* L_19 = ___key;
		Object_t * L_20 = ___value;
		MethodCall_InitMethodProperty_m18272(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_GetObjectData_m18252 (ConstructionCall_t4606 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		MethodCall_GetObjectData_m18273(__this, L_0, L_1, /*hidden argument*/NULL);
		Object_t * L_2 = (__this->____contextProperties_13);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t754_il2cpp_TypeInfo_var, L_4);
		if (L_5)
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (Object_t *)NULL;
	}

IL_001c:
	{
		SerializationInfo_t2919 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m11464(L_6, (String_t*) &_stringLiteral4225, L_7, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_8 = ___info;
		ObjectU5BU5D_t682* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m11464(L_8, (String_t*) &_stringLiteral4226, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m11464(L_10, (String_t*) &_stringLiteral4227, NULL, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m11464(L_11, (String_t*) &_stringLiteral4228, L_12, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m11464(L_13, (String_t*) &_stringLiteral4229, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m18253 (ConstructionCall_t4606 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m18279(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m18254 (ConstructionCallDictionary_t4608 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8105);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m18298(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = ((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m18300(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m18255 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8105);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral4230);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral4230;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral4231);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral4231;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4232);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral4232;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4233);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral4233;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4234);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral4234;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4235);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral4235;
		StringU5BU5D_t75* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral4226);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral4226;
		StringU5BU5D_t75* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral4227);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral4227;
		StringU5BU5D_t75* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral4228);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral4228;
		StringU5BU5D_t75* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral4225);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral4225;
		StringU5BU5D_t75* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral4229);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral4229;
		((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern TypeInfo* ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t4878_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m18256 (ConstructionCallDictionary_t4608 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8105);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IConstructionCallMessage_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8102);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4225, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4226, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4227, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4228, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4229, 4);
		Dictionary_2_t223 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map23_7;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_13 = V_2;
		if (L_13 == 0)
		{
			goto IL_0083;
		}
		if (L_13 == 1)
		{
			goto IL_0094;
		}
		if (L_13 == 2)
		{
			goto IL_00a5;
		}
		if (L_13 == 3)
		{
			goto IL_00b6;
		}
		if (L_13 == 4)
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d8;
	}

IL_0083:
	{
		Object_t * L_14 = (((MethodDictionary_t4609 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_0094:
	{
		Object_t * L_16 = (((MethodDictionary_t4609 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t682* L_17 = (ObjectU5BU5D_t682*)InterfaceFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00a5:
	{
		Object_t * L_18 = (((MethodDictionary_t4609 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00b6:
	{
		Object_t * L_20 = (((MethodDictionary_t4609 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00c7:
	{
		Object_t * L_22 = (((MethodDictionary_t4609 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00d8:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m18306(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t4878_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t4583_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m18257 (ConstructionCallDictionary_t4608 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8105);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IConstructionCallMessage_t4878_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8102);
		IActivator_t4583_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8106);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4225, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4226, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4227, 1);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4228, 1);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4229, 1);
		Dictionary_2_t223 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((ConstructionCallDictionary_t4608_StaticFields*)ConstructionCallDictionary_t4608_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_8;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		bool L_12 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_10, L_11, (&V_2));
		if (!L_12)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_0093;
	}

IL_0070:
	{
		Object_t * L_15 = (((MethodDictionary_t4609 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t4878_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t4583_il2cpp_TypeInfo_var)));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t711 * L_17 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_17, (String_t*) &_stringLiteral4236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m18307(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m18258 (EnvoyTerminatorSink_t4610 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern TypeInfo* EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m18259 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8107);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t4610 * L_0 = (EnvoyTerminatorSink_t4610 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m18258(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t4610_StaticFields*)EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_Header.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.Header
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object)
extern "C" void Header__ctor_m18260 (Header_t4611 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m18261(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m18261 (Header_t4611 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m18262(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m18262 (Header_t4611 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ____Name;
		__this->___Name_2 = L_0;
		Object_t * L_1 = ____Value;
		__this->___Value_3 = L_1;
		bool L_2 = ____MustUnderstand;
		__this->___MustUnderstand_1 = L_2;
		String_t* L_3 = ____HeaderNamespace;
		__this->___HeaderNamespace_0 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContex.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.LogicalCallContext
#include "mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContexMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemoti.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern TypeInfo* CallContextRemotingData_t4612_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m18263 (LogicalCallContext_t4613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t4612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8108);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t4612 * L_0 = (CallContextRemotingData_t4612 *)il2cpp_codegen_object_new (CallContextRemotingData_t4612_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m18267(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CallContextRemotingData_t4612_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m18264 (LogicalCallContext_t4613 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t4612_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8108);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t4677  V_0 = {0};
	SerializationInfoEnumerator_t4679 * V_1 = {0};
	{
		CallContextRemotingData_t4612 * L_0 = (CallContextRemotingData_t4612 *)il2cpp_codegen_object_new (CallContextRemotingData_t4612_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m18267(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t4679 * L_2 = SerializationInfo_GetEnumerator_m18557(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t4679 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t4677  L_4 = SerializationInfoEnumerator_get_Current_m18567(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m18551((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m456(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral4237, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m18552((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t4612 *)Castclass(L_7, CallContextRemotingData_t4612_il2cpp_TypeInfo_var));
		goto IL_005c;
	}

IL_0048:
	{
		String_t* L_8 = SerializationEntry_get_Name_m18551((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m18552((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m18266(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		SerializationInfoEnumerator_t4679 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_10);
		if (L_11)
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2139_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_GetObjectData_m18265 (LogicalCallContext_t4613 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t2139  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2919 * L_0 = ___info;
		CallContextRemotingData_t4612 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m11464(L_0, (String_t*) &_stringLiteral4237, L_1, /*hidden argument*/NULL);
		Hashtable_t696 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t696 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
		V_1 = L_4;
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_0027:
		{
			Object_t * L_5 = V_1;
			NullCheck(L_5);
			Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_5);
			V_0 = ((*(DictionaryEntry_t2139 *)((DictionaryEntry_t2139 *)UnBox (L_6, DictionaryEntry_t2139_il2cpp_TypeInfo_var))));
			SerializationInfo_t2919 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m7770((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m7771((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m11464(L_7, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
		}

IL_004c:
		{
			Object_t * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0027;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		{
			Object_t * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_0061;
			}
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(86)
		}

IL_0061:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(86)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::SetData(System.String,System.Object)
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m18266 (LogicalCallContext_t4613 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t696 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Hashtable_t696 * L_1 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0013:
	{
		Hashtable_t696 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m18267 (CallContextRemotingData_t4612 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDiction.h"
// System.Runtime.Remoting.Messaging.MethodCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallDictionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C" void MethodCall__ctor_m18268 (MethodCall_t4607 * __this, HeaderU5BU5D_t4849* ___h1, const MethodInfo* method)
{
	Header_t4611 * V_0 = {0};
	HeaderU5BU5D_t4849* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t4849* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HeaderU5BU5D_t4849* L_1 = ___h1;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		HeaderU5BU5D_t4849* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		HeaderU5BU5D_t4849* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_3, L_5));
		Header_t4611 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t4611 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t4849* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		MethodCall_ResolveMethod_m18285(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m18269 (MethodCall_t4607 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	SerializationEntry_t4677  V_0 = {0};
	SerializationInfoEnumerator_t4679 * V_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t2919 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t4679 * L_1 = SerializationInfo_GetEnumerator_m18557(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		SerializationInfoEnumerator_t4679 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t4677  L_3 = SerializationInfoEnumerator_get_Current_m18567(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m18551((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m18552((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0030:
	{
		SerializationInfoEnumerator_t4679 * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_6);
		if (L_7)
		{
			goto IL_0015;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C" void MethodCall__ctor_m18270 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m18271 (MethodCall_t4607 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(17 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* MethodCall_t4607_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t4613_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" void MethodCall_InitMethodProperty_m18272 (MethodCall_t4607 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t4607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8109);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		LogicalCallContext_t4613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8110);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0101;
		}
	}
	{
		Dictionary_2_t223 * L_2 = ((MethodCall_t4607_StaticFields*)MethodCall_t4607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4232, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4231, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4233, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4234, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4235, 4);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral4230, 5);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral4238, 6);
		Dictionary_2_t223 * L_11 = V_1;
		((MethodCall_t4607_StaticFields*)MethodCall_t4607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t223 * L_12 = ((MethodCall_t4607_StaticFields*)MethodCall_t4607_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map1F_10;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_12, L_13, (&V_2));
		if (!L_14)
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_15 = V_2;
		if (L_15 == 0)
		{
			goto IL_00a6;
		}
		if (L_15 == 1)
		{
			goto IL_00b3;
		}
		if (L_15 == 2)
		{
			goto IL_00c0;
		}
		if (L_15 == 3)
		{
			goto IL_00cd;
		}
		if (L_15 == 4)
		{
			goto IL_00da;
		}
		if (L_15 == 5)
		{
			goto IL_00e7;
		}
		if (L_15 == 6)
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_0101;
	}

IL_00a6:
	{
		Object_t * L_16 = ___value;
		__this->____typeName_1 = ((String_t*)Castclass(L_16, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00b3:
	{
		Object_t * L_17 = ___value;
		__this->____methodName_2 = ((String_t*)Castclass(L_17, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00c0:
	{
		Object_t * L_18 = ___value;
		__this->____methodSignature_4 = ((TypeU5BU5D_t1203*)Castclass(L_18, TypeU5BU5D_t1203_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t682*)Castclass(L_19, ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		return;
	}

IL_00da:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t4613 *)Castclass(L_20, LogicalCallContext_t4613_il2cpp_TypeInfo_var));
		return;
	}

IL_00e7:
	{
		Object_t * L_21 = ___value;
		__this->____uri_0 = ((String_t*)Castclass(L_21, String_t_il2cpp_TypeInfo_var));
		return;
	}

IL_00f4:
	{
		Object_t * L_22 = ___value;
		__this->____genericArguments_7 = ((TypeU5BU5D_t1203*)Castclass(L_22, TypeU5BU5D_t1203_il2cpp_TypeInfo_var));
		return;
	}

IL_0101:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2139_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void MethodCall_GetObjectData_m18273 (MethodCall_t4607 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t2139  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2919 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m11464(L_0, (String_t*) &_stringLiteral4232, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m11464(L_2, (String_t*) &_stringLiteral4231, L_3, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_4 = ___info;
		TypeU5BU5D_t1203* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m11464(L_4, (String_t*) &_stringLiteral4233, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_6 = ___info;
		ObjectU5BU5D_t682* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m11464(L_6, (String_t*) &_stringLiteral4234, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_8 = ___info;
		LogicalCallContext_t4613 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m11464(L_8, (String_t*) &_stringLiteral4235, L_9, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m11464(L_10, (String_t*) &_stringLiteral4230, L_11, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_12 = ___info;
		TypeU5BU5D_t1203* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m11464(L_12, (String_t*) &_stringLiteral4238, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t685_il2cpp_TypeInfo_var, L_15);
		V_1 = L_16;
	}

IL_008b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b2;
		}

IL_008d:
		{
			Object_t * L_17 = V_1;
			NullCheck(L_17);
			Object_t * L_18 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_17);
			V_0 = ((*(DictionaryEntry_t2139 *)((DictionaryEntry_t2139 *)UnBox (L_18, DictionaryEntry_t2139_il2cpp_TypeInfo_var))));
			SerializationInfo_t2919 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m7770((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m7771((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m11464(L_19, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
		}

IL_00b2:
		{
			Object_t * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_008d;
			}
		}

IL_00ba:
		{
			IL2CPP_LEAVE(0xCE, FINALLY_00bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00bc;
	}

FINALLY_00bc:
	{ // begin finally (depth: 1)
		{
			Object_t * L_24 = V_1;
			V_2 = ((Object_t *)IsInst(L_24, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_25 = V_2;
			if (L_25)
			{
				goto IL_00c7;
			}
		}

IL_00c6:
		{
			IL2CPP_END_FINALLY(188)
		}

IL_00c7:
		{
			Object_t * L_26 = V_2;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(188)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(188)
	{
		IL2CPP_JUMP_TBL(0xCE, IL_00ce)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00ce:
	{
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t682* MethodCall_get_Args_m18274 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t4613_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t4613 * MethodCall_get_LogicalCallContext_m18275 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t4613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8110);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t4613 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t4613 * L_1 = (LogicalCallContext_t4613 *)il2cpp_codegen_object_new (LogicalCallContext_t4613_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m18263(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t4613 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t1525 * MethodCall_get_MethodBase_m18276 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1525 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MethodCall_ResolveMethod_m18285(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		MethodBase_t1525 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m18277 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MethodBase_t1525 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		__this->____methodName_2 = L_2;
	}

IL_0019:
	{
		String_t* L_3 = (__this->____methodName_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m18278 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1458* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t1203* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1525 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1525 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t1458* L_3 = (ParameterInfoU5BU5D_t1458*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1458* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t1458* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t1203* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t1458* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t1458* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t1203* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m18279 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_000e:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern TypeInfo* MethodCallDictionary_t4614_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m18280 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t4614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8111);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t4614 * V_0 = {0};
	{
		MethodCallDictionary_t4614 * L_0 = (MethodCallDictionary_t4614 *)il2cpp_codegen_object_new (MethodCallDictionary_t4614_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m18289(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t4614 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t4614 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m18302(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m18281 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MethodBase_t1525 * L_1 = (__this->____methodBase_5);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->____typeName_1 = L_3;
	}

IL_001e:
	{
		String_t* L_4 = (__this->____typeName_1);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C" String_t* MethodCall_get_Uri_m18282 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m18283 (MethodCall_t4607 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m18284 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" void MethodCall_ResolveMethod_m18285 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2678);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Type_t * V_2 = {0};
	String_t* G_B5_0 = {0};
	{
		String_t* L_0 = (__this->____uri_0);
		if (!L_0)
		{
			goto IL_0153;
		}
	}
	{
		String_t* L_1 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m18415(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_4 = (__this->____typeName_1);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_5 = (__this->____typeName_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1224, L_5, (String_t*) &_stringLiteral1225, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B5_0 = L_7;
	}

IL_003e:
	{
		V_1 = G_B5_0;
		String_t* L_8 = V_1;
		String_t* L_9 = (__this->____uri_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral4239, L_8, (String_t*) &_stringLiteral4240, L_9, /*hidden argument*/NULL);
		RemotingException_t4638 * L_11 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m18286(__this, L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		if (L_15)
		{
			goto IL_00a7;
		}
	}
	{
		StringU5BU5D_t75* L_16 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 5));
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 0);
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral4241);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)(String_t*) &_stringLiteral4241;
		StringU5BU5D_t75* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t75* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral4242);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral4242;
		StringU5BU5D_t75* L_20 = L_19;
		Type_t * L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_21);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 3);
		ArrayElementTypeCheck (L_20, L_22);
		*((String_t**)(String_t**)SZArrayLdElema(L_20, 3)) = (String_t*)L_22;
		StringU5BU5D_t75* L_23 = L_20;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 4);
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral1218);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)(String_t*) &_stringLiteral1218;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m450(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t4638 * L_25 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t1203* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_29 = RemotingServices_GetMethodBaseFromName_m18420(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t1525 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		ObjectU5BU5D_t682* L_31 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral4243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral4243;
		ObjectU5BU5D_t682* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t682* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral4244);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)(String_t*) &_stringLiteral4244;
		ObjectU5BU5D_t682* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m3874(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t4638 * L_38 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_38, L_37, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_38);
	}

IL_00f5:
	{
		Type_t * L_39 = V_2;
		Type_t * L_40 = V_0;
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_41 = V_2;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_41);
		if (!L_42)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_43);
		if (L_44)
		{
			goto IL_0151;
		}
	}
	{
		Type_t * L_45 = V_0;
		MethodBase_t1525 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_47 = RemotingServices_GetVirtualMethod_m18413(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t1525 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		ObjectU5BU5D_t682* L_49 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral4243);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)(String_t*) &_stringLiteral4243;
		ObjectU5BU5D_t682* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t682* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral4244);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)(String_t*) &_stringLiteral4244;
		ObjectU5BU5D_t682* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m3874(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t4638 * L_56 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m18419(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t1525 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral4243, L_59, (String_t*) &_stringLiteral4244, L_60, /*hidden argument*/NULL);
		RemotingException_t4638 * L_62 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		MethodBase_t1525 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		MethodBase_t1525 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t1203* L_67 = MethodCall_get_GenericArguments_m18288(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		RemotingException_t4638 * L_68 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_68, (String_t*) &_stringLiteral4245, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		MethodBase_t1525 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t1203* L_70 = MethodCall_get_GenericArguments_m18288(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t1203* >::Invoke(30 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m18286 (MethodCall_t4607 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t1203* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t1203* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m18287(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___clientType = L_1;
		String_t* L_2 = ___clientType;
		Type_t * L_3 = ___serverType;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		Type_t * L_6 = ___serverType;
		return L_6;
	}

IL_001a:
	{
		Type_t * L_7 = ___serverType;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_7);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0023:
	{
		String_t* L_9 = ___clientType;
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m456(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_13 = V_0;
		return L_13;
	}

IL_0033:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_14);
		V_0 = L_15;
	}

IL_003a:
	{
		Type_t * L_16 = V_0;
		if (L_16)
		{
			goto IL_0023;
		}
	}
	{
		Type_t * L_17 = ___serverType;
		NullCheck(L_17);
		TypeU5BU5D_t1203* L_18 = (TypeU5BU5D_t1203*)VirtFuncInvoker0< TypeU5BU5D_t1203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t1203* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		TypeU5BU5D_t1203* L_20 = V_3;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		V_2 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_20, L_22));
		String_t* L_23 = ___clientType;
		Type_t * L_24 = V_2;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_op_Equality_m456(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0060;
		}
	}
	{
		Type_t * L_27 = V_2;
		return L_27;
	}

IL_0060:
	{
		int32_t L_28 = V_4;
		V_4 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_0066:
	{
		int32_t L_29 = V_4;
		TypeU5BU5D_t1203* L_30 = V_3;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)(((Array_t *)L_30)->max_length))))))
		{
			goto IL_004b;
		}
	}
	{
		return (Type_t *)NULL;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m18287 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	String_t* G_B2_1 = {0};
	int32_t G_B1_0 = 0;
	String_t* G_B1_1 = {0};
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	String_t* G_B3_2 = {0};
	{
		String_t* L_0 = ___aqname;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m4121(L_0, (String_t*) &_stringLiteral4246, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___aqname;
		int32_t L_3 = V_0;
		G_B1_0 = ((int32_t)44);
		G_B1_1 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			G_B2_0 = ((int32_t)44);
			G_B2_1 = L_2;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((int32_t)((int32_t)L_4+(int32_t)2));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		NullCheck(G_B3_2);
		int32_t L_5 = String_IndexOf_m10105(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7 = ___aqname;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_m418(L_7, 0, L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m413(L_9, /*hidden argument*/NULL);
		___aqname = L_10;
	}

IL_0034:
	{
		String_t* L_11 = ___aqname;
		return L_11;
	}
}
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C" TypeU5BU5D_t1203* MethodCall_get_GenericArguments_m18288 (MethodCall_t4607 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t1203* V_0 = {0};
	{
		TypeU5BU5D_t1203* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TypeU5BU5D_t1203* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_000f:
	{
		MethodBase_t1525 * L_2 = (MethodBase_t1525 *)VirtFuncInvoker0< MethodBase_t1525 * >::Invoke(8 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t1203* L_3 = (TypeU5BU5D_t1203*)VirtFuncInvoker0< TypeU5BU5D_t1203* >::Invoke(23 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t1203* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t1203* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* MethodCallDictionary_t4614_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m18289 (MethodCallDictionary_t4614 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t4614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8111);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m18298(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t4614_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = ((MethodCallDictionary_t4614_StaticFields*)MethodCallDictionary_t4614_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m18300(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t4614_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__cctor_m18290 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		MethodCallDictionary_t4614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8111);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral4230);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral4230;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral4231);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral4231;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4232);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral4232;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4233);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral4233;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4234);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral4234;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4235);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral4235;
		((MethodCallDictionary_t4614_StaticFields*)MethodCallDictionary_t4614_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
		return;
	}
}
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary_MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m18291 (DictionaryEnumerator_t4615 * __this, MethodDictionary_t4609 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t4615 * G_B2_0 = {0};
	DictionaryEnumerator_t4615 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t4615 * G_B3_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		MethodDictionary_t4609 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t4609 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		Object_t * L_2 = (L_1->____internalProperties_0);
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_002f;
		}
	}
	{
		MethodDictionary_t4609 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t685_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		Object_t * L_6 = V_0;
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		NullCheck(G_B3_1);
		G_B3_1->____hashtableEnum_1 = G_B3_0;
		__this->____posMethod_2 = (-1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Current()
extern "C" Object_t * DictionaryEnumerator_get_Current_m18292 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2139  V_0 = {0};
	{
		DictionaryEntry_t2139  L_0 = (DictionaryEntry_t2139 )VirtFuncInvoker0< DictionaryEntry_t2139  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7771((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern TypeInfo* IDictionaryEnumerator_t784_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m18293 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = (__this->____posMethod_2);
		__this->____posMethod_2 = ((int32_t)((int32_t)L_1+(int32_t)1));
		int32_t L_2 = (__this->____posMethod_2);
		MethodDictionary_t4609 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		StringU5BU5D_t75* L_4 = (L_3->____methodKeys_2);
		NullCheck(L_4);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return 1;
	}

IL_002f:
	{
		__this->____posMethod_2 = ((int32_t)-2);
	}

IL_0037:
	{
		Object_t * L_5 = (__this->____hashtableEnum_1);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		goto IL_0062;
	}

IL_0043:
	{
		MethodDictionary_t4609 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t784_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m18303(L_6, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0062;
		}
	}
	{
		return 1;
	}

IL_0062:
	{
		Object_t * L_10 = (__this->____hashtableEnum_1);
		NullCheck(L_10);
		bool L_11 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::Reset()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator_Reset_m18294 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____posMethod_2 = (-1);
		Object_t * L_0 = (__this->____hashtableEnum_1);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry()
extern TypeInfo* InvalidOperationException_t1429_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t784_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2139  DictionaryEnumerator_get_Entry_m18295 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1429_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2471);
		IDictionaryEnumerator_t784_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____posMethod_2);
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		MethodDictionary_t4609 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t75* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t4609 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t4609 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t75* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(17 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t2139  L_11 = {0};
		DictionaryEntry__ctor_m15065(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_003e:
	{
		int32_t L_12 = (__this->____posMethod_2);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_13 = (__this->____hashtableEnum_1);
		if (L_13)
		{
			goto IL_005a;
		}
	}

IL_004f:
	{
		InvalidOperationException_t1429 * L_14 = (InvalidOperationException_t1429 *)il2cpp_codegen_object_new (InvalidOperationException_t1429_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7325(L_14, (String_t*) &_stringLiteral4249, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t2139  L_16 = (DictionaryEntry_t2139 )InterfaceFuncInvoker0< DictionaryEntry_t2139  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t784_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m18296 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2139  V_0 = {0};
	{
		DictionaryEntry_t2139  L_0 = (DictionaryEntry_t2139 )VirtFuncInvoker0< DictionaryEntry_t2139  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m7770((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m18297 (DictionaryEnumerator_t4615 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2139  V_0 = {0};
	{
		DictionaryEntry_t2139  L_0 = (DictionaryEntry_t2139 )VirtFuncInvoker0< DictionaryEntry_t2139  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7771((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m18298 (MethodDictionary_t4609 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t4615_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m18299 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t4615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8112);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t4615 * L_0 = (DictionaryEnumerator_t4615 *)il2cpp_codegen_object_new (DictionaryEnumerator_t4615_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m18291(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m18300 (MethodDictionary_t4609 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m18301 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m18302 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_1;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->____internalProperties_0);
		return L_2;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_IsOverridenKey_m18303 (MethodDictionary_t4609 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t75* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (__this->____ownProperties_3);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		StringU5BU5D_t75* L_1 = (__this->____methodKeys_2);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		StringU5BU5D_t75* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		String_t* L_5 = ___key;
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m456(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0024;
		}
	}
	{
		return 1;
	}

IL_0024:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_2;
		StringU5BU5D_t75* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m18304 (MethodDictionary_t4609 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		StringU5BU5D_t75* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(17 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
		return L_7;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t75* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (__this->____internalProperties_0);
		Object_t * L_13 = ___key;
		NullCheck(L_12);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m18305 (MethodDictionary_t4609 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(12 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* MethodDictionary_t4609_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t4616_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t4881_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m18306 (MethodDictionary_t4609 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t4609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8113);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IMethodMessage_t4616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8114);
		IMethodReturnMessage_t4881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8115);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0120;
		}
	}
	{
		Dictionary_2_t223 * L_2 = ((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4230, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4231, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4232, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4233, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4235, 4);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral4234, 5);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral4247, 6);
		Dictionary_2_t223 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral4248, 7);
		Dictionary_2_t223 * L_12 = V_1;
		((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t223 * L_13 = ((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_4;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_00b6;
		}
		if (L_16 == 1)
		{
			goto IL_00c2;
		}
		if (L_16 == 2)
		{
			goto IL_00ce;
		}
		if (L_16 == 3)
		{
			goto IL_00da;
		}
		if (L_16 == 4)
		{
			goto IL_00e6;
		}
		if (L_16 == 5)
		{
			goto IL_00f2;
		}
		if (L_16 == 6)
		{
			goto IL_00fe;
		}
		if (L_16 == 7)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_0120;
	}

IL_00b6:
	{
		Object_t * L_17 = (__this->____message_1);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c2:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00ce:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00da:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00e6:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t4613 * L_26 = (LogicalCallContext_t4613 *)InterfaceFuncInvoker0< LogicalCallContext_t4613 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f2:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t682* L_28 = (ObjectU5BU5D_t682*)InterfaceFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_00fe:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t682* L_30 = (ObjectU5BU5D_t682*)InterfaceFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_010f:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* MethodDictionary_t4609_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t4892_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" void MethodDictionary_SetMethodProperty_m18307 (MethodDictionary_t4609 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t4609_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8113);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IInternalMessage_t4892_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8116);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Dictionary_2_t223 * V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___key;
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c2;
		}
	}
	{
		Dictionary_2_t223 * L_2 = ((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral4235, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral4247, 0);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral4248, 0);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral4231, 1);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4232, 1);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral4233, 1);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral4234, 1);
		Dictionary_2_t223 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral4230, 2);
		Dictionary_2_t223 * L_12 = V_1;
		((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t223 * L_13 = ((MethodDictionary_t4609_StaticFields*)MethodDictionary_t4609_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map22_5;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_13, L_14, (&V_2));
		if (!L_15)
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_16 = V_2;
		if (L_16 == 0)
		{
			goto IL_009f;
		}
		if (L_16 == 1)
		{
			goto IL_00a0;
		}
		if (L_16 == 2)
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_00c2;
	}

IL_009f:
	{
		return;
	}

IL_00a0:
	{
		ArgumentException_t711 * L_17 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_17, (String_t*) &_stringLiteral4236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t4892_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t4892_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t4892_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Keys_m18308 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t698 * V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000a:
	{
		ArrayList_t698 * L_1 = V_0;
		StringU5BU5D_t75* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		StringU5BU5D_t75* L_7 = (__this->____methodKeys_2);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_8 = (__this->____internalProperties_0);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t685_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t104_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0043:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			V_2 = ((String_t*)Castclass(L_13, String_t_il2cpp_TypeInfo_var));
			String_t* L_14 = V_2;
			bool L_15 = MethodDictionary_IsOverridenKey_m18303(__this, L_14, /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0060;
			}
		}

IL_0058:
		{
			ArrayList_t698 * L_16 = V_0;
			String_t* L_17 = V_2;
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0060:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0043;
			}
		}

IL_0068:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		{
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(106)
		}

IL_0077:
		{
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(106)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007f:
	{
		ArrayList_t698 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2139_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m18309 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t698 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t2139  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		ArrayList_t698 * L_1 = V_0;
		StringU5BU5D_t75* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(17 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0023:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t75* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0091;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t685_il2cpp_TypeInfo_var, L_10);
		V_3 = L_11;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0044:
		{
			Object_t * L_12 = V_3;
			NullCheck(L_12);
			Object_t * L_13 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			V_2 = ((*(DictionaryEntry_t2139 *)((DictionaryEntry_t2139 *)UnBox (L_13, DictionaryEntry_t2139_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m7770((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m18303(__this, ((String_t*)Castclass(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			ArrayList_t698 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m7771((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
		}

IL_0072:
		{
			Object_t * L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0044;
			}
		}

IL_007a:
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
			Object_t * L_20 = V_3;
			V_4 = ((Object_t *)IsInst(L_20, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_21 = V_4;
			if (L_21)
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
			Object_t * L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_22);
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
		ArrayList_t698 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m18310 (MethodDictionary_t4609 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0028;
	}

IL_000b:
	{
		StringU5BU5D_t75* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_6 = V_0;
		Object_t * L_7 = ___value;
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(18 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		StringU5BU5D_t75* L_10 = (__this->____methodKeys_2);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(16 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m18311 (MethodDictionary_t4609 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		StringU5BU5D_t75* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		StringU5BU5D_t75* L_8 = (__this->____methodKeys_2);
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_9 = (__this->____internalProperties_0);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		Object_t * L_11 = ___key;
		NullCheck(L_10);
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(4 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Remove_m18312 (MethodDictionary_t4609 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		Object_t * L_0 = ___key;
		V_0 = ((String_t*)Castclass(L_0, String_t_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_002a;
	}

IL_000b:
	{
		StringU5BU5D_t75* L_1 = (__this->____methodKeys_2);
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_5 = String_op_Equality_m456(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_1, L_3)), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t711 * L_6 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_6, (String_t*) &_stringLiteral4236, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002a:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t75* L_9 = (__this->____methodKeys_2);
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		Object_t * L_10 = (__this->____internalProperties_0);
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Object_t * L_11 = (__this->____internalProperties_0);
		Object_t * L_12 = ___key;
		NullCheck(L_11);
		InterfaceActionInvoker1< Object_t * >::Invoke(6 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m18313 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t754_il2cpp_TypeInfo_var, L_1);
		StringU5BU5D_t75* L_3 = (__this->____methodKeys_2);
		NullCheck(L_3);
		return ((int32_t)((int32_t)L_2+(int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))));
	}

IL_001d:
	{
		StringU5BU5D_t75* L_4 = (__this->____methodKeys_2);
		NullCheck(L_4);
		return (((int32_t)(((Array_t *)L_4)->max_length)));
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
extern "C" bool MethodDictionary_get_IsSynchronized_m18314 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m18315 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t754_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m18316 (MethodDictionary_t4609 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t754_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t754_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t4615_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m18317 (MethodDictionary_t4609 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t4615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8112);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t4615 * L_0 = (DictionaryEnumerator_t4615 *)il2cpp_codegen_object_new (DictionaryEnumerator_t4615_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m18291(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDicti.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodReturnDictiMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern TypeInfo* IMethodReturnMessage_t4881_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t4617_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m18318 (MethodReturnDictionary_t4617 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t4881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8115);
		MethodReturnDictionary_t4617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8117);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m18298(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t57 * L_2 = (Exception_t57 *)InterfaceFuncInvoker0< Exception_t57 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t4881_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t4617_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_3 = ((MethodReturnDictionary_t4617_StaticFields*)MethodReturnDictionary_t4617_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m18300(__this, L_3, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t4617_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_4 = ((MethodReturnDictionary_t4617_StaticFields*)MethodReturnDictionary_t4617_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m18300(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t4617_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__cctor_m18319 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		MethodReturnDictionary_t4617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8117);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral4230);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral4230;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral4231);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral4231;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral4232);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral4232;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral4233);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral4233;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral4247);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral4247;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral4248);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral4248;
		StringU5BU5D_t75* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral4235);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral4235;
		((MethodReturnDictionary_t4617_StaticFields*)MethodReturnDictionary_t4617_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t75* L_7 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral4235);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)(String_t*) &_stringLiteral4235;
		((MethodReturnDictionary_t4617_StaticFields*)MethodReturnDictionary_t4617_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t682* MonoMethodMessage_get_Args_m18320 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t4613 * MonoMethodMessage_get_LogicalCallContext_m18321 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t4613 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t1525 * MonoMethodMessage_get_MethodBase_m18322 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m18323 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoMethod::get_Name() */, L_2);
		return L_3;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m18324 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1458* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t1203* L_0 = (__this->___methodSignature_7);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1458* L_2 = (ParameterInfoU5BU5D_t1458*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1458* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1458* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_7 = ((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		TypeU5BU5D_t1203* L_4 = (__this->___methodSignature_7);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t1458* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_6, L_8)));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		ArrayElementTypeCheck (L_4, L_9);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_4, L_5)) = (Type_t *)L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003a:
	{
		int32_t L_11 = V_1;
		ParameterInfoU5BU5D_t1458* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		TypeU5BU5D_t1203* L_13 = (__this->___methodSignature_7);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m18325 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		MonoMethod_t * L_2 = (__this->___method_0);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MonoMethod::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		return L_4;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m18326 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m18327 (MonoMethodMessage_t4603 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_6 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t57 * MonoMethodMessage_get_Exception_m18328 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m18329 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t66* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t682* L_0 = (__this->___args_1);
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
		V_0 = 0;
		ByteU5BU5D_t66* L_1 = (__this->___arg_types_2);
		V_2 = L_1;
		V_3 = 0;
		goto IL_0028;
	}

IL_0017:
	{
		ByteU5BU5D_t66* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_1 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_4));
		uint8_t L_5 = V_1;
		if (!((int32_t)((int32_t)L_5&(int32_t)2)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_0024:
	{
		int32_t L_7 = V_3;
		V_3 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0028:
	{
		int32_t L_8 = V_3;
		ByteU5BU5D_t66* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t682* MonoMethodMessage_get_OutArgs_m18330 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t682* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t66* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t682* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t682*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, L_2));
		int32_t L_3 = 0;
		V_1 = L_3;
		V_0 = L_3;
		ByteU5BU5D_t66* L_4 = (__this->___arg_types_2);
		V_5 = L_4;
		V_6 = 0;
		goto IL_004f;
	}

IL_0029:
	{
		ByteU5BU5D_t66* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_4 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_7));
		uint8_t L_8 = V_4;
		if (!((int32_t)((int32_t)L_8&(int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t682* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t682* L_12 = (__this->___args_1);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, (*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema(L_12, L_14));
	}

IL_0045:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)((int32_t)L_15+(int32_t)1));
		int32_t L_16 = V_6;
		V_6 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_17 = V_6;
		ByteU5BU5D_t66* L_18 = V_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t682* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m18331 (MonoMethodMessage_t4603 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m18332 (RemotingSurrogate_t4618 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m18333 (RemotingSurrogate_t4618 * __this, Object_t * ___obj, SerializationInfo_t2919 * ___si, StreamingContext_t2920  ___sc, Object_t * ___selector, const MethodInfo* method)
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
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m18334 (ObjRefSurrogate_t4619 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m18335 (ObjRefSurrogate_t4619 * __this, Object_t * ___obj, SerializationInfo_t2919 * ___si, StreamingContext_t2920  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10416(L_0, (String_t*) &_stringLiteral4250, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m18336 (RemotingSurrogateSelector_t4621 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const Il2CppType* ObjRef_t4632_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t4619_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t4618_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m18337 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_0_0_0_var = il2cpp_codegen_type_from_index(8118);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8119);
		ObjRefSurrogate_t4619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8120);
		RemotingSurrogate_t4618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8121);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ObjRef_t4632_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t4619 * L_1 = (ObjRefSurrogate_t4619 *)il2cpp_codegen_object_new (ObjRefSurrogate_t4619_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m18334(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t4618 * L_2 = (RemotingSurrogate_t4618 *)il2cpp_codegen_object_new (RemotingSurrogate_t4618_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m18332(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern TypeInfo* RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t4620_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m18338 (RemotingSurrogateSelector_t4621 * __this, Type_t * ___type, StreamingContext_t2920  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8119);
		ISurrogateSelector_t4620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8122);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Object_t ** L_2 = ___ssout;
		*((Object_t **)(L_2)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var);
		RemotingSurrogate_t4618 * L_3 = ((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t4619 * L_8 = ((RemotingSurrogateSelector_t4621_StaticFields*)RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
		return L_8;
	}

IL_0027:
	{
		Object_t * L_9 = (__this->____next_3);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		Object_t * L_10 = (__this->____next_3);
		Type_t * L_11 = ___type;
		StreamingContext_t2920  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t2920 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t4620_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.ReturnMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_ReturnMessageMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Object,System.Object[],System.Int32,System.Runtime.Remoting.Messaging.LogicalCallContext,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t4616_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m18339 (ReturnMessage_t4622 * __this, Object_t * ___ret, ObjectU5BU5D_t682* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t4613 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t4616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8114);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t682* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t4613 * L_3 = ___callCtx;
		__this->____callCtx_3 = L_3;
		Object_t * L_4 = ___mcm;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_5 = ___mcm;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t1525 * L_8 = (MethodBase_t1525 *)InterfaceFuncInvoker0< MethodBase_t1525 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0041:
	{
		ObjectU5BU5D_t682* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t4616_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m18340 (ReturnMessage_t4622 * __this, Exception_t57 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t4616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8114);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Exception_t57 * L_0 = ___e;
		__this->____exception_6 = L_0;
		Object_t * L_1 = ___mcm;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Object_t * L_2 = ___mcm;
		NullCheck(L_2);
		MethodBase_t1525 * L_3 = (MethodBase_t1525 *)InterfaceFuncInvoker0< MethodBase_t1525 * >::Invoke(2 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t4613 * L_5 = (LogicalCallContext_t4613 *)InterfaceFuncInvoker0< LogicalCallContext_t4613 * >::Invoke(1 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_0028:
	{
		__this->____args_1 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m18341 (ReturnMessage_t4622 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t682* ReturnMessage_get_Args_m18342 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t682* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t4613_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t4613 * ReturnMessage_get_LogicalCallContext_m18343 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t4613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8110);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t4613 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t4613 * L_1 = (LogicalCallContext_t4613 *)il2cpp_codegen_object_new (LogicalCallContext_t4613_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m18263(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t4613 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t1525 * ReturnMessage_get_MethodBase_m18344 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1525 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m18345 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1525 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = (__this->____methodName_8);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodBase_t1525 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		__this->____methodName_8 = L_3;
	}

IL_0021:
	{
		String_t* L_4 = (__this->____methodName_8);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodSignature()
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m18346 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1458* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t1525 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		TypeU5BU5D_t1203* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1525 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t1458* L_3 = (ParameterInfoU5BU5D_t1458*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1458* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t1458* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t1203* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t1458* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1383 **)(ParameterInfo_t1383 **)SZArrayLdElema(L_7, L_9)));
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		ArrayElementTypeCheck (L_5, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, L_6)) = (Type_t *)L_10;
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_12 = V_1;
		ParameterInfoU5BU5D_t1458* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t1203* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern TypeInfo* MethodReturnDictionary_t4617_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m18347 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t4617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8117);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t4617 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MethodReturnDictionary_t4617 * L_1 = (MethodReturnDictionary_t4617 *)il2cpp_codegen_object_new (MethodReturnDictionary_t4617_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m18318(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0014:
	{
		MethodReturnDictionary_t4617 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m18348 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1525 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_1 = (__this->____typeName_10);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		MethodBase_t1525 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_3);
		__this->____typeName_10 = L_4;
	}

IL_0026:
	{
		String_t* L_5 = (__this->____typeName_10);
		return L_5;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_Uri()
extern "C" String_t* ReturnMessage_get_Uri_m18349 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m18350 (ReturnMessage_t4622 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t57 * ReturnMessage_get_Exception_m18351 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern TypeInfo* ArgInfo_t4601_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t682* ReturnMessage_get_OutArgs_m18352 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t4601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8123);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t682* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t682* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		ArgInfo_t4601 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MethodBase_t1525 * L_3 = (MethodBase_t1525 *)VirtFuncInvoker0< MethodBase_t1525 * >::Invoke(7 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t4601 * L_4 = (ArgInfo_t4601 *)il2cpp_codegen_object_new (ArgInfo_t4601_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m18221(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_002a:
	{
		ArgInfo_t4601 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t682* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t682* L_7 = ArgInfo_GetInOutArgs_m18222(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_0041:
	{
		ObjectU5BU5D_t682* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m18353 (ReturnMessage_t4622 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"


// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t4627_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t4076_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t4076 * ProxyAttribute_CreateInstance_m18354 (ProxyAttribute_t4623 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		RemotingProxy_t4627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8124);
		MarshalByRefObject_t4076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7654);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t4627 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t4627 * L_2 = (RemotingProxy_t4627 *)il2cpp_codegen_object_new (RemotingProxy_t4627_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m18367(L_2, L_0, L_1, (ObjectU5BU5D_t682*)(ObjectU5BU5D_t682*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t4627 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t4076 *)Castclass(L_4, MarshalByRefObject_t4076_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" RealProxy_t4624 * ProxyAttribute_CreateProxy_m18355 (ProxyAttribute_t4623 * __this, ObjRef_t4632 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t4597 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t4632 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m18429(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t4624 * L_3 = RemotingServices_GetRealProxy_m18418(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m18356 (ProxyAttribute_t4623 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m18357 (ProxyAttribute_t4623 * __this, Context_t4597 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m18358 (RealProxy_t4624 * __this, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m18360(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m18359 (RealProxy_t4624 * __this, Type_t * ___classToProxy, ClientIdentity_t4633 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___classToProxy;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		RealProxy__ctor_m18360(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t4633 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern TypeInfo* ArgumentException_t711_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m18360 (RealProxy_t4624 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IntPtr_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(76);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____targetDomainId_1 = (-1);
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___classToProxy;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Type::get_IsMarshalByRef() */, L_0);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		Type_t * L_2 = ___classToProxy;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t711 * L_4 = (ArgumentException_t711 *)il2cpp_codegen_object_new (ArgumentException_t711_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4069(L_4, (String_t*) &_stringLiteral4251, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m10114(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		NotSupportedException_t56 * L_9 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10416(L_9, (String_t*) &_stringLiteral4252, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m18361 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	typedef Type_t * (*RealProxy_InternalGetProxyType_m18361_ftn) (Object_t *);
	static RealProxy_InternalGetProxyType_m18361_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetProxyType_m18361_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const Il2CppType* MarshalByRefObject_t4076_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m18362 (RealProxy_t4624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4076_0_0_0_var = il2cpp_codegen_type_from_index(7654);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_1 = (__this->___class_to_proxy_0);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_1);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		return L_3;
	}

IL_0020:
	{
		Type_t * L_4 = (__this->___class_to_proxy_0);
		return L_4;
	}

IL_0027:
	{
		Object_t * L_5 = (__this->____objTP_4);
		Type_t * L_6 = RealProxy_InternalGetProxyType_m18361(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m18363 (RealProxy_t4624 * __this, String_t* ___className, const MethodInfo* method)
{
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m18363_ftn) (RealProxy_t4624 *, String_t*);
	static RealProxy_InternalGetTransparentProxy_m18363_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetTransparentProxy_m18363_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const Il2CppType* MarshalByRefObject_t4076_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m18364 (RealProxy_t4624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4076_0_0_0_var = il2cpp_codegen_type_from_index(7654);
		IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8125);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	{
		Object_t * L_0 = (__this->____objTP_4);
		if (L_0)
		{
			goto IL_005a;
		}
	}
	{
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		String_t* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m456(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003f;
		}
	}

IL_0033:
	{
		Type_t * L_9 = (__this->___class_to_proxy_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_9);
		V_0 = L_10;
	}

IL_003f:
	{
		goto IL_004d;
	}

IL_0041:
	{
		Type_t * L_11 = (__this->___class_to_proxy_0);
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_11);
		V_0 = L_12;
	}

IL_004d:
	{
		String_t* L_13 = V_0;
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m18365 (RealProxy_t4624 * __this, int32_t ___domainId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___domainId;
		__this->____targetDomainId_1 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m18366 (RemotingProxy_t4627 * __this, Type_t * ___type, ClientIdentity_t4633 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t4633 * L_1 = ___identity;
		RealProxy__ctor_m18359(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t4633 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m18380(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t4633 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m18389(L_4, /*hidden argument*/NULL);
		((RealProxy_t4624 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m18367 (RemotingProxy_t4627 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m18358(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t682* L_3 = ___activationAttributes;
		ConstructionCall_t4606 * L_4 = ActivationServices_CreateConstructionCall_m18174(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t4627_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy__cctor_m18368 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingProxy_t4627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8124);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, (String_t*) &_stringLiteral4253);
		((RemotingProxy_t4627_StaticFields*)RemotingProxy_t4627_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(47 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, (String_t*) &_stringLiteral4254);
		((RemotingProxy_t4627_StaticFields*)RemotingProxy_t4627_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t4633_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m18369 (RemotingProxy_t4627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t4633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8126);
		IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8125);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t4632 * V_0 = {0};
	{
		Identity_t4626 * L_0 = (((RealProxy_t4624 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t4633 *)IsInst(L_0, ClientIdentity_t4633_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Identity_t4626 * L_1 = (((RealProxy_t4624 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t4632 * L_2 = (ObjRef_t4632 *)VirtFuncInvoker1< ObjRef_t4632 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t4632 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ObjRef_t4632 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_002e:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m18362(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern TypeInfo* ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m18370 (RemotingProxy_t4627 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8127);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
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
			Identity_t4626 * L_0 = (((RealProxy_t4624 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			Identity_t4626 * L_1 = (((RealProxy_t4624 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t4641 *)IsInst(L_1, ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var)))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			Identity_t4626 * L_2 = (((RealProxy_t4624 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m18432(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		}

IL_0020:
		{
			IL2CPP_LEAVE(0x29, FINALLY_0022);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0022;
	}

FINALLY_0022:
	{ // begin finally (depth: 1)
		Object_Finalize_m490(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(34)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(34)
	{
		IL2CPP_JUMP_TBL(0x29, IL_0029)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0029:
	{
		return;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"



// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t4628_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m18371 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		TrackingServices_t4628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8128);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t698 * L_0 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_0, /*hidden argument*/NULL);
		((TrackingServices_t4628_StaticFields*)TrackingServices_t4628_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t4894_0_0_0_var;
extern TypeInfo* TrackingServices_t4628_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t4893_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t4894_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m18372 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t4632 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t4894_0_0_0_var = il2cpp_codegen_type_from_index(8129);
		TrackingServices_t4628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8128);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ITrackingHandlerU5BU5D_t4893_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8130);
		ITrackingHandler_t4894_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8129);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t4893* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
		ArrayList_t698 * L_0 = ((TrackingServices_t4628_StaticFields*)TrackingServices_t4628_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(28 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_3 = ((TrackingServices_t4628_StaticFields*)TrackingServices_t4628_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
			ArrayList_t698 * L_5 = ((TrackingServices_t4628_StaticFields*)TrackingServices_t4628_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t4894_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(47 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t4893*)Castclass(L_7, ITrackingHandlerU5BU5D_t4893_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_1;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0054;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t4893* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t4632 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t4632 * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t4894_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t4893* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"


// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m18373 (ActivatedClientTypeEntry_t4629 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t4883* ActivatedClientTypeEntry_get_ContextAttributes_m18374 (ActivatedClientTypeEntry_t4629 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t4883*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m18375 (ActivatedClientTypeEntry_t4629 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m18376 (ActivatedClientTypeEntry_t4629 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m18441(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m18440(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m18373(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfo.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.EnvoyInfo
#include "mscorlib_System_Runtime_Remoting_EnvoyInfoMethodDeclarations.h"



// System.Void System.Runtime.Remoting.EnvoyInfo::.ctor(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void EnvoyInfo__ctor_m18377 (EnvoyInfo_t4631 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m18378 (EnvoyInfo_t4631 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m18379 (Identity_t4626 * __this, String_t* ___objectUri, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___objectUri;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type)
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::get_ChannelSink()
extern "C" Object_t * Identity_get_ChannelSink_m18380 (Identity_t4626 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m18381 (Identity_t4626 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m18382 (Identity_t4626 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m18383 (Identity_t4626 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m18384 (Identity_t4626 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern TypeInfo* IEnvoyInfo_t4636_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m18385 (ClientIdentity_t4633 * __this, String_t* ___objectUri, ObjRef_t4632 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t4636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8131);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t4633 * G_B2_0 = {0};
	ClientIdentity_t4633 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t4633 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m18379(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t4632 * L_1 = ___objRef;
		((Identity_t4626 *)__this)->____objRef_3 = L_1;
		ObjRef_t4632 * L_2 = (((Identity_t4626 *)__this)->____objRef_3);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_2);
		G_B1_0 = __this;
		if (!L_3)
		{
			G_B2_0 = __this;
			goto IL_0030;
		}
	}
	{
		ObjRef_t4632 * L_4 = (((Identity_t4626 *)__this)->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t4636_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
		Object_t * L_7 = V_0;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = ((Object_t *)(NULL));
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		((Identity_t4626 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t4076_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t4076 * ClientIdentity_get_ClientProxy_m18386 (ClientIdentity_t4633 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7654);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t2224 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t4076 *)Castclass(L_1, MarshalByRefObject_t4076_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern TypeInfo* WeakReference_t2224_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m18387 (ClientIdentity_t4633 * __this, MarshalByRefObject_t4076 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2224_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t4076 * L_0 = ___value;
		WeakReference_t2224 * L_1 = (WeakReference_t2224 *)il2cpp_codegen_object_new (WeakReference_t2224_il2cpp_TypeInfo_var);
		WeakReference__ctor_m15139(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t4632 * ClientIdentity_CreateObjRef_m18388 (ClientIdentity_t4633 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t4632 * L_0 = (((Identity_t4626 *)__this)->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m18389 (ClientIdentity_t4633 * __this, const MethodInfo* method)
{
	{
		ObjRef_t4632 * L_0 = (((Identity_t4626 *)__this)->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m18390 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m18403(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t4632_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t4634_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t4636_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t98_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m3846_MethodInfo_var;
extern "C" void ObjRef__ctor_m18391 (ObjRef_t4632 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8118);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8125);
		IChannelInfo_t4634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8132);
		IEnvoyInfo_t4636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8131);
		IConvertible_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Dictionary_2__ctor_m3846_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t4679 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t223 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t4679 * L_1 = SerializationInfo_GetEnumerator_m18557(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t4679 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m18568(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_5 = ((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t223 * L_6 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3846(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m3846_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t223 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral2302, 0);
		Dictionary_2_t223 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral4255, 1);
		Dictionary_2_t223 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral4256, 2);
		Dictionary_2_t223 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral4257, 3);
		Dictionary_2_t223 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral4258, 4);
		Dictionary_2_t223 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, (String_t*) &_stringLiteral4259, 5);
		Dictionary_2_t223 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_14 = ((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_8;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, L_14, L_15, (&V_6));
		if (!L_16)
		{
			goto IL_014f;
		}
	}
	{
		int32_t L_17 = V_6;
		if (L_17 == 0)
		{
			goto IL_00be;
		}
		if (L_17 == 1)
		{
			goto IL_00d4;
		}
		if (L_17 == 2)
		{
			goto IL_00ea;
		}
		if (L_17 == 3)
		{
			goto IL_00fd;
		}
		if (L_17 == 4)
		{
			goto IL_0110;
		}
		if (L_17 == 5)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_014f;
	}

IL_00be:
	{
		SerializationInfoEnumerator_t4679 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m18569(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00d4:
	{
		SerializationInfoEnumerator_t4679 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m18569(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t4679 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m18569(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t4634_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00fd:
	{
		SerializationInfoEnumerator_t4679 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m18569(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t4636_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_0110:
	{
		SerializationInfoEnumerator_t4679 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m18569(L_26, /*hidden argument*/NULL);
		V_3 = L_27;
		Object_t * L_28 = V_3;
		if (!((String_t*)IsInst(L_28, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_012e;
		}
	}
	{
		Object_t * L_29 = V_3;
		NullCheck(((Object_t *)Castclass(L_29, IConvertible_t98_il2cpp_TypeInfo_var)));
		int32_t L_30 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t98_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IConvertible_t98_il2cpp_TypeInfo_var)), (Object_t *)NULL);
		V_2 = L_30;
		goto IL_0135;
	}

IL_012e:
	{
		Object_t * L_31 = V_3;
		V_2 = ((*(int32_t*)((int32_t*)UnBox (L_31, Int32_t82_il2cpp_TypeInfo_var))));
	}

IL_0135:
	{
		int32_t L_32 = V_2;
		if (L_32)
		{
			goto IL_013a;
		}
	}
	{
		V_1 = 0;
	}

IL_013a:
	{
		goto IL_0155;
	}

IL_013c:
	{
		SerializationInfoEnumerator_t4679 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m18569(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m3892(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		__this->___flags_4 = L_35;
		goto IL_0155;
	}

IL_014f:
	{
		NotSupportedException_t56 * L_36 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m397(L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_36);
	}

IL_0155:
	{
		SerializationInfoEnumerator_t4679 * L_37 = V_0;
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext() */, L_37);
		if (L_38)
		{
			goto IL_0014;
		}
	}
	{
		bool L_39 = V_1;
		if (!L_39)
		{
			goto IL_0175;
		}
	}
	{
		int32_t L_40 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t4632_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m18392 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8118);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t4632_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m18393 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8118);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m18394 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m18395 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m18396 (ObjRef_t4632 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m18397 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m18398 (ObjRef_t4632 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m18399 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m18400 (ObjRef_t4632 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IRemotingTypeInfo_t4635_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t4636_0_0_0_var;
extern const Il2CppType* IChannelInfo_t4634_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void ObjRef_GetObjectData_m18401 (ObjRef_t4632 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t4635_0_0_0_var = il2cpp_codegen_type_from_index(8125);
		IEnvoyInfo_t4636_0_0_0_var = il2cpp_codegen_type_from_index(8131);
		IChannelInfo_t4634_0_0_0_var = il2cpp_codegen_type_from_index(8132);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2919 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m4060(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m18556(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m11464(L_2, (String_t*) &_stringLiteral2302, L_3, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t4635_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m15070(L_4, (String_t*) &_stringLiteral4255, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t4636_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m15070(L_7, (String_t*) &_stringLiteral4257, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t4634_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m15070(L_10, (String_t*) &_stringLiteral4256, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m11463(L_13, (String_t*) &_stringLiteral4259, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t4632_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m18402 (ObjRef_t4632 * __this, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8118);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t4632_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t4632_StaticFields*)ObjRef_t4632_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m18416(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern TypeInfo* ChannelInfo_t4591_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m18403 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t4591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8133);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t4591 * L_0 = (ChannelInfo_t4591 *)il2cpp_codegen_object_new (ChannelInfo_t4591_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m18184(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m18404 (ObjRef_t4632 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8125);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = (__this->____serverType_5);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_1 = (__this->___typeInfo_2);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t4635_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetType_m7462(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->____serverType_5 = L_3;
	}

IL_001e:
	{
		Type_t * L_4 = (__this->____serverType_5);
		return L_4;
	}
}
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfiguration.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m18405 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_5 = L_0;
		Hashtable_t696 * L_1 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6 = L_1;
		Hashtable_t696 * L_2 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_7 = L_2;
		Hashtable_t696 * L_3 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_8 = L_3;
		Hashtable_t696 * L_4 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9 = L_4;
		Hashtable_t696 * L_5 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_10 = L_5;
		Hashtable_t696 * L_6 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_11 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m18406 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m18407 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m19345(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t4629_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t4629 * RemotingConfiguration_IsRemotelyActivatedClientType_m18408 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		ActivatedClientTypeEntry_t4629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8134);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t696 * V_0 = {0};
	ActivatedClientTypeEntry_t4629 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		Hashtable_t696 * L_0 = ((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9;
		V_0 = L_0;
		Hashtable_t696 * L_1 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_2 = ((RemotingConfiguration_t4637_StaticFields*)RemotingConfiguration_t4637_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t4629 *)IsInst(L_4, ActivatedClientTypeEntry_t4629_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x28, FINALLY_0021);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		Hashtable_t696 * L_5 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0028:
	{
		ActivatedClientTypeEntry_t4629 * L_6 = V_1;
		return L_6;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C" void RemotingException__ctor_m18409 (RemotingException_t4638 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m11456(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m18410 (RemotingException_t4638 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m11462(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingException__ctor_m18411 (RemotingException_t4638 * __this, SerializationInfo_t2919 * ___info, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2919 * L_0 = ___info;
		StreamingContext_t2920  L_1 = ___context;
		SystemException__ctor_m11458(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Guid
#include "mscorlib_System_Guid.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern const Il2CppType* RemoteActivator_t4588_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t4639_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t74_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void RemotingServices__cctor_m18412 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteActivator_t4588_0_0_0_var = il2cpp_codegen_type_from_index(8135);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8119);
		BinaryFormatter_t4639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8136);
		Guid_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	RemotingSurrogateSelector_t4621 * V_0 = {0};
	StreamingContext_t2920  V_1 = {0};
	Guid_t74  V_2 = {0};
	{
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___next_id_4 = 1;
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5 = ((int32_t)52);
		RemotingSurrogateSelector_t4621 * L_1 = (RemotingSurrogateSelector_t4621 *)il2cpp_codegen_object_new (RemotingSurrogateSelector_t4621_il2cpp_TypeInfo_var);
		RemotingSurrogateSelector__ctor_m18336(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		StreamingContext__ctor_m18573((&V_1), ((int32_t)16), NULL, /*hidden argument*/NULL);
		RemotingSurrogateSelector_t4621 * L_2 = V_0;
		StreamingContext_t2920  L_3 = V_1;
		BinaryFormatter_t4639 * L_4 = (BinaryFormatter_t4639 *)il2cpp_codegen_object_new (BinaryFormatter_t4639_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m18449(L_4, L_2, L_3, /*hidden argument*/NULL);
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t2920  L_5 = V_1;
		BinaryFormatter_t4639 * L_6 = (BinaryFormatter_t4639 *)il2cpp_codegen_object_new (BinaryFormatter_t4639_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m18449(L_6, (Object_t *)NULL, L_5, /*hidden argument*/NULL);
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t4639 * L_7 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m18451(L_7, 1, /*hidden argument*/NULL);
		BinaryFormatter_t4639 * L_8 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m18451(L_8, 1, /*hidden argument*/NULL);
		RemotingServices_RegisterInternalChannels_m18431(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t74_il2cpp_TypeInfo_var);
		Guid_t74  L_9 = Guid_NewGuid_m447(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m448((&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m4130(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(RemoteActivator_t4588_0_0_0_var), /*hidden argument*/NULL);
		RemotingServices_CreateWellKnownServerIdentity_m18427(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral4260, 1, /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_14, (String_t*) &_stringLiteral4261, ((int32_t)36));
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_16, (String_t*) &_stringLiteral4262, ((int32_t)36));
		((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t1525 * RemotingServices_GetVirtualMethod_m18413 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t1525 * ___method, const MethodInfo* method)
{
	typedef MethodBase_t1525 * (*RemotingServices_GetVirtualMethod_m18413_ftn) (Type_t *, MethodBase_t1525 *);
	static RemotingServices_GetVirtualMethod_m18413_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_GetVirtualMethod_m18413_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m18414 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	typedef bool (*RemotingServices_IsTransparentProxy_m18414_ftn) (Object_t *);
	static RemotingServices_IsTransparentProxy_m18414_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_IsTransparentProxy_m18414_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)");
	return _il2cpp_icall_func(___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* ServerIdentity_t4356_il2cpp_TypeInfo_var;
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m18415 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		ServerIdentity_t4356_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8137);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t4356 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Identity_t4626 * L_1 = RemotingServices_GetIdentityForUri_m18424(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ServerIdentity_t4356 *)IsInst(L_1, ServerIdentity_t4356_il2cpp_TypeInfo_var));
		ServerIdentity_t4356 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0011:
	{
		ServerIdentity_t4356 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m18435(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m18416 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objectRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t4632 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_1 = RemotingServices_Unmarshal_m18417(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern const Il2CppType* MarshalByRefObject_t4076_0_0_0_var;
extern const Il2CppType* ProxyAttribute_t4623_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t4628_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t4623_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m18417 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objectRef, bool ___fRefine, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4076_0_0_0_var = il2cpp_codegen_type_from_index(7654);
		ProxyAttribute_t4623_0_0_0_var = il2cpp_codegen_type_from_index(8138);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		TrackingServices_t4628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8128);
		ProxyAttribute_t4623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8138);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t4623 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjRef_t4632 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m18404(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0015;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		Type_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		ObjRef_t4632 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m18393(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		ObjRef_t4632 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_10 = RemotingServices_GetRemoteObject_m18430(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t4632 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m18372(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		Object_t * L_13 = V_1;
		return L_13;
	}

IL_003d:
	{
		Type_t * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_14);
		if (!L_15)
		{
			goto IL_0078;
		}
	}
	{
		Type_t * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t4623_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_18 = Attribute_GetCustomAttribute_m15526(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/NULL);
		V_3 = ((ProxyAttribute_t4623 *)Castclass(L_18, ProxyAttribute_t4623_il2cpp_TypeInfo_var));
		ProxyAttribute_t4623 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		ProxyAttribute_t4623 * L_20 = V_3;
		ObjRef_t4632 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t4624 * L_23 = (RealProxy_t4624 *)VirtFuncInvoker4< RealProxy_t4624 *, ObjRef_t4632 *, Type_t *, Object_t *, Context_t4597 * >::Invoke(7 /* System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context) */, L_20, L_21, L_22, NULL, (Context_t4597 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t4632 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m18372(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_0078:
	{
		ObjRef_t4632 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m18429(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t4632 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t4628_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m18372(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern TypeInfo* TransparentProxy_t4625_il2cpp_TypeInfo_var;
extern "C" RealProxy_t4624 * RemotingServices_GetRealProxy_m18418 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		TransparentProxy_t4625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8139);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m18414(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RemotingException_t4638 * L_2 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_2, (String_t*) &_stringLiteral4263, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t4625 *)Castclass(L_3, TransparentProxy_t4625_il2cpp_TypeInfo_var)));
		RealProxy_t4624 * L_4 = (((TransparentProxy_t4625 *)Castclass(L_3, TransparentProxy_t4625_il2cpp_TypeInfo_var))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t4616_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1525 * RemotingServices_GetMethodBaseFromMethodMessage_m18419 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t4616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8114);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m7462(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral4264, L_5, (String_t*) &_stringLiteral4014, /*hidden argument*/NULL);
		RemotingException_t4638 * L_7 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
		RemotingException__ctor_m18410(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002a:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t4616_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_13 = RemotingServices_GetMethodBaseFromName_m18420(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t1203*)Castclass(L_12, TypeU5BU5D_t1203_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1525 * RemotingServices_GetMethodBaseFromName_m18420 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1203* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1525 * V_0 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t * L_2 = ___type;
		String_t* L_3 = ___methodName;
		TypeU5BU5D_t1203* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_5 = RemotingServices_FindInterfaceMethod_m18421(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		V_0 = (MethodBase_t1525 *)NULL;
		TypeU5BU5D_t1203* L_6 = ___signature;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0025:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_13 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1203* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t2953 *, TypeU5BU5D_t1203*, ParameterModifierU5BU5D_t2954* >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_11, L_12, L_13, (Binder_t2953 *)NULL, L_14, (ParameterModifierU5BU5D_t2954*)(ParameterModifierU5BU5D_t2954*)NULL);
		V_0 = L_15;
	}

IL_0035:
	{
		MethodBase_t1525 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_003a;
		}
	}
	{
		MethodBase_t1525 * L_17 = V_0;
		return L_17;
	}

IL_003a:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m456(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral4261, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_004d:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m456(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral4262, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodInfo_t * L_23 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0060:
	{
		TypeU5BU5D_t1203* L_24 = ___signature;
		if (L_24)
		{
			goto IL_0076;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_26 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1203* L_27 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t1381 * L_28 = (ConstructorInfo_t1381 *)VirtFuncInvoker4< ConstructorInfo_t1381 *, int32_t, Binder_t2953 *, TypeU5BU5D_t1203*, ParameterModifierU5BU5D_t2954* >::Invoke(74 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_25, L_26, (Binder_t2953 *)NULL, L_27, (ParameterModifierU5BU5D_t2954*)(ParameterModifierU5BU5D_t2954*)NULL);
		return L_28;
	}

IL_0076:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1203* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t1381 * L_32 = (ConstructorInfo_t1381 *)VirtFuncInvoker4< ConstructorInfo_t1381 *, int32_t, Binder_t2953 *, TypeU5BU5D_t1203*, ParameterModifierU5BU5D_t2954* >::Invoke(74 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_29, L_30, (Binder_t2953 *)NULL, L_31, (ParameterModifierU5BU5D_t2954*)(ParameterModifierU5BU5D_t2954*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1525 * RemotingServices_FindInterfaceMethod_m18421 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1203* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1525 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t1203* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t1525 *)NULL;
		TypeU5BU5D_t1203* L_0 = ___signature;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_3 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0014:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1203* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t2953 *, TypeU5BU5D_t1203*, ParameterModifierU5BU5D_t2954* >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, (Binder_t2953 *)NULL, L_8, (ParameterModifierU5BU5D_t2954*)(ParameterModifierU5BU5D_t2954*)NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		MethodBase_t1525 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		MethodBase_t1525 * L_11 = V_0;
		return L_11;
	}

IL_0029:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t1203* L_13 = (TypeU5BU5D_t1203*)VirtFuncInvoker0< TypeU5BU5D_t1203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		TypeU5BU5D_t1203* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t1203* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		MethodBase_t1525 * L_20 = RemotingServices_FindInterfaceMethod_m18421(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		MethodBase_t1525 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t1525 * L_22 = V_0;
		return L_22;
	}

IL_0046:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t1203* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		return (MethodBase_t1525 *)NULL;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern TypeInfo* ArrayList_t698_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxy_m18422 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t4629 * ___entry, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t698_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t698 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t4629 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t4883* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m18374(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t682* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0047;
		}
	}

IL_000b:
	{
		ArrayList_t698 * L_3 = (ArrayList_t698 *)il2cpp_codegen_object_new (ArrayList_t698_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4133(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ActivatedClientTypeEntry_t4629 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t4883* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m18374(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t698 * L_6 = V_0;
		ActivatedClientTypeEntry_t4629 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t4883* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m18374(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_0025:
	{
		ObjectU5BU5D_t682* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t698 * L_10 = V_0;
		ObjectU5BU5D_t682* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(43 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_002f:
	{
		ActivatedClientTypeEntry_t4629 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m18375(L_12, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t4629 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m18373(L_14, /*hidden argument*/NULL);
		ArrayList_t698 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t682* L_17 = (ObjectU5BU5D_t682*)VirtFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(46 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_16);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m10415(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0047:
	{
		ActivatedClientTypeEntry_t4629 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m18375(L_19, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t4629 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m18373(L_21, /*hidden argument*/NULL);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m10415(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t682*)(ObjectU5BU5D_t682*)NULL, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern const Il2CppType* ProxyAttribute_t4623_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t4623_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t4593_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t4627_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m18423 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t682* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProxyAttribute_t4623_0_0_0_var = il2cpp_codegen_type_from_index(8138);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ProxyAttribute_t4623_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8138);
		ChannelServices_t4593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8091);
		RemotingProxy_t4627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8124);
		s_Il2CppMethodIntialized = true;
	}
	ProxyAttribute_t4623 * V_0 = {0};
	RemotingProxy_t4627 * V_1 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_0);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t4623_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_4 = Attribute_GetCustomAttribute_m15526(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ProxyAttribute_t4623 *)Castclass(L_4, ProxyAttribute_t4623_il2cpp_TypeInfo_var));
		ProxyAttribute_t4623 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ProxyAttribute_t4623 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t4076 * L_8 = (MarshalByRefObject_t4076 *)VirtFuncInvoker1< MarshalByRefObject_t4076 *, Type_t * >::Invoke(6 /* System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type) */, L_6, L_7);
		return L_8;
	}

IL_002a:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t4593_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ChannelServices_t4593_StaticFields*)ChannelServices_t4593_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t682* L_11 = ___activationAttributes;
		RemotingProxy_t4627 * L_12 = (RemotingProxy_t4627 *)il2cpp_codegen_object_new (RemotingProxy_t4627_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m18367(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		RemotingProxy_t4627 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* Identity_t4626_il2cpp_TypeInfo_var;
extern "C" Identity_t4626 * RemotingServices_GetIdentityForUri_m18424 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		Identity_t4626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8140);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Hashtable_t696 * V_1 = {0};
	Identity_t4626 * V_2 = {0};
	Identity_t4626 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		String_t* L_1 = RemotingServices_GetNormalizedUri_m18433(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t696 * L_2 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t696 * L_3 = V_1;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_4 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
			V_2 = ((Identity_t4626 *)Castclass(L_6, Identity_t4626_il2cpp_TypeInfo_var));
			Identity_t4626 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0027:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m18425(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_11 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, L_12);
			V_2 = ((Identity_t4626 *)Castclass(L_13, Identity_t4626_il2cpp_TypeInfo_var));
		}

IL_0042:
		{
			Identity_t4626 * L_14 = V_2;
			V_3 = L_14;
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}

IL_0046:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		Hashtable_t696 * L_15 = V_1;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004f:
	{
		Identity_t4626 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern TypeInfo* RemotingConfiguration_t4637_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m18425 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t4637_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8086);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t4637_il2cpp_TypeInfo_var);
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m18406(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000b:
	{
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral521, L_2, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = ___uri;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = String_StartsWith_m4054(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = ___uri;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m410(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m4122(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0032:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern TypeInfo* IChannelInfo_t4634_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t4633_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t4627_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t4596_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t4076_il2cpp_TypeInfo_var;
extern "C" ClientIdentity_t4633 * RemotingServices_GetOrCreateClientIdentity_m18426 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelInfo_t4634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8132);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		ClientIdentity_t4633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8126);
		RemotingProxy_t4627_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8124);
		CrossAppDomainSink_t4596_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8098);
		MarshalByRefObject_t4076_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7654);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t696 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t4633 * V_5 = {0};
	RemotingProxy_t4627 * V_6 = {0};
	CrossAppDomainSink_t4596 * V_7 = {0};
	ClientIdentity_t4633 * V_8 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t682* G_B3_0 = {0};
	{
		ObjRef_t4632 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ObjRef_t4632 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t682* L_4 = (ObjectU5BU5D_t682*)InterfaceFuncInvoker0< ObjectU5BU5D_t682* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.IChannelInfo::get_ChannelData() */, IChannelInfo_t4634_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((ObjectU5BU5D_t682*)(NULL));
	}

IL_0016:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t4632 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_5);
		Object_t * L_7 = V_0;
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m10414(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		ObjRef_t4632 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_10);
		V_1 = L_11;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Hashtable_t696 * L_12 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t696 * L_13 = V_3;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t4632 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			String_t* L_17 = RemotingServices_GetNormalizedUri_m18433(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			Hashtable_t696 * L_18 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
			V_5 = ((ClientIdentity_t4633 *)IsInst(L_20, ClientIdentity_t4633_il2cpp_TypeInfo_var));
			ClientIdentity_t4633 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_007d;
			}
		}

IL_0063:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t4633 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t4076 * L_24 = ClientIdentity_get_ClientProxy_m18386(L_23, /*hidden argument*/NULL);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			ClientIdentity_t4633 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_0076:
		{
			ClientIdentity_t4633 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m18432(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		}

IL_007d:
		{
			String_t* L_28 = V_1;
			ObjRef_t4632 * L_29 = ___objRef;
			ClientIdentity_t4633 * L_30 = (ClientIdentity_t4633 *)il2cpp_codegen_object_new (ClientIdentity_t4633_il2cpp_TypeInfo_var);
			ClientIdentity__ctor_m18385(L_30, L_28, L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			ClientIdentity_t4633 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m18381(L_31, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_33 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t4633 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00da;
			}
		}

IL_009f:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t4633 * L_38 = V_5;
			RemotingProxy_t4627 * L_39 = (RemotingProxy_t4627 *)il2cpp_codegen_object_new (RemotingProxy_t4627_il2cpp_TypeInfo_var);
			RemotingProxy__ctor_m18366(L_39, L_37, L_38, /*hidden argument*/NULL);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t4596 *)IsInst(L_40, CrossAppDomainSink_t4596_il2cpp_TypeInfo_var));
			CrossAppDomainSink_t4596 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00c3;
			}
		}

IL_00b5:
		{
			RemotingProxy_t4627 * L_42 = V_6;
			CrossAppDomainSink_t4596 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m18199(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m18365(L_42, L_44, /*hidden argument*/NULL);
		}

IL_00c3:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t4627 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t4633 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m18387(L_48, ((MarshalByRefObject_t4076 *)Castclass((*((Object_t **)L_49)), MarshalByRefObject_t4076_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00da:
		{
			ClientIdentity_t4633 * L_50 = V_5;
			V_8 = L_50;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_00e0:
		{
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_00e2;
	}

FINALLY_00e2:
	{ // begin finally (depth: 1)
		Hashtable_t696 * L_51 = V_3;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(226)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(226)
	{
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00e9:
	{
		ClientIdentity_t4633 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern TypeInfo* Context_t4597_il2cpp_TypeInfo_var;
extern TypeInfo* SingleCallIdentity_t4643_il2cpp_TypeInfo_var;
extern TypeInfo* SingletonIdentity_t4642_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" ServerIdentity_t4356 * RemotingServices_CreateWellKnownServerIdentity_m18427 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t4597_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8099);
		SingleCallIdentity_t4643_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8141);
		SingletonIdentity_t4642_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8142);
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t4356 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t4597_il2cpp_TypeInfo_var);
		Context_t4597 * L_2 = Context_get_DefaultContext_m18202(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t4643 * L_4 = (SingleCallIdentity_t4643 *)il2cpp_codegen_object_new (SingleCallIdentity_t4643_il2cpp_TypeInfo_var);
		SingleCallIdentity__ctor_m18439(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0013:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t4597_il2cpp_TypeInfo_var);
		Context_t4597 * L_6 = Context_get_DefaultContext_m18202(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t4642 * L_8 = (SingletonIdentity_t4642 *)il2cpp_codegen_object_new (SingletonIdentity_t4642_il2cpp_TypeInfo_var);
		SingletonIdentity__ctor_m18438(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0020:
	{
		ServerIdentity_t4356 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m18428(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ServerIdentity_t4356 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t4638_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterServerIdentity_m18428 (Object_t * __this /* static, unused */, ServerIdentity_t4356 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t4638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8084);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t696 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Hashtable_t696 * L_0 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t696 * L_1 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_2 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t4356 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m18382(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (!L_5)
			{
				goto IL_0039;
			}
		}

IL_001e:
		{
			ServerIdentity_t4356 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m18382(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral4265, L_7, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
			RemotingException_t4638 * L_9 = (RemotingException_t4638 *)il2cpp_codegen_object_new (RemotingException_t4638_il2cpp_TypeInfo_var);
			RemotingException__ctor_m18410(L_9, L_8, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_10 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t4356 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m18382(L_11, /*hidden argument*/NULL);
			ServerIdentity_t4356 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		Hashtable_t696 * L_14 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(76)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0053:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m18429 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objref, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8127);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t4641 * V_0 = {0};
	{
		ObjRef_t4632 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Identity_t4626 * L_2 = RemotingServices_GetIdentityForUri_m18424(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ClientActivatedIdentity_t4641 *)IsInst(L_2, ClientActivatedIdentity_t4641_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t4641 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ClientActivatedIdentity_t4641 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t4076 * L_5 = ClientActivatedIdentity_GetServerObject_m18437(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		ObjRef_t4632 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetRemoteObject_m18430(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetRemoteObject_m18430 (Object_t * __this /* static, unused */, ObjRef_t4632 * ___objRef, Type_t * ___proxyType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ObjRef_t4632 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		RemotingServices_GetOrCreateClientIdentity_m18426(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern TypeInfo* CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterInternalChannels_m18431 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8096);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t4595_il2cpp_TypeInfo_var);
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m18193(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern TypeInfo* RemotingServices_t4640_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t4633_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_DisposeIdentity_m18432 (Object_t * __this /* static, unused */, Identity_t4626 * ___ident, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t4640_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8087);
		ClientIdentity_t4633_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8126);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t696 * V_0 = {0};
	ClientIdentity_t4633 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
		Hashtable_t696 * L_0 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t696 * L_1 = V_0;
		Monitor_Enter_m7363(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t4626 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m18383(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_004c;
			}
		}

IL_0014:
		{
			Identity_t4626 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t4633 *)IsInst(L_4, ClientIdentity_t4633_il2cpp_TypeInfo_var));
			ClientIdentity_t4633 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_6 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ClientIdentity_t4633 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m18389(L_7, /*hidden argument*/NULL);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m18433(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(30 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_9);
			goto IL_0045;
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t4640_il2cpp_TypeInfo_var);
			Hashtable_t696 * L_10 = ((RemotingServices_t4640_StaticFields*)RemotingServices_t4640_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			Identity_t4626 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m18382(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(30 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_10, L_12);
		}

IL_0045:
		{
			Identity_t4626 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m18384(L_13, 1, /*hidden argument*/NULL);
		}

IL_004c:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Hashtable_t696 * L_14 = V_0;
		Monitor_Exit_m7364(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0055:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C" String_t* RemotingServices_GetNormalizedUri_m18433 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m4054(L_0, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m4122(L_2, 1, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		String_t* L_4 = ___uri;
		return L_4;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m18434 (ServerIdentity_t4356 * __this, String_t* ___objectUri, Context_t4597 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m18379(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t4597 * L_2 = ___context;
		__this->____context_7 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m18435 (ServerIdentity_t4356 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern TypeInfo* ObjRef_t4632_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t4644_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyInfo_t4631_il2cpp_TypeInfo_var;
extern "C" ObjRef_t4632 * ServerIdentity_CreateObjRef_m18436 (ServerIdentity_t4356 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t4632_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8118);
		TypeInfo_t4644_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8143);
		EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8107);
		EnvoyInfo_t4631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8144);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t4632 * L_0 = (((Identity_t4626 *)__this)->____objRef_3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ObjRef_t4632 * L_1 = (((Identity_t4626 *)__this)->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m18403(L_1, /*hidden argument*/NULL);
		ObjRef_t4632 * L_2 = (((Identity_t4626 *)__this)->____objRef_3);
		return L_2;
	}

IL_001a:
	{
		Type_t * L_3 = ___requestedType;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_4 = (__this->____objectType_5);
		___requestedType = L_4;
	}

IL_0027:
	{
		ObjRef_t4632 * L_5 = (ObjRef_t4632 *)il2cpp_codegen_object_new (ObjRef_t4632_il2cpp_TypeInfo_var);
		ObjRef__ctor_m18390(L_5, /*hidden argument*/NULL);
		((Identity_t4626 *)__this)->____objRef_3 = L_5;
		ObjRef_t4632 * L_6 = (((Identity_t4626 *)__this)->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t4644 * L_8 = (TypeInfo_t4644 *)il2cpp_codegen_object_new (TypeInfo_t4644_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m18442(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo) */, L_6, L_8);
		ObjRef_t4632 * L_9 = (((Identity_t4626 *)__this)->____objRef_3);
		String_t* L_10 = (((Identity_t4626 *)__this)->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String) */, L_9, L_10);
		Object_t * L_11 = (((Identity_t4626 *)__this)->____envoySink_2);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_12 = (((Identity_t4626 *)__this)->____envoySink_2);
		if (((EnvoyTerminatorSink_t4610 *)IsInst(L_12, EnvoyTerminatorSink_t4610_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		ObjRef_t4632 * L_13 = (((Identity_t4626 *)__this)->____objRef_3);
		Object_t * L_14 = (((Identity_t4626 *)__this)->____envoySink_2);
		EnvoyInfo_t4631 * L_15 = (EnvoyInfo_t4631 *)il2cpp_codegen_object_new (EnvoyInfo_t4631_il2cpp_TypeInfo_var);
		EnvoyInfo__ctor_m18377(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo) */, L_13, L_15);
	}

IL_007f:
	{
		ObjRef_t4632 * L_16 = (((Identity_t4626 *)__this)->____objRef_3);
		return L_16;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t4076 * ClientActivatedIdentity_GetServerObject_m18437 (ClientActivatedIdentity_t4641 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject_t4076 * L_0 = (((ServerIdentity_t4356 *)__this)->____serverObject_6);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m18438 (SingletonIdentity_t4642 * __this, String_t* ___objectUri, Context_t4597 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t4597 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m18434(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m18439 (SingleCallIdentity_t4643 * __this, String_t* ___objectUri, Context_t4597 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t4597 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m18434(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.TypeEntry::get_AssemblyName()
extern "C" String_t* TypeEntry_get_AssemblyName_m18440 (TypeEntry_t4630 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assembly_name_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_TypeName()
extern "C" String_t* TypeEntry_get_TypeName_m18441 (TypeEntry_t4630 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___type_name_1);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.TypeInfo::.ctor(System.Type)
extern const Il2CppType* MarshalByRefObject_t4076_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void TypeInfo__ctor_m18442 (TypeInfo_t4644 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4076_0_0_0_var = il2cpp_codegen_type_from_index(7654);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t1203* V_3 = {0};
	int32_t V_4 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_0);
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___serverType_0 = L_3;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 0));
		StringU5BU5D_t75* L_4 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_5);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		ArrayElementTypeCheck (L_4, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 0)) = (String_t*)L_6;
		__this->___interfacesImplemented_2 = L_4;
		goto IL_00f2;
	}

IL_0049:
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_7);
		__this->___serverType_0 = L_8;
		V_0 = 0;
		Type_t * L_9 = ___type;
		NullCheck(L_9);
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_9);
		V_1 = L_10;
		goto IL_006b;
	}

IL_0060:
	{
		Type_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_11);
		V_1 = L_12;
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_006b:
	{
		Type_t * L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4076_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_14) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0060;
		}
	}

IL_0085:
	{
		int32_t L_18 = V_0;
		__this->___serverHierarchy_1 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_18));
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_19);
		V_1 = L_20;
		V_2 = 0;
		goto IL_00b5;
	}

IL_009c:
	{
		StringU5BU5D_t75* L_21 = (__this->___serverHierarchy_1);
		int32_t L_22 = V_2;
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_23);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		ArrayElementTypeCheck (L_21, L_24);
		*((String_t**)(String_t**)SZArrayLdElema(L_21, L_22)) = (String_t*)L_24;
		Type_t * L_25 = V_1;
		NullCheck(L_25);
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_25);
		V_1 = L_26;
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00b5:
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_0;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_009c;
		}
	}
	{
		Type_t * L_30 = ___type;
		NullCheck(L_30);
		TypeU5BU5D_t1203* L_31 = (TypeU5BU5D_t1203*)VirtFuncInvoker0< TypeU5BU5D_t1203* >::Invoke(39 /* System.Type[] System.Type::GetInterfaces() */, L_30);
		V_3 = L_31;
		TypeU5BU5D_t1203* L_32 = V_3;
		NullCheck(L_32);
		__this->___interfacesImplemented_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_32)->max_length)))));
		V_4 = 0;
		goto IL_00eb;
	}

IL_00d3:
	{
		StringU5BU5D_t75* L_33 = (__this->___interfacesImplemented_2);
		int32_t L_34 = V_4;
		TypeU5BU5D_t1203* L_35 = V_3;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, L_36);
		int32_t L_37 = L_36;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		String_t* L_38 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, (*(Type_t **)(Type_t **)SZArrayLdElema(L_35, L_37)));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		ArrayElementTypeCheck (L_33, L_38);
		*((String_t**)(String_t**)SZArrayLdElema(L_33, L_34)) = (String_t*)L_38;
		int32_t L_39 = V_4;
		V_4 = ((int32_t)((int32_t)L_39+(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_40 = V_4;
		TypeU5BU5D_t1203* L_41 = V_3;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)(((Array_t *)L_41)->max_length))))))
		{
			goto IL_00d3;
		}
	}

IL_00f2:
	{
		return;
	}
}
// System.String System.Runtime.Remoting.TypeInfo::get_TypeName()
extern "C" String_t* TypeInfo_get_TypeName_m18443 (TypeInfo_t4644 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___serverType_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectModeMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"

// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern const Il2CppType* Boolean_t59_0_0_0_var;
extern const Il2CppType* Byte_t741_0_0_0_var;
extern const Il2CppType* Char_t60_0_0_0_var;
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern const Il2CppType* DateTime_t287_0_0_0_var;
extern const Il2CppType* Decimal_t745_0_0_0_var;
extern const Il2CppType* Double_t90_0_0_0_var;
extern const Il2CppType* Int16_t742_0_0_0_var;
extern const Il2CppType* Int32_t82_0_0_0_var;
extern const Il2CppType* Int64_t89_0_0_0_var;
extern const Il2CppType* SByte_t88_0_0_0_var;
extern const Il2CppType* Single_t87_0_0_0_var;
extern const Il2CppType* UInt16_t743_0_0_0_var;
extern const Il2CppType* UInt32_t740_0_0_0_var;
extern const Il2CppType* UInt64_t744_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t4871____U24U24fieldU2D32_21_FieldInfo_var;
extern "C" void BinaryCommon__cctor_m18444 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Byte_t741_0_0_0_var = il2cpp_codegen_type_from_index(255);
		Char_t60_0_0_0_var = il2cpp_codegen_type_from_index(27);
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2467);
		DateTime_t287_0_0_0_var = il2cpp_codegen_type_from_index(311);
		Decimal_t745_0_0_0_var = il2cpp_codegen_type_from_index(275);
		Double_t90_0_0_0_var = il2cpp_codegen_type_from_index(78);
		Int16_t742_0_0_0_var = il2cpp_codegen_type_from_index(272);
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		Int64_t89_0_0_0_var = il2cpp_codegen_type_from_index(77);
		SByte_t88_0_0_0_var = il2cpp_codegen_type_from_index(271);
		Single_t87_0_0_0_var = il2cpp_codegen_type_from_index(66);
		UInt16_t743_0_0_0_var = il2cpp_codegen_type_from_index(273);
		UInt32_t740_0_0_0_var = il2cpp_codegen_type_from_index(270);
		UInt64_t744_0_0_0_var = il2cpp_codegen_type_from_index(274);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		U3CPrivateImplementationDetailsU3E_t4871____U24U24fieldU2D32_21_FieldInfo_var = il2cpp_codegen_field_info_from_index(7911, 21);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		ByteU5BU5D_t66* L_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)17)));
		RuntimeHelpers_InitializeArray_m11434(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t4871____U24U24fieldU2D32_21_FieldInfo_var), /*hidden argument*/NULL);
		((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->___BinaryHeader_0 = L_0;
		((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = 0;
		((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1 = ((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, ((int32_t)19)));
		TypeU5BU5D_t1203* L_1 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Boolean_t59_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_1, 1)) = (Type_t *)L_2;
		TypeU5BU5D_t1203* L_3 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_4 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Byte_t741_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, 2)) = (Type_t *)L_4;
		TypeU5BU5D_t1203* L_5 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_6 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Char_t60_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 3)) = (Type_t *)L_6;
		TypeU5BU5D_t1203* L_7 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_8 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)12));
		ArrayElementTypeCheck (L_7, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_7, ((int32_t)12))) = (Type_t *)L_8;
		TypeU5BU5D_t1203* L_9 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_10 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(DateTime_t287_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)13));
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, ((int32_t)13))) = (Type_t *)L_10;
		TypeU5BU5D_t1203* L_11 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_12 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Decimal_t745_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 5)) = (Type_t *)L_12;
		TypeU5BU5D_t1203* L_13 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_14 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Double_t90_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 6)) = (Type_t *)L_14;
		TypeU5BU5D_t1203* L_15 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_16 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Int16_t742_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 7);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 7)) = (Type_t *)L_16;
		TypeU5BU5D_t1203* L_17 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_18 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 8)) = (Type_t *)L_18;
		TypeU5BU5D_t1203* L_19 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_20 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Int64_t89_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)9));
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, ((int32_t)9))) = (Type_t *)L_20;
		TypeU5BU5D_t1203* L_21 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_22 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(SByte_t88_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)10));
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, ((int32_t)10))) = (Type_t *)L_22;
		TypeU5BU5D_t1203* L_23 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_24 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Single_t87_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		ArrayElementTypeCheck (L_23, L_24);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, ((int32_t)11))) = (Type_t *)L_24;
		TypeU5BU5D_t1203* L_25 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_26 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(UInt16_t743_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)14));
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, ((int32_t)14))) = (Type_t *)L_26;
		TypeU5BU5D_t1203* L_27 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_28 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(UInt32_t740_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)15));
		ArrayElementTypeCheck (L_27, L_28);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_27, ((int32_t)15))) = (Type_t *)L_28;
		TypeU5BU5D_t1203* L_29 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_30 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(UInt64_t744_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)16));
		ArrayElementTypeCheck (L_29, L_30);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_29, ((int32_t)16))) = (Type_t *)L_30;
		TypeU5BU5D_t1203* L_31 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)17));
		ArrayElementTypeCheck (L_31, NULL);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_31, ((int32_t)17))) = (Type_t *)NULL;
		TypeU5BU5D_t1203* L_32 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_33 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)18));
		ArrayElementTypeCheck (L_32, L_33);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_32, ((int32_t)18))) = (Type_t *)L_33;
		((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)30)));
		ByteU5BU5D_t66* L_34 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 3)) = (uint8_t)1;
		ByteU5BU5D_t66* L_35 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 6)) = (uint8_t)2;
		ByteU5BU5D_t66* L_36 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 4)) = (uint8_t)3;
		ByteU5BU5D_t66* L_37 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)16));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)16))) = (uint8_t)((int32_t)13);
		ByteU5BU5D_t66* L_38 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, ((int32_t)15))) = (uint8_t)5;
		ByteU5BU5D_t66* L_39 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)14))) = (uint8_t)6;
		ByteU5BU5D_t66* L_40 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, 7)) = (uint8_t)7;
		ByteU5BU5D_t66* L_41 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, ((int32_t)9))) = (uint8_t)8;
		ByteU5BU5D_t66* L_42 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)11))) = (uint8_t)((int32_t)9);
		ByteU5BU5D_t66* L_43 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 5)) = (uint8_t)((int32_t)10);
		ByteU5BU5D_t66* L_44 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)13))) = (uint8_t)((int32_t)11);
		ByteU5BU5D_t66* L_45 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, 8)) = (uint8_t)((int32_t)14);
		ByteU5BU5D_t66* L_46 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_46, ((int32_t)10))) = (uint8_t)((int32_t)15);
		ByteU5BU5D_t66* L_47 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_47, ((int32_t)12))) = (uint8_t)((int32_t)16);
		ByteU5BU5D_t66* L_48 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)18));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, ((int32_t)18))) = (uint8_t)((int32_t)18);
		String_t* L_49 = Environment_GetEnvironmentVariable_m11435(NULL /*static, unused*/, (String_t*) &_stringLiteral4266, /*hidden argument*/NULL);
		V_0 = L_49;
		String_t* L_50 = V_0;
		if (L_50)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral2236;
	}

IL_01f4:
	{
		String_t* L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Inequality_m415(NULL /*static, unused*/, L_51, (String_t*) &_stringLiteral2236, /*hidden argument*/NULL);
		((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = L_52;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern const Il2CppType* DateTime_t287_0_0_0_var;
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern const Il2CppType* Decimal_t745_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool BinaryCommon_IsPrimitive_m18445 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(76);
		DateTime_t287_0_0_0_var = il2cpp_codegen_type_from_index(311);
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2467);
		Decimal_t745_0_0_0_var = il2cpp_codegen_type_from_index(275);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(DateTime_t287_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Decimal_t745_0_0_0_var), /*hidden argument*/NULL);
		G_B6_0 = ((((Object_t*)(Type_t *)L_8) == ((Object_t*)(Type_t *)L_9))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B6_0 = 1;
	}

IL_003f:
	{
		return G_B6_0;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern "C" Type_t * BinaryCommon_GetTypeFromCode_m18446 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1203* L_0 = ((BinaryCommon_t4646_StaticFields*)BinaryCommon_t4646_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		int32_t L_1 = ___code;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryCommon_SwapBytes_m18447 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___dataSize;
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 0;
		goto IL_0060;
	}

IL_0008:
	{
		ByteU5BU5D_t66* L_1 = ___byteArray;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_3));
		ByteU5BU5D_t66* L_4 = ___byteArray;
		int32_t L_5 = V_1;
		ByteU5BU5D_t66* L_6 = ___byteArray;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7+(int32_t)7)));
		int32_t L_8 = ((int32_t)((int32_t)L_7+(int32_t)7));
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_5)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8));
		ByteU5BU5D_t66* L_9 = ___byteArray;
		int32_t L_10 = V_1;
		uint8_t L_11 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)7)))) = (uint8_t)L_11;
		ByteU5BU5D_t66* L_12 = ___byteArray;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)));
		int32_t L_14 = ((int32_t)((int32_t)L_13+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_14));
		ByteU5BU5D_t66* L_15 = ___byteArray;
		int32_t L_16 = V_1;
		ByteU5BU5D_t66* L_17 = ___byteArray;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)6)));
		int32_t L_19 = ((int32_t)((int32_t)L_18+(int32_t)6));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_19));
		ByteU5BU5D_t66* L_20 = ___byteArray;
		int32_t L_21 = V_1;
		uint8_t L_22 = V_0;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_20, ((int32_t)((int32_t)L_21+(int32_t)6)))) = (uint8_t)L_22;
		ByteU5BU5D_t66* L_23 = ___byteArray;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)((int32_t)L_24+(int32_t)2)));
		int32_t L_25 = ((int32_t)((int32_t)L_24+(int32_t)2));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_23, L_25));
		ByteU5BU5D_t66* L_26 = ___byteArray;
		int32_t L_27 = V_1;
		ByteU5BU5D_t66* L_28 = ___byteArray;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29+(int32_t)5)));
		int32_t L_30 = ((int32_t)((int32_t)L_29+(int32_t)5));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_26, ((int32_t)((int32_t)L_27+(int32_t)2)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_30));
		ByteU5BU5D_t66* L_31 = ___byteArray;
		int32_t L_32 = V_1;
		uint8_t L_33 = V_0;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_31, ((int32_t)((int32_t)L_32+(int32_t)5)))) = (uint8_t)L_33;
		ByteU5BU5D_t66* L_34 = ___byteArray;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)3)));
		int32_t L_36 = ((int32_t)((int32_t)L_35+(int32_t)3));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_36));
		ByteU5BU5D_t66* L_37 = ___byteArray;
		int32_t L_38 = V_1;
		ByteU5BU5D_t66* L_39 = ___byteArray;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)L_40+(int32_t)4)));
		int32_t L_41 = ((int32_t)((int32_t)L_40+(int32_t)4));
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)((int32_t)L_38+(int32_t)3)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_39, L_41));
		ByteU5BU5D_t66* L_42 = ___byteArray;
		int32_t L_43 = V_1;
		uint8_t L_44 = V_0;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)((int32_t)L_43+(int32_t)4)))) = (uint8_t)L_44;
		int32_t L_45 = V_1;
		V_1 = ((int32_t)((int32_t)L_45+(int32_t)8));
	}

IL_0060:
	{
		int32_t L_46 = V_1;
		int32_t L_47 = ___size;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0008;
		}
	}
	{
		goto IL_00c2;
	}

IL_0066:
	{
		int32_t L_48 = ___dataSize;
		if ((!(((uint32_t)L_48) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}
	{
		V_2 = 0;
		goto IL_009a;
	}

IL_006e:
	{
		ByteU5BU5D_t66* L_49 = ___byteArray;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_49, L_51));
		ByteU5BU5D_t66* L_52 = ___byteArray;
		int32_t L_53 = V_2;
		ByteU5BU5D_t66* L_54 = ___byteArray;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, ((int32_t)((int32_t)L_55+(int32_t)3)));
		int32_t L_56 = ((int32_t)((int32_t)L_55+(int32_t)3));
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_56));
		ByteU5BU5D_t66* L_57 = ___byteArray;
		int32_t L_58 = V_2;
		uint8_t L_59 = V_0;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_57, ((int32_t)((int32_t)L_58+(int32_t)3)))) = (uint8_t)L_59;
		ByteU5BU5D_t66* L_60 = ___byteArray;
		int32_t L_61 = V_2;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, ((int32_t)((int32_t)L_61+(int32_t)1)));
		int32_t L_62 = ((int32_t)((int32_t)L_61+(int32_t)1));
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_60, L_62));
		ByteU5BU5D_t66* L_63 = ___byteArray;
		int32_t L_64 = V_2;
		ByteU5BU5D_t66* L_65 = ___byteArray;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)L_66+(int32_t)2)));
		int32_t L_67 = ((int32_t)((int32_t)L_66+(int32_t)2));
		NullCheck(L_63);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_63, ((int32_t)((int32_t)L_64+(int32_t)1)))) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_65, L_67));
		ByteU5BU5D_t66* L_68 = ___byteArray;
		int32_t L_69 = V_2;
		uint8_t L_70 = V_0;
		NullCheck(L_68);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_68, ((int32_t)((int32_t)L_69+(int32_t)2)))) = (uint8_t)L_70;
		int32_t L_71 = V_2;
		V_2 = ((int32_t)((int32_t)L_71+(int32_t)4));
	}

IL_009a:
	{
		int32_t L_72 = V_2;
		int32_t L_73 = ___size;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_006e;
		}
	}
	{
		goto IL_00c2;
	}

IL_00a0:
	{
		int32_t L_74 = ___dataSize;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_00c2;
		}
	}
	{
		V_3 = 0;
		goto IL_00be;
	}

IL_00a8:
	{
		ByteU5BU5D_t66* L_75 = ___byteArray;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, L_76);
		int32_t L_77 = L_76;
		V_0 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_75, L_77));
		ByteU5BU5D_t66* L_78 = ___byteArray;
		int32_t L_79 = V_3;
		ByteU5BU5D_t66* L_80 = ___byteArray;
		int32_t L_81 = V_3;
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, ((int32_t)((int32_t)L_81+(int32_t)1)));
		int32_t L_82 = ((int32_t)((int32_t)L_81+(int32_t)1));
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_78, L_79)) = (uint8_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_80, L_82));
		ByteU5BU5D_t66* L_83 = ___byteArray;
		int32_t L_84 = V_3;
		uint8_t L_85 = V_0;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_83, ((int32_t)((int32_t)L_84+(int32_t)1)))) = (uint8_t)L_85;
		int32_t L_86 = V_3;
		V_3 = ((int32_t)((int32_t)L_86+(int32_t)2));
	}

IL_00be:
	{
		int32_t L_87 = V_3;
		int32_t L_88 = ___size;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00a8;
		}
	}

IL_00c2:
	{
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0MethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_TypeMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Meth.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MethMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Retu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_RetuMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinder.h"
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MessMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1MethodDeclarations.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" void BinaryFormatter__ctor_m18448 (BinaryFormatter_t4639 * __this, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = BinaryFormatter_get_DefaultSurrogateSelector_m18450(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t2920  L_1 = {0};
		StreamingContext__ctor_m18572(&L_1, ((int32_t)255), /*hidden argument*/NULL);
		__this->___context_2 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m18449 (BinaryFormatter_t4639 * __this, Object_t * ___selector, StreamingContext_t2920  ___context, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___selector;
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t2920  L_1 = ___context;
		__this->___context_2 = L_1;
		return;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern TypeInfo* BinaryFormatter_t4639_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m18450 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryFormatter_t4639_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8136);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((BinaryFormatter_t4639_StaticFields*)BinaryFormatter_t4639_il2cpp_TypeInfo_var->static_fields)->___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m18451 (BinaryFormatter_t4639 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___assembly_format_0 = L_0;
		return;
	}
}
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C" SerializationBinder_t4651 * BinaryFormatter_get_Binder_m18452 (BinaryFormatter_t4639 * __this, const MethodInfo* method)
{
	{
		SerializationBinder_t4651 * L_0 = (__this->___binder_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C" StreamingContext_t2920  BinaryFormatter_get_Context_m18453 (BinaryFormatter_t4639 * __this, const MethodInfo* method)
{
	{
		StreamingContext_t2920  L_0 = (__this->___context_2);
		return L_0;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m18454 (BinaryFormatter_t4639 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___surrogate_selector_3);
		return L_0;
	}
}
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C" int32_t BinaryFormatter_get_FilterLevel_m18455 (BinaryFormatter_t4639 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___filter_level_5);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * BinaryFormatter_Deserialize_m18456 (BinaryFormatter_t4639 * __this, Stream_t51 * ___serializationStream, const MethodInfo* method)
{
	{
		Stream_t51 * L_0 = ___serializationStream;
		Object_t * L_1 = BinaryFormatter_NoCheckDeserialize_m18457(__this, L_0, (HeaderHandler_t4850 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern TypeInfo* ArgumentNullException_t770_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryReader_t52_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectReader_t4657_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m18457 (BinaryFormatter_t4639 * __this, Stream_t51 * ___serializationStream, HeaderHandler_t4850 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t770_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		BinaryReader_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		ObjectReader_t4657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8146);
		s_Il2CppMethodIntialized = true;
	}
	BinaryReader_t52 * V_0 = {0};
	bool V_1 = false;
	uint8_t V_2 = {0};
	ObjectReader_t4657 * V_3 = {0};
	Object_t * V_4 = {0};
	HeaderU5BU5D_t4849* V_5 = {0};
	{
		Stream_t51 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t770 * L_1 = (ArgumentNullException_t770 *)il2cpp_codegen_object_new (ArgumentNullException_t770_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4064(L_1, (String_t*) &_stringLiteral4267, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t51 * L_2 = ___serializationStream;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Stream_t51 * L_4 = ___serializationStream;
		NullCheck(L_4);
		int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		SerializationException_t4192 * L_6 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_6, (String_t*) &_stringLiteral4268, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Stream_t51 * L_7 = ___serializationStream;
		BinaryReader_t52 * L_8 = (BinaryReader_t52 *)il2cpp_codegen_object_new (BinaryReader_t52_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m427(L_8, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		BinaryReader_t52 * L_9 = V_0;
		BinaryFormatter_ReadBinaryHeader_m18458(__this, L_9, (&V_1), /*hidden argument*/NULL);
		BinaryReader_t52 * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.IO.BinaryReader::Read() */, L_10);
		V_2 = (((uint8_t)L_11));
		uint8_t L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0051;
		}
	}
	{
		uint8_t L_13 = V_2;
		BinaryReader_t52 * L_14 = V_0;
		bool L_15 = V_1;
		HeaderHandler_t4850 * L_16 = ___handler;
		Object_t * L_17 = MessageFormatter_ReadMethodCall_m18459(NULL /*static, unused*/, L_13, L_14, L_15, L_16, __this, /*hidden argument*/NULL);
		return L_17;
	}

IL_0051:
	{
		uint8_t L_18 = V_2;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)22)))))
		{
			goto IL_0062;
		}
	}
	{
		uint8_t L_19 = V_2;
		BinaryReader_t52 * L_20 = V_0;
		bool L_21 = V_1;
		HeaderHandler_t4850 * L_22 = ___handler;
		Object_t * L_23 = MessageFormatter_ReadMethodResponse_m18460(NULL /*static, unused*/, L_19, L_20, L_21, L_22, (Object_t *)NULL, __this, /*hidden argument*/NULL);
		return L_23;
	}

IL_0062:
	{
		ObjectReader_t4657 * L_24 = (ObjectReader_t4657 *)il2cpp_codegen_object_new (ObjectReader_t4657_il2cpp_TypeInfo_var);
		ObjectReader__ctor_m18463(L_24, __this, /*hidden argument*/NULL);
		V_3 = L_24;
		ObjectReader_t4657 * L_25 = V_3;
		uint8_t L_26 = V_2;
		BinaryReader_t52 * L_27 = V_0;
		bool L_28 = V_1;
		NullCheck(L_25);
		ObjectReader_ReadObjectGraph_m18465(L_25, L_26, L_27, L_28, (&V_4), (&V_5), /*hidden argument*/NULL);
		HeaderHandler_t4850 * L_29 = ___handler;
		if (!L_29)
		{
			goto IL_0082;
		}
	}
	{
		HeaderHandler_t4850 * L_30 = ___handler;
		HeaderU5BU5D_t4849* L_31 = V_5;
		NullCheck(L_30);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t4849* >::Invoke(11 /* System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[]) */, L_30, L_31);
	}

IL_0082:
	{
		Object_t * L_32 = V_4;
		return L_32;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m18458 (BinaryFormatter_t4639 * __this, BinaryReader_t52 * ___reader, bool* ___hasHeaders, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		BinaryReader_t52 * L_0 = ___reader;
		NullCheck(L_0);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_1);
		BinaryReader_t52 * L_2 = ___reader;
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_2);
		V_0 = L_3;
		bool* L_4 = ___hasHeaders;
		int32_t L_5 = V_0;
		*((int8_t*)(L_4)) = (int8_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		BinaryReader_t52 * L_6 = ___reader;
		NullCheck(L_6);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		BinaryReader_t52 * L_7 = ___reader;
		NullCheck(L_7);
		VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_7);
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Mess.h"
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern TypeInfo* BinaryElement_t4647_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectReader_t4657_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* HeaderU5BU5D_t4849_il2cpp_TypeInfo_var;
extern TypeInfo* Header_t4611_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCall_t4607_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2139_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" Object_t * MessageFormatter_ReadMethodCall_m18459 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t52 * ___reader, bool ___hasHeaders, HeaderHandler_t4850 * ___headerHandler, BinaryFormatter_t4639 * ___formatter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryElement_t4647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8147);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		ObjectReader_t4657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8146);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		HeaderU5BU5D_t4849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		Header_t4611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8149);
		MethodCall_t4607_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8109);
		DictionaryEntry_t2139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	ObjectU5BU5D_t682* V_3 = {0};
	Object_t * V_4 = {0};
	Object_t * V_5 = {0};
	ObjectU5BU5D_t682* V_6 = {0};
	HeaderU5BU5D_t4849* V_7 = {0};
	TypeU5BU5D_t1203* V_8 = {0};
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	Type_t * V_11 = {0};
	ObjectReader_t4657 * V_12 = {0};
	Object_t * V_13 = {0};
	ObjectU5BU5D_t682* V_14 = {0};
	int32_t V_15 = 0;
	String_t* V_16 = {0};
	HeaderU5BU5D_t4849* V_17 = {0};
	MethodCall_t4607 * V_18 = {0};
	DictionaryEntry_t2139  V_19 = {0};
	ObjectU5BU5D_t682* V_20 = {0};
	int32_t V_21 = 0;
	{
		uint8_t L_0 = ___elem;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)21))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = ___elem;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(BinaryElement_t4647_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral4269, L_3, /*hidden argument*/NULL);
		SerializationException_t4192 * L_5 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001b:
	{
		BinaryReader_t52 * L_6 = ___reader;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_6);
		V_0 = L_7;
		BinaryReader_t52 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)18))))
		{
			goto IL_0037;
		}
	}
	{
		SerializationException_t4192 * L_10 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_10, (String_t*) &_stringLiteral4270, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0037:
	{
		BinaryReader_t52 * L_11 = ___reader;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_11);
		V_1 = L_12;
		BinaryReader_t52 * L_13 = ___reader;
		NullCheck(L_13);
		uint8_t L_14 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)18))))
		{
			goto IL_0053;
		}
	}
	{
		SerializationException_t4192 * L_15 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_15, (String_t*) &_stringLiteral4270, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0053:
	{
		BinaryReader_t52 * L_16 = ___reader;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_16);
		V_2 = L_17;
		V_3 = (ObjectU5BU5D_t682*)NULL;
		V_4 = NULL;
		V_5 = NULL;
		V_6 = (ObjectU5BU5D_t682*)NULL;
		V_7 = (HeaderU5BU5D_t4849*)NULL;
		V_8 = (TypeU5BU5D_t1203*)NULL;
		int32_t L_18 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_18&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		BinaryReader_t52 * L_19 = ___reader;
		NullCheck(L_19);
		uint32_t L_20 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_19);
		V_9 = L_20;
		uint32_t L_21 = V_9;
		V_3 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, (((uintptr_t)L_21))));
		V_10 = 0;
		goto IL_00a6;
	}

IL_0087:
	{
		BinaryReader_t52 * L_22 = ___reader;
		NullCheck(L_22);
		uint8_t L_23 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_22);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		Type_t * L_24 = BinaryCommon_GetTypeFromCode_m18446(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_11 = L_24;
		ObjectU5BU5D_t682* L_25 = V_3;
		int32_t L_26 = V_10;
		BinaryReader_t52 * L_27 = ___reader;
		Type_t * L_28 = V_11;
		Object_t * L_29 = ObjectReader_ReadPrimitiveTypeValue_m18489(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		ArrayElementTypeCheck (L_25, L_29);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_25, L_26)) = (Object_t *)L_29;
		int32_t L_30 = V_10;
		V_10 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_31 = V_10;
		uint32_t L_32 = V_9;
		if ((((int64_t)(((int64_t)L_31))) < ((int64_t)(((uint64_t)L_32)))))
		{
			goto IL_0087;
		}
	}

IL_00ae:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_33&(int32_t)((int32_t)32972)))) <= ((int32_t)0)))
		{
			goto IL_016b;
		}
	}
	{
		BinaryFormatter_t4639 * L_34 = ___formatter;
		ObjectReader_t4657 * L_35 = (ObjectReader_t4657 *)il2cpp_codegen_object_new (ObjectReader_t4657_il2cpp_TypeInfo_var);
		ObjectReader__ctor_m18463(L_35, L_34, /*hidden argument*/NULL);
		V_12 = L_35;
		ObjectReader_t4657 * L_36 = V_12;
		BinaryReader_t52 * L_37 = ___reader;
		bool L_38 = ___hasHeaders;
		NullCheck(L_36);
		ObjectReader_ReadObjectGraph_m18464(L_36, L_37, L_38, (&V_13), (&V_7), /*hidden argument*/NULL);
		Object_t * L_39 = V_13;
		V_14 = ((ObjectU5BU5D_t682*)Castclass(L_39, ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		int32_t L_40 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_40&(int32_t)4))) <= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		ObjectU5BU5D_t682* L_41 = V_14;
		V_3 = L_41;
		goto IL_0169;
	}

IL_00e8:
	{
		V_15 = 0;
		int32_t L_42 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_42&(int32_t)8))) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		ObjectU5BU5D_t682* L_43 = V_14;
		NullCheck(L_43);
		if ((((int32_t)(((int32_t)(((Array_t *)L_43)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_010a;
		}
	}
	{
		ObjectU5BU5D_t682* L_44 = V_14;
		int32_t L_45 = V_15;
		int32_t L_46 = L_45;
		V_15 = ((int32_t)((int32_t)L_46+(int32_t)1));
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_46);
		int32_t L_47 = L_46;
		V_3 = ((ObjectU5BU5D_t682*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_44, L_47)), ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		goto IL_0111;
	}

IL_010a:
	{
		V_3 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 0));
	}

IL_0111:
	{
		int32_t L_48 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_48&(int32_t)((int32_t)32768)))) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		ObjectU5BU5D_t682* L_49 = V_14;
		int32_t L_50 = V_15;
		int32_t L_51 = L_50;
		V_15 = ((int32_t)((int32_t)L_51+(int32_t)1));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_51);
		int32_t L_52 = L_51;
		V_8 = ((TypeU5BU5D_t1203*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_49, L_52)), TypeU5BU5D_t1203_il2cpp_TypeInfo_var));
	}

IL_012c:
	{
		int32_t L_53 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_53&(int32_t)((int32_t)128)))) <= ((int32_t)0)))
		{
			goto IL_0142;
		}
	}
	{
		ObjectU5BU5D_t682* L_54 = V_14;
		int32_t L_55 = V_15;
		int32_t L_56 = L_55;
		V_15 = ((int32_t)((int32_t)L_56+(int32_t)1));
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_56);
		int32_t L_57 = L_56;
		V_4 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_54, L_57));
	}

IL_0142:
	{
		int32_t L_58 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_58&(int32_t)((int32_t)64)))) <= ((int32_t)0)))
		{
			goto IL_0155;
		}
	}
	{
		ObjectU5BU5D_t682* L_59 = V_14;
		int32_t L_60 = V_15;
		int32_t L_61 = L_60;
		V_15 = ((int32_t)((int32_t)L_61+(int32_t)1));
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, L_61);
		int32_t L_62 = L_61;
		V_5 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_59, L_62));
	}

IL_0155:
	{
		int32_t L_63 = V_15;
		ObjectU5BU5D_t682* L_64 = V_14;
		NullCheck(L_64);
		if ((((int32_t)L_63) >= ((int32_t)(((int32_t)(((Array_t *)L_64)->max_length))))))
		{
			goto IL_0169;
		}
	}
	{
		ObjectU5BU5D_t682* L_65 = V_14;
		int32_t L_66 = V_15;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		int32_t L_67 = L_66;
		V_6 = ((ObjectU5BU5D_t682*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_65, L_67)), ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
	}

IL_0169:
	{
		goto IL_0172;
	}

IL_016b:
	{
		BinaryReader_t52 * L_68 = ___reader;
		NullCheck(L_68);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_68);
	}

IL_0172:
	{
		ObjectU5BU5D_t682* L_69 = V_3;
		if (L_69)
		{
			goto IL_017c;
		}
	}
	{
		V_3 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, 0));
	}

IL_017c:
	{
		V_16 = (String_t*)NULL;
		HeaderHandler_t4850 * L_70 = ___headerHandler;
		if (!L_70)
		{
			goto IL_0191;
		}
	}
	{
		HeaderHandler_t4850 * L_71 = ___headerHandler;
		HeaderU5BU5D_t4849* L_72 = V_7;
		NullCheck(L_71);
		Object_t * L_73 = (Object_t *)VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t4849* >::Invoke(11 /* System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[]) */, L_71, L_72);
		V_16 = ((String_t*)IsInst(L_73, String_t_il2cpp_TypeInfo_var));
	}

IL_0191:
	{
		V_17 = ((HeaderU5BU5D_t4849*)SZArrayNew(HeaderU5BU5D_t4849_il2cpp_TypeInfo_var, 7));
		HeaderU5BU5D_t4849* L_74 = V_17;
		String_t* L_75 = V_1;
		Header_t4611 * L_76 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_76, (String_t*) &_stringLiteral4231, L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, 0);
		ArrayElementTypeCheck (L_74, L_76);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_74, 0)) = (Header_t4611 *)L_76;
		HeaderU5BU5D_t4849* L_77 = V_17;
		Object_t * L_78 = V_4;
		Header_t4611 * L_79 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_79, (String_t*) &_stringLiteral4233, L_78, /*hidden argument*/NULL);
		NullCheck(L_77);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_77, 1);
		ArrayElementTypeCheck (L_77, L_79);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_77, 1)) = (Header_t4611 *)L_79;
		HeaderU5BU5D_t4849* L_80 = V_17;
		String_t* L_81 = V_2;
		Header_t4611 * L_82 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_82, (String_t*) &_stringLiteral4232, L_81, /*hidden argument*/NULL);
		NullCheck(L_80);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_80, 2);
		ArrayElementTypeCheck (L_80, L_82);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_80, 2)) = (Header_t4611 *)L_82;
		HeaderU5BU5D_t4849* L_83 = V_17;
		ObjectU5BU5D_t682* L_84 = V_3;
		Header_t4611 * L_85 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_85, (String_t*) &_stringLiteral4234, (Object_t *)(Object_t *)L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, 3);
		ArrayElementTypeCheck (L_83, L_85);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_83, 3)) = (Header_t4611 *)L_85;
		HeaderU5BU5D_t4849* L_86 = V_17;
		Object_t * L_87 = V_5;
		Header_t4611 * L_88 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_88, (String_t*) &_stringLiteral4235, L_87, /*hidden argument*/NULL);
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, 4);
		ArrayElementTypeCheck (L_86, L_88);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_86, 4)) = (Header_t4611 *)L_88;
		HeaderU5BU5D_t4849* L_89 = V_17;
		String_t* L_90 = V_16;
		Header_t4611 * L_91 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_91, (String_t*) &_stringLiteral4230, L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 5);
		ArrayElementTypeCheck (L_89, L_91);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_89, 5)) = (Header_t4611 *)L_91;
		HeaderU5BU5D_t4849* L_92 = V_17;
		TypeU5BU5D_t1203* L_93 = V_8;
		Header_t4611 * L_94 = (Header_t4611 *)il2cpp_codegen_object_new (Header_t4611_il2cpp_TypeInfo_var);
		Header__ctor_m18260(L_94, (String_t*) &_stringLiteral4238, (Object_t *)(Object_t *)L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 6);
		ArrayElementTypeCheck (L_92, L_94);
		*((Header_t4611 **)(Header_t4611 **)SZArrayLdElema(L_92, 6)) = (Header_t4611 *)L_94;
		HeaderU5BU5D_t4849* L_95 = V_17;
		MethodCall_t4607 * L_96 = (MethodCall_t4607 *)il2cpp_codegen_object_new (MethodCall_t4607_il2cpp_TypeInfo_var);
		MethodCall__ctor_m18268(L_96, L_95, /*hidden argument*/NULL);
		V_18 = L_96;
		ObjectU5BU5D_t682* L_97 = V_6;
		if (!L_97)
		{
			goto IL_0255;
		}
	}
	{
		ObjectU5BU5D_t682* L_98 = V_6;
		V_20 = L_98;
		V_21 = 0;
		goto IL_024d;
	}

IL_021c:
	{
		ObjectU5BU5D_t682* L_99 = V_20;
		int32_t L_100 = V_21;
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_100);
		int32_t L_101 = L_100;
		V_19 = ((*(DictionaryEntry_t2139 *)((DictionaryEntry_t2139 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_99, L_101)), DictionaryEntry_t2139_il2cpp_TypeInfo_var))));
		MethodCall_t4607 * L_102 = V_18;
		NullCheck(L_102);
		Object_t * L_103 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, L_102);
		Object_t * L_104 = DictionaryEntry_get_Key_m7770((&V_19), /*hidden argument*/NULL);
		Object_t * L_105 = DictionaryEntry_get_Value_m7771((&V_19), /*hidden argument*/NULL);
		NullCheck(L_103);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_103, ((String_t*)Castclass(L_104, String_t_il2cpp_TypeInfo_var)), L_105);
		int32_t L_106 = V_21;
		V_21 = ((int32_t)((int32_t)L_106+(int32_t)1));
	}

IL_024d:
	{
		int32_t L_107 = V_21;
		ObjectU5BU5D_t682* L_108 = V_20;
		NullCheck(L_108);
		if ((((int32_t)L_107) < ((int32_t)(((int32_t)(((Array_t *)L_108)->max_length))))))
		{
			goto IL_021c;
		}
	}

IL_0255:
	{
		MethodCall_t4607 * L_109 = V_18;
		return L_109;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern TypeInfo* BinaryElement_t4647_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t682_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectReader_t4657_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t57_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t4613_il2cpp_TypeInfo_var;
extern TypeInfo* ReturnMessage_t4622_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2139_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t685_il2cpp_TypeInfo_var;
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m18460 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t52 * ___reader, bool ___hasHeaders, HeaderHandler_t4850 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t4639 * ___formatter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryElement_t4647_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8147);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		ObjectU5BU5D_t682_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		ObjectReader_t4657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8146);
		Exception_t57_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		LogicalCallContext_t4613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8110);
		ReturnMessage_t4622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8150);
		DictionaryEntry_t2139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3352);
		IDictionary_t685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	uint8_t V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	ObjectU5BU5D_t682* V_4 = {0};
	LogicalCallContext_t4613 * V_5 = {0};
	Exception_t57 * V_6 = {0};
	ObjectU5BU5D_t682* V_7 = {0};
	HeaderU5BU5D_t4849* V_8 = {0};
	Type_t * V_9 = {0};
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	Type_t * V_12 = {0};
	ObjectReader_t4657 * V_13 = {0};
	Object_t * V_14 = {0};
	ObjectU5BU5D_t682* V_15 = {0};
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	ReturnMessage_t4622 * V_19 = {0};
	DictionaryEntry_t2139  V_20 = {0};
	ObjectU5BU5D_t682* V_21 = {0};
	int32_t V_22 = 0;
	int32_t G_B43_0 = 0;
	{
		uint8_t L_0 = ___elem;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)22))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_1 = ___elem;
		uint8_t L_2 = L_1;
		Object_t * L_3 = Box(BinaryElement_t4647_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral4271, L_3, /*hidden argument*/NULL);
		SerializationException_t4192 * L_5 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001b:
	{
		BinaryReader_t52 * L_6 = ___reader;
		NullCheck(L_6);
		uint8_t L_7 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_6);
		V_0 = L_7;
		BinaryReader_t52 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		V_1 = L_9;
		int32_t L_10 = V_0;
		V_2 = ((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)64)))) > ((int32_t)0))? 1 : 0);
		BinaryReader_t52 * L_11 = ___reader;
		NullCheck(L_11);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_11);
		BinaryReader_t52 * L_12 = ___reader;
		NullCheck(L_12);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_12);
		V_3 = NULL;
		V_4 = (ObjectU5BU5D_t682*)NULL;
		V_5 = (LogicalCallContext_t4613 *)NULL;
		V_6 = (Exception_t57 *)NULL;
		V_7 = (ObjectU5BU5D_t682*)NULL;
		V_8 = (HeaderU5BU5D_t4849*)NULL;
		uint8_t L_13 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_13&(int32_t)8))))) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		BinaryReader_t52 * L_14 = ___reader;
		NullCheck(L_14);
		uint8_t L_15 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		Type_t * L_16 = BinaryCommon_GetTypeFromCode_m18446(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		V_9 = L_16;
		BinaryReader_t52 * L_17 = ___reader;
		Type_t * L_18 = V_9;
		Object_t * L_19 = ObjectReader_ReadPrimitiveTypeValue_m18489(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_006d:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_20&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_00b2;
		}
	}
	{
		BinaryReader_t52 * L_21 = ___reader;
		NullCheck(L_21);
		uint32_t L_22 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_21);
		V_10 = L_22;
		uint32_t L_23 = V_10;
		V_4 = ((ObjectU5BU5D_t682*)SZArrayNew(ObjectU5BU5D_t682_il2cpp_TypeInfo_var, (((uintptr_t)L_23))));
		V_11 = 0;
		goto IL_00aa;
	}

IL_008a:
	{
		BinaryReader_t52 * L_24 = ___reader;
		NullCheck(L_24);
		uint8_t L_25 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		Type_t * L_26 = BinaryCommon_GetTypeFromCode_m18446(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		V_12 = L_26;
		ObjectU5BU5D_t682* L_27 = V_4;
		int32_t L_28 = V_11;
		BinaryReader_t52 * L_29 = ___reader;
		Type_t * L_30 = V_12;
		Object_t * L_31 = ObjectReader_ReadPrimitiveTypeValue_m18489(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		ArrayElementTypeCheck (L_27, L_31);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_27, L_28)) = (Object_t *)L_31;
		int32_t L_32 = V_11;
		V_11 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00aa:
	{
		int32_t L_33 = V_11;
		uint32_t L_34 = V_10;
		if ((((int64_t)(((int64_t)L_33))) < ((int64_t)(((uint64_t)L_34)))))
		{
			goto IL_008a;
		}
	}

IL_00b2:
	{
		bool L_35 = V_2;
		if (L_35)
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_36 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_36&(int32_t)((int32_t)16)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		uint8_t L_37 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_37&(int32_t)((int32_t)32)))))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_38&(int32_t)4))) > ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_39&(int32_t)8))) <= ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}

IL_00d4:
	{
		BinaryFormatter_t4639 * L_40 = ___formatter;
		ObjectReader_t4657 * L_41 = (ObjectReader_t4657 *)il2cpp_codegen_object_new (ObjectReader_t4657_il2cpp_TypeInfo_var);
		ObjectReader__ctor_m18463(L_41, L_40, /*hidden argument*/NULL);
		V_13 = L_41;
		ObjectReader_t4657 * L_42 = V_13;
		BinaryReader_t52 * L_43 = ___reader;
		bool L_44 = ___hasHeaders;
		NullCheck(L_42);
		ObjectReader_ReadObjectGraph_m18464(L_42, L_43, L_44, (&V_14), (&V_8), /*hidden argument*/NULL);
		Object_t * L_45 = V_14;
		V_15 = ((ObjectU5BU5D_t682*)Castclass(L_45, ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		uint8_t L_46 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_46&(int32_t)((int32_t)32)))))) <= ((int32_t)0)))
		{
			goto IL_0119;
		}
	}
	{
		ObjectU5BU5D_t682* L_47 = V_15;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 0);
		int32_t L_48 = 0;
		V_6 = ((Exception_t57 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_47, L_48)), Exception_t57_il2cpp_TypeInfo_var));
		bool L_49 = V_2;
		if (!L_49)
		{
			goto IL_0114;
		}
	}
	{
		ObjectU5BU5D_t682* L_50 = V_15;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		int32_t L_51 = 1;
		V_5 = ((LogicalCallContext_t4613 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_50, L_51)), LogicalCallContext_t4613_il2cpp_TypeInfo_var));
	}

IL_0114:
	{
		goto IL_01c0;
	}

IL_0119:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_52&(int32_t)1))) > ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_53 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_53&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0165;
		}
	}

IL_0125:
	{
		V_16 = 0;
		uint8_t L_54 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_54&(int32_t)((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		ObjectU5BU5D_t682* L_55 = V_15;
		int32_t L_56 = V_16;
		int32_t L_57 = L_56;
		V_16 = ((int32_t)((int32_t)L_57+(int32_t)1));
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_57);
		int32_t L_58 = L_57;
		V_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_55, L_58));
	}

IL_013b:
	{
		bool L_59 = V_2;
		if (!L_59)
		{
			goto IL_014f;
		}
	}
	{
		ObjectU5BU5D_t682* L_60 = V_15;
		int32_t L_61 = V_16;
		int32_t L_62 = L_61;
		V_16 = ((int32_t)((int32_t)L_62+(int32_t)1));
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_62);
		int32_t L_63 = L_62;
		V_5 = ((LogicalCallContext_t4613 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_60, L_63)), LogicalCallContext_t4613_il2cpp_TypeInfo_var));
	}

IL_014f:
	{
		int32_t L_64 = V_16;
		ObjectU5BU5D_t682* L_65 = V_15;
		NullCheck(L_65);
		if ((((int32_t)L_64) >= ((int32_t)(((int32_t)(((Array_t *)L_65)->max_length))))))
		{
			goto IL_0163;
		}
	}
	{
		ObjectU5BU5D_t682* L_66 = V_15;
		int32_t L_67 = V_16;
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, L_67);
		int32_t L_68 = L_67;
		V_7 = ((ObjectU5BU5D_t682*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_66, L_68)), ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
	}

IL_0163:
	{
		goto IL_01c0;
	}

IL_0165:
	{
		int32_t L_69 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_69&(int32_t)4))) <= ((int32_t)0)))
		{
			goto IL_0171;
		}
	}
	{
		ObjectU5BU5D_t682* L_70 = V_15;
		V_4 = L_70;
		goto IL_01c0;
	}

IL_0171:
	{
		V_17 = 0;
		ObjectU5BU5D_t682* L_71 = V_15;
		int32_t L_72 = V_17;
		int32_t L_73 = L_72;
		V_17 = ((int32_t)((int32_t)L_73+(int32_t)1));
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, L_73);
		int32_t L_74 = L_73;
		V_4 = ((ObjectU5BU5D_t682*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_71, L_74)), ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
		uint8_t L_75 = V_1;
		if ((((int32_t)(((uint8_t)((int32_t)((int32_t)L_75&(int32_t)((int32_t)16)))))) <= ((int32_t)0)))
		{
			goto IL_0198;
		}
	}
	{
		ObjectU5BU5D_t682* L_76 = V_15;
		int32_t L_77 = V_17;
		int32_t L_78 = L_77;
		V_17 = ((int32_t)((int32_t)L_78+(int32_t)1));
		NullCheck(L_76);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_76, L_78);
		int32_t L_79 = L_78;
		V_3 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_76, L_79));
	}

IL_0198:
	{
		bool L_80 = V_2;
		if (!L_80)
		{
			goto IL_01ac;
		}
	}
	{
		ObjectU5BU5D_t682* L_81 = V_15;
		int32_t L_82 = V_17;
		int32_t L_83 = L_82;
		V_17 = ((int32_t)((int32_t)L_83+(int32_t)1));
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, L_83);
		int32_t L_84 = L_83;
		V_5 = ((LogicalCallContext_t4613 *)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_81, L_84)), LogicalCallContext_t4613_il2cpp_TypeInfo_var));
	}

IL_01ac:
	{
		int32_t L_85 = V_17;
		ObjectU5BU5D_t682* L_86 = V_15;
		NullCheck(L_86);
		if ((((int32_t)L_85) >= ((int32_t)(((int32_t)(((Array_t *)L_86)->max_length))))))
		{
			goto IL_01c0;
		}
	}
	{
		ObjectU5BU5D_t682* L_87 = V_15;
		int32_t L_88 = V_17;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, L_88);
		int32_t L_89 = L_88;
		V_7 = ((ObjectU5BU5D_t682*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_87, L_89)), ObjectU5BU5D_t682_il2cpp_TypeInfo_var));
	}

IL_01c0:
	{
		goto IL_01c9;
	}

IL_01c2:
	{
		BinaryReader_t52 * L_90 = ___reader;
		NullCheck(L_90);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_90);
	}

IL_01c9:
	{
		HeaderHandler_t4850 * L_91 = ___headerHandler;
		if (!L_91)
		{
			goto IL_01d5;
		}
	}
	{
		HeaderHandler_t4850 * L_92 = ___headerHandler;
		HeaderU5BU5D_t4849* L_93 = V_8;
		NullCheck(L_92);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t4849* >::Invoke(11 /* System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[]) */, L_92, L_93);
	}

IL_01d5:
	{
		Exception_t57 * L_94 = V_6;
		if (!L_94)
		{
			goto IL_01e3;
		}
	}
	{
		Exception_t57 * L_95 = V_6;
		Object_t * L_96 = ___methodCallMessage;
		ReturnMessage_t4622 * L_97 = (ReturnMessage_t4622 *)il2cpp_codegen_object_new (ReturnMessage_t4622_il2cpp_TypeInfo_var);
		ReturnMessage__ctor_m18340(L_97, L_95, L_96, /*hidden argument*/NULL);
		return L_97;
	}

IL_01e3:
	{
		ObjectU5BU5D_t682* L_98 = V_4;
		if (!L_98)
		{
			goto IL_01ed;
		}
	}
	{
		ObjectU5BU5D_t682* L_99 = V_4;
		NullCheck(L_99);
		G_B43_0 = (((int32_t)(((Array_t *)L_99)->max_length)));
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B43_0 = 0;
	}

IL_01ee:
	{
		V_18 = G_B43_0;
		Object_t * L_100 = V_3;
		ObjectU5BU5D_t682* L_101 = V_4;
		int32_t L_102 = V_18;
		LogicalCallContext_t4613 * L_103 = V_5;
		Object_t * L_104 = ___methodCallMessage;
		ReturnMessage_t4622 * L_105 = (ReturnMessage_t4622 *)il2cpp_codegen_object_new (ReturnMessage_t4622_il2cpp_TypeInfo_var);
		ReturnMessage__ctor_m18339(L_105, L_100, L_101, L_102, L_103, L_104, /*hidden argument*/NULL);
		V_19 = L_105;
		ObjectU5BU5D_t682* L_106 = V_7;
		if (!L_106)
		{
			goto IL_0246;
		}
	}
	{
		ObjectU5BU5D_t682* L_107 = V_7;
		V_21 = L_107;
		V_22 = 0;
		goto IL_023e;
	}

IL_020d:
	{
		ObjectU5BU5D_t682* L_108 = V_21;
		int32_t L_109 = V_22;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, L_109);
		int32_t L_110 = L_109;
		V_20 = ((*(DictionaryEntry_t2139 *)((DictionaryEntry_t2139 *)UnBox ((*(Object_t **)(Object_t **)SZArrayLdElema(L_108, L_110)), DictionaryEntry_t2139_il2cpp_TypeInfo_var))));
		ReturnMessage_t4622 * L_111 = V_19;
		NullCheck(L_111);
		Object_t * L_112 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(15 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties() */, L_111);
		Object_t * L_113 = DictionaryEntry_get_Key_m7770((&V_20), /*hidden argument*/NULL);
		Object_t * L_114 = DictionaryEntry_get_Value_m7771((&V_20), /*hidden argument*/NULL);
		NullCheck(L_112);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t685_il2cpp_TypeInfo_var, L_112, ((String_t*)Castclass(L_113, String_t_il2cpp_TypeInfo_var)), L_114);
		int32_t L_115 = V_22;
		V_22 = ((int32_t)((int32_t)L_115+(int32_t)1));
	}

IL_023e:
	{
		int32_t L_116 = V_22;
		ObjectU5BU5D_t682* L_117 = V_21;
		NullCheck(L_117);
		if ((((int32_t)L_116) < ((int32_t)(((int32_t)(((Array_t *)L_117)->max_length))))))
		{
			goto IL_020d;
		}
	}

IL_0246:
	{
		ReturnMessage_t4622 * L_118 = V_19;
		return L_118;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_ObjeMethodDeclarations.h"



// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::.ctor()
extern "C" void TypeMetadata__ctor_m18461 (TypeMetadata_t4654 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_0MethodDeclarations.h"



// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::.ctor(System.Int32)
extern "C" void ArrayNullFiller__ctor_m18462 (ArrayNullFiller_t4655 * __this, int32_t ___count, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count;
		__this->___NullCount_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManager.h"
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverter.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.UInt16
#include "mscorlib_System_UInt16.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// System.BitConverter
#include "mscorlib_System_BitConverter.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManagerMethodDeclarations.h"
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServicesMethodDeclarations.h"
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverterMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// System.BitConverter
#include "mscorlib_System_BitConverterMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinderMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
// System.Decimal
#include "mscorlib_System_DecimalMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::.ctor(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern TypeInfo* Hashtable_t696_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectManager_t4656_il2cpp_TypeInfo_var;
extern "C" void ObjectReader__ctor_m18463 (ObjectReader_t4657 * __this, BinaryFormatter_t4639 * ___formatter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t696_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ObjectManager_t4656_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8151);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t696 * L_0 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_0, /*hidden argument*/NULL);
		__this->____registeredAssemblies_5 = L_0;
		Hashtable_t696 * L_1 = (Hashtable_t696 *)il2cpp_codegen_object_new (Hashtable_t696_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4132(L_1, /*hidden argument*/NULL);
		__this->____typeMetadataCache_6 = L_1;
		__this->___ArrayBufferLength_11 = ((int32_t)4096);
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		BinaryFormatter_t4639 * L_2 = ___formatter;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector() */, L_2);
		__this->____surrogateSelector_0 = L_3;
		BinaryFormatter_t4639 * L_4 = ___formatter;
		NullCheck(L_4);
		StreamingContext_t2920  L_5 = (StreamingContext_t2920 )VirtFuncInvoker0< StreamingContext_t2920  >::Invoke(5 /* System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context() */, L_4);
		__this->____context_1 = L_5;
		BinaryFormatter_t4639 * L_6 = ___formatter;
		NullCheck(L_6);
		SerializationBinder_t4651 * L_7 = (SerializationBinder_t4651 *)VirtFuncInvoker0< SerializationBinder_t4651 * >::Invoke(4 /* System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder() */, L_6);
		__this->____binder_2 = L_7;
		Object_t * L_8 = (__this->____surrogateSelector_0);
		StreamingContext_t2920  L_9 = (__this->____context_1);
		ObjectManager_t4656 * L_10 = (ObjectManager_t4656 *)il2cpp_codegen_object_new (ObjectManager_t4656_il2cpp_TypeInfo_var);
		ObjectManager__ctor_m18500(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->____manager_4 = L_10;
		BinaryFormatter_t4639 * L_11 = ___formatter;
		NullCheck(L_11);
		int32_t L_12 = BinaryFormatter_get_FilterLevel_m18455(L_11, /*hidden argument*/NULL);
		__this->____filterLevel_3 = L_12;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern "C" void ObjectReader_ReadObjectGraph_m18464 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t4849** ___headers, const MethodInfo* method)
{
	uint8_t V_0 = {0};
	{
		BinaryReader_t52 * L_0 = ___reader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		BinaryReader_t52 * L_3 = ___reader;
		bool L_4 = ___readHeaders;
		Object_t ** L_5 = ___result;
		HeaderU5BU5D_t4849** L_6 = ___headers;
		ObjectReader_ReadObjectGraph_m18465(__this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectGraph(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Object&,System.Runtime.Remoting.Messaging.Header[]&)
extern TypeInfo* HeaderU5BU5D_t4849_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadObjectGraph_m18465 (ObjectReader_t4657 * __this, uint8_t ___elem, BinaryReader_t52 * ___reader, bool ___readHeaders, Object_t ** ___result, HeaderU5BU5D_t4849** ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		HeaderU5BU5D_t4849_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8148);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	{
		HeaderU5BU5D_t4849** L_0 = ___headers;
		*((Object_t **)(L_0)) = (Object_t *)NULL;
		uint8_t L_1 = ___elem;
		BinaryReader_t52 * L_2 = ___reader;
		bool L_3 = ObjectReader_ReadNextObject_m18466(__this, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}

IL_0010:
	{
		bool L_5 = ___readHeaders;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		HeaderU5BU5D_t4849** L_6 = ___headers;
		if ((*((HeaderU5BU5D_t4849**)L_6)))
		{
			goto IL_0028;
		}
	}
	{
		HeaderU5BU5D_t4849** L_7 = ___headers;
		Object_t * L_8 = ObjectReader_get_CurrentObject_m18468(__this, /*hidden argument*/NULL);
		*((Object_t **)(L_7)) = (Object_t *)((HeaderU5BU5D_t4849*)Castclass(L_8, HeaderU5BU5D_t4849_il2cpp_TypeInfo_var));
		goto IL_003c;
	}

IL_0028:
	{
		int64_t L_9 = (__this->____rootObjectID_9);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		int64_t L_10 = (__this->____lastObjectID_8);
		__this->____rootObjectID_9 = L_10;
	}

IL_003c:
	{
		BinaryReader_t52 * L_11 = ___reader;
		bool L_12 = ObjectReader_ReadNextObject_m18467(__this, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0010;
		}
	}

IL_0045:
	{
		Object_t ** L_13 = ___result;
		ObjectManager_t4656 * L_14 = (__this->____manager_4);
		int64_t L_15 = (__this->____rootObjectID_9);
		NullCheck(L_14);
		Object_t * L_16 = (Object_t *)VirtFuncInvoker1< Object_t *, int64_t >::Invoke(5 /* System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64) */, L_14, L_15);
		*((Object_t **)(L_13)) = (Object_t *)L_16;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m18466 (ObjectReader_t4657 * __this, uint8_t ___element, BinaryReader_t52 * ___reader, const MethodInfo* method)
{
	SerializationInfo_t2919 * V_0 = {0};
	int64_t V_1 = 0;
	{
		uint8_t L_0 = ___element;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001d;
		}
	}
	{
		ObjectManager_t4656 * L_1 = (__this->____manager_4);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Runtime.Serialization.ObjectManager::DoFixups() */, L_1);
		ObjectManager_t4656 * L_2 = (__this->____manager_4);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent() */, L_2);
		return 0;
	}

IL_001d:
	{
		uint8_t L_3 = ___element;
		BinaryReader_t52 * L_4 = ___reader;
		Object_t ** L_5 = &(__this->____lastObject_7);
		ObjectReader_ReadObject_m18469(__this, L_3, L_4, (&V_1), L_5, (&V_0), /*hidden argument*/NULL);
		int64_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		int64_t L_7 = V_1;
		Object_t * L_8 = (__this->____lastObject_7);
		SerializationInfo_t2919 * L_9 = V_0;
		ObjectReader_RegisterObject_m18474(__this, L_7, L_8, L_9, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		int64_t L_10 = V_1;
		__this->____lastObjectID_8 = L_10;
	}

IL_004b:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadNextObject(System.IO.BinaryReader)
extern "C" bool ObjectReader_ReadNextObject_m18467 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, const MethodInfo* method)
{
	uint8_t V_0 = {0};
	SerializationInfo_t2919 * V_1 = {0};
	int64_t V_2 = 0;
	{
		BinaryReader_t52 * L_0 = ___reader;
		NullCheck(L_0);
		uint8_t L_1 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0024;
		}
	}
	{
		ObjectManager_t4656 * L_3 = (__this->____manager_4);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Runtime.Serialization.ObjectManager::DoFixups() */, L_3);
		ObjectManager_t4656 * L_4 = (__this->____manager_4);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent() */, L_4);
		return 0;
	}

IL_0024:
	{
		uint8_t L_5 = V_0;
		BinaryReader_t52 * L_6 = ___reader;
		Object_t ** L_7 = &(__this->____lastObject_7);
		ObjectReader_ReadObject_m18469(__this, L_5, L_6, (&V_2), L_7, (&V_1), /*hidden argument*/NULL);
		int64_t L_8 = V_2;
		if (!L_8)
		{
			goto IL_0052;
		}
	}
	{
		int64_t L_9 = V_2;
		Object_t * L_10 = (__this->____lastObject_7);
		SerializationInfo_t2919 * L_11 = V_1;
		ObjectReader_RegisterObject_m18474(__this, L_9, L_10, L_11, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		int64_t L_12 = V_2;
		__this->____lastObjectID_8 = L_12;
	}

IL_0052:
	{
		return 1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::get_CurrentObject()
extern "C" Object_t * ObjectReader_get_CurrentObject_m18468 (ObjectReader_t4657 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____lastObject_7);
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObject(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern TypeInfo* ArrayNullFiller_t4655_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadObject_m18469 (ObjectReader_t4657 * __this, uint8_t ___element, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2919 ** ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayNullFiller_t4655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	{
		uint8_t L_0 = ___element;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_0053;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_0064;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_008a;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_00c3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_00d6;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 8)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 9)
		{
			goto IL_00ed;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 10)
		{
			goto IL_017c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 11)
		{
			goto IL_00fe;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 12)
		{
			goto IL_011c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 13)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 14)
		{
			goto IL_014c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 15)
		{
			goto IL_015c;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 16)
		{
			goto IL_016c;
		}
	}
	{
		goto IL_017c;
	}

IL_0053:
	{
		BinaryReader_t52 * L_2 = ___reader;
		int64_t* L_3 = ___objectId;
		Object_t ** L_4 = ___value;
		SerializationInfo_t2919 ** L_5 = ___info;
		ObjectReader_ReadRefTypeObjectInstance_m18472(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_0064:
	{
		BinaryReader_t52 * L_6 = ___reader;
		int64_t* L_7 = ___objectId;
		Object_t ** L_8 = ___value;
		SerializationInfo_t2919 ** L_9 = ___info;
		ObjectReader_ReadObjectInstance_m18471(__this, L_6, 1, 0, L_7, L_8, L_9, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_0077:
	{
		BinaryReader_t52 * L_10 = ___reader;
		int64_t* L_11 = ___objectId;
		Object_t ** L_12 = ___value;
		SerializationInfo_t2919 ** L_13 = ___info;
		ObjectReader_ReadObjectInstance_m18471(__this, L_10, 0, 0, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_008a:
	{
		BinaryReader_t52 * L_14 = ___reader;
		int64_t* L_15 = ___objectId;
		Object_t ** L_16 = ___value;
		SerializationInfo_t2919 ** L_17 = ___info;
		ObjectReader_ReadObjectInstance_m18471(__this, L_14, 1, 1, L_15, L_16, L_17, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_009d:
	{
		BinaryReader_t52 * L_18 = ___reader;
		int64_t* L_19 = ___objectId;
		Object_t ** L_20 = ___value;
		SerializationInfo_t2919 ** L_21 = ___info;
		ObjectReader_ReadObjectInstance_m18471(__this, L_18, 0, 1, L_19, L_20, L_21, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_00b0:
	{
		SerializationInfo_t2919 ** L_22 = ___info;
		*((Object_t **)(L_22)) = (Object_t *)NULL;
		BinaryReader_t52 * L_23 = ___reader;
		int64_t* L_24 = ___objectId;
		Object_t ** L_25 = ___value;
		ObjectReader_ReadStringIntance_m18475(__this, L_23, L_24, L_25, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_00c3:
	{
		SerializationInfo_t2919 ** L_26 = ___info;
		*((Object_t **)(L_26)) = (Object_t *)NULL;
		BinaryReader_t52 * L_27 = ___reader;
		int64_t* L_28 = ___objectId;
		Object_t ** L_29 = ___value;
		ObjectReader_ReadGenericArray_m18476(__this, L_27, L_28, L_29, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_00d6:
	{
		Object_t ** L_30 = ___value;
		BinaryReader_t52 * L_31 = ___reader;
		Object_t * L_32 = ObjectReader_ReadBoxedPrimitiveTypeValue_m18477(__this, L_31, /*hidden argument*/NULL);
		*((Object_t **)(L_30)) = (Object_t *)L_32;
		int64_t* L_33 = ___objectId;
		*((int64_t*)(L_33)) = (int64_t)(((int64_t)0));
		SerializationInfo_t2919 ** L_34 = ___info;
		*((Object_t **)(L_34)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_00ed:
	{
		Object_t ** L_35 = ___value;
		*((Object_t **)(L_35)) = (Object_t *)NULL;
		int64_t* L_36 = ___objectId;
		*((int64_t*)(L_36)) = (int64_t)(((int64_t)0));
		SerializationInfo_t2919 ** L_37 = ___info;
		*((Object_t **)(L_37)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_00fe:
	{
		BinaryReader_t52 * L_38 = ___reader;
		ObjectReader_ReadAssembly_m18470(__this, L_38, /*hidden argument*/NULL);
		BinaryReader_t52 * L_39 = ___reader;
		NullCheck(L_39);
		uint8_t L_40 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_39);
		BinaryReader_t52 * L_41 = ___reader;
		int64_t* L_42 = ___objectId;
		Object_t ** L_43 = ___value;
		SerializationInfo_t2919 ** L_44 = ___info;
		ObjectReader_ReadObject_m18469(__this, L_40, L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		goto IL_0192;
	}

IL_011c:
	{
		Object_t ** L_45 = ___value;
		BinaryReader_t52 * L_46 = ___reader;
		NullCheck(L_46);
		uint8_t L_47 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_46);
		ArrayNullFiller_t4655 * L_48 = (ArrayNullFiller_t4655 *)il2cpp_codegen_object_new (ArrayNullFiller_t4655_il2cpp_TypeInfo_var);
		ArrayNullFiller__ctor_m18462(L_48, L_47, /*hidden argument*/NULL);
		*((Object_t **)(L_45)) = (Object_t *)L_48;
		int64_t* L_49 = ___objectId;
		*((int64_t*)(L_49)) = (int64_t)(((int64_t)0));
		SerializationInfo_t2919 ** L_50 = ___info;
		*((Object_t **)(L_50)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_0134:
	{
		Object_t ** L_51 = ___value;
		BinaryReader_t52 * L_52 = ___reader;
		NullCheck(L_52);
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_52);
		ArrayNullFiller_t4655 * L_54 = (ArrayNullFiller_t4655 *)il2cpp_codegen_object_new (ArrayNullFiller_t4655_il2cpp_TypeInfo_var);
		ArrayNullFiller__ctor_m18462(L_54, L_53, /*hidden argument*/NULL);
		*((Object_t **)(L_51)) = (Object_t *)L_54;
		int64_t* L_55 = ___objectId;
		*((int64_t*)(L_55)) = (int64_t)(((int64_t)0));
		SerializationInfo_t2919 ** L_56 = ___info;
		*((Object_t **)(L_56)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_014c:
	{
		BinaryReader_t52 * L_57 = ___reader;
		int64_t* L_58 = ___objectId;
		Object_t ** L_59 = ___value;
		ObjectReader_ReadArrayOfPrimitiveType_m18478(__this, L_57, L_58, L_59, /*hidden argument*/NULL);
		SerializationInfo_t2919 ** L_60 = ___info;
		*((Object_t **)(L_60)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_015c:
	{
		BinaryReader_t52 * L_61 = ___reader;
		int64_t* L_62 = ___objectId;
		Object_t ** L_63 = ___value;
		ObjectReader_ReadArrayOfObject_m18480(__this, L_61, L_62, L_63, /*hidden argument*/NULL);
		SerializationInfo_t2919 ** L_64 = ___info;
		*((Object_t **)(L_64)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_016c:
	{
		BinaryReader_t52 * L_65 = ___reader;
		int64_t* L_66 = ___objectId;
		Object_t ** L_67 = ___value;
		ObjectReader_ReadArrayOfString_m18481(__this, L_65, L_66, L_67, /*hidden argument*/NULL);
		SerializationInfo_t2919 ** L_68 = ___info;
		*((Object_t **)(L_68)) = (Object_t *)NULL;
		goto IL_0192;
	}

IL_017c:
	{
		uint8_t L_69 = ___element;
		int32_t L_70 = L_69;
		Object_t * L_71 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_70);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral4272, L_71, /*hidden argument*/NULL);
		SerializationException_t4192 * L_73 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_73, L_72, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_73);
	}

IL_0192:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadAssembly(System.IO.BinaryReader)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadAssembly_m18470 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = {0};
	{
		BinaryReader_t52 * L_0 = ___reader;
		NullCheck(L_0);
		uint32_t L_1 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_0);
		V_0 = (((uint64_t)L_1));
		BinaryReader_t52 * L_2 = ___reader;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_2);
		V_1 = L_3;
		Hashtable_t696 * L_4 = (__this->____registeredAssemblies_5);
		int64_t L_5 = V_0;
		int64_t L_6 = L_5;
		Object_t * L_7 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, L_7, L_8);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectInstance(System.IO.BinaryReader,System.Boolean,System.Boolean,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern "C" void ObjectReader_ReadObjectInstance_m18471 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2919 ** ___info, const MethodInfo* method)
{
	TypeMetadata_t4654 * V_0 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t52 * L_3 = ___reader;
		bool L_4 = ___isRuntimeObject;
		bool L_5 = ___hasTypeInfo;
		TypeMetadata_t4654 * L_6 = ObjectReader_ReadTypeMetadata_m18483(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		BinaryReader_t52 * L_7 = ___reader;
		TypeMetadata_t4654 * L_8 = V_0;
		int64_t* L_9 = ___objectId;
		Object_t ** L_10 = ___value;
		SerializationInfo_t2919 ** L_11 = ___info;
		ObjectReader_ReadObjectContent_m18473(__this, L_7, L_8, (*((int64_t*)L_9)), L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadRefTypeObjectInstance(System.IO.BinaryReader,System.Int64&,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* TypeMetadata_t4654_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadRefTypeObjectInstance_m18472 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___value, SerializationInfo_t2919 ** ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		TypeMetadata_t4654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8153);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	Object_t * V_1 = {0};
	TypeMetadata_t4654 * V_2 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t52 * L_3 = ___reader;
		NullCheck(L_3);
		uint32_t L_4 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_3);
		V_0 = (((uint64_t)L_4));
		ObjectManager_t4656 * L_5 = (__this->____manager_4);
		int64_t L_6 = V_0;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int64_t >::Invoke(5 /* System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64) */, L_5, L_6);
		V_1 = L_7;
		Object_t * L_8 = V_1;
		if (L_8)
		{
			goto IL_002c;
		}
	}
	{
		SerializationException_t4192 * L_9 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_9, (String_t*) &_stringLiteral4273, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002c:
	{
		Hashtable_t696 * L_10 = (__this->____typeMetadataCache_6);
		Object_t * L_11 = V_1;
		NullCheck(L_11);
		Type_t * L_12 = Object_GetType_m4060(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_12);
		V_2 = ((TypeMetadata_t4654 *)Castclass(L_13, TypeMetadata_t4654_il2cpp_TypeInfo_var));
		BinaryReader_t52 * L_14 = ___reader;
		TypeMetadata_t4654 * L_15 = V_2;
		int64_t* L_16 = ___objectId;
		Object_t ** L_17 = ___value;
		SerializationInfo_t2919 ** L_18 = ___info;
		ObjectReader_ReadObjectContent_m18473(__this, L_14, L_15, (*((int64_t*)L_16)), L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadObjectContent(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata,System.Int64,System.Object&,System.Runtime.Serialization.SerializationInfo&)
extern TypeInfo* FormatterConverter_t4661_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationInfo_t2919_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadObjectContent_m18473 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, TypeMetadata_t4654 * ___metadata, int64_t ___objectId, Object_t ** ___objectInstance, SerializationInfo_t2919 ** ___info, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormatterConverter_t4661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8154);
		SerializationInfo_t2919_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5217);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SerializationInfo_t2919 ** G_B5_0 = {0};
	SerializationInfo_t2919 ** G_B4_0 = {0};
	SerializationInfo_t2919 * G_B6_0 = {0};
	SerializationInfo_t2919 ** G_B6_1 = {0};
	{
		int32_t L_0 = (__this->____filterLevel_3);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0019;
		}
	}
	{
		Object_t ** L_1 = ___objectInstance;
		TypeMetadata_t4654 * L_2 = ___metadata;
		NullCheck(L_2);
		Type_t * L_3 = (L_2->___Type_0);
		Object_t * L_4 = FormatterServices_GetSafeUninitializedObject_m18499(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		*((Object_t **)(L_1)) = (Object_t *)L_4;
		goto IL_0027;
	}

IL_0019:
	{
		Object_t ** L_5 = ___objectInstance;
		TypeMetadata_t4654 * L_6 = ___metadata;
		NullCheck(L_6);
		Type_t * L_7 = (L_6->___Type_0);
		Object_t * L_8 = FormatterServices_GetUninitializedObject_m18498(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		*((Object_t **)(L_5)) = (Object_t *)L_8;
	}

IL_0027:
	{
		ObjectManager_t4656 * L_9 = (__this->____manager_4);
		Object_t ** L_10 = ___objectInstance;
		NullCheck(L_9);
		ObjectManager_RaiseOnDeserializingEvent_m18505(L_9, (*((Object_t **)L_10)), /*hidden argument*/NULL);
		SerializationInfo_t2919 ** L_11 = ___info;
		TypeMetadata_t4654 * L_12 = ___metadata;
		NullCheck(L_12);
		bool L_13 = (L_12->___NeedsSerializationInfo_5);
		G_B4_0 = L_11;
		if (!L_13)
		{
			G_B5_0 = L_11;
			goto IL_0051;
		}
	}
	{
		TypeMetadata_t4654 * L_14 = ___metadata;
		NullCheck(L_14);
		Type_t * L_15 = (L_14->___Type_0);
		FormatterConverter_t4661 * L_16 = (FormatterConverter_t4661 *)il2cpp_codegen_object_new (FormatterConverter_t4661_il2cpp_TypeInfo_var);
		FormatterConverter__ctor_m18490(L_16, /*hidden argument*/NULL);
		SerializationInfo_t2919 * L_17 = (SerializationInfo_t2919 *)il2cpp_codegen_object_new (SerializationInfo_t2919_il2cpp_TypeInfo_var);
		SerializationInfo__ctor_m18555(L_17, L_15, L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		G_B6_1 = G_B4_0;
		goto IL_0052;
	}

IL_0051:
	{
		G_B6_0 = ((SerializationInfo_t2919 *)(NULL));
		G_B6_1 = G_B5_0;
	}

IL_0052:
	{
		*((Object_t **)(G_B6_1)) = (Object_t *)G_B6_0;
		TypeMetadata_t4654 * L_18 = ___metadata;
		NullCheck(L_18);
		StringU5BU5D_t75* L_19 = (L_18->___MemberNames_2);
		if (!L_19)
		{
			goto IL_008e;
		}
	}
	{
		V_0 = 0;
		goto IL_0083;
	}

IL_005f:
	{
		BinaryReader_t52 * L_20 = ___reader;
		Object_t ** L_21 = ___objectInstance;
		int64_t L_22 = ___objectId;
		SerializationInfo_t2919 ** L_23 = ___info;
		TypeMetadata_t4654 * L_24 = ___metadata;
		NullCheck(L_24);
		TypeU5BU5D_t1203* L_25 = (L_24->___MemberTypes_1);
		int32_t L_26 = V_0;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		TypeMetadata_t4654 * L_28 = ___metadata;
		NullCheck(L_28);
		StringU5BU5D_t75* L_29 = (L_28->___MemberNames_2);
		int32_t L_30 = V_0;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		ObjectReader_ReadValue_m18484(__this, L_20, (*((Object_t **)L_21)), L_22, (*((SerializationInfo_t2919 **)L_23)), (*(Type_t **)(Type_t **)SZArrayLdElema(L_25, L_27)), (*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)), (MemberInfo_t *)NULL, (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_33 = V_0;
		TypeMetadata_t4654 * L_34 = ___metadata;
		NullCheck(L_34);
		int32_t L_35 = (L_34->___FieldCount_4);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_00cb;
	}

IL_008e:
	{
		V_1 = 0;
		goto IL_00c2;
	}

IL_0092:
	{
		BinaryReader_t52 * L_36 = ___reader;
		Object_t ** L_37 = ___objectInstance;
		int64_t L_38 = ___objectId;
		SerializationInfo_t2919 ** L_39 = ___info;
		TypeMetadata_t4654 * L_40 = ___metadata;
		NullCheck(L_40);
		TypeU5BU5D_t1203* L_41 = (L_40->___MemberTypes_1);
		int32_t L_42 = V_1;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, L_42);
		int32_t L_43 = L_42;
		TypeMetadata_t4654 * L_44 = ___metadata;
		NullCheck(L_44);
		MemberInfoU5BU5D_t4653* L_45 = (L_44->___MemberInfos_3);
		int32_t L_46 = V_1;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		NullCheck((*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_45, L_47)));
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_45, L_47)));
		TypeMetadata_t4654 * L_49 = ___metadata;
		NullCheck(L_49);
		MemberInfoU5BU5D_t4653* L_50 = (L_49->___MemberInfos_3);
		int32_t L_51 = V_1;
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, L_51);
		int32_t L_52 = L_51;
		ObjectReader_ReadValue_m18484(__this, L_36, (*((Object_t **)L_37)), L_38, (*((SerializationInfo_t2919 **)L_39)), (*(Type_t **)(Type_t **)SZArrayLdElema(L_41, L_43)), L_48, (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_50, L_52)), (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		int32_t L_53 = V_1;
		V_1 = ((int32_t)((int32_t)L_53+(int32_t)1));
	}

IL_00c2:
	{
		int32_t L_54 = V_1;
		TypeMetadata_t4654 * L_55 = ___metadata;
		NullCheck(L_55);
		int32_t L_56 = (L_55->___FieldCount_4);
		if ((((int32_t)L_54) < ((int32_t)L_56)))
		{
			goto IL_0092;
		}
	}

IL_00cb:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RegisterObject(System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_RegisterObject_m18474 (ObjectReader_t4657 * __this, int64_t ___objectId, Object_t * ___objectInstance, SerializationInfo_t2919 * ___info, int64_t ___parentObjectId, MemberInfo_t * ___parentObjectMemeber, Int32U5BU5D_t484* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		int64_t L_0 = ___parentObjectId;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		___indices = (Int32U5BU5D_t484*)NULL;
	}

IL_0009:
	{
		Object_t * L_1 = ___objectInstance;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m4060(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_2);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_4 = ___parentObjectId;
		if (L_4)
		{
			goto IL_002e;
		}
	}

IL_001a:
	{
		ObjectManager_t4656 * L_5 = (__this->____manager_4);
		Object_t * L_6 = ___objectInstance;
		int64_t L_7 = ___objectId;
		SerializationInfo_t2919 * L_8 = ___info;
		NullCheck(L_5);
		ObjectManager_RegisterObject_m18513(L_5, L_6, L_7, L_8, (((int64_t)0)), (MemberInfo_t *)NULL, (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_002e:
	{
		Int32U5BU5D_t484* L_9 = ___indices;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Int32U5BU5D_t484* L_10 = ___indices;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Object System.Array::Clone() */, L_10);
		___indices = ((Int32U5BU5D_t484*)Castclass(L_11, Int32U5BU5D_t484_il2cpp_TypeInfo_var));
	}

IL_0042:
	{
		ObjectManager_t4656 * L_12 = (__this->____manager_4);
		Object_t * L_13 = ___objectInstance;
		int64_t L_14 = ___objectId;
		SerializationInfo_t2919 * L_15 = ___info;
		int64_t L_16 = ___parentObjectId;
		MemberInfo_t * L_17 = ___parentObjectMemeber;
		Int32U5BU5D_t484* L_18 = ___indices;
		NullCheck(L_12);
		ObjectManager_RegisterObject_m18513(L_12, L_13, L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadStringIntance(System.IO.BinaryReader,System.Int64&,System.Object&)
extern "C" void ObjectReader_ReadStringIntance_m18475 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___value, const MethodInfo* method)
{
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		Object_t ** L_3 = ___value;
		BinaryReader_t52 * L_4 = ___reader;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_4);
		*((Object_t **)(L_3)) = (Object_t *)L_5;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadGenericArray(System.IO.BinaryReader,System.Int64&,System.Object&)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadGenericArray_m18476 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Int32U5BU5D_t484* V_2 = {0};
	int32_t V_3 = 0;
	uint8_t V_4 = {0};
	Type_t * V_5 = {0};
	Array_t * V_6 = {0};
	Int32U5BU5D_t484* V_7 = {0};
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t52 * L_3 = ___reader;
		NullCheck(L_3);
		VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_3);
		BinaryReader_t52 * L_4 = ___reader;
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_4);
		V_0 = L_5;
		V_1 = 0;
		int32_t L_6 = V_0;
		V_2 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_6));
		V_3 = 0;
		goto IL_0038;
	}

IL_0024:
	{
		Int32U5BU5D_t484* L_7 = V_2;
		int32_t L_8 = V_3;
		BinaryReader_t52 * L_9 = ___reader;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_7, L_8)) = (int32_t)L_10;
		Int32U5BU5D_t484* L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		if ((*(int32_t*)(int32_t*)SZArrayLdElema(L_11, L_13)))
		{
			goto IL_0034;
		}
	}
	{
		V_1 = 1;
	}

IL_0034:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0024;
		}
	}
	{
		BinaryReader_t52 * L_17 = ___reader;
		NullCheck(L_17);
		uint8_t L_18 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_17);
		V_4 = L_18;
		BinaryReader_t52 * L_19 = ___reader;
		uint8_t L_20 = V_4;
		Type_t * L_21 = ObjectReader_ReadType_m18488(__this, L_19, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		Type_t * L_22 = V_5;
		Int32U5BU5D_t484* L_23 = V_2;
		Array_t * L_24 = Array_CreateInstance_m16142(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		bool L_25 = V_1;
		if (!L_25)
		{
			goto IL_0061;
		}
	}
	{
		Object_t ** L_26 = ___val;
		Array_t * L_27 = V_6;
		*((Object_t **)(L_26)) = (Object_t *)L_27;
		return;
	}

IL_0061:
	{
		int32_t L_28 = V_0;
		V_7 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_28));
		int32_t L_29 = V_0;
		V_8 = ((int32_t)((int32_t)L_29-(int32_t)1));
		goto IL_0084;
	}

IL_0070:
	{
		Int32U5BU5D_t484* L_30 = V_7;
		int32_t L_31 = V_8;
		Array_t * L_32 = V_6;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		int32_t L_34 = Array_GetLowerBound_m16115(L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_30, L_31)) = (int32_t)L_34;
		int32_t L_35 = V_8;
		V_8 = ((int32_t)((int32_t)L_35-(int32_t)1));
	}

IL_0084:
	{
		int32_t L_36 = V_8;
		if ((((int32_t)L_36) >= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		V_9 = 0;
		goto IL_00f0;
	}

IL_008e:
	{
		BinaryReader_t52 * L_37 = ___reader;
		Array_t * L_38 = V_6;
		int64_t* L_39 = ___objectId;
		Type_t * L_40 = V_5;
		Int32U5BU5D_t484* L_41 = V_7;
		ObjectReader_ReadValue_m18484(__this, L_37, L_38, (*((int64_t*)L_39)), (SerializationInfo_t2919 *)NULL, L_40, (String_t*)NULL, (MemberInfo_t *)NULL, L_41, /*hidden argument*/NULL);
		Array_t * L_42 = V_6;
		NullCheck(L_42);
		int32_t L_43 = Array_get_Rank_m15068(L_42, /*hidden argument*/NULL);
		V_10 = ((int32_t)((int32_t)L_43-(int32_t)1));
		goto IL_00eb;
	}

IL_00ad:
	{
		Int32U5BU5D_t484* L_44 = V_7;
		int32_t L_45 = V_10;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, L_45);
		int32_t* L_46 = ((int32_t*)(int32_t*)SZArrayLdElema(L_44, L_45));
		*((int32_t*)(L_46)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_46))+(int32_t)1));
		Int32U5BU5D_t484* L_47 = V_7;
		int32_t L_48 = V_10;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, L_48);
		int32_t L_49 = L_48;
		Array_t * L_50 = V_6;
		int32_t L_51 = V_10;
		NullCheck(L_50);
		int32_t L_52 = Array_GetUpperBound_m16127(L_50, L_51, /*hidden argument*/NULL);
		if ((((int32_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_47, L_49))) <= ((int32_t)L_52)))
		{
			goto IL_00e3;
		}
	}
	{
		int32_t L_53 = V_10;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		Int32U5BU5D_t484* L_54 = V_7;
		int32_t L_55 = V_10;
		Array_t * L_56 = V_6;
		int32_t L_57 = V_10;
		NullCheck(L_56);
		int32_t L_58 = Array_GetLowerBound_m16115(L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, L_55);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_54, L_55)) = (int32_t)L_58;
		goto IL_00e5;
	}

IL_00e0:
	{
		V_9 = 1;
	}

IL_00e3:
	{
		goto IL_00f0;
	}

IL_00e5:
	{
		int32_t L_59 = V_10;
		V_10 = ((int32_t)((int32_t)L_59-(int32_t)1));
	}

IL_00eb:
	{
		int32_t L_60 = V_10;
		if ((((int32_t)L_60) >= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}

IL_00f0:
	{
		bool L_61 = V_9;
		if (!L_61)
		{
			goto IL_008e;
		}
	}
	{
		Object_t ** L_62 = ___val;
		Array_t * L_63 = V_6;
		*((Object_t **)(L_62)) = (Object_t *)L_63;
		return;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadBoxedPrimitiveTypeValue(System.IO.BinaryReader)
extern "C" Object_t * ObjectReader_ReadBoxedPrimitiveTypeValue_m18477 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, const MethodInfo* method)
{
	Type_t * V_0 = {0};
	{
		BinaryReader_t52 * L_0 = ___reader;
		Type_t * L_1 = ObjectReader_ReadType_m18488(__this, L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		BinaryReader_t52 * L_2 = ___reader;
		Type_t * L_3 = V_0;
		Object_t * L_4 = ObjectReader_ReadPrimitiveTypeValue_m18489(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfPrimitiveType(System.IO.BinaryReader,System.Int64&,System.Object&)
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* BooleanU5BU5D_t487_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t697_il2cpp_TypeInfo_var;
extern TypeInfo* DateTimeU5BU5D_t4895_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* DecimalU5BU5D_t4896_il2cpp_TypeInfo_var;
extern TypeInfo* DoubleU5BU5D_t4873_il2cpp_TypeInfo_var;
extern TypeInfo* Int16U5BU5D_t4886_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern TypeInfo* Int64U5BU5D_t4872_il2cpp_TypeInfo_var;
extern TypeInfo* SByteU5BU5D_t4761_il2cpp_TypeInfo_var;
extern TypeInfo* SingleU5BU5D_t586_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16U5BU5D_t4060_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32U5BU5D_t3217_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64U5BU5D_t4710_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpanU5BU5D_t4897_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadArrayOfPrimitiveType_m18478 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2467);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		BooleanU5BU5D_t487_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		CharU5BU5D_t697_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(190);
		DateTimeU5BU5D_t4895_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8155);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		DecimalU5BU5D_t4896_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8156);
		DoubleU5BU5D_t4873_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7934);
		Int16U5BU5D_t4886_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7925);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		Int64U5BU5D_t4872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7927);
		SByteU5BU5D_t4761_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7926);
		SingleU5BU5D_t586_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(588);
		UInt16U5BU5D_t4060_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7090);
		UInt32U5BU5D_t3217_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5461);
		UInt64U5BU5D_t4710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7923);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TimeSpanU5BU5D_t4897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8157);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	BooleanU5BU5D_t487* V_2 = {0};
	int32_t V_3 = 0;
	ByteU5BU5D_t66* V_4 = {0};
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	CharU5BU5D_t697* V_7 = {0};
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	DateTimeU5BU5D_t4895* V_10 = {0};
	int32_t V_11 = 0;
	DecimalU5BU5D_t4896* V_12 = {0};
	int32_t V_13 = 0;
	DoubleU5BU5D_t4873* V_14 = {0};
	int32_t V_15 = 0;
	Int16U5BU5D_t4886* V_16 = {0};
	int32_t V_17 = 0;
	Int32U5BU5D_t484* V_18 = {0};
	int32_t V_19 = 0;
	Int64U5BU5D_t4872* V_20 = {0};
	int32_t V_21 = 0;
	SByteU5BU5D_t4761* V_22 = {0};
	int32_t V_23 = 0;
	SingleU5BU5D_t586* V_24 = {0};
	int32_t V_25 = 0;
	UInt16U5BU5D_t4060* V_26 = {0};
	int32_t V_27 = 0;
	UInt32U5BU5D_t3217* V_28 = {0};
	int32_t V_29 = 0;
	UInt64U5BU5D_t4710* V_30 = {0};
	int32_t V_31 = 0;
	StringU5BU5D_t75* V_32 = {0};
	int32_t V_33 = 0;
	TimeSpanU5BU5D_t4897* V_34 = {0};
	int32_t V_35 = 0;
	int32_t V_36 = {0};
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t52 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_0 = L_4;
		BinaryReader_t52 * L_5 = ___reader;
		Type_t * L_6 = ObjectReader_ReadType_m18488(__this, L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		Type_t * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_8 = Type_GetTypeCode_m16217(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_36 = L_8;
		int32_t L_9 = V_36;
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 0)
		{
			goto IL_006f;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 1)
		{
			goto IL_00cb;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 2)
		{
			goto IL_0262;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 3)
		{
			goto IL_0093;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 4)
		{
			goto IL_01ae;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 5)
		{
			goto IL_02da;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 6)
		{
			goto IL_01ea;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 7)
		{
			goto IL_0316;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 8)
		{
			goto IL_0226;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 9)
		{
			goto IL_0352;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 10)
		{
			goto IL_029e;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 11)
		{
			goto IL_0172;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 12)
		{
			goto IL_013d;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 13)
		{
			goto IL_0103;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 14)
		{
			goto IL_03b7;
		}
		if (((int32_t)((int32_t)L_9-(int32_t)3)) == 15)
		{
			goto IL_038e;
		}
	}
	{
		goto IL_03b7;
	}

IL_006f:
	{
		int32_t L_10 = V_0;
		V_2 = ((BooleanU5BU5D_t487*)SZArrayNew(BooleanU5BU5D_t487_il2cpp_TypeInfo_var, L_10));
		V_3 = 0;
		goto IL_0087;
	}

IL_007a:
	{
		BooleanU5BU5D_t487* L_11 = V_2;
		int32_t L_12 = V_3;
		BinaryReader_t52 * L_13 = ___reader;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_13);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		*((bool*)(bool*)SZArrayLdElema(L_11, L_12)) = (bool)L_14;
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0087:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_007a;
		}
	}
	{
		Object_t ** L_18 = ___val;
		BooleanU5BU5D_t487* L_19 = V_2;
		*((Object_t **)(L_18)) = (Object_t *)L_19;
		goto IL_0413;
	}

IL_0093:
	{
		int32_t L_20 = V_0;
		V_4 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, L_20));
		V_5 = 0;
		goto IL_00bd;
	}

IL_00a0:
	{
		BinaryReader_t52 * L_21 = ___reader;
		ByteU5BU5D_t66* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_21);
		int32_t L_26 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(8 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_21, L_22, L_23, ((int32_t)((int32_t)L_24-(int32_t)L_25)));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (L_27)
		{
			goto IL_00b6;
		}
	}
	{
		goto IL_00c2;
	}

IL_00b6:
	{
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		V_5 = ((int32_t)((int32_t)L_28+(int32_t)L_29));
	}

IL_00bd:
	{
		int32_t L_30 = V_5;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00a0;
		}
	}

IL_00c2:
	{
		Object_t ** L_32 = ___val;
		ByteU5BU5D_t66* L_33 = V_4;
		*((Object_t **)(L_32)) = (Object_t *)L_33;
		goto IL_0413;
	}

IL_00cb:
	{
		int32_t L_34 = V_0;
		V_7 = ((CharU5BU5D_t697*)SZArrayNew(CharU5BU5D_t697_il2cpp_TypeInfo_var, L_34));
		V_8 = 0;
		goto IL_00f5;
	}

IL_00d8:
	{
		BinaryReader_t52 * L_35 = ___reader;
		CharU5BU5D_t697* L_36 = V_7;
		int32_t L_37 = V_8;
		int32_t L_38 = V_0;
		int32_t L_39 = V_8;
		NullCheck(L_35);
		int32_t L_40 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t697*, int32_t, int32_t >::Invoke(9 /* System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32) */, L_35, L_36, L_37, ((int32_t)((int32_t)L_38-(int32_t)L_39)));
		V_9 = L_40;
		int32_t L_41 = V_9;
		if (L_41)
		{
			goto IL_00ee;
		}
	}
	{
		goto IL_00fa;
	}

IL_00ee:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_9;
		V_8 = ((int32_t)((int32_t)L_42+(int32_t)L_43));
	}

IL_00f5:
	{
		int32_t L_44 = V_8;
		int32_t L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00d8;
		}
	}

IL_00fa:
	{
		Object_t ** L_46 = ___val;
		CharU5BU5D_t697* L_47 = V_7;
		*((Object_t **)(L_46)) = (Object_t *)L_47;
		goto IL_0413;
	}

IL_0103:
	{
		int32_t L_48 = V_0;
		V_10 = ((DateTimeU5BU5D_t4895*)SZArrayNew(DateTimeU5BU5D_t4895_il2cpp_TypeInfo_var, L_48));
		V_11 = 0;
		goto IL_012f;
	}

IL_0110:
	{
		DateTimeU5BU5D_t4895* L_49 = V_10;
		int32_t L_50 = V_11;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		BinaryReader_t52 * L_51 = ___reader;
		NullCheck(L_51);
		int64_t L_52 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_51);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_53 = DateTime_FromBinary_m19651(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		*((DateTime_t287 *)(DateTime_t287 *)SZArrayLdElema(L_49, L_50)) = L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)((int32_t)L_54+(int32_t)1));
	}

IL_012f:
	{
		int32_t L_55 = V_11;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0110;
		}
	}
	{
		Object_t ** L_57 = ___val;
		DateTimeU5BU5D_t4895* L_58 = V_10;
		*((Object_t **)(L_57)) = (Object_t *)L_58;
		goto IL_0413;
	}

IL_013d:
	{
		int32_t L_59 = V_0;
		V_12 = ((DecimalU5BU5D_t4896*)SZArrayNew(DecimalU5BU5D_t4896_il2cpp_TypeInfo_var, L_59));
		V_13 = 0;
		goto IL_0164;
	}

IL_014a:
	{
		DecimalU5BU5D_t4896* L_60 = V_12;
		int32_t L_61 = V_13;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, L_61);
		BinaryReader_t52 * L_62 = ___reader;
		NullCheck(L_62);
		Decimal_t745  L_63 = (Decimal_t745 )VirtFuncInvoker0< Decimal_t745  >::Invoke(13 /* System.Decimal System.IO.BinaryReader::ReadDecimal() */, L_62);
		*((Decimal_t745 *)(Decimal_t745 *)SZArrayLdElema(L_60, L_61)) = L_63;
		int32_t L_64 = V_13;
		V_13 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_0164:
	{
		int32_t L_65 = V_13;
		int32_t L_66 = V_0;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_014a;
		}
	}
	{
		Object_t ** L_67 = ___val;
		DecimalU5BU5D_t4896* L_68 = V_12;
		*((Object_t **)(L_67)) = (Object_t *)L_68;
		goto IL_0413;
	}

IL_0172:
	{
		int32_t L_69 = V_0;
		V_14 = ((DoubleU5BU5D_t4873*)SZArrayNew(DoubleU5BU5D_t4873_il2cpp_TypeInfo_var, L_69));
		int32_t L_70 = V_0;
		if ((((int32_t)L_70) <= ((int32_t)2)))
		{
			goto IL_018a;
		}
	}
	{
		BinaryReader_t52 * L_71 = ___reader;
		DoubleU5BU5D_t4873* L_72 = V_14;
		ObjectReader_BlockRead_m18479(__this, L_71, (Array_t *)(Array_t *)L_72, 8, /*hidden argument*/NULL);
		goto IL_01a5;
	}

IL_018a:
	{
		V_15 = 0;
		goto IL_01a0;
	}

IL_018f:
	{
		DoubleU5BU5D_t4873* L_73 = V_14;
		int32_t L_74 = V_15;
		BinaryReader_t52 * L_75 = ___reader;
		NullCheck(L_75);
		double L_76 = (double)VirtFuncInvoker0< double >::Invoke(14 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_75);
		NullCheck(L_73);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_73, L_74);
		*((double*)(double*)SZArrayLdElema(L_73, L_74)) = (double)L_76;
		int32_t L_77 = V_15;
		V_15 = ((int32_t)((int32_t)L_77+(int32_t)1));
	}

IL_01a0:
	{
		int32_t L_78 = V_15;
		int32_t L_79 = V_0;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_018f;
		}
	}

IL_01a5:
	{
		Object_t ** L_80 = ___val;
		DoubleU5BU5D_t4873* L_81 = V_14;
		*((Object_t **)(L_80)) = (Object_t *)L_81;
		goto IL_0413;
	}

IL_01ae:
	{
		int32_t L_82 = V_0;
		V_16 = ((Int16U5BU5D_t4886*)SZArrayNew(Int16U5BU5D_t4886_il2cpp_TypeInfo_var, L_82));
		int32_t L_83 = V_0;
		if ((((int32_t)L_83) <= ((int32_t)2)))
		{
			goto IL_01c6;
		}
	}
	{
		BinaryReader_t52 * L_84 = ___reader;
		Int16U5BU5D_t4886* L_85 = V_16;
		ObjectReader_BlockRead_m18479(__this, L_84, (Array_t *)(Array_t *)L_85, 2, /*hidden argument*/NULL);
		goto IL_01e1;
	}

IL_01c6:
	{
		V_17 = 0;
		goto IL_01dc;
	}

IL_01cb:
	{
		Int16U5BU5D_t4886* L_86 = V_16;
		int32_t L_87 = V_17;
		BinaryReader_t52 * L_88 = ___reader;
		NullCheck(L_88);
		int16_t L_89 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(15 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_88);
		NullCheck(L_86);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_86, L_87);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_86, L_87)) = (int16_t)L_89;
		int32_t L_90 = V_17;
		V_17 = ((int32_t)((int32_t)L_90+(int32_t)1));
	}

IL_01dc:
	{
		int32_t L_91 = V_17;
		int32_t L_92 = V_0;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_01cb;
		}
	}

IL_01e1:
	{
		Object_t ** L_93 = ___val;
		Int16U5BU5D_t4886* L_94 = V_16;
		*((Object_t **)(L_93)) = (Object_t *)L_94;
		goto IL_0413;
	}

IL_01ea:
	{
		int32_t L_95 = V_0;
		V_18 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, L_95));
		int32_t L_96 = V_0;
		if ((((int32_t)L_96) <= ((int32_t)2)))
		{
			goto IL_0202;
		}
	}
	{
		BinaryReader_t52 * L_97 = ___reader;
		Int32U5BU5D_t484* L_98 = V_18;
		ObjectReader_BlockRead_m18479(__this, L_97, (Array_t *)(Array_t *)L_98, 4, /*hidden argument*/NULL);
		goto IL_021d;
	}

IL_0202:
	{
		V_19 = 0;
		goto IL_0218;
	}

IL_0207:
	{
		Int32U5BU5D_t484* L_99 = V_18;
		int32_t L_100 = V_19;
		BinaryReader_t52 * L_101 = ___reader;
		NullCheck(L_101);
		int32_t L_102 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_101);
		NullCheck(L_99);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_99, L_100);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_99, L_100)) = (int32_t)L_102;
		int32_t L_103 = V_19;
		V_19 = ((int32_t)((int32_t)L_103+(int32_t)1));
	}

IL_0218:
	{
		int32_t L_104 = V_19;
		int32_t L_105 = V_0;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_0207;
		}
	}

IL_021d:
	{
		Object_t ** L_106 = ___val;
		Int32U5BU5D_t484* L_107 = V_18;
		*((Object_t **)(L_106)) = (Object_t *)L_107;
		goto IL_0413;
	}

IL_0226:
	{
		int32_t L_108 = V_0;
		V_20 = ((Int64U5BU5D_t4872*)SZArrayNew(Int64U5BU5D_t4872_il2cpp_TypeInfo_var, L_108));
		int32_t L_109 = V_0;
		if ((((int32_t)L_109) <= ((int32_t)2)))
		{
			goto IL_023e;
		}
	}
	{
		BinaryReader_t52 * L_110 = ___reader;
		Int64U5BU5D_t4872* L_111 = V_20;
		ObjectReader_BlockRead_m18479(__this, L_110, (Array_t *)(Array_t *)L_111, 8, /*hidden argument*/NULL);
		goto IL_0259;
	}

IL_023e:
	{
		V_21 = 0;
		goto IL_0254;
	}

IL_0243:
	{
		Int64U5BU5D_t4872* L_112 = V_20;
		int32_t L_113 = V_21;
		BinaryReader_t52 * L_114 = ___reader;
		NullCheck(L_114);
		int64_t L_115 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_114);
		NullCheck(L_112);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_112, L_113);
		*((int64_t*)(int64_t*)SZArrayLdElema(L_112, L_113)) = (int64_t)L_115;
		int32_t L_116 = V_21;
		V_21 = ((int32_t)((int32_t)L_116+(int32_t)1));
	}

IL_0254:
	{
		int32_t L_117 = V_21;
		int32_t L_118 = V_0;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0243;
		}
	}

IL_0259:
	{
		Object_t ** L_119 = ___val;
		Int64U5BU5D_t4872* L_120 = V_20;
		*((Object_t **)(L_119)) = (Object_t *)L_120;
		goto IL_0413;
	}

IL_0262:
	{
		int32_t L_121 = V_0;
		V_22 = ((SByteU5BU5D_t4761*)SZArrayNew(SByteU5BU5D_t4761_il2cpp_TypeInfo_var, L_121));
		int32_t L_122 = V_0;
		if ((((int32_t)L_122) <= ((int32_t)2)))
		{
			goto IL_027a;
		}
	}
	{
		BinaryReader_t52 * L_123 = ___reader;
		SByteU5BU5D_t4761* L_124 = V_22;
		ObjectReader_BlockRead_m18479(__this, L_123, (Array_t *)(Array_t *)L_124, 1, /*hidden argument*/NULL);
		goto IL_0295;
	}

IL_027a:
	{
		V_23 = 0;
		goto IL_0290;
	}

IL_027f:
	{
		SByteU5BU5D_t4761* L_125 = V_22;
		int32_t L_126 = V_23;
		BinaryReader_t52 * L_127 = ___reader;
		NullCheck(L_127);
		int8_t L_128 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(18 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_127);
		NullCheck(L_125);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_125, L_126);
		*((int8_t*)(int8_t*)SZArrayLdElema(L_125, L_126)) = (int8_t)L_128;
		int32_t L_129 = V_23;
		V_23 = ((int32_t)((int32_t)L_129+(int32_t)1));
	}

IL_0290:
	{
		int32_t L_130 = V_23;
		int32_t L_131 = V_0;
		if ((((int32_t)L_130) < ((int32_t)L_131)))
		{
			goto IL_027f;
		}
	}

IL_0295:
	{
		Object_t ** L_132 = ___val;
		SByteU5BU5D_t4761* L_133 = V_22;
		*((Object_t **)(L_132)) = (Object_t *)L_133;
		goto IL_0413;
	}

IL_029e:
	{
		int32_t L_134 = V_0;
		V_24 = ((SingleU5BU5D_t586*)SZArrayNew(SingleU5BU5D_t586_il2cpp_TypeInfo_var, L_134));
		int32_t L_135 = V_0;
		if ((((int32_t)L_135) <= ((int32_t)2)))
		{
			goto IL_02b6;
		}
	}
	{
		BinaryReader_t52 * L_136 = ___reader;
		SingleU5BU5D_t586* L_137 = V_24;
		ObjectReader_BlockRead_m18479(__this, L_136, (Array_t *)(Array_t *)L_137, 4, /*hidden argument*/NULL);
		goto IL_02d1;
	}

IL_02b6:
	{
		V_25 = 0;
		goto IL_02cc;
	}

IL_02bb:
	{
		SingleU5BU5D_t586* L_138 = V_24;
		int32_t L_139 = V_25;
		BinaryReader_t52 * L_140 = ___reader;
		NullCheck(L_140);
		float L_141 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_140);
		NullCheck(L_138);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_138, L_139);
		*((float*)(float*)SZArrayLdElema(L_138, L_139)) = (float)L_141;
		int32_t L_142 = V_25;
		V_25 = ((int32_t)((int32_t)L_142+(int32_t)1));
	}

IL_02cc:
	{
		int32_t L_143 = V_25;
		int32_t L_144 = V_0;
		if ((((int32_t)L_143) < ((int32_t)L_144)))
		{
			goto IL_02bb;
		}
	}

IL_02d1:
	{
		Object_t ** L_145 = ___val;
		SingleU5BU5D_t586* L_146 = V_24;
		*((Object_t **)(L_145)) = (Object_t *)L_146;
		goto IL_0413;
	}

IL_02da:
	{
		int32_t L_147 = V_0;
		V_26 = ((UInt16U5BU5D_t4060*)SZArrayNew(UInt16U5BU5D_t4060_il2cpp_TypeInfo_var, L_147));
		int32_t L_148 = V_0;
		if ((((int32_t)L_148) <= ((int32_t)2)))
		{
			goto IL_02f2;
		}
	}
	{
		BinaryReader_t52 * L_149 = ___reader;
		UInt16U5BU5D_t4060* L_150 = V_26;
		ObjectReader_BlockRead_m18479(__this, L_149, (Array_t *)(Array_t *)L_150, 2, /*hidden argument*/NULL);
		goto IL_030d;
	}

IL_02f2:
	{
		V_27 = 0;
		goto IL_0308;
	}

IL_02f7:
	{
		UInt16U5BU5D_t4060* L_151 = V_26;
		int32_t L_152 = V_27;
		BinaryReader_t52 * L_153 = ___reader;
		NullCheck(L_153);
		uint16_t L_154 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(21 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_153);
		NullCheck(L_151);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_151, L_152);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_151, L_152)) = (uint16_t)L_154;
		int32_t L_155 = V_27;
		V_27 = ((int32_t)((int32_t)L_155+(int32_t)1));
	}

IL_0308:
	{
		int32_t L_156 = V_27;
		int32_t L_157 = V_0;
		if ((((int32_t)L_156) < ((int32_t)L_157)))
		{
			goto IL_02f7;
		}
	}

IL_030d:
	{
		Object_t ** L_158 = ___val;
		UInt16U5BU5D_t4060* L_159 = V_26;
		*((Object_t **)(L_158)) = (Object_t *)L_159;
		goto IL_0413;
	}

IL_0316:
	{
		int32_t L_160 = V_0;
		V_28 = ((UInt32U5BU5D_t3217*)SZArrayNew(UInt32U5BU5D_t3217_il2cpp_TypeInfo_var, L_160));
		int32_t L_161 = V_0;
		if ((((int32_t)L_161) <= ((int32_t)2)))
		{
			goto IL_032e;
		}
	}
	{
		BinaryReader_t52 * L_162 = ___reader;
		UInt32U5BU5D_t3217* L_163 = V_28;
		ObjectReader_BlockRead_m18479(__this, L_162, (Array_t *)(Array_t *)L_163, 4, /*hidden argument*/NULL);
		goto IL_0349;
	}

IL_032e:
	{
		V_29 = 0;
		goto IL_0344;
	}

IL_0333:
	{
		UInt32U5BU5D_t3217* L_164 = V_28;
		int32_t L_165 = V_29;
		BinaryReader_t52 * L_166 = ___reader;
		NullCheck(L_166);
		uint32_t L_167 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_166);
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, L_165);
		*((uint32_t*)(uint32_t*)SZArrayLdElema(L_164, L_165)) = (uint32_t)L_167;
		int32_t L_168 = V_29;
		V_29 = ((int32_t)((int32_t)L_168+(int32_t)1));
	}

IL_0344:
	{
		int32_t L_169 = V_29;
		int32_t L_170 = V_0;
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0333;
		}
	}

IL_0349:
	{
		Object_t ** L_171 = ___val;
		UInt32U5BU5D_t3217* L_172 = V_28;
		*((Object_t **)(L_171)) = (Object_t *)L_172;
		goto IL_0413;
	}

IL_0352:
	{
		int32_t L_173 = V_0;
		V_30 = ((UInt64U5BU5D_t4710*)SZArrayNew(UInt64U5BU5D_t4710_il2cpp_TypeInfo_var, L_173));
		int32_t L_174 = V_0;
		if ((((int32_t)L_174) <= ((int32_t)2)))
		{
			goto IL_036a;
		}
	}
	{
		BinaryReader_t52 * L_175 = ___reader;
		UInt64U5BU5D_t4710* L_176 = V_30;
		ObjectReader_BlockRead_m18479(__this, L_175, (Array_t *)(Array_t *)L_176, 8, /*hidden argument*/NULL);
		goto IL_0385;
	}

IL_036a:
	{
		V_31 = 0;
		goto IL_0380;
	}

IL_036f:
	{
		UInt64U5BU5D_t4710* L_177 = V_30;
		int32_t L_178 = V_31;
		BinaryReader_t52 * L_179 = ___reader;
		NullCheck(L_179);
		uint64_t L_180 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(23 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_179);
		NullCheck(L_177);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_177, L_178);
		*((uint64_t*)(uint64_t*)SZArrayLdElema(L_177, L_178)) = (uint64_t)L_180;
		int32_t L_181 = V_31;
		V_31 = ((int32_t)((int32_t)L_181+(int32_t)1));
	}

IL_0380:
	{
		int32_t L_182 = V_31;
		int32_t L_183 = V_0;
		if ((((int32_t)L_182) < ((int32_t)L_183)))
		{
			goto IL_036f;
		}
	}

IL_0385:
	{
		Object_t ** L_184 = ___val;
		UInt64U5BU5D_t4710* L_185 = V_30;
		*((Object_t **)(L_184)) = (Object_t *)L_185;
		goto IL_0413;
	}

IL_038e:
	{
		int32_t L_186 = V_0;
		V_32 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_186));
		V_33 = 0;
		goto IL_03ac;
	}

IL_039b:
	{
		StringU5BU5D_t75* L_187 = V_32;
		int32_t L_188 = V_33;
		BinaryReader_t52 * L_189 = ___reader;
		NullCheck(L_189);
		String_t* L_190 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_189);
		NullCheck(L_187);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_187, L_188);
		ArrayElementTypeCheck (L_187, L_190);
		*((String_t**)(String_t**)SZArrayLdElema(L_187, L_188)) = (String_t*)L_190;
		int32_t L_191 = V_33;
		V_33 = ((int32_t)((int32_t)L_191+(int32_t)1));
	}

IL_03ac:
	{
		int32_t L_192 = V_33;
		int32_t L_193 = V_0;
		if ((((int32_t)L_192) < ((int32_t)L_193)))
		{
			goto IL_039b;
		}
	}
	{
		Object_t ** L_194 = ___val;
		StringU5BU5D_t75* L_195 = V_32;
		*((Object_t **)(L_194)) = (Object_t *)L_195;
		goto IL_0413;
	}

IL_03b7:
	{
		Type_t * L_196 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_197 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_196) == ((Object_t*)(Type_t *)L_197))))
		{
			goto IL_03fb;
		}
	}
	{
		int32_t L_198 = V_0;
		V_34 = ((TimeSpanU5BU5D_t4897*)SZArrayNew(TimeSpanU5BU5D_t4897_il2cpp_TypeInfo_var, L_198));
		V_35 = 0;
		goto IL_03f0;
	}

IL_03d1:
	{
		TimeSpanU5BU5D_t4897* L_199 = V_34;
		int32_t L_200 = V_35;
		NullCheck(L_199);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_199, L_200);
		BinaryReader_t52 * L_201 = ___reader;
		NullCheck(L_201);
		int64_t L_202 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_201);
		TimeSpan_t334  L_203 = {0};
		TimeSpan__ctor_m11848(&L_203, L_202, /*hidden argument*/NULL);
		*((TimeSpan_t334 *)(TimeSpan_t334 *)SZArrayLdElema(L_199, L_200)) = L_203;
		int32_t L_204 = V_35;
		V_35 = ((int32_t)((int32_t)L_204+(int32_t)1));
	}

IL_03f0:
	{
		int32_t L_205 = V_35;
		int32_t L_206 = V_0;
		if ((((int32_t)L_205) < ((int32_t)L_206)))
		{
			goto IL_03d1;
		}
	}
	{
		Object_t ** L_207 = ___val;
		TimeSpanU5BU5D_t4897* L_208 = V_34;
		*((Object_t **)(L_207)) = (Object_t *)L_208;
		goto IL_0411;
	}

IL_03fb:
	{
		Type_t * L_209 = V_1;
		NullCheck(L_209);
		String_t* L_210 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_209);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_211 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral4274, L_210, /*hidden argument*/NULL);
		NotSupportedException_t56 * L_212 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10416(L_212, L_211, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_212);
	}

IL_0411:
	{
		goto IL_0413;
	}

IL_0413:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::BlockRead(System.IO.BinaryReader,System.Array,System.Int32)
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* BitConverter_t3378_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_BlockRead_m18479 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, Array_t * ___array, int32_t ___dataSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		BitConverter_t3378_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6006);
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ObjectReader_t4657 * G_B5_0 = {0};
	ObjectReader_t4657 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	ObjectReader_t4657 * G_B6_1 = {0};
	int32_t G_B11_0 = 0;
	{
		Array_t * L_0 = ___array;
		int32_t L_1 = Buffer_ByteLength_m19380(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t66* L_2 = (__this->___arrayBuffer_10);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = V_0;
		ByteU5BU5D_t66* L_4 = (__this->___arrayBuffer_10);
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_t66* L_5 = (__this->___arrayBuffer_10);
		NullCheck(L_5);
		int32_t L_6 = (__this->___ArrayBufferLength_11);
		if ((((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))) == ((int32_t)L_6)))
		{
			goto IL_0047;
		}
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = (__this->___ArrayBufferLength_11);
		G_B4_0 = __this;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			G_B5_0 = __this;
			goto IL_0037;
		}
	}
	{
		int32_t L_9 = V_0;
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_003d;
	}

IL_0037:
	{
		int32_t L_10 = (__this->___ArrayBufferLength_11);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_0;
	}

IL_003d:
	{
		NullCheck(G_B6_1);
		G_B6_1->___arrayBuffer_10 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, G_B6_0));
	}

IL_0047:
	{
		V_1 = 0;
		goto IL_00b4;
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		ByteU5BU5D_t66* L_12 = (__this->___arrayBuffer_10);
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B11_0 = L_13;
		goto IL_0061;
	}

IL_0059:
	{
		ByteU5BU5D_t66* L_14 = (__this->___arrayBuffer_10);
		NullCheck(L_14);
		G_B11_0 = (((int32_t)(((Array_t *)L_14)->max_length)));
	}

IL_0061:
	{
		V_2 = G_B11_0;
		V_3 = 0;
	}

IL_0064:
	{
		BinaryReader_t52 * L_15 = ___reader;
		ByteU5BU5D_t66* L_16 = (__this->___arrayBuffer_10);
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_15);
		int32_t L_20 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t66*, int32_t, int32_t >::Invoke(8 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)));
		V_4 = L_20;
		int32_t L_21 = V_4;
		if (L_21)
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0085;
	}

IL_007c:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)L_23));
		int32_t L_24 = V_3;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0064;
		}
	}

IL_0085:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3378_il2cpp_TypeInfo_var);
		bool L_26 = ((BitConverter_t3378_StaticFields*)BitConverter_t3378_il2cpp_TypeInfo_var->static_fields)->___IsLittleEndian_1;
		if (L_26)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_27 = ___dataSize;
		if ((((int32_t)L_27) <= ((int32_t)1)))
		{
			goto IL_009d;
		}
	}
	{
		ByteU5BU5D_t66* L_28 = (__this->___arrayBuffer_10);
		int32_t L_29 = V_2;
		int32_t L_30 = ___dataSize;
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		BinaryCommon_SwapBytes_m18447(NULL /*static, unused*/, L_28, L_29, L_30, /*hidden argument*/NULL);
	}

IL_009d:
	{
		ByteU5BU5D_t66* L_31 = (__this->___arrayBuffer_10);
		Array_t * L_32 = ___array;
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		Buffer_BlockCopy_m11476(NULL /*static, unused*/, (Array_t *)(Array_t *)L_31, 0, L_32, L_33, L_34, /*hidden argument*/NULL);
		int32_t L_35 = V_0;
		int32_t L_36 = V_2;
		V_0 = ((int32_t)((int32_t)L_35-(int32_t)L_36));
		int32_t L_37 = V_1;
		int32_t L_38 = V_2;
		V_1 = ((int32_t)((int32_t)L_37+(int32_t)L_38));
	}

IL_00b4:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfObject(System.IO.BinaryReader,System.Int64&,System.Object&)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadArrayOfObject_m18480 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		BinaryReader_t52 * L_0 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		int64_t* L_2 = ___objectId;
		Object_t ** L_3 = ___array;
		ObjectReader_ReadSimpleArray_m18482(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadArrayOfString(System.IO.BinaryReader,System.Int64&,System.Object&)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadArrayOfString_m18481 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, int64_t* ___objectId, Object_t ** ___array, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		BinaryReader_t52 * L_0 = ___reader;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		int64_t* L_2 = ___objectId;
		Object_t ** L_3 = ___array;
		ObjectReader_ReadSimpleArray_m18482(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadSimpleArray(System.IO.BinaryReader,System.Type,System.Int64&,System.Object&)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadSimpleArray_m18482 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, Type_t * ___elementType, int64_t* ___objectId, Object_t ** ___val, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t484* V_1 = {0};
	Array_t * V_2 = {0};
	int32_t V_3 = 0;
	{
		int64_t* L_0 = ___objectId;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		uint32_t L_2 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_1);
		*((int64_t*)(L_0)) = (int64_t)(((uint64_t)L_2));
		BinaryReader_t52 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_0 = L_4;
		V_1 = ((Int32U5BU5D_t484*)SZArrayNew(Int32U5BU5D_t484_il2cpp_TypeInfo_var, 1));
		Type_t * L_5 = ___elementType;
		int32_t L_6 = V_0;
		Array_t * L_7 = Array_CreateInstance_m16139(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_003e;
	}

IL_0023:
	{
		Int32U5BU5D_t484* L_8 = V_1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_8, 0)) = (int32_t)L_9;
		BinaryReader_t52 * L_10 = ___reader;
		Array_t * L_11 = V_2;
		int64_t* L_12 = ___objectId;
		Type_t * L_13 = ___elementType;
		Int32U5BU5D_t484* L_14 = V_1;
		ObjectReader_ReadValue_m18484(__this, L_10, L_11, (*((int64_t*)L_12)), (SerializationInfo_t2919 *)NULL, L_13, (String_t*)NULL, (MemberInfo_t *)NULL, L_14, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_15 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		int32_t L_16 = 0;
		V_3 = (*(int32_t*)(int32_t*)SZArrayLdElema(L_15, L_16));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_18 = V_3;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0023;
		}
	}
	{
		Object_t ** L_20 = ___val;
		Array_t * L_21 = V_2;
		*((Object_t **)(L_20)) = (Object_t *)L_21;
		return;
	}
}
// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadTypeMetadata(System.IO.BinaryReader,System.Boolean,System.Boolean)
extern const Il2CppType* ISerializable_t819_0_0_0_var;
extern TypeInfo* TypeMetadata_t4654_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1203_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* TypeTagU5BU5D_t4898_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t4620_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* MemberInfoU5BU5D_t4653_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" TypeMetadata_t4654 * ObjectReader_ReadTypeMetadata_m18483 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, bool ___isRuntimeObject, bool ___hasTypeInfo, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISerializable_t819_0_0_0_var = il2cpp_codegen_type_from_index(1141);
		TypeMetadata_t4654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8153);
		TypeU5BU5D_t1203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2684);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		TypeTagU5BU5D_t4898_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8158);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ISurrogateSelector_t4620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8122);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		MemberInfoU5BU5D_t4653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8160);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	TypeMetadata_t4654 * V_0 = {0};
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t1203* V_3 = {0};
	StringU5BU5D_t75* V_4 = {0};
	int32_t V_5 = 0;
	TypeTagU5BU5D_t4898* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int64_t V_9 = 0;
	Object_t * V_10 = {0};
	Object_t * V_11 = {0};
	int32_t V_12 = 0;
	FieldInfo_t * V_13 = {0};
	String_t* V_14 = {0};
	int32_t V_15 = 0;
	String_t* V_16 = {0};
	Type_t * V_17 = {0};
	{
		TypeMetadata_t4654 * L_0 = (TypeMetadata_t4654 *)il2cpp_codegen_object_new (TypeMetadata_t4654_il2cpp_TypeInfo_var);
		TypeMetadata__ctor_m18461(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		BinaryReader_t52 * L_1 = ___reader;
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_1);
		V_1 = L_2;
		BinaryReader_t52 * L_3 = ___reader;
		NullCheck(L_3);
		int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_3);
		V_2 = L_4;
		int32_t L_5 = V_2;
		V_3 = ((TypeU5BU5D_t1203*)SZArrayNew(TypeU5BU5D_t1203_il2cpp_TypeInfo_var, L_5));
		int32_t L_6 = V_2;
		V_4 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, L_6));
		V_5 = 0;
		goto IL_0039;
	}

IL_0028:
	{
		StringU5BU5D_t75* L_7 = V_4;
		int32_t L_8 = V_5;
		BinaryReader_t52 * L_9 = ___reader;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		ArrayElementTypeCheck (L_7, L_10);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, L_8)) = (String_t*)L_10;
		int32_t L_11 = V_5;
		V_5 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_5;
		int32_t L_13 = V_2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0028;
		}
	}
	{
		bool L_14 = ___hasTypeInfo;
		if (!L_14)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_15 = V_2;
		V_6 = ((TypeTagU5BU5D_t4898*)SZArrayNew(TypeTagU5BU5D_t4898_il2cpp_TypeInfo_var, L_15));
		V_7 = 0;
		goto IL_005f;
	}

IL_004e:
	{
		TypeTagU5BU5D_t4898* L_16 = V_6;
		int32_t L_17 = V_7;
		BinaryReader_t52 * L_18 = ___reader;
		NullCheck(L_18);
		uint8_t L_19 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_16, L_17)) = (uint8_t)L_19;
		int32_t L_20 = V_7;
		V_7 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_21 = V_7;
		int32_t L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_004e;
		}
	}
	{
		V_8 = 0;
		goto IL_007f;
	}

IL_0069:
	{
		TypeU5BU5D_t1203* L_23 = V_3;
		int32_t L_24 = V_8;
		BinaryReader_t52 * L_25 = ___reader;
		TypeTagU5BU5D_t4898* L_26 = V_6;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		Type_t * L_29 = ObjectReader_ReadType_m18488(__this, L_25, (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_28)), /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_29);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, L_24)) = (Type_t *)L_29;
		int32_t L_30 = V_8;
		V_8 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_007f:
	{
		int32_t L_31 = V_8;
		int32_t L_32 = V_2;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0069;
		}
	}

IL_0084:
	{
		bool L_33 = ___isRuntimeObject;
		if (L_33)
		{
			goto IL_00a1;
		}
	}
	{
		BinaryReader_t52 * L_34 = ___reader;
		NullCheck(L_34);
		uint32_t L_35 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_34);
		V_9 = (((uint64_t)L_35));
		TypeMetadata_t4654 * L_36 = V_0;
		int64_t L_37 = V_9;
		String_t* L_38 = V_1;
		Type_t * L_39 = ObjectReader_GetDeserializationType_m18487(__this, L_37, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		L_36->___Type_0 = L_39;
		goto IL_00ae;
	}

IL_00a1:
	{
		TypeMetadata_t4654 * L_40 = V_0;
		String_t* L_41 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetType_m10190(NULL /*static, unused*/, L_41, 1, /*hidden argument*/NULL);
		NullCheck(L_40);
		L_40->___Type_0 = L_42;
	}

IL_00ae:
	{
		TypeMetadata_t4654 * L_43 = V_0;
		TypeU5BU5D_t1203* L_44 = V_3;
		NullCheck(L_43);
		L_43->___MemberTypes_1 = L_44;
		TypeMetadata_t4654 * L_45 = V_0;
		StringU5BU5D_t75* L_46 = V_4;
		NullCheck(L_45);
		L_45->___MemberNames_2 = L_46;
		TypeMetadata_t4654 * L_47 = V_0;
		StringU5BU5D_t75* L_48 = V_4;
		NullCheck(L_48);
		NullCheck(L_47);
		L_47->___FieldCount_4 = (((int32_t)(((Array_t *)L_48)->max_length)));
		Object_t * L_49 = (__this->____surrogateSelector_0);
		if (!L_49)
		{
			goto IL_00f8;
		}
	}
	{
		Object_t * L_50 = (__this->____surrogateSelector_0);
		TypeMetadata_t4654 * L_51 = V_0;
		NullCheck(L_51);
		Type_t * L_52 = (L_51->___Type_0);
		StreamingContext_t2920  L_53 = (__this->____context_1);
		NullCheck(L_50);
		Object_t * L_54 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t2920 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t4620_il2cpp_TypeInfo_var, L_50, L_52, L_53, (&V_10));
		V_11 = L_54;
		TypeMetadata_t4654 * L_55 = V_0;
		Object_t * L_56 = V_11;
		NullCheck(L_55);
		L_55->___NeedsSerializationInfo_5 = ((((int32_t)((((Object_t*)(Object_t *)L_56) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00f8:
	{
		TypeMetadata_t4654 * L_57 = V_0;
		NullCheck(L_57);
		bool L_58 = (L_57->___NeedsSerializationInfo_5);
		if (L_58)
		{
			goto IL_0233;
		}
	}
	{
		TypeMetadata_t4654 * L_59 = V_0;
		NullCheck(L_59);
		Type_t * L_60 = (L_59->___Type_0);
		NullCheck(L_60);
		bool L_61 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsSerializable() */, L_60);
		if (L_61)
		{
			goto IL_011b;
		}
	}
	{
		SerializationException_t4192 * L_62 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_62, (String_t*) &_stringLiteral4275, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_011b:
	{
		TypeMetadata_t4654 * L_63 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_64 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ISerializable_t819_0_0_0_var), /*hidden argument*/NULL);
		TypeMetadata_t4654 * L_65 = V_0;
		NullCheck(L_65);
		Type_t * L_66 = (L_65->___Type_0);
		NullCheck(L_64);
		bool L_67 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_64, L_66);
		NullCheck(L_63);
		L_63->___NeedsSerializationInfo_5 = L_67;
		TypeMetadata_t4654 * L_68 = V_0;
		NullCheck(L_68);
		bool L_69 = (L_68->___NeedsSerializationInfo_5);
		if (L_69)
		{
			goto IL_0233;
		}
	}
	{
		TypeMetadata_t4654 * L_70 = V_0;
		int32_t L_71 = V_2;
		NullCheck(L_70);
		L_70->___MemberInfos_3 = ((MemberInfoU5BU5D_t4653*)SZArrayNew(MemberInfoU5BU5D_t4653_il2cpp_TypeInfo_var, L_71));
		V_12 = 0;
		goto IL_0224;
	}

IL_0155:
	{
		V_13 = (FieldInfo_t *)NULL;
		StringU5BU5D_t75* L_72 = V_4;
		int32_t L_73 = V_12;
		NullCheck(L_72);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_72, L_73);
		int32_t L_74 = L_73;
		V_14 = (*(String_t**)(String_t**)SZArrayLdElema(L_72, L_74));
		String_t* L_75 = V_14;
		NullCheck(L_75);
		int32_t L_76 = String_IndexOf_m3843(L_75, ((int32_t)43), /*hidden argument*/NULL);
		V_15 = L_76;
		int32_t L_77 = V_15;
		if ((((int32_t)L_77) == ((int32_t)(-1))))
		{
			goto IL_01cb;
		}
	}
	{
		StringU5BU5D_t75* L_78 = V_4;
		int32_t L_79 = V_12;
		NullCheck(L_78);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_78, L_79);
		int32_t L_80 = L_79;
		int32_t L_81 = V_15;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_78, L_80)));
		String_t* L_82 = String_Substring_m418((*(String_t**)(String_t**)SZArrayLdElema(L_78, L_80)), 0, L_81, /*hidden argument*/NULL);
		V_16 = L_82;
		StringU5BU5D_t75* L_83 = V_4;
		int32_t L_84 = V_12;
		NullCheck(L_83);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_83, L_84);
		int32_t L_85 = L_84;
		int32_t L_86 = V_15;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_83, L_85)));
		String_t* L_87 = String_Substring_m4122((*(String_t**)(String_t**)SZArrayLdElema(L_83, L_85)), ((int32_t)((int32_t)L_86+(int32_t)1)), /*hidden argument*/NULL);
		V_14 = L_87;
		TypeMetadata_t4654 * L_88 = V_0;
		NullCheck(L_88);
		Type_t * L_89 = (L_88->___Type_0);
		NullCheck(L_89);
		Type_t * L_90 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_89);
		V_17 = L_90;
		goto IL_01c5;
	}

IL_019d:
	{
		Type_t * L_91 = V_17;
		NullCheck(L_91);
		String_t* L_92 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_91);
		String_t* L_93 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_94 = String_op_Equality_m456(NULL /*static, unused*/, L_92, L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_01bc;
		}
	}
	{
		Type_t * L_95 = V_17;
		String_t* L_96 = V_14;
		NullCheck(L_95);
		FieldInfo_t * L_97 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_95, L_96, ((int32_t)52));
		V_13 = L_97;
		goto IL_01c9;
	}

IL_01bc:
	{
		Type_t * L_98 = V_17;
		NullCheck(L_98);
		Type_t * L_99 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_98);
		V_17 = L_99;
	}

IL_01c5:
	{
		Type_t * L_100 = V_17;
		if (L_100)
		{
			goto IL_019d;
		}
	}

IL_01c9:
	{
		goto IL_01dc;
	}

IL_01cb:
	{
		TypeMetadata_t4654 * L_101 = V_0;
		NullCheck(L_101);
		Type_t * L_102 = (L_101->___Type_0);
		String_t* L_103 = V_14;
		NullCheck(L_102);
		FieldInfo_t * L_104 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(45 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_102, L_103, ((int32_t)52));
		V_13 = L_104;
	}

IL_01dc:
	{
		FieldInfo_t * L_105 = V_13;
		if (L_105)
		{
			goto IL_0205;
		}
	}
	{
		StringU5BU5D_t75* L_106 = V_4;
		int32_t L_107 = V_12;
		NullCheck(L_106);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_106, L_107);
		int32_t L_108 = L_107;
		TypeMetadata_t4654 * L_109 = V_0;
		NullCheck(L_109);
		Type_t * L_110 = (L_109->___Type_0);
		NullCheck(L_110);
		String_t* L_111 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_110);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_112 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral4276, (*(String_t**)(String_t**)SZArrayLdElema(L_106, L_108)), (String_t*) &_stringLiteral4277, L_111, /*hidden argument*/NULL);
		SerializationException_t4192 * L_113 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_113, L_112, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_113);
	}

IL_0205:
	{
		TypeMetadata_t4654 * L_114 = V_0;
		NullCheck(L_114);
		MemberInfoU5BU5D_t4653* L_115 = (L_114->___MemberInfos_3);
		int32_t L_116 = V_12;
		FieldInfo_t * L_117 = V_13;
		NullCheck(L_115);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_115, L_116);
		ArrayElementTypeCheck (L_115, L_117);
		*((MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_115, L_116)) = (MemberInfo_t *)L_117;
		bool L_118 = ___hasTypeInfo;
		if (L_118)
		{
			goto IL_021e;
		}
	}
	{
		TypeU5BU5D_t1203* L_119 = V_3;
		int32_t L_120 = V_12;
		FieldInfo_t * L_121 = V_13;
		NullCheck(L_121);
		Type_t * L_122 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_121);
		NullCheck(L_119);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_119, L_120);
		ArrayElementTypeCheck (L_119, L_122);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_119, L_120)) = (Type_t *)L_122;
	}

IL_021e:
	{
		int32_t L_123 = V_12;
		V_12 = ((int32_t)((int32_t)L_123+(int32_t)1));
	}

IL_0224:
	{
		int32_t L_124 = V_12;
		int32_t L_125 = V_2;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_0155;
		}
	}
	{
		TypeMetadata_t4654 * L_126 = V_0;
		NullCheck(L_126);
		L_126->___MemberNames_2 = (StringU5BU5D_t75*)NULL;
	}

IL_0233:
	{
		Hashtable_t696 * L_127 = (__this->____typeMetadataCache_6);
		TypeMetadata_t4654 * L_128 = V_0;
		NullCheck(L_128);
		Type_t * L_129 = (L_128->___Type_0);
		NullCheck(L_127);
		bool L_130 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_127, L_129);
		if (L_130)
		{
			goto IL_0258;
		}
	}
	{
		Hashtable_t696 * L_131 = (__this->____typeMetadataCache_6);
		TypeMetadata_t4654 * L_132 = V_0;
		NullCheck(L_132);
		Type_t * L_133 = (L_132->___Type_0);
		TypeMetadata_t4654 * L_134 = V_0;
		NullCheck(L_131);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_131, L_133, L_134);
	}

IL_0258:
	{
		TypeMetadata_t4654 * L_135 = V_0;
		return L_135;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadValue(System.IO.BinaryReader,System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Type,System.String,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_ReadValue_m18484 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, Object_t * ___parentObject, int64_t ___parentObjectId, SerializationInfo_t2919 * ___info, Type_t * ___valueType, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t484* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2731);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	uint8_t V_1 = {0};
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	SerializationInfo_t2919 * V_4 = {0};
	bool V_5 = false;
	{
		Type_t * L_0 = ___valueType;
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		bool L_1 = BinaryCommon_IsPrimitive_m18445(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		BinaryReader_t52 * L_2 = ___reader;
		Type_t * L_3 = ___valueType;
		Object_t * L_4 = ObjectReader_ReadPrimitiveTypeValue_m18489(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Object_t * L_5 = ___parentObject;
		String_t* L_6 = ___fieldName;
		MemberInfo_t * L_7 = ___memberInfo;
		SerializationInfo_t2919 * L_8 = ___info;
		Object_t * L_9 = V_0;
		Type_t * L_10 = ___valueType;
		Int32U5BU5D_t484* L_11 = ___indices;
		ObjectReader_SetObjectValue_m18485(__this, L_5, L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0025:
	{
		BinaryReader_t52 * L_12 = ___reader;
		NullCheck(L_12);
		uint8_t L_13 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_12);
		V_1 = L_13;
		uint8_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004b;
		}
	}
	{
		BinaryReader_t52 * L_15 = ___reader;
		NullCheck(L_15);
		uint32_t L_16 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_15);
		V_2 = (((uint64_t)L_16));
		int64_t L_17 = ___parentObjectId;
		int64_t L_18 = V_2;
		Object_t * L_19 = ___parentObject;
		SerializationInfo_t2919 * L_20 = ___info;
		String_t* L_21 = ___fieldName;
		MemberInfo_t * L_22 = ___memberInfo;
		Int32U5BU5D_t484* L_23 = ___indices;
		ObjectReader_RecordFixup_m18486(__this, L_17, L_18, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}

IL_004b:
	{
		uint8_t L_24 = V_1;
		BinaryReader_t52 * L_25 = ___reader;
		ObjectReader_ReadObject_m18469(__this, L_24, L_25, (&V_3), (&V_0), (&V_4), /*hidden argument*/NULL);
		V_5 = 0;
		int64_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		Object_t * L_27 = V_0;
		NullCheck(L_27);
		Type_t * L_28 = Object_GetType_m4060(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_28);
		if (!L_29)
		{
			goto IL_0080;
		}
	}
	{
		int64_t L_30 = ___parentObjectId;
		int64_t L_31 = V_3;
		Object_t * L_32 = ___parentObject;
		SerializationInfo_t2919 * L_33 = ___info;
		String_t* L_34 = ___fieldName;
		MemberInfo_t * L_35 = ___memberInfo;
		Int32U5BU5D_t484* L_36 = ___indices;
		ObjectReader_RecordFixup_m18486(__this, L_30, L_31, L_32, L_33, L_34, L_35, L_36, /*hidden argument*/NULL);
		V_5 = 1;
	}

IL_0080:
	{
		SerializationInfo_t2919 * L_37 = ___info;
		if (L_37)
		{
			goto IL_009c;
		}
	}
	{
		Object_t * L_38 = ___parentObject;
		if (((Array_t *)IsInst(L_38, Array_t_il2cpp_TypeInfo_var)))
		{
			goto IL_009c;
		}
	}
	{
		int64_t L_39 = V_3;
		Object_t * L_40 = V_0;
		SerializationInfo_t2919 * L_41 = V_4;
		int64_t L_42 = ___parentObjectId;
		MemberInfo_t * L_43 = ___memberInfo;
		ObjectReader_RegisterObject_m18474(__this, L_39, L_40, L_41, L_42, L_43, (Int32U5BU5D_t484*)(Int32U5BU5D_t484*)NULL, /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_009c:
	{
		int64_t L_44 = V_3;
		Object_t * L_45 = V_0;
		SerializationInfo_t2919 * L_46 = V_4;
		int64_t L_47 = ___parentObjectId;
		Int32U5BU5D_t484* L_48 = ___indices;
		ObjectReader_RegisterObject_m18474(__this, L_44, L_45, L_46, L_47, (MemberInfo_t *)NULL, L_48, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		bool L_49 = V_5;
		if (L_49)
		{
			goto IL_00c0;
		}
	}
	{
		Object_t * L_50 = ___parentObject;
		String_t* L_51 = ___fieldName;
		MemberInfo_t * L_52 = ___memberInfo;
		SerializationInfo_t2919 * L_53 = ___info;
		Object_t * L_54 = V_0;
		Type_t * L_55 = ___valueType;
		Int32U5BU5D_t484* L_56 = ___indices;
		ObjectReader_SetObjectValue_m18485(__this, L_50, L_51, L_52, L_53, L_54, L_55, L_56, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::SetObjectValue(System.Object,System.String,System.Reflection.MemberInfo,System.Runtime.Serialization.SerializationInfo,System.Object,System.Type,System.Int32[])
extern TypeInfo* IObjectReference_t4899_il2cpp_TypeInfo_var;
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayNullFiller_t4655_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInfo_t_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_SetObjectValue_m18485 (ObjectReader_t4657 * __this, Object_t * ___parentObject, String_t* ___fieldName, MemberInfo_t * ___memberInfo, SerializationInfo_t2919 * ___info, Object_t * ___value, Type_t * ___valueType, Int32U5BU5D_t484* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IObjectReference_t4899_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8161);
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2731);
		ArrayNullFiller_t4655_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8152);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4532);
		PropertyInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3474);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		Object_t * L_0 = ___value;
		if (!((Object_t *)IsInst(L_0, IObjectReference_t4899_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		Object_t * L_1 = ___value;
		StreamingContext_t2920  L_2 = (__this->____context_1);
		NullCheck(((Object_t *)Castclass(L_1, IObjectReference_t4899_il2cpp_TypeInfo_var)));
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t2920  >::Invoke(0 /* System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext) */, IObjectReference_t4899_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_1, IObjectReference_t4899_il2cpp_TypeInfo_var)), L_2);
		___value = L_3;
	}

IL_001f:
	{
		Object_t * L_4 = ___parentObject;
		if (!((Array_t *)IsInst(L_4, Array_t_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		Object_t * L_5 = ___value;
		if (!((ArrayNullFiller_t4655 *)IsInst(L_5, ArrayNullFiller_t4655_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		Object_t * L_6 = ___value;
		NullCheck(((ArrayNullFiller_t4655 *)Castclass(L_6, ArrayNullFiller_t4655_il2cpp_TypeInfo_var)));
		int32_t L_7 = (((ArrayNullFiller_t4655 *)Castclass(L_6, ArrayNullFiller_t4655_il2cpp_TypeInfo_var))->___NullCount_0);
		V_0 = L_7;
		Int32U5BU5D_t484* L_8 = ___indices;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 0);
		int32_t* L_9 = ((int32_t*)(int32_t*)SZArrayLdElema(L_8, 0));
		int32_t L_10 = V_0;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)((int32_t)(*((int32_t*)L_9))+(int32_t)((int32_t)((int32_t)L_10-(int32_t)1))));
		goto IL_005d;
	}

IL_004e:
	{
		Object_t * L_11 = ___parentObject;
		Object_t * L_12 = ___value;
		Int32U5BU5D_t484* L_13 = ___indices;
		NullCheck(((Array_t *)Castclass(L_11, Array_t_il2cpp_TypeInfo_var)));
		Array_SetValue_m16117(((Array_t *)Castclass(L_11, Array_t_il2cpp_TypeInfo_var)), L_12, L_13, /*hidden argument*/NULL);
	}

IL_005d:
	{
		goto IL_0098;
	}

IL_005f:
	{
		SerializationInfo_t2919 * L_14 = ___info;
		if (!L_14)
		{
			goto IL_0071;
		}
	}
	{
		SerializationInfo_t2919 * L_15 = ___info;
		String_t* L_16 = ___fieldName;
		Object_t * L_17 = ___value;
		Type_t * L_18 = ___valueType;
		NullCheck(L_15);
		SerializationInfo_AddValue_m15070(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		goto IL_0098;
	}

IL_0071:
	{
		MemberInfo_t * L_19 = ___memberInfo;
		if (!((FieldInfo_t *)IsInst(L_19, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		MemberInfo_t * L_20 = ___memberInfo;
		Object_t * L_21 = ___parentObject;
		Object_t * L_22 = ___value;
		NullCheck(((FieldInfo_t *)Castclass(L_20, FieldInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, ((FieldInfo_t *)Castclass(L_20, FieldInfo_t_il2cpp_TypeInfo_var)), L_21, L_22);
		goto IL_0098;
	}

IL_0089:
	{
		MemberInfo_t * L_23 = ___memberInfo;
		Object_t * L_24 = ___parentObject;
		Object_t * L_25 = ___value;
		NullCheck(((PropertyInfo_t *)Castclass(L_23, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< Object_t *, Object_t *, ObjectU5BU5D_t682* >::Invoke(24 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)Castclass(L_23, PropertyInfo_t_il2cpp_TypeInfo_var)), L_24, L_25, (ObjectU5BU5D_t682*)(ObjectU5BU5D_t682*)NULL);
	}

IL_0098:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.ObjectReader::RecordFixup(System.Int64,System.Int64,System.Object,System.Runtime.Serialization.SerializationInfo,System.String,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ObjectReader_RecordFixup_m18486 (ObjectReader_t4657 * __this, int64_t ___parentObjectId, int64_t ___childObjectId, Object_t * ___parentObject, SerializationInfo_t2919 * ___info, String_t* ___fieldName, MemberInfo_t * ___memberInfo, Int32U5BU5D_t484* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2731);
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2919 * L_0 = ___info;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ObjectManager_t4656 * L_1 = (__this->____manager_4);
		int64_t L_2 = ___parentObjectId;
		String_t* L_3 = ___fieldName;
		int64_t L_4 = ___childObjectId;
		NullCheck(L_1);
		VirtActionInvoker3< int64_t, String_t*, int64_t >::Invoke(9 /* System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64) */, L_1, L_2, L_3, L_4);
		goto IL_0061;
	}

IL_0015:
	{
		Object_t * L_5 = ___parentObject;
		if (!((Array_t *)IsInst(L_5, Array_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0052;
		}
	}
	{
		Int32U5BU5D_t484* L_6 = ___indices;
		NullCheck(L_6);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		ObjectManager_t4656 * L_7 = (__this->____manager_4);
		int64_t L_8 = ___parentObjectId;
		Int32U5BU5D_t484* L_9 = ___indices;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		int64_t L_11 = ___childObjectId;
		NullCheck(L_7);
		VirtActionInvoker3< int64_t, int32_t, int64_t >::Invoke(7 /* System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64) */, L_7, L_8, (*(int32_t*)(int32_t*)SZArrayLdElema(L_9, L_10)), L_11);
		goto IL_0050;
	}

IL_0037:
	{
		ObjectManager_t4656 * L_12 = (__this->____manager_4);
		int64_t L_13 = ___parentObjectId;
		Int32U5BU5D_t484* L_14 = ___indices;
		NullCheck(L_14);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(20 /* System.Object System.Array::Clone() */, L_14);
		int64_t L_16 = ___childObjectId;
		NullCheck(L_12);
		VirtActionInvoker3< int64_t, Int32U5BU5D_t484*, int64_t >::Invoke(8 /* System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64) */, L_12, L_13, ((Int32U5BU5D_t484*)Castclass(L_15, Int32U5BU5D_t484_il2cpp_TypeInfo_var)), L_16);
	}

IL_0050:
	{
		goto IL_0061;
	}

IL_0052:
	{
		ObjectManager_t4656 * L_17 = (__this->____manager_4);
		int64_t L_18 = ___parentObjectId;
		MemberInfo_t * L_19 = ___memberInfo;
		int64_t L_20 = ___childObjectId;
		NullCheck(L_17);
		VirtActionInvoker3< int64_t, MemberInfo_t *, int64_t >::Invoke(10 /* System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64) */, L_17, L_18, L_19, L_20);
	}

IL_0061:
	{
		return;
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::GetDeserializationType(System.Int64,System.String)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjectReader_GetDeserializationType_m18487 (ObjectReader_t4657 * __this, int64_t ___assemblyId, String_t* ___className, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t769 * V_2 = {0};
	{
		Hashtable_t696 * L_0 = (__this->____registeredAssemblies_5);
		int64_t L_1 = ___assemblyId;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_3);
		V_1 = ((String_t*)Castclass(L_4, String_t_il2cpp_TypeInfo_var));
		SerializationBinder_t4651 * L_5 = (__this->____binder_2);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		SerializationBinder_t4651 * L_6 = (__this->____binder_2);
		String_t* L_7 = V_1;
		String_t* L_8 = ___className;
		NullCheck(L_6);
		Type_t * L_9 = (Type_t *)VirtFuncInvoker2< Type_t *, String_t*, String_t* >::Invoke(4 /* System.Type System.Runtime.Serialization.SerializationBinder::BindToType(System.String,System.String) */, L_6, L_7, L_8);
		V_0 = L_9;
		Type_t * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0032;
		}
	}
	{
		Type_t * L_11 = V_0;
		return L_11;
	}

IL_0032:
	{
		String_t* L_12 = V_1;
		Assembly_t769 * L_13 = Assembly_Load_m17872(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		Assembly_t769 * L_14 = V_2;
		String_t* L_15 = ___className;
		NullCheck(L_14);
		Type_t * L_16 = (Type_t *)VirtFuncInvoker2< Type_t *, String_t*, bool >::Invoke(10 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean) */, L_14, L_15, 1);
		V_0 = L_16;
		Type_t * L_17 = V_0;
		if (!L_17)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_18 = V_0;
		return L_18;
	}

IL_0047:
	{
		String_t* L_19 = ___className;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral4278, L_19, (String_t*) &_stringLiteral3462, /*hidden argument*/NULL);
		SerializationException_t4192 * L_21 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadType(System.IO.BinaryReader,System.Runtime.Serialization.Formatters.Binary.TypeTag)
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern const Il2CppType* MonoType_t_0_0_0_var;
extern const Il2CppType* MonoTypeU5BU5D_t4900_0_0_0_var;
extern const Il2CppType* ObjectU5BU5D_t682_0_0_0_var;
extern const Il2CppType* StringU5BU5D_t75_0_0_0_var;
extern TypeInfo* BinaryCommon_t4646_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4192_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjectReader_ReadType_m18488 (ObjectReader_t4657 * __this, BinaryReader_t52 * ___reader, uint8_t ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		MonoType_t_0_0_0_var = il2cpp_codegen_type_from_index(7939);
		MonoTypeU5BU5D_t4900_0_0_0_var = il2cpp_codegen_type_from_index(8162);
		ObjectU5BU5D_t682_0_0_0_var = il2cpp_codegen_type_from_index(171);
		StringU5BU5D_t75_0_0_0_var = il2cpp_codegen_type_from_index(50);
		BinaryCommon_t4646_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8145);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4192_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7015);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Type_t * V_1 = {0};
	String_t* V_2 = {0};
	int64_t V_3 = 0;
	Type_t * V_4 = {0};
	uint8_t V_5 = {0};
	{
		uint8_t L_0 = ___code;
		V_5 = L_0;
		uint8_t L_1 = V_5;
		if (L_1 == 0)
		{
			goto IL_002f;
		}
		if (L_1 == 1)
		{
			goto IL_003b;
		}
		if (L_1 == 2)
		{
			goto IL_0046;
		}
		if (L_1 == 3)
		{
			goto IL_0051;
		}
		if (L_1 == 4)
		{
			goto IL_00b4;
		}
		if (L_1 == 5)
		{
			goto IL_00cc;
		}
		if (L_1 == 6)
		{
			goto IL_00d7;
		}
		if (L_1 == 7)
		{
			goto IL_00e2;
		}
	}
	{
		goto IL_0106;
	}

IL_002f:
	{
		BinaryReader_t52 * L_2 = ___reader;
		NullCheck(L_2);
		uint8_t L_3 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		Type_t * L_4 = BinaryCommon_GetTypeFromCode_m18446(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		return L_5;
	}

IL_0046:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		return L_6;
	}

IL_0051:
	{
		BinaryReader_t52 * L_7 = ___reader;
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_7);
		V_0 = L_8;
		StreamingContext_t2920 * L_9 = &(__this->____context_1);
		int32_t L_10 = StreamingContext_get_State_m18574(L_9, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m456(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral4279, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MonoType_t_0_0_0_var), /*hidden argument*/NULL);
		return L_13;
	}

IL_007f:
	{
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m456(NULL /*static, unused*/, L_14, (String_t*) &_stringLiteral4280, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(MonoTypeU5BU5D_t4900_0_0_0_var), /*hidden argument*/NULL);
		return L_16;
	}

IL_0097:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetType_m7462(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		Type_t * L_19 = V_1;
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		Type_t * L_20 = V_1;
		return L_20;
	}

IL_00a3:
	{
		String_t* L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_22 = String_Format_m4110(NULL /*static, unused*/, (String_t*) &_stringLiteral4281, L_21, /*hidden argument*/NULL);
		SerializationException_t4192 * L_23 = (SerializationException_t4192 *)il2cpp_codegen_object_new (SerializationException_t4192_il2cpp_TypeInfo_var);
		SerializationException__ctor_m15072(L_23, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_23);
	}

IL_00b4:
	{
		BinaryReader_t52 * L_24 = ___reader;
		NullCheck(L_24);
		String_t* L_25 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_24);
		V_2 = L_25;
		BinaryReader_t52 * L_26 = ___reader;
		NullCheck(L_26);
		uint32_t L_27 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_26);
		V_3 = (((uint64_t)L_27));
		int64_t L_28 = V_3;
		String_t* L_29 = V_2;
		Type_t * L_30 = ObjectReader_GetDeserializationType_m18487(__this, L_28, L_29, /*hidden argument*/NULL);
		return L_30;
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_31 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(ObjectU5BU5D_t682_0_0_0_var), /*hidden argument*/NULL);
		return L_31;
	}

IL_00d7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(StringU5BU5D_t75_0_0_0_var), /*hidden argument*/NULL);
		return L_32;
	}

IL_00e2:
	{
		BinaryReader_t52 * L_33 = ___reader;
		NullCheck(L_33);
		uint8_t L_34 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_33);
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t4646_il2cpp_TypeInfo_var);
		Type_t * L_35 = BinaryCommon_GetTypeFromCode_m18446(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		Type_t * L_36 = V_4;
		NullCheck(L_36);
		String_t* L_37 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_36);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_38 = String_Concat_m408(NULL /*static, unused*/, L_37, (String_t*) &_stringLiteral1253, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_39 = Type_GetType_m7462(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		return L_39;
	}

IL_0106:
	{
		NotSupportedException_t56 * L_40 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10416(L_40, (String_t*) &_stringLiteral4282, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_40);
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::ReadPrimitiveTypeValue(System.IO.BinaryReader,System.Type)
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t741_il2cpp_TypeInfo_var;
extern TypeInfo* Char_t60_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t768_il2cpp_TypeInfo_var;
extern TypeInfo* Decimal_t745_il2cpp_TypeInfo_var;
extern TypeInfo* Double_t90_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t742_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* SByte_t88_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* UInt16_t743_il2cpp_TypeInfo_var;
extern TypeInfo* UInt32_t740_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t744_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectReader_ReadPrimitiveTypeValue_m18489 (Object_t * __this /* static, unused */, BinaryReader_t52 * ___reader, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2467);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Byte_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(255);
		Char_t60_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		CultureInfo_t768_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(411);
		Decimal_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(275);
		Double_t90_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(78);
		Int16_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		SByte_t88_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(271);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		UInt16_t743_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(273);
		UInt32_t740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		UInt64_t744_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2467);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_2 = Type_GetTypeCode_m16217(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 0)
		{
			goto IL_0059;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 1)
		{
			goto IL_0071;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 2)
		{
			goto IL_00d4;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 3)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 4)
		{
			goto IL_00b0;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 5)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 6)
		{
			goto IL_00bc;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 7)
		{
			goto IL_00f8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 8)
		{
			goto IL_00c8;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 9)
		{
			goto IL_0104;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 10)
		{
			goto IL_00e0;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 11)
		{
			goto IL_00a4;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 12)
		{
			goto IL_008e;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 13)
		{
			goto IL_007d;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 14)
		{
			goto IL_0117;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)3)) == 15)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0117;
	}

IL_0059:
	{
		BinaryReader_t52 * L_4 = ___reader;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.BinaryReader::ReadBoolean() */, L_4);
		bool L_6 = L_5;
		Object_t * L_7 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_0065:
	{
		BinaryReader_t52 * L_8 = ___reader;
		NullCheck(L_8);
		uint8_t L_9 = (uint8_t)VirtFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_8);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t741_il2cpp_TypeInfo_var, &L_10);
		return L_11;
	}

IL_0071:
	{
		BinaryReader_t52 * L_12 = ___reader;
		NullCheck(L_12);
		uint16_t L_13 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(12 /* System.Char System.IO.BinaryReader::ReadChar() */, L_12);
		uint16_t L_14 = L_13;
		Object_t * L_15 = Box(Char_t60_il2cpp_TypeInfo_var, &L_14);
		return L_15;
	}

IL_007d:
	{
		BinaryReader_t52 * L_16 = ___reader;
		NullCheck(L_16);
		int64_t L_17 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_18 = DateTime_FromBinary_m19651(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		DateTime_t287  L_19 = L_18;
		Object_t * L_20 = Box(DateTime_t287_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_008e:
	{
		BinaryReader_t52 * L_21 = ___reader;
		NullCheck(L_21);
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t768_il2cpp_TypeInfo_var);
		CultureInfo_t768 * L_23 = CultureInfo_get_InvariantCulture_m4062(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t745_il2cpp_TypeInfo_var);
		Decimal_t745  L_24 = Decimal_Parse_m15948(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Decimal_t745  L_25 = L_24;
		Object_t * L_26 = Box(Decimal_t745_il2cpp_TypeInfo_var, &L_25);
		return L_26;
	}

IL_00a4:
	{
		BinaryReader_t52 * L_27 = ___reader;
		NullCheck(L_27);
		double L_28 = (double)VirtFuncInvoker0< double >::Invoke(14 /* System.Double System.IO.BinaryReader::ReadDouble() */, L_27);
		double L_29 = L_28;
		Object_t * L_30 = Box(Double_t90_il2cpp_TypeInfo_var, &L_29);
		return L_30;
	}

IL_00b0:
	{
		BinaryReader_t52 * L_31 = ___reader;
		NullCheck(L_31);
		int16_t L_32 = (int16_t)VirtFuncInvoker0< int16_t >::Invoke(15 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_31);
		int16_t L_33 = L_32;
		Object_t * L_34 = Box(Int16_t742_il2cpp_TypeInfo_var, &L_33);
		return L_34;
	}

IL_00bc:
	{
		BinaryReader_t52 * L_35 = ___reader;
		NullCheck(L_35);
		int32_t L_36 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_35);
		int32_t L_37 = L_36;
		Object_t * L_38 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_37);
		return L_38;
	}

IL_00c8:
	{
		BinaryReader_t52 * L_39 = ___reader;
		NullCheck(L_39);
		int64_t L_40 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_39);
		int64_t L_41 = L_40;
		Object_t * L_42 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_41);
		return L_42;
	}

IL_00d4:
	{
		BinaryReader_t52 * L_43 = ___reader;
		NullCheck(L_43);
		int8_t L_44 = (int8_t)VirtFuncInvoker0< int8_t >::Invoke(18 /* System.SByte System.IO.BinaryReader::ReadSByte() */, L_43);
		int8_t L_45 = L_44;
		Object_t * L_46 = Box(SByte_t88_il2cpp_TypeInfo_var, &L_45);
		return L_46;
	}

IL_00e0:
	{
		BinaryReader_t52 * L_47 = ___reader;
		NullCheck(L_47);
		float L_48 = (float)VirtFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_47);
		float L_49 = L_48;
		Object_t * L_50 = Box(Single_t87_il2cpp_TypeInfo_var, &L_49);
		return L_50;
	}

IL_00ec:
	{
		BinaryReader_t52 * L_51 = ___reader;
		NullCheck(L_51);
		uint16_t L_52 = (uint16_t)VirtFuncInvoker0< uint16_t >::Invoke(21 /* System.UInt16 System.IO.BinaryReader::ReadUInt16() */, L_51);
		uint16_t L_53 = L_52;
		Object_t * L_54 = Box(UInt16_t743_il2cpp_TypeInfo_var, &L_53);
		return L_54;
	}

IL_00f8:
	{
		BinaryReader_t52 * L_55 = ___reader;
		NullCheck(L_55);
		uint32_t L_56 = (uint32_t)VirtFuncInvoker0< uint32_t >::Invoke(22 /* System.UInt32 System.IO.BinaryReader::ReadUInt32() */, L_55);
		uint32_t L_57 = L_56;
		Object_t * L_58 = Box(UInt32_t740_il2cpp_TypeInfo_var, &L_57);
		return L_58;
	}

IL_0104:
	{
		BinaryReader_t52 * L_59 = ___reader;
		NullCheck(L_59);
		uint64_t L_60 = (uint64_t)VirtFuncInvoker0< uint64_t >::Invoke(23 /* System.UInt64 System.IO.BinaryReader::ReadUInt64() */, L_59);
		uint64_t L_61 = L_60;
		Object_t * L_62 = Box(UInt64_t744_il2cpp_TypeInfo_var, &L_61);
		return L_62;
	}

IL_0110:
	{
		BinaryReader_t52 * L_63 = ___reader;
		NullCheck(L_63);
		String_t* L_64 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.IO.BinaryReader::ReadString() */, L_63);
		return L_64;
	}

IL_0117:
	{
		Type_t * L_65 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m4058(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_65) == ((Object_t*)(Type_t *)L_66))))
		{
			goto IL_0135;
		}
	}
	{
		BinaryReader_t52 * L_67 = ___reader;
		NullCheck(L_67);
		int64_t L_68 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(17 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, L_67);
		TimeSpan_t334  L_69 = {0};
		TimeSpan__ctor_m11848(&L_69, L_68, /*hidden argument*/NULL);
		TimeSpan_t334  L_70 = L_69;
		Object_t * L_71 = Box(TimeSpan_t334_il2cpp_TypeInfo_var, &L_70);
		return L_71;
	}

IL_0135:
	{
		Type_t * L_72 = ___type;
		NullCheck(L_72);
		String_t* L_73 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_72);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral4274, L_73, /*hidden argument*/NULL);
		NotSupportedException_t56 * L_75 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m10416(L_75, L_74, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_75);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAsMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
