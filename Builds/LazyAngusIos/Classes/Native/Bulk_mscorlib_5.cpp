#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Runtime.InteropServices.RuntimeEnvironment
#include "mscorlib_System_Runtime_InteropServices_RuntimeEnvironment.h"
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
// System.Runtime.InteropServices.RuntimeEnvironment
#include "mscorlib_System_Runtime_InteropServices_RuntimeEnvironmentMethodDeclarations.h"

// System.String
#include "mscorlib_System_String.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Security.Permissions.FileIOPermission
#include "mscorlib_System_Security_Permissions_FileIOPermission.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Security.Permissions.FileIOPermissionAccess
#include "mscorlib_System_Security_Permissions_FileIOPermissionAccess.h"
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermission.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Security.SecurityManager
#include "mscorlib_System_Security_SecurityManagerMethodDeclarations.h"
// System.Security.Permissions.FileIOPermission
#include "mscorlib_System_Security_Permissions_FileIOPermissionMethodDeclarations.h"
// System.Security.CodeAccessPermission
#include "mscorlib_System_Security_CodeAccessPermissionMethodDeclarations.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.String System.Runtime.InteropServices.RuntimeEnvironment::get_SystemConfigurationFile()
extern TypeInfo* SecurityManager_t5254_il2cpp_TypeInfo_var;
extern TypeInfo* FileIOPermission_t5304_il2cpp_TypeInfo_var;
extern "C" String_t* RuntimeEnvironment_get_SystemConfigurationFile_m12148 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityManager_t5254_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9007);
		FileIOPermission_t5304_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9009);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Environment_GetMachineConfigPath_m20479(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t5254_il2cpp_TypeInfo_var);
		bool L_1 = SecurityManager_get_SecurityEnabled_m23310(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = V_0;
		FileIOPermission_t5304 * L_3 = (FileIOPermission_t5304 *)il2cpp_codegen_object_new (FileIOPermission_t5304_il2cpp_TypeInfo_var);
		FileIOPermission__ctor_m23694(L_3, 8, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(4 /* System.Void System.Security.CodeAccessPermission::Demand() */, L_3);
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandle.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.InteropServices.SafeHandle
#include "mscorlib_System_Runtime_InteropServices_SafeHandleMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Threading.Interlocked
#include "mscorlib_System_Threading_InterlockedMethodDeclarations.h"
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C" void SafeHandle__ctor_m22627 (SafeHandle_t4759 * __this, IntPtr_t ___invalidHandleValue, bool ___ownsHandle, const MethodInfo* method)
{
	{
		CriticalFinalizerObject__ctor_m22600(__this, /*hidden argument*/NULL);
		IntPtr_t L_0 = ___invalidHandleValue;
		__this->___invalid_handle_value_1 = L_0;
		bool L_1 = ___ownsHandle;
		__this->___owns_handle_3 = L_1;
		__this->___refcount_2 = 1;
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern TypeInfo* ObjectDisposedException_t3271_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_Close_m22628 (SafeHandle_t4759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5443);
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
		Type_t * L_1 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3271 * L_3 = (ObjectDisposedException_t3271 *)il2cpp_codegen_object_new (ObjectDisposedException_t3271_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11563(L_3, L_2, /*hidden argument*/NULL);
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
extern TypeInfo* ObjectDisposedException_t3271_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousAddRef_m22629 (SafeHandle_t4759 * __this, bool* ___success, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5443);
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
		Type_t * L_1 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3271 * L_3 = (ObjectDisposedException_t3271 *)il2cpp_codegen_object_new (ObjectDisposedException_t3271_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11563(L_3, L_2, /*hidden argument*/NULL);
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
		Type_t * L_7 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_7);
		ObjectDisposedException_t3271 * L_9 = (ObjectDisposedException_t3271 *)il2cpp_codegen_object_new (ObjectDisposedException_t3271_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11563(L_9, L_8, /*hidden argument*/NULL);
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
extern TypeInfo* ObjectDisposedException_t3271_il2cpp_TypeInfo_var;
extern "C" IntPtr_t SafeHandle_DangerousGetHandle_m22630 (SafeHandle_t4759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5443);
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
		Type_t * L_1 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3271 * L_3 = (ObjectDisposedException_t3271 *)il2cpp_codegen_object_new (ObjectDisposedException_t3271_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11563(L_3, L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001a:
	{
		IntPtr_t L_4 = (__this->___handle_0);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern TypeInfo* ObjectDisposedException_t3271_il2cpp_TypeInfo_var;
extern "C" void SafeHandle_DangerousRelease_m22631 (SafeHandle_t4759 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t3271_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5443);
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
		Type_t * L_1 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_t3271 * L_3 = (ObjectDisposedException_t3271 *)il2cpp_codegen_object_new (ObjectDisposedException_t3271_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m11563(L_3, L_2, /*hidden argument*/NULL);
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
extern "C" void SafeHandle_Dispose_m22632 (SafeHandle_t4759 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, 1);
		GC_SuppressFinalize_m11546(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C" void SafeHandle_Dispose_m22633 (SafeHandle_t4759 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SafeHandle_Close_m22628(__this, /*hidden argument*/NULL);
		goto IL_000b;
	}

IL_000b:
	{
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C" void SafeHandle_SetHandle_m22634 (SafeHandle_t4759 * __this, IntPtr_t ___handle, const MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		__this->___handle_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C" void SafeHandle_Finalize_m22635 (SafeHandle_t4759 * __this, const MethodInfo* method)
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
		CriticalFinalizerObject_Finalize_m22601(__this, /*hidden argument*/NULL);
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

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Runtime.InteropServices.TypeLibImportClassAttribute::.ctor(System.Type)
extern "C" void TypeLibImportClassAttribute__ctor_m22636 (TypeLibImportClassAttribute_t5117 * __this, Type_t * ___importClass, const MethodInfo* method)
{
	{
		Attribute__ctor_m4277(__this, /*hidden argument*/NULL);
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
extern "C" void TypeLibVersionAttribute__ctor_m22637 (TypeLibVersionAttribute_t5118 * __this, int32_t ___major, int32_t ___minor, const MethodInfo* method)
{
	{
		Attribute__ctor_m4277(__this, /*hidden argument*/NULL);
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

// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"


// System.Void System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::.ctor(System.Runtime.InteropServices.CallingConvention)
extern "C" void UnmanagedFunctionPointerAttribute__ctor_m18446 (UnmanagedFunctionPointerAttribute_t4614 * __this, int32_t ___callingConvention, const MethodInfo* method)
{
	{
		Attribute__ctor_m4277(__this, /*hidden argument*/NULL);
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



// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ActivatedClientTypeEntry
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntryMethodDeclarations.h"

#include "mscorlib_ArrayTypes.h"
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntryMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"


// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::get_ApplicationUrl()
extern "C" String_t* ActivatedClientTypeEntry_get_ApplicationUrl_m22638 (ActivatedClientTypeEntry_t5120 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___applicationUrl_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Contexts.IContextAttribute[] System.Runtime.Remoting.ActivatedClientTypeEntry::get_ContextAttributes()
extern "C" IContextAttributeU5BU5D_t5433* ActivatedClientTypeEntry_get_ContextAttributes_m22639 (ActivatedClientTypeEntry_t5120 * __this, const MethodInfo* method)
{
	{
		return (IContextAttributeU5BU5D_t5433*)NULL;
	}
}
// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::get_ObjectType()
extern "C" Type_t * ActivatedClientTypeEntry_get_ObjectType_m22640 (ActivatedClientTypeEntry_t5120 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___obj_type_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ActivatedClientTypeEntry_ToString_m22641 (ActivatedClientTypeEntry_t5120 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = TypeEntry_get_TypeName_m22722(__this, /*hidden argument*/NULL);
		String_t* L_1 = TypeEntry_get_AssemblyName_m22721(__this, /*hidden argument*/NULL);
		String_t* L_2 = ActivatedClientTypeEntry_get_ApplicationUrl_m22638(__this, /*hidden argument*/NULL);
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
extern "C" void EnvoyInfo__ctor_m22642 (EnvoyInfo_t5122 * __this, Object_t * ___sinks, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___sinks;
		__this->___envoySinks_0 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::get_EnvoySinks()
extern "C" Object_t * EnvoyInfo_get_EnvoySinks_m22643 (EnvoyInfo_t5122 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoySinks_0);
		return L_0;
	}
}
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_Identity.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Identity
#include "mscorlib_System_Runtime_Remoting_IdentityMethodDeclarations.h"

// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRef.h"


// System.Void System.Runtime.Remoting.Identity::.ctor(System.String)
extern "C" void Identity__ctor_m22644 (Identity_t5124 * __this, String_t* ___objectUri, const MethodInfo* method)
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
extern "C" Object_t * Identity_get_ChannelSink_m22645 (Identity_t5124 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____channelSink_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink)
extern "C" void Identity_set_ChannelSink_m22646 (Identity_t5124 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____channelSink_1 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Identity::get_ObjectUri()
extern "C" String_t* Identity_get_ObjectUri_m22647 (Identity_t5124 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_ObjectUri(System.String)
extern "C" void Identity_set_ObjectUri_m22648 (Identity_t5124 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____objectUri_0 = L_0;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_IsConnected()
extern "C" bool Identity_get_IsConnected_m22649 (Identity_t5124 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____objectUri_0);
		return ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.Identity::get_Disposed()
extern "C" bool Identity_get_Disposed_m22650 (Identity_t5124 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____disposed_4);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Identity::set_Disposed(System.Boolean)
extern "C" void Identity_set_Disposed_m22651 (Identity_t5124 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____disposed_4 = L_0;
		return;
	}
}
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentity.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.ClientIdentity
#include "mscorlib_System_Runtime_Remoting_ClientIdentityMethodDeclarations.h"

// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.WeakReference
#include "mscorlib_System_WeakReference.h"
// System.WeakReference
#include "mscorlib_System_WeakReferenceMethodDeclarations.h"
// System.Runtime.Remoting.ObjRef
#include "mscorlib_System_Runtime_Remoting_ObjRefMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern TypeInfo* IEnvoyInfo_t5128_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity__ctor_m22652 (ClientIdentity_t5125 * __this, String_t* ___objectUri, ObjRef_t5123 * ___objRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnvoyInfo_t5128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9139);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ClientIdentity_t5125 * G_B2_0 = {0};
	ClientIdentity_t5125 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	ClientIdentity_t5125 * G_B3_1 = {0};
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m22644(__this, L_0, /*hidden argument*/NULL);
		ObjRef_t5123 * L_1 = ___objRef;
		((Identity_t5124 *)__this)->____objRef_3 = L_1;
		ObjRef_t5123 * L_2 = (((Identity_t5124 *)__this)->____objRef_3);
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
		ObjRef_t5123 * L_4 = (((Identity_t5124 *)__this)->____objRef_3);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(7 /* System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo() */, L_4);
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.IEnvoyInfo::get_EnvoySinks() */, IEnvoyInfo_t5128_il2cpp_TypeInfo_var, L_5);
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
		((Identity_t5124 *)G_B3_1)->____envoySink_2 = G_B3_0;
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern TypeInfo* MarshalByRefObject_t4299_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t4299 * ClientIdentity_get_ClientProxy_m22653 (ClientIdentity_t5125 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	{
		WeakReference_t2252 * L_0 = (__this->____proxyReference_5);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_0);
		return ((MarshalByRefObject_t4299 *)Castclass(L_1, MarshalByRefObject_t4299_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern TypeInfo* WeakReference_t2252_il2cpp_TypeInfo_var;
extern "C" void ClientIdentity_set_ClientProxy_m22654 (ClientIdentity_t5125 * __this, MarshalByRefObject_t4299 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WeakReference_t2252_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3482);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t4299 * L_0 = ___value;
		WeakReference_t2252 * L_1 = (WeakReference_t2252 *)il2cpp_codegen_object_new (WeakReference_t2252_il2cpp_TypeInfo_var);
		WeakReference__ctor_m18199(L_1, L_0, /*hidden argument*/NULL);
		__this->____proxyReference_5 = L_1;
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t5123 * ClientIdentity_CreateObjRef_m22655 (ClientIdentity_t5125 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	{
		ObjRef_t5123 * L_0 = (((Identity_t5124 *)__this)->____objRef_3);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C" String_t* ClientIdentity_get_TargetUri_m22656 (ClientIdentity_t5125 * __this, const MethodInfo* method)
{
	{
		ObjRef_t5123 * L_0 = (((Identity_t5124 *)__this)->____objRef_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnume.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfo.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfoEnumerator
#include "mscorlib_System_Runtime_Serialization_SerializationInfoEnumeMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_11MethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.ChannelInfo
#include "mscorlib_System_Runtime_Remoting_ChannelInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C" void ObjRef__ctor_m22657 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ObjRef_UpdateChannelInfo_m22670(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelInfo_t5126_il2cpp_TypeInfo_var;
extern TypeInfo* IEnvoyInfo_t5128_il2cpp_TypeInfo_var;
extern TypeInfo* IConvertible_t98_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" void ObjRef__ctor_m22658 (ObjRef_t5123 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9141);
		IChannelInfo_t5126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9142);
		IEnvoyInfo_t5128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9139);
		IConvertible_t98_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(93);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
		s_Il2CppMethodIntialized = true;
	}
	SerializationInfoEnumerator_t5213 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = 0;
	Object_t * V_3 = {0};
	String_t* V_4 = {0};
	Dictionary_2_t223 * V_5 = {0};
	int32_t V_6 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t5213 * L_1 = SerializationInfo_GetEnumerator_m23060(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		goto IL_0155;
	}

IL_0014:
	{
		SerializationInfoEnumerator_t5213 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfoEnumerator_get_Name_m23071(L_2, /*hidden argument*/NULL);
		V_4 = L_3;
		String_t* L_4 = V_4;
		if (!L_4)
		{
			goto IL_014f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_5 = ((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8;
		if (L_5)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t223 * L_6 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_6, 6, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_5 = L_6;
		Dictionary_2_t223 * L_7 = V_5;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral2876, 0);
		Dictionary_2_t223 * L_8 = V_5;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5896, 1);
		Dictionary_2_t223 * L_9 = V_5;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5897, 2);
		Dictionary_2_t223 * L_10 = V_5;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5898, 3);
		Dictionary_2_t223 * L_11 = V_5;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral5899, 4);
		Dictionary_2_t223 * L_12 = V_5;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_12, (String_t*) &_stringLiteral5900, 5);
		Dictionary_2_t223 * L_13 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8 = L_13;
	}

IL_0087:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_14 = ((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map21_8;
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
		SerializationInfoEnumerator_t5213 * L_18 = V_0;
		NullCheck(L_18);
		Object_t * L_19 = SerializationInfoEnumerator_get_Value_m23073(L_18, /*hidden argument*/NULL);
		__this->___uri_1 = ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00d4:
	{
		SerializationInfoEnumerator_t5213 * L_20 = V_0;
		NullCheck(L_20);
		Object_t * L_21 = SerializationInfoEnumerator_get_Value_m23073(L_20, /*hidden argument*/NULL);
		__this->___typeInfo_2 = ((Object_t *)Castclass(L_21, IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00ea:
	{
		SerializationInfoEnumerator_t5213 * L_22 = V_0;
		NullCheck(L_22);
		Object_t * L_23 = SerializationInfoEnumerator_get_Value_m23073(L_22, /*hidden argument*/NULL);
		__this->___channel_info_0 = ((Object_t *)Castclass(L_23, IChannelInfo_t5126_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_00fd:
	{
		SerializationInfoEnumerator_t5213 * L_24 = V_0;
		NullCheck(L_24);
		Object_t * L_25 = SerializationInfoEnumerator_get_Value_m23073(L_24, /*hidden argument*/NULL);
		__this->___envoyInfo_3 = ((Object_t *)Castclass(L_25, IEnvoyInfo_t5128_il2cpp_TypeInfo_var));
		goto IL_0155;
	}

IL_0110:
	{
		SerializationInfoEnumerator_t5213 * L_26 = V_0;
		NullCheck(L_26);
		Object_t * L_27 = SerializationInfoEnumerator_get_Value_m23073(L_26, /*hidden argument*/NULL);
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
		SerializationInfoEnumerator_t5213 * L_33 = V_0;
		NullCheck(L_33);
		Object_t * L_34 = SerializationInfoEnumerator_get_Value_m23073(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m4108(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
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
		SerializationInfoEnumerator_t5213 * L_37 = V_0;
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
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		int32_t L_41 = ((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		__this->___flags_4 = ((int32_t)((int32_t)L_40|(int32_t)L_41));
	}

IL_0175:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern "C" void ObjRef__cctor_m22659 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		s_Il2CppMethodIntialized = true;
	}
	{
		((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6 = 1;
		((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7 = 2;
		return;
	}
}
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern "C" bool ObjRef_get_IsReferenceToWellKnow_m22660 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___WellKnowObjectRef_7;
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C" Object_t * ObjRef_get_ChannelInfo_m22661 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___channel_info_0);
		return L_0;
	}
}
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C" Object_t * ObjRef_get_EnvoyInfo_m22662 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___envoyInfo_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C" void ObjRef_set_EnvoyInfo_m22663 (ObjRef_t5123 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___envoyInfo_3 = L_0;
		return;
	}
}
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C" Object_t * ObjRef_get_TypeInfo_m22664 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___typeInfo_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C" void ObjRef_set_TypeInfo_m22665 (ObjRef_t5123 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___typeInfo_2 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C" String_t* ObjRef_get_URI_m22666 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_1);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C" void ObjRef_set_URI_m22667 (ObjRef_t5123 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_1 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* IRemotingTypeInfo_t5127_0_0_0_var;
extern const Il2CppType* IEnvoyInfo_t5128_0_0_0_var;
extern const Il2CppType* IChannelInfo_t5126_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void ObjRef_GetObjectData_m22668 (ObjRef_t5123 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t5127_0_0_0_var = il2cpp_codegen_type_from_index(9141);
		IEnvoyInfo_t5128_0_0_0_var = il2cpp_codegen_type_from_index(9139);
		IChannelInfo_t5126_0_0_0_var = il2cpp_codegen_type_from_index(9142);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2947 * L_0 = ___info;
		Type_t * L_1 = Object_GetType_m4276(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m23059(L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_2 = ___info;
		String_t* L_3 = (__this->___uri_1);
		NullCheck(L_2);
		SerializationInfo_AddValue_m11584(L_2, (String_t*) &_stringLiteral2876, L_3, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_4 = ___info;
		Object_t * L_5 = (__this->___typeInfo_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(IRemotingTypeInfo_t5127_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m18090(L_4, (String_t*) &_stringLiteral5896, L_5, L_6, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_7 = ___info;
		Object_t * L_8 = (__this->___envoyInfo_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(IEnvoyInfo_t5128_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_AddValue_m18090(L_7, (String_t*) &_stringLiteral5898, L_8, L_9, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_10 = ___info;
		Object_t * L_11 = (__this->___channel_info_0);
		Type_t * L_12 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(IChannelInfo_t5126_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		SerializationInfo_AddValue_m18090(L_10, (String_t*) &_stringLiteral5897, L_11, L_12, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_13 = ___info;
		int32_t L_14 = (__this->___flags_4);
		NullCheck(L_13);
		SerializationInfo_AddValue_m12147(L_13, (String_t*) &_stringLiteral5900, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRef_GetRealObject_m22669 (ObjRef_t5123 * __this, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___flags_4);
		IL2CPP_RUNTIME_CLASS_INIT(ObjRef_t5123_il2cpp_TypeInfo_var);
		int32_t L_1 = ((ObjRef_t5123_StaticFields*)ObjRef_t5123_il2cpp_TypeInfo_var->static_fields)->___MarshalledObjectRef_6;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_Unmarshal_m22683(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern TypeInfo* ChannelInfo_t5148_il2cpp_TypeInfo_var;
extern "C" void ObjRef_UpdateChannelInfo_m22670 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelInfo_t5148_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9143);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChannelInfo_t5148 * L_0 = (ChannelInfo_t5148 *)il2cpp_codegen_object_new (ChannelInfo_t5148_il2cpp_TypeInfo_var);
		ChannelInfo__ctor_m22738(L_0, /*hidden argument*/NULL);
		__this->___channel_info_0 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern TypeInfo* IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ObjRef_get_ServerType_m22671 (ObjRef_t5123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9141);
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
		String_t* L_2 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetType_m7690(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
// System.Runtime.Remoting.RemotingConfiguration
#include "mscorlib_System_Runtime_Remoting_RemotingConfigurationMethodDeclarations.h"

// System.Collections.Hashtable
#include "mscorlib_System_Collections_Hashtable.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
// System.Collections.Hashtable
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" void RemotingConfiguration__cctor_m22672 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___applicationID_0 = (String_t*)NULL;
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___applicationName_1 = (String_t*)NULL;
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = (String_t*)NULL;
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___defaultConfigRead_3 = 0;
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___defaultDelayedConfigRead_4 = 0;
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___wellKnownClientEntries_5 = L_0;
		Hashtable_t721 * L_1 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_1, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6 = L_1;
		Hashtable_t721 * L_2 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_2, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___wellKnownServiceEntries_7 = L_2;
		Hashtable_t721 * L_3 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_3, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___activatedServiceEntries_8 = L_3;
		Hashtable_t721 * L_4 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_4, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9 = L_4;
		Hashtable_t721 * L_5 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_5, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___clientProviderTemplates_10 = L_5;
		Hashtable_t721 * L_6 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_6, /*hidden argument*/NULL);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___serverProviderTemplates_11 = L_6;
		return;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ApplicationName_m22673 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___applicationName_1;
		return L_0;
	}
}
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingConfiguration_get_ProcessId_m22674 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		String_t* L_0 = ((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = AppDomain_GetProcessGuid_m20024(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___processGuid_2 = L_1;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		String_t* L_2 = ((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___processGuid_2;
		return L_2;
	}
}
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern TypeInfo* ActivatedClientTypeEntry_t5120_il2cpp_TypeInfo_var;
extern "C" ActivatedClientTypeEntry_t5120 * RemotingConfiguration_IsRemotelyActivatedClientType_m22675 (Object_t * __this /* static, unused */, Type_t * ___svrType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		ActivatedClientTypeEntry_t5120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9145);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t721 * V_0 = {0};
	ActivatedClientTypeEntry_t5120 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		Hashtable_t721 * L_0 = ((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___channelTemplates_9;
		V_0 = L_0;
		Hashtable_t721 * L_1 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_2 = ((RemotingConfiguration_t5129_StaticFields*)RemotingConfiguration_t5129_il2cpp_TypeInfo_var->static_fields)->___activatedClientEntries_6;
			Type_t * L_3 = ___svrType;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
			V_1 = ((ActivatedClientTypeEntry_t5120 *)IsInst(L_4, ActivatedClientTypeEntry_t5120_il2cpp_TypeInfo_var));
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
		Hashtable_t721 * L_5 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_JUMP_TBL(0x28, IL_0028)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0028:
	{
		ActivatedClientTypeEntry_t5120 * L_6 = V_1;
		return L_6;
	}
}
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingException.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.RemotingException
#include "mscorlib_System_Runtime_Remoting_RemotingExceptionMethodDeclarations.h"

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingException::.ctor()
extern "C" void RemotingException__ctor_m22676 (RemotingException_t5130 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m14827(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.String)
extern "C" void RemotingException__ctor_m22677 (RemotingException_t5130 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m12178(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RemotingException__ctor_m22678 (RemotingException_t5130 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2947 * L_0 = ___info;
		StreamingContext_t2948  L_1 = ___context;
		SystemException__ctor_m14829(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.RemotingServices
#include "mscorlib_System_Runtime_Remoting_RemotingServices.h"
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate.h"
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStates.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina.h"
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentity.h"
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h"
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_Context.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentity.h"
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxy.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.MonoType
#include "mscorlib_System_MonoType.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxy.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServices.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentity.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentity.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateMethodDeclarations.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContextMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaMethodDeclarations.h"
// System.Guid
#include "mscorlib_System_GuidMethodDeclarations.h"
// System.Runtime.Remoting.ServerIdentity
#include "mscorlib_System_Runtime_Remoting_ServerIdentityMethodDeclarations.h"
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.ProxyAttribute
#include "mscorlib_System_Runtime_Remoting_Proxies_ProxyAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxyMethodDeclarations.h"
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObjectMethodDeclarations.h"
// System.Runtime.Remoting.ClientActivatedIdentity
#include "mscorlib_System_Runtime_Remoting_ClientActivatedIdentityMethodDeclarations.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.MonoType
#include "mscorlib_System_MonoTypeMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Replacements.RemotingServices
#include "replacements_Replacements_RemotingServicesMethodDeclarations.h"
// System.Runtime.Remoting.Channels.ChannelServices
#include "mscorlib_System_Runtime_Remoting_Channels_ChannelServicesMethodDeclarations.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RemotingProxyMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainSinkMethodDeclarations.h"
// System.Runtime.Remoting.Contexts.Context
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextMethodDeclarations.h"
// System.Runtime.Remoting.SingleCallIdentity
#include "mscorlib_System_Runtime_Remoting_SingleCallIdentityMethodDeclarations.h"
// System.Runtime.Remoting.SingletonIdentity
#include "mscorlib_System_Runtime_Remoting_SingletonIdentityMethodDeclarations.h"
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChanMethodDeclarations.h"


// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern const Il2CppType* RemoteActivator_t5145_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryFormatter_t5131_il2cpp_TypeInfo_var;
extern TypeInfo* Guid_t74_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void RemotingServices__cctor_m22679 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemoteActivator_t5145_0_0_0_var = il2cpp_codegen_type_from_index(9146);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9147);
		BinaryFormatter_t5131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9148);
		Guid_t74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(46);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	RemotingSurrogateSelector_t5184 * V_0 = {0};
	StreamingContext_t2948  V_1 = {0};
	Guid_t74  V_2 = {0};
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0 = L_0;
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___next_id_4 = 1;
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5 = ((int32_t)52);
		RemotingSurrogateSelector_t5184 * L_1 = (RemotingSurrogateSelector_t5184 *)il2cpp_codegen_object_new (RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var);
		RemotingSurrogateSelector__ctor_m22925(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		StreamingContext__ctor_m23082((&V_1), ((int32_t)16), NULL, /*hidden argument*/NULL);
		RemotingSurrogateSelector_t5184 * L_2 = V_0;
		StreamingContext_t2948  L_3 = V_1;
		BinaryFormatter_t5131 * L_4 = (BinaryFormatter_t5131 *)il2cpp_codegen_object_new (BinaryFormatter_t5131_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m23088(L_4, L_2, L_3, /*hidden argument*/NULL);
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1 = L_4;
		StreamingContext_t2948  L_5 = V_1;
		BinaryFormatter_t5131 * L_6 = (BinaryFormatter_t5131 *)il2cpp_codegen_object_new (BinaryFormatter_t5131_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m23088(L_6, (Object_t *)NULL, L_5, /*hidden argument*/NULL);
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2 = L_6;
		BinaryFormatter_t5131 * L_7 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->____serializationFormatter_1;
		NullCheck(L_7);
		BinaryFormatter_set_AssemblyFormat_m23090(L_7, 1, /*hidden argument*/NULL);
		BinaryFormatter_t5131 * L_8 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->____deserializationFormatter_2;
		NullCheck(L_8);
		BinaryFormatter_set_AssemblyFormat_m23090(L_8, 1, /*hidden argument*/NULL);
		RemotingServices_RegisterInternalChannels_m22705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t74_il2cpp_TypeInfo_var);
		Guid_t74  L_9 = Guid_NewGuid_m447(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		String_t* L_10 = Guid_ToString_m448((&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m4346(L_10, ((int32_t)45), ((int32_t)95), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m408(NULL /*static, unused*/, L_11, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___app_id_3 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(RemoteActivator_t5145_0_0_0_var), /*hidden argument*/NULL);
		RemotingServices_CreateWellKnownServerIdentity_m22701(NULL /*static, unused*/, L_13, (String_t*) &_stringLiteral5901, 1, /*hidden argument*/NULL);
		Type_t * L_14 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_14, (String_t*) &_stringLiteral5902, ((int32_t)36));
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6 = L_15;
		Type_t * L_16 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		MethodInfo_t * L_17 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_16, (String_t*) &_stringLiteral5903, ((int32_t)36));
		((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7 = L_17;
		return;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C" MethodBase_t1553 * RemotingServices_GetVirtualMethod_m22680 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t1553 * ___method, const MethodInfo* method)
{
	typedef MethodBase_t1553 * (*RemotingServices_GetVirtualMethod_m22680_ftn) (Type_t *, MethodBase_t1553 *);
	static RemotingServices_GetVirtualMethod_m22680_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_GetVirtualMethod_m22680_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___type, ___method);
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C" bool RemotingServices_IsTransparentProxy_m22681 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	typedef bool (*RemotingServices_IsTransparentProxy_m22681_ftn) (Object_t *);
	static RemotingServices_IsTransparentProxy_m22681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RemotingServices_IsTransparentProxy_m22681_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)");
	return _il2cpp_icall_func(___proxy);
}
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ServerIdentity_t4755_il2cpp_TypeInfo_var;
extern "C" Type_t * RemotingServices_GetServerTypeForUri_m22682 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ServerIdentity_t4755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9149);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t4755 * V_0 = {0};
	{
		String_t* L_0 = ___URI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Identity_t5124 * L_1 = RemotingServices_GetIdentityForUri_m22697(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((ServerIdentity_t4755 *)IsInst(L_1, ServerIdentity_t4755_il2cpp_TypeInfo_var));
		ServerIdentity_t4755 * L_2 = V_0;
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
		ServerIdentity_t4755 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = ServerIdentity_get_ObjectType_m22709(L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m22683 (Object_t * __this /* static, unused */, ObjRef_t5123 * ___objectRef, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t5123 * L_0 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_1 = RemotingServices_Unmarshal_m22684(NULL /*static, unused*/, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern const Il2CppType* MarshalByRefObject_t4299_0_0_0_var;
extern const Il2CppType* ProxyAttribute_t5189_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t5189_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_Unmarshal_m22684 (Object_t * __this /* static, unused */, ObjRef_t5123 * ___objectRef, bool ___fRefine, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4299_0_0_0_var = il2cpp_codegen_type_from_index(8292);
		ProxyAttribute_t5189_0_0_0_var = il2cpp_codegen_type_from_index(9150);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		ProxyAttribute_t5189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9150);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	ProxyAttribute_t5189 * V_3 = {0};
	Type_t * G_B3_0 = {0};
	{
		bool L_0 = ___fRefine;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ObjRef_t5123 * L_1 = ___objectRef;
		NullCheck(L_1);
		Type_t * L_2 = ObjRef_get_ServerType_m22671(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0015;
	}

IL_000b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
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
		Type_t * L_5 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		ObjRef_t5123 * L_6 = ___objectRef;
		NullCheck(L_6);
		bool L_7 = ObjRef_get_IsReferenceToWellKnow_m22660(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		ObjRef_t5123 * L_8 = ___objectRef;
		Type_t * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_10 = RemotingServices_GetRemoteObject_m22704(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ObjRef_t5123 * L_12 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m22974(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
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
		Type_t * L_17 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t5189_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_18 = Attribute_GetCustomAttribute_m18613(NULL /*static, unused*/, L_16, L_17, 1, /*hidden argument*/NULL);
		V_3 = ((ProxyAttribute_t5189 *)Castclass(L_18, ProxyAttribute_t5189_il2cpp_TypeInfo_var));
		ProxyAttribute_t5189 * L_19 = V_3;
		if (!L_19)
		{
			goto IL_0078;
		}
	}
	{
		ProxyAttribute_t5189 * L_20 = V_3;
		ObjRef_t5123 * L_21 = ___objectRef;
		Type_t * L_22 = V_0;
		NullCheck(L_20);
		RealProxy_t5186 * L_23 = (RealProxy_t5186 *)VirtFuncInvoker4< RealProxy_t5186 *, ObjRef_t5123 *, Type_t *, Object_t *, Context_t5133 * >::Invoke(9 /* System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context) */, L_20, L_21, L_22, NULL, (Context_t5133 *)NULL);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_23);
		V_2 = L_24;
		Object_t * L_25 = V_2;
		ObjRef_t5123 * L_26 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m22974(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Object_t * L_27 = V_2;
		return L_27;
	}

IL_0078:
	{
		ObjRef_t5123 * L_28 = ___objectRef;
		Type_t * L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_30 = RemotingServices_GetProxyForRemoteObject_m22703(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		Object_t * L_31 = V_2;
		ObjRef_t5123 * L_32 = ___objectRef;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyUnmarshaledObject_m22974(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Object_t * L_33 = V_2;
		return L_33;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" ObjRef_t5123 * RemotingServices_Marshal_m22685 (Object_t * __this /* static, unused */, MarshalByRefObject_t4299 * ___Obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject_t4299 * L_0 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		ObjRef_t5123 * L_1 = RemotingServices_Marshal_m22686(NULL /*static, unused*/, L_0, (String_t*)NULL, (Type_t *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject,System.String,System.Type)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var;
extern TypeInfo* ILease_t5156_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" ObjRef_t5123 * RemotingServices_Marshal_m22686 (Object_t * __this /* static, unused */, MarshalByRefObject_t4299 * ___Obj, String_t* ___ObjURI, Type_t * ___RequestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9152);
		ILease_t5156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9153);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t5186 * V_0 = {0};
	Identity_t5124 * V_1 = {0};
	ClientActivatedIdentity_t5135 * V_2 = {0};
	ObjRef_t5123 * V_3 = {0};
	ClientActivatedIdentity_t5135 * V_4 = {0};
	ObjRef_t5123 * V_5 = {0};
	{
		MarshalByRefObject_t4299 * L_0 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m22681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		MarshalByRefObject_t4299 * L_2 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RealProxy_t5186 * L_3 = RemotingServices_GetRealProxy_m22688(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RealProxy_t5186 * L_4 = V_0;
		NullCheck(L_4);
		Identity_t5124 * L_5 = RealProxy_get_ObjectIdentity_m22958(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Identity_t5124 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_008e;
		}
	}
	{
		RealProxy_t5186 * L_7 = V_0;
		NullCheck(L_7);
		Type_t * L_8 = RealProxy_GetProxiedType_m22956(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_8);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		Identity_t5124 * L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = Identity_get_IsConnected_m22649(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006a;
		}
	}
	{
		Identity_t5124 * L_12 = V_1;
		V_2 = ((ClientActivatedIdentity_t5135 *)Castclass(L_12, ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var));
		String_t* L_13 = ___ObjURI;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		String_t* L_14 = RemotingServices_NewUri_m22687(NULL /*static, unused*/, /*hidden argument*/NULL);
		___ObjURI = L_14;
	}

IL_0044:
	{
		ClientActivatedIdentity_t5135 * L_15 = V_2;
		String_t* L_16 = ___ObjURI;
		NullCheck(L_15);
		Identity_set_ObjectUri_m22648(L_15, L_16, /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m22702(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_18 = V_2;
		MarshalByRefObject_t4299 * L_19 = ___Obj;
		NullCheck(L_19);
		Object_t * L_20 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.MarshalByRefObject::InitializeLifetimeService() */, L_19);
		NullCheck(L_18);
		ServerIdentity_StartTrackingLifetime_m22710(L_18, ((Object_t *)Castclass(L_20, ILease_t5156_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_21 = V_2;
		Type_t * L_22 = ___RequestedType;
		NullCheck(L_21);
		ObjRef_t5123 * L_23 = (ObjRef_t5123 *)VirtFuncInvoker1< ObjRef_t5123 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type) */, L_21, L_22);
		return L_23;
	}

IL_006a:
	{
		String_t* L_24 = ___ObjURI;
		if (!L_24)
		{
			goto IL_0078;
		}
	}
	{
		RemotingException_t5130 * L_25 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_25, (String_t*) &_stringLiteral5904, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_0078:
	{
		RealProxy_t5186 * L_26 = V_0;
		NullCheck(L_26);
		Identity_t5124 * L_27 = RealProxy_get_ObjectIdentity_m22958(L_26, /*hidden argument*/NULL);
		Type_t * L_28 = ___RequestedType;
		NullCheck(L_27);
		ObjRef_t5123 * L_29 = (ObjRef_t5123 *)VirtFuncInvoker1< ObjRef_t5123 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_27, L_28);
		V_3 = L_29;
		MarshalByRefObject_t4299 * L_30 = ___Obj;
		ObjRef_t5123 * L_31 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyMarshaledObject_m22973(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		ObjRef_t5123 * L_32 = V_3;
		return L_32;
	}

IL_008e:
	{
		Type_t * L_33 = ___RequestedType;
		if (L_33)
		{
			goto IL_009b;
		}
	}
	{
		MarshalByRefObject_t4299 * L_34 = ___Obj;
		NullCheck(L_34);
		Type_t * L_35 = Object_GetType_m4276(L_34, /*hidden argument*/NULL);
		___RequestedType = L_35;
	}

IL_009b:
	{
		String_t* L_36 = ___ObjURI;
		if (L_36)
		{
			goto IL_00ba;
		}
	}
	{
		MarshalByRefObject_t4299 * L_37 = ___Obj;
		NullCheck(L_37);
		ServerIdentity_t4755 * L_38 = MarshalByRefObject_get_ObjectIdentity_m19352(L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_00b8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		String_t* L_39 = RemotingServices_NewUri_m22687(NULL /*static, unused*/, /*hidden argument*/NULL);
		___ObjURI = L_39;
		MarshalByRefObject_t4299 * L_40 = ___Obj;
		Type_t * L_41 = ___RequestedType;
		String_t* L_42 = ___ObjURI;
		RemotingServices_CreateClientActivatedServerIdentity_m22700(NULL /*static, unused*/, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		goto IL_00e8;
	}

IL_00ba:
	{
		String_t* L_43 = ___ObjURI;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral521, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Identity_t5124 * L_45 = RemotingServices_GetIdentityForUri_m22697(NULL /*static, unused*/, L_44, /*hidden argument*/NULL);
		V_4 = ((ClientActivatedIdentity_t5135 *)IsInst(L_45, ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t5135 * L_46 = V_4;
		if (!L_46)
		{
			goto IL_00df;
		}
	}
	{
		MarshalByRefObject_t4299 * L_47 = ___Obj;
		ClientActivatedIdentity_t5135 * L_48 = V_4;
		NullCheck(L_48);
		MarshalByRefObject_t4299 * L_49 = ClientActivatedIdentity_GetServerObject_m22717(L_48, /*hidden argument*/NULL);
		if ((((Object_t*)(MarshalByRefObject_t4299 *)L_47) == ((Object_t*)(MarshalByRefObject_t4299 *)L_49)))
		{
			goto IL_00e8;
		}
	}

IL_00df:
	{
		MarshalByRefObject_t4299 * L_50 = ___Obj;
		Type_t * L_51 = ___RequestedType;
		String_t* L_52 = ___ObjURI;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_CreateClientActivatedServerIdentity_m22700(NULL /*static, unused*/, L_50, L_51, L_52, /*hidden argument*/NULL);
	}

IL_00e8:
	{
		MarshalByRefObject_t4299 * L_53 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_54 = RemotingServices_IsTransparentProxy_m22681(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0105;
		}
	}
	{
		MarshalByRefObject_t4299 * L_55 = ___Obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RealProxy_t5186 * L_56 = RemotingServices_GetRealProxy_m22688(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		Identity_t5124 * L_57 = RealProxy_get_ObjectIdentity_m22958(L_56, /*hidden argument*/NULL);
		Type_t * L_58 = ___RequestedType;
		NullCheck(L_57);
		ObjRef_t5123 * L_59 = (ObjRef_t5123 *)VirtFuncInvoker1< ObjRef_t5123 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_57, L_58);
		V_5 = L_59;
		goto IL_010e;
	}

IL_0105:
	{
		MarshalByRefObject_t4299 * L_60 = ___Obj;
		Type_t * L_61 = ___RequestedType;
		NullCheck(L_60);
		ObjRef_t5123 * L_62 = (ObjRef_t5123 *)VirtFuncInvoker1< ObjRef_t5123 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type) */, L_60, L_61);
		V_5 = L_62;
	}

IL_010e:
	{
		MarshalByRefObject_t4299 * L_63 = ___Obj;
		ObjRef_t5123 * L_64 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyMarshaledObject_m22973(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		ObjRef_t5123 * L_65 = V_5;
		return L_65;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::NewUri()
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingServices_NewUri_m22687 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_0 = Interlocked_Increment_m24383(NULL /*static, unused*/, (&((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___next_id_4), /*hidden argument*/NULL);
		V_0 = L_0;
		ObjectU5BU5D_t707* L_1 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 5));
		String_t* L_2 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___app_id_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		ArrayElementTypeCheck (L_1, L_2);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_1, 0)) = (Object_t *)L_2;
		ObjectU5BU5D_t707* L_3 = L_1;
		int32_t L_4 = Environment_get_TickCount_m10354(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Int32_ToString_m4200((&V_1), (String_t*) &_stringLiteral958, /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		ArrayElementTypeCheck (L_3, L_5);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 1)) = (Object_t *)L_5;
		ObjectU5BU5D_t707* L_6 = L_3;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 2);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral251);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_6, 2)) = (Object_t *)(String_t*) &_stringLiteral251;
		ObjectU5BU5D_t707* L_7 = L_6;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Object_t * L_10 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		ArrayElementTypeCheck (L_7, L_10);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 3)) = (Object_t *)L_10;
		ObjectU5BU5D_t707* L_11 = L_7;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 4);
		ArrayElementTypeCheck (L_11, (String_t*) &_stringLiteral5905);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 4)) = (Object_t *)(String_t*) &_stringLiteral5905;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m4090(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* TransparentProxy_t5187_il2cpp_TypeInfo_var;
extern "C" RealProxy_t5186 * RemotingServices_GetRealProxy_m22688 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		TransparentProxy_t5187_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9154);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___proxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_1 = RemotingServices_IsTransparentProxy_m22681(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RemotingException_t5130 * L_2 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_2, (String_t*) &_stringLiteral5906, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0013:
	{
		Object_t * L_3 = ___proxy;
		NullCheck(((TransparentProxy_t5187 *)Castclass(L_3, TransparentProxy_t5187_il2cpp_TypeInfo_var)));
		RealProxy_t5186 * L_4 = (((TransparentProxy_t5187 *)Castclass(L_3, TransparentProxy_t5187_il2cpp_TypeInfo_var))->____rp_0);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t5177_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1553 * RemotingServices_GetMethodBaseFromMethodMessage_m22689 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t5177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9155);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetType_m7690(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral2462, L_5, (String_t*) &_stringLiteral2430, /*hidden argument*/NULL);
		RemotingException_t5130 * L_7 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_7, L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002a:
	{
		Type_t * L_8 = V_0;
		Object_t * L_9 = ___msg;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_9);
		Object_t * L_11 = ___msg;
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_13 = RemotingServices_GetMethodBaseFromName_m22690(NULL /*static, unused*/, L_8, L_10, ((TypeU5BU5D_t1231*)Castclass(L_12, TypeU5BU5D_t1231_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1553 * RemotingServices_GetMethodBaseFromName_m22690 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1231* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1553 * V_0 = {0};
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
		TypeU5BU5D_t1231* L_4 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_5 = RemotingServices_FindInterfaceMethod_m22691(NULL /*static, unused*/, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0011:
	{
		V_0 = (MethodBase_t1553 *)NULL;
		TypeU5BU5D_t1231* L_6 = ___signature;
		if (L_6)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_7 = ___type;
		String_t* L_8 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_9 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_7);
		MethodInfo_t * L_10 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_7, L_8, L_9);
		V_0 = L_10;
		goto IL_0035;
	}

IL_0025:
	{
		Type_t * L_11 = ___type;
		String_t* L_12 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_13 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1231* L_14 = ___signature;
		NullCheck(L_11);
		MethodInfo_t * L_15 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t2981 *, TypeU5BU5D_t1231*, ParameterModifierU5BU5D_t2982* >::Invoke(52 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_11, L_12, L_13, (Binder_t2981 *)NULL, L_14, (ParameterModifierU5BU5D_t2982*)(ParameterModifierU5BU5D_t2982*)NULL);
		V_0 = L_15;
	}

IL_0035:
	{
		MethodBase_t1553 * L_16 = V_0;
		if (!L_16)
		{
			goto IL_003a;
		}
	}
	{
		MethodBase_t1553 * L_17 = V_0;
		return L_17;
	}

IL_003a:
	{
		String_t* L_18 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m456(NULL /*static, unused*/, L_18, (String_t*) &_stringLiteral5902, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_004d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodInfo_t * L_20 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___FieldSetterMethod_6;
		return L_20;
	}

IL_004d:
	{
		String_t* L_21 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_22 = String_op_Equality_m456(NULL /*static, unused*/, L_21, (String_t*) &_stringLiteral5903, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodInfo_t * L_23 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___FieldGetterMethod_7;
		return L_23;
	}

IL_0060:
	{
		TypeU5BU5D_t1231* L_24 = ___signature;
		if (L_24)
		{
			goto IL_0076;
		}
	}
	{
		Type_t * L_25 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_26 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1231* L_27 = ((Type_t_StaticFields*)Type_t_il2cpp_TypeInfo_var->static_fields)->___EmptyTypes_3;
		NullCheck(L_25);
		ConstructorInfo_t1409 * L_28 = (ConstructorInfo_t1409 *)VirtFuncInvoker4< ConstructorInfo_t1409 *, int32_t, Binder_t2981 *, TypeU5BU5D_t1231*, ParameterModifierU5BU5D_t2982* >::Invoke(76 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_25, L_26, (Binder_t2981 *)NULL, L_27, (ParameterModifierU5BU5D_t2982*)(ParameterModifierU5BU5D_t2982*)NULL);
		return L_28;
	}

IL_0076:
	{
		Type_t * L_29 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1231* L_31 = ___signature;
		NullCheck(L_29);
		ConstructorInfo_t1409 * L_32 = (ConstructorInfo_t1409 *)VirtFuncInvoker4< ConstructorInfo_t1409 *, int32_t, Binder_t2981 *, TypeU5BU5D_t1231*, ParameterModifierU5BU5D_t2982* >::Invoke(76 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_29, L_30, (Binder_t2981 *)NULL, L_31, (ParameterModifierU5BU5D_t2982*)(ParameterModifierU5BU5D_t2982*)NULL);
		return L_32;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1553 * RemotingServices_FindInterfaceMethod_m22691 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t1231* ___signature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	MethodBase_t1553 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t1231* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = (MethodBase_t1553 *)NULL;
		TypeU5BU5D_t1231* L_0 = ___signature;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = ___type;
		String_t* L_2 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_3 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, L_2, L_3);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0014:
	{
		Type_t * L_5 = ___type;
		String_t* L_6 = ___methodName;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		int32_t L_7 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___methodBindings_5;
		TypeU5BU5D_t1231* L_8 = ___signature;
		NullCheck(L_5);
		MethodInfo_t * L_9 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t2981 *, TypeU5BU5D_t1231*, ParameterModifierU5BU5D_t2982* >::Invoke(52 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_5, L_6, L_7, (Binder_t2981 *)NULL, L_8, (ParameterModifierU5BU5D_t2982*)(ParameterModifierU5BU5D_t2982*)NULL);
		V_0 = L_9;
	}

IL_0024:
	{
		MethodBase_t1553 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_0029;
		}
	}
	{
		MethodBase_t1553 * L_11 = V_0;
		return L_11;
	}

IL_0029:
	{
		Type_t * L_12 = ___type;
		NullCheck(L_12);
		TypeU5BU5D_t1231* L_13 = (TypeU5BU5D_t1231*)VirtFuncInvoker0< TypeU5BU5D_t1231* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_12);
		V_2 = L_13;
		V_3 = 0;
		goto IL_004a;
	}

IL_0034:
	{
		TypeU5BU5D_t1231* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_1 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_14, L_16));
		Type_t * L_17 = V_1;
		String_t* L_18 = ___methodName;
		TypeU5BU5D_t1231* L_19 = ___signature;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_20 = RemotingServices_FindInterfaceMethod_m22691(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		MethodBase_t1553 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_0046;
		}
	}
	{
		MethodBase_t1553 * L_22 = V_0;
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
		TypeU5BU5D_t1231* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		return (MethodBase_t1553 *)NULL;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t4299_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_GetObjectData_m22692 (Object_t * __this /* static, unused */, Object_t * ___obj, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		MarshalByRefObject_t4299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t5123 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		ObjRef_t5123 * L_3 = RemotingServices_Marshal_m22685(NULL /*static, unused*/, ((MarshalByRefObject_t4299 *)Castclass(L_2, MarshalByRefObject_t4299_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_3;
		ObjRef_t5123 * L_4 = V_0;
		SerializationInfo_t2947 * L_5 = ___info;
		StreamingContext_t2948  L_6 = ___context;
		NullCheck(L_4);
		VirtActionInvoker2< SerializationInfo_t2947 *, StreamingContext_t2948  >::Invoke(13 /* System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_4, L_5, L_6);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsMethodOverloaded(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* IMethodMessage_t5177_il2cpp_TypeInfo_var;
extern TypeInfo* MonoType_t_il2cpp_TypeInfo_var;
extern "C" bool RemotingServices_IsMethodOverloaded_m22693 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t5177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9155);
		MonoType_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8896);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	MonoType_t * V_1 = {0};
	{
		Object_t * L_0 = ___msg;
		NullCheck(L_0);
		MethodBase_t1553 * L_1 = (MethodBase_t1553 *)InterfaceFuncInvoker0< MethodBase_t1553 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		V_1 = ((MonoType_t *)Castclass(L_2, MonoType_t_il2cpp_TypeInfo_var));
		MonoType_t * L_3 = V_1;
		Object_t * L_4 = ___msg;
		NullCheck(L_4);
		String_t* L_5 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_4);
		MonoType_t * L_6 = V_1;
		NullCheck(L_3);
		MethodInfoU5BU5D_t2170* L_7 = MonoType_GetMethodsByName_m20592(L_3, L_5, ((int32_t)52), 0, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		return ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) > ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Remoting.RemotingServices::IsOneWay(System.Reflection.MethodBase)
extern const Il2CppType* OneWayAttribute_t5180_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool RemotingServices_IsOneWay_m22694 (Object_t * __this /* static, unused */, MethodBase_t1553 * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OneWayAttribute_t5180_0_0_0_var = il2cpp_codegen_type_from_index(9156);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodBase_t1553 * L_0 = ___method;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(OneWayAttribute_t5180_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, 0);
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxy_m22695 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t5120 * ___entry, ObjectU5BU5D_t707* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
	{
		ActivatedClientTypeEntry_t5120 * L_0 = ___entry;
		NullCheck(L_0);
		IContextAttributeU5BU5D_t5433* L_1 = ActivatedClientTypeEntry_get_ContextAttributes_m22639(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		ObjectU5BU5D_t707* L_2 = ___activationAttributes;
		if (!L_2)
		{
			goto IL_0047;
		}
	}

IL_000b:
	{
		ArrayList_t723 * L_3 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ActivatedClientTypeEntry_t5120 * L_4 = ___entry;
		NullCheck(L_4);
		IContextAttributeU5BU5D_t5433* L_5 = ActivatedClientTypeEntry_get_ContextAttributes_m22639(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		ArrayList_t723 * L_6 = V_0;
		ActivatedClientTypeEntry_t5120 * L_7 = ___entry;
		NullCheck(L_7);
		IContextAttributeU5BU5D_t5433* L_8 = ActivatedClientTypeEntry_get_ContextAttributes_m22639(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_6, (Object_t *)(Object_t *)L_8);
	}

IL_0025:
	{
		ObjectU5BU5D_t707* L_9 = ___activationAttributes;
		if (!L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t723 * L_10 = V_0;
		ObjectU5BU5D_t707* L_11 = ___activationAttributes;
		NullCheck(L_10);
		VirtActionInvoker1< Object_t * >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_10, (Object_t *)(Object_t *)L_11);
	}

IL_002f:
	{
		ActivatedClientTypeEntry_t5120 * L_12 = ___entry;
		NullCheck(L_12);
		Type_t * L_13 = ActivatedClientTypeEntry_get_ObjectType_m22640(L_12, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t5120 * L_14 = ___entry;
		NullCheck(L_14);
		String_t* L_15 = ActivatedClientTypeEntry_get_ApplicationUrl_m22638(L_14, /*hidden argument*/NULL);
		ArrayList_t723 * L_16 = V_0;
		NullCheck(L_16);
		ObjectU5BU5D_t707* L_17 = (ObjectU5BU5D_t707*)VirtFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(47 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_16);
		Object_t * L_18 = RemotingServices_CreateClientProxy_m12291(NULL /*static, unused*/, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0047:
	{
		ActivatedClientTypeEntry_t5120 * L_19 = ___entry;
		NullCheck(L_19);
		Type_t * L_20 = ActivatedClientTypeEntry_get_ObjectType_m22640(L_19, /*hidden argument*/NULL);
		ActivatedClientTypeEntry_t5120 * L_21 = ___entry;
		NullCheck(L_21);
		String_t* L_22 = ActivatedClientTypeEntry_get_ApplicationUrl_m22638(L_21, /*hidden argument*/NULL);
		Object_t * L_23 = RemotingServices_CreateClientProxy_m12291(NULL /*static, unused*/, L_20, L_22, (ObjectU5BU5D_t707*)(ObjectU5BU5D_t707*)NULL, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern const Il2CppType* ProxyAttribute_t5189_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ProxyAttribute_t5189_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t5188_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_CreateClientProxyForContextBound_m22696 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t707* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ProxyAttribute_t5189_0_0_0_var = il2cpp_codegen_type_from_index(9150);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ProxyAttribute_t5189_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9150);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		RemotingProxy_t5188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9158);
		s_Il2CppMethodIntialized = true;
	}
	ProxyAttribute_t5189 * V_0 = {0};
	RemotingProxy_t5188 * V_1 = {0};
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
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ProxyAttribute_t5189_0_0_0_var), /*hidden argument*/NULL);
		Attribute_t426 * L_4 = Attribute_GetCustomAttribute_m18613(NULL /*static, unused*/, L_2, L_3, 1, /*hidden argument*/NULL);
		V_0 = ((ProxyAttribute_t5189 *)Castclass(L_4, ProxyAttribute_t5189_il2cpp_TypeInfo_var));
		ProxyAttribute_t5189 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		ProxyAttribute_t5189 * L_6 = V_0;
		Type_t * L_7 = ___type;
		NullCheck(L_6);
		MarshalByRefObject_t4299 * L_8 = (MarshalByRefObject_t4299 *)VirtFuncInvoker1< MarshalByRefObject_t4299 *, Type_t * >::Invoke(8 /* System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type) */, L_6, L_7);
		return L_8;
	}

IL_002a:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		String_t* L_10 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		ObjectU5BU5D_t707* L_11 = ___activationAttributes;
		RemotingProxy_t5188 * L_12 = (RemotingProxy_t5188 *)il2cpp_codegen_object_new (RemotingProxy_t5188_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m22964(L_12, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		RemotingProxy_t5188 * L_13 = V_1;
		NullCheck(L_13);
		Object_t * L_14 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_13);
		return L_14;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* Identity_t5124_il2cpp_TypeInfo_var;
extern "C" Identity_t5124 * RemotingServices_GetIdentityForUri_m22697 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		Identity_t5124_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9159);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Hashtable_t721 * V_1 = {0};
	Identity_t5124 * V_2 = {0};
	Identity_t5124 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___uri;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		String_t* L_1 = RemotingServices_GetNormalizedUri_m22707(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Hashtable_t721 * L_2 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_1 = L_2;
		Hashtable_t721 * L_3 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_4 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_5 = V_0;
			NullCheck(L_4);
			Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_4, L_5);
			V_2 = ((Identity_t5124 *)Castclass(L_6, Identity_t5124_il2cpp_TypeInfo_var));
			Identity_t5124 * L_7 = V_2;
			if (L_7)
			{
				goto IL_0042;
			}
		}

IL_0027:
		{
			String_t* L_8 = ___uri;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			String_t* L_9 = RemotingServices_RemoveAppNameFromUri_m22698(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			V_0 = L_9;
			String_t* L_10 = V_0;
			if (!L_10)
			{
				goto IL_0042;
			}
		}

IL_0031:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_11 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_12 = V_0;
			NullCheck(L_11);
			Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_11, L_12);
			V_2 = ((Identity_t5124 *)Castclass(L_13, Identity_t5124_il2cpp_TypeInfo_var));
		}

IL_0042:
		{
			Identity_t5124 * L_14 = V_2;
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
		Hashtable_t721 * L_15 = V_1;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004f:
	{
		Identity_t5124 * L_16 = V_3;
		return L_16;
	}
}
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingServices_RemoveAppNameFromUri_m22698 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		String_t* L_0 = RemotingConfiguration_get_ApplicationName_m22673(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		bool L_6 = String_StartsWith_m4270(L_4, L_5, /*hidden argument*/NULL);
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
		String_t* L_10 = String_Substring_m4338(L_7, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0032:
	{
		return (String_t*)NULL;
	}
}
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern TypeInfo* IChannelInfo_t5126_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t5125_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t5188_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t5153_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t4299_il2cpp_TypeInfo_var;
extern "C" ClientIdentity_t5125 * RemotingServices_GetOrCreateClientIdentity_m22699 (Object_t * __this /* static, unused */, ObjRef_t5123 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChannelInfo_t5126_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9142);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ClientIdentity_t5125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9160);
		RemotingProxy_t5188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9158);
		CrossAppDomainSink_t5153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9161);
		MarshalByRefObject_t4299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	Object_t * V_2 = {0};
	Hashtable_t721 * V_3 = {0};
	String_t* V_4 = {0};
	ClientIdentity_t5125 * V_5 = {0};
	RemotingProxy_t5188 * V_6 = {0};
	CrossAppDomainSink_t5153 * V_7 = {0};
	ClientIdentity_t5125 * V_8 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ObjectU5BU5D_t707* G_B3_0 = {0};
	{
		ObjRef_t5123 * L_0 = ___objRef;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_0);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ObjRef_t5123 * L_2 = ___objRef;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo() */, L_2);
		NullCheck(L_3);
		ObjectU5BU5D_t707* L_4 = (ObjectU5BU5D_t707*)InterfaceFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(0 /* System.Object[] System.Runtime.Remoting.IChannelInfo::get_ChannelData() */, IChannelInfo_t5126_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = ((ObjectU5BU5D_t707*)(NULL));
	}

IL_0016:
	{
		V_0 = (Object_t *)G_B3_0;
		ObjRef_t5123 * L_5 = ___objRef;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_5);
		Object_t * L_7 = V_0;
		Object_t * L_8 = RemotingServices_GetClientChannelSinkChain_m12290(NULL /*static, unused*/, L_6, L_7, (&V_1), /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_0030;
		}
	}
	{
		ObjRef_t5123 * L_10 = ___objRef;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_10);
		V_1 = L_11;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Hashtable_t721 * L_12 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_3 = L_12;
		Hashtable_t721 * L_13 = V_3;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			Object_t ** L_14 = ___clientProxy;
			*((Object_t **)(L_14)) = (Object_t *)NULL;
			ObjRef_t5123 * L_15 = ___objRef;
			NullCheck(L_15);
			String_t* L_16 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_15);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			String_t* L_17 = RemotingServices_GetNormalizedUri_m22707(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			Hashtable_t721 * L_18 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_19 = V_4;
			NullCheck(L_18);
			Object_t * L_20 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_18, L_19);
			V_5 = ((ClientIdentity_t5125 *)IsInst(L_20, ClientIdentity_t5125_il2cpp_TypeInfo_var));
			ClientIdentity_t5125 * L_21 = V_5;
			if (!L_21)
			{
				goto IL_007d;
			}
		}

IL_0063:
		{
			Object_t ** L_22 = ___clientProxy;
			ClientIdentity_t5125 * L_23 = V_5;
			NullCheck(L_23);
			MarshalByRefObject_t4299 * L_24 = ClientIdentity_get_ClientProxy_m22653(L_23, /*hidden argument*/NULL);
			*((Object_t **)(L_22)) = (Object_t *)L_24;
			Object_t ** L_25 = ___clientProxy;
			if (!(*((Object_t **)L_25)))
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			ClientIdentity_t5125 * L_26 = V_5;
			V_8 = L_26;
			IL2CPP_LEAVE(0xE9, FINALLY_00e2);
		}

IL_0076:
		{
			ClientIdentity_t5125 * L_27 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m22706(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		}

IL_007d:
		{
			String_t* L_28 = V_1;
			ObjRef_t5123 * L_29 = ___objRef;
			ClientIdentity_t5125 * L_30 = (ClientIdentity_t5125 *)il2cpp_codegen_object_new (ClientIdentity_t5125_il2cpp_TypeInfo_var);
			ClientIdentity__ctor_m22652(L_30, L_28, L_29, /*hidden argument*/NULL);
			V_5 = L_30;
			ClientIdentity_t5125 * L_31 = V_5;
			Object_t * L_32 = V_2;
			NullCheck(L_31);
			Identity_set_ChannelSink_m22646(L_31, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_33 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			String_t* L_34 = V_4;
			ClientIdentity_t5125 * L_35 = V_5;
			NullCheck(L_33);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_33, L_34, L_35);
			Type_t * L_36 = ___proxyType;
			if (!L_36)
			{
				goto IL_00da;
			}
		}

IL_009f:
		{
			Type_t * L_37 = ___proxyType;
			ClientIdentity_t5125 * L_38 = V_5;
			RemotingProxy_t5188 * L_39 = (RemotingProxy_t5188 *)il2cpp_codegen_object_new (RemotingProxy_t5188_il2cpp_TypeInfo_var);
			RemotingProxy__ctor_m22963(L_39, L_37, L_38, /*hidden argument*/NULL);
			V_6 = L_39;
			Object_t * L_40 = V_2;
			V_7 = ((CrossAppDomainSink_t5153 *)IsInst(L_40, CrossAppDomainSink_t5153_il2cpp_TypeInfo_var));
			CrossAppDomainSink_t5153 * L_41 = V_7;
			if (!L_41)
			{
				goto IL_00c3;
			}
		}

IL_00b5:
		{
			RemotingProxy_t5188 * L_42 = V_6;
			CrossAppDomainSink_t5153 * L_43 = V_7;
			NullCheck(L_43);
			int32_t L_44 = CrossAppDomainSink_get_TargetDomainId_m22753(L_43, /*hidden argument*/NULL);
			NullCheck(L_42);
			RealProxy_SetTargetDomain_m22962(L_42, L_44, /*hidden argument*/NULL);
		}

IL_00c3:
		{
			Object_t ** L_45 = ___clientProxy;
			RemotingProxy_t5188 * L_46 = V_6;
			NullCheck(L_46);
			Object_t * L_47 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_46);
			*((Object_t **)(L_45)) = (Object_t *)L_47;
			ClientIdentity_t5125 * L_48 = V_5;
			Object_t ** L_49 = ___clientProxy;
			NullCheck(L_48);
			ClientIdentity_set_ClientProxy_m22654(L_48, ((MarshalByRefObject_t4299 *)Castclass((*((Object_t **)L_49)), MarshalByRefObject_t4299_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		}

IL_00da:
		{
			ClientIdentity_t5125 * L_50 = V_5;
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
		Hashtable_t721 * L_51 = V_3;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(226)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(226)
	{
		IL2CPP_JUMP_TBL(0xE9, IL_00e9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_00e9:
	{
		ClientIdentity_t5125 * L_52 = V_8;
		return L_52;
	}
}
// System.Runtime.Remoting.ClientActivatedIdentity System.Runtime.Remoting.RemotingServices::CreateClientActivatedServerIdentity(System.MarshalByRefObject,System.Type,System.String)
extern TypeInfo* ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t5133_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ILease_t5156_il2cpp_TypeInfo_var;
extern "C" ClientActivatedIdentity_t5135 * RemotingServices_CreateClientActivatedServerIdentity_m22700 (Object_t * __this /* static, unused */, MarshalByRefObject_t4299 * ___realObject, Type_t * ___objectType, String_t* ___objectUri, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9152);
		Context_t5133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9162);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ILease_t5156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9153);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t5135 * V_0 = {0};
	{
		String_t* L_0 = ___objectUri;
		Type_t * L_1 = ___objectType;
		ClientActivatedIdentity_t5135 * L_2 = (ClientActivatedIdentity_t5135 *)il2cpp_codegen_object_new (ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var);
		ClientActivatedIdentity__ctor_m22716(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ClientActivatedIdentity_t5135 * L_3 = V_0;
		MarshalByRefObject_t4299 * L_4 = ___realObject;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t5133_il2cpp_TypeInfo_var);
		Context_t5133 * L_5 = Context_get_DefaultContext_m22756(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ServerIdentity_AttachServerObject_m22713(L_3, L_4, L_5, /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m22702(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_7 = V_0;
		MarshalByRefObject_t4299 * L_8 = ___realObject;
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.MarshalByRefObject::InitializeLifetimeService() */, L_8);
		NullCheck(L_7);
		ServerIdentity_StartTrackingLifetime_m22710(L_7, ((Object_t *)Castclass(L_9, ILease_t5156_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ClientActivatedIdentity_t5135 * L_10 = V_0;
		return L_10;
	}
}
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern TypeInfo* Context_t5133_il2cpp_TypeInfo_var;
extern TypeInfo* SingleCallIdentity_t5137_il2cpp_TypeInfo_var;
extern TypeInfo* SingletonIdentity_t5136_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" ServerIdentity_t4755 * RemotingServices_CreateWellKnownServerIdentity_m22701 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Context_t5133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9162);
		SingleCallIdentity_t5137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9163);
		SingletonIdentity_t5136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9164);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	ServerIdentity_t4755 * V_0 = {0};
	{
		int32_t L_0 = ___mode;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_1 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t5133_il2cpp_TypeInfo_var);
		Context_t5133 * L_2 = Context_get_DefaultContext_m22756(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType;
		SingleCallIdentity_t5137 * L_4 = (SingleCallIdentity_t5137 *)il2cpp_codegen_object_new (SingleCallIdentity_t5137_il2cpp_TypeInfo_var);
		SingleCallIdentity__ctor_m22720(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0013:
	{
		String_t* L_5 = ___objectUri;
		IL2CPP_RUNTIME_CLASS_INIT(Context_t5133_il2cpp_TypeInfo_var);
		Context_t5133 * L_6 = Context_get_DefaultContext_m22756(NULL /*static, unused*/, /*hidden argument*/NULL);
		Type_t * L_7 = ___objectType;
		SingletonIdentity_t5136 * L_8 = (SingletonIdentity_t5136 *)il2cpp_codegen_object_new (SingletonIdentity_t5136_il2cpp_TypeInfo_var);
		SingletonIdentity__ctor_m22719(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0020:
	{
		ServerIdentity_t4755 * L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_RegisterServerIdentity_m22702(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		ServerIdentity_t4755 * L_10 = V_0;
		return L_10;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterServerIdentity_m22702 (Object_t * __this /* static, unused */, ServerIdentity_t4755 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t721 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Hashtable_t721 * L_0 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t721 * L_1 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_2 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t4755 * L_3 = ___identity;
			NullCheck(L_3);
			String_t* L_4 = Identity_get_ObjectUri_m22647(L_3, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_4);
			if (!L_5)
			{
				goto IL_0039;
			}
		}

IL_001e:
		{
			ServerIdentity_t4755 * L_6 = ___identity;
			NullCheck(L_6);
			String_t* L_7 = Identity_get_ObjectUri_m22647(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5907, L_7, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
			RemotingException_t5130 * L_9 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
			RemotingException__ctor_m22677(L_9, L_8, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_9);
		}

IL_0039:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_10 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ServerIdentity_t4755 * L_11 = ___identity;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m22647(L_11, /*hidden argument*/NULL);
			ServerIdentity_t4755 * L_13 = ___identity;
			NullCheck(L_10);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_10, L_12, L_13);
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
		Hashtable_t721 * L_14 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
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
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetProxyForRemoteObject_m22703 (Object_t * __this /* static, unused */, ObjRef_t5123 * ___objref, Type_t * ___classToProxy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9152);
		s_Il2CppMethodIntialized = true;
	}
	ClientActivatedIdentity_t5135 * V_0 = {0};
	{
		ObjRef_t5123 * L_0 = ___objref;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Runtime.Remoting.ObjRef::get_URI() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Identity_t5124 * L_2 = RemotingServices_GetIdentityForUri_m22697(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((ClientActivatedIdentity_t5135 *)IsInst(L_2, ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var));
		ClientActivatedIdentity_t5135 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ClientActivatedIdentity_t5135 * L_4 = V_0;
		NullCheck(L_4);
		MarshalByRefObject_t4299 * L_5 = ClientActivatedIdentity_GetServerObject_m22717(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001b:
	{
		ObjRef_t5123 * L_6 = ___objref;
		Type_t * L_7 = ___classToProxy;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_8 = RemotingServices_GetRemoteObject_m22704(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingServices_GetRemoteObject_m22704 (Object_t * __this /* static, unused */, ObjRef_t5123 * ___objRef, Type_t * ___proxyType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		ObjRef_t5123 * L_0 = ___objRef;
		Type_t * L_1 = ___proxyType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_GetOrCreateClientIdentity_m22699(NULL /*static, unused*/, L_0, L_1, (&V_0), /*hidden argument*/NULL);
		Object_t * L_2 = V_0;
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern TypeInfo* CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_RegisterInternalChannels_m22705 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9165);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var);
		CrossAppDomainChannel_RegisterCrossAppDomainChannel_m22747(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* ClientIdentity_t5125_il2cpp_TypeInfo_var;
extern "C" void RemotingServices_DisposeIdentity_m22706 (Object_t * __this /* static, unused */, Identity_t5124 * ___ident, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		ClientIdentity_t5125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9160);
		s_Il2CppMethodIntialized = true;
	}
	Hashtable_t721 * V_0 = {0};
	ClientIdentity_t5125 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Hashtable_t721 * L_0 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
		V_0 = L_0;
		Hashtable_t721 * L_1 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			Identity_t5124 * L_2 = ___ident;
			NullCheck(L_2);
			bool L_3 = Identity_get_Disposed_m22650(L_2, /*hidden argument*/NULL);
			if (L_3)
			{
				goto IL_004c;
			}
		}

IL_0014:
		{
			Identity_t5124 * L_4 = ___ident;
			V_1 = ((ClientIdentity_t5125 *)IsInst(L_4, ClientIdentity_t5125_il2cpp_TypeInfo_var));
			ClientIdentity_t5125 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_6 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			ClientIdentity_t5125 * L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = ClientIdentity_get_TargetUri_m22656(L_7, /*hidden argument*/NULL);
			String_t* L_9 = RemotingServices_GetNormalizedUri_m22707(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< Object_t * >::Invoke(33 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_6, L_9);
			goto IL_0045;
		}

IL_0035:
		{
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_10 = ((RemotingServices_t5132_StaticFields*)RemotingServices_t5132_il2cpp_TypeInfo_var->static_fields)->___uri_hash_0;
			Identity_t5124 * L_11 = ___ident;
			NullCheck(L_11);
			String_t* L_12 = Identity_get_ObjectUri_m22647(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			VirtActionInvoker1< Object_t * >::Invoke(33 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_10, L_12);
		}

IL_0045:
		{
			Identity_t5124 * L_13 = ___ident;
			NullCheck(L_13);
			Identity_set_Disposed_m22651(L_13, 1, /*hidden argument*/NULL);
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
		Hashtable_t721 * L_14 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
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
extern "C" String_t* RemotingServices_GetNormalizedUri_m22707 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method)
{
	{
		String_t* L_0 = ___uri;
		NullCheck(L_0);
		bool L_1 = String_StartsWith_m4270(L_0, (String_t*) &_stringLiteral521, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_2 = ___uri;
		NullCheck(L_2);
		String_t* L_3 = String_Substring_m4338(L_2, 1, /*hidden argument*/NULL);
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

// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease.h"
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseState.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfo.h"
// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSi.h"
// System.Runtime.Remoting.Lifetime.Lease
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseMethodDeclarations.h"
// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServicesMethodDeclarations.h"
// System.Runtime.Remoting.TypeInfo
#include "mscorlib_System_Runtime_Remoting_TypeInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m22708 (ServerIdentity_t4755 * __this, String_t* ___objectUri, Context_t5133 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Identity__ctor_m22644(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType;
		__this->____objectType_5 = L_1;
		Context_t5133 * L_2 = ___context;
		__this->____context_8 = L_2;
		return;
	}
}
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m22709 (ServerIdentity_t4755 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____objectType_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern TypeInfo* ILease_t5156_il2cpp_TypeInfo_var;
extern TypeInfo* Lease_t5134_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_StartTrackingLifetime_m22710 (ServerIdentity_t4755 * __this, Object_t * ___lease, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILease_t5156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9153);
		Lease_t5134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8906);
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___lease;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		Object_t * L_1 = ___lease;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.ILease::get_CurrentState() */, ILease_t5156_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		___lease = (Object_t *)NULL;
	}

IL_0010:
	{
		Object_t * L_3 = ___lease;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___lease;
		if (((Lease_t5134 *)IsInst(L_4, Lease_t5134_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		Lease_t5134 * L_5 = (Lease_t5134 *)il2cpp_codegen_object_new (Lease_t5134_il2cpp_TypeInfo_var);
		Lease__ctor_m22780(L_5, /*hidden argument*/NULL);
		___lease = L_5;
	}

IL_0024:
	{
		Object_t * L_6 = ___lease;
		__this->____lease_9 = ((Lease_t5134 *)Castclass(L_6, Lease_t5134_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		LifetimeServices_TrackLifetime_m22802(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m22711 (ServerIdentity_t4755 * __this, const MethodInfo* method)
{
	{
		ServerIdentity_DisposeServerObject_m22715(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInfo_t5138_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var;
extern TypeInfo* EnvoyInfo_t5122_il2cpp_TypeInfo_var;
extern "C" ObjRef_t5123 * ServerIdentity_CreateObjRef_m22712 (ServerIdentity_t4755 * __this, Type_t * ___requestedType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		TypeInfo_t5138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9167);
		EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9168);
		EnvoyInfo_t5122_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9169);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t5123 * L_0 = (((Identity_t5124 *)__this)->____objRef_3);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ObjRef_t5123 * L_1 = (((Identity_t5124 *)__this)->____objRef_3);
		NullCheck(L_1);
		ObjRef_UpdateChannelInfo_m22670(L_1, /*hidden argument*/NULL);
		ObjRef_t5123 * L_2 = (((Identity_t5124 *)__this)->____objRef_3);
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
		ObjRef_t5123 * L_5 = (ObjRef_t5123 *)il2cpp_codegen_object_new (ObjRef_t5123_il2cpp_TypeInfo_var);
		ObjRef__ctor_m22657(L_5, /*hidden argument*/NULL);
		((Identity_t5124 *)__this)->____objRef_3 = L_5;
		ObjRef_t5123 * L_6 = (((Identity_t5124 *)__this)->____objRef_3);
		Type_t * L_7 = ___requestedType;
		TypeInfo_t5138 * L_8 = (TypeInfo_t5138 *)il2cpp_codegen_object_new (TypeInfo_t5138_il2cpp_TypeInfo_var);
		TypeInfo__ctor_m22723(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< Object_t * >::Invoke(10 /* System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo) */, L_6, L_8);
		ObjRef_t5123 * L_9 = (((Identity_t5124 *)__this)->____objRef_3);
		String_t* L_10 = (((Identity_t5124 *)__this)->____objectUri_0);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String) */, L_9, L_10);
		Object_t * L_11 = (((Identity_t5124 *)__this)->____envoySink_2);
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		Object_t * L_12 = (((Identity_t5124 *)__this)->____envoySink_2);
		if (((EnvoyTerminatorSink_t5171 *)IsInst(L_12, EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		ObjRef_t5123 * L_13 = (((Identity_t5124 *)__this)->____objRef_3);
		Object_t * L_14 = (((Identity_t5124 *)__this)->____envoySink_2);
		EnvoyInfo_t5122 * L_15 = (EnvoyInfo_t5122 *)il2cpp_codegen_object_new (EnvoyInfo_t5122_il2cpp_TypeInfo_var);
		EnvoyInfo__ctor_m22642(L_15, L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo) */, L_13, L_15);
	}

IL_007f:
	{
		ObjRef_t5123 * L_16 = (((Identity_t5124 *)__this)->____objRef_3);
		return L_16;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_AttachServerObject_m22713 (ServerIdentity_t4755 * __this, MarshalByRefObject_t4299 * ___serverObject, Context_t5133 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t5186 * V_0 = {0};
	{
		ServerIdentity_DisposeServerObject_m22715(__this, /*hidden argument*/NULL);
		Context_t5133 * L_0 = ___context;
		__this->____context_8 = L_0;
		MarshalByRefObject_t4299 * L_1 = ___serverObject;
		__this->____serverObject_6 = L_1;
		MarshalByRefObject_t4299 * L_2 = ___serverObject;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_3 = RemotingServices_IsTransparentProxy_m22681(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		MarshalByRefObject_t4299 * L_4 = ___serverObject;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RealProxy_t5186 * L_5 = RemotingServices_GetRealProxy_m22688(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RealProxy_t5186 * L_6 = V_0;
		NullCheck(L_6);
		Identity_t5124 * L_7 = RealProxy_get_ObjectIdentity_m22958(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0032;
		}
	}
	{
		RealProxy_t5186 * L_8 = V_0;
		NullCheck(L_8);
		RealProxy_set_ObjectIdentity_m22959(L_8, __this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		goto IL_005a;
	}

IL_0034:
	{
		Type_t * L_9 = (__this->____objectType_5);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(24 /* System.Boolean System.Type::get_IsContextful() */, L_9);
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Context_t5133 * L_11 = ___context;
		MarshalByRefObject_t4299 * L_12 = ___serverObject;
		NullCheck(L_11);
		Object_t * L_13 = Context_CreateEnvoySink_m22760(L_11, L_12, /*hidden argument*/NULL);
		((Identity_t5124 *)__this)->____envoySink_2 = L_13;
	}

IL_004e:
	{
		MarshalByRefObject_t4299 * L_14 = (__this->____serverObject_6);
		NullCheck(L_14);
		MarshalByRefObject_set_ObjectIdentity_m19353(L_14, __this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t5134 * ServerIdentity_get_Lease_m22714 (ServerIdentity_t4755 * __this, const MethodInfo* method)
{
	{
		Lease_t5134 * L_0 = (__this->____lease_9);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern "C" void ServerIdentity_DisposeServerObject_m22715 (ServerIdentity_t4755 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		s_Il2CppMethodIntialized = true;
	}
	MarshalByRefObject_t4299 * V_0 = {0};
	{
		MarshalByRefObject_t4299 * L_0 = (__this->____serverObject_6);
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		MarshalByRefObject_t4299 * L_1 = (__this->____serverObject_6);
		V_0 = L_1;
		MarshalByRefObject_t4299 * L_2 = (__this->____serverObject_6);
		NullCheck(L_2);
		MarshalByRefObject_set_ObjectIdentity_m19353(L_2, (ServerIdentity_t4755 *)NULL, /*hidden argument*/NULL);
		__this->____serverObject_6 = (MarshalByRefObject_t4299 *)NULL;
		__this->____serverSink_7 = (Object_t *)NULL;
		MarshalByRefObject_t4299 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		TrackingServices_NotifyDisconnectedObject_m22975(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C" void ClientActivatedIdentity__ctor_m22716 (ClientActivatedIdentity_t5135 * __this, String_t* ___objectUri, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Type_t * L_1 = ___objectType;
		ServerIdentity__ctor_m22708(__this, L_0, (Context_t5133 *)NULL, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t4299 * ClientActivatedIdentity_GetServerObject_m22717 (ClientActivatedIdentity_t5135 * __this, const MethodInfo* method)
{
	{
		MarshalByRefObject_t4299 * L_0 = (((ServerIdentity_t4755 *)__this)->____serverObject_6);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void ClientActivatedIdentity_OnLifetimeExpired_m22718 (ClientActivatedIdentity_t5135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		ServerIdentity_OnLifetimeExpired_m22711(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_DisposeIdentity_m22706(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingletonIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingletonIdentity__ctor_m22719 (SingletonIdentity_t5136 * __this, String_t* ___objectUri, Context_t5133 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t5133 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m22708(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.SingleCallIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void SingleCallIdentity__ctor_m22720 (SingleCallIdentity_t5137 * __this, String_t* ___objectUri, Context_t5133 * ___context, Type_t * ___objectType, const MethodInfo* method)
{
	{
		String_t* L_0 = ___objectUri;
		Context_t5133 * L_1 = ___context;
		Type_t * L_2 = ___objectType;
		ServerIdentity__ctor_m22708(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.TypeEntry
#include "mscorlib_System_Runtime_Remoting_TypeEntry.h"
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.TypeEntry::get_AssemblyName()
extern "C" String_t* TypeEntry_get_AssemblyName_m22721 (TypeEntry_t5121 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assembly_name_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.TypeEntry::get_TypeName()
extern "C" String_t* TypeEntry_get_TypeName_m22722 (TypeEntry_t5121 * __this, const MethodInfo* method)
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
extern const Il2CppType* MarshalByRefObject_t4299_0_0_0_var;
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void TypeInfo__ctor_m22723 (TypeInfo_t5138 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4299_0_0_0_var = il2cpp_codegen_type_from_index(8292);
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	TypeU5BU5D_t1231* V_3 = {0};
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
		Type_t * L_2 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
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
		Type_t * L_15 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_14) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_0085;
		}
	}
	{
		Type_t * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
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
		TypeU5BU5D_t1231* L_31 = (TypeU5BU5D_t1231*)VirtFuncInvoker0< TypeU5BU5D_t1231* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_30);
		V_3 = L_31;
		TypeU5BU5D_t1231* L_32 = V_3;
		NullCheck(L_32);
		__this->___interfacesImplemented_2 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_32)->max_length)))));
		V_4 = 0;
		goto IL_00eb;
	}

IL_00d3:
	{
		StringU5BU5D_t75* L_33 = (__this->___interfacesImplemented_2);
		int32_t L_34 = V_4;
		TypeU5BU5D_t1231* L_35 = V_3;
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
		TypeU5BU5D_t1231* L_41 = V_3;
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
extern "C" String_t* TypeInfo_get_TypeName_m22724 (TypeInfo_t5138 * __this, const MethodInfo* method)
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



// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServic.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Activation.ActivationServices
#include "mscorlib_System_Runtime_Remoting_Activation_ActivationServicMethodDeclarations.h"

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeve.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAc.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActi.h"
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ConstructionLeveMethodDeclarations.h"
// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttributeMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCall
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallMethodDeclarations.h"
// System.Runtime.Remoting.Activation.AppDomainLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_AppDomainLevelAcMethodDeclarations.h"
// System.Runtime.Remoting.Activation.ContextLevelActivator
#include "mscorlib_System_Runtime_Remoting_Activation_ContextLevelActiMethodDeclarations.h"
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"


// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
extern TypeInfo* ActivationServices_t5141_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionLevelActivator_t5143_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_get_ConstructionActivator_m22725 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ActivationServices_t5141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9170);
		ConstructionLevelActivator_t5143_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9171);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((ActivationServices_t5141_StaticFields*)ActivationServices_t5141_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ConstructionLevelActivator_t5143 * L_1 = (ConstructionLevelActivator_t5143 *)il2cpp_codegen_object_new (ConstructionLevelActivator_t5143_il2cpp_TypeInfo_var);
		ConstructionLevelActivator__ctor_m22730(L_1, /*hidden argument*/NULL);
		((ActivationServices_t5141_StaticFields*)ActivationServices_t5141_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0 = L_1;
	}

IL_0011:
	{
		Object_t * L_2 = ((ActivationServices_t5141_StaticFields*)ActivationServices_t5141_il2cpp_TypeInfo_var->static_fields)->____constructionActivator_0;
		return L_2;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
extern TypeInfo* IContextAttribute_t5447_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* UrlAttribute_t5146_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" Object_t * ActivationServices_CreateProxyFromAttributes_m22726 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t707* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IContextAttribute_t5447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9172);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		UrlAttribute_t5146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9173);
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	Object_t * V_1 = {0};
	ObjectU5BU5D_t707* V_2 = {0};
	int32_t V_3 = 0;
	ActivatedClientTypeEntry_t5120 * V_4 = {0};
	{
		V_0 = (String_t*)NULL;
		ObjectU5BU5D_t707* L_0 = ___activationAttributes;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0037;
	}

IL_0008:
	{
		ObjectU5BU5D_t707* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_1 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
		Object_t * L_4 = V_1;
		if (((Object_t *)IsInst(L_4, IContextAttribute_t5447_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		RemotingException_t5130 * L_5 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_5, (String_t*) &_stringLiteral5908, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001f:
	{
		Object_t * L_6 = V_1;
		if (!((UrlAttribute_t5146 *)IsInst(L_6, UrlAttribute_t5146_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		Object_t * L_7 = V_1;
		NullCheck(((UrlAttribute_t5146 *)Castclass(L_7, UrlAttribute_t5146_il2cpp_TypeInfo_var)));
		String_t* L_8 = UrlAttribute_get_UrlValue_m22733(((UrlAttribute_t5146 *)Castclass(L_7, UrlAttribute_t5146_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
		ObjectU5BU5D_t707* L_11 = V_2;
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
		ObjectU5BU5D_t707* L_15 = ___activationAttributes;
		Object_t * L_16 = RemotingServices_CreateClientProxy_m12291(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0049:
	{
		Type_t * L_17 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		ActivatedClientTypeEntry_t5120 * L_18 = RemotingConfiguration_IsRemotelyActivatedClientType_m22675(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ActivatedClientTypeEntry_t5120 * L_19 = V_4;
		if (!L_19)
		{
			goto IL_005e;
		}
	}
	{
		ActivatedClientTypeEntry_t5120 * L_20 = V_4;
		ObjectU5BU5D_t707* L_21 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_22 = RemotingServices_CreateClientProxy_m22695(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
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
		ObjectU5BU5D_t707* L_26 = ___activationAttributes;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_27 = RemotingServices_CreateClientProxyForContextBound_m22696(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}

IL_006e:
	{
		return NULL;
	}
}
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
extern TypeInfo* ConstructionCall_t5167_il2cpp_TypeInfo_var;
extern TypeInfo* AppDomainLevelActivator_t5142_il2cpp_TypeInfo_var;
extern TypeInfo* ContextLevelActivator_t5144_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IContextAttribute_t5447_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ConstructionCall_t5167 * ActivationServices_CreateConstructionCall_m22727 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t707* ___activationAttributes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t5167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9174);
		AppDomainLevelActivator_t5142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9175);
		ContextLevelActivator_t5144_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9176);
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IContextAttribute_t5447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9172);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCall_t5167 * V_0 = {0};
	Object_t * V_1 = {0};
	ArrayList_t723 * V_2 = {0};
	bool V_3 = false;
	Context_t5133 * V_4 = {0};
	Object_t * V_5 = {0};
	Object_t * V_6 = {0};
	ObjectU5BU5D_t707* V_7 = {0};
	Object_t * V_8 = {0};
	ObjectU5BU5D_t707* V_9 = {0};
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
		ConstructionCall_t5167 * L_1 = (ConstructionCall_t5167 *)il2cpp_codegen_object_new (ConstructionCall_t5167_il2cpp_TypeInfo_var);
		ConstructionCall__ctor_m22823(L_1, L_0, /*hidden argument*/NULL);
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
		ConstructionCall_t5167 * L_4 = V_0;
		String_t* L_5 = ___activationUrl;
		Object_t * L_6 = ActivationServices_get_ConstructionActivator_m22725(NULL /*static, unused*/, /*hidden argument*/NULL);
		AppDomainLevelActivator_t5142 * L_7 = (AppDomainLevelActivator_t5142 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t5142_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m22729(L_7, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Object_t * >::Invoke(25 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_4, L_7);
		ConstructionCall_t5167 * L_8 = V_0;
		NullCheck(L_8);
		ConstructionCall_set_IsContextOk_m22826(L_8, 0, /*hidden argument*/NULL);
		ConstructionCall_t5167 * L_9 = V_0;
		return L_9;
	}

IL_0029:
	{
		Object_t * L_10 = ActivationServices_get_ConstructionActivator_m22725(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_10;
		Object_t * L_11 = V_1;
		ContextLevelActivator_t5144 * L_12 = (ContextLevelActivator_t5144 *)il2cpp_codegen_object_new (ContextLevelActivator_t5144_il2cpp_TypeInfo_var);
		ContextLevelActivator__ctor_m22731(L_12, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		ArrayList_t723 * L_13 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_13, /*hidden argument*/NULL);
		V_2 = L_13;
		ObjectU5BU5D_t707* L_14 = ___activationAttributes;
		if (!L_14)
		{
			goto IL_0046;
		}
	}
	{
		ArrayList_t723 * L_15 = V_2;
		ObjectU5BU5D_t707* L_16 = ___activationAttributes;
		NullCheck(L_15);
		VirtActionInvoker1< Object_t * >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_15, (Object_t *)(Object_t *)L_16);
	}

IL_0046:
	{
		String_t* L_17 = ___activationUrl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		String_t* L_18 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_19 = String_op_Equality_m456(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		Context_t5133 * L_20 = Thread_get_CurrentContext_m24407(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		ArrayList_t723 * L_22 = V_2;
		NullCheck(L_22);
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_22);
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
			V_5 = ((Object_t *)Castclass(L_25, IContextAttribute_t5447_il2cpp_TypeInfo_var));
			Object_t * L_26 = V_5;
			Context_t5133 * L_27 = V_4;
			ConstructionCall_t5167 * L_28 = V_0;
			NullCheck(L_26);
			bool L_29 = (bool)InterfaceFuncInvoker2< bool, Context_t5133 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t5447_il2cpp_TypeInfo_var, L_26, L_27, L_28);
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
		ObjectU5BU5D_t707* L_36 = (ObjectU5BU5D_t707*)VirtFuncInvoker1< ObjectU5BU5D_t707*, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_35, 1);
		V_7 = L_36;
		ObjectU5BU5D_t707* L_37 = V_7;
		V_9 = L_37;
		V_10 = 0;
		goto IL_00ec;
	}

IL_00b7:
	{
		ObjectU5BU5D_t707* L_38 = V_9;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		V_8 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_38, L_40));
		Object_t * L_41 = V_8;
		if (!((Object_t *)IsInst(L_41, IContextAttribute_t5447_il2cpp_TypeInfo_var)))
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
		Context_t5133 * L_44 = V_4;
		ConstructionCall_t5167 * L_45 = V_0;
		NullCheck(((Object_t *)Castclass(L_43, IContextAttribute_t5447_il2cpp_TypeInfo_var)));
		bool L_46 = (bool)InterfaceFuncInvoker2< bool, Context_t5133 *, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Remoting.Contexts.IContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t5447_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IContextAttribute_t5447_il2cpp_TypeInfo_var)), L_44, L_45);
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
		ArrayList_t723 * L_47 = V_2;
		Object_t * L_48 = V_8;
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_48);
	}

IL_00e6:
	{
		int32_t L_49 = V_10;
		V_10 = ((int32_t)((int32_t)L_49+(int32_t)1));
	}

IL_00ec:
	{
		int32_t L_50 = V_10;
		ObjectU5BU5D_t707* L_51 = V_9;
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
		ConstructionCall_t5167 * L_53 = V_0;
		ArrayList_t723 * L_54 = V_2;
		NullCheck(L_54);
		ObjectU5BU5D_t707* L_55 = (ObjectU5BU5D_t707*)VirtFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(47 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_54);
		NullCheck(L_53);
		ConstructionCall_SetActivationAttributes_m22832(L_53, L_55, /*hidden argument*/NULL);
		ArrayList_t723 * L_56 = V_2;
		NullCheck(L_56);
		Object_t * L_57 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_56);
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
			V_11 = ((Object_t *)Castclass(L_59, IContextAttribute_t5447_il2cpp_TypeInfo_var));
			Object_t * L_60 = V_11;
			ConstructionCall_t5167 * L_61 = V_0;
			NullCheck(L_60);
			InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Contexts.IContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage) */, IContextAttribute_t5447_il2cpp_TypeInfo_var, L_60, L_61);
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
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		String_t* L_68 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
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
		AppDomainLevelActivator_t5142 * L_72 = (AppDomainLevelActivator_t5142 *)il2cpp_codegen_object_new (AppDomainLevelActivator_t5142_il2cpp_TypeInfo_var);
		AppDomainLevelActivator__ctor_m22729(L_72, L_70, L_71, /*hidden argument*/NULL);
		V_1 = L_72;
	}

IL_0159:
	{
		ConstructionCall_t5167 * L_73 = V_0;
		Object_t * L_74 = V_1;
		NullCheck(L_73);
		VirtActionInvoker1< Object_t * >::Invoke(25 /* System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, L_73, L_74);
		ConstructionCall_t5167 * L_75 = V_0;
		bool L_76 = V_3;
		NullCheck(L_75);
		ConstructionCall_set_IsContextOk_m22826(L_75, L_76, /*hidden argument*/NULL);
		ConstructionCall_t5167 * L_77 = V_0;
		return L_77;
	}
}
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
extern "C" Object_t * ActivationServices_AllocateUninitializedClassInstance_m22728 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	typedef Object_t * (*ActivationServices_AllocateUninitializedClassInstance_m22728_ftn) (Type_t *);
	static ActivationServices_AllocateUninitializedClassInstance_m22728_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ActivationServices_AllocateUninitializedClassInstance_m22728_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)");
	return _il2cpp_icall_func(___type);
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Activation.AppDomainLevelActivator::.ctor(System.String,System.Runtime.Remoting.Activation.IActivator)
extern "C" void AppDomainLevelActivator__ctor_m22729 (AppDomainLevelActivator_t5142 * __this, String_t* ___activationUrl, Object_t * ___next, const MethodInfo* method)
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
extern "C" void ConstructionLevelActivator__ctor_m22730 (ConstructionLevelActivator_t5143 * __this, const MethodInfo* method)
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
extern "C" void ContextLevelActivator__ctor_m22731 (ContextLevelActivator_t5144 * __this, Object_t * ___next, const MethodInfo* method)
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

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Double
#include "mscorlib_System_Double.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpanMethodDeclarations.h"


// System.Object System.Runtime.Remoting.Activation.RemoteActivator::InitializeLifetimeService()
extern TypeInfo* ILease_t5156_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern "C" Object_t * RemoteActivator_InitializeLifetimeService_m22732 (RemoteActivator_t5145 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILease_t5156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9153);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2532);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = MarshalByRefObject_InitializeLifetimeService_m11707(__this, /*hidden argument*/NULL);
		V_0 = ((Object_t *)Castclass(L_0, ILease_t5156_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.ILease::get_CurrentState() */, ILease_t5156_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		Object_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_4 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (30.0), /*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< TimeSpan_t334  >::Invoke(1 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_InitialLeaseTime(System.TimeSpan) */, ILease_t5156_il2cpp_TypeInfo_var, L_3, L_4);
		Object_t * L_5 = V_0;
		TimeSpan_t334  L_6 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (1.0), /*hidden argument*/NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< TimeSpan_t334  >::Invoke(3 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_SponsorshipTimeout(System.TimeSpan) */, ILease_t5156_il2cpp_TypeInfo_var, L_5, L_6);
		Object_t * L_7 = V_0;
		TimeSpan_t334  L_8 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< TimeSpan_t334  >::Invoke(2 /* System.Void System.Runtime.Remoting.Lifetime.ILease::set_RenewOnCallTime(System.TimeSpan) */, ILease_t5156_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_0051:
	{
		Object_t * L_9 = V_0;
		return L_9;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.String System.Runtime.Remoting.Activation.UrlAttribute::get_UrlValue()
extern "C" String_t* UrlAttribute_get_UrlValue_m22733 (UrlAttribute_t5146 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::Equals(System.Object)
extern TypeInfo* UrlAttribute_t5146_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool UrlAttribute_Equals_m22734 (UrlAttribute_t5146 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UrlAttribute_t5146_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9173);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___o;
		if (((UrlAttribute_t5146 *)IsInst(L_0, UrlAttribute_t5146_il2cpp_TypeInfo_var)))
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
		NullCheck(((UrlAttribute_t5146 *)Castclass(L_1, UrlAttribute_t5146_il2cpp_TypeInfo_var)));
		String_t* L_2 = UrlAttribute_get_UrlValue_m22733(((UrlAttribute_t5146 *)Castclass(L_1, UrlAttribute_t5146_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_3 = (__this->___url_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m456(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 System.Runtime.Remoting.Activation.UrlAttribute::GetHashCode()
extern "C" int32_t UrlAttribute_GetHashCode_m22735 (UrlAttribute_t5146 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___url_1);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.String::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Activation.UrlAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void UrlAttribute_GetPropertiesForNewContext_m22736 (UrlAttribute_t5146 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Activation.UrlAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool UrlAttribute_IsContextOK_m22737 (UrlAttribute_t5146 * __this, Context_t5133 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.ChannelInfo::.ctor()
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern "C" void ChannelInfo__ctor_m22738 (ChannelInfo_t5148 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t707* L_0 = ChannelServices_GetCurrentChannelInfo_m22743(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___channelData_0 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.ChannelInfo::get_ChannelData()
extern "C" ObjectU5BU5D_t707* ChannelInfo_get_ChannelData_m22739 (ChannelInfo_t5148 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->___channelData_0);
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


// System.Void System.Runtime.Remoting.Channels.ChannelServices::.cctor()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* CrossContextChannel_t5149_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern "C" void ChannelServices__cctor_m22740 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		CrossContextChannel_t5149_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9177);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0 = L_0;
		ArrayList_t723 * L_1 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_1, /*hidden argument*/NULL);
		((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___delayedClientChannels_1 = L_1;
		CrossContextChannel_t5149 * L_2 = (CrossContextChannel_t5149 *)il2cpp_codegen_object_new (CrossContextChannel_t5149_il2cpp_TypeInfo_var);
		CrossContextChannel__ctor_m22767(L_2, /*hidden argument*/NULL);
		((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->____crossContextSink_2 = L_2;
		((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3 = (String_t*) &_stringLiteral5909;
		StringU5BU5D_t75* L_3 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 2));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5910);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 0)) = (String_t*)(String_t*) &_stringLiteral5910;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5911);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 1)) = (String_t*)(String_t*) &_stringLiteral5911;
		((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4 = (Object_t *)L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel)
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m22741 (Object_t * __this /* static, unused */, Object_t * ___chnl, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___chnl;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m22742(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.ChannelServices::RegisterChannel(System.Runtime.Remoting.Channels.IChannel,System.Boolean)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ISecurableChannel_t5448_il2cpp_TypeInfo_var;
extern TypeInfo* IChannel_t5435_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t5449_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t711_il2cpp_TypeInfo_var;
extern "C" void ChannelServices_RegisterChannel_m22742 (Object_t * __this /* static, unused */, Object_t * ___chnl, bool ___ensureSecurity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ISecurableChannel_t5448_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9178);
		IChannel_t5435_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9179);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		IChannelReceiver_t5449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9180);
		IList_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
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
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5912, /*hidden argument*/NULL);
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
		V_1 = ((Object_t *)IsInst(L_3, ISecurableChannel_t5448_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_5 = ___chnl;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t5435_il2cpp_TypeInfo_var, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m4326(NULL /*static, unused*/, (String_t*) &_stringLiteral5913, L_6, /*hidden argument*/NULL);
		RemotingException_t5130 * L_8 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0031:
	{
		Object_t * L_9 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean) */, ISecurableChannel_t5448_il2cpp_TypeInfo_var, L_9, 1);
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_10 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_10);
		Object_t * L_11 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_10);
		V_0 = L_11;
		Object_t * L_12 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
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
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_13 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_14 = V_3;
			NullCheck(L_13);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_13, L_14);
			V_4 = ((Object_t *)Castclass(L_15, IChannel_t5435_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			String_t* L_17 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t5435_il2cpp_TypeInfo_var, L_16);
			Object_t * L_18 = ___chnl;
			NullCheck(L_18);
			String_t* L_19 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t5435_il2cpp_TypeInfo_var, L_18);
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
			String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t5435_il2cpp_TypeInfo_var, L_21);
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
			String_t* L_26 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Channels.IChannel::get_ChannelName() */, IChannel_t5435_il2cpp_TypeInfo_var, L_25);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_27 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5914, L_26, (String_t*) &_stringLiteral5915, /*hidden argument*/NULL);
			RemotingException_t5130 * L_28 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
			RemotingException__ctor_m22677(L_28, L_27, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_28);
		}

IL_00a3:
		{
			Object_t * L_29 = V_4;
			NullCheck(L_29);
			int32_t L_30 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t5435_il2cpp_TypeInfo_var, L_29);
			Object_t * L_31 = ___chnl;
			NullCheck(L_31);
			int32_t L_32 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Runtime.Remoting.Channels.IChannel::get_ChannelPriority() */, IChannel_t5435_il2cpp_TypeInfo_var, L_31);
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
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_37 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_37);
			int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
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
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_40 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			int32_t L_41 = V_2;
			Object_t * L_42 = ___chnl;
			NullCheck(L_40);
			VirtActionInvoker2< int32_t, Object_t * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_40, L_41, L_42);
			goto IL_00e7;
		}

IL_00db:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_43 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			Object_t * L_44 = ___chnl;
			NullCheck(L_43);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_43, L_44);
		}

IL_00e7:
		{
			Object_t * L_45 = ___chnl;
			V_5 = ((Object_t *)IsInst(L_45, IChannelReceiver_t5449_il2cpp_TypeInfo_var));
			Object_t * L_46 = V_5;
			if (!L_46)
			{
				goto IL_0112;
			}
		}

IL_00f3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			Object_t * L_47 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___oldStartModeTypes_4;
			Object_t * L_48 = ___chnl;
			NullCheck(L_48);
			Type_t * L_49 = Object_GetType_m4276(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Type::ToString() */, L_49);
			NullCheck(L_47);
			bool L_51 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t711_il2cpp_TypeInfo_var, L_47, L_50);
			if (!L_51)
			{
				goto IL_0112;
			}
		}

IL_010a:
		{
			Object_t * L_52 = V_5;
			NullCheck(L_52);
			InterfaceActionInvoker1< Object_t * >::Invoke(1 /* System.Void System.Runtime.Remoting.Channels.IChannelReceiver::StartListening(System.Object) */, IChannelReceiver_t5449_il2cpp_TypeInfo_var, L_52, NULL);
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
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
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IChannelReceiver_t5449_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t707* ChannelServices_GetCurrentChannelInfo_m22743 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IChannelReceiver_t5449_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9180);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
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
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_1 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_1);
		V_1 = L_2;
		Object_t * L_3 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_4 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___registeredChannels_0;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
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
				V_4 = ((Object_t *)IsInst(L_8, IChannelReceiver_t5449_il2cpp_TypeInfo_var));
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
				Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Runtime.Remoting.Channels.IChannelReceiver::get_ChannelData() */, IChannelReceiver_t5449_il2cpp_TypeInfo_var, L_10);
				V_5 = L_11;
				Object_t * L_12 = V_5;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0044:
			{
				ArrayList_t723 * L_13 = V_0;
				Object_t * L_14 = V_5;
				NullCheck(L_13);
				VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_13, L_14);
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0075:
	{
		ArrayList_t723 * L_21 = V_0;
		NullCheck(L_21);
		ObjectU5BU5D_t707* L_22 = (ObjectU5BU5D_t707*)VirtFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(47 /* System.Object[] System.Collections.ArrayList::ToArray() */, L_21);
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
extern TypeInfo* RemotingConfiguration_t5129_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainData__ctor_m22744 (CrossAppDomainData_t5151 * __this, int32_t ___domainId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		RemotingConfiguration_t5129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9144);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		int32_t L_0 = 0;
		Object_t * L_1 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_0);
		__this->____ContextID_0 = L_1;
		int32_t L_2 = ___domainId;
		__this->____DomainID_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingConfiguration_t5129_il2cpp_TypeInfo_var);
		String_t* L_3 = RemotingConfiguration_get_ProcessId_m22674(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____processGuid_2 = L_3;
		return;
	}
}
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
#include "mscorlib_System_Runtime_Remoting_Channels_CrossAppDomainChan.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.ctor()
extern "C" void CrossAppDomainChannel__ctor_m22745 (CrossAppDomainChannel_t5152 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::.cctor()
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel__cctor_m22746 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9165);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_0, /*hidden argument*/NULL);
		((CrossAppDomainChannel_t5152_StaticFields*)CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var->static_fields)->___s_lock_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::RegisterCrossAppDomainChannel()
extern TypeInfo* CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var;
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainChannel_RegisterCrossAppDomainChannel_m22747 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9165);
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	CrossAppDomainChannel_t5152 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((CrossAppDomainChannel_t5152_StaticFields*)CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var->static_fields)->___s_lock_0;
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		CrossAppDomainChannel_t5152 * L_2 = (CrossAppDomainChannel_t5152 *)il2cpp_codegen_object_new (CrossAppDomainChannel_t5152_il2cpp_TypeInfo_var);
		CrossAppDomainChannel__ctor_m22745(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		CrossAppDomainChannel_t5152 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		ChannelServices_RegisterChannel_m22741(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
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
extern "C" String_t* CrossAppDomainChannel_get_ChannelName_m22748 (CrossAppDomainChannel_t5152 * __this, const MethodInfo* method)
{
	{
		return (String_t*) &_stringLiteral5916;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelPriority()
extern "C" int32_t CrossAppDomainChannel_get_ChannelPriority_m22749 (CrossAppDomainChannel_t5152 * __this, const MethodInfo* method)
{
	{
		return ((int32_t)100);
	}
}
// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::get_ChannelData()
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainData_t5151_il2cpp_TypeInfo_var;
extern "C" Object_t * CrossAppDomainChannel_get_ChannelData_m22750 (CrossAppDomainChannel_t5152 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		CrossAppDomainData_t5151_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9181);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		int32_t L_0 = Thread_GetDomainID_m24410(NULL /*static, unused*/, /*hidden argument*/NULL);
		CrossAppDomainData_t5151 * L_1 = (CrossAppDomainData_t5151 *)il2cpp_codegen_object_new (CrossAppDomainData_t5151_il2cpp_TypeInfo_var);
		CrossAppDomainData__ctor_m22744(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Channels.CrossAppDomainChannel::StartListening(System.Object)
extern "C" void CrossAppDomainChannel_StartListening_m22751 (CrossAppDomainChannel_t5152 * __this, Object_t * ___data, const MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Channels.CrossAppDomainSink::.cctor()
extern const Il2CppType* CrossAppDomainSink_t5153_0_0_0_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* CrossAppDomainSink_t5153_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void CrossAppDomainSink__cctor_m22752 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CrossAppDomainSink_t5153_0_0_0_var = il2cpp_codegen_type_from_index(9161);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		CrossAppDomainSink_t5153_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9161);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		((CrossAppDomainSink_t5153_StaticFields*)CrossAppDomainSink_t5153_il2cpp_TypeInfo_var->static_fields)->___s_sinks_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(CrossAppDomainSink_t5153_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		MethodInfo_t * L_2 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(50 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags) */, L_1, (String_t*) &_stringLiteral5917, ((int32_t)40));
		((CrossAppDomainSink_t5153_StaticFields*)CrossAppDomainSink_t5153_il2cpp_TypeInfo_var->static_fields)->___processMessageMethod_1 = L_2;
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::get_TargetDomainId()
extern "C" int32_t CrossAppDomainSink_get_TargetDomainId_m22753 (CrossAppDomainSink_t5153 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____domainID_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "mscorlib_System_Runtime_Remoting_Messaging_EnvoyTerminatorSiMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.Context::.cctor()
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* Context_t5133_il2cpp_TypeInfo_var;
extern "C" void Context__cctor_m22754 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Context_t5133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9162);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		((Context_t5133_StaticFields*)Context_t5133_il2cpp_TypeInfo_var->static_fields)->___namedSlots_2 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.Context::Finalize()
extern "C" void Context_Finalize_m22755 (Context_t5133 * __this, const MethodInfo* method)
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
extern "C" Context_t5133 * Context_get_DefaultContext_m22756 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Context_t5133 * L_0 = AppDomain_InternalGetDefaultContext_m20022(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.Context::get_IsDefaultContext()
extern "C" bool Context_get_IsDefaultContext_m22757 (Context_t5133 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___context_id_0);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t5436_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_GetProperty_m22758 (Context_t5133 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IContextProperty_t5436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9182);
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
		ArrayList_t723 * L_0 = (__this->___context_properties_1);
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
		ArrayList_t723 * L_1 = (__this->___context_properties_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
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
			V_0 = ((Object_t *)Castclass(L_4, IContextProperty_t5436_il2cpp_TypeInfo_var));
			Object_t * L_5 = V_0;
			NullCheck(L_5);
			String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.Contexts.IContextProperty::get_Name() */, IContextProperty_t5436_il2cpp_TypeInfo_var, L_5);
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
extern "C" String_t* Context_ToString_m22759 (Context_t5133 * __this, const MethodInfo* method)
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
		String_t* L_3 = String_Concat_m409(NULL /*static, unused*/, (String_t*) &_stringLiteral5918, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::CreateEnvoySink(System.MarshalByRefObject)
extern TypeInfo* EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* IContextProperty_t5436_il2cpp_TypeInfo_var;
extern TypeInfo* IContributeEnvoySink_t5450_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * Context_CreateEnvoySink_m22760 (Context_t5133 * __this, MarshalByRefObject_t4299 * ___serverObject, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9168);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		IContextProperty_t5436_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9182);
		IContributeEnvoySink_t5450_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9183);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink_t5171 * L_0 = ((EnvoyTerminatorSink_t5171_StaticFields*)EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var->static_fields)->___Instance_0;
		V_0 = L_0;
		ArrayList_t723 * L_1 = (__this->___context_properties_1);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		ArrayList_t723 * L_2 = (__this->___context_properties_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001c:
		{
			Object_t * L_4 = V_2;
			NullCheck(L_4);
			Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_4);
			V_1 = ((Object_t *)Castclass(L_5, IContextProperty_t5436_il2cpp_TypeInfo_var));
			Object_t * L_6 = V_1;
			V_3 = ((Object_t *)IsInst(L_6, IContributeEnvoySink_t5450_il2cpp_TypeInfo_var));
			Object_t * L_7 = V_3;
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_0032:
		{
			Object_t * L_8 = V_3;
			MarshalByRefObject_t4299 * L_9 = ___serverObject;
			Object_t * L_10 = V_0;
			NullCheck(L_8);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker2< Object_t *, MarshalByRefObject_t4299 *, Object_t * >::Invoke(0 /* System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.IContributeEnvoySink::GetEnvoySink(System.MarshalByRefObject,System.Runtime.Remoting.Messaging.IMessageSink) */, IContributeEnvoySink_t5450_il2cpp_TypeInfo_var, L_8, L_9, L_10);
			V_0 = L_11;
		}

IL_003b:
		{
			Object_t * L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x5A, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			Object_t * L_14 = V_2;
			V_4 = ((Object_t *)IsInst(L_14, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_15 = V_4;
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_0051:
		{
			IL2CPP_END_FINALLY(69)
		}

IL_0052:
		{
			Object_t * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_005a:
	{
		Object_t * L_17 = V_0;
		return L_17;
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
extern "C" void ContextAttribute__ctor_m22761 (ContextAttribute_t5147 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		Attribute__ctor_m4277(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		__this->___AttributeName_0 = L_0;
		return;
	}
}
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m22762 (ContextAttribute_t5147 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___AttributeName_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern TypeInfo* ContextAttribute_t5147_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_Equals_m22763 (ContextAttribute_t5147 * __this, Object_t * ___o, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ContextAttribute_t5147_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9184);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	ContextAttribute_t5147 * V_0 = {0};
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
		if (((ContextAttribute_t5147 *)IsInst(L_1, ContextAttribute_t5147_il2cpp_TypeInfo_var)))
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
		V_0 = ((ContextAttribute_t5147 *)Castclass(L_2, ContextAttribute_t5147_il2cpp_TypeInfo_var));
		ContextAttribute_t5147 * L_3 = V_0;
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
extern "C" int32_t ContextAttribute_GetHashCode_m22764 (ContextAttribute_t5147 * __this, const MethodInfo* method)
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
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t5434_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t711_il2cpp_TypeInfo_var;
extern "C" void ContextAttribute_GetPropertiesForNewContext_m22765 (ContextAttribute_t5147 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IConstructionCallMessage_t5434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9185);
		IList_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
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
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___ctorMsg;
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Object_t * L_4 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t711_il2cpp_TypeInfo_var, L_4, __this);
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t5434_il2cpp_TypeInfo_var;
extern "C" bool ContextAttribute_IsContextOK_m22766 (ContextAttribute_t5147 * __this, Context_t5133 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		IConstructionCallMessage_t5434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9185);
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
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5919, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Context_t5133 * L_2 = ___ctx;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t795 * L_3 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_3, (String_t*) &_stringLiteral5920, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Object_t * L_4 = ___ctorMsg;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, L_4);
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
		Context_t5133 * L_7 = ___ctx;
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
		if ((((Object_t*)(ContextAttribute_t5147 *)__this) == ((Object_t*)(Object_t *)L_11)))
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
extern "C" void CrossContextChannel__ctor_m22767 (CrossContextChannel_t5149 * __this, const MethodInfo* method)
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
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
// System.Threading.Mutex
#include "mscorlib_System_Threading_MutexMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor()
extern "C" void SynchronizationAttribute__ctor_m22768 (SynchronizationAttribute_t5155 * __this, const MethodInfo* method)
{
	{
		SynchronizationAttribute__ctor_m22769(__this, 8, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::.ctor(System.Int32,System.Boolean)
extern TypeInfo* Mutex_t5154_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute__ctor_m22769 (SynchronizationAttribute_t5155 * __this, int32_t ___flag, bool ___reEntrant, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Mutex_t5154_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9186);
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Mutex_t5154 * L_0 = (Mutex_t5154 *)il2cpp_codegen_object_new (Mutex_t5154_il2cpp_TypeInfo_var);
		Mutex__ctor_m24392(L_0, 0, /*hidden argument*/NULL);
		__this->____mutex_4 = L_0;
		ContextAttribute__ctor_m22761(__this, (String_t*) &_stringLiteral5921, /*hidden argument*/NULL);
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
		ArgumentException_t736 * L_5 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_5, (String_t*) &_stringLiteral4381, /*hidden argument*/NULL);
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
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_set_Locked_m22770 (SynchronizationAttribute_t5155 * __this, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t5155 * V_0 = {0};
	SynchronizationAttribute_t5155 * V_1 = {0};
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
		Mutex_t5154 * L_1 = (__this->____mutex_4);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		V_0 = __this;
		SynchronizationAttribute_t5155 * L_2 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
			SynchronizationAttribute_ReleaseLock_m22771(__this, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
			Thread_t1489 * L_5 = Thread_get_CurrentThread_m7676(NULL /*static, unused*/, /*hidden argument*/NULL);
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
		SynchronizationAttribute_t5155 * L_6 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
		SynchronizationAttribute_t5155 * L_7 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
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
			Mutex_t5154 * L_9 = (__this->____mutex_4);
			NullCheck(L_9);
			Mutex_ReleaseMutex_m24395(L_9, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1489 *)NULL;
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
			Thread_t1489 * L_11 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
			Thread_t1489 * L_12 = Thread_get_CurrentThread_m7676(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((((Object_t*)(Thread_t1489 *)L_11) == ((Object_t*)(Thread_t1489 *)L_12)))
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
		SynchronizationAttribute_t5155 * L_13 = V_1;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
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
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ReleaseLock_m22771 (SynchronizationAttribute_t5155 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t5155 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizationAttribute_t5155 * L_0 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
			Thread_t1489 * L_2 = (__this->____ownerThread_5);
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
			Thread_t1489 * L_3 = Thread_get_CurrentThread_m7676(NULL /*static, unused*/, /*hidden argument*/NULL);
			if ((!(((Object_t*)(Thread_t1489 *)L_2) == ((Object_t*)(Thread_t1489 *)L_3))))
			{
				goto IL_003e;
			}
		}

IL_001e:
		{
			int32_t L_4 = (__this->____lockCount_3);
			__this->____lockCount_3 = ((int32_t)((int32_t)L_4-(int32_t)1));
			Mutex_t5154 * L_5 = (__this->____mutex_4);
			NullCheck(L_5);
			Mutex_ReleaseMutex_m24395(L_5, /*hidden argument*/NULL);
			__this->____ownerThread_5 = (Thread_t1489 *)NULL;
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
		SynchronizationAttribute_t5155 * L_6 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
extern TypeInfo* IConstructionCallMessage_t5434_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t711_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_GetPropertiesForNewContext_m22772 (SynchronizationAttribute_t5155 * __this, Object_t * ___ctorMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IConstructionCallMessage_t5434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9185);
		IList_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
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
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(4 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t711_il2cpp_TypeInfo_var, L_2, __this);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* SynchronizationAttribute_t5155_il2cpp_TypeInfo_var;
extern "C" bool SynchronizationAttribute_IsContextOK_m22773 (SynchronizationAttribute_t5155 * __this, Context_t5133 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SynchronizationAttribute_t5155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9187);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t5155 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t5133 * L_0 = ___ctx;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_0, (String_t*) &_stringLiteral5921);
		V_0 = ((SynchronizationAttribute_t5155 *)IsInst(L_1, SynchronizationAttribute_t5155_il2cpp_TypeInfo_var));
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
		SynchronizationAttribute_t5155 * L_4 = V_0;
		return ((((Object_t*)(SynchronizationAttribute_t5155 *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0047:
	{
		SynchronizationAttribute_t5155 * L_5 = V_0;
		return ((((int32_t)((((Object_t*)(SynchronizationAttribute_t5155 *)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t5155_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_ExitContext_m22774 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		SynchronizationAttribute_t5155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9187);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t5155 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		Context_t5133 * L_0 = Thread_get_CurrentContext_m24407(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m22757(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		Context_t5133 * L_2 = Thread_get_CurrentContext_m24407(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral5921);
		V_0 = ((SynchronizationAttribute_t5155 *)IsInst(L_3, SynchronizationAttribute_t5155_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t5155 * L_4 = V_0;
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
		SynchronizationAttribute_t5155 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::EnterContext()
extern TypeInfo* Thread_t1489_il2cpp_TypeInfo_var;
extern TypeInfo* SynchronizationAttribute_t5155_il2cpp_TypeInfo_var;
extern "C" void SynchronizationAttribute_EnterContext_m22775 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Thread_t1489_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2611);
		SynchronizationAttribute_t5155_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9187);
		s_Il2CppMethodIntialized = true;
	}
	SynchronizationAttribute_t5155 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		Context_t5133 * L_0 = Thread_get_CurrentContext_m24407(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = Context_get_IsDefaultContext_m22757(L_0, /*hidden argument*/NULL);
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
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t1489_il2cpp_TypeInfo_var);
		Context_t5133 * L_2 = Thread_get_CurrentContext_m24407(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(4 /* System.Runtime.Remoting.Contexts.IContextProperty System.Runtime.Remoting.Contexts.Context::GetProperty(System.String) */, L_2, (String_t*) &_stringLiteral5921);
		V_0 = ((SynchronizationAttribute_t5155 *)IsInst(L_3, SynchronizationAttribute_t5155_il2cpp_TypeInfo_var));
		SynchronizationAttribute_t5155 * L_4 = V_0;
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
		SynchronizationAttribute_t5155 * L_5 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void System.Runtime.Remoting.Contexts.SynchronizationAttribute::set_Locked(System.Boolean) */, L_5, 1);
		return;
	}
}
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDeleg.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "mscorlib_System_Runtime_Remoting_Lifetime_Lease_RenewalDelegMethodDeclarations.h"

// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void RenewalDelegate__ctor_m22776 (RenewalDelegate_t5157 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
extern "C" TimeSpan_t334  RenewalDelegate_Invoke_m22777 (RenewalDelegate_t5157 * __this, Object_t * ___lease, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		RenewalDelegate_Invoke_m22777((RenewalDelegate_t5157 *)__this->___prev_9,___lease, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef TimeSpan_t334  (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___lease, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef TimeSpan_t334  (*FunctionPointerType) (Object_t * __this, Object_t * ___lease, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef TimeSpan_t334  (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___lease,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" TimeSpan_t334  pinvoke_delegate_wrapper_RenewalDelegate_t5157(Il2CppObject* delegate, Object_t * ___lease)
{
	// Marshaling of parameter '___lease' to native representation
	Object_t * ____lease_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Remoting.Lifetime.ILease'."));
}
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
extern "C" Object_t * RenewalDelegate_BeginInvoke_m22778 (RenewalDelegate_t5157 * __this, Object_t * ___lease, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___lease;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
extern "C" TimeSpan_t334  RenewalDelegate_EndInvoke_m22779 (RenewalDelegate_t5157 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(TimeSpan_t334 *)UnBox ((Il2CppCodeGenObject*)__result);
}
#ifndef _MSC_VER
#else
#endif

// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_Queue.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallback.h"
// System.Threading.RegisteredWaitHandle
#include "mscorlib_System_Threading_RegisteredWaitHandle.h"
// System.DateTime
#include "mscorlib_System_DateTimeMethodDeclarations.h"
// System.Collections.Queue
#include "mscorlib_System_Collections_QueueMethodDeclarations.h"
// System.Threading.WaitOrTimerCallback
#include "mscorlib_System_Threading_WaitOrTimerCallbackMethodDeclarations.h"
// System.Threading.ThreadPool
#include "mscorlib_System_Threading_ThreadPoolMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.Lease::.ctor()
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" void Lease__ctor_m22780 (Lease_t5134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		MarshalByRefObject__ctor_m18146(__this, /*hidden argument*/NULL);
		__this->____currentState_2 = 1;
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_0 = LifetimeServices_get_LeaseTime_m22799(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____initialLeaseTime_3 = L_0;
		TimeSpan_t334  L_1 = LifetimeServices_get_RenewOnCallTime_m22800(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____renewOnCallTime_4 = L_1;
		TimeSpan_t334  L_2 = LifetimeServices_get_SponsorshipTimeout_m22801(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->____sponsorshipTimeout_5 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_3 = DateTime_get_Now_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t334  L_4 = (__this->____initialLeaseTime_3);
		DateTime_t287  L_5 = DateTime_op_Addition_m7542(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->____leaseExpireTime_1 = L_5;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime()
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  Lease_get_CurrentLeaseTime_m22781 (Lease_t5134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	{
		DateTime_t287  L_0 = (__this->____leaseExpireTime_1);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_1 = DateTime_get_Now_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t334  L_2 = DateTime_op_Subtraction_m4151(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState()
extern "C" int32_t Lease_get_CurrentState_m22782 (Lease_t5134 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____currentState_2);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Activate()
extern "C" void Lease_Activate_m22783 (Lease_t5134 * __this, const MethodInfo* method)
{
	{
		__this->____currentState_2 = 2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_InitialLeaseTime(System.TimeSpan)
extern TypeInfo* LeaseState_t5159_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern "C" void Lease_set_InitialLeaseTime_m22784 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t5159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9188);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2532);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t5159_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5922, L_3, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
		RemotingException_t5130 * L_5 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t334  L_6 = ___value;
		__this->____initialLeaseTime_3 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_7 = DateTime_get_Now_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t334  L_8 = (__this->____initialLeaseTime_3);
		DateTime_t287  L_9 = DateTime_op_Addition_m7542(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		__this->____leaseExpireTime_1 = L_9;
		TimeSpan_t334  L_10 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_11 = ((TimeSpan_t334_StaticFields*)TimeSpan_t334_il2cpp_TypeInfo_var->static_fields)->___Zero_7;
		bool L_12 = TimeSpan_op_Equality_m15217(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		__this->____currentState_2 = 0;
	}

IL_005a:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_RenewOnCallTime(System.TimeSpan)
extern TypeInfo* LeaseState_t5159_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern "C" void Lease_set_RenewOnCallTime_m22785 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t5159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9188);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t5159_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5923, L_3, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
		RemotingException_t5130 * L_5 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t334  L_6 = ___value;
		__this->____renewOnCallTime_4 = L_6;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::set_SponsorshipTimeout(System.TimeSpan)
extern TypeInfo* LeaseState_t5159_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern "C" void Lease_set_SponsorshipTimeout_m22786 (Lease_t5134 * __this, TimeSpan_t334  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseState_t5159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9188);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1 = (__this->____currentState_2);
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(LeaseState_t5159_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5924, L_3, (String_t*) &_stringLiteral993, /*hidden argument*/NULL);
		RemotingException_t5130 * L_5 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0029:
	{
		TimeSpan_t334  L_6 = ___value;
		__this->____sponsorshipTimeout_5 = L_6;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan)
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  Lease_Renew_m22787 (Lease_t5134 * __this, TimeSpan_t334  ___renewalTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		s_Il2CppMethodIntialized = true;
	}
	DateTime_t287  V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t287_il2cpp_TypeInfo_var);
		DateTime_t287  L_0 = DateTime_get_Now_m4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t334  L_1 = ___renewalTime;
		DateTime_t287  L_2 = DateTime_op_Addition_m7542(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		DateTime_t287  L_3 = V_0;
		DateTime_t287  L_4 = (__this->____leaseExpireTime_1);
		bool L_5 = DateTime_op_GreaterThan_m11580(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		DateTime_t287  L_6 = V_0;
		__this->____leaseExpireTime_1 = L_6;
	}

IL_0021:
	{
		TimeSpan_t334  L_7 = (TimeSpan_t334 )VirtFuncInvoker0< TimeSpan_t334  >::Invoke(10 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime() */, __this);
		return L_7;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor)
extern "C" void Lease_Unregister_m22788 (Lease_t5134 * __this, Object_t * ___obj, const MethodInfo* method)
{
	Lease_t5134 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		Lease_t5134 * L_0 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ArrayList_t723 * L_1 = (__this->____sponsors_6);
			if (L_1)
			{
				goto IL_0012;
			}
		}

IL_0010:
		{
			IL2CPP_LEAVE(0x53, FINALLY_004c);
		}

IL_0012:
		{
			V_1 = 0;
			goto IL_003c;
		}

IL_0016:
		{
			ArrayList_t723 * L_2 = (__this->____sponsors_6);
			int32_t L_3 = V_1;
			NullCheck(L_2);
			Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
			Object_t * L_5 = ___obj;
			bool L_6 = Object_ReferenceEquals_m405(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0038;
			}
		}

IL_002a:
		{
			ArrayList_t723 * L_7 = (__this->____sponsors_6);
			int32_t L_8 = V_1;
			NullCheck(L_7);
			VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_7, L_8);
			goto IL_004a;
		}

IL_0038:
		{
			int32_t L_9 = V_1;
			V_1 = ((int32_t)((int32_t)L_9+(int32_t)1));
		}

IL_003c:
		{
			int32_t L_10 = V_1;
			ArrayList_t723 * L_11 = (__this->____sponsors_6);
			NullCheck(L_11);
			int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
			if ((((int32_t)L_10) < ((int32_t)L_12)))
			{
				goto IL_0016;
			}
		}

IL_004a:
		{
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
		Lease_t5134 * L_13 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
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
// System.Void System.Runtime.Remoting.Lifetime.Lease::UpdateState()
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern TypeInfo* Queue_t4421_il2cpp_TypeInfo_var;
extern "C" void Lease_UpdateState_m22789 (Lease_t5134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2532);
		Queue_t4421_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7866);
		s_Il2CppMethodIntialized = true;
	}
	Lease_t5134 * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = (__this->____currentState_2);
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		TimeSpan_t334  L_1 = (TimeSpan_t334 )VirtFuncInvoker0< TimeSpan_t334  >::Invoke(10 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::get_CurrentLeaseTime() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_2 = ((TimeSpan_t334_StaticFields*)TimeSpan_t334_il2cpp_TypeInfo_var->static_fields)->___Zero_7;
		bool L_3 = TimeSpan_op_GreaterThan_m15214(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ArrayList_t723 * L_4 = (__this->____sponsors_6);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		__this->____currentState_2 = 3;
		V_0 = __this;
		Lease_t5134 * L_5 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		ArrayList_t723 * L_6 = (__this->____sponsors_6);
		Queue_t4421 * L_7 = (Queue_t4421 *)il2cpp_codegen_object_new (Queue_t4421_il2cpp_TypeInfo_var);
		Queue__ctor_m21162(L_7, L_6, /*hidden argument*/NULL);
		__this->____renewingSponsors_7 = L_7;
		IL2CPP_LEAVE(0x4E, FINALLY_0047);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Lease_t5134 * L_8 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_004e:
	{
		Lease_CheckNextSponsor_m22790(__this, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0056:
	{
		__this->____currentState_2 = 4;
	}

IL_005d:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::CheckNextSponsor()
extern TypeInfo* ISponsor_t5437_il2cpp_TypeInfo_var;
extern TypeInfo* RenewalDelegate_t5157_il2cpp_TypeInfo_var;
extern TypeInfo* IAsyncResult_t385_il2cpp_TypeInfo_var;
extern TypeInfo* WaitOrTimerCallback_t5388_il2cpp_TypeInfo_var;
extern const MethodInfo* Lease_ProcessSponsorResponse_m22791_MethodInfo_var;
extern "C" void Lease_CheckNextSponsor_m22790 (Lease_t5134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISponsor_t5437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9189);
		RenewalDelegate_t5157_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9190);
		IAsyncResult_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		WaitOrTimerCallback_t5388_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9191);
		Lease_ProcessSponsorResponse_m22791_MethodInfo_var = il2cpp_codegen_method_info_from_index(1643);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Object_t * V_1 = {0};
	{
		Queue_t4421 * L_0 = (__this->____renewingSponsors_7);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		__this->____currentState_2 = 4;
		__this->____renewingSponsors_7 = (Queue_t4421 *)NULL;
		return;
	}

IL_001c:
	{
		Queue_t4421 * L_2 = (__this->____renewingSponsors_7);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(19 /* System.Object System.Collections.Queue::Peek() */, L_2);
		V_0 = ((Object_t *)Castclass(L_3, ISponsor_t5437_il2cpp_TypeInfo_var));
		Object_t * L_4 = V_0;
		Object_t * L_5 = L_4;
		IntPtr_t L_6 = { (void*)GetInterfaceMethodInfo(L_5, 0, ISponsor_t5437_il2cpp_TypeInfo_var) };
		RenewalDelegate_t5157 * L_7 = (RenewalDelegate_t5157 *)il2cpp_codegen_object_new (RenewalDelegate_t5157_il2cpp_TypeInfo_var);
		RenewalDelegate__ctor_m22776(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->____renewalDelegate_8 = L_7;
		RenewalDelegate_t5157 * L_8 = (__this->____renewalDelegate_8);
		NullCheck(L_8);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t386 *, Object_t * >::Invoke(13 /* System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object) */, L_8, __this, (AsyncCallback_t386 *)NULL, NULL);
		V_1 = L_9;
		Object_t * L_10 = V_1;
		NullCheck(L_10);
		WaitHandle_t3263 * L_11 = (WaitHandle_t3263 *)InterfaceFuncInvoker0< WaitHandle_t3263 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t385_il2cpp_TypeInfo_var, L_10);
		IntPtr_t L_12 = { (void*)Lease_ProcessSponsorResponse_m22791_MethodInfo_var };
		WaitOrTimerCallback_t5388 * L_13 = (WaitOrTimerCallback_t5388 *)il2cpp_codegen_object_new (WaitOrTimerCallback_t5388_il2cpp_TypeInfo_var);
		WaitOrTimerCallback__ctor_m24531(L_13, __this, L_12, /*hidden argument*/NULL);
		Object_t * L_14 = V_1;
		TimeSpan_t334  L_15 = (__this->____sponsorshipTimeout_5);
		ThreadPool_RegisterWaitForSingleObject_m24442(NULL /*static, unused*/, L_11, L_13, L_14, L_15, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.Lease::ProcessSponsorResponse(System.Object,System.Boolean)
extern TypeInfo* IAsyncResult_t385_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ISponsor_t5437_il2cpp_TypeInfo_var;
extern "C" void Lease_ProcessSponsorResponse_m22791 (Lease_t5134 * __this, Object_t * ___state, bool ___timedOut, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAsyncResult_t385_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1151);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2532);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ISponsor_t5437_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9189);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	TimeSpan_t334  V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = ___timedOut;
		if (L_0)
		{
			goto IL_0041;
		}
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_1 = ___state;
			V_0 = ((Object_t *)Castclass(L_1, IAsyncResult_t385_il2cpp_TypeInfo_var));
			RenewalDelegate_t5157 * L_2 = (__this->____renewalDelegate_8);
			Object_t * L_3 = V_0;
			NullCheck(L_2);
			TimeSpan_t334  L_4 = (TimeSpan_t334 )VirtFuncInvoker1< TimeSpan_t334 , Object_t * >::Invoke(14 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult) */, L_2, L_3);
			V_1 = L_4;
			TimeSpan_t334  L_5 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
			TimeSpan_t334  L_6 = ((TimeSpan_t334_StaticFields*)TimeSpan_t334_il2cpp_TypeInfo_var->static_fields)->___Zero_7;
			bool L_7 = TimeSpan_op_Inequality_m15224(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0024:
		{
			TimeSpan_t334  L_8 = V_1;
			VirtFuncInvoker1< TimeSpan_t334 , TimeSpan_t334  >::Invoke(11 /* System.TimeSpan System.Runtime.Remoting.Lifetime.Lease::Renew(System.TimeSpan) */, __this, L_8);
			__this->____currentState_2 = 2;
			__this->____renewingSponsors_7 = (Queue_t4421 *)NULL;
			goto IL_005d;
		}

IL_003c:
		{
			goto IL_0041;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_003e;
		throw e;
	}

CATCH_003e:
	{ // begin catch(System.Object)
		goto IL_0041;
	} // end catch (depth: 1)

IL_0041:
	{
		Queue_t4421 * L_9 = (__this->____renewingSponsors_7);
		NullCheck(L_9);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(17 /* System.Object System.Collections.Queue::Dequeue() */, L_9);
		VirtActionInvoker1< Object_t * >::Invoke(12 /* System.Void System.Runtime.Remoting.Lifetime.Lease::Unregister(System.Runtime.Remoting.Lifetime.ISponsor) */, __this, ((Object_t *)Castclass(L_10, ISponsor_t5437_il2cpp_TypeInfo_var)));
		Lease_CheckNextSponsor_m22790(__this, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseManager
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseManagerMethodDeclarations.h"

// System.Threading.Timer
#include "mscorlib_System_Threading_Timer.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallback.h"
// System.Threading.TimerCallback
#include "mscorlib_System_Threading_TimerCallbackMethodDeclarations.h"
// System.Threading.Timer
#include "mscorlib_System_Threading_TimerMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern "C" void LeaseManager__ctor_m22792 (LeaseManager_t5158 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		__this->____objects_0 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LeaseManager_TrackLifetime_m22793 (LeaseManager_t5158 * __this, ServerIdentity_t4755 * ___identity, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t723 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			ServerIdentity_t4755 * L_3 = ___identity;
			NullCheck(L_3);
			Lease_t5134 * L_4 = ServerIdentity_get_Lease_m22714(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			Lease_Activate_m22783(L_4, /*hidden argument*/NULL);
			ArrayList_t723 * L_5 = (__this->____objects_0);
			ServerIdentity_t4755 * L_6 = ___identity;
			NullCheck(L_5);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_6);
			Timer_t2185 * L_7 = (__this->____timer_1);
			if (L_7)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			LeaseManager_StartManager_m22794(__this, /*hidden argument*/NULL);
		}

IL_0038:
		{
			IL2CPP_LEAVE(0x41, FINALLY_003a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_003a;
	}

FINALLY_003a:
	{ // begin finally (depth: 1)
		Object_t * L_8 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(58)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(58)
	{
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0041:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StartManager()
extern TypeInfo* TimerCallback_t2186_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern TypeInfo* Timer_t2185_il2cpp_TypeInfo_var;
extern const MethodInfo* LeaseManager_ManageLeases_m22796_MethodInfo_var;
extern "C" void LeaseManager_StartManager_m22794 (LeaseManager_t5158 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimerCallback_t2186_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3456);
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		Timer_t2185_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3457);
		LeaseManager_ManageLeases_m22796_MethodInfo_var = il2cpp_codegen_method_info_from_index(1644);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)LeaseManager_ManageLeases_m22796_MethodInfo_var };
		TimerCallback_t2186 * L_1 = (TimerCallback_t2186 *)il2cpp_codegen_object_new (TimerCallback_t2186_il2cpp_TypeInfo_var);
		TimerCallback__ctor_m8047(L_1, __this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_2 = LifetimeServices_get_LeaseManagerPollTime_m22798(NULL /*static, unused*/, /*hidden argument*/NULL);
		TimeSpan_t334  L_3 = LifetimeServices_get_LeaseManagerPollTime_m22798(NULL /*static, unused*/, /*hidden argument*/NULL);
		Timer_t2185 * L_4 = (Timer_t2185 *)il2cpp_codegen_object_new (Timer_t2185_il2cpp_TypeInfo_var);
		Timer__ctor_m24456(L_4, L_1, NULL, L_2, L_3, /*hidden argument*/NULL);
		__this->____timer_1 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::StopManager()
extern "C" void LeaseManager_StopManager_m22795 (LeaseManager_t5158 * __this, const MethodInfo* method)
{
	Timer_t2185 * V_0 = {0};
	{
		Timer_t2185 * L_0 = (__this->____timer_1);
		V_0 = L_0;
		__this->____timer_1 = (Timer_t2185 *)NULL;
		Timer_t2185 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Threading.Timer::Dispose() */, L_1);
		return;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::ManageLeases(System.Object)
extern TypeInfo* ServerIdentity_t4755_il2cpp_TypeInfo_var;
extern "C" void LeaseManager_ManageLeases_m22796 (LeaseManager_t5158 * __this, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerIdentity_t4755_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9149);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	ServerIdentity_t4755 * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t723 * L_0 = (__this->____objects_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_0 = L_1;
		Object_t * L_2 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0059;
		}

IL_0016:
		{
			ArrayList_t723 * L_3 = (__this->____objects_0);
			int32_t L_4 = V_1;
			NullCheck(L_3);
			Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
			V_2 = ((ServerIdentity_t4755 *)Castclass(L_5, ServerIdentity_t4755_il2cpp_TypeInfo_var));
			ServerIdentity_t4755 * L_6 = V_2;
			NullCheck(L_6);
			Lease_t5134 * L_7 = ServerIdentity_get_Lease_m22714(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			Lease_UpdateState_m22789(L_7, /*hidden argument*/NULL);
			ServerIdentity_t4755 * L_8 = V_2;
			NullCheck(L_8);
			Lease_t5134 * L_9 = ServerIdentity_get_Lease_m22714(L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Runtime.Remoting.Lifetime.LeaseState System.Runtime.Remoting.Lifetime.Lease::get_CurrentState() */, L_9);
			if ((!(((uint32_t)L_10) == ((uint32_t)4))))
			{
				goto IL_0055;
			}
		}

IL_0041:
		{
			ArrayList_t723 * L_11 = (__this->____objects_0);
			int32_t L_12 = V_1;
			NullCheck(L_11);
			VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_11, L_12);
			ServerIdentity_t4755 * L_13 = V_2;
			NullCheck(L_13);
			VirtActionInvoker0::Invoke(5 /* System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired() */, L_13);
			goto IL_0059;
		}

IL_0055:
		{
			int32_t L_14 = V_1;
			V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
		}

IL_0059:
		{
			int32_t L_15 = V_1;
			ArrayList_t723 * L_16 = (__this->____objects_0);
			NullCheck(L_16);
			int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
			if ((((int32_t)L_15) < ((int32_t)L_17)))
			{
				goto IL_0016;
			}
		}

IL_0067:
		{
			ArrayList_t723 * L_18 = (__this->____objects_0);
			NullCheck(L_18);
			int32_t L_19 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_18);
			if (L_19)
			{
				goto IL_007a;
			}
		}

IL_0074:
		{
			LeaseManager_StopManager_m22795(__this, /*hidden argument*/NULL);
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x83, FINALLY_007c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_007c;
	}

FINALLY_007c:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(124)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(124)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0083:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Lifetime.LeaseState
#include "mscorlib_System_Runtime_Remoting_Lifetime_LeaseStateMethodDeclarations.h"



// System.Runtime.Remoting.Lifetime.LifetimeServices
#include "mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern TypeInfo* LeaseManager_t5158_il2cpp_TypeInfo_var;
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern TypeInfo* TimeSpan_t334_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices__cctor_m22797 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LeaseManager_t5158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9192);
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		TimeSpan_t334_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2532);
		s_Il2CppMethodIntialized = true;
	}
	{
		LeaseManager_t5158 * L_0 = (LeaseManager_t5158 *)il2cpp_codegen_object_new (LeaseManager_t5158_il2cpp_TypeInfo_var);
		LeaseManager__ctor_m22792(L_0, /*hidden argument*/NULL);
		((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t334_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_1 = TimeSpan_FromSeconds_m7541(NULL /*static, unused*/, (10.0), /*hidden argument*/NULL);
		((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0 = L_1;
		TimeSpan_t334  L_2 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (5.0), /*hidden argument*/NULL);
		((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1 = L_2;
		TimeSpan_t334  L_3 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2 = L_3;
		TimeSpan_t334  L_4 = TimeSpan_FromMinutes_m20853(NULL /*static, unused*/, (2.0), /*hidden argument*/NULL);
		((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3 = L_4;
		return;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  LifetimeServices_get_LeaseManagerPollTime_m22798 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_0 = ((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseManagerPollTime_0;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  LifetimeServices_get_LeaseTime_m22799 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_0 = ((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseTime_1;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  LifetimeServices_get_RenewOnCallTime_m22800 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_0 = ((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____renewOnCallTime_2;
		return L_0;
	}
}
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" TimeSpan_t334  LifetimeServices_get_SponsorshipTimeout_m22801 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		TimeSpan_t334  L_0 = ((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____sponsorshipTimeout_3;
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern TypeInfo* LifetimeServices_t5160_il2cpp_TypeInfo_var;
extern "C" void LifetimeServices_TrackLifetime_m22802 (Object_t * __this /* static, unused */, ServerIdentity_t4755 * ___identity, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LifetimeServices_t5160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9166);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(LifetimeServices_t5160_il2cpp_TypeInfo_var);
		LeaseManager_t5158 * L_0 = ((LifetimeServices_t5160_StaticFields*)LifetimeServices_t5160_il2cpp_TypeInfo_var->static_fields)->____leaseManager_4;
		ServerIdentity_t4755 * L_1 = ___identity;
		NullCheck(L_0);
		LeaseManager_TrackLifetime_m22793(L_0, L_1, /*hidden argument*/NULL);
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

// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ArgInfo::.ctor(System.Reflection.MethodBase,System.Runtime.Remoting.Messaging.ArgInfoType)
extern TypeInfo* Int32U5BU5D_t484_il2cpp_TypeInfo_var;
extern "C" void ArgInfo__ctor_m22803 (ArgInfo_t5162 * __this, MethodBase_t1553 * ___method, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32U5BU5D_t484_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1486* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		MethodBase_t1553 * L_0 = ___method;
		__this->____method_2 = L_0;
		MethodBase_t1553 * L_1 = (__this->____method_2);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1486* L_2 = (ParameterInfoU5BU5D_t1486*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1486* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1486* L_3 = V_0;
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
		ParameterInfoU5BU5D_t1486* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_5, L_7)));
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_5, L_7)));
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
		ParameterInfoU5BU5D_t1486* L_17 = V_0;
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
		ParameterInfoU5BU5D_t1486* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_18, L_20)));
		NullCheck(L_21);
		bool L_22 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Type::get_IsByRef() */, L_21);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		ParameterInfoU5BU5D_t1486* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_23, L_25)));
		bool L_26 = ParameterInfo_get_IsOut_m22125((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_23, L_25)), /*hidden argument*/NULL);
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
		ParameterInfoU5BU5D_t1486* L_34 = V_0;
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
// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgCount()
extern "C" int32_t ArgInfo_GetInOutArgCount_m22804 (ArgInfo_t5162 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		return L_0;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ArgInfo::GetInOutArgs(System.Object[])
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t707* ArgInfo_GetInOutArgs_m22805 (ArgInfo_t5162 * __this, ObjectU5BU5D_t707* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t707* V_0 = {0};
	int32_t V_1 = 0;
	{
		int32_t L_0 = (__this->____inoutArgCount_1);
		V_0 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, L_0));
		V_1 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ObjectU5BU5D_t707* L_1 = V_0;
		int32_t L_2 = V_1;
		ObjectU5BU5D_t707* L_3 = ___args;
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
		ObjectU5BU5D_t707* L_11 = V_0;
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
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
extern "C" void AsyncResult__ctor_m22806 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
extern "C" Object_t * AsyncResult_get_AsyncState_m22807 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t3212_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t3263 * AsyncResult_get_AsyncWaitHandle_m22808 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t3212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5512);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t4583 * V_0 = {0};
	WaitHandle_t3263 * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t4583 * L_0 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			WaitHandle_t3263 * L_1 = (__this->___handle_1);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_6);
			ManualResetEvent_t3212 * L_3 = (ManualResetEvent_t3212 *)il2cpp_codegen_object_new (ManualResetEvent_t3212_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m11617(L_3, L_2, /*hidden argument*/NULL);
			__this->___handle_1 = L_3;
		}

IL_0021:
		{
			WaitHandle_t3263 * L_4 = (__this->___handle_1);
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
		AsyncResult_t4583 * L_5 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0033:
	{
		WaitHandle_t3263 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
extern "C" bool AsyncResult_get_CompletedSynchronously_m22809 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___sync_completed_5);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
extern "C" bool AsyncResult_get_IsCompleted_m22810 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_6);
		return L_0;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
extern "C" bool AsyncResult_get_EndInvokeCalled_m22811 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___endinvoke_called_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
extern "C" void AsyncResult_set_EndInvokeCalled_m22812 (AsyncResult_t4583 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___endinvoke_called_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
extern "C" Object_t * AsyncResult_get_AsyncDelegate_m22813 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___async_delegate_2);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
extern "C" Object_t * AsyncResult_get_NextSink_m22814 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_AsyncProcessMessage_m22815 (AsyncResult_t4583 * __this, Object_t * ___msg, Object_t * ___replySink, const MethodInfo* method)
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
extern "C" Object_t * AsyncResult_GetReplyMessage_m22816 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___reply_message_14);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
extern "C" void AsyncResult_SetMessageCtrl_m22817 (AsyncResult_t4583 * __this, Object_t * ___mc, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___mc;
		__this->___message_ctrl_13 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
extern "C" void AsyncResult_SetCompletedSynchronously_m22818 (AsyncResult_t4583 * __this, bool ___completed, const MethodInfo* method)
{
	{
		bool L_0 = ___completed;
		__this->___sync_completed_5 = L_0;
		return;
	}
}
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
extern "C" Object_t * AsyncResult_EndInvoke_m22819 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	AsyncResult_t4583 * V_0 = {0};
	Object_t * V_1 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		AsyncResult_t4583 * L_0 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		AsyncResult_t4583 * L_3 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
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
		WaitHandle_t3263 * L_4 = (WaitHandle_t3263 *)VirtFuncInvoker0< WaitHandle_t3263 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
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
extern TypeInfo* ManualResetEvent_t3212_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t386_il2cpp_TypeInfo_var;
extern "C" Object_t * AsyncResult_SyncProcessMessage_m22820 (AsyncResult_t4583 * __this, Object_t * ___msg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t3212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5512);
		AsyncCallback_t386_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1150);
		s_Il2CppMethodIntialized = true;
	}
	AsyncResult_t4583 * V_0 = {0};
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
		AsyncResult_t4583 * L_1 = V_0;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			__this->___completed_6 = 1;
			WaitHandle_t3263 * L_2 = (__this->___handle_1);
			if (!L_2)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WaitHandle_t3263 * L_3 = (WaitHandle_t3263 *)VirtFuncInvoker0< WaitHandle_t3263 * >::Invoke(8 /* System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle() */, __this);
			NullCheck(((ManualResetEvent_t3212 *)Castclass(L_3, ManualResetEvent_t3212_il2cpp_TypeInfo_var)));
			EventWaitHandle_Set_m11618(((ManualResetEvent_t3212 *)Castclass(L_3, ManualResetEvent_t3212_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
		AsyncResult_t4583 * L_4 = V_0;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
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
		VirtActionInvoker1< Object_t * >::Invoke(12 /* System.Void System.AsyncCallback::Invoke(System.IAsyncResult) */, L_7, __this);
	}

IL_0053:
	{
		return (Object_t *)NULL;
	}
}
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
extern "C" MonoMethodMessage_t5164 * AsyncResult_get_CallMessage_m22821 (AsyncResult_t4583 * __this, const MethodInfo* method)
{
	{
		MonoMethodMessage_t5164 * L_0 = (__this->___call_message_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
extern "C" void AsyncResult_set_CallMessage_m22822 (AsyncResult_t4583 * __this, MonoMethodMessage_t5164 * ___value, const MethodInfo* method)
{
	{
		MonoMethodMessage_t5164 * L_0 = ___value;
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
// System.Runtime.Remoting.Messaging.MethodCall
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodCallMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_ConstructionCallDMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionaryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
extern "C" void ConstructionCall__ctor_m22823 (ConstructionCall_t5167 * __this, Type_t * ___type, const MethodInfo* method)
{
	{
		MethodCall__ctor_m22856(__this, /*hidden argument*/NULL);
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
extern "C" void ConstructionCall__ctor_m22824 (ConstructionCall_t5167 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2947 * L_0 = ___info;
		StreamingContext_t2948  L_1 = ___context;
		MethodCall__ctor_m22855(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
extern TypeInfo* ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_InitDictionary_m22825 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9193);
		s_Il2CppMethodIntialized = true;
	}
	ConstructionCallDictionary_t5169 * V_0 = {0};
	{
		ConstructionCallDictionary_t5169 * L_0 = (ConstructionCallDictionary_t5169 *)il2cpp_codegen_object_new (ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		ConstructionCallDictionary__ctor_m22837(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		ConstructionCallDictionary_t5169 * L_1 = V_0;
		((MethodCall_t5168 *)__this)->___ExternalProperties_8 = L_1;
		ConstructionCallDictionary_t5169 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m22890(L_2, /*hidden argument*/NULL);
		((MethodCall_t5168 *)__this)->___InternalProperties_9 = L_3;
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
extern "C" void ConstructionCall_set_IsContextOk_m22826 (ConstructionCall_t5167 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->____isContextOk_16 = L_0;
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * ConstructionCall_get_ActivationType_m22827 (ConstructionCall_t5167 * __this, const MethodInfo* method)
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
		Type_t * L_2 = Type_GetType_m7690(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->____activationType_14 = L_2;
	}

IL_0019:
	{
		Type_t * L_3 = (__this->____activationType_14);
		return L_3;
	}
}
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
extern "C" String_t* ConstructionCall_get_ActivationTypeName_m22828 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____activationTypeName_15);
		return L_0;
	}
}
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
extern "C" Object_t * ConstructionCall_get_Activator_m22829 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____activator_11);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
extern "C" void ConstructionCall_set_Activator_m22830 (ConstructionCall_t5167 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->____activator_11 = L_0;
		return;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
extern "C" ObjectU5BU5D_t707* ConstructionCall_get_CallSiteActivationAttributes_m22831 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____activationAttributes_12);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
extern "C" void ConstructionCall_SetActivationAttributes_m22832 (ConstructionCall_t5167 * __this, ObjectU5BU5D_t707* ___attributes, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = ___attributes;
		__this->____activationAttributes_12 = L_0;
		return;
	}
}
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructionCall_get_ContextProperties_m22833 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
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
		ArrayList_t723 * L_1 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_1, /*hidden argument*/NULL);
		__this->____contextProperties_13 = L_1;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->____contextProperties_13);
		return L_2;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCall_t5167_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t5140_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IList_t711_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" void ConstructionCall_InitMethodProperty_m22834 (ConstructionCall_t5167 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCall_t5167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9174);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IActivator_t5140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9194);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IList_t711_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(268);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		Dictionary_2_t223 * L_2 = ((ConstructionCall_t5167_StaticFields*)ConstructionCall_t5167_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5925, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5926, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5927, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5928, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5929, 4);
		Dictionary_2_t223 * L_9 = V_1;
		((ConstructionCall_t5167_StaticFields*)ConstructionCall_t5167_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17 = L_9;
	}

IL_0058:
	{
		Dictionary_2_t223 * L_10 = ((ConstructionCall_t5167_StaticFields*)ConstructionCall_t5167_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map25_17;
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
		__this->____activator_11 = ((Object_t *)Castclass(L_14, IActivator_t5140_il2cpp_TypeInfo_var));
		return;
	}

IL_0090:
	{
		Object_t * L_15 = ___value;
		__this->____activationAttributes_12 = ((ObjectU5BU5D_t707*)Castclass(L_15, ObjectU5BU5D_t707_il2cpp_TypeInfo_var));
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
		__this->____contextProperties_13 = ((Object_t *)Castclass(L_17, IList_t711_il2cpp_TypeInfo_var));
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
		MethodCall_InitMethodProperty_m22858(__this, L_19, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ICollection_t779_il2cpp_TypeInfo_var;
extern "C" void ConstructionCall_GetObjectData_m22835 (ConstructionCall_t5167 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		SerializationInfo_t2947 * L_0 = ___info;
		StreamingContext_t2948  L_1 = ___context;
		MethodCall_GetObjectData_m22859(__this, L_0, L_1, /*hidden argument*/NULL);
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
		int32_t L_5 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t779_il2cpp_TypeInfo_var, L_4);
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
		SerializationInfo_t2947 * L_6 = ___info;
		Object_t * L_7 = (__this->____activator_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m11584(L_6, (String_t*) &_stringLiteral5925, L_7, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_8 = ___info;
		ObjectU5BU5D_t707* L_9 = (__this->____activationAttributes_12);
		NullCheck(L_8);
		SerializationInfo_AddValue_m11584(L_8, (String_t*) &_stringLiteral5926, (Object_t *)(Object_t *)L_9, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_10 = ___info;
		NullCheck(L_10);
		SerializationInfo_AddValue_m11584(L_10, (String_t*) &_stringLiteral5927, NULL, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_11 = ___info;
		Object_t * L_12 = V_0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m11584(L_11, (String_t*) &_stringLiteral5928, L_12, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_13 = ___info;
		String_t* L_14 = (__this->____activationTypeName_15);
		NullCheck(L_13);
		SerializationInfo_AddValue_m11584(L_13, (String_t*) &_stringLiteral5929, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
extern "C" Object_t * ConstructionCall_get_Properties_m22836 (ConstructionCall_t5167 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = MethodCall_get_Properties_m22866(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
#include "mscorlib_System_Runtime_Remoting_Messaging_MethodDictionary.h"


// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern TypeInfo* ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__ctor_m22837 (ConstructionCallDictionary_t5169 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9193);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m22886(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = ((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m22888(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var;
extern "C" void ConstructionCallDictionary__cctor_m22838 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9193);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, ((int32_t)11)));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5930);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5930;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5931);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5931;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5932);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5932;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5933);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5933;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5934);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5934;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5935);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5935;
		StringU5BU5D_t75* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral5926);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral5926;
		StringU5BU5D_t75* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 7);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral5927);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 7)) = (String_t*)(String_t*) &_stringLiteral5927;
		StringU5BU5D_t75* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 8);
		ArrayElementTypeCheck (L_8, (String_t*) &_stringLiteral5928);
		*((String_t**)(String_t**)SZArrayLdElema(L_8, 8)) = (String_t*)(String_t*) &_stringLiteral5928;
		StringU5BU5D_t75* L_9 = L_8;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)9));
		ArrayElementTypeCheck (L_9, (String_t*) &_stringLiteral5925);
		*((String_t**)(String_t**)SZArrayLdElema(L_9, ((int32_t)9))) = (String_t*)(String_t*) &_stringLiteral5925;
		StringU5BU5D_t75* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, ((int32_t)10));
		ArrayElementTypeCheck (L_10, (String_t*) &_stringLiteral5929);
		*((String_t**)(String_t**)SZArrayLdElema(L_10, ((int32_t)10))) = (String_t*)(String_t*) &_stringLiteral5929;
		((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_10;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ConstructionCallDictionary::GetMethodProperty(System.String)
extern TypeInfo* ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t5434_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" Object_t * ConstructionCallDictionary_GetMethodProperty_m22839 (ConstructionCallDictionary_t5169 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9193);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IConstructionCallMessage_t5434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9185);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5925, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5926, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5927, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5928, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5929, 4);
		Dictionary_2_t223 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map28_7;
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
		Object_t * L_14 = (((MethodDictionary_t5170 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_14, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		Object_t * L_15 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.IConstructionCallMessage::get_Activator() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_14, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		return L_15;
	}

IL_0094:
	{
		Object_t * L_16 = (((MethodDictionary_t5170 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_16, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t707* L_17 = (ObjectU5BU5D_t707*)InterfaceFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(4 /* System.Object[] System.Runtime.Remoting.Activation.IConstructionCallMessage::get_CallSiteActivationAttributes() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_16, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		return (Object_t *)L_17;
	}

IL_00a5:
	{
		Object_t * L_18 = (((MethodDictionary_t5170 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_18, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		Type_t * L_19 = (Type_t *)InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationType() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		return L_19;
	}

IL_00b6:
	{
		Object_t * L_20 = (((MethodDictionary_t5170 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_20, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Collections.IList System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ContextProperties() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_20, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		return L_21;
	}

IL_00c7:
	{
		Object_t * L_22 = (((MethodDictionary_t5170 *)__this)->____message_1);
		NullCheck(((Object_t *)Castclass(L_22, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		String_t* L_23 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String System.Runtime.Remoting.Activation.IConstructionCallMessage::get_ActivationTypeName() */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_22, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		return L_23;
	}

IL_00d8:
	{
		String_t* L_24 = ___key;
		Object_t * L_25 = MethodDictionary_GetMethodProperty_m22894(__this, L_24, /*hidden argument*/NULL);
		return L_25;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ConstructionCallDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IConstructionCallMessage_t5434_il2cpp_TypeInfo_var;
extern TypeInfo* IActivator_t5140_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" void ConstructionCallDictionary_SetMethodProperty_m22840 (ConstructionCallDictionary_t5169 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9193);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IConstructionCallMessage_t5434_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9185);
		IActivator_t5140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9194);
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_2 = ((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8;
		if (L_2)
		{
			goto IL_0058;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 5, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5925, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5926, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5927, 1);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5928, 1);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5929, 1);
		Dictionary_2_t223 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8 = L_9;
	}

IL_0058:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var);
		Dictionary_2_t223 * L_10 = ((ConstructionCallDictionary_t5169_StaticFields*)ConstructionCallDictionary_t5169_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map29_8;
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
		Object_t * L_15 = (((MethodDictionary_t5170 *)__this)->____message_1);
		Object_t * L_16 = ___value;
		NullCheck(((Object_t *)Castclass(L_15, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< Object_t * >::Invoke(3 /* System.Void System.Runtime.Remoting.Activation.IConstructionCallMessage::set_Activator(System.Runtime.Remoting.Activation.IActivator) */, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_15, IConstructionCallMessage_t5434_il2cpp_TypeInfo_var)), ((Object_t *)Castclass(L_16, IActivator_t5140_il2cpp_TypeInfo_var)));
		goto IL_009d;
	}

IL_0088:
	{
		ArgumentException_t736 * L_17 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_17, (String_t*) &_stringLiteral5936, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0093:
	{
		String_t* L_18 = ___key;
		Object_t * L_19 = ___value;
		MethodDictionary_SetMethodProperty_m22895(__this, L_18, L_19, /*hidden argument*/NULL);
		goto IL_009d;
	}

IL_009d:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.ctor()
extern "C" void EnvoyTerminatorSink__ctor_m22841 (EnvoyTerminatorSink_t5171 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::.cctor()
extern TypeInfo* EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var;
extern "C" void EnvoyTerminatorSink__cctor_m22842 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9168);
		s_Il2CppMethodIntialized = true;
	}
	{
		EnvoyTerminatorSink_t5171 * L_0 = (EnvoyTerminatorSink_t5171 *)il2cpp_codegen_object_new (EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var);
		EnvoyTerminatorSink__ctor_m22841(L_0, /*hidden argument*/NULL);
		((EnvoyTerminatorSink_t5171_StaticFields*)EnvoyTerminatorSink_t5171_il2cpp_TypeInfo_var->static_fields)->___Instance_0 = L_0;
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
extern "C" void Header__ctor_m22843 (Header_t5172 * __this, String_t* ____Name, Object_t * ____Value, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		Header__ctor_m22844(__this, L_0, L_1, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean)
extern "C" void Header__ctor_m22844 (Header_t5172 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, const MethodInfo* method)
{
	{
		String_t* L_0 = ____Name;
		Object_t * L_1 = ____Value;
		bool L_2 = ____MustUnderstand;
		Header__ctor_m22845(__this, L_0, L_1, L_2, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.Header::.ctor(System.String,System.Object,System.Boolean,System.String)
extern "C" void Header__ctor_m22845 (Header_t5172 * __this, String_t* ____Name, Object_t * ____Value, bool ____MustUnderstand, String_t* ____HeaderNamespace, const MethodInfo* method)
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
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Runtime.Remoting.Messaging.CallContextRemotingData
#include "mscorlib_System_Runtime_Remoting_Messaging_CallContextRemotiMethodDeclarations.h"
// System.Runtime.Serialization.SerializationEntry
#include "mscorlib_System_Runtime_Serialization_SerializationEntryMethodDeclarations.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntryMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor()
extern TypeInfo* CallContextRemotingData_t5173_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m22846 (LogicalCallContext_t5174 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t5173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		s_Il2CppMethodIntialized = true;
	}
	{
		CallContextRemotingData_t5173 * L_0 = (CallContextRemotingData_t5173 *)il2cpp_codegen_object_new (CallContextRemotingData_t5173_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m22852(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* CallContextRemotingData_t5173_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext__ctor_m22847 (LogicalCallContext_t5174 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t5173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t5211  V_0 = {0};
	SerializationInfoEnumerator_t5213 * V_1 = {0};
	{
		CallContextRemotingData_t5173 * L_0 = (CallContextRemotingData_t5173 *)il2cpp_codegen_object_new (CallContextRemotingData_t5173_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m22852(L_0, /*hidden argument*/NULL);
		__this->____remotingData_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_1 = ___info;
		NullCheck(L_1);
		SerializationInfoEnumerator_t5213 * L_2 = SerializationInfo_GetEnumerator_m23060(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		goto IL_005c;
	}

IL_001a:
	{
		SerializationInfoEnumerator_t5213 * L_3 = V_1;
		NullCheck(L_3);
		SerializationEntry_t5211  L_4 = SerializationInfoEnumerator_get_Current_m23070(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = SerializationEntry_get_Name_m23050((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m456(NULL /*static, unused*/, L_5, (String_t*) &_stringLiteral5937, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_7 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		__this->____remotingData_1 = ((CallContextRemotingData_t5173 *)Castclass(L_7, CallContextRemotingData_t5173_il2cpp_TypeInfo_var));
		goto IL_005c;
	}

IL_0048:
	{
		String_t* L_8 = SerializationEntry_get_Name_m23050((&V_0), /*hidden argument*/NULL);
		Object_t * L_9 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		LogicalCallContext_SetData_m22850(__this, L_8, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		SerializationInfoEnumerator_t5213 * L_10 = V_1;
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
// System.Boolean System.Runtime.Remoting.Messaging.LogicalCallContext::get_HasInfo()
extern "C" bool LogicalCallContext_get_HasInfo_m22848 (LogicalCallContext_t5174 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Hashtable_t721 * L_0 = (__this->____data_0);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Hashtable_t721 * L_1 = (__this->____data_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		return G_B3_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.LogicalCallContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_GetObjectData_m22849 (LogicalCallContext_t5174 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t2167  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2947 * L_0 = ___info;
		CallContextRemotingData_t5173 * L_1 = (__this->____remotingData_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m11584(L_0, (String_t*) &_stringLiteral5937, L_1, /*hidden argument*/NULL);
		Hashtable_t721 * L_2 = (__this->____data_0);
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		Hashtable_t721 * L_3 = (__this->____data_0);
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(32 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_3);
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
			V_0 = ((*(DictionaryEntry_t2167 *)((DictionaryEntry_t2167 *)UnBox (L_6, DictionaryEntry_t2167_il2cpp_TypeInfo_var))));
			SerializationInfo_t2947 * L_7 = ___info;
			Object_t * L_8 = DictionaryEntry_get_Key_m7998((&V_0), /*hidden argument*/NULL);
			Object_t * L_9 = DictionaryEntry_get_Value_m7999((&V_0), /*hidden argument*/NULL);
			NullCheck(L_7);
			SerializationInfo_AddValue_m11584(L_7, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), L_9, /*hidden argument*/NULL);
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
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" void LogicalCallContext_SetData_m22850 (LogicalCallContext_t5174 * __this, String_t* ___name, Object_t * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (__this->____data_0);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Hashtable_t721 * L_1 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_1, /*hidden argument*/NULL);
		__this->____data_0 = L_1;
	}

IL_0013:
	{
		Hashtable_t721 * L_2 = (__this->____data_0);
		String_t* L_3 = ___name;
		Object_t * L_4 = ___data;
		NullCheck(L_2);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.LogicalCallContext::Clone()
extern TypeInfo* LogicalCallContext_t5174_il2cpp_TypeInfo_var;
extern TypeInfo* CallContextRemotingData_t5173_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2167_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * LogicalCallContext_Clone_m22851 (LogicalCallContext_t5174 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t5174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		CallContextRemotingData_t5173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	LogicalCallContext_t5174 * V_0 = {0};
	DictionaryEntry_t2167  V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		LogicalCallContext_t5174 * L_0 = (LogicalCallContext_t5174 *)il2cpp_codegen_object_new (LogicalCallContext_t5174_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m22846(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		LogicalCallContext_t5174 * L_1 = V_0;
		CallContextRemotingData_t5173 * L_2 = (__this->____remotingData_1);
		NullCheck(L_2);
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object System.Runtime.Remoting.Messaging.CallContextRemotingData::Clone() */, L_2);
		NullCheck(L_1);
		L_1->____remotingData_1 = ((CallContextRemotingData_t5173 *)Castclass(L_3, CallContextRemotingData_t5173_il2cpp_TypeInfo_var));
		Hashtable_t721 * L_4 = (__this->____data_0);
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		LogicalCallContext_t5174 * L_5 = V_0;
		Hashtable_t721 * L_6 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->____data_0 = L_6;
		Hashtable_t721 * L_7 = (__this->____data_0);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(32 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_7);
		V_2 = L_8;
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_003d:
		{
			Object_t * L_9 = V_2;
			NullCheck(L_9);
			Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_9);
			V_1 = ((*(DictionaryEntry_t2167 *)((DictionaryEntry_t2167 *)UnBox (L_10, DictionaryEntry_t2167_il2cpp_TypeInfo_var))));
			LogicalCallContext_t5174 * L_11 = V_0;
			NullCheck(L_11);
			Hashtable_t721 * L_12 = (L_11->____data_0);
			Object_t * L_13 = DictionaryEntry_get_Key_m7998((&V_1), /*hidden argument*/NULL);
			Object_t * L_14 = DictionaryEntry_get_Value_m7999((&V_1), /*hidden argument*/NULL);
			NullCheck(L_12);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_12, L_13, L_14);
		}

IL_0062:
		{
			Object_t * L_15 = V_2;
			NullCheck(L_15);
			bool L_16 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_003d;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7E, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			Object_t * L_17 = V_2;
			V_3 = ((Object_t *)IsInst(L_17, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_18 = V_3;
			if (L_18)
			{
				goto IL_0077;
			}
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(108)
		}

IL_0077:
		{
			Object_t * L_19 = V_3;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_19);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_007e:
	{
		LogicalCallContext_t5174 * L_20 = V_0;
		return L_20;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.CallContextRemotingData::.ctor()
extern "C" void CallContextRemotingData__ctor_m22852 (CallContextRemotingData_t5173 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.CallContextRemotingData::Clone()
extern TypeInfo* CallContextRemotingData_t5173_il2cpp_TypeInfo_var;
extern "C" Object_t * CallContextRemotingData_Clone_m22853 (CallContextRemotingData_t5173 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallContextRemotingData_t5173_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9195);
		s_Il2CppMethodIntialized = true;
	}
	CallContextRemotingData_t5173 * V_0 = {0};
	{
		CallContextRemotingData_t5173 * L_0 = (CallContextRemotingData_t5173 *)il2cpp_codegen_object_new (CallContextRemotingData_t5173_il2cpp_TypeInfo_var);
		CallContextRemotingData__ctor_m22852(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		CallContextRemotingData_t5173 * L_1 = V_0;
		String_t* L_2 = (__this->____logicalCallID_0);
		NullCheck(L_1);
		L_1->____logicalCallID_0 = L_2;
		CallContextRemotingData_t5173 * L_3 = V_0;
		return L_3;
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
extern "C" void MethodCall__ctor_m22854 (MethodCall_t5168 * __this, HeaderU5BU5D_t5399* ___h1, const MethodInfo* method)
{
	Header_t5172 * V_0 = {0};
	HeaderU5BU5D_t5399* V_1 = {0};
	int32_t V_2 = 0;
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(21 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		HeaderU5BU5D_t5399* L_0 = ___h1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HeaderU5BU5D_t5399* L_1 = ___h1;
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
		HeaderU5BU5D_t5399* L_2 = ___h1;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		HeaderU5BU5D_t5399* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Header_t5172 **)(Header_t5172 **)SZArrayLdElema(L_3, L_5));
		Header_t5172 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = (L_6->___Name_2);
		Header_t5172 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___Value_3);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_7, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_11 = V_2;
		HeaderU5BU5D_t5399* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		MethodCall_ResolveMethod_m22873(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MethodCall__ctor_m22855 (MethodCall_t5168 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	SerializationEntry_t5211  V_0 = {0};
	SerializationInfoEnumerator_t5213 * V_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(21 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::Init() */, __this);
		SerializationInfo_t2947 * L_0 = ___info;
		NullCheck(L_0);
		SerializationInfoEnumerator_t5213 * L_1 = SerializationInfo_GetEnumerator_m23060(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0030;
	}

IL_0015:
	{
		SerializationInfoEnumerator_t5213 * L_2 = V_1;
		NullCheck(L_2);
		SerializationEntry_t5211  L_3 = SerializationInfoEnumerator_get_Current_m23070(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = SerializationEntry_get_Name_m23050((&V_0), /*hidden argument*/NULL);
		Object_t * L_5 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(16 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object) */, __this, L_4, L_5);
	}

IL_0030:
	{
		SerializationInfoEnumerator_t5213 * L_6 = V_1;
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
extern "C" void MethodCall__ctor_m22856 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22857 (MethodCall_t5168 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern TypeInfo* MethodCall_t5168_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* LogicalCallContext_t5174_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" void MethodCall_InitMethodProperty_m22858 (MethodCall_t5168 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCall_t5168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9197);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		LogicalCallContext_t5174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		Dictionary_2_t223 * L_2 = ((MethodCall_t5168_StaticFields*)MethodCall_t5168_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10;
		if (L_2)
		{
			goto IL_0070;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 7, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5932, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5931, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5933, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5934, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5935, 4);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5930, 5);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5938, 6);
		Dictionary_2_t223 * L_11 = V_1;
		((MethodCall_t5168_StaticFields*)MethodCall_t5168_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10 = L_11;
	}

IL_0070:
	{
		Dictionary_2_t223 * L_12 = ((MethodCall_t5168_StaticFields*)MethodCall_t5168_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map24_10;
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
		__this->____methodSignature_4 = ((TypeU5BU5D_t1231*)Castclass(L_18, TypeU5BU5D_t1231_il2cpp_TypeInfo_var));
		return;
	}

IL_00cd:
	{
		Object_t * L_19 = ___value;
		__this->____args_3 = ((ObjectU5BU5D_t707*)Castclass(L_19, ObjectU5BU5D_t707_il2cpp_TypeInfo_var));
		return;
	}

IL_00da:
	{
		Object_t * L_20 = ___value;
		__this->____callContext_6 = ((LogicalCallContext_t5174 *)Castclass(L_20, LogicalCallContext_t5174_il2cpp_TypeInfo_var));
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
		__this->____genericArguments_7 = ((TypeU5BU5D_t1231*)Castclass(L_22, TypeU5BU5D_t1231_il2cpp_TypeInfo_var));
		return;
	}

IL_0101:
	{
		Object_t * L_23 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties() */, __this);
		String_t* L_24 = ___key;
		Object_t * L_25 = ___value;
		NullCheck(L_23);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t710_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void MethodCall_GetObjectData_m22859 (MethodCall_t5168 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	DictionaryEntry_t2167  V_0 = {0};
	Object_t * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2947 * L_0 = ___info;
		String_t* L_1 = (__this->____typeName_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m11584(L_0, (String_t*) &_stringLiteral5932, L_1, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_2 = ___info;
		String_t* L_3 = (__this->____methodName_2);
		NullCheck(L_2);
		SerializationInfo_AddValue_m11584(L_2, (String_t*) &_stringLiteral5931, L_3, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_4 = ___info;
		TypeU5BU5D_t1231* L_5 = (__this->____methodSignature_4);
		NullCheck(L_4);
		SerializationInfo_AddValue_m11584(L_4, (String_t*) &_stringLiteral5933, (Object_t *)(Object_t *)L_5, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_6 = ___info;
		ObjectU5BU5D_t707* L_7 = (__this->____args_3);
		NullCheck(L_6);
		SerializationInfo_AddValue_m11584(L_6, (String_t*) &_stringLiteral5934, (Object_t *)(Object_t *)L_7, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_8 = ___info;
		LogicalCallContext_t5174 * L_9 = (__this->____callContext_6);
		NullCheck(L_8);
		SerializationInfo_AddValue_m11584(L_8, (String_t*) &_stringLiteral5935, L_9, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_10 = ___info;
		String_t* L_11 = (__this->____uri_0);
		NullCheck(L_10);
		SerializationInfo_AddValue_m11584(L_10, (String_t*) &_stringLiteral5930, L_11, /*hidden argument*/NULL);
		SerializationInfo_t2947 * L_12 = ___info;
		TypeU5BU5D_t1231* L_13 = (__this->____genericArguments_7);
		NullCheck(L_12);
		SerializationInfo_AddValue_m11584(L_12, (String_t*) &_stringLiteral5938, (Object_t *)(Object_t *)L_13, /*hidden argument*/NULL);
		Object_t * L_14 = (__this->___InternalProperties_9);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_15 = (__this->___InternalProperties_9);
		NullCheck(L_15);
		Object_t * L_16 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t710_il2cpp_TypeInfo_var, L_15);
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
			V_0 = ((*(DictionaryEntry_t2167 *)((DictionaryEntry_t2167 *)UnBox (L_18, DictionaryEntry_t2167_il2cpp_TypeInfo_var))));
			SerializationInfo_t2947 * L_19 = ___info;
			Object_t * L_20 = DictionaryEntry_get_Key_m7998((&V_0), /*hidden argument*/NULL);
			Object_t * L_21 = DictionaryEntry_get_Value_m7999((&V_0), /*hidden argument*/NULL);
			NullCheck(L_19);
			SerializationInfo_AddValue_m11584(L_19, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), L_21, /*hidden argument*/NULL);
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
// System.Int32 System.Runtime.Remoting.Messaging.MethodCall::get_ArgCount()
extern "C" int32_t MethodCall_get_ArgCount_m22860 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_3);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C" ObjectU5BU5D_t707* MethodCall_get_Args_m22861 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_3);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t5174_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t5174 * MethodCall_get_LogicalCallContext_m22862 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t5174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t5174 * L_0 = (__this->____callContext_6);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t5174 * L_1 = (LogicalCallContext_t5174 *)il2cpp_codegen_object_new (LogicalCallContext_t5174_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m22846(L_1, /*hidden argument*/NULL);
		__this->____callContext_6 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t5174 * L_2 = (__this->____callContext_6);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C" MethodBase_t1553 * MethodCall_get_MethodBase_m22863 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1553 * L_0 = (__this->____methodBase_5);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MethodCall_ResolveMethod_m22873(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		MethodBase_t1553 * L_1 = (__this->____methodBase_5);
		return L_1;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C" String_t* MethodCall_get_MethodName_m22864 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____methodName_2);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MethodBase_t1553 * L_1 = (__this->____methodBase_5);
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
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodCall_get_MethodSignature_m22865 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1486* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t1231* L_0 = (__this->____methodSignature_4);
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1553 * L_1 = (__this->____methodBase_5);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1553 * L_2 = (__this->____methodBase_5);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t1486* L_3 = (ParameterInfoU5BU5D_t1486*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1486* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t1486* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_4 = ((TypeU5BU5D_t1231*)SZArrayNew(TypeU5BU5D_t1231_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t1231* L_5 = (__this->____methodSignature_4);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t1486* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_7, L_9)));
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
		ParameterInfoU5BU5D_t1486* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t1231* L_14 = (__this->____methodSignature_4);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C" Object_t * MethodCall_get_Properties_m22866 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___ExternalProperties_8);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(19 /* System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary() */, __this);
	}

IL_000e:
	{
		Object_t * L_1 = (__this->___ExternalProperties_8);
		return L_1;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern TypeInfo* MethodCallDictionary_t5175_il2cpp_TypeInfo_var;
extern "C" void MethodCall_InitDictionary_m22867 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t5175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9198);
		s_Il2CppMethodIntialized = true;
	}
	MethodCallDictionary_t5175 * V_0 = {0};
	{
		MethodCallDictionary_t5175 * L_0 = (MethodCallDictionary_t5175 *)il2cpp_codegen_object_new (MethodCallDictionary_t5175_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m22877(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		MethodCallDictionary_t5175 * L_1 = V_0;
		__this->___ExternalProperties_8 = L_1;
		MethodCallDictionary_t5175 * L_2 = V_0;
		NullCheck(L_2);
		Object_t * L_3 = MethodDictionary_GetInternalProperties_m22890(L_2, /*hidden argument*/NULL);
		__this->___InternalProperties_9 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C" String_t* MethodCall_get_TypeName_m22868 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____typeName_1);
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		MethodBase_t1553 * L_1 = (__this->____methodBase_5);
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
extern "C" String_t* MethodCall_get_Uri_m22869 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_0);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C" void MethodCall_set_Uri_m22870 (MethodCall_t5168 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_0 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodCall::GetArg(System.Int32)
extern "C" Object_t * MethodCall_GetArg_m22871 (MethodCall_t5168 * __this, int32_t ___argNum, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_3);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C" void MethodCall_Init_m22872 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingException_t5130_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern "C" void MethodCall_ResolveMethod_m22873 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		RemotingException_t5130_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8905);
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2743);
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
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Type_t * L_2 = RemotingServices_GetServerTypeForUri_m22682(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
		String_t* L_6 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral1273, L_5, (String_t*) &_stringLiteral1274, /*hidden argument*/NULL);
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
		String_t* L_10 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral5939, L_8, (String_t*) &_stringLiteral5940, L_9, /*hidden argument*/NULL);
		RemotingException_t5130 * L_11 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005b:
	{
		String_t* L_12 = (__this->____typeName_1);
		Type_t * L_13 = V_0;
		Type_t * L_14 = MethodCall_CastTo_m22874(__this, L_12, L_13, /*hidden argument*/NULL);
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
		ArrayElementTypeCheck (L_16, (String_t*) &_stringLiteral5941);
		*((String_t**)(String_t**)SZArrayLdElema(L_16, 0)) = (String_t*)(String_t*) &_stringLiteral5941;
		StringU5BU5D_t75* L_17 = L_16;
		String_t* L_18 = (__this->____typeName_1);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 1);
		ArrayElementTypeCheck (L_17, L_18);
		*((String_t**)(String_t**)SZArrayLdElema(L_17, 1)) = (String_t*)L_18;
		StringU5BU5D_t75* L_19 = L_17;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 2);
		ArrayElementTypeCheck (L_19, (String_t*) &_stringLiteral5942);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, 2)) = (String_t*)(String_t*) &_stringLiteral5942;
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
		ArrayElementTypeCheck (L_23, (String_t*) &_stringLiteral1267);
		*((String_t**)(String_t**)SZArrayLdElema(L_23, 4)) = (String_t*)(String_t*) &_stringLiteral1267;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m450(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		RemotingException_t5130 * L_25 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_25, L_24, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_00a7:
	{
		Type_t * L_26 = V_2;
		String_t* L_27 = (__this->____methodName_2);
		TypeU5BU5D_t1231* L_28 = (__this->____methodSignature_4);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_29 = RemotingServices_GetMethodBaseFromName_m22690(NULL /*static, unused*/, L_26, L_27, L_28, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_29;
		MethodBase_t1553 * L_30 = (__this->____methodBase_5);
		if (L_30)
		{
			goto IL_00f5;
		}
	}
	{
		ObjectU5BU5D_t707* L_31 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 4));
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 0);
		ArrayElementTypeCheck (L_31, (String_t*) &_stringLiteral5943);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0)) = (Object_t *)(String_t*) &_stringLiteral5943;
		ObjectU5BU5D_t707* L_32 = L_31;
		String_t* L_33 = (__this->____methodName_2);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 1);
		ArrayElementTypeCheck (L_32, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_32, 1)) = (Object_t *)L_33;
		ObjectU5BU5D_t707* L_34 = L_32;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, (String_t*) &_stringLiteral5944);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2)) = (Object_t *)(String_t*) &_stringLiteral5944;
		ObjectU5BU5D_t707* L_35 = L_34;
		Type_t * L_36 = V_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3)) = (Object_t *)L_36;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m4090(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		RemotingException_t5130 * L_38 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_38, L_37, /*hidden argument*/NULL);
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
		MethodBase_t1553 * L_46 = (__this->____methodBase_5);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_47 = RemotingServices_GetVirtualMethod_m22680(NULL /*static, unused*/, L_45, L_46, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_47;
		MethodBase_t1553 * L_48 = (__this->____methodBase_5);
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		ObjectU5BU5D_t707* L_49 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 4));
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, 0);
		ArrayElementTypeCheck (L_49, (String_t*) &_stringLiteral5943);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_49, 0)) = (Object_t *)(String_t*) &_stringLiteral5943;
		ObjectU5BU5D_t707* L_50 = L_49;
		String_t* L_51 = (__this->____methodName_2);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 1);
		ArrayElementTypeCheck (L_50, L_51);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_50, 1)) = (Object_t *)L_51;
		ObjectU5BU5D_t707* L_52 = L_50;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 2);
		ArrayElementTypeCheck (L_52, (String_t*) &_stringLiteral5944);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_52, 2)) = (Object_t *)(String_t*) &_stringLiteral5944;
		ObjectU5BU5D_t707* L_53 = L_52;
		Type_t * L_54 = V_0;
		NullCheck(L_53);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_53, 3);
		ArrayElementTypeCheck (L_53, L_54);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_53, 3)) = (Object_t *)L_54;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m4090(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		RemotingException_t5130 * L_56 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_56, L_55, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_56);
	}

IL_0151:
	{
		goto IL_0188;
	}

IL_0153:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		MethodBase_t1553 * L_57 = RemotingServices_GetMethodBaseFromMethodMessage_m22689(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		__this->____methodBase_5 = L_57;
		MethodBase_t1553 * L_58 = (__this->____methodBase_5);
		if (L_58)
		{
			goto IL_0188;
		}
	}
	{
		String_t* L_59 = (__this->____methodName_2);
		String_t* L_60 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_61 = String_Concat_m384(NULL /*static, unused*/, (String_t*) &_stringLiteral5943, L_59, (String_t*) &_stringLiteral5944, L_60, /*hidden argument*/NULL);
		RemotingException_t5130 * L_62 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_62, L_61, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_62);
	}

IL_0188:
	{
		MethodBase_t1553 * L_63 = (__this->____methodBase_5);
		NullCheck(L_63);
		bool L_64 = (bool)VirtFuncInvoker0< bool >::Invoke(29 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_63);
		if (!L_64)
		{
			goto IL_01d1;
		}
	}
	{
		MethodBase_t1553 * L_65 = (__this->____methodBase_5);
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters() */, L_65);
		if (!L_66)
		{
			goto IL_01d1;
		}
	}
	{
		TypeU5BU5D_t1231* L_67 = MethodCall_get_GenericArguments_m22876(__this, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_01b5;
		}
	}
	{
		RemotingException_t5130 * L_68 = (RemotingException_t5130 *)il2cpp_codegen_object_new (RemotingException_t5130_il2cpp_TypeInfo_var);
		RemotingException__ctor_m22677(L_68, (String_t*) &_stringLiteral5945, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_68);
	}

IL_01b5:
	{
		MethodBase_t1553 * L_69 = (__this->____methodBase_5);
		TypeU5BU5D_t1231* L_70 = MethodCall_get_GenericArguments_m22876(__this, /*hidden argument*/NULL);
		NullCheck(((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)));
		MethodInfo_t * L_71 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t1231* >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, ((MethodInfo_t *)Castclass(L_69, MethodInfo_t_il2cpp_TypeInfo_var)), L_70);
		__this->____methodBase_5 = L_71;
	}

IL_01d1:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Type_t * MethodCall_CastTo_m22874 (MethodCall_t5168 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	TypeU5BU5D_t1231* V_1 = {0};
	Type_t * V_2 = {0};
	TypeU5BU5D_t1231* V_3 = {0};
	int32_t V_4 = 0;
	{
		String_t* L_0 = ___clientType;
		String_t* L_1 = MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
		TypeU5BU5D_t1231* L_18 = (TypeU5BU5D_t1231*)VirtFuncInvoker0< TypeU5BU5D_t1231* >::Invoke(40 /* System.Type[] System.Type::GetInterfaces() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t1231* L_19 = V_1;
		V_3 = L_19;
		V_4 = 0;
		goto IL_0066;
	}

IL_004b:
	{
		TypeU5BU5D_t1231* L_20 = V_3;
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
		TypeU5BU5D_t1231* L_30 = V_3;
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
extern "C" String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m22875 (Object_t * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method)
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
		int32_t L_1 = String_IndexOf_m4337(L_0, (String_t*) &_stringLiteral5946, /*hidden argument*/NULL);
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
		int32_t L_5 = String_IndexOf_m10331(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
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
extern "C" TypeU5BU5D_t1231* MethodCall_get_GenericArguments_m22876 (MethodCall_t5168 * __this, const MethodInfo* method)
{
	TypeU5BU5D_t1231* V_0 = {0};
	{
		TypeU5BU5D_t1231* L_0 = (__this->____genericArguments_7);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		TypeU5BU5D_t1231* L_1 = (__this->____genericArguments_7);
		return L_1;
	}

IL_000f:
	{
		MethodBase_t1553 * L_2 = (MethodBase_t1553 *)VirtFuncInvoker0< MethodBase_t1553 * >::Invoke(10 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase() */, __this);
		NullCheck(L_2);
		TypeU5BU5D_t1231* L_3 = (TypeU5BU5D_t1231*)VirtFuncInvoker0< TypeU5BU5D_t1231* >::Invoke(26 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_2);
		TypeU5BU5D_t1231* L_4 = L_3;
		V_0 = L_4;
		__this->____genericArguments_7 = L_4;
		TypeU5BU5D_t1231* L_5 = V_0;
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern TypeInfo* MethodCallDictionary_t5175_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__ctor_m22877 (MethodCallDictionary_t5175 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t5175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9198);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m22886(__this, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MethodCallDictionary_t5175_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_1 = ((MethodCallDictionary_t5175_StaticFields*)MethodCallDictionary_t5175_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6;
		MethodDictionary_set_MethodKeys_m22888(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodCallDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* MethodCallDictionary_t5175_il2cpp_TypeInfo_var;
extern "C" void MethodCallDictionary__cctor_m22878 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		MethodCallDictionary_t5175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9198);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 6));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5930);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5930;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5931);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5931;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5932);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5932;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5933);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5933;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5934);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5934;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5935);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5935;
		((MethodCallDictionary_t5175_StaticFields*)MethodCallDictionary_t5175_il2cpp_TypeInfo_var->static_fields)->___InternalKeys_6 = L_5;
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

// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::.ctor(System.Runtime.Remoting.Messaging.MethodDictionary)
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" void DictionaryEnumerator__ctor_m22879 (DictionaryEnumerator_t5176 * __this, MethodDictionary_t5170 * ___methodDictionary, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	DictionaryEnumerator_t5176 * G_B2_0 = {0};
	DictionaryEnumerator_t5176 * G_B1_0 = {0};
	Object_t * G_B3_0 = {0};
	DictionaryEnumerator_t5176 * G_B3_1 = {0};
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		MethodDictionary_t5170 * L_0 = ___methodDictionary;
		__this->____methodDictionary_0 = L_0;
		MethodDictionary_t5170 * L_1 = (__this->____methodDictionary_0);
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
		MethodDictionary_t5170 * L_3 = (__this->____methodDictionary_0);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->____internalProperties_0);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t710_il2cpp_TypeInfo_var, L_4);
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
extern "C" Object_t * DictionaryEnumerator_get_Current_m22880 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2167  V_0 = {0};
	{
		DictionaryEntry_t2167  L_0 = (DictionaryEntry_t2167 )VirtFuncInvoker0< DictionaryEntry_t2167  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7999((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::MoveNext()
extern TypeInfo* IDictionaryEnumerator_t809_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool DictionaryEnumerator_MoveNext_m22881 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionaryEnumerator_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
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
		MethodDictionary_t5170 * L_3 = (__this->____methodDictionary_0);
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
		MethodDictionary_t5170 * L_6 = (__this->____methodDictionary_0);
		Object_t * L_7 = (__this->____hashtableEnum_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t809_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_6);
		bool L_9 = MethodDictionary_IsOverridenKey_m22891(L_6, ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
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
extern "C" void DictionaryEnumerator_Reset_m22882 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
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
extern TypeInfo* InvalidOperationException_t1457_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionaryEnumerator_t809_il2cpp_TypeInfo_var;
extern "C" DictionaryEntry_t2167  DictionaryEnumerator_get_Entry_m22883 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1457_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2536);
		IDictionaryEnumerator_t809_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(439);
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
		MethodDictionary_t5170 * L_1 = (__this->____methodDictionary_0);
		NullCheck(L_1);
		StringU5BU5D_t75* L_2 = (L_1->____methodKeys_2);
		int32_t L_3 = (__this->____posMethod_2);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		MethodDictionary_t5170 * L_5 = (__this->____methodDictionary_0);
		MethodDictionary_t5170 * L_6 = (__this->____methodDictionary_0);
		NullCheck(L_6);
		StringU5BU5D_t75* L_7 = (L_6->____methodKeys_2);
		int32_t L_8 = (__this->____posMethod_2);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck(L_5);
		Object_t * L_10 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(19 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, L_5, (*(String_t**)(String_t**)SZArrayLdElema(L_7, L_9)));
		DictionaryEntry_t2167  L_11 = {0};
		DictionaryEntry__ctor_m18086(&L_11, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)), L_10, /*hidden argument*/NULL);
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
		InvalidOperationException_t1457 * L_14 = (InvalidOperationException_t1457 *)il2cpp_codegen_object_new (InvalidOperationException_t1457_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m7553(L_14, (String_t*) &_stringLiteral5949, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____hashtableEnum_1);
		NullCheck(L_15);
		DictionaryEntry_t2167  L_16 = (DictionaryEntry_t2167 )InterfaceFuncInvoker0< DictionaryEntry_t2167  >::Invoke(0 /* System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry() */, IDictionaryEnumerator_t809_il2cpp_TypeInfo_var, L_15);
		return L_16;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Key()
extern "C" Object_t * DictionaryEnumerator_get_Key_m22884 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2167  V_0 = {0};
	{
		DictionaryEntry_t2167  L_0 = (DictionaryEntry_t2167 )VirtFuncInvoker0< DictionaryEntry_t2167  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Key_m7998((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Value()
extern "C" Object_t * DictionaryEnumerator_get_Value_m22885 (DictionaryEnumerator_t5176 * __this, const MethodInfo* method)
{
	DictionaryEntry_t2167  V_0 = {0};
	{
		DictionaryEntry_t2167  L_0 = (DictionaryEntry_t2167 )VirtFuncInvoker0< DictionaryEntry_t2167  >::Invoke(7 /* System.Collections.DictionaryEntry System.Runtime.Remoting.Messaging.MethodDictionary/DictionaryEnumerator::get_Entry() */, __this);
		V_0 = L_0;
		Object_t * L_1 = DictionaryEntry_get_Value_m7999((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C" void MethodDictionary__ctor_m22886 (MethodDictionary_t5170 * __this, Object_t * ___message, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___message;
		__this->____message_1 = L_0;
		return;
	}
}
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t5176_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m22887 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t5176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9199);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t5176 * L_0 = (DictionaryEnumerator_t5176 *)il2cpp_codegen_object_new (DictionaryEnumerator_t5176_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m22879(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
extern "C" void MethodDictionary_set_MethodKeys_m22888 (MethodDictionary_t5170 * __this, StringU5BU5D_t75* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t75* L_0 = ___value;
		__this->____methodKeys_2 = L_0;
		return;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_AllocInternalProperties_m22889 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->____ownProperties_3 = 1;
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
extern "C" Object_t * MethodDictionary_GetInternalProperties_m22890 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
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
extern "C" bool MethodDictionary_IsOverridenKey_m22891 (MethodDictionary_t5170 * __this, String_t* ___key, const MethodInfo* method)
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
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Item_m22892 (MethodDictionary_t5170 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
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
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(19 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, L_6);
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
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker1< Object_t *, Object_t * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t710_il2cpp_TypeInfo_var, L_12, L_13);
		return L_14;
	}

IL_0047:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
extern "C" void MethodDictionary_set_Item_m22893 (MethodDictionary_t5170 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___key;
		Object_t * L_1 = ___value;
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(13 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
extern TypeInfo* MethodDictionary_t5170_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodMessage_t5177_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t5438_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" Object_t * MethodDictionary_GetMethodProperty_m22894 (MethodDictionary_t5170 * __this, String_t* ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t5170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9200);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		IMethodMessage_t5177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9155);
		IMethodReturnMessage_t5438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9201);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		Dictionary_2_t223 * L_2 = ((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5930, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5931, 1);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5932, 2);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5933, 3);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5935, 4);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5934, 5);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5947, 6);
		Dictionary_2_t223 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral5948, 7);
		Dictionary_2_t223 * L_12 = V_1;
		((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t223 * L_13 = ((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map26_4;
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
		String_t* L_18 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_17);
		return L_18;
	}

IL_00c2:
	{
		Object_t * L_19 = (__this->____message_1);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_19);
		return L_20;
	}

IL_00ce:
	{
		Object_t * L_21 = (__this->____message_1);
		NullCheck(L_21);
		String_t* L_22 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_TypeName() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_21);
		return L_22;
	}

IL_00da:
	{
		Object_t * L_23 = (__this->____message_1);
		NullCheck(L_23);
		Object_t * L_24 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodSignature() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_23);
		return L_24;
	}

IL_00e6:
	{
		Object_t * L_25 = (__this->____message_1);
		NullCheck(L_25);
		LogicalCallContext_t5174 * L_26 = (LogicalCallContext_t5174 *)InterfaceFuncInvoker0< LogicalCallContext_t5174 * >::Invoke(2 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_25);
		return L_26;
	}

IL_00f2:
	{
		Object_t * L_27 = (__this->____message_1);
		NullCheck(L_27);
		ObjectU5BU5D_t707* L_28 = (ObjectU5BU5D_t707*)InterfaceFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(1 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodMessage::get_Args() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_27);
		return (Object_t *)L_28;
	}

IL_00fe:
	{
		Object_t * L_29 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_29, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var)));
		ObjectU5BU5D_t707* L_30 = (ObjectU5BU5D_t707*)InterfaceFuncInvoker0< ObjectU5BU5D_t707* >::Invoke(2 /* System.Object[] System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_OutArgs() */, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_29, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var)));
		return (Object_t *)L_30;
	}

IL_010f:
	{
		Object_t * L_31 = (__this->____message_1);
		NullCheck(((Object_t *)Castclass(L_31, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var)));
		Object_t * L_32 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(3 /* System.Object System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_ReturnValue() */, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_31, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var)));
		return L_32;
	}

IL_0120:
	{
		return NULL;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
extern TypeInfo* MethodDictionary_t5170_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t223_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern TypeInfo* IInternalMessage_t5451_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m4062_MethodInfo_var;
extern "C" void MethodDictionary_SetMethodProperty_m22895 (MethodDictionary_t5170 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodDictionary_t5170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9200);
		Dictionary_2_t223_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(247);
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IInternalMessage_t5451_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9202);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m4062_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483857);
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
		Dictionary_2_t223 * L_2 = ((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5;
		if (L_2)
		{
			goto IL_007c;
		}
	}
	{
		Dictionary_2_t223 * L_3 = (Dictionary_2_t223 *)il2cpp_codegen_object_new (Dictionary_2_t223_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4062(L_3, 8, /*hidden argument*/Dictionary_2__ctor_m4062_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t223 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_4, (String_t*) &_stringLiteral5935, 0);
		Dictionary_2_t223 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_5, (String_t*) &_stringLiteral5947, 0);
		Dictionary_2_t223 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_6, (String_t*) &_stringLiteral5948, 0);
		Dictionary_2_t223 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_7, (String_t*) &_stringLiteral5931, 1);
		Dictionary_2_t223 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_8, (String_t*) &_stringLiteral5932, 1);
		Dictionary_2_t223 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_9, (String_t*) &_stringLiteral5933, 1);
		Dictionary_2_t223 * L_10 = V_1;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_10, (String_t*) &_stringLiteral5934, 1);
		Dictionary_2_t223 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(TKey,TValue) */, L_11, (String_t*) &_stringLiteral5930, 2);
		Dictionary_2_t223 * L_12 = V_1;
		((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5 = L_12;
	}

IL_007c:
	{
		Dictionary_2_t223 * L_13 = ((MethodDictionary_t5170_StaticFields*)MethodDictionary_t5170_il2cpp_TypeInfo_var->static_fields)->___U3CU3Ef__switchU24map27_5;
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
		ArgumentException_t736 * L_17 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_17, (String_t*) &_stringLiteral5936, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_00ab:
	{
		Object_t * L_18 = (__this->____message_1);
		Object_t * L_19 = ___value;
		NullCheck(((Object_t *)Castclass(L_18, IInternalMessage_t5451_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void System.Runtime.Remoting.Messaging.IInternalMessage::set_Uri(System.String) */, IInternalMessage_t5451_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_18, IInternalMessage_t5451_il2cpp_TypeInfo_var)), ((String_t*)Castclass(L_19, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_00c2:
	{
		return;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerable_t104_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Keys_m22896 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerable_t104_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(139);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
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
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001d;
	}

IL_000a:
	{
		ArrayList_t723 * L_1 = V_0;
		StringU5BU5D_t75* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
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
		Object_t * L_10 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t710_il2cpp_TypeInfo_var, L_9);
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
			bool L_15 = MethodDictionary_IsOverridenKey_m22891(__this, L_14, /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0060;
			}
		}

IL_0058:
		{
			ArrayList_t723 * L_16 = V_0;
			String_t* L_17 = V_2;
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
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
		ArrayList_t723 * L_23 = V_0;
		return L_23;
	}
}
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* DictionaryEntry_t2167_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_get_Values_m22897 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		DictionaryEntry_t2167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3417);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
	int32_t V_1 = 0;
	DictionaryEntry_t2167  V_2 = {0};
	Object_t * V_3 = {0};
	Object_t * V_4 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000a:
	{
		ArrayList_t723 * L_1 = V_0;
		StringU5BU5D_t75* L_2 = (__this->____methodKeys_2);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(19 /* System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String) */, __this, (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4)));
		NullCheck(L_1);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_1, L_5);
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
		Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t710_il2cpp_TypeInfo_var, L_10);
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
			V_2 = ((*(DictionaryEntry_t2167 *)((DictionaryEntry_t2167 *)UnBox (L_13, DictionaryEntry_t2167_il2cpp_TypeInfo_var))));
			Object_t * L_14 = DictionaryEntry_get_Key_m7998((&V_2), /*hidden argument*/NULL);
			bool L_15 = MethodDictionary_IsOverridenKey_m22891(__this, ((String_t*)Castclass(L_14, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0064:
		{
			ArrayList_t723 * L_16 = V_0;
			Object_t * L_17 = DictionaryEntry_get_Value_m7999((&V_2), /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_17);
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
		ArrayList_t723 * L_23 = V_0;
		return L_23;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Add_m22898 (MethodDictionary_t5170 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
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
		VirtActionInvoker2< String_t*, Object_t * >::Invoke(20 /* System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object) */, __this, L_6, L_7);
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
		Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(18 /* System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties() */, __this);
		__this->____internalProperties_0 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->____internalProperties_0);
		Object_t * L_14 = ___key;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		InterfaceActionInvoker2< Object_t *, Object_t * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t710_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Clear_m22899 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->____internalProperties_0);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Object_t * L_1 = (__this->____internalProperties_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void System.Collections.IDictionary::Clear() */, IDictionary_t710_il2cpp_TypeInfo_var, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" bool MethodDictionary_Contains_m22900 (MethodDictionary_t5170 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
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
		bool L_12 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(6 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t710_il2cpp_TypeInfo_var, L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		return 0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern TypeInfo* IDictionary_t710_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_Remove_m22901 (MethodDictionary_t5170 * __this, Object_t * ___key, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		IDictionary_t710_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(269);
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
		ArgumentException_t736 * L_6 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_6, (String_t*) &_stringLiteral5936, /*hidden argument*/NULL);
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
		InterfaceActionInvoker1< Object_t * >::Invoke(8 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t710_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0049:
	{
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
extern TypeInfo* ICollection_t779_il2cpp_TypeInfo_var;
extern "C" int32_t MethodDictionary_get_Count_m22902 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
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
		int32_t L_2 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t779_il2cpp_TypeInfo_var, L_1);
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
extern "C" bool MethodDictionary_get_IsSynchronized_m22903 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
extern "C" Object_t * MethodDictionary_get_SyncRoot_m22904 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
extern TypeInfo* ICollection_t779_il2cpp_TypeInfo_var;
extern "C" void MethodDictionary_CopyTo_m22905 (MethodDictionary_t5170 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ICollection_t779_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(310);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(12 /* System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values() */, __this);
		Array_t * L_1 = ___array;
		int32_t L_2 = ___index;
		NullCheck(L_0);
		InterfaceActionInvoker2< Array_t *, int32_t >::Invoke(3 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t779_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
extern TypeInfo* DictionaryEnumerator_t5176_il2cpp_TypeInfo_var;
extern "C" Object_t * MethodDictionary_GetEnumerator_m22906 (MethodDictionary_t5170 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DictionaryEnumerator_t5176_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9199);
		s_Il2CppMethodIntialized = true;
	}
	{
		DictionaryEnumerator_t5176 * L_0 = (DictionaryEnumerator_t5176 *)il2cpp_codegen_object_new (DictionaryEnumerator_t5176_il2cpp_TypeInfo_var);
		DictionaryEnumerator__ctor_m22879(L_0, __this, /*hidden argument*/NULL);
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

// System.Exception
#include "mscorlib_System_Exception.h"


// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage)
extern TypeInfo* IMethodReturnMessage_t5438_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t5178_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__ctor_m22907 (MethodReturnDictionary_t5178 * __this, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodReturnMessage_t5438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9201);
		MethodReturnDictionary_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9203);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___message;
		MethodDictionary__ctor_m22886(__this, L_0, /*hidden argument*/NULL);
		Object_t * L_1 = ___message;
		NullCheck(L_1);
		Exception_t57 * L_2 = (Exception_t57 *)InterfaceFuncInvoker0< Exception_t57 * >::Invoke(0 /* System.Exception System.Runtime.Remoting.Messaging.IMethodReturnMessage::get_Exception() */, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t5178_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_3 = ((MethodReturnDictionary_t5178_StaticFields*)MethodReturnDictionary_t5178_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6;
		MethodDictionary_set_MethodKeys_m22888(__this, L_3, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MethodReturnDictionary_t5178_il2cpp_TypeInfo_var);
		StringU5BU5D_t75* L_4 = ((MethodReturnDictionary_t5178_StaticFields*)MethodReturnDictionary_t5178_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7;
		MethodDictionary_set_MethodKeys_m22888(__this, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MethodReturnDictionary::.cctor()
extern TypeInfo* StringU5BU5D_t75_il2cpp_TypeInfo_var;
extern TypeInfo* MethodReturnDictionary_t5178_il2cpp_TypeInfo_var;
extern "C" void MethodReturnDictionary__cctor_m22908 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t75_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(50);
		MethodReturnDictionary_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9203);
		s_Il2CppMethodIntialized = true;
	}
	{
		StringU5BU5D_t75* L_0 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 7));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral5930);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral5930;
		StringU5BU5D_t75* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, (String_t*) &_stringLiteral5931);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)(String_t*) &_stringLiteral5931;
		StringU5BU5D_t75* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		ArrayElementTypeCheck (L_2, (String_t*) &_stringLiteral5932);
		*((String_t**)(String_t**)SZArrayLdElema(L_2, 2)) = (String_t*)(String_t*) &_stringLiteral5932;
		StringU5BU5D_t75* L_3 = L_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 3);
		ArrayElementTypeCheck (L_3, (String_t*) &_stringLiteral5933);
		*((String_t**)(String_t**)SZArrayLdElema(L_3, 3)) = (String_t*)(String_t*) &_stringLiteral5933;
		StringU5BU5D_t75* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 4);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral5947);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 4)) = (String_t*)(String_t*) &_stringLiteral5947;
		StringU5BU5D_t75* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 5);
		ArrayElementTypeCheck (L_5, (String_t*) &_stringLiteral5948);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 5)) = (String_t*)(String_t*) &_stringLiteral5948;
		StringU5BU5D_t75* L_6 = L_5;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 6);
		ArrayElementTypeCheck (L_6, (String_t*) &_stringLiteral5935);
		*((String_t**)(String_t**)SZArrayLdElema(L_6, 6)) = (String_t*)(String_t*) &_stringLiteral5935;
		((MethodReturnDictionary_t5178_StaticFields*)MethodReturnDictionary_t5178_il2cpp_TypeInfo_var->static_fields)->___InternalReturnKeys_6 = L_6;
		StringU5BU5D_t75* L_7 = ((StringU5BU5D_t75*)SZArrayNew(StringU5BU5D_t75_il2cpp_TypeInfo_var, 1));
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral5935);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 0)) = (String_t*)(String_t*) &_stringLiteral5935;
		((MethodReturnDictionary_t5178_StaticFields*)MethodReturnDictionary_t5178_il2cpp_TypeInfo_var->static_fields)->___InternalExceptionKeys_7 = L_7;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.MonoMethodMessage
#include "mscorlib_System_Runtime_Remoting_Messaging_MonoMethodMessageMethodDeclarations.h"

// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"


// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern TypeInfo* MethodCallDictionary_t5175_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_Properties_m22909 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodCallDictionary_t5175_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9198);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodCallDictionary_t5175 * L_0 = (__this->___properties_8);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MethodCallDictionary_t5175 * L_1 = (MethodCallDictionary_t5175 *)il2cpp_codegen_object_new (MethodCallDictionary_t5175_il2cpp_TypeInfo_var);
		MethodCallDictionary__ctor_m22877(L_1, __this, /*hidden argument*/NULL);
		__this->___properties_8 = L_1;
	}

IL_0014:
	{
		MethodCallDictionary_t5175 * L_2 = (__this->___properties_8);
		return L_2;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern "C" int32_t MonoMethodMessage_get_ArgCount_m22910 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = MonoMethodMessage_get_CallType_m22924(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		ObjectU5BU5D_t707* L_1 = (__this->___args_1);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return 0;
	}

IL_0015:
	{
		ObjectU5BU5D_t707* L_2 = (__this->___args_1);
		NullCheck(L_2);
		return (((int32_t)(((Array_t *)L_2)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t707* MonoMethodMessage_get_Args_m22911 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->___args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t5174 * MonoMethodMessage_get_LogicalCallContext_m22912 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		LogicalCallContext_t5174 * L_0 = (__this->___ctx_3);
		return L_0;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t1553 * MonoMethodMessage_get_MethodBase_m22913 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = (__this->___method_0);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_MethodName_m22914 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
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
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m22915 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1486* V_0 = {0};
	int32_t V_1 = 0;
	{
		TypeU5BU5D_t1231* L_0 = (__this->___methodSignature_9);
		if (L_0)
		{
			goto IL_0040;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1486* L_2 = (ParameterInfoU5BU5D_t1486*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1486* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters() */, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1486* L_3 = V_0;
		NullCheck(L_3);
		__this->___methodSignature_9 = ((TypeU5BU5D_t1231*)SZArrayNew(TypeU5BU5D_t1231_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_3)->max_length)))));
		V_1 = 0;
		goto IL_003a;
	}

IL_0026:
	{
		TypeU5BU5D_t1231* L_4 = (__this->___methodSignature_9);
		int32_t L_5 = V_1;
		ParameterInfoU5BU5D_t1486* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_6, L_8)));
		Type_t * L_9 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_6, L_8)));
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
		ParameterInfoU5BU5D_t1486* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)(((Array_t *)L_12)->max_length))))))
		{
			goto IL_0026;
		}
	}

IL_0040:
	{
		TypeU5BU5D_t1231* L_13 = (__this->___methodSignature_9);
		return (Object_t *)L_13;
	}
}
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* MonoMethodMessage_get_TypeName_m22916 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
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
extern "C" String_t* MonoMethodMessage_get_Uri_m22917 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___uri_7);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m22918 (MonoMethodMessage_t5164 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___uri_7 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern "C" Object_t * MonoMethodMessage_GetArg_m22919 (MonoMethodMessage_t5164 * __this, int32_t ___arg_num, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		ObjectU5BU5D_t707* L_1 = (__this->___args_1);
		int32_t L_2 = ___arg_num;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_1, L_3));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t57 * MonoMethodMessage_get_Exception_m22920 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = (__this->___exc_5);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m22921 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByteU5BU5D_t66* V_2 = {0};
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t707* L_0 = (__this->___args_1);
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
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t707* MonoMethodMessage_get_OutArgs_m22922 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ObjectU5BU5D_t707* V_3 = {0};
	uint8_t V_4 = 0x0;
	ByteU5BU5D_t66* V_5 = {0};
	int32_t V_6 = 0;
	{
		ObjectU5BU5D_t707* L_0 = (__this->___args_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (ObjectU5BU5D_t707*)NULL;
	}

IL_000a:
	{
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount() */, __this);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, L_2));
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
		ObjectU5BU5D_t707* L_9 = V_3;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
		ObjectU5BU5D_t707* L_12 = (__this->___args_1);
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
		ObjectU5BU5D_t707* L_19 = V_3;
		return L_19;
	}
}
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m22923 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___rval_4);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" int32_t MonoMethodMessage_get_CallType_m22924 (MonoMethodMessage_t5164 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___call_type_6);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		MonoMethod_t * L_1 = (__this->___method_0);
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_2 = RemotingServices_IsOneWay_m22694(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->___call_type_6 = 3;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___call_type_6);
		return L_3;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.CallType
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTypeMethodDeclarations.h"



// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Messaging.OneWayAttribute
#include "mscorlib_System_Runtime_Remoting_Messaging_OneWayAttributeMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogate.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0.h"
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_ObjRefSurrogateMethodDeclarations.h"
// System.Runtime.Remoting.Messaging.RemotingSurrogate
#include "mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogate_0MethodDeclarations.h"


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C" void RemotingSurrogateSelector__ctor_m22925 (RemotingSurrogateSelector_t5184 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern const Il2CppType* ObjRef_t5123_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRefSurrogate_t5181_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingSurrogate_t5182_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogateSelector__cctor_m22926 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjRef_t5123_0_0_0_var = il2cpp_codegen_type_from_index(9140);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9147);
		ObjRefSurrogate_t5181_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9204);
		RemotingSurrogate_t5182_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9205);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ObjRef_t5123_0_0_0_var), /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0 = L_0;
		ObjRefSurrogate_t5181 * L_1 = (ObjRefSurrogate_t5181 *)il2cpp_codegen_object_new (ObjRefSurrogate_t5181_il2cpp_TypeInfo_var);
		ObjRefSurrogate__ctor_m22931(L_1, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1 = L_1;
		RemotingSurrogate_t5182 * L_2 = (RemotingSurrogate_t5182 *)il2cpp_codegen_object_new (RemotingSurrogate_t5182_il2cpp_TypeInfo_var);
		RemotingSurrogate__ctor_m22928(L_2, /*hidden argument*/NULL);
		((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2 = L_2;
		return;
	}
}
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern TypeInfo* RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t5183_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogateSelector_GetSurrogate_m22927 (RemotingSurrogateSelector_t5184 * __this, Type_t * ___type, StreamingContext_t2948  ___context, Object_t ** ___ssout, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9147);
		ISurrogateSelector_t5183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9206);
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
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var);
		RemotingSurrogate_t5182 * L_3 = ((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->____objRemotingSurrogate_2;
		return L_3;
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var);
		Type_t * L_4 = ((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->___s_cachedTypeObjRef_0;
		Type_t * L_5 = ___type;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(41 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0027;
		}
	}
	{
		Object_t ** L_7 = ___ssout;
		*((Object_t **)(L_7)) = (Object_t *)__this;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var);
		ObjRefSurrogate_t5181 * L_8 = ((RemotingSurrogateSelector_t5184_StaticFields*)RemotingSurrogateSelector_t5184_il2cpp_TypeInfo_var->static_fields)->____objRefSurrogate_1;
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
		StreamingContext_t2948  L_12 = ___context;
		Object_t ** L_13 = ___ssout;
		NullCheck(L_10);
		Object_t * L_14 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t2948 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t5183_il2cpp_TypeInfo_var, L_10, L_11, L_12, L_13);
		return L_14;
	}

IL_003e:
	{
		Object_t ** L_15 = ___ssout;
		*((Object_t **)(L_15)) = (Object_t *)NULL;
		return (Object_t *)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::.ctor()
extern "C" void RemotingSurrogate__ctor_m22928 (RemotingSurrogate_t5182 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void RemotingSurrogate_GetObjectData_m22929 (RemotingSurrogate_t5182 * __this, Object_t * ___obj, SerializationInfo_t2947 * ___si, StreamingContext_t2948  ___sc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	RealProxy_t5186 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t2947 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t795 * L_2 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7580(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		bool L_4 = RemotingServices_IsTransparentProxy_m22681(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		Object_t * L_5 = ___obj;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RealProxy_t5186 * L_6 = RemotingServices_GetRealProxy_m22688(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RealProxy_t5186 * L_7 = V_0;
		SerializationInfo_t2947 * L_8 = ___si;
		StreamingContext_t2948  L_9 = ___sc;
		NullCheck(L_7);
		VirtActionInvoker2< SerializationInfo_t2947 *, StreamingContext_t2948  >::Invoke(4 /* System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, L_7, L_8, L_9);
		goto IL_002d;
	}

IL_0025:
	{
		Object_t * L_10 = ___obj;
		SerializationInfo_t2947 * L_11 = ___si;
		StreamingContext_t2948  L_12 = ___sc;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_GetObjectData_m22692(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * RemotingSurrogate_SetObjectData_m22930 (RemotingSurrogate_t5182 * __this, Object_t * ___obj, SerializationInfo_t2947 * ___si, StreamingContext_t2948  ___sc, Object_t * ___selector, const MethodInfo* method)
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



// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::.ctor()
extern "C" void ObjRefSurrogate__ctor_m22931 (ObjRefSurrogate_t5181 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ObjRefSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ObjRef_t5123_il2cpp_TypeInfo_var;
extern "C" void ObjRefSurrogate_GetObjectData_m22932 (ObjRefSurrogate_t5181 * __this, Object_t * ___obj, SerializationInfo_t2947 * ___si, StreamingContext_t2948  ___sc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ObjRef_t5123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9140);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		SerializationInfo_t2947 * L_1 = ___si;
		if (L_1)
		{
			goto IL_000c;
		}
	}

IL_0006:
	{
		ArgumentNullException_t795 * L_2 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m7580(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000c:
	{
		Object_t * L_3 = ___obj;
		SerializationInfo_t2947 * L_4 = ___si;
		StreamingContext_t2948  L_5 = ___sc;
		NullCheck(((ObjRef_t5123 *)Castclass(L_3, ObjRef_t5123_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< SerializationInfo_t2947 *, StreamingContext_t2948  >::Invoke(13 /* System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext) */, ((ObjRef_t5123 *)Castclass(L_3, ObjRef_t5123_il2cpp_TypeInfo_var)), L_4, L_5);
		SerializationInfo_t2947 * L_6 = ___si;
		NullCheck(L_6);
		SerializationInfo_AddValue_m12147(L_6, (String_t*) &_stringLiteral5899, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ObjRefSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjRefSurrogate_SetObjectData_m22933 (ObjRefSurrogate_t5181 * __this, Object_t * ___obj, SerializationInfo_t2947 * ___si, StreamingContext_t2948  ___sc, Object_t * ___selector, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t56_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t56 * L_0 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11534(L_0, (String_t*) &_stringLiteral5950, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_0);
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
extern TypeInfo* IMethodMessage_t5177_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m22934 (ReturnMessage_t5185 * __this, Object_t * ___ret, ObjectU5BU5D_t707* ___outArgs, int32_t ___outArgsCount, LogicalCallContext_t5174 * ___callCtx, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t5177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9155);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___ret;
		__this->____returnValue_4 = L_0;
		ObjectU5BU5D_t707* L_1 = ___outArgs;
		__this->____args_1 = L_1;
		int32_t L_2 = ___outArgsCount;
		__this->____outArgsCount_2 = L_2;
		LogicalCallContext_t5174 * L_3 = ___callCtx;
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
		String_t* L_6 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Runtime.Remoting.Messaging.IMethodMessage::get_Uri() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_5);
		__this->____uri_5 = L_6;
		Object_t * L_7 = ___mcm;
		NullCheck(L_7);
		MethodBase_t1553 * L_8 = (MethodBase_t1553 *)InterfaceFuncInvoker0< MethodBase_t1553 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_7);
		__this->____methodBase_7 = L_8;
	}

IL_0041:
	{
		ObjectU5BU5D_t707* L_9 = (__this->____args_1);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_10 = ___outArgsCount;
		__this->____args_1 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, L_10));
	}

IL_0055:
	{
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::.ctor(System.Exception,System.Runtime.Remoting.Messaging.IMethodCallMessage)
extern TypeInfo* IMethodMessage_t5177_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern "C" void ReturnMessage__ctor_m22935 (ReturnMessage_t5185 * __this, Exception_t57 * ___e, Object_t * ___mcm, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IMethodMessage_t5177_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9155);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
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
		MethodBase_t1553 * L_3 = (MethodBase_t1553 *)InterfaceFuncInvoker0< MethodBase_t1553 * >::Invoke(3 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.IMethodMessage::get_MethodBase() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_2);
		__this->____methodBase_7 = L_3;
		Object_t * L_4 = ___mcm;
		NullCheck(L_4);
		LogicalCallContext_t5174 * L_5 = (LogicalCallContext_t5174 *)InterfaceFuncInvoker0< LogicalCallContext_t5174 * >::Invoke(2 /* System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.IMethodMessage::get_LogicalCallContext() */, IMethodMessage_t5177_il2cpp_TypeInfo_var, L_4);
		__this->____callCtx_3 = L_5;
	}

IL_0028:
	{
		__this->____args_1 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 0));
		return;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C" void ReturnMessage_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m22936 (ReturnMessage_t5185 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(20 /* System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String) */, __this, L_0);
		return;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_ArgCount()
extern "C" int32_t ReturnMessage_get_ArgCount_m22937 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_1);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_Args()
extern "C" ObjectU5BU5D_t707* ReturnMessage_get_Args_m22938 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_1);
		return L_0;
	}
}
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::get_LogicalCallContext()
extern TypeInfo* LogicalCallContext_t5174_il2cpp_TypeInfo_var;
extern "C" LogicalCallContext_t5174 * ReturnMessage_get_LogicalCallContext_m22939 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		LogicalCallContext_t5174_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9196);
		s_Il2CppMethodIntialized = true;
	}
	{
		LogicalCallContext_t5174 * L_0 = (__this->____callCtx_3);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		LogicalCallContext_t5174 * L_1 = (LogicalCallContext_t5174 *)il2cpp_codegen_object_new (LogicalCallContext_t5174_il2cpp_TypeInfo_var);
		LogicalCallContext__ctor_m22846(L_1, /*hidden argument*/NULL);
		__this->____callCtx_3 = L_1;
	}

IL_0013:
	{
		LogicalCallContext_t5174 * L_2 = (__this->____callCtx_3);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase()
extern "C" MethodBase_t1553 * ReturnMessage_get_MethodBase_m22940 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1553 * L_0 = (__this->____methodBase_7);
		return L_0;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodName()
extern "C" String_t* ReturnMessage_get_MethodName_m22941 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1553 * L_0 = (__this->____methodBase_7);
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
		MethodBase_t1553 * L_2 = (__this->____methodBase_7);
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
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_MethodSignature_m22942 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		s_Il2CppMethodIntialized = true;
	}
	ParameterInfoU5BU5D_t1486* V_0 = {0};
	int32_t V_1 = 0;
	{
		MethodBase_t1553 * L_0 = (__this->____methodBase_7);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		TypeU5BU5D_t1231* L_1 = (__this->____methodSignature_9);
		if (L_1)
		{
			goto IL_0048;
		}
	}
	{
		MethodBase_t1553 * L_2 = (__this->____methodBase_7);
		NullCheck(L_2);
		ParameterInfoU5BU5D_t1486* L_3 = (ParameterInfoU5BU5D_t1486*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1486* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_2);
		V_0 = L_3;
		ParameterInfoU5BU5D_t1486* L_4 = V_0;
		NullCheck(L_4);
		__this->____methodSignature_9 = ((TypeU5BU5D_t1231*)SZArrayNew(TypeU5BU5D_t1231_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_0042;
	}

IL_002e:
	{
		TypeU5BU5D_t1231* L_5 = (__this->____methodSignature_9);
		int32_t L_6 = V_1;
		ParameterInfoU5BU5D_t1486* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		NullCheck((*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_7, L_9)));
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, (*(ParameterInfo_t1411 **)(ParameterInfo_t1411 **)SZArrayLdElema(L_7, L_9)));
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
		ParameterInfoU5BU5D_t1486* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_002e;
		}
	}

IL_0048:
	{
		TypeU5BU5D_t1231* L_14 = (__this->____methodSignature_9);
		return (Object_t *)L_14;
	}
}
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ReturnMessage::get_Properties()
extern TypeInfo* MethodReturnDictionary_t5178_il2cpp_TypeInfo_var;
extern "C" Object_t * ReturnMessage_get_Properties_m22943 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MethodReturnDictionary_t5178_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9203);
		s_Il2CppMethodIntialized = true;
	}
	{
		MethodReturnDictionary_t5178 * L_0 = (__this->____properties_11);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MethodReturnDictionary_t5178 * L_1 = (MethodReturnDictionary_t5178 *)il2cpp_codegen_object_new (MethodReturnDictionary_t5178_il2cpp_TypeInfo_var);
		MethodReturnDictionary__ctor_m22907(L_1, __this, /*hidden argument*/NULL);
		__this->____properties_11 = L_1;
	}

IL_0014:
	{
		MethodReturnDictionary_t5178 * L_2 = (__this->____properties_11);
		return L_2;
	}
}
// System.String System.Runtime.Remoting.Messaging.ReturnMessage::get_TypeName()
extern "C" String_t* ReturnMessage_get_TypeName_m22944 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		MethodBase_t1553 * L_0 = (__this->____methodBase_7);
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
		MethodBase_t1553 * L_2 = (__this->____methodBase_7);
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
extern "C" String_t* ReturnMessage_get_Uri_m22945 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____uri_5);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Messaging.ReturnMessage::set_Uri(System.String)
extern "C" void ReturnMessage_set_Uri_m22946 (ReturnMessage_t5185 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->____uri_5 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::GetArg(System.Int32)
extern "C" Object_t * ReturnMessage_GetArg_m22947 (ReturnMessage_t5185 * __this, int32_t ___argNum, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_1);
		int32_t L_1 = ___argNum;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::get_Exception()
extern "C" Exception_t57 * ReturnMessage_get_Exception_m22948 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		Exception_t57 * L_0 = (__this->____exception_6);
		return L_0;
	}
}
// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgCount()
extern TypeInfo* ArgInfo_t5162_il2cpp_TypeInfo_var;
extern "C" int32_t ReturnMessage_get_OutArgCount_m22949 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t5162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9207);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t707* L_0 = (__this->____args_1);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ObjectU5BU5D_t707* L_1 = (__this->____args_1);
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		ArgInfo_t5162 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		MethodBase_t1553 * L_3 = (MethodBase_t1553 *)VirtFuncInvoker0< MethodBase_t1553 * >::Invoke(9 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t5162 * L_4 = (ArgInfo_t5162 *)il2cpp_codegen_object_new (ArgInfo_t5162_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m22803(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_002e:
	{
		ArgInfo_t5162 * L_5 = (__this->____inArgInfo_12);
		NullCheck(L_5);
		int32_t L_6 = ArgInfo_GetInOutArgCount_m22804(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::get_OutArgs()
extern TypeInfo* ArgInfo_t5162_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t707* ReturnMessage_get_OutArgs_m22950 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgInfo_t5162_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9207);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t707* L_0 = (__this->____outArgs_0);
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t707* L_1 = (__this->____args_1);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		ArgInfo_t5162 * L_2 = (__this->____inArgInfo_12);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		MethodBase_t1553 * L_3 = (MethodBase_t1553 *)VirtFuncInvoker0< MethodBase_t1553 * >::Invoke(9 /* System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::get_MethodBase() */, __this);
		ArgInfo_t5162 * L_4 = (ArgInfo_t5162 *)il2cpp_codegen_object_new (ArgInfo_t5162_il2cpp_TypeInfo_var);
		ArgInfo__ctor_m22803(L_4, L_3, 1, /*hidden argument*/NULL);
		__this->____inArgInfo_12 = L_4;
	}

IL_002a:
	{
		ArgInfo_t5162 * L_5 = (__this->____inArgInfo_12);
		ObjectU5BU5D_t707* L_6 = (__this->____args_1);
		NullCheck(L_5);
		ObjectU5BU5D_t707* L_7 = ArgInfo_GetInOutArgs_m22805(L_5, L_6, /*hidden argument*/NULL);
		__this->____outArgs_0 = L_7;
	}

IL_0041:
	{
		ObjectU5BU5D_t707* L_8 = (__this->____outArgs_0);
		return L_8;
	}
}
// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::get_ReturnValue()
extern "C" Object_t * ReturnMessage_get_ReturnValue_m22951 (ReturnMessage_t5185 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____returnValue_4);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Remoting.Proxies.TransparentProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_TransparentProxyMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"


// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m22952 (RealProxy_t5186 * __this, Type_t * ___classToProxy, const MethodInfo* method)
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
		RealProxy__ctor_m22954(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m22953 (RealProxy_t5186 * __this, Type_t * ___classToProxy, ClientIdentity_t5125 * ___identity, const MethodInfo* method)
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
		RealProxy__ctor_m22954(__this, L_0, L_1, NULL, /*hidden argument*/NULL);
		ClientIdentity_t5125 * L_2 = ___identity;
		__this->____objectIdentity_3 = L_2;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern TypeInfo* IntPtr_t_il2cpp_TypeInfo_var;
extern TypeInfo* NotSupportedException_t56_il2cpp_TypeInfo_var;
extern "C" void RealProxy__ctor_m22954 (RealProxy_t5186 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
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
		ArgumentException_t736 * L_4 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_4, (String_t*) &_stringLiteral5951, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	{
		Type_t * L_5 = ___classToProxy;
		__this->___class_to_proxy_0 = L_5;
		IntPtr_t L_6 = ___stub;
		IntPtr_t L_7 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->___Zero_1;
		bool L_8 = IntPtr_op_Inequality_m10340(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		NotSupportedException_t56 * L_9 = (NotSupportedException_t56 *)il2cpp_codegen_object_new (NotSupportedException_t56_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m11534(L_9, (String_t*) &_stringLiteral5952, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0047:
	{
		return;
	}
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m22955 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method)
{
	typedef Type_t * (*RealProxy_InternalGetProxyType_m22955_ftn) (Object_t *);
	static RealProxy_InternalGetProxyType_m22955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetProxyType_m22955_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)");
	return _il2cpp_icall_func(___transparentProxy);
}
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern const Il2CppType* MarshalByRefObject_t4299_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" Type_t * RealProxy_GetProxiedType_m22956 (RealProxy_t5186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4299_0_0_0_var = il2cpp_codegen_type_from_index(8292);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
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
		Type_t * L_6 = RealProxy_InternalGetProxyType_m22955(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void RealProxy_GetObjectData_m22957 (RealProxy_t5186 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		Object_t * L_0 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, __this);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		SerializationInfo_t2947 * L_2 = ___info;
		StreamingContext_t2948  L_3 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		RemotingServices_GetObjectData_m22692(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t5124 * RealProxy_get_ObjectIdentity_m22958 (RealProxy_t5186 * __this, const MethodInfo* method)
{
	{
		Identity_t5124 * L_0 = (__this->____objectIdentity_3);
		return L_0;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::set_ObjectIdentity(System.Runtime.Remoting.Identity)
extern "C" void RealProxy_set_ObjectIdentity_m22959 (RealProxy_t5186 * __this, Identity_t5124 * ___value, const MethodInfo* method)
{
	{
		Identity_t5124 * L_0 = ___value;
		__this->____objectIdentity_3 = L_0;
		return;
	}
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m22960 (RealProxy_t5186 * __this, String_t* ___className, const MethodInfo* method)
{
	typedef Object_t * (*RealProxy_InternalGetTransparentProxy_m22960_ftn) (RealProxy_t5186 *, String_t*);
	static RealProxy_InternalGetTransparentProxy_m22960_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (RealProxy_InternalGetTransparentProxy_m22960_ftn)il2cpp_codegen_resolve_icall ("System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)");
	return _il2cpp_icall_func(__this, ___className);
}
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern const Il2CppType* MarshalByRefObject_t4299_0_0_0_var;
extern TypeInfo* IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" Object_t * RealProxy_GetTransparentProxy_m22961 (RealProxy_t5186 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MarshalByRefObject_t4299_0_0_0_var = il2cpp_codegen_type_from_index(8292);
		IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9141);
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
		V_1 = ((Object_t *)IsInst(__this, IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var));
		Object_t * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Object_t * L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var, L_2);
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
		Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(MarshalByRefObject_t4299_0_0_0_var), /*hidden argument*/NULL);
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
		Object_t * L_14 = (Object_t *)VirtFuncInvoker1< Object_t *, String_t* >::Invoke(5 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String) */, __this, L_13);
		__this->____objTP_4 = L_14;
	}

IL_005a:
	{
		Object_t * L_15 = (__this->____objTP_4);
		return L_15;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m22962 (RealProxy_t5186 * __this, int32_t ___domainId, const MethodInfo* method)
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



// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RemotingProxy__ctor_m22963 (RemotingProxy_t5188 * __this, Type_t * ___type, ClientIdentity_t5125 * ___identity, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		ClientIdentity_t5125 * L_1 = ___identity;
		RealProxy__ctor_m22953(__this, L_0, L_1, /*hidden argument*/NULL);
		ClientIdentity_t5125 * L_2 = ___identity;
		NullCheck(L_2);
		Object_t * L_3 = Identity_get_ChannelSink_m22645(L_2, /*hidden argument*/NULL);
		__this->____sink_7 = L_3;
		__this->____hasEnvoySink_8 = 0;
		ClientIdentity_t5125 * L_4 = ___identity;
		NullCheck(L_4);
		String_t* L_5 = ClientIdentity_get_TargetUri_m22656(L_4, /*hidden argument*/NULL);
		((RealProxy_t5186 *)__this)->____targetUri_2 = L_5;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C" void RemotingProxy__ctor_m22964 (RemotingProxy_t5188 * __this, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t707* ___activationAttributes, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		RealProxy__ctor_m22952(__this, L_0, /*hidden argument*/NULL);
		__this->____hasEnvoySink_8 = 0;
		Type_t * L_1 = ___type;
		String_t* L_2 = ___activationUrl;
		ObjectU5BU5D_t707* L_3 = ___activationAttributes;
		ConstructionCall_t5167 * L_4 = ActivationServices_CreateConstructionCall_m22727(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->____ctorCall_9 = L_4;
		return;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t5188_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy__cctor_m22965 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		RemotingProxy_t5188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9158);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		MethodInfo_t * L_1 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_0, (String_t*) &_stringLiteral5953);
		((RemotingProxy_t5188_StaticFields*)RemotingProxy_t5188_il2cpp_TypeInfo_var->static_fields)->____cache_GetTypeMethod_5 = L_1;
		Type_t * L_2 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, String_t* >::Invoke(49 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String) */, L_2, (String_t*) &_stringLiteral5954);
		((RemotingProxy_t5188_StaticFields*)RemotingProxy_t5188_il2cpp_TypeInfo_var->static_fields)->____cache_GetHashCodeMethod_6 = L_3;
		return;
	}
}
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern TypeInfo* ClientIdentity_t5125_il2cpp_TypeInfo_var;
extern TypeInfo* IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var;
extern "C" String_t* RemotingProxy_get_TypeName_m22966 (RemotingProxy_t5188 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientIdentity_t5125_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9160);
		IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9141);
		s_Il2CppMethodIntialized = true;
	}
	ObjRef_t5123 * V_0 = {0};
	{
		Identity_t5124 * L_0 = (((RealProxy_t5186 *)__this)->____objectIdentity_3);
		if (!((ClientIdentity_t5125 *)IsInst(L_0, ClientIdentity_t5125_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Identity_t5124 * L_1 = (((RealProxy_t5186 *)__this)->____objectIdentity_3);
		NullCheck(L_1);
		ObjRef_t5123 * L_2 = (ObjRef_t5123 *)VirtFuncInvoker1< ObjRef_t5123 *, Type_t * >::Invoke(4 /* System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::CreateObjRef(System.Type) */, L_1, (Type_t *)NULL);
		V_0 = L_2;
		ObjRef_t5123 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_3);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		ObjRef_t5123 * L_5 = V_0;
		NullCheck(L_5);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(9 /* System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = (String_t*)InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.Runtime.Remoting.IRemotingTypeInfo::get_TypeName() */, IRemotingTypeInfo_t5127_il2cpp_TypeInfo_var, L_6);
		return L_7;
	}

IL_002e:
	{
		Type_t * L_8 = RealProxy_GetProxiedType_m22956(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_8);
		return L_9;
	}
}
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern TypeInfo* ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" void RemotingProxy_Finalize_m22967 (RemotingProxy_t5188 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9152);
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
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
			Identity_t5124 * L_0 = (((RealProxy_t5186 *)__this)->____objectIdentity_3);
			if (!L_0)
			{
				goto IL_0020;
			}
		}

IL_0008:
		{
			Identity_t5124 * L_1 = (((RealProxy_t5186 *)__this)->____objectIdentity_3);
			if (((ClientActivatedIdentity_t5135 *)IsInst(L_1, ClientActivatedIdentity_t5135_il2cpp_TypeInfo_var)))
			{
				goto IL_0020;
			}
		}

IL_0015:
		{
			Identity_t5124 * L_2 = (((RealProxy_t5186 *)__this)->____objectIdentity_3);
			IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
			RemotingServices_DisposeIdentity_m22706(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
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
#ifndef _MSC_VER
#else
#endif



// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern TypeInfo* ChannelServices_t5150_il2cpp_TypeInfo_var;
extern TypeInfo* RemotingProxy_t5188_il2cpp_TypeInfo_var;
extern TypeInfo* MarshalByRefObject_t4299_il2cpp_TypeInfo_var;
extern "C" MarshalByRefObject_t4299 * ProxyAttribute_CreateInstance_m22968 (ProxyAttribute_t5189 * __this, Type_t * ___serverType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChannelServices_t5150_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9157);
		RemotingProxy_t5188_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9158);
		MarshalByRefObject_t4299_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8292);
		s_Il2CppMethodIntialized = true;
	}
	RemotingProxy_t5188 * V_0 = {0};
	{
		Type_t * L_0 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(ChannelServices_t5150_il2cpp_TypeInfo_var);
		String_t* L_1 = ((ChannelServices_t5150_StaticFields*)ChannelServices_t5150_il2cpp_TypeInfo_var->static_fields)->___CrossContextUrl_3;
		RemotingProxy_t5188 * L_2 = (RemotingProxy_t5188 *)il2cpp_codegen_object_new (RemotingProxy_t5188_il2cpp_TypeInfo_var);
		RemotingProxy__ctor_m22964(L_2, L_0, L_1, (ObjectU5BU5D_t707*)(ObjectU5BU5D_t707*)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		RemotingProxy_t5188 * L_3 = V_0;
		NullCheck(L_3);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(6 /* System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy() */, L_3);
		return ((MarshalByRefObject_t4299 *)Castclass(L_4, MarshalByRefObject_t4299_il2cpp_TypeInfo_var));
	}
}
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern TypeInfo* RemotingServices_t5132_il2cpp_TypeInfo_var;
extern "C" RealProxy_t5186 * ProxyAttribute_CreateProxy_m22969 (ProxyAttribute_t5189 * __this, ObjRef_t5123 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t5133 * ___serverContext, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RemotingServices_t5132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8998);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjRef_t5123 * L_0 = ___objRef;
		Type_t * L_1 = ___serverType;
		IL2CPP_RUNTIME_CLASS_INIT(RemotingServices_t5132_il2cpp_TypeInfo_var);
		Object_t * L_2 = RemotingServices_GetProxyForRemoteObject_m22703(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		RealProxy_t5186 * L_3 = RemotingServices_GetRealProxy_m22688(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m22970 (ProxyAttribute_t5189 * __this, Object_t * ___msg, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m22971 (ProxyAttribute_t5189 * __this, Context_t5133 * ___ctx, Object_t * ___msg, const MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Runtime.Remoting.Services.TrackingServices
#include "mscorlib_System_Runtime_Remoting_Services_TrackingServices.h"
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Remoting.Services.TrackingServices::.cctor()
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern "C" void TrackingServices__cctor_m22972 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyMarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t5453_0_0_0_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t5453_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyMarshaledObject_m22973 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t5123 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t5453_0_0_0_var = il2cpp_codegen_type_from_index(9208);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9209);
		ITrackingHandler_t5453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9208);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t5452* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_0 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_3 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_5 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t5453_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t5452*)Castclass(L_7, ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var));
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
		ITrackingHandlerU5BU5D_t5452* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t5123 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t5123 * >::Invoke(1 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::MarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t5453_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t5452* L_16 = V_0;
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
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyUnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef)
extern const Il2CppType* ITrackingHandler_t5453_0_0_0_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t5453_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyUnmarshaledObject_m22974 (Object_t * __this /* static, unused */, Object_t * ___obj, ObjRef_t5123 * ___or, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t5453_0_0_0_var = il2cpp_codegen_type_from_index(9208);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9209);
		ITrackingHandler_t5453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9208);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t5452* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_0 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_3 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
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
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_5 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t5453_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t5452*)Castclass(L_7, ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var));
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
		ITrackingHandlerU5BU5D_t5452* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		ObjRef_t5123 * L_13 = ___or;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker2< Object_t *, ObjRef_t5123 * >::Invoke(2 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::UnmarshaledObject(System.Object,System.Runtime.Remoting.ObjRef) */, ITrackingHandler_t5453_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12, L_13);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0054:
	{
		int32_t L_15 = V_2;
		ITrackingHandlerU5BU5D_t5452* L_16 = V_0;
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
// System.Void System.Runtime.Remoting.Services.TrackingServices::NotifyDisconnectedObject(System.Object)
extern const Il2CppType* ITrackingHandler_t5453_0_0_0_var;
extern TypeInfo* TrackingServices_t5190_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var;
extern TypeInfo* ITrackingHandler_t5453_il2cpp_TypeInfo_var;
extern "C" void TrackingServices_NotifyDisconnectedObject_m22975 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ITrackingHandler_t5453_0_0_0_var = il2cpp_codegen_type_from_index(9208);
		TrackingServices_t5190_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9151);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9209);
		ITrackingHandler_t5453_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9208);
		s_Il2CppMethodIntialized = true;
	}
	ITrackingHandlerU5BU5D_t5452* V_0 = {0};
	Object_t * V_1 = {0};
	int32_t V_2 = 0;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_0 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		V_1 = L_1;
		Object_t * L_2 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_3 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			NullCheck(L_3);
			int32_t L_4 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_3);
			if (L_4)
			{
				goto IL_001f;
			}
		}

IL_001d:
		{
			IL2CPP_LEAVE(0x59, FINALLY_003b);
		}

IL_001f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TrackingServices_t5190_il2cpp_TypeInfo_var);
			ArrayList_t723 * L_5 = ((TrackingServices_t5190_StaticFields*)TrackingServices_t5190_il2cpp_TypeInfo_var->static_fields)->____handlers_0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(ITrackingHandler_t5453_0_0_0_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			Array_t * L_7 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_5, L_6);
			V_0 = ((ITrackingHandlerU5BU5D_t5452*)Castclass(L_7, ITrackingHandlerU5BU5D_t5452_il2cpp_TypeInfo_var));
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
		Monitor_Exit_m7592(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0042:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0046:
	{
		ITrackingHandlerU5BU5D_t5452* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		Object_t * L_12 = ___obj;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)));
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Remoting.Services.ITrackingHandler::DisconnectedObject(System.Object) */, ITrackingHandler_t5453_il2cpp_TypeInfo_var, (*(Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)), L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		ITrackingHandlerU5BU5D_t5452* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverter.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.FormatterConverter
#include "mscorlib_System_Runtime_Serialization_FormatterConverterMethodDeclarations.h"

// System.Int16
#include "mscorlib_System_Int16.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
extern "C" void FormatterConverter__ctor_m22976 (FormatterConverter_t5191 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Runtime.Serialization.FormatterConverter::Convert(System.Object,System.Type)
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" Object_t * FormatterConverter_Convert_m22977 (FormatterConverter_t5191 * __this, Object_t * ___value, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		Type_t * L_1 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		Object_t * L_2 = Convert_ChangeType_m20319(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Runtime.Serialization.FormatterConverter::ToBoolean(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" bool FormatterConverter_ToBoolean_m22978 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		bool L_3 = Convert_ToBoolean_m10350(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int16 System.Runtime.Serialization.FormatterConverter::ToInt16(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" int16_t FormatterConverter_ToInt16_m22979 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int16_t L_3 = Convert_ToInt16_m20222(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Runtime.Serialization.FormatterConverter::ToInt32(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" int32_t FormatterConverter_ToInt32_m22980 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int32_t L_3 = Convert_ToInt32_m4108(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int64 System.Runtime.Serialization.FormatterConverter::ToInt64(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" int64_t FormatterConverter_ToInt64_m22981 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		int64_t L_3 = Convert_ToInt64_m7520(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String System.Runtime.Serialization.FormatterConverter::ToString(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" String_t* FormatterConverter_ToString_m22982 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m4084(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.UInt32 System.Runtime.Serialization.FormatterConverter::ToUInt32(System.Object)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t67_il2cpp_TypeInfo_var;
extern "C" uint32_t FormatterConverter_ToUInt32_m22983 (FormatterConverter_t5191 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Convert_t67_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(33);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5955, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t67_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m10324(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServices.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.FormatterServices
#include "mscorlib_System_Runtime_Serialization_FormatterServicesMethodDeclarations.h"

// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"


// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t707* FormatterServices_GetObjectData_m22984 (Object_t * __this /* static, unused */, Object_t * ___obj, MemberInfoU5BU5D_t5226* ___members, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4597);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t707* V_1 = {0};
	int32_t V_2 = 0;
	MemberInfo_t * V_3 = {0};
	FieldInfo_t * V_4 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		MemberInfoU5BU5D_t5226* L_2 = ___members;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t795 * L_3 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_3, (String_t*) &_stringLiteral5956, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		MemberInfoU5BU5D_t5226* L_4 = ___members;
		NullCheck(L_4);
		V_0 = (((int32_t)(((Array_t *)L_4)->max_length)));
		int32_t L_5 = V_0;
		V_1 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, L_5));
		V_2 = 0;
		goto IL_007e;
	}

IL_002b:
	{
		MemberInfoU5BU5D_t5226* L_6 = ___members;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		V_3 = (*(MemberInfo_t **)(MemberInfo_t **)SZArrayLdElema(L_6, L_8));
		MemberInfo_t * L_9 = V_3;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		Object_t * L_12 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m4326(NULL /*static, unused*/, (String_t*) &_stringLiteral5957, L_12, /*hidden argument*/NULL);
		ArgumentNullException_t795 * L_14 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_14, L_13, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0048:
	{
		MemberInfo_t * L_15 = V_3;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_15);
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Format_m4326(NULL /*static, unused*/, (String_t*) &_stringLiteral5958, L_19, /*hidden argument*/NULL);
		SerializationException_t4568 * L_21 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_0067:
	{
		MemberInfo_t * L_22 = V_3;
		V_4 = ((FieldInfo_t *)IsInst(L_22, FieldInfo_t_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t707* L_23 = V_1;
		int32_t L_24 = V_2;
		FieldInfo_t * L_25 = V_4;
		Object_t * L_26 = ___obj;
		NullCheck(L_25);
		Object_t * L_27 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(17 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_25, L_26);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_24)) = (Object_t *)L_27;
		int32_t L_28 = V_2;
		V_2 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_29 = V_2;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_002b;
		}
	}
	{
		ObjectU5BU5D_t707* L_31 = V_1;
		return L_31;
	}
}
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* MemberInfoU5BU5D_t5226_il2cpp_TypeInfo_var;
extern "C" MemberInfoU5BU5D_t5226* FormatterServices_GetSerializableMembers_m22985 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		MemberInfoU5BU5D_t5226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9210);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
	Type_t * V_1 = {0};
	String_t* V_2 = {0};
	MemberInfoU5BU5D_t5226* V_3 = {0};
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ArrayList_t723 * L_2 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		Type_t * L_3 = ___type;
		V_1 = L_3;
		goto IL_004d;
	}

IL_0018:
	{
		Type_t * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsSerializable() */, L_4);
		if (L_5)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = V_1;
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		Assembly_t794 * L_8 = (Assembly_t794 *)VirtFuncInvoker0< Assembly_t794 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m4275(NULL /*static, unused*/, (String_t*) &_stringLiteral5959, L_6, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		SerializationException_t4568 * L_12 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003e:
	{
		Type_t * L_13 = ___type;
		Type_t * L_14 = V_1;
		ArrayList_t723 * L_15 = V_0;
		FormatterServices_GetFields_m22986(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		Type_t * L_16 = V_1;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_16);
		V_1 = L_17;
	}

IL_004d:
	{
		Type_t * L_18 = V_1;
		if (L_18)
		{
			goto IL_0018;
		}
	}
	{
		ArrayList_t723 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_19);
		V_3 = ((MemberInfoU5BU5D_t5226*)SZArrayNew(MemberInfoU5BU5D_t5226_il2cpp_TypeInfo_var, L_20));
		ArrayList_t723 * L_21 = V_0;
		MemberInfoU5BU5D_t5226* L_22 = V_3;
		NullCheck(L_21);
		VirtActionInvoker1< Array_t * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_21, (Array_t *)(Array_t *)L_22);
		MemberInfoU5BU5D_t5226* L_23 = V_3;
		return L_23;
	}
}
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern TypeInfo* MonoField_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void FormatterServices_GetFields_m22986 (Object_t * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t723 * ___fields, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MonoField_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8903);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	FieldInfoU5BU5D_t2978* V_0 = {0};
	FieldInfo_t * V_1 = {0};
	FieldInfoU5BU5D_t2978* V_2 = {0};
	int32_t V_3 = 0;
	MonoField_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t2978* L_1 = (FieldInfoU5BU5D_t2978*)VirtFuncInvoker1< FieldInfoU5BU5D_t2978*, int32_t >::Invoke(48 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)54));
		V_0 = L_1;
		FieldInfoU5BU5D_t2978* L_2 = V_0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_006b;
	}

IL_000f:
	{
		FieldInfoU5BU5D_t2978* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_1 = (*(FieldInfo_t **)(FieldInfo_t **)SZArrayLdElema(L_3, L_5));
		FieldInfo_t * L_6 = V_1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized() */, L_6);
		if (L_7)
		{
			goto IL_0067;
		}
	}
	{
		FieldInfo_t * L_8 = V_1;
		V_4 = ((MonoField_t *)IsInst(L_8, MonoField_t_il2cpp_TypeInfo_var));
		MonoField_t * L_9 = V_4;
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_10 = ___reflectedType;
		Type_t * L_11 = ___type;
		if ((((Object_t*)(Type_t *)L_10) == ((Object_t*)(Type_t *)L_11)))
		{
			goto IL_005f;
		}
	}
	{
		MonoField_t * L_12 = V_4;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(21 /* System.Boolean System.Reflection.FieldInfo::get_IsPublic() */, L_12);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		Type_t * L_14 = ___type;
		NullCheck(L_14);
		String_t* L_15 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		MonoField_t * L_16 = V_4;
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MonoField::get_Name() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m455(NULL /*static, unused*/, L_15, (String_t*) &_stringLiteral1102, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		ArrayList_t723 * L_19 = ___fields;
		MonoField_t * L_20 = V_4;
		String_t* L_21 = V_5;
		NullCheck(L_20);
		MonoField_t * L_22 = MonoField_Clone_m22026(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_19, L_22);
		goto IL_0067;
	}

IL_005f:
	{
		ArrayList_t723 * L_23 = ___fields;
		FieldInfo_t * L_24 = V_1;
		NullCheck(L_23);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_23, L_24);
	}

IL_0067:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_006b:
	{
		int32_t L_26 = V_3;
		FieldInfoU5BU5D_t2978* L_27 = V_2;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t736_il2cpp_TypeInfo_var;
extern "C" Object_t * FormatterServices_GetUninitializedObject_m22987 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		ArgumentException_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(192);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t736 * L_4 = (ArgumentException_t736 *)il2cpp_codegen_object_new (ArgumentException_t736_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4285(L_4, (String_t*) &_stringLiteral5960, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		Type_t * L_5 = ___type;
		Object_t * L_6 = ActivationServices_AllocateUninitializedClassInstance_m22728(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetSafeUninitializedObject_m22988 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___type;
		Object_t * L_1 = FormatterServices_GetUninitializedObject_m22987(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_Inst.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator_InstMethodDeclarations.h"



// System.Void System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::.ctor()
extern "C" void InstanceComparer__ctor_m22989 (InstanceComparer_t5193 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" int32_t InstanceComparer_System_Collections_IComparer_Compare_m22990 (InstanceComparer_t5193 * __this, Object_t * ___o1, Object_t * ___o2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		Object_t * L_0 = ___o1;
		if (!((String_t*)IsInst(L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___o1;
		Object_t * L_2 = ___o2;
		NullCheck(L_1);
		bool L_3 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, L_2);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0015;
	}

IL_0014:
	{
		G_B4_0 = 1;
	}

IL_0015:
	{
		return G_B4_0;
	}

IL_0016:
	{
		Object_t * L_4 = ___o1;
		Object_t * L_5 = ___o2;
		if ((!(((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)L_5))))
		{
			goto IL_001d;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B8_0 = 1;
	}

IL_001e:
	{
		return G_B8_0;
	}
}
// System.Int32 System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer::System.Collections.IHashCodeProvider.GetHashCode(System.Object)
extern "C" int32_t InstanceComparer_System_Collections_IHashCodeProvider_GetHashCode_m22991 (InstanceComparer_t5193 * __this, Object_t * ___o, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		int32_t L_1 = Object_InternalGetHashCode_m18607(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGenerator.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectIDGenerator
#include "mscorlib_System_Runtime_Serialization_ObjectIDGeneratorMethodDeclarations.h"



// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern TypeInfo* ObjectIDGenerator_t5194_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" void ObjectIDGenerator__ctor_m22992 (ObjectIDGenerator_t5194 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectIDGenerator_t5194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9211);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ObjectIDGenerator_t5194_il2cpp_TypeInfo_var);
		InstanceComparer_t5193 * L_0 = ((ObjectIDGenerator_t5194_StaticFields*)ObjectIDGenerator_t5194_il2cpp_TypeInfo_var->static_fields)->___comparer_2;
		InstanceComparer_t5193 * L_1 = ((ObjectIDGenerator_t5194_StaticFields*)ObjectIDGenerator_t5194_il2cpp_TypeInfo_var->static_fields)->___comparer_2;
		Hashtable_t721 * L_2 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m18143(L_2, L_0, L_1, /*hidden argument*/NULL);
		__this->___table_0 = L_2;
		__this->___current_1 = (((int64_t)1));
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern TypeInfo* InstanceComparer_t5193_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectIDGenerator_t5194_il2cpp_TypeInfo_var;
extern "C" void ObjectIDGenerator__cctor_m22993 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InstanceComparer_t5193_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9212);
		ObjectIDGenerator_t5194_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9211);
		s_Il2CppMethodIntialized = true;
	}
	{
		InstanceComparer_t5193 * L_0 = (InstanceComparer_t5193 *)il2cpp_codegen_object_new (InstanceComparer_t5193_il2cpp_TypeInfo_var);
		InstanceComparer__ctor_m22989(L_0, /*hidden argument*/NULL);
		((ObjectIDGenerator_t5194_StaticFields*)ObjectIDGenerator_t5194_il2cpp_TypeInfo_var->static_fields)->___comparer_2 = L_0;
		return;
	}
}
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern "C" int64_t ObjectIDGenerator_GetId_m22994 (ObjectIDGenerator_t5194 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int64_t V_1 = 0;
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Hashtable_t721 * L_2 = (__this->___table_0);
		Object_t * L_3 = ___obj;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_3);
		V_0 = L_4;
		Object_t * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		bool* L_6 = ___firstTime;
		*((int8_t*)(L_6)) = (int8_t)0;
		Object_t * L_7 = V_0;
		return ((*(int64_t*)((int64_t*)UnBox (L_7, Int64_t89_il2cpp_TypeInfo_var))));
	}

IL_0028:
	{
		bool* L_8 = ___firstTime;
		*((int8_t*)(L_8)) = (int8_t)1;
		Hashtable_t721 * L_9 = (__this->___table_0);
		Object_t * L_10 = ___obj;
		int64_t L_11 = (__this->___current_1);
		int64_t L_12 = L_11;
		Object_t * L_13 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_9, L_10, L_13);
		int64_t L_14 = (__this->___current_1);
		int64_t L_15 = L_14;
		V_1 = L_15;
		__this->___current_1 = ((int64_t)((int64_t)L_15+(int64_t)(((int64_t)1))));
		int64_t L_16 = V_1;
		return L_16;
	}
}
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C" int64_t ObjectIDGenerator_get_NextId_m22995 (ObjectIDGenerator_t5194 * __this, const MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = (__this->___current_1);
		int64_t L_1 = L_0;
		V_0 = L_1;
		__this->___current_1 = ((int64_t)((int64_t)L_1+(int64_t)(((int64_t)1))));
		int64_t L_2 = V_0;
		return L_2;
	}
}
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManager.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectManager
#include "mscorlib_System_Runtime_Serialization_ObjectManagerMethodDeclarations.h"

// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecord.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0.h"
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecord.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecord.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecord.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecord.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecord.h"
// System.Runtime.Serialization.ObjectRecord
#include "mscorlib_System_Runtime_Serialization_ObjectRecordMethodDeclarations.h"
// System.Runtime.Serialization.SerializationCallbacks
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks_0MethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Runtime.Serialization.ArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_ArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.MultiArrayFixupRecord
#include "mscorlib_System_Runtime_Serialization_MultiArrayFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.DelayedFixupRecord
#include "mscorlib_System_Runtime_Serialization_DelayedFixupRecordMethodDeclarations.h"
// System.Runtime.Serialization.FixupRecord
#include "mscorlib_System_Runtime_Serialization_FixupRecordMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ObjectManager::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" void ObjectManager__ctor_m22996 (ObjectManager_t5196 * __this, Object_t * ___selector, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		__this->____deserializedRecords_2 = L_0;
		ArrayList_t723 * L_1 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_1, /*hidden argument*/NULL);
		__this->____onDeserializedCallbackRecords_3 = L_1;
		Hashtable_t721 * L_2 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_2, /*hidden argument*/NULL);
		__this->____objectRecords_4 = L_2;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_3 = ___selector;
		__this->____selector_6 = L_3;
		StreamingContext_t2948  L_4 = ___context;
		__this->____context_7 = L_4;
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::DoFixups()
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* IDeserializationCallback_t848_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t5454_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_DoFixups_m22997 (ObjectManager_t5196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		IDeserializationCallback_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1244);
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		IObjectReference_t5454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9214);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t5195 * V_0 = {0};
	bool V_1 = false;
	ObjectRecord_t5195 * V_2 = {0};
	bool V_3 = false;
	ObjectRecord_t5195 * V_4 = {0};
	SerializationCallbacks_t5210 * V_5 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		__this->____finalFixup_5 = 1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->____registeredObjectsCount_8);
			Hashtable_t721 * L_1 = (__this->____objectRecords_4);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_1);
			if ((((int32_t)L_0) >= ((int32_t)L_2)))
			{
				goto IL_0025;
			}
		}

IL_001a:
		{
			SerializationException_t4568 * L_3 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
			SerializationException__ctor_m18091(L_3, (String_t*) &_stringLiteral5961, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_3);
		}

IL_0025:
		{
			ObjectRecord_t5195 * L_4 = (__this->____lastObjectRecord_1);
			V_0 = L_4;
			V_1 = 1;
			ObjectRecord_t5195 * L_5 = (__this->____objectRecordChain_0);
			V_2 = L_5;
			goto IL_0136;
		}

IL_003a:
		{
			ObjectRecord_t5195 * L_6 = V_2;
			NullCheck(L_6);
			bool L_7 = ObjectRecord_get_IsUnsolvedObjectReference_m23025(L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_0042:
		{
			bool L_8 = V_1;
			G_B7_0 = ((int32_t)(L_8));
			goto IL_0046;
		}

IL_0045:
		{
			G_B7_0 = 0;
		}

IL_0046:
		{
			V_3 = ((((int32_t)G_B7_0) == ((int32_t)0))? 1 : 0);
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0057;
			}
		}

IL_004d:
		{
			ObjectRecord_t5195 * L_10 = V_2;
			NullCheck(L_10);
			bool L_11 = ObjectRecord_DoFixups_m23027(L_10, 1, __this, 1, /*hidden argument*/NULL);
			V_3 = L_11;
		}

IL_0057:
		{
			bool L_12 = V_3;
			if (!L_12)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			ObjectRecord_t5195 * L_13 = V_2;
			Object_t * L_14 = (__this->____selector_6);
			StreamingContext_t2948  L_15 = (__this->____context_7);
			NullCheck(L_13);
			bool L_16 = ObjectRecord_LoadData_m23031(L_13, __this, L_14, L_15, /*hidden argument*/NULL);
			V_3 = L_16;
		}

IL_006e:
		{
			bool L_17 = V_3;
			if (!L_17)
			{
				goto IL_00bd;
			}
		}

IL_0071:
		{
			ObjectRecord_t5195 * L_18 = V_2;
			NullCheck(L_18);
			Object_t * L_19 = (L_18->___OriginalObject_1);
			if (!((Object_t *)IsInst(L_19, IDeserializationCallback_t848_il2cpp_TypeInfo_var)))
			{
				goto IL_008b;
			}
		}

IL_007e:
		{
			ArrayList_t723 * L_20 = (__this->____deserializedRecords_2);
			ObjectRecord_t5195 * L_21 = V_2;
			NullCheck(L_20);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_20, L_21);
		}

IL_008b:
		{
			ObjectRecord_t5195 * L_22 = V_2;
			NullCheck(L_22);
			Object_t * L_23 = (L_22->___OriginalObject_1);
			NullCheck(L_23);
			Type_t * L_24 = Object_GetType_m4276(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
			SerializationCallbacks_t5210 * L_25 = SerializationCallbacks_GetSerializationCallbacks_m23048(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			V_5 = L_25;
			SerializationCallbacks_t5210 * L_26 = V_5;
			NullCheck(L_26);
			bool L_27 = SerializationCallbacks_get_HasDeserializedCallbacks_m23041(L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00b3;
			}
		}

IL_00a6:
		{
			ArrayList_t723 * L_28 = (__this->____onDeserializedCallbackRecords_3);
			ObjectRecord_t5195 * L_29 = V_2;
			NullCheck(L_28);
			VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_28, L_29);
		}

IL_00b3:
		{
			ObjectRecord_t5195 * L_30 = V_2;
			NullCheck(L_30);
			ObjectRecord_t5195 * L_31 = (L_30->___Next_12);
			V_4 = L_31;
			goto IL_012d;
		}

IL_00bd:
		{
			ObjectRecord_t5195 * L_32 = V_2;
			NullCheck(L_32);
			Object_t * L_33 = (L_32->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_33, IObjectReference_t5454_il2cpp_TypeInfo_var)))
			{
				goto IL_00fd;
			}
		}

IL_00ca:
		{
			bool L_34 = V_1;
			if (L_34)
			{
				goto IL_00fd;
			}
		}

IL_00cd:
		{
			ObjectRecord_t5195 * L_35 = V_2;
			NullCheck(L_35);
			uint8_t L_36 = (L_35->___Status_0);
			if ((!(((uint32_t)L_36) == ((uint32_t)2))))
			{
				goto IL_00f6;
			}
		}

IL_00d6:
		{
			ObjectRecord_t5195 * L_37 = V_2;
			NullCheck(L_37);
			int64_t L_38 = (L_37->___ObjectID_3);
			int64_t L_39 = L_38;
			Object_t * L_40 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_39);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_41 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5962, L_40, (String_t*) &_stringLiteral5963, /*hidden argument*/NULL);
			SerializationException_t4568 * L_42 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
			SerializationException__ctor_m18091(L_42, L_41, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_42);
		}

IL_00f6:
		{
			ObjectRecord_t5195 * L_43 = V_2;
			NullCheck(L_43);
			L_43->___Status_0 = 2;
		}

IL_00fd:
		{
			ObjectRecord_t5195 * L_44 = V_2;
			ObjectRecord_t5195 * L_45 = (__this->____lastObjectRecord_1);
			if ((((Object_t*)(ObjectRecord_t5195 *)L_44) == ((Object_t*)(ObjectRecord_t5195 *)L_45)))
			{
				goto IL_012a;
			}
		}

IL_0106:
		{
			ObjectRecord_t5195 * L_46 = V_2;
			NullCheck(L_46);
			ObjectRecord_t5195 * L_47 = (L_46->___Next_12);
			V_4 = L_47;
			ObjectRecord_t5195 * L_48 = V_2;
			NullCheck(L_48);
			L_48->___Next_12 = (ObjectRecord_t5195 *)NULL;
			ObjectRecord_t5195 * L_49 = (__this->____lastObjectRecord_1);
			ObjectRecord_t5195 * L_50 = V_2;
			NullCheck(L_49);
			L_49->___Next_12 = L_50;
			ObjectRecord_t5195 * L_51 = V_2;
			__this->____lastObjectRecord_1 = L_51;
			goto IL_012d;
		}

IL_012a:
		{
			ObjectRecord_t5195 * L_52 = V_2;
			V_4 = L_52;
		}

IL_012d:
		{
			ObjectRecord_t5195 * L_53 = V_2;
			ObjectRecord_t5195 * L_54 = V_0;
			if ((!(((Object_t*)(ObjectRecord_t5195 *)L_53) == ((Object_t*)(ObjectRecord_t5195 *)L_54))))
			{
				goto IL_0133;
			}
		}

IL_0131:
		{
			V_1 = 0;
		}

IL_0133:
		{
			ObjectRecord_t5195 * L_55 = V_4;
			V_2 = L_55;
		}

IL_0136:
		{
			ObjectRecord_t5195 * L_56 = V_2;
			if (L_56)
			{
				goto IL_003a;
			}
		}

IL_013c:
		{
			IL2CPP_LEAVE(0x146, FINALLY_013e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_013e;
	}

FINALLY_013e:
	{ // begin finally (depth: 1)
		__this->____finalFixup_5 = 0;
		IL2CPP_END_FINALLY(318)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(318)
	{
		IL2CPP_JUMP_TBL(0x146, IL_0146)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0146:
	{
		return;
	}
}
// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::GetObjectRecord(System.Int64)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectRecord_t5195_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern "C" ObjectRecord_t5195 * ObjectManager_GetObjectRecord_m22998 (ObjectManager_t5196 * __this, int64_t ___objectID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ObjectRecord_t5195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9215);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t5195 * V_0 = {0};
	{
		Hashtable_t721 * L_0 = (__this->____objectRecords_4);
		int64_t L_1 = ___objectID;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_3);
		V_0 = ((ObjectRecord_t5195 *)Castclass(L_4, ObjectRecord_t5195_il2cpp_TypeInfo_var));
		ObjectRecord_t5195 * L_5 = V_0;
		if (L_5)
		{
			goto IL_005c;
		}
	}
	{
		bool L_6 = (__this->____finalFixup_5);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_7 = ___objectID;
		int64_t L_8 = L_7;
		Object_t * L_9 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5964, L_9, (String_t*) &_stringLiteral5965, /*hidden argument*/NULL);
		SerializationException_t4568 * L_11 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_003d:
	{
		ObjectRecord_t5195 * L_12 = (ObjectRecord_t5195 *)il2cpp_codegen_object_new (ObjectRecord_t5195_il2cpp_TypeInfo_var);
		ObjectRecord__ctor_m23020(L_12, /*hidden argument*/NULL);
		V_0 = L_12;
		ObjectRecord_t5195 * L_13 = V_0;
		int64_t L_14 = ___objectID;
		NullCheck(L_13);
		L_13->___ObjectID_3 = L_14;
		Hashtable_t721 * L_15 = (__this->____objectRecords_4);
		int64_t L_16 = ___objectID;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_17);
		ObjectRecord_t5195 * L_19 = V_0;
		NullCheck(L_15);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_18, L_19);
	}

IL_005c:
	{
		ObjectRecord_t5195 * L_20 = V_0;
		NullCheck(L_20);
		bool L_21 = ObjectRecord_get_IsRegistered_m23026(L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0087;
		}
	}
	{
		bool L_22 = (__this->____finalFixup_5);
		if (!L_22)
		{
			goto IL_0087;
		}
	}
	{
		int64_t L_23 = ___objectID;
		int64_t L_24 = L_23;
		Object_t * L_25 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_24);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5964, L_25, (String_t*) &_stringLiteral5965, /*hidden argument*/NULL);
		SerializationException_t4568 * L_27 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_27, L_26, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0087:
	{
		ObjectRecord_t5195 * L_28 = V_0;
		return L_28;
	}
}
// System.Object System.Runtime.Serialization.ObjectManager::GetObject(System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectRecord_t5195_il2cpp_TypeInfo_var;
extern "C" Object_t * ObjectManager_GetObject_m22999 (ObjectManager_t5196 * __this, int64_t ___objectID, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		ObjectRecord_t5195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9215);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t5195 * V_0 = {0};
	{
		int64_t L_0 = ___objectID;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_1 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_1, (String_t*) &_stringLiteral5966, (String_t*) &_stringLiteral5967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		Hashtable_t721 * L_2 = (__this->____objectRecords_4);
		int64_t L_3 = ___objectID;
		int64_t L_4 = L_3;
		Object_t * L_5 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		Object_t * L_6 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_2, L_5);
		V_0 = ((ObjectRecord_t5195 *)Castclass(L_6, ObjectRecord_t5195_il2cpp_TypeInfo_var));
		ObjectRecord_t5195 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ObjectRecord_t5195 * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = ObjectRecord_get_IsRegistered_m23026(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return NULL;
	}

IL_0039:
	{
		ObjectRecord_t5195 * L_10 = V_0;
		NullCheck(L_10);
		Object_t * L_11 = (L_10->___ObjectInstance_2);
		return L_11;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseDeserializationEvent()
extern TypeInfo* ObjectRecord_t5195_il2cpp_TypeInfo_var;
extern TypeInfo* IDeserializationCallback_t848_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseDeserializationEvent_m23000 (ObjectManager_t5196 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectRecord_t5195_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9215);
		IDeserializationCallback_t848_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1244);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ObjectRecord_t5195 * V_1 = {0};
	int32_t V_2 = 0;
	ObjectRecord_t5195 * V_3 = {0};
	Object_t * V_4 = {0};
	{
		ArrayList_t723 * L_0 = (__this->____onDeserializedCallbackRecords_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		V_0 = ((int32_t)((int32_t)L_1-(int32_t)1));
		goto IL_0032;
	}

IL_0010:
	{
		ArrayList_t723 * L_2 = (__this->____onDeserializedCallbackRecords_3);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Object_t * L_4 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((ObjectRecord_t5195 *)Castclass(L_4, ObjectRecord_t5195_il2cpp_TypeInfo_var));
		ObjectRecord_t5195 * L_5 = V_1;
		NullCheck(L_5);
		Object_t * L_6 = (L_5->___OriginalObject_1);
		ObjectManager_RaiseOnDeserializedEvent_m23002(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		ArrayList_t723 * L_9 = (__this->____deserializedRecords_2);
		NullCheck(L_9);
		int32_t L_10 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		V_2 = ((int32_t)((int32_t)L_10-(int32_t)1));
		goto IL_0075;
	}

IL_0046:
	{
		ArrayList_t723 * L_11 = (__this->____deserializedRecords_2);
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_11, L_12);
		V_3 = ((ObjectRecord_t5195 *)Castclass(L_13, ObjectRecord_t5195_il2cpp_TypeInfo_var));
		ObjectRecord_t5195 * L_14 = V_3;
		NullCheck(L_14);
		Object_t * L_15 = (L_14->___OriginalObject_1);
		V_4 = ((Object_t *)IsInst(L_15, IDeserializationCallback_t848_il2cpp_TypeInfo_var));
		Object_t * L_16 = V_4;
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		Object_t * L_17 = V_4;
		NullCheck(L_17);
		InterfaceActionInvoker1< Object_t * >::Invoke(0 /* System.Void System.Runtime.Serialization.IDeserializationCallback::OnDeserialization(System.Object) */, IDeserializationCallback_t848_il2cpp_TypeInfo_var, L_17, __this);
	}

IL_0071:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18-(int32_t)1));
	}

IL_0075:
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializingEvent(System.Object)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseOnDeserializingEvent_m23001 (ObjectManager_t5196 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t5210 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m4276(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_t5210 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m23048(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SerializationCallbacks_t5210 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t2948  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserializing_m23046(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RaiseOnDeserializedEvent(System.Object)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RaiseOnDeserializedEvent_m23002 (ObjectManager_t5196 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t5210 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m4276(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_t5210 * L_2 = SerializationCallbacks_GetSerializationCallbacks_m23048(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SerializationCallbacks_t5210 * L_3 = V_0;
		Object_t * L_4 = ___obj;
		StreamingContext_t2948  L_5 = (__this->____context_7);
		NullCheck(L_3);
		SerializationCallbacks_RaiseOnDeserialized_m23047(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::AddFixup(System.Runtime.Serialization.BaseFixupRecord)
extern "C" void ObjectManager_AddFixup_m23003 (ObjectManager_t5196 * __this, BaseFixupRecord_t5197 * ___record, const MethodInfo* method)
{
	{
		BaseFixupRecord_t5197 * L_0 = ___record;
		NullCheck(L_0);
		ObjectRecord_t5195 * L_1 = (L_0->___ObjectToBeFixed_0);
		BaseFixupRecord_t5197 * L_2 = ___record;
		NullCheck(L_1);
		ObjectRecord_ChainFixup_m23030(L_1, L_2, 1, /*hidden argument*/NULL);
		BaseFixupRecord_t5197 * L_3 = ___record;
		NullCheck(L_3);
		ObjectRecord_t5195 * L_4 = (L_3->___ObjectRequired_1);
		BaseFixupRecord_t5197 * L_5 = ___record;
		NullCheck(L_4);
		ObjectRecord_ChainFixup_m23030(L_4, L_5, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayFixupRecord_t5198_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordArrayElementFixup_m23004 (ObjectManager_t5196 * __this, int64_t ___arrayToBeFixed, int32_t ___index, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		ArrayFixupRecord_t5198_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9216);
		s_Il2CppMethodIntialized = true;
	}
	ArrayFixupRecord_t5198 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_1 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_1, (String_t*) &_stringLiteral5968, (String_t*) &_stringLiteral5969, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_3 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_3, (String_t*) &_stringLiteral5970, (String_t*) &_stringLiteral5971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		int64_t L_4 = ___arrayToBeFixed;
		ObjectRecord_t5195 * L_5 = ObjectManager_GetObjectRecord_m22998(__this, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___index;
		int64_t L_7 = ___objectRequired;
		ObjectRecord_t5195 * L_8 = ObjectManager_GetObjectRecord_m22998(__this, L_7, /*hidden argument*/NULL);
		ArrayFixupRecord_t5198 * L_9 = (ArrayFixupRecord_t5198 *)il2cpp_codegen_object_new (ArrayFixupRecord_t5198_il2cpp_TypeInfo_var);
		ArrayFixupRecord__ctor_m23012(L_9, L_5, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		ArrayFixupRecord_t5198 * L_10 = V_0;
		ObjectManager_AddFixup_m23003(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordArrayElementFixup(System.Int64,System.Int32[],System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* MultiArrayFixupRecord_t5199_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordArrayElementFixup_m23005 (ObjectManager_t5196 * __this, int64_t ___arrayToBeFixed, Int32U5BU5D_t484* ___indices, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		MultiArrayFixupRecord_t5199_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9217);
		s_Il2CppMethodIntialized = true;
	}
	MultiArrayFixupRecord_t5199 * V_0 = {0};
	{
		int64_t L_0 = ___arrayToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_1 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_1, (String_t*) &_stringLiteral5968, (String_t*) &_stringLiteral5969, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_3 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_3, (String_t*) &_stringLiteral5970, (String_t*) &_stringLiteral5971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		Int32U5BU5D_t484* L_4 = ___indices;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t795 * L_5 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_5, (String_t*) &_stringLiteral4731, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___arrayToBeFixed;
		ObjectRecord_t5195 * L_7 = ObjectManager_GetObjectRecord_m22998(__this, L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_8 = ___indices;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t5195 * L_10 = ObjectManager_GetObjectRecord_m22998(__this, L_9, /*hidden argument*/NULL);
		MultiArrayFixupRecord_t5199 * L_11 = (MultiArrayFixupRecord_t5199 *)il2cpp_codegen_object_new (MultiArrayFixupRecord_t5199_il2cpp_TypeInfo_var);
		MultiArrayFixupRecord__ctor_m23014(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		MultiArrayFixupRecord_t5199 * L_12 = V_0;
		ObjectManager_AddFixup_m23003(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordDelayedFixup(System.Int64,System.String,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* DelayedFixupRecord_t5201_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordDelayedFixup_m23006 (ObjectManager_t5196 * __this, int64_t ___objectToBeFixed, String_t* ___memberName, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		DelayedFixupRecord_t5201_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9218);
		s_Il2CppMethodIntialized = true;
	}
	DelayedFixupRecord_t5201 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_1 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_1, (String_t*) &_stringLiteral5972, (String_t*) &_stringLiteral5973, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_3 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_3, (String_t*) &_stringLiteral5970, (String_t*) &_stringLiteral5971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		String_t* L_4 = ___memberName;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t795 * L_5 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_5, (String_t*) &_stringLiteral5974, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_7 = ObjectManager_GetObjectRecord_m22998(__this, L_6, /*hidden argument*/NULL);
		String_t* L_8 = ___memberName;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t5195 * L_10 = ObjectManager_GetObjectRecord_m22998(__this, L_9, /*hidden argument*/NULL);
		DelayedFixupRecord_t5201 * L_11 = (DelayedFixupRecord_t5201 *)il2cpp_codegen_object_new (DelayedFixupRecord_t5201_il2cpp_TypeInfo_var);
		DelayedFixupRecord__ctor_m23018(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		DelayedFixupRecord_t5201 * L_12 = V_0;
		ObjectManager_AddFixup_m23003(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* FixupRecord_t5200_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RecordFixup_m23007 (ObjectManager_t5196 * __this, int64_t ___objectToBeFixed, MemberInfo_t * ___member, int64_t ___objectRequired, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		FixupRecord_t5200_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9219);
		s_Il2CppMethodIntialized = true;
	}
	FixupRecord_t5200 * V_0 = {0};
	{
		int64_t L_0 = ___objectToBeFixed;
		if ((((int64_t)L_0) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_1 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_1, (String_t*) &_stringLiteral5972, (String_t*) &_stringLiteral5973, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int64_t L_2 = ___objectRequired;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_3 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_3, (String_t*) &_stringLiteral5970, (String_t*) &_stringLiteral5971, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002a:
	{
		MemberInfo_t * L_4 = ___member;
		if (L_4)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentNullException_t795 * L_5 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_5, (String_t*) &_stringLiteral3838, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0038:
	{
		int64_t L_6 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_7 = ObjectManager_GetObjectRecord_m22998(__this, L_6, /*hidden argument*/NULL);
		MemberInfo_t * L_8 = ___member;
		int64_t L_9 = ___objectRequired;
		ObjectRecord_t5195 * L_10 = ObjectManager_GetObjectRecord_m22998(__this, L_9, /*hidden argument*/NULL);
		FixupRecord_t5200 * L_11 = (FixupRecord_t5200 *)il2cpp_codegen_object_new (FixupRecord_t5200_il2cpp_TypeInfo_var);
		FixupRecord__ctor_m23016(L_11, L_7, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		FixupRecord_t5200 * L_12 = V_0;
		ObjectManager_AddFixup_m23003(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObjectInternal(System.Object,System.Runtime.Serialization.ObjectRecord)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t5454_il2cpp_TypeInfo_var;
extern TypeInfo* ISurrogateSelector_t5183_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RegisterObjectInternal_m23008 (ObjectManager_t5196 * __this, Object_t * ___obj, ObjectRecord_t5195 * ___record, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		IObjectReference_t5454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9214);
		ISurrogateSelector_t5183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9206);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5096, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		ObjectRecord_t5195 * L_2 = ___record;
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsRegistered_m23026(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		ObjectRecord_t5195 * L_4 = ___record;
		NullCheck(L_4);
		Object_t * L_5 = (L_4->___OriginalObject_1);
		Object_t * L_6 = ___obj;
		if ((((Object_t*)(Object_t *)L_5) == ((Object_t*)(Object_t *)L_6)))
		{
			goto IL_003f;
		}
	}
	{
		ObjectRecord_t5195 * L_7 = ___record;
		NullCheck(L_7);
		int64_t L_8 = (L_7->___ObjectID_3);
		int64_t L_9 = L_8;
		Object_t * L_10 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5975, L_10, (String_t*) &_stringLiteral5976, /*hidden argument*/NULL);
		SerializationException_t4568 * L_12 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_12, L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_003f:
	{
		return;
	}

IL_0040:
	{
		ObjectRecord_t5195 * L_13 = ___record;
		Object_t * L_14 = ___obj;
		NullCheck(L_13);
		L_13->___ObjectInstance_2 = L_14;
		ObjectRecord_t5195 * L_15 = ___record;
		Object_t * L_16 = ___obj;
		NullCheck(L_15);
		L_15->___OriginalObject_1 = L_16;
		Object_t * L_17 = ___obj;
		if (!((Object_t *)IsInst(L_17, IObjectReference_t5454_il2cpp_TypeInfo_var)))
		{
			goto IL_005f;
		}
	}
	{
		ObjectRecord_t5195 * L_18 = ___record;
		NullCheck(L_18);
		L_18->___Status_0 = 1;
		goto IL_0066;
	}

IL_005f:
	{
		ObjectRecord_t5195 * L_19 = ___record;
		NullCheck(L_19);
		L_19->___Status_0 = 3;
	}

IL_0066:
	{
		Object_t * L_20 = (__this->____selector_6);
		if (!L_20)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t5195 * L_21 = ___record;
		Object_t * L_22 = (__this->____selector_6);
		Object_t * L_23 = ___obj;
		NullCheck(L_23);
		Type_t * L_24 = Object_GetType_m4276(L_23, /*hidden argument*/NULL);
		StreamingContext_t2948  L_25 = (__this->____context_7);
		ObjectRecord_t5195 * L_26 = ___record;
		NullCheck(L_26);
		Object_t ** L_27 = &(L_26->___SurrogateSelector_7);
		NullCheck(L_22);
		Object_t * L_28 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t2948 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t5183_il2cpp_TypeInfo_var, L_22, L_24, L_25, L_27);
		NullCheck(L_21);
		L_21->___Surrogate_6 = L_28;
		ObjectRecord_t5195 * L_29 = ___record;
		NullCheck(L_29);
		Object_t * L_30 = (L_29->___Surrogate_6);
		if (!L_30)
		{
			goto IL_00a0;
		}
	}
	{
		ObjectRecord_t5195 * L_31 = ___record;
		NullCheck(L_31);
		L_31->___Status_0 = 1;
	}

IL_00a0:
	{
		ObjectRecord_t5195 * L_32 = ___record;
		NullCheck(L_32);
		ObjectRecord_DoFixups_m23027(L_32, 1, __this, 0, /*hidden argument*/NULL);
		ObjectRecord_t5195 * L_33 = ___record;
		NullCheck(L_33);
		ObjectRecord_DoFixups_m23027(L_33, 0, __this, 0, /*hidden argument*/NULL);
		int32_t L_34 = (__this->____registeredObjectsCount_8);
		__this->____registeredObjectsCount_8 = ((int32_t)((int32_t)L_34+(int32_t)1));
		ObjectRecord_t5195 * L_35 = (__this->____objectRecordChain_0);
		if (L_35)
		{
			goto IL_00da;
		}
	}
	{
		ObjectRecord_t5195 * L_36 = ___record;
		__this->____objectRecordChain_0 = L_36;
		ObjectRecord_t5195 * L_37 = ___record;
		__this->____lastObjectRecord_1 = L_37;
		goto IL_00ed;
	}

IL_00da:
	{
		ObjectRecord_t5195 * L_38 = (__this->____lastObjectRecord_1);
		ObjectRecord_t5195 * L_39 = ___record;
		NullCheck(L_38);
		L_38->___Next_12 = L_39;
		ObjectRecord_t5195 * L_40 = ___record;
		__this->____lastObjectRecord_1 = L_40;
	}

IL_00ed:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var;
extern "C" void ObjectManager_RegisterObject_m23009 (ObjectManager_t5196 * __this, Object_t * ___obj, int64_t ___objectID, SerializationInfo_t2947 * ___info, int64_t ___idOfContainingObj, MemberInfo_t * ___member, Int32U5BU5D_t484* ___arrayIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2648);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t5195 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4286(L_1, (String_t*) &_stringLiteral5096, (String_t*) &_stringLiteral5977, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int64_t L_2 = ___objectID;
		if ((((int64_t)L_2) > ((int64_t)(((int64_t)0)))))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_t1501 * L_3 = (ArgumentOutOfRangeException_t1501 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1501_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7729(L_3, (String_t*) &_stringLiteral5966, (String_t*) &_stringLiteral5967, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0028:
	{
		int64_t L_4 = ___objectID;
		ObjectRecord_t5195 * L_5 = ObjectManager_GetObjectRecord_m22998(__this, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ObjectRecord_t5195 * L_6 = V_0;
		SerializationInfo_t2947 * L_7 = ___info;
		NullCheck(L_6);
		L_6->___Info_4 = L_7;
		ObjectRecord_t5195 * L_8 = V_0;
		int64_t L_9 = ___idOfContainingObj;
		NullCheck(L_8);
		L_8->___IdOfContainingObj_5 = L_9;
		ObjectRecord_t5195 * L_10 = V_0;
		MemberInfo_t * L_11 = ___member;
		NullCheck(L_10);
		L_10->___Member_8 = L_11;
		ObjectRecord_t5195 * L_12 = V_0;
		Int32U5BU5D_t484* L_13 = ___arrayIndex;
		NullCheck(L_12);
		L_12->___ArrayIndex_9 = L_13;
		Object_t * L_14 = ___obj;
		ObjectRecord_t5195 * L_15 = V_0;
		ObjectManager_RegisterObjectInternal_m23008(__this, L_14, L_15, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.BaseFixupRecord
#include "mscorlib_System_Runtime_Serialization_BaseFixupRecordMethodDeclarations.h"



// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m23010 (BaseFixupRecord_t5197 * __this, ObjectRecord_t5195 * ___objectToBeFixed, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ObjectRecord_t5195 * L_0 = ___objectToBeFixed;
		__this->___ObjectToBeFixed_0 = L_0;
		ObjectRecord_t5195 * L_1 = ___objectRequired;
		__this->___ObjectRequired_1 = L_1;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern "C" bool BaseFixupRecord_DoFixup_m23011 (BaseFixupRecord_t5197 * __this, ObjectManager_t5196 * ___manager, bool ___strict, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectRecord_t5195 * L_0 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_0);
		bool L_1 = ObjectRecord_get_IsRegistered_m23026(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		ObjectRecord_t5195 * L_2 = (__this->___ObjectRequired_1);
		NullCheck(L_2);
		bool L_3 = ObjectRecord_get_IsInstanceReady_m23024(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		ObjectManager_t5196 * L_4 = ___manager;
		VirtActionInvoker1< ObjectManager_t5196 * >::Invoke(4 /* System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager) */, __this, L_4);
		return 1;
	}

IL_0023:
	{
		bool L_5 = ___strict;
		if (!L_5)
		{
			goto IL_008c;
		}
	}
	{
		ObjectRecord_t5195 * L_6 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_6);
		bool L_7 = ObjectRecord_get_IsRegistered_m23026(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0058;
		}
	}
	{
		ObjectRecord_t5195 * L_8 = (__this->___ObjectToBeFixed_0);
		NullCheck(L_8);
		int64_t L_9 = (L_8->___ObjectID_3);
		int64_t L_10 = L_9;
		Object_t * L_11 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5978, L_11, (String_t*) &_stringLiteral5979, /*hidden argument*/NULL);
		SerializationException_t4568 * L_13 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_13, L_12, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0058:
	{
		ObjectRecord_t5195 * L_14 = (__this->___ObjectRequired_1);
		NullCheck(L_14);
		bool L_15 = ObjectRecord_get_IsRegistered_m23026(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		ObjectRecord_t5195 * L_16 = (__this->___ObjectRequired_1);
		NullCheck(L_16);
		int64_t L_17 = (L_16->___ObjectID_3);
		int64_t L_18 = L_17;
		Object_t * L_19 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_18);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5978, L_19, (String_t*) &_stringLiteral5979, /*hidden argument*/NULL);
		SerializationException_t4568 * L_21 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_21, L_20, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_008a:
	{
		return 0;
	}

IL_008c:
	{
		return 0;
	}
}
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
#ifndef _MSC_VER
#else
#endif

// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
extern "C" void ArrayFixupRecord__ctor_m23012 (ArrayFixupRecord_t5198 * __this, ObjectRecord_t5195 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m23010(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___index;
		__this->____index_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" void ArrayFixupRecord_FixupImpl_m23013 (ArrayFixupRecord_t5198 * __this, ObjectManager_t5196 * ___manager, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2796);
		s_Il2CppMethodIntialized = true;
	}
	Array_t * V_0 = {0};
	{
		ObjectRecord_t5195 * L_0 = (((BaseFixupRecord_t5197 *)__this)->___ObjectToBeFixed_0);
		NullCheck(L_0);
		Object_t * L_1 = (L_0->___ObjectInstance_2);
		V_0 = ((Array_t *)Castclass(L_1, Array_t_il2cpp_TypeInfo_var));
		Array_t * L_2 = V_0;
		ObjectRecord_t5195 * L_3 = (((BaseFixupRecord_t5197 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		int32_t L_5 = (__this->____index_4);
		NullCheck(L_2);
		Array_SetValue_m18088(L_2, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
extern "C" void MultiArrayFixupRecord__ctor_m23014 (MultiArrayFixupRecord_t5199 * __this, ObjectRecord_t5195 * ___objectToBeFixed, Int32U5BU5D_t484* ___indices, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m23010(__this, L_0, L_1, /*hidden argument*/NULL);
		Int32U5BU5D_t484* L_2 = ___indices;
		__this->____indices_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void MultiArrayFixupRecord_FixupImpl_m23015 (MultiArrayFixupRecord_t5199 * __this, ObjectManager_t5196 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = (((BaseFixupRecord_t5197 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t5196 * L_1 = ___manager;
		ObjectRecord_t5195 * L_2 = (((BaseFixupRecord_t5197 *)__this)->___ObjectRequired_1);
		NullCheck(L_2);
		Object_t * L_3 = (L_2->___ObjectInstance_2);
		Int32U5BU5D_t484* L_4 = (__this->____indices_4);
		NullCheck(L_0);
		ObjectRecord_SetArrayValue_m23022(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
extern "C" void FixupRecord__ctor_m23016 (FixupRecord_t5200 * __this, ObjectRecord_t5195 * ___objectToBeFixed, MemberInfo_t * ___member, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m23010(__this, L_0, L_1, /*hidden argument*/NULL);
		MemberInfo_t * L_2 = ___member;
		__this->____member_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void FixupRecord_FixupImpl_m23017 (FixupRecord_t5200 * __this, ObjectManager_t5196 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = (((BaseFixupRecord_t5197 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t5196 * L_1 = ___manager;
		MemberInfo_t * L_2 = (__this->____member_4);
		ObjectRecord_t5195 * L_3 = (((BaseFixupRecord_t5197 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m23021(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
extern "C" void DelayedFixupRecord__ctor_m23018 (DelayedFixupRecord_t5201 * __this, ObjectRecord_t5195 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t5195 * ___objectRequired, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = ___objectToBeFixed;
		ObjectRecord_t5195 * L_1 = ___objectRequired;
		BaseFixupRecord__ctor_m23010(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___memberName;
		__this->____memberName_4 = L_2;
		return;
	}
}
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
extern "C" void DelayedFixupRecord_FixupImpl_m23019 (DelayedFixupRecord_t5201 * __this, ObjectManager_t5196 * ___manager, const MethodInfo* method)
{
	{
		ObjectRecord_t5195 * L_0 = (((BaseFixupRecord_t5197 *)__this)->___ObjectToBeFixed_0);
		ObjectManager_t5196 * L_1 = ___manager;
		String_t* L_2 = (__this->____memberName_4);
		ObjectRecord_t5195 * L_3 = (((BaseFixupRecord_t5197 *)__this)->___ObjectRequired_1);
		NullCheck(L_3);
		Object_t * L_4 = (L_3->___ObjectInstance_2);
		NullCheck(L_0);
		ObjectRecord_SetMemberValue_m23023(L_0, L_1, L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatusMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"


// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m23020 (ObjectRecord_t5195 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern TypeInfo* FieldInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* PropertyInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetMemberValue_m23021 (ObjectRecord_t5195 * __this, ObjectManager_t5196 * ___manager, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FieldInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4597);
		PropertyInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3539);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		s_Il2CppMethodIntialized = true;
	}
	ObjectRecord_t5195 * V_0 = {0};
	ObjectRecord_t5195 * V_1 = {0};
	{
		MemberInfo_t * L_0 = ___member;
		if (!((FieldInfo_t *)IsInst(L_0, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		MemberInfo_t * L_1 = ___member;
		Object_t * L_2 = (__this->___ObjectInstance_2);
		Object_t * L_3 = ___value;
		NullCheck(((FieldInfo_t *)Castclass(L_1, FieldInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(24 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object) */, ((FieldInfo_t *)Castclass(L_1, FieldInfo_t_il2cpp_TypeInfo_var)), L_2, L_3);
		goto IL_0044;
	}

IL_001c:
	{
		MemberInfo_t * L_4 = ___member;
		if (!((PropertyInfo_t *)IsInst(L_4, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t * L_5 = ___member;
		Object_t * L_6 = (__this->___ObjectInstance_2);
		Object_t * L_7 = ___value;
		NullCheck(((PropertyInfo_t *)Castclass(L_5, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< Object_t *, Object_t *, ObjectU5BU5D_t707* >::Invoke(25 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)Castclass(L_5, PropertyInfo_t_il2cpp_TypeInfo_var)), L_6, L_7, (ObjectU5BU5D_t707*)(ObjectU5BU5D_t707*)NULL);
		goto IL_0044;
	}

IL_0039:
	{
		SerializationException_t4568 * L_8 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_8, (String_t*) &_stringLiteral5980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		MemberInfo_t * L_9 = (__this->___Member_8);
		if (!L_9)
		{
			goto IL_0076;
		}
	}
	{
		ObjectManager_t5196 * L_10 = ___manager;
		int64_t L_11 = (__this->___IdOfContainingObj_5);
		NullCheck(L_10);
		ObjectRecord_t5195 * L_12 = ObjectManager_GetObjectRecord_m22998(L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		ObjectRecord_t5195 * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = ObjectRecord_get_IsRegistered_m23026(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		ObjectRecord_t5195 * L_15 = V_0;
		ObjectManager_t5196 * L_16 = ___manager;
		MemberInfo_t * L_17 = (__this->___Member_8);
		Object_t * L_18 = (__this->___ObjectInstance_2);
		NullCheck(L_15);
		ObjectRecord_SetMemberValue_m23021(L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
	}

IL_0074:
	{
		goto IL_00a6;
	}

IL_0076:
	{
		Int32U5BU5D_t484* L_19 = (__this->___ArrayIndex_9);
		if (!L_19)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectManager_t5196 * L_20 = ___manager;
		int64_t L_21 = (__this->___IdOfContainingObj_5);
		NullCheck(L_20);
		ObjectRecord_t5195 * L_22 = ObjectManager_GetObjectRecord_m22998(L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		ObjectRecord_t5195 * L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = ObjectRecord_get_IsRegistered_m23026(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		ObjectRecord_t5195 * L_25 = V_1;
		ObjectManager_t5196 * L_26 = ___manager;
		Object_t * L_27 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t484* L_28 = (__this->___ArrayIndex_9);
		NullCheck(L_25);
		ObjectRecord_SetArrayValue_m23022(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern TypeInfo* Array_t_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetArrayValue_m23022 (ObjectRecord_t5195 * __this, ObjectManager_t5196 * ___manager, Object_t * ___value, Int32U5BU5D_t484* ___indices, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Array_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2796);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___ObjectInstance_2);
		Object_t * L_1 = ___value;
		Int32U5BU5D_t484* L_2 = ___indices;
		NullCheck(((Array_t *)Castclass(L_0, Array_t_il2cpp_TypeInfo_var)));
		Array_SetValue_m19176(((Array_t *)Castclass(L_0, Array_t_il2cpp_TypeInfo_var)), L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern "C" void ObjectRecord_SetMemberValue_m23023 (ObjectRecord_t5195 * __this, ObjectManager_t5196 * ___manager, String_t* ___memberName, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2947 * L_0 = (__this->___Info_4);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t4568 * L_1 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_1, (String_t*) &_stringLiteral5980, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		SerializationInfo_t2947 * L_2 = (__this->___Info_4);
		String_t* L_3 = ___memberName;
		Object_t * L_4 = ___value;
		Object_t * L_5 = ___value;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m4276(L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m18090(L_2, L_3, L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m23024 (ObjectRecord_t5195 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ObjectRecord_get_IsRegistered_m23026(__this, /*hidden argument*/NULL);
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
		bool L_1 = ObjectRecord_get_IsUnsolvedObjectReference_m23025(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		return 0;
	}

IL_0014:
	{
		Object_t * L_2 = (__this->___ObjectInstance_2);
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m4276(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean System.Type::get_IsValueType() */, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		bool L_5 = ObjectRecord_get_HasPendingFixups_m23032(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		SerializationInfo_t2947 * L_6 = (__this->___Info_4);
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return 0;
	}

IL_0038:
	{
		return 1;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m23025 (ObjectRecord_t5195 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m23026 (ObjectRecord_t5195 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___Status_0);
		return ((((int32_t)((((int32_t)L_0) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m23027 (ObjectRecord_t5195 * __this, bool ___asContainer, ObjectManager_t5196 * ___manager, bool ___strict, const MethodInfo* method)
{
	BaseFixupRecord_t5197 * V_0 = {0};
	BaseFixupRecord_t5197 * V_1 = {0};
	bool V_2 = false;
	BaseFixupRecord_t5197 * G_B3_0 = {0};
	BaseFixupRecord_t5197 * G_B13_0 = {0};
	{
		V_0 = (BaseFixupRecord_t5197 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t5197 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t5197 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		V_2 = 1;
		goto IL_0062;
	}

IL_0018:
	{
		BaseFixupRecord_t5197 * L_3 = V_1;
		ObjectManager_t5196 * L_4 = ___manager;
		bool L_5 = ___strict;
		NullCheck(L_3);
		bool L_6 = BaseFixupRecord_DoFixup_m23011(L_3, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		BaseFixupRecord_t5197 * L_7 = V_1;
		BaseFixupRecord_t5197 * L_8 = V_0;
		bool L_9 = ___asContainer;
		ObjectRecord_UnchainFixup_m23029(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		bool L_10 = ___asContainer;
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		BaseFixupRecord_t5197 * L_11 = V_1;
		NullCheck(L_11);
		ObjectRecord_t5195 * L_12 = (L_11->___ObjectRequired_1);
		BaseFixupRecord_t5197 * L_13 = V_1;
		NullCheck(L_12);
		ObjectRecord_RemoveFixup_m23028(L_12, L_13, 0, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_003d:
	{
		BaseFixupRecord_t5197 * L_14 = V_1;
		NullCheck(L_14);
		ObjectRecord_t5195 * L_15 = (L_14->___ObjectToBeFixed_0);
		BaseFixupRecord_t5197 * L_16 = V_1;
		NullCheck(L_15);
		ObjectRecord_RemoveFixup_m23028(L_15, L_16, 1, /*hidden argument*/NULL);
	}

IL_004a:
	{
		goto IL_0050;
	}

IL_004c:
	{
		BaseFixupRecord_t5197 * L_17 = V_1;
		V_0 = L_17;
		V_2 = 0;
	}

IL_0050:
	{
		bool L_18 = ___asContainer;
		if (!L_18)
		{
			goto IL_005b;
		}
	}
	{
		BaseFixupRecord_t5197 * L_19 = V_1;
		NullCheck(L_19);
		BaseFixupRecord_t5197 * L_20 = (L_19->___NextSameContainer_2);
		G_B13_0 = L_20;
		goto IL_0061;
	}

IL_005b:
	{
		BaseFixupRecord_t5197 * L_21 = V_1;
		NullCheck(L_21);
		BaseFixupRecord_t5197 * L_22 = (L_21->___NextSameRequired_3);
		G_B13_0 = L_22;
	}

IL_0061:
	{
		V_1 = G_B13_0;
	}

IL_0062:
	{
		BaseFixupRecord_t5197 * L_23 = V_1;
		if (L_23)
		{
			goto IL_0018;
		}
	}
	{
		bool L_24 = V_2;
		return L_24;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m23028 (ObjectRecord_t5195 * __this, BaseFixupRecord_t5197 * ___fixupToRemove, bool ___asContainer, const MethodInfo* method)
{
	BaseFixupRecord_t5197 * V_0 = {0};
	BaseFixupRecord_t5197 * V_1 = {0};
	BaseFixupRecord_t5197 * G_B3_0 = {0};
	BaseFixupRecord_t5197 * G_B9_0 = {0};
	{
		V_0 = (BaseFixupRecord_t5197 *)NULL;
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		BaseFixupRecord_t5197 * L_1 = (__this->___FixupChainAsContainer_10);
		G_B3_0 = L_1;
		goto IL_0013;
	}

IL_000d:
	{
		BaseFixupRecord_t5197 * L_2 = (__this->___FixupChainAsRequired_11);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		goto IL_0038;
	}

IL_0016:
	{
		BaseFixupRecord_t5197 * L_3 = V_1;
		BaseFixupRecord_t5197 * L_4 = ___fixupToRemove;
		if ((!(((Object_t*)(BaseFixupRecord_t5197 *)L_3) == ((Object_t*)(BaseFixupRecord_t5197 *)L_4))))
		{
			goto IL_0024;
		}
	}
	{
		BaseFixupRecord_t5197 * L_5 = V_1;
		BaseFixupRecord_t5197 * L_6 = V_0;
		bool L_7 = ___asContainer;
		ObjectRecord_UnchainFixup_m23029(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}

IL_0024:
	{
		BaseFixupRecord_t5197 * L_8 = V_1;
		V_0 = L_8;
		bool L_9 = ___asContainer;
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		BaseFixupRecord_t5197 * L_10 = V_1;
		NullCheck(L_10);
		BaseFixupRecord_t5197 * L_11 = (L_10->___NextSameContainer_2);
		G_B9_0 = L_11;
		goto IL_0037;
	}

IL_0031:
	{
		BaseFixupRecord_t5197 * L_12 = V_1;
		NullCheck(L_12);
		BaseFixupRecord_t5197 * L_13 = (L_12->___NextSameRequired_3);
		G_B9_0 = L_13;
	}

IL_0037:
	{
		V_1 = G_B9_0;
	}

IL_0038:
	{
		BaseFixupRecord_t5197 * L_14 = V_1;
		if (L_14)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m23029 (ObjectRecord_t5195 * __this, BaseFixupRecord_t5197 * ___fixup, BaseFixupRecord_t5197 * ___prevFixup, bool ___asContainer, const MethodInfo* method)
{
	{
		BaseFixupRecord_t5197 * L_0 = ___prevFixup;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = ___asContainer;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		BaseFixupRecord_t5197 * L_2 = ___fixup;
		NullCheck(L_2);
		BaseFixupRecord_t5197 * L_3 = (L_2->___NextSameContainer_2);
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_0020;
	}

IL_0014:
	{
		BaseFixupRecord_t5197 * L_4 = ___fixup;
		NullCheck(L_4);
		BaseFixupRecord_t5197 * L_5 = (L_4->___NextSameRequired_3);
		__this->___FixupChainAsRequired_11 = L_5;
	}

IL_0020:
	{
		goto IL_003f;
	}

IL_0022:
	{
		bool L_6 = ___asContainer;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		BaseFixupRecord_t5197 * L_7 = ___prevFixup;
		BaseFixupRecord_t5197 * L_8 = ___fixup;
		NullCheck(L_8);
		BaseFixupRecord_t5197 * L_9 = (L_8->___NextSameContainer_2);
		NullCheck(L_7);
		L_7->___NextSameContainer_2 = L_9;
		goto IL_003f;
	}

IL_0033:
	{
		BaseFixupRecord_t5197 * L_10 = ___prevFixup;
		BaseFixupRecord_t5197 * L_11 = ___fixup;
		NullCheck(L_11);
		BaseFixupRecord_t5197 * L_12 = (L_11->___NextSameRequired_3);
		NullCheck(L_10);
		L_10->___NextSameRequired_3 = L_12;
	}

IL_003f:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m23030 (ObjectRecord_t5195 * __this, BaseFixupRecord_t5197 * ___fixup, bool ___asContainer, const MethodInfo* method)
{
	{
		bool L_0 = ___asContainer;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		BaseFixupRecord_t5197 * L_1 = ___fixup;
		BaseFixupRecord_t5197 * L_2 = (__this->___FixupChainAsContainer_10);
		NullCheck(L_1);
		L_1->___NextSameContainer_2 = L_2;
		BaseFixupRecord_t5197 * L_3 = ___fixup;
		__this->___FixupChainAsContainer_10 = L_3;
		goto IL_002b;
	}

IL_0018:
	{
		BaseFixupRecord_t5197 * L_4 = ___fixup;
		BaseFixupRecord_t5197 * L_5 = (__this->___FixupChainAsRequired_11);
		NullCheck(L_4);
		L_4->___NextSameRequired_3 = L_5;
		BaseFixupRecord_t5197 * L_6 = ___fixup;
		__this->___FixupChainAsRequired_11 = L_6;
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* SerializationInfo_t2947_0_0_0_var;
extern const Il2CppType* StreamingContext_t2948_0_0_0_var;
extern TypeInfo* ISerializationSurrogate_t5203_il2cpp_TypeInfo_var;
extern TypeInfo* ISerializable_t844_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t707_il2cpp_TypeInfo_var;
extern TypeInfo* StreamingContext_t2948_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* IObjectReference_t5454_il2cpp_TypeInfo_var;
extern TypeInfo* NullReferenceException_t792_il2cpp_TypeInfo_var;
extern "C" bool ObjectRecord_LoadData_m23031 (ObjectRecord_t5195 * __this, ObjectManager_t5196 * ___manager, Object_t * ___selector, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationInfo_t2947_0_0_0_var = il2cpp_codegen_type_from_index(5282);
		StreamingContext_t2948_0_0_0_var = il2cpp_codegen_type_from_index(5283);
		ISerializationSurrogate_t5203_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9220);
		ISerializable_t844_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1153);
		ObjectU5BU5D_t707_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(171);
		StreamingContext_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5283);
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		IObjectReference_t5454_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9214);
		NullReferenceException_t792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(407);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ObjectU5BU5D_t707* V_1 = {0};
	ConstructorInfo_t1409 * V_2 = {0};
	int32_t V_3 = 0;
	Object_t * V_4 = {0};
	ObjectRecord_t5195 * V_5 = {0};
	ObjectRecord_t5195 * V_6 = {0};
	bool V_7 = false;
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t2947 * L_0 = (__this->___Info_4);
		if (!L_0)
		{
			goto IL_0105;
		}
	}
	{
		Object_t * L_1 = (__this->___Surrogate_6);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Object_t * L_2 = (__this->___Surrogate_6);
		Object_t * L_3 = (__this->___ObjectInstance_2);
		SerializationInfo_t2947 * L_4 = (__this->___Info_4);
		StreamingContext_t2948  L_5 = ___context;
		Object_t * L_6 = (__this->___SurrogateSelector_7);
		NullCheck(L_2);
		Object_t * L_7 = (Object_t *)InterfaceFuncInvoker4< Object_t *, Object_t *, SerializationInfo_t2947 *, StreamingContext_t2948 , Object_t * >::Invoke(1 /* System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector) */, ISerializationSurrogate_t5203_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		Object_t * L_8 = V_0;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		Object_t * L_9 = V_0;
		__this->___ObjectInstance_2 = L_9;
	}

IL_003c:
	{
		__this->___Status_0 = 3;
		goto IL_00fe;
	}

IL_0048:
	{
		Object_t * L_10 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_10, ISerializable_t844_il2cpp_TypeInfo_var)))
		{
			goto IL_00de;
		}
	}
	{
		ObjectU5BU5D_t707* L_11 = ((ObjectU5BU5D_t707*)SZArrayNew(ObjectU5BU5D_t707_il2cpp_TypeInfo_var, 2));
		SerializationInfo_t2947 * L_12 = (__this->___Info_4);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		ArrayElementTypeCheck (L_11, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, 0)) = (Object_t *)L_12;
		ObjectU5BU5D_t707* L_13 = L_11;
		StreamingContext_t2948  L_14 = ___context;
		StreamingContext_t2948  L_15 = L_14;
		Object_t * L_16 = Box(StreamingContext_t2948_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		ArrayElementTypeCheck (L_13, L_16);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, 1)) = (Object_t *)L_16;
		V_1 = L_13;
		Object_t * L_17 = (__this->___ObjectInstance_2);
		NullCheck(L_17);
		Type_t * L_18 = Object_GetType_m4276(L_17, /*hidden argument*/NULL);
		TypeU5BU5D_t1231* L_19 = ((TypeU5BU5D_t1231*)SZArrayNew(TypeU5BU5D_t1231_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(SerializationInfo_t2947_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 0)) = (Type_t *)L_20;
		TypeU5BU5D_t1231* L_21 = L_19;
		Type_t * L_22 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(StreamingContext_t2948_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 1);
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, 1)) = (Type_t *)L_22;
		NullCheck(L_18);
		ConstructorInfo_t1409 * L_23 = (ConstructorInfo_t1409 *)VirtFuncInvoker4< ConstructorInfo_t1409 *, int32_t, Binder_t2981 *, TypeU5BU5D_t1231*, ParameterModifierU5BU5D_t2982* >::Invoke(76 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_18, ((int32_t)52), (Binder_t2981 *)NULL, L_21, (ParameterModifierU5BU5D_t2982*)(ParameterModifierU5BU5D_t2982*)NULL);
		V_2 = L_23;
		ConstructorInfo_t1409 * L_24 = V_2;
		if (L_24)
		{
			goto IL_00ce;
		}
	}
	{
		Object_t * L_25 = (__this->___ObjectInstance_2);
		NullCheck(L_25);
		Type_t * L_26 = Object_GetType_m4276(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_26);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_28 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5981, L_27, (String_t*) &_stringLiteral2563, /*hidden argument*/NULL);
		SerializationException_t4568 * L_29 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_29, L_28, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_00ce:
	{
		ConstructorInfo_t1409 * L_30 = V_2;
		Object_t * L_31 = (__this->___ObjectInstance_2);
		ObjectU5BU5D_t707* L_32 = V_1;
		NullCheck(L_30);
		VirtFuncInvoker2< Object_t *, Object_t *, ObjectU5BU5D_t707* >::Invoke(17 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[]) */, L_30, L_31, L_32);
		goto IL_00fe;
	}

IL_00de:
	{
		Object_t * L_33 = (__this->___ObjectInstance_2);
		NullCheck(L_33);
		Type_t * L_34 = Object_GetType_m4276(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m408(NULL /*static, unused*/, (String_t*) &_stringLiteral5982, L_35, /*hidden argument*/NULL);
		SerializationException_t4568 * L_37 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00fe:
	{
		__this->___Info_4 = (SerializationInfo_t2947 *)NULL;
	}

IL_0105:
	{
		Object_t * L_38 = (__this->___ObjectInstance_2);
		if (!((Object_t *)IsInst(L_38, IObjectReference_t5454_il2cpp_TypeInfo_var)))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t L_39 = (__this->___Status_0);
		if ((((int32_t)L_39) == ((int32_t)3)))
		{
			goto IL_0198;
		}
	}

IL_0121:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_40 = (__this->___ObjectInstance_2);
			StreamingContext_t2948  L_41 = ___context;
			NullCheck(((Object_t *)Castclass(L_40, IObjectReference_t5454_il2cpp_TypeInfo_var)));
			Object_t * L_42 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t2948  >::Invoke(0 /* System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext) */, IObjectReference_t5454_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_40, IObjectReference_t5454_il2cpp_TypeInfo_var)), L_41);
			__this->___ObjectInstance_2 = L_42;
			V_3 = ((int32_t)100);
			goto IL_0168;
		}

IL_013d:
		{
			Object_t * L_43 = (__this->___ObjectInstance_2);
			StreamingContext_t2948  L_44 = ___context;
			NullCheck(((Object_t *)Castclass(L_43, IObjectReference_t5454_il2cpp_TypeInfo_var)));
			Object_t * L_45 = (Object_t *)InterfaceFuncInvoker1< Object_t *, StreamingContext_t2948  >::Invoke(0 /* System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext) */, IObjectReference_t5454_il2cpp_TypeInfo_var, ((Object_t *)Castclass(L_43, IObjectReference_t5454_il2cpp_TypeInfo_var)), L_44);
			V_4 = L_45;
			Object_t * L_46 = V_4;
			Object_t * L_47 = (__this->___ObjectInstance_2);
			if ((!(((Object_t*)(Object_t *)L_46) == ((Object_t*)(Object_t *)L_47))))
			{
				goto IL_015c;
			}
		}

IL_015a:
		{
			goto IL_0179;
		}

IL_015c:
		{
			Object_t * L_48 = V_4;
			__this->___ObjectInstance_2 = L_48;
			int32_t L_49 = V_3;
			V_3 = ((int32_t)((int32_t)L_49-(int32_t)1));
		}

IL_0168:
		{
			Object_t * L_50 = (__this->___ObjectInstance_2);
			if (!((Object_t *)IsInst(L_50, IObjectReference_t5454_il2cpp_TypeInfo_var)))
			{
				goto IL_0179;
			}
		}

IL_0175:
		{
			int32_t L_51 = V_3;
			if ((((int32_t)L_51) > ((int32_t)0)))
			{
				goto IL_013d;
			}
		}

IL_0179:
		{
			int32_t L_52 = V_3;
			if (L_52)
			{
				goto IL_0187;
			}
		}

IL_017c:
		{
			SerializationException_t4568 * L_53 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
			SerializationException__ctor_m18091(L_53, (String_t*) &_stringLiteral5983, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception(L_53);
		}

IL_0187:
		{
			__this->___Status_0 = 3;
			goto IL_0198;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t57 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t792_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0190;
		throw e;
	}

CATCH_0190:
	{ // begin catch(System.NullReferenceException)
		{
			V_7 = 0;
			goto IL_01f0;
		}

IL_0196:
		{
			goto IL_0198;
		}
	} // end catch (depth: 1)

IL_0198:
	{
		MemberInfo_t * L_54 = (__this->___Member_8);
		if (!L_54)
		{
			goto IL_01c4;
		}
	}
	{
		ObjectManager_t5196 * L_55 = ___manager;
		int64_t L_56 = (__this->___IdOfContainingObj_5);
		NullCheck(L_55);
		ObjectRecord_t5195 * L_57 = ObjectManager_GetObjectRecord_m22998(L_55, L_56, /*hidden argument*/NULL);
		V_5 = L_57;
		ObjectRecord_t5195 * L_58 = V_5;
		ObjectManager_t5196 * L_59 = ___manager;
		MemberInfo_t * L_60 = (__this->___Member_8);
		Object_t * L_61 = (__this->___ObjectInstance_2);
		NullCheck(L_58);
		ObjectRecord_SetMemberValue_m23021(L_58, L_59, L_60, L_61, /*hidden argument*/NULL);
		goto IL_01ee;
	}

IL_01c4:
	{
		Int32U5BU5D_t484* L_62 = (__this->___ArrayIndex_9);
		if (!L_62)
		{
			goto IL_01ee;
		}
	}
	{
		ObjectManager_t5196 * L_63 = ___manager;
		int64_t L_64 = (__this->___IdOfContainingObj_5);
		NullCheck(L_63);
		ObjectRecord_t5195 * L_65 = ObjectManager_GetObjectRecord_m22998(L_63, L_64, /*hidden argument*/NULL);
		V_6 = L_65;
		ObjectRecord_t5195 * L_66 = V_6;
		ObjectManager_t5196 * L_67 = ___manager;
		Object_t * L_68 = (__this->___ObjectInstance_2);
		Int32U5BU5D_t484* L_69 = (__this->___ArrayIndex_9);
		NullCheck(L_66);
		ObjectRecord_SetArrayValue_m23022(L_66, L_67, L_68, L_69, /*hidden argument*/NULL);
	}

IL_01ee:
	{
		return 1;
	}

IL_01f0:
	{
		bool L_70 = V_7;
		return L_70;
	}
}
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m23032 (ObjectRecord_t5195 * __this, const MethodInfo* method)
{
	{
		BaseFixupRecord_t5197 * L_0 = (__this->___FixupChainAsContainer_10);
		return ((((int32_t)((((Object_t*)(BaseFixupRecord_t5197 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttribut.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttributMethodDeclarations.h"



// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribuMethodDeclarations.h"



// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttributeMethodDeclarations.h"



// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttribute.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttributeMethodDeclarations.h"



// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinder.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationBinder
#include "mscorlib_System_Runtime_Serialization_SerializationBinderMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationBinder::.ctor()
extern "C" void SerializationBinder__ctor_m23033 (SerializationBinder_t5208 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type System.Runtime.Serialization.SerializationBinder::BindToType(System.String,System.String)
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacks.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
#include "mscorlib_System_Runtime_Serialization_SerializationCallbacksMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CallbackHandler__ctor_m23034 (CallbackHandler_t5209 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
extern "C" void CallbackHandler_Invoke_m23035 (CallbackHandler_t5209 * __this, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CallbackHandler_Invoke_m23035((CallbackHandler_t5209 *)__this->___prev_9,___context, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, StreamingContext_t2948  ___context, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___context,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, StreamingContext_t2948  ___context, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___context,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_CallbackHandler_t5209(Il2CppObject* delegate, StreamingContext_t2948  ___context)
{
	// Marshaling of parameter '___context' to native representation
	StreamingContext_t2948  ____context_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Runtime.Serialization.StreamingContext'."));
}
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern TypeInfo* StreamingContext_t2948_il2cpp_TypeInfo_var;
extern "C" Object_t * CallbackHandler_BeginInvoke_m23036 (CallbackHandler_t5209 * __this, StreamingContext_t2948  ___context, AsyncCallback_t386 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamingContext_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5283);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(StreamingContext_t2948_il2cpp_TypeInfo_var, &___context);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
extern "C" void CallbackHandler_EndInvoke_m23037 (CallbackHandler_t5209 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif

// System.TypeLoadException
#include "mscorlib_System_TypeLoadException.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.TypeLoadException
#include "mscorlib_System_TypeLoadExceptionMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"


// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern const Il2CppType* OnSerializingAttribute_t5207_0_0_0_var;
extern const Il2CppType* OnSerializedAttribute_t5206_0_0_0_var;
extern const Il2CppType* OnDeserializingAttribute_t5205_0_0_0_var;
extern const Il2CppType* OnDeserializedAttribute_t5204_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks__ctor_m23038 (SerializationCallbacks_t5210 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		OnSerializingAttribute_t5207_0_0_0_var = il2cpp_codegen_type_from_index(9221);
		OnSerializedAttribute_t5206_0_0_0_var = il2cpp_codegen_type_from_index(9222);
		OnDeserializingAttribute_t5205_0_0_0_var = il2cpp_codegen_type_from_index(9223);
		OnDeserializedAttribute_t5204_0_0_0_var = il2cpp_codegen_type_from_index(9224);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(OnSerializingAttribute_t5207_0_0_0_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		ArrayList_t723 * L_2 = SerializationCallbacks_GetMethodsByAttribute_m23042(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___onSerializingList_0 = L_2;
		Type_t * L_3 = ___type;
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(OnSerializedAttribute_t5206_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t723 * L_5 = SerializationCallbacks_GetMethodsByAttribute_m23042(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		__this->___onSerializedList_1 = L_5;
		Type_t * L_6 = ___type;
		Type_t * L_7 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(OnDeserializingAttribute_t5205_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t723 * L_8 = SerializationCallbacks_GetMethodsByAttribute_m23042(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		__this->___onDeserializingList_2 = L_8;
		Type_t * L_9 = ___type;
		Type_t * L_10 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(OnDeserializedAttribute_t5204_0_0_0_var), /*hidden argument*/NULL);
		ArrayList_t723 * L_11 = SerializationCallbacks_GetMethodsByAttribute_m23042(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		__this->___onDeserializedList_3 = L_11;
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks__cctor_m23039 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_4 = L_0;
		Object_t * L_1 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m354(L_1, /*hidden argument*/NULL);
		((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_lock_5 = L_1;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasSerializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasSerializedCallbacks_m23040 (SerializationCallbacks_t5210 * __this, const MethodInfo* method)
{
	{
		ArrayList_t723 * L_0 = (__this->___onSerializedList_1);
		return ((((int32_t)((((Object_t*)(ArrayList_t723 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasDeserializedCallbacks_m23041 (SerializationCallbacks_t5210 * __this, const MethodInfo* method)
{
	{
		ArrayList_t723 * L_0 = (__this->___onDeserializedList_3);
		return ((((int32_t)((((Object_t*)(ArrayList_t723 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeLoadException_t4883_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" ArrayList_t723 * SerializationCallbacks_GetMethodsByAttribute_m23042 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		TypeLoadException_t4883_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8888);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t723 * V_0 = {0};
	Type_t * V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	MethodInfoU5BU5D_t2170* V_4 = {0};
	int32_t V_5 = 0;
	ArrayList_t723 * G_B13_0 = {0};
	{
		ArrayList_t723 * L_0 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ___type;
		V_1 = L_1;
		goto IL_006c;
	}

IL_000a:
	{
		V_2 = 0;
		Type_t * L_2 = V_1;
		NullCheck(L_2);
		MethodInfoU5BU5D_t2170* L_3 = (MethodInfoU5BU5D_t2170*)VirtFuncInvoker1< MethodInfoU5BU5D_t2170*, int32_t >::Invoke(56 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		V_4 = L_3;
		V_5 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		MethodInfoU5BU5D_t2170* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_3 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_4, L_6));
		MethodInfo_t * L_7 = V_3;
		Type_t * L_8 = ___attr;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(11 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_7, L_8, 0);
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		ArrayList_t723 * L_10 = V_0;
		MethodInfo_t * L_11 = V_3;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_10, L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_5;
		V_5 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_5;
		MethodInfoU5BU5D_t2170* L_15 = V_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0065;
		}
	}
	{
		Type_t * L_17 = ___type;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_17);
		Type_t * L_19 = ___attr;
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Format_m4275(NULL /*static, unused*/, (String_t*) &_stringLiteral5984, L_18, L_20, /*hidden argument*/NULL);
		TypeLoadException_t4883 * L_22 = (TypeLoadException_t4883 *)il2cpp_codegen_object_new (TypeLoadException_t4883_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m20882(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_0065:
	{
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_23);
		V_1 = L_24;
	}

IL_006c:
	{
		Type_t * L_25 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_25) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_000a;
		}
	}
	{
		ArrayList_t723 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_27);
		if (L_28)
		{
			goto IL_0084;
		}
	}
	{
		G_B13_0 = ((ArrayList_t723 *)(NULL));
		goto IL_0085;
	}

IL_0084:
	{
		ArrayList_t723 * L_29 = V_0;
		G_B13_0 = L_29;
	}

IL_0085:
	{
		return G_B13_0;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern const Il2CppType* CallbackHandler_t5209_0_0_0_var;
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* MethodInfo_t_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* CallbackHandler_t5209_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t58_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_Invoke_m23043 (Object_t * __this /* static, unused */, ArrayList_t723 * ___list, Object_t * ___target, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CallbackHandler_t5209_0_0_0_var = il2cpp_codegen_type_from_index(9225);
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		MethodInfo_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2743);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		CallbackHandler_t5209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9225);
		IDisposable_t58_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(23);
		s_Il2CppMethodIntialized = true;
	}
	CallbackHandler_t5209 * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Object_t * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t723 * L_0 = ___list;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = (CallbackHandler_t5209 *)NULL;
		ArrayList_t723 * L_1 = ___list;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_1);
		V_2 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_000f:
		{
			Object_t * L_3 = V_2;
			NullCheck(L_3);
			Object_t * L_4 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_3);
			V_1 = ((MethodInfo_t *)Castclass(L_4, MethodInfo_t_il2cpp_TypeInfo_var));
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_5 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(CallbackHandler_t5209_0_0_0_var), /*hidden argument*/NULL);
			Object_t * L_6 = ___target;
			MethodInfo_t * L_7 = V_1;
			Delegate_t749 * L_8 = Delegate_CreateDelegate_m10411(NULL /*static, unused*/, L_5, L_6, L_7, /*hidden argument*/NULL);
			CallbackHandler_t5209 * L_9 = V_0;
			Delegate_t749 * L_10 = Delegate_Combine_m3975(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
			V_0 = ((CallbackHandler_t5209 *)Castclass(L_10, CallbackHandler_t5209_il2cpp_TypeInfo_var));
		}

IL_0038:
		{
			Object_t * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_000f;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			Object_t * L_13 = V_2;
			V_3 = ((Object_t *)IsInst(L_13, IDisposable_t58_il2cpp_TypeInfo_var));
			Object_t * L_14 = V_3;
			if (L_14)
			{
				goto IL_004d;
			}
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(66)
		}

IL_004d:
		{
			Object_t * L_15 = V_3;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t58_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0054:
	{
		CallbackHandler_t5209 * L_16 = V_0;
		StreamingContext_t2948  L_17 = ___context;
		NullCheck(L_16);
		VirtActionInvoker1< StreamingContext_t2948  >::Invoke(12 /* System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext) */, L_16, L_17);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnSerializing_m23044 (SerializationCallbacks_t5210 * __this, Object_t * ___target, StreamingContext_t2948  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (__this->___onSerializingList_0);
		Object_t * L_1 = ___target;
		StreamingContext_t2948  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m23043(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnSerialized_m23045 (SerializationCallbacks_t5210 * __this, Object_t * ___target, StreamingContext_t2948  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (__this->___onSerializedList_1);
		Object_t * L_1 = ___target;
		StreamingContext_t2948  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m23043(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnDeserializing_m23046 (SerializationCallbacks_t5210 * __this, Object_t * ___target, StreamingContext_t2948  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (__this->___onDeserializingList_2);
		Object_t * L_1 = ___target;
		StreamingContext_t2948  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m23043(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern "C" void SerializationCallbacks_RaiseOnDeserialized_m23047 (SerializationCallbacks_t5210 * __this, Object_t * ___target, StreamingContext_t2948  ___contex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (__this->___onDeserializedList_3);
		Object_t * L_1 = ___target;
		StreamingContext_t2948  L_2 = ___contex;
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_Invoke_m23043(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" SerializationCallbacks_t5210 * SerializationCallbacks_GetSerializationCallbacks_m23048 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	SerializationCallbacks_t5210 * V_0 = {0};
	Object_t * V_1 = {0};
	Hashtable_t721 * V_2 = {0};
	SerializationCallbacks_t5210 * V_3 = {0};
	Exception_t57 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t57 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		Hashtable_t721 * L_0 = ((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_4;
		Type_t * L_1 = ___t;
		NullCheck(L_0);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((SerializationCallbacks_t5210 *)Castclass(L_2, SerializationCallbacks_t5210_il2cpp_TypeInfo_var));
		SerializationCallbacks_t5210 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		SerializationCallbacks_t5210 * L_4 = V_0;
		return L_4;
	}

IL_0016:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		Object_t * L_5 = ((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_lock_5;
		V_1 = L_5;
		Object_t * L_6 = V_1;
		Monitor_Enter_m7591(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_7 = ((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_4;
			Type_t * L_8 = ___t;
			NullCheck(L_7);
			Object_t * L_9 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_7, L_8);
			V_0 = ((SerializationCallbacks_t5210 *)Castclass(L_9, SerializationCallbacks_t5210_il2cpp_TypeInfo_var));
			SerializationCallbacks_t5210 * L_10 = V_0;
			if (L_10)
			{
				goto IL_005b;
			}
		}

IL_0036:
		{
			IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
			Hashtable_t721 * L_11 = ((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_4;
			NullCheck(L_11);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(35 /* System.Object System.Collections.Hashtable::Clone() */, L_11);
			V_2 = ((Hashtable_t721 *)Castclass(L_12, Hashtable_t721_il2cpp_TypeInfo_var));
			Type_t * L_13 = ___t;
			SerializationCallbacks_t5210 * L_14 = (SerializationCallbacks_t5210 *)il2cpp_codegen_object_new (SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
			SerializationCallbacks__ctor_m23038(L_14, L_13, /*hidden argument*/NULL);
			V_0 = L_14;
			Hashtable_t721 * L_15 = V_2;
			Type_t * L_16 = ___t;
			SerializationCallbacks_t5210 * L_17 = V_0;
			NullCheck(L_15);
			VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_15, L_16, L_17);
			Hashtable_t721 * L_18 = V_2;
			((SerializationCallbacks_t5210_StaticFields*)SerializationCallbacks_t5210_il2cpp_TypeInfo_var->static_fields)->___cache_4 = L_18;
		}

IL_005b:
		{
			SerializationCallbacks_t5210 * L_19 = V_0;
			V_3 = L_19;
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}

IL_005f:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t57 *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		Object_t * L_20 = V_1;
		Monitor_Exit_m7592(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t57 *)
	}

IL_0068:
	{
		SerializationCallbacks_t5210 * L_21 = V_3;
		return L_21;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationEntry::.ctor(System.String,System.Type,System.Object)
extern "C" void SerializationEntry__ctor_m23049 (SerializationEntry_t5211 * __this, String_t* ___name, Type_t * ___type, Object_t * ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		__this->___name_0 = L_0;
		Type_t * L_1 = ___type;
		__this->___objectType_1 = L_1;
		Object_t * L_2 = ___value;
		__this->___value_2 = L_2;
		return;
	}
}
// System.String System.Runtime.Serialization.SerializationEntry::get_Name()
extern "C" String_t* SerializationEntry_get_Name_m23050 (SerializationEntry_t5211 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Type System.Runtime.Serialization.SerializationEntry::get_ObjectType()
extern "C" Type_t * SerializationEntry_get_ObjectType_m23051 (SerializationEntry_t5211 * __this, const MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___objectType_1);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.SerializationEntry::get_Value()
extern "C" Object_t * SerializationEntry_get_Value_m23052 (SerializationEntry_t5211 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___value_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationException::.ctor()
extern "C" void SerializationException__ctor_m23053 (SerializationException_t4568 * __this, const MethodInfo* method)
{
	{
		SystemException__ctor_m12178(__this, (String_t*) &_stringLiteral5985, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
extern "C" void SerializationException__ctor_m18091 (SerializationException_t4568 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m12178(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationException__ctor_m23054 (SerializationException_t4568 * __this, SerializationInfo_t2947 * ___info, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t2947 * L_0 = ___info;
		StreamingContext_t2948  L_1 = ___context;
		SystemException__ctor_m14829(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Single
#include "mscorlib_System_Single.h"
// System.UInt64
#include "mscorlib_System_UInt64.h"


// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t723_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo__ctor_m23055 (SerializationInfo_t2947 * __this, Type_t * ___type, Object_t * ___converter, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ArrayList_t723_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(438);
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		__this->___serialized_0 = L_0;
		ArrayList_t723 * L_1 = (ArrayList_t723 *)il2cpp_codegen_object_new (ArrayList_t723_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4349(L_1, /*hidden argument*/NULL);
		__this->___values_1 = L_1;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentNullException_t795 * L_3 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4286(L_3, (String_t*) &_stringLiteral819, (String_t*) &_stringLiteral5986, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_002f:
	{
		Object_t * L_4 = ___converter;
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentNullException_t795 * L_5 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4286(L_5, (String_t*) &_stringLiteral4751, (String_t*) &_stringLiteral5986, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0042:
	{
		Object_t * L_6 = ___converter;
		__this->___converter_4 = L_6;
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Assembly_t794 * L_8 = (Assembly_t794 *)VirtFuncInvoker0< Assembly_t794 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_8);
		__this->___assemblyName_2 = L_9;
		Type_t * L_10 = ___type;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_10);
		__this->___fullTypeName_3 = L_11;
		return;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::get_AssemblyName()
extern "C" String_t* SerializationInfo_get_AssemblyName_m23056 (SerializationInfo_t2947 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_2);
		return L_0;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::get_FullTypeName()
extern "C" String_t* SerializationInfo_get_FullTypeName_m23057 (SerializationInfo_t2947 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullTypeName_3);
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::get_MemberCount()
extern "C" int32_t SerializationInfo_get_MemberCount_m23058 (SerializationInfo_t2947 * __this, const MethodInfo* method)
{
	{
		Hashtable_t721 * L_0 = (__this->___serialized_0);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 System.Collections.Hashtable::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t5211_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m18090 (SerializationInfo_t2947 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		SerializationEntry_t5211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9226);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t5211  V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5987, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t795 * L_3 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_3, (String_t*) &_stringLiteral5988, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Hashtable_t721 * L_4 = (__this->___serialized_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		SerializationException_t4568 * L_7 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_7, (String_t*) &_stringLiteral5989, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0035:
	{
		String_t* L_8 = ___name;
		Type_t * L_9 = ___type;
		Object_t * L_10 = ___value;
		SerializationEntry__ctor_m23049((&V_0), L_8, L_9, L_10, /*hidden argument*/NULL);
		Hashtable_t721 * L_11 = (__this->___serialized_0);
		String_t* L_12 = ___name;
		SerializationEntry_t5211  L_13 = V_0;
		SerializationEntry_t5211  L_14 = L_13;
		Object_t * L_15 = Box(SerializationEntry_t5211_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(29 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_11, L_12, L_15);
		ArrayList_t723 * L_16 = (__this->___values_1);
		SerializationEntry_t5211  L_17 = V_0;
		SerializationEntry_t5211  L_18 = L_17;
		Object_t * L_19 = Box(SerializationEntry_t5211_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_19);
		return;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t5211_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" Object_t * SerializationInfo_GetValue_m14830 (SerializationInfo_t2947 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		SerializationEntry_t5211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9226);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	SerializationEntry_t5211  V_0 = {0};
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5990, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t795 * L_3 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_3, (String_t*) &_stringLiteral819, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Hashtable_t721 * L_4 = (__this->___serialized_0);
		String_t* L_5 = ___name;
		NullCheck(L_4);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(34 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_4, L_5);
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_7 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m455(NULL /*static, unused*/, (String_t*) &_stringLiteral5991, L_7, (String_t*) &_stringLiteral5992, /*hidden argument*/NULL);
		SerializationException_t4568 * L_9 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_9, L_8, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0040:
	{
		Hashtable_t721 * L_10 = (__this->___serialized_0);
		String_t* L_11 = ___name;
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(26 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_10, L_11);
		V_0 = ((*(SerializationEntry_t5211 *)((SerializationEntry_t5211 *)UnBox (L_12, SerializationEntry_t5211_il2cpp_TypeInfo_var))));
		Object_t * L_13 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007e;
		}
	}
	{
		Type_t * L_14 = ___type;
		Object_t * L_15 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_16 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(42 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_14, L_15);
		if (L_16)
		{
			goto IL_007e;
		}
	}
	{
		Object_t * L_17 = (__this->___converter_4);
		Object_t * L_18 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		Type_t * L_19 = ___type;
		NullCheck(L_17);
		Object_t * L_20 = (Object_t *)InterfaceFuncInvoker2< Object_t *, Object_t *, Type_t * >::Invoke(0 /* System.Object System.Runtime.Serialization.IFormatterConverter::Convert(System.Object,System.Type) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		return L_20;
	}

IL_007e:
	{
		Object_t * L_21 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_SetType_m23059 (SerializationInfo_t2947 * __this, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5993, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_2);
		__this->___fullTypeName_3 = L_3;
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Assembly_t794 * L_5 = (Assembly_t794 *)VirtFuncInvoker0< Assembly_t794 * >::Invoke(14 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		__this->___assemblyName_2 = L_6;
		return;
	}
}
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern TypeInfo* SerializationInfoEnumerator_t5213_il2cpp_TypeInfo_var;
extern "C" SerializationInfoEnumerator_t5213 * SerializationInfo_GetEnumerator_m23060 (SerializationInfo_t2947 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializationInfoEnumerator_t5213_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9228);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t723 * L_0 = (__this->___values_1);
		SerializationInfoEnumerator_t5213 * L_1 = (SerializationInfoEnumerator_t5213 *)il2cpp_codegen_object_new (SerializationInfoEnumerator_t5213_il2cpp_TypeInfo_var);
		SerializationInfoEnumerator__ctor_m23068(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern const Il2CppType* Int16_t767_0_0_0_var;
extern TypeInfo* Int16_t767_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m23061 (SerializationInfo_t2947 * __this, String_t* ___name, int16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t767_0_0_0_var = il2cpp_codegen_type_from_index(272);
		Int16_t767_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(272);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int16_t L_1 = ___value;
		int16_t L_2 = L_1;
		Object_t * L_3 = Box(Int16_t767_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int16_t767_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern const Il2CppType* Int32_t82_0_0_0_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m12147 (SerializationInfo_t2947 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int32_t L_1 = ___value;
		int32_t L_2 = L_1;
		Object_t * L_3 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern const Il2CppType* Boolean_t59_0_0_0_var;
extern TypeInfo* Boolean_t59_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m14890 (SerializationInfo_t2947 * __this, String_t* ___name, bool ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Boolean_t59_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(24);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		bool L_1 = ___value;
		bool L_2 = L_1;
		Object_t * L_3 = Box(Boolean_t59_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Boolean_t59_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern const Il2CppType* DateTime_t287_0_0_0_var;
extern TypeInfo* DateTime_t287_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m23062 (SerializationInfo_t2947 * __this, String_t* ___name, DateTime_t287  ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DateTime_t287_0_0_0_var = il2cpp_codegen_type_from_index(311);
		DateTime_t287_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(311);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		DateTime_t287  L_1 = ___value;
		DateTime_t287  L_2 = L_1;
		Object_t * L_3 = Box(DateTime_t287_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(DateTime_t287_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern const Il2CppType* Single_t87_0_0_0_var;
extern TypeInfo* Single_t87_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m23063 (SerializationInfo_t2947 * __this, String_t* ___name, float ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t87_0_0_0_var = il2cpp_codegen_type_from_index(66);
		Single_t87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(66);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		float L_1 = ___value;
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t87_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Single_t87_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt32)
extern const Il2CppType* UInt32_t765_0_0_0_var;
extern TypeInfo* UInt32_t765_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m23064 (SerializationInfo_t2947 * __this, String_t* ___name, uint32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t765_0_0_0_var = il2cpp_codegen_type_from_index(270);
		UInt32_t765_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(270);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		uint32_t L_1 = ___value;
		uint32_t L_2 = L_1;
		Object_t * L_3 = Box(UInt32_t765_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt32_t765_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern const Il2CppType* Int64_t89_0_0_0_var;
extern TypeInfo* Int64_t89_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m18165 (SerializationInfo_t2947 * __this, String_t* ___name, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_0_0_0_var = il2cpp_codegen_type_from_index(77);
		Int64_t89_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(77);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		int64_t L_1 = ___value;
		int64_t L_2 = L_1;
		Object_t * L_3 = Box(Int64_t89_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int64_t89_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern const Il2CppType* UInt64_t769_0_0_0_var;
extern TypeInfo* UInt64_t769_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m23065 (SerializationInfo_t2947 * __this, String_t* ___name, uint64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt64_t769_0_0_0_var = il2cpp_codegen_type_from_index(274);
		UInt64_t769_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(274);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		uint64_t L_1 = ___value;
		uint64_t L_2 = L_1;
		Object_t * L_3 = Box(UInt64_t769_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt64_t769_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" void SerializationInfo_AddValue_m11584 (SerializationInfo_t2947 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
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
		String_t* L_1 = ___name;
		Object_t * L_2 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_0017:
	{
		String_t* L_4 = ___name;
		Object_t * L_5 = ___value;
		Object_t * L_6 = ___value;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m4276(L_6, /*hidden argument*/NULL);
		SerializationInfo_AddValue_m18090(__this, L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern const Il2CppType* Boolean_t59_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" bool SerializationInfo_GetBoolean_m14889 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Boolean_t59_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		bool L_5 = (bool)InterfaceFuncInvoker1< bool, Object_t * >::Invoke(1 /* System.Boolean System.Runtime.Serialization.IFormatterConverter::ToBoolean(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern const Il2CppType* Int16_t767_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" int16_t SerializationInfo_GetInt16_m23066 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16_t767_0_0_0_var = il2cpp_codegen_type_from_index(272);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int16_t767_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int16_t L_5 = (int16_t)InterfaceFuncInvoker1< int16_t, Object_t * >::Invoke(2 /* System.Int16 System.Runtime.Serialization.IFormatterConverter::ToInt16(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern const Il2CppType* Int32_t82_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" int32_t SerializationInfo_GetInt32_m12143 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(3 /* System.Int32 System.Runtime.Serialization.IFormatterConverter::ToInt32(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern const Il2CppType* Int64_t89_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" int64_t SerializationInfo_GetInt64_m18164 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t89_0_0_0_var = il2cpp_codegen_type_from_index(77);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int64_t89_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		int64_t L_5 = (int64_t)InterfaceFuncInvoker1< int64_t, Object_t * >::Invoke(4 /* System.Int64 System.Runtime.Serialization.IFormatterConverter::ToInt64(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" String_t* SerializationInfo_GetString_m12142 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = V_0;
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
		Object_t * L_4 = (__this->___converter_4);
		Object_t * L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = (String_t*)InterfaceFuncInvoker1< String_t*, Object_t * >::Invoke(5 /* System.String System.Runtime.Serialization.IFormatterConverter::ToString(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.UInt32 System.Runtime.Serialization.SerializationInfo::GetUInt32(System.String)
extern const Il2CppType* UInt32_t765_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* IFormatterConverter_t5212_il2cpp_TypeInfo_var;
extern "C" uint32_t SerializationInfo_GetUInt32_m23067 (SerializationInfo_t2947 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UInt32_t765_0_0_0_var = il2cpp_codegen_type_from_index(270);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		IFormatterConverter_t5212_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9227);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt32_t765_0_0_0_var), /*hidden argument*/NULL);
		Object_t * L_2 = SerializationInfo_GetValue_m14830(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Object_t * L_3 = (__this->___converter_4);
		Object_t * L_4 = V_0;
		NullCheck(L_3);
		uint32_t L_5 = (uint32_t)InterfaceFuncInvoker1< uint32_t, Object_t * >::Invoke(6 /* System.UInt32 System.Runtime.Serialization.IFormatterConverter::ToUInt32(System.Object) */, IFormatterConverter_t5212_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SerializationInfoEnumerator__ctor_m23068 (SerializationInfoEnumerator_t5213 * __this, ArrayList_t723 * ___list, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		ArrayList_t723 * L_0 = ___list;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		__this->___enumerator_0 = L_1;
		return;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m23069 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationEntry_t5211_il2cpp_TypeInfo_var;
extern "C" SerializationEntry_t5211  SerializationInfoEnumerator_get_Current_m23070 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		SerializationEntry_t5211_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9226);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_0);
		return ((*(SerializationEntry_t5211 *)((SerializationEntry_t5211 *)UnBox (L_1, SerializationEntry_t5211_il2cpp_TypeInfo_var))));
	}
}
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C" String_t* SerializationInfoEnumerator_get_Name_m23071 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	SerializationEntry_t5211  V_0 = {0};
	{
		SerializationEntry_t5211  L_0 = SerializationInfoEnumerator_get_Current_m23070(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = SerializationEntry_get_Name_m23050((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type System.Runtime.Serialization.SerializationInfoEnumerator::get_ObjectType()
extern "C" Type_t * SerializationInfoEnumerator_get_ObjectType_m23072 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	SerializationEntry_t5211  V_0 = {0};
	{
		SerializationEntry_t5211  L_0 = SerializationInfoEnumerator_get_Current_m23070(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = SerializationEntry_get_ObjectType_m23051((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C" Object_t * SerializationInfoEnumerator_get_Value_m23073 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	SerializationEntry_t5211  V_0 = {0};
	{
		SerializationEntry_t5211  L_0 = SerializationInfoEnumerator_get_Current_m23070(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Object_t * L_1 = SerializationEntry_get_Value_m23052((&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" bool SerializationInfoEnumerator_MoveNext_m23074 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		bool L_1 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern TypeInfo* IEnumerator_t48_il2cpp_TypeInfo_var;
extern "C" void SerializationInfoEnumerator_Reset_m23075 (SerializationInfoEnumerator_t5213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t48_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(22);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___enumerator_0);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t48_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2
#include "mscorlib_System_Runtime_Serialization_SerializationObjectManMethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::.ctor()
extern "C" void U3CRegisterObjectU3Ec__AnonStorey2__ctor_m23076 (U3CRegisterObjectU3Ec__AnonStorey2_t5214 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey2::<>m__1(System.Runtime.Serialization.StreamingContext)
extern "C" void U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077 (U3CRegisterObjectU3Ec__AnonStorey2_t5214 * __this, StreamingContext_t2948  ___ctx, const MethodInfo* method)
{
	{
		SerializationCallbacks_t5210 * L_0 = (__this->___sc_0);
		Object_t * L_1 = (__this->___obj_1);
		StreamingContext_t2948  L_2 = ___ctx;
		NullCheck(L_0);
		SerializationCallbacks_RaiseOnSerialized_m23045(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.SerializationObjectManager
#include "mscorlib_System_Runtime_Serialization_SerializationObjectMan_0MethodDeclarations.h"



// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern TypeInfo* Hashtable_t721_il2cpp_TypeInfo_var;
extern "C" void SerializationObjectManager__ctor_m23078 (SerializationObjectManager_t5215 * __this, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Hashtable_t721_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		s_Il2CppMethodIntialized = true;
	}
	{
		Hashtable_t721 * L_0 = (Hashtable_t721 *)il2cpp_codegen_object_new (Hashtable_t721_il2cpp_TypeInfo_var);
		Hashtable__ctor_m4348(L_0, /*hidden argument*/NULL);
		__this->___seen_1 = L_0;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		StreamingContext_t2948  L_1 = ___context;
		__this->___context_0 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern TypeInfo* U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationCallbacks_t5210_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t82_il2cpp_TypeInfo_var;
extern TypeInfo* CallbackHandler_t5209_il2cpp_TypeInfo_var;
extern const MethodInfo* U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_MethodInfo_var;
extern "C" void SerializationObjectManager_RegisterObject_m23079 (SerializationObjectManager_t5215 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9229);
		SerializationCallbacks_t5210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9213);
		Int32_t82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(75);
		CallbackHandler_t5209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9225);
		U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_MethodInfo_var = il2cpp_codegen_method_info_from_index(1645);
		s_Il2CppMethodIntialized = true;
	}
	U3CRegisterObjectU3Ec__AnonStorey2_t5214 * V_0 = {0};
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_0 = (U3CRegisterObjectU3Ec__AnonStorey2_t5214 *)il2cpp_codegen_object_new (U3CRegisterObjectU3Ec__AnonStorey2_t5214_il2cpp_TypeInfo_var);
		U3CRegisterObjectU3Ec__AnonStorey2__ctor_m23076(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_1 = V_0;
		Object_t * L_2 = ___obj;
		NullCheck(L_1);
		L_1->___obj_1 = L_2;
		Hashtable_t721 * L_3 = (__this->___seen_1);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_4 = V_0;
		NullCheck(L_4);
		Object_t * L_5 = (L_4->___obj_1);
		NullCheck(L_3);
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(31 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_3, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_7 = V_0;
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_8 = V_0;
		NullCheck(L_8);
		Object_t * L_9 = (L_8->___obj_1);
		NullCheck(L_9);
		Type_t * L_10 = Object_GetType_m4276(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SerializationCallbacks_t5210_il2cpp_TypeInfo_var);
		SerializationCallbacks_t5210 * L_11 = SerializationCallbacks_GetSerializationCallbacks_m23048(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->___sc_0 = L_11;
		Hashtable_t721 * L_12 = (__this->___seen_1);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_13 = V_0;
		NullCheck(L_13);
		Object_t * L_14 = (L_13->___obj_1);
		int32_t L_15 = 1;
		Object_t * L_16 = Box(Int32_t82_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_12);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(27 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_12, L_14, L_16);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_17 = V_0;
		NullCheck(L_17);
		SerializationCallbacks_t5210 * L_18 = (L_17->___sc_0);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_19 = V_0;
		NullCheck(L_19);
		Object_t * L_20 = (L_19->___obj_1);
		StreamingContext_t2948  L_21 = (__this->___context_0);
		NullCheck(L_18);
		SerializationCallbacks_RaiseOnSerializing_m23044(L_18, L_20, L_21, /*hidden argument*/NULL);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_22 = V_0;
		NullCheck(L_22);
		SerializationCallbacks_t5210 * L_23 = (L_22->___sc_0);
		NullCheck(L_23);
		bool L_24 = SerializationCallbacks_get_HasSerializedCallbacks_m23040(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0094;
		}
	}
	{
		CallbackHandler_t5209 * L_25 = (__this->___callbacks_2);
		U3CRegisterObjectU3Ec__AnonStorey2_t5214 * L_26 = V_0;
		IntPtr_t L_27 = { (void*)U3CRegisterObjectU3Ec__AnonStorey2_U3CU3Em__1_m23077_MethodInfo_var };
		CallbackHandler_t5209 * L_28 = (CallbackHandler_t5209 *)il2cpp_codegen_object_new (CallbackHandler_t5209_il2cpp_TypeInfo_var);
		CallbackHandler__ctor_m23034(L_28, L_26, L_27, /*hidden argument*/NULL);
		Delegate_t749 * L_29 = Delegate_Combine_m3975(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
		__this->___callbacks_2 = ((CallbackHandler_t5209 *)Castclass(L_29, CallbackHandler_t5209_il2cpp_TypeInfo_var));
	}

IL_0094:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C" void SerializationObjectManager_RaiseOnSerializedEvent_m23080 (SerializationObjectManager_t5215 * __this, const MethodInfo* method)
{
	{
		CallbackHandler_t5209 * L_0 = (__this->___callbacks_2);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CallbackHandler_t5209 * L_1 = (__this->___callbacks_2);
		StreamingContext_t2948  L_2 = (__this->___context_0);
		NullCheck(L_1);
		VirtActionInvoker1< StreamingContext_t2948  >::Invoke(12 /* System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext) */, L_1, L_2);
	}

IL_0019:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C" void StreamingContext__ctor_m23081 (StreamingContext_t2948 * __this, int32_t ___state, const MethodInfo* method)
{
	{
		int32_t L_0 = ___state;
		__this->___state_0 = L_0;
		__this->___additional_1 = NULL;
		return;
	}
}
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C" void StreamingContext__ctor_m23082 (StreamingContext_t2948 * __this, int32_t ___state, Object_t * ___additional, const MethodInfo* method)
{
	{
		int32_t L_0 = ___state;
		__this->___state_0 = L_0;
		Object_t * L_1 = ___additional;
		__this->___additional_1 = L_1;
		return;
	}
}
// System.Object System.Runtime.Serialization.StreamingContext::get_Context()
extern "C" Object_t * StreamingContext_get_Context_m23083 (StreamingContext_t2948 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___additional_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C" int32_t StreamingContext_get_State_m23084 (StreamingContext_t2948 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern TypeInfo* StreamingContext_t2948_il2cpp_TypeInfo_var;
extern "C" bool StreamingContext_Equals_m23085 (StreamingContext_t2948 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StreamingContext_t2948_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5283);
		s_Il2CppMethodIntialized = true;
	}
	StreamingContext_t2948  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___obj;
		if (((Object_t *)IsInst(L_0, StreamingContext_t2948_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Object_t * L_1 = ___obj;
		V_0 = ((*(StreamingContext_t2948 *)((StreamingContext_t2948 *)UnBox (L_1, StreamingContext_t2948_il2cpp_TypeInfo_var))));
		int32_t L_2 = ((&V_0)->___state_0);
		int32_t L_3 = (__this->___state_0);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_4 = ((&V_0)->___additional_1);
		Object_t * L_5 = (__this->___additional_1);
		G_B5_0 = ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)L_5))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B5_0 = 0;
	}

IL_0032:
	{
		return G_B5_0;
	}
}
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C" int32_t StreamingContext_GetHashCode_m23086 (StreamingContext_t2948 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___state_0);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.StreamingContextStates
#include "mscorlib_System_Runtime_Serialization_StreamingContextStatesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAsMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTyMethodDeclarations.h"



// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandler.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReader.h"
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriter.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_3.h"
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
// System.IO.BinaryReader
#include "mscorlib_System_IO_BinaryReaderMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_MessMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_1MethodDeclarations.h"
// System.Runtime.Remoting.Messaging.HeaderHandler
#include "mscorlib_System_Runtime_Remoting_Messaging_HeaderHandlerMethodDeclarations.h"
// System.IO.BinaryWriter
#include "mscorlib_System_IO_BinaryWriterMethodDeclarations.h"
// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Obje_3MethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
extern "C" void BinaryFormatter__ctor_m23087 (BinaryFormatter_t5131 * __this, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = BinaryFormatter_get_DefaultSurrogateSelector_m23089(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t2948  L_1 = {0};
		StreamingContext__ctor_m23081(&L_1, ((int32_t)255), /*hidden argument*/NULL);
		__this->___context_2 = L_1;
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor(System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" void BinaryFormatter__ctor_m23088 (BinaryFormatter_t5131 * __this, Object_t * ___selector, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	{
		__this->___type_format_4 = 1;
		__this->___filter_level_5 = 3;
		Object__ctor_m354(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___selector;
		__this->___surrogate_selector_3 = L_0;
		StreamingContext_t2948  L_1 = ___context;
		__this->___context_2 = L_1;
		return;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_DefaultSurrogateSelector()
extern TypeInfo* BinaryFormatter_t5131_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_get_DefaultSurrogateSelector_m23089 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryFormatter_t5131_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9148);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ((BinaryFormatter_t5131_StaticFields*)BinaryFormatter_t5131_il2cpp_TypeInfo_var->static_fields)->___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle)
extern "C" void BinaryFormatter_set_AssemblyFormat_m23090 (BinaryFormatter_t5131 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___assembly_format_0 = L_0;
		return;
	}
}
// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Binder()
extern "C" SerializationBinder_t5208 * BinaryFormatter_get_Binder_m23091 (BinaryFormatter_t5131 * __this, const MethodInfo* method)
{
	{
		SerializationBinder_t5208 * L_0 = (__this->___binder_1);
		return L_0;
	}
}
// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_Context()
extern "C" StreamingContext_t2948  BinaryFormatter_get_Context_m23092 (BinaryFormatter_t5131 * __this, const MethodInfo* method)
{
	{
		StreamingContext_t2948  L_0 = (__this->___context_2);
		return L_0;
	}
}
// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_SurrogateSelector()
extern "C" Object_t * BinaryFormatter_get_SurrogateSelector_m23093 (BinaryFormatter_t5131 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___surrogate_selector_3);
		return L_0;
	}
}
// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::get_FilterLevel()
extern "C" int32_t BinaryFormatter_get_FilterLevel_m23094 (BinaryFormatter_t5131 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___filter_level_5);
		return L_0;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
extern "C" Object_t * BinaryFormatter_Deserialize_m23095 (BinaryFormatter_t5131 * __this, Stream_t51 * ___serializationStream, const MethodInfo* method)
{
	{
		Stream_t51 * L_0 = ___serializationStream;
		Object_t * L_1 = BinaryFormatter_NoCheckDeserialize_m23096(__this, L_0, (HeaderHandler_t5400 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::NoCheckDeserialize(System.IO.Stream,System.Runtime.Remoting.Messaging.HeaderHandler)
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryReader_t52_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectReader_t5229_il2cpp_TypeInfo_var;
extern "C" Object_t * BinaryFormatter_NoCheckDeserialize_m23096 (BinaryFormatter_t5131 * __this, Stream_t51 * ___serializationStream, HeaderHandler_t5400 * ___handler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		BinaryReader_t52_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(36);
		ObjectReader_t5229_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9230);
		s_Il2CppMethodIntialized = true;
	}
	BinaryReader_t52 * V_0 = {0};
	bool V_1 = false;
	uint8_t V_2 = {0};
	ObjectReader_t5229 * V_3 = {0};
	Object_t * V_4 = {0};
	HeaderU5BU5D_t5399* V_5 = {0};
	{
		Stream_t51 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5994, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t51 * L_2 = ___serializationStream;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_2);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		Stream_t51 * L_4 = ___serializationStream;
		NullCheck(L_4);
		int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		SerializationException_t4568 * L_6 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_6, (String_t*) &_stringLiteral5995, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0029:
	{
		Stream_t51 * L_7 = ___serializationStream;
		BinaryReader_t52 * L_8 = (BinaryReader_t52 *)il2cpp_codegen_object_new (BinaryReader_t52_il2cpp_TypeInfo_var);
		BinaryReader__ctor_m427(L_8, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		BinaryReader_t52 * L_9 = V_0;
		BinaryFormatter_ReadBinaryHeader_m23100(__this, L_9, (&V_1), /*hidden argument*/NULL);
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
		HeaderHandler_t5400 * L_16 = ___handler;
		Object_t * L_17 = MessageFormatter_ReadMethodCall_m23192(NULL /*static, unused*/, L_13, L_14, L_15, L_16, __this, /*hidden argument*/NULL);
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
		HeaderHandler_t5400 * L_22 = ___handler;
		Object_t * L_23 = MessageFormatter_ReadMethodResponse_m23193(NULL /*static, unused*/, L_19, L_20, L_21, L_22, (Object_t *)NULL, __this, /*hidden argument*/NULL);
		return L_23;
	}

IL_0062:
	{
		ObjectReader_t5229 * L_24 = (ObjectReader_t5229 *)il2cpp_codegen_object_new (ObjectReader_t5229_il2cpp_TypeInfo_var);
		ObjectReader__ctor_m23118(L_24, __this, /*hidden argument*/NULL);
		V_3 = L_24;
		ObjectReader_t5229 * L_25 = V_3;
		uint8_t L_26 = V_2;
		BinaryReader_t52 * L_27 = V_0;
		bool L_28 = V_1;
		NullCheck(L_25);
		ObjectReader_ReadObjectGraph_m23120(L_25, L_26, L_27, L_28, (&V_4), (&V_5), /*hidden argument*/NULL);
		HeaderHandler_t5400 * L_29 = ___handler;
		if (!L_29)
		{
			goto IL_0082;
		}
	}
	{
		HeaderHandler_t5400 * L_30 = ___handler;
		HeaderU5BU5D_t5399* L_31 = V_5;
		NullCheck(L_30);
		VirtFuncInvoker1< Object_t *, HeaderU5BU5D_t5399* >::Invoke(12 /* System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[]) */, L_30, L_31);
	}

IL_0082:
	{
		Object_t * L_32 = V_4;
		return L_32;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
extern "C" void BinaryFormatter_Serialize_m23097 (BinaryFormatter_t5131 * __this, Stream_t51 * ___serializationStream, Object_t * ___graph, const MethodInfo* method)
{
	{
		Stream_t51 * L_0 = ___serializationStream;
		Object_t * L_1 = ___graph;
		VirtActionInvoker3< Stream_t51 *, Object_t *, HeaderU5BU5D_t5399* >::Invoke(9 /* System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[]) */, __this, L_0, L_1, (HeaderU5BU5D_t5399*)(HeaderU5BU5D_t5399*)NULL);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object,System.Runtime.Remoting.Messaging.Header[])
extern TypeInfo* ArgumentNullException_t795_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryWriter_t50_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodCallMessage_t5439_il2cpp_TypeInfo_var;
extern TypeInfo* IMethodReturnMessage_t5438_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectWriter_t5235_il2cpp_TypeInfo_var;
extern "C" void BinaryFormatter_Serialize_m23098 (BinaryFormatter_t5131 * __this, Stream_t51 * ___serializationStream, Object_t * ___graph, HeaderU5BU5D_t5399* ___headers, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t795_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(413);
		BinaryWriter_t50_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(30);
		IMethodCallMessage_t5439_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9231);
		IMethodReturnMessage_t5438_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9201);
		ObjectWriter_t5235_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9232);
		s_Il2CppMethodIntialized = true;
	}
	BinaryWriter_t50 * V_0 = {0};
	ObjectWriter_t5235 * V_1 = {0};
	{
		Stream_t51 * L_0 = ___serializationStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t795 * L_1 = (ArgumentNullException_t795 *)il2cpp_codegen_object_new (ArgumentNullException_t795_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m4280(L_1, (String_t*) &_stringLiteral5994, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Stream_t51 * L_2 = ___serializationStream;
		BinaryWriter_t50 * L_3 = (BinaryWriter_t50 *)il2cpp_codegen_object_new (BinaryWriter_t50_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m420(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		BinaryWriter_t50 * L_4 = V_0;
		HeaderU5BU5D_t5399* L_5 = ___headers;
		BinaryFormatter_WriteBinaryHeader_m23099(__this, L_4, ((((int32_t)((((Object_t*)(HeaderU5BU5D_t5399*)L_5) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		Object_t * L_6 = ___graph;
		if (!((Object_t *)IsInst(L_6, IMethodCallMessage_t5439_il2cpp_TypeInfo_var)))
		{
			goto IL_004d;
		}
	}
	{
		BinaryWriter_t50 * L_7 = V_0;
		Object_t * L_8 = ___graph;
		HeaderU5BU5D_t5399* L_9 = ___headers;
		Object_t * L_10 = (__this->___surrogate_selector_3);
		StreamingContext_t2948  L_11 = (__this->___context_2);
		int32_t L_12 = (__this->___assembly_format_0);
		int32_t L_13 = (__this->___type_format_4);
		MessageFormatter_WriteMethodCall_m23190(NULL /*static, unused*/, L_7, L_8, L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_004d:
	{
		Object_t * L_14 = ___graph;
		if (!((Object_t *)IsInst(L_14, IMethodReturnMessage_t5438_il2cpp_TypeInfo_var)))
		{
			goto IL_0077;
		}
	}
	{
		BinaryWriter_t50 * L_15 = V_0;
		Object_t * L_16 = ___graph;
		HeaderU5BU5D_t5399* L_17 = ___headers;
		Object_t * L_18 = (__this->___surrogate_selector_3);
		StreamingContext_t2948  L_19 = (__this->___context_2);
		int32_t L_20 = (__this->___assembly_format_0);
		int32_t L_21 = (__this->___type_format_4);
		MessageFormatter_WriteMethodResponse_m23191(NULL /*static, unused*/, L_15, L_16, L_17, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
		goto IL_009e;
	}

IL_0077:
	{
		Object_t * L_22 = (__this->___surrogate_selector_3);
		StreamingContext_t2948  L_23 = (__this->___context_2);
		int32_t L_24 = (__this->___assembly_format_0);
		int32_t L_25 = (__this->___type_format_4);
		ObjectWriter_t5235 * L_26 = (ObjectWriter_t5235 *)il2cpp_codegen_object_new (ObjectWriter_t5235_il2cpp_TypeInfo_var);
		ObjectWriter__ctor_m23160(L_26, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		ObjectWriter_t5235 * L_27 = V_1;
		BinaryWriter_t50 * L_28 = V_0;
		Object_t * L_29 = ___graph;
		HeaderU5BU5D_t5399* L_30 = ___headers;
		NullCheck(L_27);
		ObjectWriter_WriteObjectGraph_m23162(L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
	}

IL_009e:
	{
		BinaryWriter_t50 * L_31 = V_0;
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryWriter::Flush() */, L_31);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::WriteBinaryHeader(System.IO.BinaryWriter,System.Boolean)
extern "C" void BinaryFormatter_WriteBinaryHeader_m23099 (BinaryFormatter_t5131 * __this, BinaryWriter_t50 * ___writer, bool ___hasHeaders, const MethodInfo* method)
{
	{
		BinaryWriter_t50 * L_0 = ___writer;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(8 /* System.Void System.IO.BinaryWriter::Write(System.Byte) */, L_0, 0);
		BinaryWriter_t50 * L_1 = ___writer;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_1, 1);
		bool L_2 = ___hasHeaders;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		BinaryWriter_t50 * L_3 = ___writer;
		NullCheck(L_3);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, 2);
		goto IL_0021;
	}

IL_001a:
	{
		BinaryWriter_t50 * L_4 = ___writer;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_4, (-1));
	}

IL_0021:
	{
		BinaryWriter_t50 * L_5 = ___writer;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_5, 1);
		BinaryWriter_t50 * L_6 = ___writer;
		NullCheck(L_6);
		VirtActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, 0);
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::ReadBinaryHeader(System.IO.BinaryReader,System.Boolean&)
extern "C" void BinaryFormatter_ReadBinaryHeader_m23100 (BinaryFormatter_t5131 * __this, BinaryReader_t52 * ___reader, bool* ___hasHeaders, const MethodInfo* method)
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
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$20
#include "mscorlib_U3CPrivateImplementationDetailsU3E_U24ArrayTypeU242_0.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"


// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern const Il2CppType* Boolean_t59_0_0_0_var;
extern const Il2CppType* Byte_t766_0_0_0_var;
extern const Il2CppType* Char_t60_0_0_0_var;
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern const Il2CppType* DateTime_t287_0_0_0_var;
extern const Il2CppType* Decimal_t770_0_0_0_var;
extern const Il2CppType* Double_t90_0_0_0_var;
extern const Il2CppType* Int16_t767_0_0_0_var;
extern const Il2CppType* Int32_t82_0_0_0_var;
extern const Il2CppType* Int64_t89_0_0_0_var;
extern const Il2CppType* SByte_t88_0_0_0_var;
extern const Il2CppType* Single_t87_0_0_0_var;
extern const Il2CppType* UInt16_t768_0_0_0_var;
extern const Il2CppType* UInt32_t765_0_0_0_var;
extern const Il2CppType* UInt64_t769_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern TypeInfo* ByteU5BU5D_t66_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t5220_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1231_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t5426____U24U24fieldU2D37_27_FieldInfo_var;
extern "C" void BinaryCommon__cctor_m23101 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t59_0_0_0_var = il2cpp_codegen_type_from_index(24);
		Byte_t766_0_0_0_var = il2cpp_codegen_type_from_index(255);
		Char_t60_0_0_0_var = il2cpp_codegen_type_from_index(27);
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2532);
		DateTime_t287_0_0_0_var = il2cpp_codegen_type_from_index(311);
		Decimal_t770_0_0_0_var = il2cpp_codegen_type_from_index(275);
		Double_t90_0_0_0_var = il2cpp_codegen_type_from_index(78);
		Int16_t767_0_0_0_var = il2cpp_codegen_type_from_index(272);
		Int32_t82_0_0_0_var = il2cpp_codegen_type_from_index(75);
		Int64_t89_0_0_0_var = il2cpp_codegen_type_from_index(77);
		SByte_t88_0_0_0_var = il2cpp_codegen_type_from_index(271);
		Single_t87_0_0_0_var = il2cpp_codegen_type_from_index(66);
		UInt16_t768_0_0_0_var = il2cpp_codegen_type_from_index(273);
		UInt32_t765_0_0_0_var = il2cpp_codegen_type_from_index(270);
		UInt64_t769_0_0_0_var = il2cpp_codegen_type_from_index(274);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(14);
		ByteU5BU5D_t66_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(254);
		BinaryCommon_t5220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9233);
		TypeU5BU5D_t1231_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2749);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		U3CPrivateImplementationDetailsU3E_t5426____U24U24fieldU2D37_27_FieldInfo_var = il2cpp_codegen_field_info_from_index(8872, 27);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		ByteU5BU5D_t66* L_0 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)17)));
		RuntimeHelpers_InitializeArray_m11530(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t5426____U24U24fieldU2D37_27_FieldInfo_var), /*hidden argument*/NULL);
		((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->___BinaryHeader_0 = L_0;
		((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = 0;
		((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1 = ((TypeU5BU5D_t1231*)SZArrayNew(TypeU5BU5D_t1231_il2cpp_TypeInfo_var, ((int32_t)19)));
		TypeU5BU5D_t1231* L_1 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Boolean_t59_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_2);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_1, 1)) = (Type_t *)L_2;
		TypeU5BU5D_t1231* L_3 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_4 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Byte_t766_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 2);
		ArrayElementTypeCheck (L_3, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, 2)) = (Type_t *)L_4;
		TypeU5BU5D_t1231* L_5 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_6 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Char_t60_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_5, 3)) = (Type_t *)L_6;
		TypeU5BU5D_t1231* L_7 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_8 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)12));
		ArrayElementTypeCheck (L_7, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_7, ((int32_t)12))) = (Type_t *)L_8;
		TypeU5BU5D_t1231* L_9 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_10 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(DateTime_t287_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)13));
		ArrayElementTypeCheck (L_9, L_10);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, ((int32_t)13))) = (Type_t *)L_10;
		TypeU5BU5D_t1231* L_11 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_12 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Decimal_t770_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 5);
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 5)) = (Type_t *)L_12;
		TypeU5BU5D_t1231* L_13 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_14 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Double_t90_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 6);
		ArrayElementTypeCheck (L_13, L_14);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_13, 6)) = (Type_t *)L_14;
		TypeU5BU5D_t1231* L_15 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_16 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int16_t767_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 7);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 7)) = (Type_t *)L_16;
		TypeU5BU5D_t1231* L_17 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_18 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int32_t82_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 8);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 8)) = (Type_t *)L_18;
		TypeU5BU5D_t1231* L_19 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_20 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Int64_t89_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)9));
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, ((int32_t)9))) = (Type_t *)L_20;
		TypeU5BU5D_t1231* L_21 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_22 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(SByte_t88_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)10));
		ArrayElementTypeCheck (L_21, L_22);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_21, ((int32_t)10))) = (Type_t *)L_22;
		TypeU5BU5D_t1231* L_23 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_24 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Single_t87_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, ((int32_t)11));
		ArrayElementTypeCheck (L_23, L_24);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_23, ((int32_t)11))) = (Type_t *)L_24;
		TypeU5BU5D_t1231* L_25 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_26 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt16_t768_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, ((int32_t)14));
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, ((int32_t)14))) = (Type_t *)L_26;
		TypeU5BU5D_t1231* L_27 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_28 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt32_t765_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, ((int32_t)15));
		ArrayElementTypeCheck (L_27, L_28);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_27, ((int32_t)15))) = (Type_t *)L_28;
		TypeU5BU5D_t1231* L_29 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_30 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(UInt64_t769_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, ((int32_t)16));
		ArrayElementTypeCheck (L_29, L_30);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_29, ((int32_t)16))) = (Type_t *)L_30;
		TypeU5BU5D_t1231* L_31 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, ((int32_t)17));
		ArrayElementTypeCheck (L_31, NULL);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_31, ((int32_t)17))) = (Type_t *)NULL;
		TypeU5BU5D_t1231* L_32 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		Type_t * L_33 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, ((int32_t)18));
		ArrayElementTypeCheck (L_32, L_33);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_32, ((int32_t)18))) = (Type_t *)L_33;
		((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2 = ((ByteU5BU5D_t66*)SZArrayNew(ByteU5BU5D_t66_il2cpp_TypeInfo_var, ((int32_t)30)));
		ByteU5BU5D_t66* L_34 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_34, 3)) = (uint8_t)1;
		ByteU5BU5D_t66* L_35 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 6);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_35, 6)) = (uint8_t)2;
		ByteU5BU5D_t66* L_36 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 4);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_36, 4)) = (uint8_t)3;
		ByteU5BU5D_t66* L_37 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, ((int32_t)16));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_37, ((int32_t)16))) = (uint8_t)((int32_t)13);
		ByteU5BU5D_t66* L_38 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, ((int32_t)15));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_38, ((int32_t)15))) = (uint8_t)5;
		ByteU5BU5D_t66* L_39 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)14));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_39, ((int32_t)14))) = (uint8_t)6;
		ByteU5BU5D_t66* L_40 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, 7)) = (uint8_t)7;
		ByteU5BU5D_t66* L_41 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, ((int32_t)9));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_41, ((int32_t)9))) = (uint8_t)8;
		ByteU5BU5D_t66* L_42 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_42, ((int32_t)11))) = (uint8_t)((int32_t)9);
		ByteU5BU5D_t66* L_43 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 5);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_43, 5)) = (uint8_t)((int32_t)10);
		ByteU5BU5D_t66* L_44 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_44);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_44, ((int32_t)13));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_44, ((int32_t)13))) = (uint8_t)((int32_t)11);
		ByteU5BU5D_t66* L_45 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_45, 8)) = (uint8_t)((int32_t)14);
		ByteU5BU5D_t66* L_46 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)10));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_46, ((int32_t)10))) = (uint8_t)((int32_t)15);
		ByteU5BU5D_t66* L_47 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, ((int32_t)12));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_47, ((int32_t)12))) = (uint8_t)((int32_t)16);
		ByteU5BU5D_t66* L_48 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, ((int32_t)18));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_48, ((int32_t)18))) = (uint8_t)((int32_t)18);
		String_t* L_49 = Environment_GetEnvironmentVariable_m11604(NULL /*static, unused*/, (String_t*) &_stringLiteral5996, /*hidden argument*/NULL);
		V_0 = L_49;
		String_t* L_50 = V_0;
		if (L_50)
		{
			goto IL_01f4;
		}
	}
	{
		V_0 = (String_t*) &_stringLiteral2785;
	}

IL_01f4:
	{
		String_t* L_51 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_52 = String_op_Inequality_m415(NULL /*static, unused*/, L_51, (String_t*) &_stringLiteral2785, /*hidden argument*/NULL);
		((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->___UseReflectionSerialization_3 = L_52;
		return;
	}
}
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern const Il2CppType* IntPtr_t_0_0_0_var;
extern const Il2CppType* DateTime_t287_0_0_0_var;
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern const Il2CppType* Decimal_t770_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" bool BinaryCommon_IsPrimitive_m23102 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IntPtr_t_0_0_0_var = il2cpp_codegen_type_from_index(76);
		DateTime_t287_0_0_0_var = il2cpp_codegen_type_from_index(311);
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2532);
		Decimal_t770_0_0_0_var = il2cpp_codegen_type_from_index(275);
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
		Type_t * L_3 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(IntPtr_t_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_2) == ((Object_t*)(Type_t *)L_3))))
		{
			goto IL_003e;
		}
	}

IL_0015:
	{
		Type_t * L_4 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(DateTime_t287_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_4) == ((Object_t*)(Type_t *)L_5)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_6 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_8 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(Decimal_t770_0_0_0_var), /*hidden argument*/NULL);
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
// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeCode(System.Type)
extern const Il2CppType* TimeSpan_t334_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* BinaryCommon_t5220_il2cpp_TypeInfo_var;
extern "C" uint8_t BinaryCommon_GetTypeCode_m23103 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TimeSpan_t334_0_0_0_var = il2cpp_codegen_type_from_index(2532);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(410);
		BinaryCommon_t5220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9233);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m4274(NULL /*static, unused*/, LoadTypeToken(TimeSpan_t334_0_0_0_var), /*hidden argument*/NULL);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0010;
		}
	}
	{
		return ((int32_t)12);
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t5220_il2cpp_TypeInfo_var);
		ByteU5BU5D_t66* L_2 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodeMap_2;
		Type_t * L_3 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_4 = Type_GetTypeCode_m12160(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5));
	}
}
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern TypeInfo* BinaryCommon_t5220_il2cpp_TypeInfo_var;
extern "C" Type_t * BinaryCommon_GetTypeFromCode_m23104 (Object_t * __this /* static, unused */, int32_t ___code, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		BinaryCommon_t5220_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9233);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BinaryCommon_t5220_il2cpp_TypeInfo_var);
		TypeU5BU5D_t1231* L_0 = ((BinaryCommon_t5220_StaticFields*)BinaryCommon_t5220_il2cpp_TypeInfo_var->static_fields)->____typeCodesToType_1;
		int32_t L_1 = ___code;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		return (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2));
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::CheckSerializable(System.Type,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern TypeInfo* ISurrogateSelector_t5183_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* SerializationException_t4568_il2cpp_TypeInfo_var;
extern "C" void BinaryCommon_CheckSerializable_m23105 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___selector, StreamingContext_t2948  ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ISurrogateSelector_t5183_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9206);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		SerializationException_t4568_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7675);
		s_Il2CppMethodIntialized = true;
	}
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(32 /* System.Boolean System.Type::get_IsSerializable() */, L_0);
		if (L_1)
		{
			goto IL_0036;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Type::get_IsInterface() */, L_2);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		Object_t * L_4 = ___selector;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		Object_t * L_5 = ___selector;
		Type_t * L_6 = ___type;
		StreamingContext_t2948  L_7 = ___context;
		NullCheck(L_5);
		Object_t * L_8 = (Object_t *)InterfaceFuncInvoker3< Object_t *, Type_t *, StreamingContext_t2948 , Object_t ** >::Invoke(0 /* System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&) */, ISurrogateSelector_t5183_il2cpp_TypeInfo_var, L_5, L_6, L_7, (&___selector));
		if (!L_8)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		Type_t * L_9 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m4089(NULL /*static, unused*/, (String_t*) &_stringLiteral5997, L_9, (String_t*) &_stringLiteral5998, /*hidden argument*/NULL);
		SerializationException_t4568 * L_11 = (SerializationException_t4568 *)il2cpp_codegen_object_new (SerializationException_t4568_il2cpp_TypeInfo_var);
		SerializationException__ctor_m18091(L_11, L_10, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0036:
	{
		return;
	}
}
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C" void BinaryCommon_SwapBytes_m23106 (Object_t * __this /* static, unused */, ByteU5BU5D_t66* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method)
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
#ifndef _MSC_VER
#else
#endif
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_1MethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
