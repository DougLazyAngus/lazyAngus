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
#include "System_Core_U3CModuleU3E.h"
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
#include "System_Core_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
#ifndef _MSC_VER
#else
#endif
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"


// System.Void System.Runtime.CompilerServices.ExtensionAttribute::.ctor()
extern "C" void ExtensionAttribute__ctor_m3144 (ExtensionAttribute_t639 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2892(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Linq.Check
#include "System_Core_System_Linq_Check.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Check
#include "System_Core_System_Linq_CheckMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"


// System.Void System.Linq.Check::Source(System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Check_Source_m9241 (Object_t * __this /* static, unused */, Object_t * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*) &_stringLiteral482, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		return;
	}
}
// System.Void System.Linq.Check::SourceAndPredicate(System.Object,System.Object)
extern TypeInfo* ArgumentNullException_t608_il2cpp_TypeInfo_var;
extern "C" void Check_SourceAndPredicate_m9242 (Object_t * __this /* static, unused */, Object_t * ___source, Object_t * ___predicate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t608_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(298);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___source;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t608 * L_1 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_1, (String_t*) &_stringLiteral482, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0011:
	{
		Object_t * L_2 = ___predicate;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t608 * L_3 = (ArgumentNullException_t608 *)il2cpp_codegen_object_new (ArgumentNullException_t608_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2895(L_3, (String_t*) &_stringLiteral1901, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		return;
	}
}
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_Fallback.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable/Fallback
#include "System_Core_System_Linq_Enumerable_FallbackMethodDeclarations.h"



// System.Linq.Enumerable
#include "System_Core_System_Linq_Enumerable.h"
#ifndef _MSC_VER
#else
#endif
// System.Linq.Enumerable
#include "System_Core_System_Linq_EnumerableMethodDeclarations.h"



// System.Action
#include "System_Core_System_Action.h"
#ifndef _MSC_VER
#else
#endif
// System.Action
#include "System_Core_System_ActionMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" void Action__ctor_m2702 (Action_t207 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Action::Invoke()
extern "C" void Action_Invoke_m9243 (Action_t207 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Action_Invoke_m9243((Action_t207 *)__this->___prev_9, method);
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
extern "C" void pinvoke_delegate_wrapper_Action_t207(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult System.Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Action_BeginInvoke_m9244 (Action_t207 * __this, AsyncCallback_t387 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Action::EndInvoke(System.IAsyncResult)
extern "C" void Action_EndInvoke_m9245 (Action_t207 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
